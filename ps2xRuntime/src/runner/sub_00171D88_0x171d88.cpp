#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00171D88
// Address: 0x171d88 - 0x171e18
void sub_00171D88_0x171d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171D88_0x171d88");
#endif

    switch (ctx->pc) {
        case 0x171d9cu: goto label_171d9c;
        case 0x171decu: goto label_171dec;
        case 0x171df8u: goto label_171df8;
        case 0x171e00u: goto label_171e00;
        default: break;
    }

    ctx->pc = 0x171d88u;

    // 0x171d88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x171d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x171d8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x171d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x171d90: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x171d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x171d94: 0xc05c718  jal         func_171C60
    ctx->pc = 0x171D94u;
    SET_GPR_U32(ctx, 31, 0x171D9Cu);
    ctx->pc = 0x171D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171D94u;
            // 0x171d98: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171C60u;
    if (runtime->hasFunction(0x171C60u)) {
        auto targetFn = runtime->lookupFunction(0x171C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171D9Cu; }
        if (ctx->pc != 0x171D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171C60_0x171c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171D9Cu; }
        if (ctx->pc != 0x171D9Cu) { return; }
    }
    ctx->pc = 0x171D9Cu;
label_171d9c:
    // 0x171d9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x171d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171da0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x171da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x171da4: 0x648307ff  daddiu      $v1, $a0, 0x7FF
    ctx->pc = 0x171da4u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)2047);
    // 0x171da8: 0x64840ffe  daddiu      $a0, $a0, 0xFFE
    ctx->pc = 0x171da8u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)4094);
    // 0x171dac: 0x28650000  slti        $a1, $v1, 0x0
    ctx->pc = 0x171dacu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x171db0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x171db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x171db4: 0x85180b  movn        $v1, $a0, $a1
    ctx->pc = 0x171db4u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x171db8: 0x31d78  dsll        $v1, $v1, 21
    ctx->pc = 0x171db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 21);
    // 0x171dbc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x171dbcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x171dc0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x171dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x171dc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x171dc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171dc8: 0x3e00008  jr          $ra
    ctx->pc = 0x171DC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171DC8u;
            // 0x171dcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x171DD0u;
    // 0x171dd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x171dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x171dd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x171dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x171dd8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x171dd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171ddc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x171ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x171de0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x171de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x171de4: 0xc05c846  jal         func_172118
    ctx->pc = 0x171DE4u;
    SET_GPR_U32(ctx, 31, 0x171DECu);
    ctx->pc = 0x171DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171DE4u;
            // 0x171de8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172118u;
    if (runtime->hasFunction(0x172118u)) {
        auto targetFn = runtime->lookupFunction(0x172118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171DECu; }
        if (ctx->pc != 0x171DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172118_0x172118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171DECu; }
        if (ctx->pc != 0x171DECu) { return; }
    }
    ctx->pc = 0x171DECu;
label_171dec:
    // 0x171dec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x171decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171df0: 0xc05c786  jal         func_171E18
    ctx->pc = 0x171DF0u;
    SET_GPR_U32(ctx, 31, 0x171DF8u);
    ctx->pc = 0x171DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171DF0u;
            // 0x171df4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171E18u;
    if (runtime->hasFunction(0x171E18u)) {
        auto targetFn = runtime->lookupFunction(0x171E18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171DF8u; }
        if (ctx->pc != 0x171DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171E18_0x171e18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171DF8u; }
        if (ctx->pc != 0x171DF8u) { return; }
    }
    ctx->pc = 0x171DF8u;
label_171df8:
    // 0x171df8: 0xc05c84c  jal         func_172130
    ctx->pc = 0x171DF8u;
    SET_GPR_U32(ctx, 31, 0x171E00u);
    ctx->pc = 0x171DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171DF8u;
            // 0x171dfc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172130u;
    if (runtime->hasFunction(0x172130u)) {
        auto targetFn = runtime->lookupFunction(0x172130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171E00u; }
        if (ctx->pc != 0x171E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172130_0x172130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171E00u; }
        if (ctx->pc != 0x171E00u) { return; }
    }
    ctx->pc = 0x171E00u;
label_171e00:
    // 0x171e00: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x171e00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x171e04: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x171e04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171e08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x171e08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171e0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x171e0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171e10: 0x3e00008  jr          $ra
    ctx->pc = 0x171E10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171E10u;
            // 0x171e14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x171E18u;
}
