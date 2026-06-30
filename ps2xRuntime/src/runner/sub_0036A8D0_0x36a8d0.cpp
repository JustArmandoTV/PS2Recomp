#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0036A8D0
// Address: 0x36a8d0 - 0x36a990
void sub_0036A8D0_0x36a8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A8D0_0x36a8d0");
#endif

    switch (ctx->pc) {
        case 0x36a914u: goto label_36a914;
        case 0x36a920u: goto label_36a920;
        case 0x36a928u: goto label_36a928;
        case 0x36a93cu: goto label_36a93c;
        case 0x36a94cu: goto label_36a94c;
        case 0x36a968u: goto label_36a968;
        default: break;
    }

    ctx->pc = 0x36a8d0u;

    // 0x36a8d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x36a8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x36a8d4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x36a8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x36a8d8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x36a8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x36a8dc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x36a8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x36a8e0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x36a8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x36a8e4: 0x24425830  addiu       $v0, $v0, 0x5830
    ctx->pc = 0x36a8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22576));
    // 0x36a8e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x36a8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x36a8ec: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x36a8ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a8f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36a8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36a8f4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x36a8f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a8f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36a8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x36a8fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36a8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36a900: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x36a900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36a904: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x36a904u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a908: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x36a908u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a90c: 0xc074ea0  jal         func_1D3A80
    ctx->pc = 0x36A90Cu;
    SET_GPR_U32(ctx, 31, 0x36A914u);
    ctx->pc = 0x36A910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36A90Cu;
            // 0x36a910: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3A80u;
    if (runtime->hasFunction(0x1D3A80u)) {
        auto targetFn = runtime->lookupFunction(0x1D3A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36A914u; }
        if (ctx->pc != 0x36A914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3A80_0x1d3a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36A914u; }
        if (ctx->pc != 0x36A914u) { return; }
    }
    ctx->pc = 0x36A914u;
label_36a914:
    // 0x36a914: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x36a914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x36a918: 0xc054508  jal         func_151420
    ctx->pc = 0x36A918u;
    SET_GPR_U32(ctx, 31, 0x36A920u);
    ctx->pc = 0x36A91Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36A918u;
            // 0x36a91c: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151420u;
    if (runtime->hasFunction(0x151420u)) {
        auto targetFn = runtime->lookupFunction(0x151420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36A920u; }
        if (ctx->pc != 0x36A920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00151420_0x151420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36A920u; }
        if (ctx->pc != 0x36A920u) { return; }
    }
    ctx->pc = 0x36A920u;
label_36a920:
    // 0x36a920: 0xc112b24  jal         func_44AC90
    ctx->pc = 0x36A920u;
    SET_GPR_U32(ctx, 31, 0x36A928u);
    ctx->pc = 0x36A924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36A920u;
            // 0x36a924: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x44AC90u;
    if (runtime->hasFunction(0x44AC90u)) {
        auto targetFn = runtime->lookupFunction(0x44AC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36A928u; }
        if (ctx->pc != 0x36A928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0044AC90_0x44ac90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36A928u; }
        if (ctx->pc != 0x36A928u) { return; }
    }
    ctx->pc = 0x36A928u;
label_36a928:
    // 0x36a928: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x36a928u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x36a92c: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x36a92cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x36a930: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x36a930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x36a934: 0xc054590  jal         func_151640
    ctx->pc = 0x36A934u;
    SET_GPR_U32(ctx, 31, 0x36A93Cu);
    ctx->pc = 0x36A938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36A934u;
            // 0x36a938: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151640u;
    if (runtime->hasFunction(0x151640u)) {
        auto targetFn = runtime->lookupFunction(0x151640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36A93Cu; }
        if (ctx->pc != 0x36A93Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00151640_0x151640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36A93Cu; }
        if (ctx->pc != 0x36A93Cu) { return; }
    }
    ctx->pc = 0x36A93Cu;
label_36a93c:
    // 0x36a93c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x36a93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x36a940: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x36a940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x36a944: 0xc112b24  jal         func_44AC90
    ctx->pc = 0x36A944u;
    SET_GPR_U32(ctx, 31, 0x36A94Cu);
    ctx->pc = 0x36A948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36A944u;
            // 0x36a948: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x44AC90u;
    if (runtime->hasFunction(0x44AC90u)) {
        auto targetFn = runtime->lookupFunction(0x44AC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36A94Cu; }
        if (ctx->pc != 0x36A94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0044AC90_0x44ac90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36A94Cu; }
        if (ctx->pc != 0x36A94Cu) { return; }
    }
    ctx->pc = 0x36A94Cu;
label_36a94c:
    // 0x36a94c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x36a94cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x36a950: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x36a950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a954: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x36a954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x36a958: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36a958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a95c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x36a95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x36a960: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x36A960u;
    SET_GPR_U32(ctx, 31, 0x36A968u);
    ctx->pc = 0x36A964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36A960u;
            // 0x36a964: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36A968u; }
        if (ctx->pc != 0x36A968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36A968u; }
        if (ctx->pc != 0x36A968u) { return; }
    }
    ctx->pc = 0x36A968u;
label_36a968:
    // 0x36a968: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x36a968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36a96c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x36a96cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36a970: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x36a970u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36a974: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36a974u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36a978: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36a978u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a97c: 0x3e00008  jr          $ra
    ctx->pc = 0x36A97Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36A97Cu;
            // 0x36a980: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36A984u;
    // 0x36a984: 0x0  nop
    ctx->pc = 0x36a984u;
    // NOP
    // 0x36a988: 0x0  nop
    ctx->pc = 0x36a988u;
    // NOP
    // 0x36a98c: 0x0  nop
    ctx->pc = 0x36a98cu;
    // NOP
}
