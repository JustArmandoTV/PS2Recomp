#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BC5E0
// Address: 0x1bc5e0 - 0x1bc608
void sub_001BC5E0_0x1bc5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC5E0_0x1bc5e0");
#endif

    switch (ctx->pc) {
        case 0x1bc5f8u: goto label_1bc5f8;
        default: break;
    }

    ctx->pc = 0x1bc5e0u;

    // 0x1bc5e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bc5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bc5e4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1bc5e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc5e8: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1bc5e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1bc5ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bc5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bc5f0: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x1BC5F0u;
    SET_GPR_U32(ctx, 31, 0x1BC5F8u);
    ctx->pc = 0x1BC5F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC5F0u;
            // 0x1bc5f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC5F8u; }
        if (ctx->pc != 0x1BC5F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BC5F8u; }
        if (ctx->pc != 0x1BC5F8u) { return; }
    }
    ctx->pc = 0x1BC5F8u;
label_1bc5f8:
    // 0x1bc5f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bc5f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bc5fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bc5fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc600: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC600u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BC600u;
            // 0x1bc604: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BC608u;
}
