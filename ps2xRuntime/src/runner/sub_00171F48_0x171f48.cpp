#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00171F48
// Address: 0x171f48 - 0x171fa0
void sub_00171F48_0x171f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171F48_0x171f48");
#endif

    switch (ctx->pc) {
        case 0x171f7cu: goto label_171f7c;
        case 0x171f88u: goto label_171f88;
        default: break;
    }

    ctx->pc = 0x171f48u;

    // 0x171f48: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x171f48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171f4c: 0xac850018  sw          $a1, 0x18($a0)
    ctx->pc = 0x171f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 5));
    // 0x171f50: 0x212f8  dsll        $v0, $v0, 11
    ctx->pc = 0x171f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 11);
    // 0x171f54: 0x3e00008  jr          $ra
    ctx->pc = 0x171F54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171F54u;
            // 0x171f58: 0xfc820010  sd          $v0, 0x10($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x171F5Cu;
    // 0x171f5c: 0x0  nop
    ctx->pc = 0x171f5cu;
    // NOP
    // 0x171f60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x171f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x171f64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x171f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x171f68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x171f68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171f6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x171f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x171f70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x171f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x171f74: 0xc05c846  jal         func_172118
    ctx->pc = 0x171F74u;
    SET_GPR_U32(ctx, 31, 0x171F7Cu);
    ctx->pc = 0x171F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171F74u;
            // 0x171f78: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172118u;
    if (runtime->hasFunction(0x172118u)) {
        auto targetFn = runtime->lookupFunction(0x172118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171F7Cu; }
        if (ctx->pc != 0x171F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172118_0x172118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171F7Cu; }
        if (ctx->pc != 0x171F7Cu) { return; }
    }
    ctx->pc = 0x171F7Cu;
label_171f7c:
    // 0x171f7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x171f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171f80: 0xc05c7e8  jal         func_171FA0
    ctx->pc = 0x171F80u;
    SET_GPR_U32(ctx, 31, 0x171F88u);
    ctx->pc = 0x171F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171F80u;
            // 0x171f84: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171FA0u;
    if (runtime->hasFunction(0x171FA0u)) {
        auto targetFn = runtime->lookupFunction(0x171FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171F88u; }
        if (ctx->pc != 0x171F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171FA0_0x171fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171F88u; }
        if (ctx->pc != 0x171F88u) { return; }
    }
    ctx->pc = 0x171F88u;
label_171f88:
    // 0x171f88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x171f88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171f8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x171f8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x171f90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x171f90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171f94: 0x805c84c  j           func_172130
    ctx->pc = 0x171F94u;
    ctx->pc = 0x171F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171F94u;
            // 0x171f98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172130u;
    if (runtime->hasFunction(0x172130u)) {
        auto targetFn = runtime->lookupFunction(0x172130u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00172130_0x172130(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x171F9Cu;
    // 0x171f9c: 0x0  nop
    ctx->pc = 0x171f9cu;
    // NOP
}
