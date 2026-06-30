#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00171A60
// Address: 0x171a60 - 0x171aa8
void sub_00171A60_0x171a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171A60_0x171a60");
#endif

    switch (ctx->pc) {
        case 0x171a7cu: goto label_171a7c;
        case 0x171a88u: goto label_171a88;
        case 0x171a90u: goto label_171a90;
        default: break;
    }

    ctx->pc = 0x171a60u;

    // 0x171a60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x171a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x171a64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x171a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x171a68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x171a68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171a6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x171a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x171a70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x171a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x171a74: 0xc05c846  jal         func_172118
    ctx->pc = 0x171A74u;
    SET_GPR_U32(ctx, 31, 0x171A7Cu);
    ctx->pc = 0x171A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171A74u;
            // 0x171a78: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172118u;
    if (runtime->hasFunction(0x172118u)) {
        auto targetFn = runtime->lookupFunction(0x172118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171A7Cu; }
        if (ctx->pc != 0x171A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172118_0x172118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171A7Cu; }
        if (ctx->pc != 0x171A7Cu) { return; }
    }
    ctx->pc = 0x171A7Cu;
label_171a7c:
    // 0x171a7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x171a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171a80: 0xc05c6aa  jal         func_171AA8
    ctx->pc = 0x171A80u;
    SET_GPR_U32(ctx, 31, 0x171A88u);
    ctx->pc = 0x171A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171A80u;
            // 0x171a84: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171AA8u;
    if (runtime->hasFunction(0x171AA8u)) {
        auto targetFn = runtime->lookupFunction(0x171AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171A88u; }
        if (ctx->pc != 0x171A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171AA8_0x171aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171A88u; }
        if (ctx->pc != 0x171A88u) { return; }
    }
    ctx->pc = 0x171A88u;
label_171a88:
    // 0x171a88: 0xc05c84c  jal         func_172130
    ctx->pc = 0x171A88u;
    SET_GPR_U32(ctx, 31, 0x171A90u);
    ctx->pc = 0x171A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171A88u;
            // 0x171a8c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172130u;
    if (runtime->hasFunction(0x172130u)) {
        auto targetFn = runtime->lookupFunction(0x172130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171A90u; }
        if (ctx->pc != 0x171A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172130_0x172130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171A90u; }
        if (ctx->pc != 0x171A90u) { return; }
    }
    ctx->pc = 0x171A90u;
label_171a90:
    // 0x171a90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x171a90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x171a94: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x171a94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171a98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x171a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171a9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x171a9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171aa0: 0x3e00008  jr          $ra
    ctx->pc = 0x171AA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171AA0u;
            // 0x171aa4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x171AA8u;
}
