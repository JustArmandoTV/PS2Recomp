#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00196298
// Address: 0x196298 - 0x1962e8
void sub_00196298_0x196298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196298_0x196298");
#endif

    switch (ctx->pc) {
        case 0x1962acu: goto label_1962ac;
        case 0x1962c4u: goto label_1962c4;
        default: break;
    }

    ctx->pc = 0x196298u;

    // 0x196298: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x196298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19629c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19629cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1962a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1962a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1962a4: 0xc0658ba  jal         func_1962E8
    ctx->pc = 0x1962A4u;
    SET_GPR_U32(ctx, 31, 0x1962ACu);
    ctx->pc = 0x1962E8u;
    if (runtime->hasFunction(0x1962E8u)) {
        auto targetFn = runtime->lookupFunction(0x1962E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1962ACu; }
        if (ctx->pc != 0x1962ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001962E8_0x1962e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1962ACu; }
        if (ctx->pc != 0x1962ACu) { return; }
    }
    ctx->pc = 0x1962ACu;
label_1962ac:
    // 0x1962ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1962acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1962b0: 0x2405042c  addiu       $a1, $zero, 0x42C
    ctx->pc = 0x1962b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1068));
    // 0x1962b4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1962B4u;
    {
        const bool branch_taken_0x1962b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1962B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1962B4u;
            // 0x1962b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1962b4) {
            ctx->pc = 0x1962D8u;
            goto label_1962d8;
        }
    }
    ctx->pc = 0x1962BCu;
    // 0x1962bc: 0xc065928  jal         func_1964A0
    ctx->pc = 0x1962BCu;
    SET_GPR_U32(ctx, 31, 0x1962C4u);
    ctx->pc = 0x1964A0u;
    if (runtime->hasFunction(0x1964A0u)) {
        auto targetFn = runtime->lookupFunction(0x1964A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1962C4u; }
        if (ctx->pc != 0x1962C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001964A0_0x1964a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1962C4u; }
        if (ctx->pc != 0x1962C4u) { return; }
    }
    ctx->pc = 0x1962C4u;
label_1962c4:
    // 0x1962c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1962c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1962c8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1962c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1962cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1962ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1962d0: 0x80658ce  j           func_196338
    ctx->pc = 0x1962D0u;
    ctx->pc = 0x1962D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1962D0u;
            // 0x1962d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196338u;
    {
        auto targetFn = runtime->lookupFunction(0x196338u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1962D8u;
label_1962d8:
    // 0x1962d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1962d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1962dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1962dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1962e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1962E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1962E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1962E0u;
            // 0x1962e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1962E8u;
}
