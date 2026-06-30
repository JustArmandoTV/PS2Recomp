#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D4620
// Address: 0x1d4620 - 0x1d46e0
void sub_001D4620_0x1d4620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D4620_0x1d4620");
#endif

    switch (ctx->pc) {
        case 0x1d4658u: goto label_1d4658;
        case 0x1d466cu: goto label_1d466c;
        case 0x1d467cu: goto label_1d467c;
        case 0x1d4690u: goto label_1d4690;
        case 0x1d46b0u: goto label_1d46b0;
        default: break;
    }

    ctx->pc = 0x1d4620u;

    // 0x1d4620: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1d4620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1d4624: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1d4624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1d4628: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1d4628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1d462c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d462cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d4630: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1d4630u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4634: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d4634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d4638: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1d4638u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d463c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d463cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d4640: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1d4640u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4644: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d4644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d4648: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d4648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d464c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1d464cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4650: 0xc074ea0  jal         func_1D3A80
    ctx->pc = 0x1D4650u;
    SET_GPR_U32(ctx, 31, 0x1D4658u);
    ctx->pc = 0x1D4654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4650u;
            // 0x1d4654: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3A80u;
    if (runtime->hasFunction(0x1D3A80u)) {
        auto targetFn = runtime->lookupFunction(0x1D3A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4658u; }
        if (ctx->pc != 0x1D4658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3A80_0x1d3a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4658u; }
        if (ctx->pc != 0x1D4658u) { return; }
    }
    ctx->pc = 0x1D4658u;
label_1d4658:
    // 0x1d4658: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1d4658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x1d465c: 0x8c517378  lw          $s1, 0x7378($v0)
    ctx->pc = 0x1d465cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
    // 0x1d4660: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1d4660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d4664: 0xc054508  jal         func_151420
    ctx->pc = 0x1D4664u;
    SET_GPR_U32(ctx, 31, 0x1D466Cu);
    ctx->pc = 0x1D4668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4664u;
            // 0x1d4668: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151420u;
    if (runtime->hasFunction(0x151420u)) {
        auto targetFn = runtime->lookupFunction(0x151420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D466Cu; }
        if (ctx->pc != 0x1D466Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00151420_0x151420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D466Cu; }
        if (ctx->pc != 0x1D466Cu) { return; }
    }
    ctx->pc = 0x1D466Cu;
label_1d466c:
    // 0x1d466c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d466cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4670: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d4670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4674: 0xc0fe5bc  jal         func_3F96F0
    ctx->pc = 0x1D4674u;
    SET_GPR_U32(ctx, 31, 0x1D467Cu);
    ctx->pc = 0x1D4678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4674u;
            // 0x1d4678: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F96F0u;
    if (runtime->hasFunction(0x3F96F0u)) {
        auto targetFn = runtime->lookupFunction(0x3F96F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D467Cu; }
        if (ctx->pc != 0x1D467Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F96F0_0x3f96f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D467Cu; }
        if (ctx->pc != 0x1D467Cu) { return; }
    }
    ctx->pc = 0x1D467Cu;
label_1d467c:
    // 0x1d467c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1d467cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x1d4680: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x1d4680u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d4684: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x1d4684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1d4688: 0xc054590  jal         func_151640
    ctx->pc = 0x1D4688u;
    SET_GPR_U32(ctx, 31, 0x1D4690u);
    ctx->pc = 0x1D468Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4688u;
            // 0x1d468c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151640u;
    if (runtime->hasFunction(0x151640u)) {
        auto targetFn = runtime->lookupFunction(0x151640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4690u; }
        if (ctx->pc != 0x1D4690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00151640_0x151640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4690u; }
        if (ctx->pc != 0x1D4690u) { return; }
    }
    ctx->pc = 0x1D4690u;
label_1d4690:
    // 0x1d4690: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1d4690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x1d4694: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x1d4694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1d4698: 0x8c447378  lw          $a0, 0x7378($v0)
    ctx->pc = 0x1d4698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
    // 0x1d469c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x1d469cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
    // 0x1d46a0: 0x8c46b6b0  lw          $a2, -0x4950($v0)
    ctx->pc = 0x1d46a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948528)));
    // 0x1d46a4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1d46a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1d46a8: 0xc0fe5bc  jal         func_3F96F0
    ctx->pc = 0x1D46A8u;
    SET_GPR_U32(ctx, 31, 0x1D46B0u);
    ctx->pc = 0x1D46ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D46A8u;
            // 0x1d46ac: 0x22880  sll         $a1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F96F0u;
    if (runtime->hasFunction(0x3F96F0u)) {
        auto targetFn = runtime->lookupFunction(0x3F96F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D46B0u; }
        if (ctx->pc != 0x1D46B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F96F0_0x3f96f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D46B0u; }
        if (ctx->pc != 0x1D46B0u) { return; }
    }
    ctx->pc = 0x1D46B0u;
label_1d46b0:
    // 0x1d46b0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1d46b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1d46b4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1d46b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d46b8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d46b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d46bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d46bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d46c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d46c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d46c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d46c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d46c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d46c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d46cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D46CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D46D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D46CCu;
            // 0x1d46d0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D46D4u;
    // 0x1d46d4: 0x0  nop
    ctx->pc = 0x1d46d4u;
    // NOP
    // 0x1d46d8: 0x0  nop
    ctx->pc = 0x1d46d8u;
    // NOP
    // 0x1d46dc: 0x0  nop
    ctx->pc = 0x1d46dcu;
    // NOP
}
