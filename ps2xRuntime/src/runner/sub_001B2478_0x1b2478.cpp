#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B2478
// Address: 0x1b2478 - 0x1b24a0
void sub_001B2478_0x1b2478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2478_0x1b2478");
#endif

    switch (ctx->pc) {
        case 0x1b2488u: goto label_1b2488;
        default: break;
    }

    ctx->pc = 0x1b2478u;

    // 0x1b2478: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b2478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b247c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b247cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b2480: 0xc06c928  jal         func_1B24A0
    ctx->pc = 0x1B2480u;
    SET_GPR_U32(ctx, 31, 0x1B2488u);
    ctx->pc = 0x1B24A0u;
    if (runtime->hasFunction(0x1B24A0u)) {
        auto targetFn = runtime->lookupFunction(0x1B24A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2488u; }
        if (ctx->pc != 0x1B2488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B24A0_0x1b24a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2488u; }
        if (ctx->pc != 0x1B2488u) { return; }
    }
    ctx->pc = 0x1B2488u;
label_1b2488:
    // 0x1b2488: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b2488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b248c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b248cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b2490: 0xac409bd4  sw          $zero, -0x642C($v0)
    ctx->pc = 0x1b2490u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294941652), GPR_U32(ctx, 0));
    // 0x1b2494: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2494u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2494u;
            // 0x1b2498: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B249Cu;
    // 0x1b249c: 0x0  nop
    ctx->pc = 0x1b249cu;
    // NOP
}
