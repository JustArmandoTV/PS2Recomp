#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019E7A0
// Address: 0x19e7a0 - 0x19e7e0
void sub_0019E7A0_0x19e7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019E7A0_0x19e7a0");
#endif

    switch (ctx->pc) {
        case 0x19e7b0u: goto label_19e7b0;
        default: break;
    }

    ctx->pc = 0x19e7a0u;

    // 0x19e7a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19e7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19e7a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19e7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19e7a8: 0xc06f8e4  jal         func_1BE390
    ctx->pc = 0x19E7A8u;
    SET_GPR_U32(ctx, 31, 0x19E7B0u);
    ctx->pc = 0x1BE390u;
    if (runtime->hasFunction(0x1BE390u)) {
        auto targetFn = runtime->lookupFunction(0x1BE390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E7B0u; }
        if (ctx->pc != 0x19E7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE390_0x1be390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19E7B0u; }
        if (ctx->pc != 0x19E7B0u) { return; }
    }
    ctx->pc = 0x19E7B0u;
label_19e7b0:
    // 0x19e7b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e7b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e7b4: 0x3c04001a  lui         $a0, 0x1A
    ctx->pc = 0x19e7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26 << 16));
    // 0x19e7b8: 0x2484e7c8  addiu       $a0, $a0, -0x1838
    ctx->pc = 0x19e7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961096));
    // 0x19e7bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19e7bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e7c0: 0x806f92c  j           func_1BE4B0
    ctx->pc = 0x19E7C0u;
    ctx->pc = 0x19E7C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E7C0u;
            // 0x19e7c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE4B0u;
    {
        auto targetFn = runtime->lookupFunction(0x1BE4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19E7C8u;
    // 0x19e7c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19e7c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19e7cc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x19e7ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e7d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19e7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19e7d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19e7d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19e7d8: 0x80686c6  j           func_1A1B18
    ctx->pc = 0x19E7D8u;
    ctx->pc = 0x19E7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19E7D8u;
            // 0x19e7dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19E7E0u;
}
