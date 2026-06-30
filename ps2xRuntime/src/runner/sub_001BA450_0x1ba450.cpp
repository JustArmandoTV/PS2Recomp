#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BA450
// Address: 0x1ba450 - 0x1ba480
void sub_001BA450_0x1ba450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BA450_0x1ba450");
#endif

    switch (ctx->pc) {
        case 0x1ba460u: goto label_1ba460;
        default: break;
    }

    ctx->pc = 0x1ba450u;

    // 0x1ba450: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ba450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ba454: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ba454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ba458: 0xc06e844  jal         func_1BA110
    ctx->pc = 0x1BA458u;
    SET_GPR_U32(ctx, 31, 0x1BA460u);
    ctx->pc = 0x1BA110u;
    if (runtime->hasFunction(0x1BA110u)) {
        auto targetFn = runtime->lookupFunction(0x1BA110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA460u; }
        if (ctx->pc != 0x1BA460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BA110_0x1ba110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA460u; }
        if (ctx->pc != 0x1BA460u) { return; }
    }
    ctx->pc = 0x1BA460u;
label_1ba460:
    // 0x1ba460: 0x3c03006e  lui         $v1, 0x6E
    ctx->pc = 0x1ba460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)110 << 16));
    // 0x1ba464: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ba464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba468: 0x24631e98  addiu       $v1, $v1, 0x1E98
    ctx->pc = 0x1ba468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7832));
    // 0x1ba46c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1ba46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1ba470: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ba470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ba474: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1ba474u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1ba478: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA47Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA478u;
            // 0x1ba47c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BA480u;
}
