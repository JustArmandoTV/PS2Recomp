#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016E840
// Address: 0x16e840 - 0x16e858
void sub_0016E840_0x16e840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016E840_0x16e840");
#endif

    ctx->pc = 0x16e840u;

    // 0x16e840: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e844: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e848: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x16e848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x16e84c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e84cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e850: 0x8060d44  j           func_183510
    ctx->pc = 0x16E850u;
    ctx->pc = 0x16E854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E850u;
            // 0x16e854: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183510u;
    {
        auto targetFn = runtime->lookupFunction(0x183510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x16E858u;
}
