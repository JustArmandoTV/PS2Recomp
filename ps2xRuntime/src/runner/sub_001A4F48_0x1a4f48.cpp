#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A4F48
// Address: 0x1a4f48 - 0x1a4f60
void sub_001A4F48_0x1a4f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4F48_0x1a4f48");
#endif

    ctx->pc = 0x1a4f48u;

    // 0x1a4f48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a4f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a4f4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a4f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a4f50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a4f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4f54: 0x80699b2  j           func_1A66C8
    ctx->pc = 0x1A4F54u;
    ctx->pc = 0x1A4F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4F54u;
            // 0x1a4f58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A66C8u;
    {
        auto targetFn = runtime->lookupFunction(0x1A66C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1A4F5Cu;
    // 0x1a4f5c: 0x0  nop
    ctx->pc = 0x1a4f5cu;
    // NOP
}
