#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029E8D0
// Address: 0x29e8d0 - 0x29e920
void sub_0029E8D0_0x29e8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E8D0_0x29e8d0");
#endif

    switch (ctx->pc) {
        case 0x29e8f0u: goto label_29e8f0;
        default: break;
    }

    ctx->pc = 0x29e8d0u;

    // 0x29e8d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29e8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29e8d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29e8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29e8d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29e8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29e8dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29e8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29e8e0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29e8e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e8e4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x29e8e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29e8e8: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x29E8E8u;
    SET_GPR_U32(ctx, 31, 0x29E8F0u);
    ctx->pc = 0x29E8ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E8E8u;
            // 0x29e8ec: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E8F0u; }
        if (ctx->pc != 0x29E8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E8F0u; }
        if (ctx->pc != 0x29E8F0u) { return; }
    }
    ctx->pc = 0x29E8F0u;
label_29e8f0:
    // 0x29e8f0: 0x3c030234  lui         $v1, 0x234
    ctx->pc = 0x29e8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)564 << 16));
    // 0x29e8f4: 0x34635656  ori         $v1, $v1, 0x5656
    ctx->pc = 0x29e8f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)22102);
    // 0x29e8f8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x29e8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x29e8fc: 0xac510004  sw          $s1, 0x4($v0)
    ctx->pc = 0x29e8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 17));
    // 0x29e900: 0xac500008  sw          $s0, 0x8($v0)
    ctx->pc = 0x29e900u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
    // 0x29e904: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29e904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29e908: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x29e908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x29e90c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29e90cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29e910: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29e910u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29e914: 0x3e00008  jr          $ra
    ctx->pc = 0x29E914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E914u;
            // 0x29e918: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29E91Cu;
    // 0x29e91c: 0x0  nop
    ctx->pc = 0x29e91cu;
    // NOP
}
