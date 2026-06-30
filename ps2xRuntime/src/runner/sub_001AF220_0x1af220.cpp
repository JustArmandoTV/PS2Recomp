#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AF220
// Address: 0x1af220 - 0x1af240
void sub_001AF220_0x1af220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF220_0x1af220");
#endif

    switch (ctx->pc) {
        case 0x1af234u: goto label_1af234;
        default: break;
    }

    ctx->pc = 0x1af220u;

    // 0x1af220: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1af220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1af224: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1af224u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af228: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1af228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1af22c: 0xc06964c  jal         func_1A5930
    ctx->pc = 0x1AF22Cu;
    SET_GPR_U32(ctx, 31, 0x1AF234u);
    ctx->pc = 0x1AF230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF22Cu;
            // 0x1af230: 0x8c852038  lw          $a1, 0x2038($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8248)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5930u;
    if (runtime->hasFunction(0x1A5930u)) {
        auto targetFn = runtime->lookupFunction(0x1A5930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF234u; }
        if (ctx->pc != 0x1AF234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5930_0x1a5930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AF234u; }
        if (ctx->pc != 0x1AF234u) { return; }
    }
    ctx->pc = 0x1AF234u;
label_1af234:
    // 0x1af234: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1af234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1af238: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF238u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AF238u;
            // 0x1af23c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AF240u;
}
