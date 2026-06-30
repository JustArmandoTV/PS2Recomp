#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028D0F0
// Address: 0x28d0f0 - 0x28d140
void sub_0028D0F0_0x28d0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028D0F0_0x28d0f0");
#endif

    switch (ctx->pc) {
        case 0x28d118u: goto label_28d118;
        case 0x28d128u: goto label_28d128;
        default: break;
    }

    ctx->pc = 0x28d0f0u;

    // 0x28d0f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x28d0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x28d0f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28d0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x28d0f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28d0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28d0fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28d0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28d100: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28d100u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d104: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x28d104u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d108: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x28d108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x28d10c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28d10cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d110: 0xc0a3348  jal         func_28CD20
    ctx->pc = 0x28D110u;
    SET_GPR_U32(ctx, 31, 0x28D118u);
    ctx->pc = 0x28D114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D110u;
            // 0x28d114: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28CD20u;
    if (runtime->hasFunction(0x28CD20u)) {
        auto targetFn = runtime->lookupFunction(0x28CD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D118u; }
        if (ctx->pc != 0x28D118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028CD20_0x28cd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D118u; }
        if (ctx->pc != 0x28D118u) { return; }
    }
    ctx->pc = 0x28D118u;
label_28d118:
    // 0x28d118: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28d118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d11c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28d11cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d120: 0xc0a3324  jal         func_28CC90
    ctx->pc = 0x28D120u;
    SET_GPR_U32(ctx, 31, 0x28D128u);
    ctx->pc = 0x28D124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D120u;
            // 0x28d124: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28CC90u;
    if (runtime->hasFunction(0x28CC90u)) {
        auto targetFn = runtime->lookupFunction(0x28CC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D128u; }
        if (ctx->pc != 0x28D128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028CC90_0x28cc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D128u; }
        if (ctx->pc != 0x28D128u) { return; }
    }
    ctx->pc = 0x28D128u;
label_28d128:
    // 0x28d128: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28d128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28d12c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28d12cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28d130: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28d130u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28d134: 0x3e00008  jr          $ra
    ctx->pc = 0x28D134u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D134u;
            // 0x28d138: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28D13Cu;
    // 0x28d13c: 0x0  nop
    ctx->pc = 0x28d13cu;
    // NOP
}
