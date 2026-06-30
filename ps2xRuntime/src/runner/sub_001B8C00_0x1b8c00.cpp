#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B8C00
// Address: 0x1b8c00 - 0x1b8c20
void sub_001B8C00_0x1b8c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8C00_0x1b8c00");
#endif

    ctx->pc = 0x1b8c00u;

    // 0x1b8c00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b8c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b8c04: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1b8c04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8c08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b8c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b8c0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b8c0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8c10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b8c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8c14: 0x806e318  j           func_1B8C60
    ctx->pc = 0x1B8C14u;
    ctx->pc = 0x1B8C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B8C14u;
            // 0x1b8c18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8C60u;
    {
        auto targetFn = runtime->lookupFunction(0x1B8C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1B8C1Cu;
    // 0x1b8c1c: 0x0  nop
    ctx->pc = 0x1b8c1cu;
    // NOP
}
