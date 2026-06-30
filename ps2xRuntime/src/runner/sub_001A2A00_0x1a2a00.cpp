#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A2A00
// Address: 0x1a2a00 - 0x1a2a20
void sub_001A2A00_0x1a2a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2A00_0x1a2a00");
#endif

    switch (ctx->pc) {
        case 0x1a2a10u: goto label_1a2a10;
        default: break;
    }

    ctx->pc = 0x1a2a00u;

    // 0x1a2a00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a2a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a2a04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a2a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a2a08: 0xc066c68  jal         func_19B1A0
    ctx->pc = 0x1A2A08u;
    SET_GPR_U32(ctx, 31, 0x1A2A10u);
    ctx->pc = 0x19B1A0u;
    if (runtime->hasFunction(0x19B1A0u)) {
        auto targetFn = runtime->lookupFunction(0x19B1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2A10u; }
        if (ctx->pc != 0x1A2A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B1A0_0x19b1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A2A10u; }
        if (ctx->pc != 0x1A2A10u) { return; }
    }
    ctx->pc = 0x1A2A10u;
label_1a2a10:
    // 0x1a2a10: 0x8c422d0c  lw          $v0, 0x2D0C($v0)
    ctx->pc = 0x1a2a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11532)));
    // 0x1a2a14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a2a14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2a18: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2A18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2A18u;
            // 0x1a2a1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A2A20u;
}
