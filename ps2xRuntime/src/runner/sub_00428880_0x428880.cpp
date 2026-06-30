#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00428880
// Address: 0x428880 - 0x428930
void sub_00428880_0x428880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00428880_0x428880");
#endif

    switch (ctx->pc) {
        case 0x4288c0u: goto label_4288c0;
        case 0x4288e8u: goto label_4288e8;
        default: break;
    }

    ctx->pc = 0x428880u;

    // 0x428880: 0x3e00008  jr          $ra
    ctx->pc = 0x428880u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x428884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x428880u;
            // 0x428884: 0x8c820160  lw          $v0, 0x160($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x428888u;
    // 0x428888: 0x0  nop
    ctx->pc = 0x428888u;
    // NOP
    // 0x42888c: 0x0  nop
    ctx->pc = 0x42888cu;
    // NOP
    // 0x428890: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x428890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x428894: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x428894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x428898: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x428898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x42889c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x42889cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4288a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4288a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4288a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4288a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4288a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4288a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4288ac: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x4288acu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x4288b0: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x4288B0u;
    {
        const bool branch_taken_0x4288b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4288B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4288B0u;
            // 0x4288b4: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4288b0) {
            ctx->pc = 0x428908u;
            goto label_428908;
        }
    }
    ctx->pc = 0x4288B8u;
    // 0x4288b8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4288b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4288bc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4288bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4288c0:
    // 0x4288c0: 0x8e830074  lw          $v1, 0x74($s4)
    ctx->pc = 0x4288c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
    // 0x4288c4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4288c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4288c8: 0x8c420c78  lw          $v0, 0xC78($v0)
    ctx->pc = 0x4288c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
    // 0x4288cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4288ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4288d0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x4288d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4288d4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x4288d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x4288d8: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x4288d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4288dc: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x4288dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4288e0: 0xc0b89e4  jal         func_2E2790
    ctx->pc = 0x4288E0u;
    SET_GPR_U32(ctx, 31, 0x4288E8u);
    ctx->pc = 0x4288E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4288E0u;
            // 0x4288e4: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2790u;
    if (runtime->hasFunction(0x2E2790u)) {
        auto targetFn = runtime->lookupFunction(0x2E2790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4288E8u; }
        if (ctx->pc != 0x4288E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E2790_0x2e2790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4288E8u; }
        if (ctx->pc != 0x4288E8u) { return; }
    }
    ctx->pc = 0x4288E8u;
label_4288e8:
    // 0x4288e8: 0xae000160  sw          $zero, 0x160($s0)
    ctx->pc = 0x4288e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 0));
    // 0x4288ec: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4288ecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x4288f0: 0xae00016c  sw          $zero, 0x16C($s0)
    ctx->pc = 0x4288f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 0));
    // 0x4288f4: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x4288f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x4288f8: 0xae000168  sw          $zero, 0x168($s0)
    ctx->pc = 0x4288f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 0));
    // 0x4288fc: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x4288fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x428900: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x428900u;
    {
        const bool branch_taken_0x428900 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x428904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x428900u;
            // 0x428904: 0xae000164  sw          $zero, 0x164($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x428900) {
            ctx->pc = 0x4288C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4288c0;
        }
    }
    ctx->pc = 0x428908u;
label_428908:
    // 0x428908: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x428908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x42890c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x42890cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x428910: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x428910u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x428914: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x428914u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x428918: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x428918u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x42891c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42891cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x428920: 0x3e00008  jr          $ra
    ctx->pc = 0x428920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x428924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x428920u;
            // 0x428924: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x428928u;
    // 0x428928: 0x0  nop
    ctx->pc = 0x428928u;
    // NOP
    // 0x42892c: 0x0  nop
    ctx->pc = 0x42892cu;
    // NOP
}
