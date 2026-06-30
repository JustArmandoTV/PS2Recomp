#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013DCB0
// Address: 0x13dcb0 - 0x13dcf0
void sub_0013DCB0_0x13dcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013DCB0_0x13dcb0");
#endif

    ctx->pc = 0x13dcb0u;

    // 0x13dcb0: 0x2402027f  addiu       $v0, $zero, 0x27F
    ctx->pc = 0x13dcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 639));
    // 0x13dcb4: 0x5082000b  beql        $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x13DCB4u;
    {
        const bool branch_taken_0x13dcb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x13dcb4) {
            ctx->pc = 0x13DCB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13DCB4u;
            // 0x13dcb8: 0x24020038  addiu       $v0, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13DCE4u;
            goto label_13dce4;
        }
    }
    ctx->pc = 0x13DCBCu;
    // 0x13dcbc: 0x2402017f  addiu       $v0, $zero, 0x17F
    ctx->pc = 0x13dcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 383));
    // 0x13dcc0: 0x50820008  beql        $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13DCC0u;
    {
        const bool branch_taken_0x13dcc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x13dcc0) {
            ctx->pc = 0x13DCC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13DCC0u;
            // 0x13dcc4: 0x24020038  addiu       $v0, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13DCE4u;
            goto label_13dce4;
        }
    }
    ctx->pc = 0x13DCC8u;
    // 0x13dcc8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x13dcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x13dccc: 0x50820005  beql        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13DCCCu;
    {
        const bool branch_taken_0x13dccc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x13dccc) {
            ctx->pc = 0x13DCD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13DCCCu;
            // 0x13dcd0: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13DCE4u;
            goto label_13dce4;
        }
    }
    ctx->pc = 0x13DCD4u;
    // 0x13dcd4: 0x24020c3f  addiu       $v0, $zero, 0xC3F
    ctx->pc = 0x13dcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3135));
    // 0x13dcd8: 0x50820002  beql        $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x13DCD8u;
    {
        const bool branch_taken_0x13dcd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x13dcd8) {
            ctx->pc = 0x13DCDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13DCD8u;
            // 0x13dcdc: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13DCE4u;
            goto label_13dce4;
        }
    }
    ctx->pc = 0x13DCE0u;
    // 0x13dce0: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x13dce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_13dce4:
    // 0x13dce4: 0x3e00008  jr          $ra
    ctx->pc = 0x13DCE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13DCECu;
    // 0x13dcec: 0x0  nop
    ctx->pc = 0x13dcecu;
    // NOP
}
