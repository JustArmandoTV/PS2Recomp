#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ED1D0
// Address: 0x1ed1d0 - 0x1ed200
void sub_001ED1D0_0x1ed1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ED1D0_0x1ed1d0");
#endif

    switch (ctx->pc) {
        case 0x1ed1f0u: goto label_1ed1f0;
        default: break;
    }

    ctx->pc = 0x1ed1d0u;

    // 0x1ed1d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ed1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ed1d4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1ed1d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed1d8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1ed1d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed1dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ed1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ed1e0: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1ed1e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed1e4: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x1ed1e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed1e8: 0xc07b40c  jal         func_1ED030
    ctx->pc = 0x1ED1E8u;
    SET_GPR_U32(ctx, 31, 0x1ED1F0u);
    ctx->pc = 0x1ED1ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED1E8u;
            // 0x1ed1ec: 0x120402d  daddu       $t0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED030u;
    if (runtime->hasFunction(0x1ED030u)) {
        auto targetFn = runtime->lookupFunction(0x1ED030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED1F0u; }
        if (ctx->pc != 0x1ED1F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED030_0x1ed030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ED1F0u; }
        if (ctx->pc != 0x1ED1F0u) { return; }
    }
    ctx->pc = 0x1ED1F0u;
label_1ed1f0:
    // 0x1ed1f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ed1f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed1f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED1F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ED1F4u;
            // 0x1ed1f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ED1FCu;
    // 0x1ed1fc: 0x0  nop
    ctx->pc = 0x1ed1fcu;
    // NOP
}
