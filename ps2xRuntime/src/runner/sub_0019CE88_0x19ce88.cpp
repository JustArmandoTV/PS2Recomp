#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019CE88
// Address: 0x19ce88 - 0x19cea0
void sub_0019CE88_0x19ce88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019CE88_0x19ce88");
#endif

    ctx->pc = 0x19ce88u;

    // 0x19ce88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19ce88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19ce8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19ce8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19ce90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19ce90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ce94: 0x80672ac  j           func_19CAB0
    ctx->pc = 0x19CE94u;
    ctx->pc = 0x19CE98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19CE94u;
            // 0x19ce98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CAB0u;
    {
        auto targetFn = runtime->lookupFunction(0x19CAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19CE9Cu;
    // 0x19ce9c: 0x0  nop
    ctx->pc = 0x19ce9cu;
    // NOP
}
