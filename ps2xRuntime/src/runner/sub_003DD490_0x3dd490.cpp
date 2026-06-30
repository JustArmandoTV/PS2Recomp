#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003DD490
// Address: 0x3dd490 - 0x3dd4a0
void sub_003DD490_0x3dd490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DD490_0x3dd490");
#endif

    ctx->pc = 0x3dd490u;

    // 0x3dd490: 0x80f7c10  j           func_3DF040
    ctx->pc = 0x3DD490u;
    ctx->pc = 0x3DD494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3DD490u;
            // 0x3dd494: 0x248400a4  addiu       $a0, $a0, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3DF040u;
    {
        auto targetFn = runtime->lookupFunction(0x3DF040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3DD498u;
    // 0x3dd498: 0x0  nop
    ctx->pc = 0x3dd498u;
    // NOP
    // 0x3dd49c: 0x0  nop
    ctx->pc = 0x3dd49cu;
    // NOP
}
