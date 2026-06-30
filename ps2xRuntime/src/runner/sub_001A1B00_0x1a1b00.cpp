#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A1B00
// Address: 0x1a1b00 - 0x1a1b18
void sub_001A1B00_0x1a1b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1B00_0x1a1b00");
#endif

    ctx->pc = 0x1a1b00u;

    // 0x1a1b00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a1b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a1b04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a1b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a1b08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a1b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1b0c: 0x806229a  j           func_188A68
    ctx->pc = 0x1A1B0Cu;
    ctx->pc = 0x1A1B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1B0Cu;
            // 0x1a1b10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x188A68u;
    if (runtime->hasFunction(0x188A68u)) {
        auto targetFn = runtime->lookupFunction(0x188A68u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00188A68_0x188a68(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A1B14u;
    // 0x1a1b14: 0x0  nop
    ctx->pc = 0x1a1b14u;
    // NOP
}
