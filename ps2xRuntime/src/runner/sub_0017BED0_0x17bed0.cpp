#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017BED0
// Address: 0x17bed0 - 0x17bef8
void sub_0017BED0_0x17bed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017BED0_0x17bed0");
#endif

    switch (ctx->pc) {
        case 0x17bee4u: goto label_17bee4;
        default: break;
    }

    ctx->pc = 0x17bed0u;

    // 0x17bed0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17bed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17bed4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17bed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17bed8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x17bed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17bedc: 0xc06127c  jal         func_1849F0
    ctx->pc = 0x17BEDCu;
    SET_GPR_U32(ctx, 31, 0x17BEE4u);
    ctx->pc = 0x17BEE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BEDCu;
            // 0x17bee0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1849F0u;
    if (runtime->hasFunction(0x1849F0u)) {
        auto targetFn = runtime->lookupFunction(0x1849F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BEE4u; }
        if (ctx->pc != 0x17BEE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001849F0_0x1849f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17BEE4u; }
        if (ctx->pc != 0x17BEE4u) { return; }
    }
    ctx->pc = 0x17BEE4u;
label_17bee4:
    // 0x17bee4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x17bee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17bee8: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x17bee8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x17beec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17beecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17bef0: 0x8061282  j           func_184A08
    ctx->pc = 0x17BEF0u;
    ctx->pc = 0x17BEF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17BEF0u;
            // 0x17bef4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184A08u;
    if (runtime->hasFunction(0x184A08u)) {
        auto targetFn = runtime->lookupFunction(0x184A08u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00184A08_0x184a08(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x17BEF8u;
}
