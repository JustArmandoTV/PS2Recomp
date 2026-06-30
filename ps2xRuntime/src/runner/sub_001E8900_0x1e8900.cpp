#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E8900
// Address: 0x1e8900 - 0x1e8930
void sub_001E8900_0x1e8900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8900_0x1e8900");
#endif

    switch (ctx->pc) {
        case 0x1e891cu: goto label_1e891c;
        default: break;
    }

    ctx->pc = 0x1e8900u;

    // 0x1e8900: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e8900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e8904: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1e8904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8908: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1e8908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e890c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e890cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e8910: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1e8910u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8914: 0xc07a24c  jal         func_1E8930
    ctx->pc = 0x1E8914u;
    SET_GPR_U32(ctx, 31, 0x1E891Cu);
    ctx->pc = 0x1E8918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8914u;
            // 0x1e8918: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8930u;
    if (runtime->hasFunction(0x1E8930u)) {
        auto targetFn = runtime->lookupFunction(0x1E8930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E891Cu; }
        if (ctx->pc != 0x1E891Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8930_0x1e8930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E891Cu; }
        if (ctx->pc != 0x1E891Cu) { return; }
    }
    ctx->pc = 0x1E891Cu;
label_1e891c:
    // 0x1e891c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e891cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e8920: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E8920u;
            // 0x1e8924: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E8928u;
    // 0x1e8928: 0x0  nop
    ctx->pc = 0x1e8928u;
    // NOP
    // 0x1e892c: 0x0  nop
    ctx->pc = 0x1e892cu;
    // NOP
}
