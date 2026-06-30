#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00494370
// Address: 0x494370 - 0x494390
void sub_00494370_0x494370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00494370_0x494370");
#endif

    ctx->pc = 0x494370u;

    // 0x494370: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x494370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x494374: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x494374u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x494378: 0x2463001c  addiu       $v1, $v1, 0x1C
    ctx->pc = 0x494378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
    // 0x49437c: 0x3e00008  jr          $ra
    ctx->pc = 0x49437Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x494380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49437Cu;
            // 0x494380: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x494384u;
    // 0x494384: 0x0  nop
    ctx->pc = 0x494384u;
    // NOP
    // 0x494388: 0x0  nop
    ctx->pc = 0x494388u;
    // NOP
    // 0x49438c: 0x0  nop
    ctx->pc = 0x49438cu;
    // NOP
}
