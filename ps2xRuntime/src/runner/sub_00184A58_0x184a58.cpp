#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00184A58
// Address: 0x184a58 - 0x184aa0
void sub_00184A58_0x184a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184A58_0x184a58");
#endif

    switch (ctx->pc) {
        case 0x184a78u: goto label_184a78;
        case 0x184a84u: goto label_184a84;
        case 0x184a8cu: goto label_184a8c;
        default: break;
    }

    ctx->pc = 0x184a58u;

    // 0x184a58: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x184a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x184a5c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x184a5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184a60: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x184a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x184a64: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x184a64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184a68: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x184a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184a6c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x184a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x184a70: 0xc04afe8  jal         func_12BFA0
    ctx->pc = 0x184A70u;
    SET_GPR_U32(ctx, 31, 0x184A78u);
    ctx->pc = 0x184A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184A70u;
            // 0x184a74: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BFA0u;
    if (runtime->hasFunction(0x12BFA0u)) {
        auto targetFn = runtime->lookupFunction(0x12BFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184A78u; }
        if (ctx->pc != 0x184A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BFA0_0x12bfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184A78u; }
        if (ctx->pc != 0x184A78u) { return; }
    }
    ctx->pc = 0x184A78u;
label_184a78:
    // 0x184a78: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x184a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184a7c: 0xc04af4a  jal         func_12BD28
    ctx->pc = 0x184A7Cu;
    SET_GPR_U32(ctx, 31, 0x184A84u);
    ctx->pc = 0x184A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184A7Cu;
            // 0x184a80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BD28u;
    if (runtime->hasFunction(0x12BD28u)) {
        auto targetFn = runtime->lookupFunction(0x12BD28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184A84u; }
        if (ctx->pc != 0x184A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BD28_0x12bd28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184A84u; }
        if (ctx->pc != 0x184A84u) { return; }
    }
    ctx->pc = 0x184A84u;
label_184a84:
    // 0x184a84: 0xc061288  jal         func_184A20
    ctx->pc = 0x184A84u;
    SET_GPR_U32(ctx, 31, 0x184A8Cu);
    ctx->pc = 0x184A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184A84u;
            // 0x184a88: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184A20u;
    if (runtime->hasFunction(0x184A20u)) {
        auto targetFn = runtime->lookupFunction(0x184A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184A8Cu; }
        if (ctx->pc != 0x184A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184A20_0x184a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184A8Cu; }
        if (ctx->pc != 0x184A8Cu) { return; }
    }
    ctx->pc = 0x184A8Cu;
label_184a8c:
    // 0x184a8c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x184a8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x184a90: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x184a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x184a94: 0x3e00008  jr          $ra
    ctx->pc = 0x184A94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184A94u;
            // 0x184a98: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x184A9Cu;
    // 0x184a9c: 0x0  nop
    ctx->pc = 0x184a9cu;
    // NOP
}
