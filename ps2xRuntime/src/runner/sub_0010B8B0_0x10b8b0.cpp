#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010B8B0
// Address: 0x10b8b0 - 0x10b8f0
void sub_0010B8B0_0x10b8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B8B0_0x10b8b0");
#endif

    switch (ctx->pc) {
        case 0x10b8d4u: goto label_10b8d4;
        case 0x10b8e0u: goto label_10b8e0;
        default: break;
    }

    ctx->pc = 0x10b8b0u;

    // 0x10b8b0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x10b8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x10b8b4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x10b8b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b8b8: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x10b8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x10b8bc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x10b8bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b8c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10b8c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b8c4: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x10b8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x10b8c8: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x10b8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
    // 0x10b8cc: 0xc043be4  jal         func_10EF90
    ctx->pc = 0x10B8CCu;
    SET_GPR_U32(ctx, 31, 0x10B8D4u);
    ctx->pc = 0x10B8D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B8CCu;
            // 0x10b8d0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10EF90u;
    if (runtime->hasFunction(0x10EF90u)) {
        auto targetFn = runtime->lookupFunction(0x10EF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B8D4u; }
        if (ctx->pc != 0x10B8D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010EF90_0x10ef90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B8D4u; }
        if (ctx->pc != 0x10B8D4u) { return; }
    }
    ctx->pc = 0x10B8D4u;
label_10b8d4:
    // 0x10b8d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10b8d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b8d8: 0xc042e16  jal         func_10B858
    ctx->pc = 0x10B8D8u;
    SET_GPR_U32(ctx, 31, 0x10B8E0u);
    ctx->pc = 0x10B8DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10B8D8u;
            // 0x10b8dc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10B858u;
    if (runtime->hasFunction(0x10B858u)) {
        auto targetFn = runtime->lookupFunction(0x10B858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B8E0u; }
        if (ctx->pc != 0x10B8E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010B858_0x10b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10B8E0u; }
        if (ctx->pc != 0x10B8E0u) { return; }
    }
    ctx->pc = 0x10B8E0u;
label_10b8e0:
    // 0x10b8e0: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x10b8e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x10b8e4: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x10b8e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x10b8e8: 0x3e00008  jr          $ra
    ctx->pc = 0x10B8E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B8ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10B8E8u;
            // 0x10b8ec: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10B8F0u;
}
