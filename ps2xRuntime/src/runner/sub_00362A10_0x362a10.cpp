#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00362A10
// Address: 0x362a10 - 0x362ab0
void sub_00362A10_0x362a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00362A10_0x362a10");
#endif

    switch (ctx->pc) {
        case 0x362a44u: goto label_362a44;
        case 0x362a50u: goto label_362a50;
        case 0x362a5cu: goto label_362a5c;
        case 0x362a74u: goto label_362a74;
        case 0x362a88u: goto label_362a88;
        default: break;
    }

    ctx->pc = 0x362a10u;

    // 0x362a10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x362a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x362a14: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x362a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x362a18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x362a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x362a1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x362a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x362a20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x362a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x362a24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x362a24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362a28: 0x8c420c78  lw          $v0, 0xC78($v0)
    ctx->pc = 0x362a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
    // 0x362a2c: 0x26300134  addiu       $s0, $s1, 0x134
    ctx->pc = 0x362a2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 308));
    // 0x362a30: 0x84860114  lh          $a2, 0x114($a0)
    ctx->pc = 0x362a30u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 276)));
    // 0x362a34: 0x8e270160  lw          $a3, 0x160($s1)
    ctx->pc = 0x362a34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x362a38: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x362a38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x362a3c: 0xc0b89e4  jal         func_2E2790
    ctx->pc = 0x362A3Cu;
    SET_GPR_U32(ctx, 31, 0x362A44u);
    ctx->pc = 0x362A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x362A3Cu;
            // 0x362a40: 0x262400c0  addiu       $a0, $s1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2790u;
    if (runtime->hasFunction(0x2E2790u)) {
        auto targetFn = runtime->lookupFunction(0x2E2790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362A44u; }
        if (ctx->pc != 0x362A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E2790_0x2e2790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362A44u; }
        if (ctx->pc != 0x362A44u) { return; }
    }
    ctx->pc = 0x362A44u;
label_362a44:
    // 0x362a44: 0x26240070  addiu       $a0, $s1, 0x70
    ctx->pc = 0x362a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x362a48: 0xc04c74c  jal         func_131D30
    ctx->pc = 0x362A48u;
    SET_GPR_U32(ctx, 31, 0x362A50u);
    ctx->pc = 0x362A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x362A48u;
            // 0x362a4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362A50u; }
        if (ctx->pc != 0x362A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362A50u; }
        if (ctx->pc != 0x362A50u) { return; }
    }
    ctx->pc = 0x362A50u;
label_362a50:
    // 0x362a50: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x362a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x362a54: 0xc04c74c  jal         func_131D30
    ctx->pc = 0x362A54u;
    SET_GPR_U32(ctx, 31, 0x362A5Cu);
    ctx->pc = 0x362A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x362A54u;
            // 0x362a58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362A5Cu; }
        if (ctx->pc != 0x362A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362A5Cu; }
        if (ctx->pc != 0x362A5Cu) { return; }
    }
    ctx->pc = 0x362A5Cu;
label_362a5c:
    // 0x362a5c: 0xae2000a0  sw          $zero, 0xA0($s1)
    ctx->pc = 0x362a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
    // 0x362a60: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x362a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x362a64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x362a64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x362a68: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x362a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x362a6c: 0xc04c74c  jal         func_131D30
    ctx->pc = 0x362A6Cu;
    SET_GPR_U32(ctx, 31, 0x362A74u);
    ctx->pc = 0x362A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x362A6Cu;
            // 0x362a70: 0xae2200a4  sw          $v0, 0xA4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362A74u; }
        if (ctx->pc != 0x362A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362A74u; }
        if (ctx->pc != 0x362A74u) { return; }
    }
    ctx->pc = 0x362A74u;
label_362a74:
    // 0x362a74: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x362a74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x362a78: 0x26240170  addiu       $a0, $s1, 0x170
    ctx->pc = 0x362a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 368));
    // 0x362a7c: 0x24a54ae0  addiu       $a1, $a1, 0x4AE0
    ctx->pc = 0x362a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19168));
    // 0x362a80: 0xc04cc04  jal         func_133010
    ctx->pc = 0x362A80u;
    SET_GPR_U32(ctx, 31, 0x362A88u);
    ctx->pc = 0x362A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x362A80u;
            // 0x362a84: 0xae20012c  sw          $zero, 0x12C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362A88u; }
        if (ctx->pc != 0x362A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362A88u; }
        if (ctx->pc != 0x362A88u) { return; }
    }
    ctx->pc = 0x362A88u;
label_362a88:
    // 0x362a88: 0xae200180  sw          $zero, 0x180($s1)
    ctx->pc = 0x362a88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 384), GPR_U32(ctx, 0));
    // 0x362a8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x362a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x362a90: 0xae230130  sw          $v1, 0x130($s1)
    ctx->pc = 0x362a90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 304), GPR_U32(ctx, 3));
    // 0x362a94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x362a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x362a98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x362a98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x362a9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x362a9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x362aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x362AA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x362AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x362AA0u;
            // 0x362aa4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x362AA8u;
    // 0x362aa8: 0x0  nop
    ctx->pc = 0x362aa8u;
    // NOP
    // 0x362aac: 0x0  nop
    ctx->pc = 0x362aacu;
    // NOP
}
