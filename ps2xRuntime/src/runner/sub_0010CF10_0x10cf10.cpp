#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010CF10
// Address: 0x10cf10 - 0x10cf78
void sub_0010CF10_0x10cf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010CF10_0x10cf10");
#endif

    switch (ctx->pc) {
        case 0x10cf40u: goto label_10cf40;
        case 0x10cf48u: goto label_10cf48;
        case 0x10cf60u: goto label_10cf60;
        default: break;
    }

    ctx->pc = 0x10cf10u;

    // 0x10cf10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10cf10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10cf14: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10cf14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10cf18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10cf18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10cf1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10cf1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cf20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10cf20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10cf24: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x10cf24u;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x10cf28: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x10cf28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x10cf2c: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x10cf2cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x10cf30: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10CF30u;
    {
        const bool branch_taken_0x10cf30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x10cf30) {
            ctx->pc = 0x10CF40u;
            goto label_10cf40;
        }
    }
    ctx->pc = 0x10CF38u;
    // 0x10cf38: 0xc045968  jal         func_1165A0
    ctx->pc = 0x10CF38u;
    SET_GPR_U32(ctx, 31, 0x10CF40u);
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CF40u; }
        if (ctx->pc != 0x10CF40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CF40u; }
        if (ctx->pc != 0x10CF40u) { return; }
    }
    ctx->pc = 0x10CF40u;
label_10cf40:
    // 0x10cf40: 0xc043034  jal         func_10C0D0
    ctx->pc = 0x10CF40u;
    SET_GPR_U32(ctx, 31, 0x10CF48u);
    ctx->pc = 0x10CF44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10CF40u;
            // 0x10cf44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C0D0u;
    if (runtime->hasFunction(0x10C0D0u)) {
        auto targetFn = runtime->lookupFunction(0x10C0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CF48u; }
        if (ctx->pc != 0x10CF48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C0D0_0x10c0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CF48u; }
        if (ctx->pc != 0x10CF48u) { return; }
    }
    ctx->pc = 0x10CF48u;
label_10cf48:
    // 0x10cf48: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10cf48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cf4c: 0xf  sync
    ctx->pc = 0x10cf4cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10cf50: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10CF50u;
    {
        const bool branch_taken_0x10cf50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10CF50u;
            // 0x10cf54: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cf50) {
            ctx->pc = 0x10CF64u;
            goto label_10cf64;
        }
    }
    ctx->pc = 0x10CF58u;
    // 0x10cf58: 0xc04597c  jal         func_1165F0
    ctx->pc = 0x10CF58u;
    SET_GPR_U32(ctx, 31, 0x10CF60u);
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CF60u; }
        if (ctx->pc != 0x10CF60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165F0_0x1165f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10CF60u; }
        if (ctx->pc != 0x10CF60u) { return; }
    }
    ctx->pc = 0x10CF60u;
label_10cf60:
    // 0x10cf60: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x10cf60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_10cf64:
    // 0x10cf64: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10cf64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10cf68: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10cf68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10cf6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10cf6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10cf70: 0x3e00008  jr          $ra
    ctx->pc = 0x10CF70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10CF70u;
            // 0x10cf74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10CF78u;
}
