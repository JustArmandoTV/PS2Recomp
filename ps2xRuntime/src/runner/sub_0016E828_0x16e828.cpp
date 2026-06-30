#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016E828
// Address: 0x16e828 - 0x16e840
void sub_0016E828_0x16e828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016E828_0x16e828");
#endif

    ctx->pc = 0x16e828u;

    // 0x16e828: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e82c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e830: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e834: 0x8060d9c  j           func_183670
    ctx->pc = 0x16E834u;
    ctx->pc = 0x16E838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E834u;
            // 0x16e838: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183670u;
    {
        auto targetFn = runtime->lookupFunction(0x183670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x16E83Cu;
    // 0x16e83c: 0x0  nop
    ctx->pc = 0x16e83cu;
    // NOP
}
