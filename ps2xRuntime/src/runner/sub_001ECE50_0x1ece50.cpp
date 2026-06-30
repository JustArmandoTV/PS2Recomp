#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ECE50
// Address: 0x1ece50 - 0x1ece80
void sub_001ECE50_0x1ece50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ECE50_0x1ece50");
#endif

    switch (ctx->pc) {
        case 0x1ece6cu: goto label_1ece6c;
        default: break;
    }

    ctx->pc = 0x1ece50u;

    // 0x1ece50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ece50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ece54: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1ece54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ece58: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1ece58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ece5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ece5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ece60: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1ece60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ece64: 0xc07b2c4  jal         func_1ECB10
    ctx->pc = 0x1ECE64u;
    SET_GPR_U32(ctx, 31, 0x1ECE6Cu);
    ctx->pc = 0x1ECE68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECE64u;
            // 0x1ece68: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ECB10u;
    if (runtime->hasFunction(0x1ECB10u)) {
        auto targetFn = runtime->lookupFunction(0x1ECB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECE6Cu; }
        if (ctx->pc != 0x1ECE6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ECB10_0x1ecb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ECE6Cu; }
        if (ctx->pc != 0x1ECE6Cu) { return; }
    }
    ctx->pc = 0x1ECE6Cu;
label_1ece6c:
    // 0x1ece6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ece6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ece70: 0x3e00008  jr          $ra
    ctx->pc = 0x1ECE70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECE74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECE70u;
            // 0x1ece74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ECE78u;
    // 0x1ece78: 0x0  nop
    ctx->pc = 0x1ece78u;
    // NOP
    // 0x1ece7c: 0x0  nop
    ctx->pc = 0x1ece7cu;
    // NOP
}
