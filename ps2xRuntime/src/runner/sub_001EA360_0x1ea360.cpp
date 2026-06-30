#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EA360
// Address: 0x1ea360 - 0x1ea390
void sub_001EA360_0x1ea360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EA360_0x1ea360");
#endif

    switch (ctx->pc) {
        case 0x1ea37cu: goto label_1ea37c;
        default: break;
    }

    ctx->pc = 0x1ea360u;

    // 0x1ea360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ea360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ea364: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1ea364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea368: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1ea368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea36c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ea36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ea370: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1ea370u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea374: 0xc07a18c  jal         func_1E8630
    ctx->pc = 0x1EA374u;
    SET_GPR_U32(ctx, 31, 0x1EA37Cu);
    ctx->pc = 0x1EA378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA374u;
            // 0x1ea378: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8630u;
    if (runtime->hasFunction(0x1E8630u)) {
        auto targetFn = runtime->lookupFunction(0x1E8630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA37Cu; }
        if (ctx->pc != 0x1EA37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8630_0x1e8630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EA37Cu; }
        if (ctx->pc != 0x1EA37Cu) { return; }
    }
    ctx->pc = 0x1EA37Cu;
label_1ea37c:
    // 0x1ea37c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ea37cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ea380: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EA380u;
            // 0x1ea384: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EA388u;
    // 0x1ea388: 0x0  nop
    ctx->pc = 0x1ea388u;
    // NOP
    // 0x1ea38c: 0x0  nop
    ctx->pc = 0x1ea38cu;
    // NOP
}
