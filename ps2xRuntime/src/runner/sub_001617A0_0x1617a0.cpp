#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001617A0
// Address: 0x1617a0 - 0x1617d0
void sub_001617A0_0x1617a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001617A0_0x1617a0");
#endif

    switch (ctx->pc) {
        case 0x1617b4u: goto label_1617b4;
        default: break;
    }

    ctx->pc = 0x1617a0u;

    // 0x1617a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1617a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1617a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1617a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1617a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1617a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1617ac: 0xc05860a  jal         func_161828
    ctx->pc = 0x1617ACu;
    SET_GPR_U32(ctx, 31, 0x1617B4u);
    ctx->pc = 0x1617B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1617ACu;
            // 0x1617b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161828u;
    if (runtime->hasFunction(0x161828u)) {
        auto targetFn = runtime->lookupFunction(0x161828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1617B4u; }
        if (ctx->pc != 0x1617B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00161828_0x161828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1617B4u; }
        if (ctx->pc != 0x1617B4u) { return; }
    }
    ctx->pc = 0x1617B4u;
label_1617b4:
    // 0x1617b4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1617b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1617b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1617b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1617bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1617bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1617c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1617c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1617c4: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x1617c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1617c8: 0x804a576  j           func_1295D8
    ctx->pc = 0x1617C8u;
    ctx->pc = 0x1617CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1617C8u;
            // 0x1617cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001295D8_0x1295d8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1617D0u;
}
