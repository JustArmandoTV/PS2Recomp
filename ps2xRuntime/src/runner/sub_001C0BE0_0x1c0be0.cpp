#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C0BE0
// Address: 0x1c0be0 - 0x1c0c58
void sub_001C0BE0_0x1c0be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0BE0_0x1c0be0");
#endif

    switch (ctx->pc) {
        case 0x1c0c18u: goto label_1c0c18;
        default: break;
    }

    ctx->pc = 0x1c0be0u;

    // 0x1c0be0: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1C0BE0u;
    {
        const bool branch_taken_0x1c0be0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0BE0u;
            // 0x1c0be4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0be0) {
            ctx->pc = 0x1C0C50u;
            goto label_1c0c50;
        }
    }
    ctx->pc = 0x1C0BE8u;
    // 0x1c0be8: 0x54a00004  bnel        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0BE8u;
    {
        const bool branch_taken_0x1c0be8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0be8) {
            ctx->pc = 0x1C0BECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0BE8u;
            // 0x1c0bec: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C0BFCu;
            goto label_1c0bfc;
        }
    }
    ctx->pc = 0x1C0BF0u;
    // 0x1c0bf0: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x1c0bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1c0bf4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1c0bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c0bf8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1c0bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1c0bfc:
    // 0x1c0bfc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c0bfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0c00: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1c0c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c0c04: 0x18600011  blez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C0C04u;
    {
        const bool branch_taken_0x1c0c04 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1C0C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0C04u;
            // 0x1c0c08: 0x2444108c  addiu       $a0, $v0, 0x108C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4236));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0c04) {
            ctx->pc = 0x1C0C4Cu;
            goto label_1c0c4c;
        }
    }
    ctx->pc = 0x1C0C0Cu;
    // 0x1c0c0c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1c0c0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0c10: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1c0c10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0c14: 0x84820036  lh          $v0, 0x36($a0)
    ctx->pc = 0x1c0c14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 54)));
label_1c0c18:
    // 0x1c0c18: 0x54480008  bnel        $v0, $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C0C18u;
    {
        const bool branch_taken_0x1c0c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x1c0c18) {
            ctx->pc = 0x1C0C1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0C18u;
            // 0x1c0c1c: 0x2484003c  addiu       $a0, $a0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 60));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C0C3Cu;
            goto label_1c0c3c;
        }
    }
    ctx->pc = 0x1C0C20u;
    // 0x1c0c20: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x1c0c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1c0c24: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C0C24u;
    {
        const bool branch_taken_0x1c0c24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0c24) {
            ctx->pc = 0x1C0C28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0C24u;
            // 0x1c0c28: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C0C40u;
            goto label_1c0c40;
        }
    }
    ctx->pc = 0x1C0C2Cu;
    // 0x1c0c2c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1c0c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c0c30: 0x10650007  beq         $v1, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C0C30u;
    {
        const bool branch_taken_0x1c0c30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1C0C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0C30u;
            // 0x1c0c34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0c30) {
            ctx->pc = 0x1C0C50u;
            goto label_1c0c50;
        }
    }
    ctx->pc = 0x1C0C38u;
    // 0x1c0c38: 0x2484003c  addiu       $a0, $a0, 0x3C
    ctx->pc = 0x1c0c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 60));
label_1c0c3c:
    // 0x1c0c3c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1c0c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1c0c40:
    // 0x1c0c40: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x1c0c40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1c0c44: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x1C0C44u;
    {
        const bool branch_taken_0x1c0c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0c44) {
            ctx->pc = 0x1C0C48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0C44u;
            // 0x1c0c48: 0x84820036  lh          $v0, 0x36($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 54)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C0C18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c0c18;
        }
    }
    ctx->pc = 0x1C0C4Cu;
label_1c0c4c:
    // 0x1c0c4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c0c4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0c50:
    // 0x1c0c50: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0C50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C0C58u;
}
