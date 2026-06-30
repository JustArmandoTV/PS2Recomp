#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002F5D00
// Address: 0x2f5d00 - 0x2f5d60
void sub_002F5D00_0x2f5d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F5D00_0x2f5d00");
#endif

    ctx->pc = 0x2f5d00u;

    // 0x2f5d00: 0x8c86010c  lw          $a2, 0x10C($a0)
    ctx->pc = 0x2f5d00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 268)));
    // 0x2f5d04: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x2F5D04u;
    {
        const bool branch_taken_0x2f5d04 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5d04) {
            ctx->pc = 0x2F5D50u;
            goto label_2f5d50;
        }
    }
    ctx->pc = 0x2F5D0Cu;
    // 0x2f5d0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f5d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f5d10: 0x50a3000a  beql        $a1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2F5D10u;
    {
        const bool branch_taken_0x2f5d10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f5d10) {
            ctx->pc = 0x2F5D14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5D10u;
            // 0x2f5d14: 0x8c850004  lw          $a1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F5D3Cu;
            goto label_2f5d3c;
        }
    }
    ctx->pc = 0x2F5D18u;
    // 0x2f5d18: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F5D18u;
    {
        const bool branch_taken_0x2f5d18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5d18) {
            ctx->pc = 0x2F5D1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5D18u;
            // 0x2f5d1c: 0x8c840014  lw          $a0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2F5D28u;
            goto label_2f5d28;
        }
    }
    ctx->pc = 0x2F5D20u;
    // 0x2f5d20: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2F5D20u;
    {
        const bool branch_taken_0x2f5d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5d20) {
            ctx->pc = 0x2F5D50u;
            goto label_2f5d50;
        }
    }
    ctx->pc = 0x2F5D28u;
label_2f5d28:
    // 0x2f5d28: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2f5d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2f5d2c: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x2f5d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x2f5d30: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x2f5d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2f5d34: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2F5D34u;
    {
        const bool branch_taken_0x2f5d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F5D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F5D34u;
            // 0x2f5d38: 0xac830014  sw          $v1, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5d34) {
            ctx->pc = 0x2F5D50u;
            goto label_2f5d50;
        }
    }
    ctx->pc = 0x2F5D3Cu;
label_2f5d3c:
    // 0x2f5d3c: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x2f5d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2f5d40: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x2f5d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2f5d44: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x2f5d44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x2f5d48: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x2f5d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x2f5d4c: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x2f5d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_2f5d50:
    // 0x2f5d50: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5D50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2F5D58u;
    // 0x2f5d58: 0x0  nop
    ctx->pc = 0x2f5d58u;
    // NOP
    // 0x2f5d5c: 0x0  nop
    ctx->pc = 0x2f5d5cu;
    // NOP
}
