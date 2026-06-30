#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0036A6E0
// Address: 0x36a6e0 - 0x36a800
void sub_0036A6E0_0x36a6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A6E0_0x36a6e0");
#endif

    switch (ctx->pc) {
        case 0x36a6fcu: goto label_36a6fc;
        case 0x36a708u: goto label_36a708;
        case 0x36a77cu: goto label_36a77c;
        case 0x36a7a4u: goto label_36a7a4;
        case 0x36a7b4u: goto label_36a7b4;
        default: break;
    }

    ctx->pc = 0x36a6e0u;

    // 0x36a6e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x36a6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36a6e4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x36a6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x36a6e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x36a6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x36a6ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x36a6ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a6f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36a6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x36a6f4: 0x24634080  addiu       $v1, $v1, 0x4080
    ctx->pc = 0x36a6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16512));
    // 0x36a6f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36a6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_36a6fc:
    // 0x36a6fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36a6fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a700: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x36a700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a704: 0x0  nop
    ctx->pc = 0x36a704u;
    // NOP
label_36a708:
    // 0x36a708: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x36a708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x36a70c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x36a70cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x36a710: 0x2ca20006  sltiu       $v0, $a1, 0x6
    ctx->pc = 0x36a710u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x36a714: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x36a714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x36a718: 0x0  nop
    ctx->pc = 0x36a718u;
    // NOP
    // 0x36a71c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36A71Cu;
    {
        const bool branch_taken_0x36a71c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36a71c) {
            ctx->pc = 0x36A708u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_36a708;
        }
    }
    ctx->pc = 0x36A724u;
    // 0x36a724: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x36a724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x36a728: 0x2cc20040  sltiu       $v0, $a2, 0x40
    ctx->pc = 0x36a728u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x36a72c: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x36A72Cu;
    {
        const bool branch_taken_0x36a72c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36A730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36A72Cu;
            // 0x36a730: 0x24630018  addiu       $v1, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a72c) {
            ctx->pc = 0x36A6FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_36a6fc;
        }
    }
    ctx->pc = 0x36A734u;
    // 0x36a734: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x36a734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x36a738: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x36a738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x36a73c: 0xac4318c0  sw          $v1, 0x18C0($v0)
    ctx->pc = 0x36a73cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6336), GPR_U32(ctx, 3));
    // 0x36a740: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x36a740u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
    // 0x36a744: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x36a744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x36a748: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x36a748u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x36a74c: 0xac4318c8  sw          $v1, 0x18C8($v0)
    ctx->pc = 0x36a74cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6344), GPR_U32(ctx, 3));
    // 0x36a750: 0x24a54040  addiu       $a1, $a1, 0x4040
    ctx->pc = 0x36a750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16448));
    // 0x36a754: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x36a754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x36a758: 0x24844680  addiu       $a0, $a0, 0x4680
    ctx->pc = 0x36a758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18048));
    // 0x36a75c: 0xac404028  sw          $zero, 0x4028($v0)
    ctx->pc = 0x36a75cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16424), GPR_U32(ctx, 0));
    // 0x36a760: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x36a760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x36a764: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x36a764u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x36a768: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x36a768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x36a76c: 0xac4318d0  sw          $v1, 0x18D0($v0)
    ctx->pc = 0x36a76cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6352), GPR_U32(ctx, 3));
    // 0x36a770: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x36a770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x36a774: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x36a774u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a778: 0xac404030  sw          $zero, 0x4030($v0)
    ctx->pc = 0x36a778u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16432), GPR_U32(ctx, 0));
label_36a77c:
    // 0x36a77c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x36a77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x36a780: 0xa4a00000  sh          $zero, 0x0($a1)
    ctx->pc = 0x36a780u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x36a784: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x36a784u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x36a788: 0x2c620020  sltiu       $v0, $v1, 0x20
    ctx->pc = 0x36a788u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x36a78c: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x36a78cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x36a790: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36A790u;
    {
        const bool branch_taken_0x36a790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36A794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36A790u;
            // 0x36a794: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a790) {
            ctx->pc = 0x36A77Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_36a77c;
        }
    }
    ctx->pc = 0x36A798u;
    // 0x36a798: 0x3c1100af  lui         $s1, 0xAF
    ctx->pc = 0x36a798u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)175 << 16));
    // 0x36a79c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x36a79cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a7a0: 0x26314710  addiu       $s1, $s1, 0x4710
    ctx->pc = 0x36a7a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 18192));
label_36a7a4:
    // 0x36a7a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36a7a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a7a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36a7a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a7ac: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x36A7ACu;
    SET_GPR_U32(ctx, 31, 0x36A7B4u);
    ctx->pc = 0x36A7B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36A7ACu;
            // 0x36a7b0: 0x24060034  addiu       $a2, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36A7B4u; }
        if (ctx->pc != 0x36A7B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36A7B4u; }
        if (ctx->pc != 0x36A7B4u) { return; }
    }
    ctx->pc = 0x36A7B4u;
label_36a7b4:
    // 0x36a7b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x36a7b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x36a7b8: 0x2e030040  sltiu       $v1, $s0, 0x40
    ctx->pc = 0x36a7b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x36a7bc: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x36A7BCu;
    {
        const bool branch_taken_0x36a7bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36A7C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36A7BCu;
            // 0x36a7c0: 0x26310034  addiu       $s1, $s1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a7bc) {
            ctx->pc = 0x36A7A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_36a7a4;
        }
    }
    ctx->pc = 0x36A7C4u;
    // 0x36a7c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x36a7c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36a7c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36a7c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36a7cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36a7ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36a7d0: 0x3e00008  jr          $ra
    ctx->pc = 0x36A7D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A7D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36A7D0u;
            // 0x36a7d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36A7D8u;
    // 0x36a7d8: 0x0  nop
    ctx->pc = 0x36a7d8u;
    // NOP
    // 0x36a7dc: 0x0  nop
    ctx->pc = 0x36a7dcu;
    // NOP
    // 0x36a7e0: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x36a7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x36a7e4: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x36a7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x36a7e8: 0x24844710  addiu       $a0, $a0, 0x4710
    ctx->pc = 0x36a7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18192));
    // 0x36a7ec: 0x24a54110  addiu       $a1, $a1, 0x4110
    ctx->pc = 0x36a7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16656));
    // 0x36a7f0: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x36a7f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x36a7f4: 0x80407e8  j           func_101FA0
    ctx->pc = 0x36A7F4u;
    ctx->pc = 0x36A7F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36A7F4u;
            // 0x36a7f8: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101FA0u;
    if (runtime->hasFunction(0x101FA0u)) {
        auto targetFn = runtime->lookupFunction(0x101FA0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00101FA0_0x101fa0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x36A7FCu;
    // 0x36a7fc: 0x0  nop
    ctx->pc = 0x36a7fcu;
    // NOP
}
