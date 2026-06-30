#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B1A58
// Address: 0x1b1a58 - 0x1b1a80
void sub_001B1A58_0x1b1a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B1A58_0x1b1a58");
#endif

    ctx->pc = 0x1b1a58u;

    // 0x1b1a58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b1a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b1a5c: 0x3c05006e  lui         $a1, 0x6E
    ctx->pc = 0x1b1a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)110 << 16));
    // 0x1b1a60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b1a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b1a64: 0x24a51e30  addiu       $a1, $a1, 0x1E30
    ctx->pc = 0x1b1a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7728));
    // 0x1b1a68: 0x24060048  addiu       $a2, $zero, 0x48
    ctx->pc = 0x1b1a68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1b1a6c: 0x8c842030  lw          $a0, 0x2030($a0)
    ctx->pc = 0x1b1a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8240)));
    // 0x1b1a70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b1a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1a74: 0x24841150  addiu       $a0, $a0, 0x1150
    ctx->pc = 0x1b1a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4432));
    // 0x1b1a78: 0x80640b0  j           func_1902C0
    ctx->pc = 0x1B1A78u;
    ctx->pc = 0x1B1A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1A78u;
            // 0x1b1a7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1902C0u;
    {
        auto targetFn = runtime->lookupFunction(0x1902C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1B1A80u;
}
