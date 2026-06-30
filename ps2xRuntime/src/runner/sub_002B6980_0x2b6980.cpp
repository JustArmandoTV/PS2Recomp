#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B6980
// Address: 0x2b6980 - 0x2b69b0
void sub_002B6980_0x2b6980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6980_0x2b6980");
#endif

    switch (ctx->pc) {
        case 0x2b699cu: goto label_2b699c;
        default: break;
    }

    ctx->pc = 0x2b6980u;

    // 0x2b6980: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b6980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b6984: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b6984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b6988: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b6988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b698c: 0xafa5002c  sw          $a1, 0x2C($sp)
    ctx->pc = 0x2b698cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 5));
    // 0x2b6990: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b6990u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6994: 0xc058300  jal         func_160C00
    ctx->pc = 0x2B6994u;
    SET_GPR_U32(ctx, 31, 0x2B699Cu);
    ctx->pc = 0x2B6998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6994u;
            // 0x2b6998: 0x27a5002c  addiu       $a1, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160C00u;
    if (runtime->hasFunction(0x160C00u)) {
        auto targetFn = runtime->lookupFunction(0x160C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B699Cu; }
        if (ctx->pc != 0x2B699Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160C00_0x160c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B699Cu; }
        if (ctx->pc != 0x2B699Cu) { return; }
    }
    ctx->pc = 0x2B699Cu;
label_2b699c:
    // 0x2b699c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b699cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b69a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b69a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b69a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b69a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b69a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B69A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B69ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B69A8u;
            // 0x2b69ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B69B0u;
}
