#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B24E8
// Address: 0x1b24e8 - 0x1b2508
void sub_001B24E8_0x1b24e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B24E8_0x1b24e8");
#endif

    ctx->pc = 0x1b24e8u;

    // 0x1b24e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b24e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b24ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b24ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b24f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b24f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b24f4: 0x806da36  j           func_1B68D8
    ctx->pc = 0x1B24F4u;
    ctx->pc = 0x1B24F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B24F4u;
            // 0x1b24f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B68D8u;
    {
        auto targetFn = runtime->lookupFunction(0x1B68D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1B24FCu;
    // 0x1b24fc: 0x0  nop
    ctx->pc = 0x1b24fcu;
    // NOP
    // 0x1b2500: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2500u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B2508u;
}
