#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00334BA0
// Address: 0x334ba0 - 0x334c10
void sub_00334BA0_0x334ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00334BA0_0x334ba0");
#endif

    switch (ctx->pc) {
        case 0x334bb4u: goto label_334bb4;
        default: break;
    }

    ctx->pc = 0x334ba0u;

    // 0x334ba0: 0x8ca9000c  lw          $t1, 0xC($a1)
    ctx->pc = 0x334ba0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x334ba4: 0x1120000e  beqz        $t1, . + 4 + (0xE << 2)
    ctx->pc = 0x334BA4u;
    {
        const bool branch_taken_0x334ba4 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x334BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x334BA4u;
            // 0x334ba8: 0x24a8000c  addiu       $t0, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334ba4) {
            ctx->pc = 0x334BE0u;
            goto label_334be0;
        }
    }
    ctx->pc = 0x334BACu;
    // 0x334bac: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x334bacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x334bb0: 0x8d23000c  lw          $v1, 0xC($t1)
    ctx->pc = 0x334bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
label_334bb4:
    // 0x334bb4: 0x67182b  sltu        $v1, $v1, $a3
    ctx->pc = 0x334bb4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x334bb8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x334BB8u;
    {
        const bool branch_taken_0x334bb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x334bb8) {
            ctx->pc = 0x334BD0u;
            goto label_334bd0;
        }
    }
    ctx->pc = 0x334BC0u;
    // 0x334bc0: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x334bc0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334bc4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x334BC4u;
    {
        const bool branch_taken_0x334bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x334BC4u;
            // 0x334bc8: 0x8d290000  lw          $t1, 0x0($t1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334bc4) {
            ctx->pc = 0x334BD8u;
            goto label_334bd8;
        }
    }
    ctx->pc = 0x334BCCu;
    // 0x334bcc: 0x0  nop
    ctx->pc = 0x334bccu;
    // NOP
label_334bd0:
    // 0x334bd0: 0x8d290004  lw          $t1, 0x4($t1)
    ctx->pc = 0x334bd0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x334bd4: 0x0  nop
    ctx->pc = 0x334bd4u;
    // NOP
label_334bd8:
    // 0x334bd8: 0x5520fff6  bnel        $t1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x334BD8u;
    {
        const bool branch_taken_0x334bd8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x334bd8) {
            ctx->pc = 0x334BDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x334BD8u;
            // 0x334bdc: 0x8d23000c  lw          $v1, 0xC($t1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x334BB4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_334bb4;
        }
    }
    ctx->pc = 0x334BE0u;
label_334be0:
    // 0x334be0: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x334be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x334be4: 0x51030007  beql        $t0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x334BE4u;
    {
        const bool branch_taken_0x334be4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        if (branch_taken_0x334be4) {
            ctx->pc = 0x334BE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x334BE4u;
            // 0x334be8: 0x24a3000c  addiu       $v1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
            ctx->pc = 0x334C04u;
            goto label_334c04;
        }
    }
    ctx->pc = 0x334BECu;
    // 0x334bec: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x334becu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x334bf0: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x334bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x334bf4: 0xc3082b  sltu        $at, $a2, $v1
    ctx->pc = 0x334bf4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x334bf8: 0x50200003  beql        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x334BF8u;
    {
        const bool branch_taken_0x334bf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x334bf8) {
            ctx->pc = 0x334BFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x334BF8u;
            // 0x334bfc: 0xac880000  sw          $t0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x334C08u;
            goto label_334c08;
        }
    }
    ctx->pc = 0x334C00u;
    // 0x334c00: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x334c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_334c04:
    // 0x334c04: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x334c04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_334c08:
    // 0x334c08: 0x3e00008  jr          $ra
    ctx->pc = 0x334C08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x334C10u;
}
