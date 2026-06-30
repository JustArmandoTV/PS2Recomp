#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0039EB50
// Address: 0x39eb50 - 0x39eba0
void sub_0039EB50_0x39eb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039EB50_0x39eb50");
#endif

    switch (ctx->pc) {
        case 0x39eb70u: goto label_39eb70;
        case 0x39eb80u: goto label_39eb80;
        default: break;
    }

    ctx->pc = 0x39eb50u;

    // 0x39eb50: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x39eb50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x39eb54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x39eb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x39eb58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39eb58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x39eb5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39eb5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x39eb60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x39eb60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39eb64: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x39eb64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39eb68: 0xc04f278  jal         func_13C9E0
    ctx->pc = 0x39EB68u;
    SET_GPR_U32(ctx, 31, 0x39EB70u);
    ctx->pc = 0x39EB6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39EB68u;
            // 0x39eb6c: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39EB70u; }
        if (ctx->pc != 0x39EB70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39EB70u; }
        if (ctx->pc != 0x39EB70u) { return; }
    }
    ctx->pc = 0x39EB70u;
label_39eb70:
    // 0x39eb70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39eb70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39eb74: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x39eb74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39eb78: 0xc04cca0  jal         func_133280
    ctx->pc = 0x39EB78u;
    SET_GPR_U32(ctx, 31, 0x39EB80u);
    ctx->pc = 0x39EB7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39EB78u;
            // 0x39eb7c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39EB80u; }
        if (ctx->pc != 0x39EB80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39EB80u; }
        if (ctx->pc != 0x39EB80u) { return; }
    }
    ctx->pc = 0x39EB80u;
label_39eb80:
    // 0x39eb80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39eb80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39eb84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39eb84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39eb88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39eb88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39eb8c: 0x3e00008  jr          $ra
    ctx->pc = 0x39EB8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39EB90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39EB8Cu;
            // 0x39eb90: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39EB94u;
    // 0x39eb94: 0x0  nop
    ctx->pc = 0x39eb94u;
    // NOP
    // 0x39eb98: 0x0  nop
    ctx->pc = 0x39eb98u;
    // NOP
    // 0x39eb9c: 0x0  nop
    ctx->pc = 0x39eb9cu;
    // NOP
}
