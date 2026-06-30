#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001707E8
// Address: 0x1707e8 - 0x170830
void sub_001707E8_0x1707e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001707E8_0x1707e8");
#endif

    switch (ctx->pc) {
        case 0x170810u: goto label_170810;
        case 0x170820u: goto label_170820;
        default: break;
    }

    ctx->pc = 0x1707e8u;

    // 0x1707e8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1707e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1707ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1707ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1707f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1707f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1707f4: 0x28a20100  slti        $v0, $a1, 0x100
    ctx->pc = 0x1707f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x1707f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1707f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1707fc: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1707fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170800: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x170800u;
    {
        const bool branch_taken_0x170800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170800u;
            // 0x170804: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170800) {
            ctx->pc = 0x170818u;
            goto label_170818;
        }
    }
    ctx->pc = 0x170808u;
    // 0x170808: 0xc05c176  jal         func_1705D8
    ctx->pc = 0x170808u;
    SET_GPR_U32(ctx, 31, 0x170810u);
    ctx->pc = 0x17080Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170808u;
            // 0x17080c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1705D8u;
    if (runtime->hasFunction(0x1705D8u)) {
        auto targetFn = runtime->lookupFunction(0x1705D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170810u; }
        if (ctx->pc != 0x170810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001705D8_0x1705d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170810u; }
        if (ctx->pc != 0x170810u) { return; }
    }
    ctx->pc = 0x170810u;
label_170810:
    // 0x170810: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x170810u;
    {
        const bool branch_taken_0x170810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170810u;
            // 0x170814: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170810) {
            ctx->pc = 0x170824u;
            goto label_170824;
        }
    }
    ctx->pc = 0x170818u;
label_170818:
    // 0x170818: 0xc05c1b0  jal         func_1706C0
    ctx->pc = 0x170818u;
    SET_GPR_U32(ctx, 31, 0x170820u);
    ctx->pc = 0x17081Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170818u;
            // 0x17081c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1706C0u;
    if (runtime->hasFunction(0x1706C0u)) {
        auto targetFn = runtime->lookupFunction(0x1706C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170820u; }
        if (ctx->pc != 0x170820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001706C0_0x1706c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170820u; }
        if (ctx->pc != 0x170820u) { return; }
    }
    ctx->pc = 0x170820u;
label_170820:
    // 0x170820: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x170820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_170824:
    // 0x170824: 0x3e00008  jr          $ra
    ctx->pc = 0x170824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170824u;
            // 0x170828: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17082Cu;
    // 0x17082c: 0x0  nop
    ctx->pc = 0x17082cu;
    // NOP
}
