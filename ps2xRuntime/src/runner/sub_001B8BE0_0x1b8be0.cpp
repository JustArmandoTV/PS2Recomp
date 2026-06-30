#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B8BE0
// Address: 0x1b8be0 - 0x1b8c00
void sub_001B8BE0_0x1b8be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8BE0_0x1b8be0");
#endif

    ctx->pc = 0x1b8be0u;

    // 0x1b8be0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b8be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b8be4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1b8be4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8be8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b8be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b8bec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b8becu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8bf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b8bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8bf4: 0x806e318  j           func_1B8C60
    ctx->pc = 0x1B8BF4u;
    ctx->pc = 0x1B8BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8BF4u;
            // 0x1b8bf8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8C60u;
    {
        auto targetFn = runtime->lookupFunction(0x1B8C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1B8BFCu;
    // 0x1b8bfc: 0x0  nop
    ctx->pc = 0x1b8bfcu;
    // NOP
}
