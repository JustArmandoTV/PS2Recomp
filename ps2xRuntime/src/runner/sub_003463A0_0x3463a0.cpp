#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003463A0
// Address: 0x3463a0 - 0x346470
void sub_003463A0_0x3463a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003463A0_0x3463a0");
#endif

    switch (ctx->pc) {
        case 0x3463c4u: goto label_3463c4;
        case 0x3463fcu: goto label_3463fc;
        default: break;
    }

    ctx->pc = 0x3463a0u;

    // 0x3463a0: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x3463a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3463a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3463a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3463a8: 0x50830013  beql        $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x3463A8u;
    {
        const bool branch_taken_0x3463a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3463a8) {
            ctx->pc = 0x3463ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3463A8u;
            // 0x3463ac: 0x24a60010  addiu       $a2, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3463F8u;
            goto label_3463f8;
        }
    }
    ctx->pc = 0x3463B0u;
    // 0x3463b0: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3463B0u;
    {
        const bool branch_taken_0x3463b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3463b0) {
            ctx->pc = 0x3463B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3463B0u;
            // 0x3463b4: 0x24a60010  addiu       $a2, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3463C0u;
            goto label_3463c0;
        }
    }
    ctx->pc = 0x3463B8u;
    // 0x3463b8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x3463B8u;
    {
        const bool branch_taken_0x3463b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3463b8) {
            ctx->pc = 0x346440u;
            goto label_346440;
        }
    }
    ctx->pc = 0x3463C0u;
label_3463c0:
    // 0x3463c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3463c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3463c4:
    // 0x3463c4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3463c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3463c8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3463c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3463cc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3463ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3463d0: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x3463d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x3463d4: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x3463d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3463d8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3463d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3463dc: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x3463dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x3463e0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x3463e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3463e4: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x3463e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3463e8: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x3463E8u;
    {
        const bool branch_taken_0x3463e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3463ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3463E8u;
            // 0x3463ec: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3463e8) {
            ctx->pc = 0x3463C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3463c4;
        }
    }
    ctx->pc = 0x3463F0u;
    // 0x3463f0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3463F0u;
    {
        const bool branch_taken_0x3463f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3463f0) {
            ctx->pc = 0x346440u;
            goto label_346440;
        }
    }
    ctx->pc = 0x3463F8u;
label_3463f8:
    // 0x3463f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3463f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3463fc:
    // 0x3463fc: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x3463fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x346400: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x346400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x346404: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x346404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x346408: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x346408u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x34640c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x34640cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x346410: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x346410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x346414: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x346414u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x346418: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x346418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x34641c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x34641cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x346420: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x346420u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
    // 0x346424: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x346424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x346428: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x346428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x34642c: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x34642cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
    // 0x346430: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x346430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x346434: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x346434u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x346438: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x346438u;
    {
        const bool branch_taken_0x346438 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34643Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x346438u;
            // 0x34643c: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x346438) {
            ctx->pc = 0x3463FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3463fc;
        }
    }
    ctx->pc = 0x346440u;
label_346440:
    // 0x346440: 0x3e00008  jr          $ra
    ctx->pc = 0x346440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x346448u;
    // 0x346448: 0x0  nop
    ctx->pc = 0x346448u;
    // NOP
    // 0x34644c: 0x0  nop
    ctx->pc = 0x34644cu;
    // NOP
    // 0x346450: 0x3e00008  jr          $ra
    ctx->pc = 0x346450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x346450u;
            // 0x346454: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x346458u;
    // 0x346458: 0x0  nop
    ctx->pc = 0x346458u;
    // NOP
    // 0x34645c: 0x0  nop
    ctx->pc = 0x34645cu;
    // NOP
    // 0x346460: 0x3e00008  jr          $ra
    ctx->pc = 0x346460u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x346464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x346460u;
            // 0x346464: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x346468u;
    // 0x346468: 0x0  nop
    ctx->pc = 0x346468u;
    // NOP
    // 0x34646c: 0x0  nop
    ctx->pc = 0x34646cu;
    // NOP
}
