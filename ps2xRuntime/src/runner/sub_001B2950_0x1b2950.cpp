#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B2950
// Address: 0x1b2950 - 0x1b2980
void sub_001B2950_0x1b2950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2950_0x1b2950");
#endif

    switch (ctx->pc) {
        case 0x1b2964u: goto label_1b2964;
        case 0x1b296cu: goto label_1b296c;
        default: break;
    }

    ctx->pc = 0x1b2950u;

    // 0x1b2950: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b2950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b2954: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b2954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b2958: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b2958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b295c: 0xc06ca60  jal         func_1B2980
    ctx->pc = 0x1B295Cu;
    SET_GPR_U32(ctx, 31, 0x1B2964u);
    ctx->pc = 0x1B2960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B295Cu;
            // 0x1b2960: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2980u;
    if (runtime->hasFunction(0x1B2980u)) {
        auto targetFn = runtime->lookupFunction(0x1B2980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2964u; }
        if (ctx->pc != 0x1B2964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2980_0x1b2980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2964u; }
        if (ctx->pc != 0x1B2964u) { return; }
    }
    ctx->pc = 0x1B2964u;
label_1b2964:
    // 0x1b2964: 0xc06ca86  jal         func_1B2A18
    ctx->pc = 0x1B2964u;
    SET_GPR_U32(ctx, 31, 0x1B296Cu);
    ctx->pc = 0x1B2968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2964u;
            // 0x1b2968: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2A18u;
    if (runtime->hasFunction(0x1B2A18u)) {
        auto targetFn = runtime->lookupFunction(0x1B2A18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B296Cu; }
        if (ctx->pc != 0x1B296Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2A18_0x1b2a18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B296Cu; }
        if (ctx->pc != 0x1B296Cu) { return; }
    }
    ctx->pc = 0x1B296Cu;
label_1b296c:
    // 0x1b296c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b296cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2970: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b2970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b2974: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b2974u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2978: 0x806caa6  j           func_1B2A98
    ctx->pc = 0x1B2978u;
    ctx->pc = 0x1B297Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2978u;
            // 0x1b297c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2A98u;
    {
        auto targetFn = runtime->lookupFunction(0x1B2A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1B2980u;
}
