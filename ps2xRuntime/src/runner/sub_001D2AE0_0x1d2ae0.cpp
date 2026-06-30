#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D2AE0
// Address: 0x1d2ae0 - 0x1d2b10
void sub_001D2AE0_0x1d2ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2AE0_0x1d2ae0");
#endif

    ctx->pc = 0x1d2ae0u;

    // 0x1d2ae0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1d2ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d2ae4: 0x3c024649  lui         $v0, 0x4649
    ctx->pc = 0x1d2ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17993 << 16));
    // 0x1d2ae8: 0x3442534e  ori         $v0, $v0, 0x534E
    ctx->pc = 0x1d2ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21326);
    // 0x1d2aec: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D2AECu;
    {
        const bool branch_taken_0x1d2aec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d2aec) {
            ctx->pc = 0x1D2AF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2AECu;
            // 0x1d2af0: 0x8c830014  lw          $v1, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D2AFCu;
            goto label_1d2afc;
        }
    }
    ctx->pc = 0x1D2AF4u;
    // 0x1d2af4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D2AF4u;
    {
        const bool branch_taken_0x1d2af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2AF4u;
            // 0x1d2af8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2af4) {
            ctx->pc = 0x1D2B04u;
            goto label_1d2b04;
        }
    }
    ctx->pc = 0x1D2AFCu;
label_1d2afc:
    // 0x1d2afc: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1d2afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1d2b00: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1d2b00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d2b04:
    // 0x1d2b04: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2B04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D2B0Cu;
    // 0x1d2b0c: 0x0  nop
    ctx->pc = 0x1d2b0cu;
    // NOP
}
