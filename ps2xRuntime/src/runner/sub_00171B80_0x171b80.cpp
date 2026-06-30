#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00171B80
// Address: 0x171b80 - 0x171bc0
void sub_00171B80_0x171b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171B80_0x171b80");
#endif

    switch (ctx->pc) {
        case 0x171b88u: goto label_171b88;
        case 0x171b9cu: goto label_171b9c;
        case 0x171ba4u: goto label_171ba4;
        case 0x171bacu: goto label_171bac;
        default: break;
    }

    ctx->pc = 0x171b80u;

    // 0x171b80: 0x3e00008  jr          $ra
    ctx->pc = 0x171B80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171B80u;
            // 0x171b84: 0x8c820018  lw          $v0, 0x18($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x171B88u;
label_171b88:
    // 0x171b88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x171b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x171b8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x171b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x171b90: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x171b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x171b94: 0xc05c846  jal         func_172118
    ctx->pc = 0x171B94u;
    SET_GPR_U32(ctx, 31, 0x171B9Cu);
    ctx->pc = 0x171B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171B94u;
            // 0x171b98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172118u;
    if (runtime->hasFunction(0x172118u)) {
        auto targetFn = runtime->lookupFunction(0x172118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171B9Cu; }
        if (ctx->pc != 0x171B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172118_0x172118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171B9Cu; }
        if (ctx->pc != 0x171B9Cu) { return; }
    }
    ctx->pc = 0x171B9Cu;
label_171b9c:
    // 0x171b9c: 0xc05c6f0  jal         func_171BC0
    ctx->pc = 0x171B9Cu;
    SET_GPR_U32(ctx, 31, 0x171BA4u);
    ctx->pc = 0x171BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171B9Cu;
            // 0x171ba0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171BC0u;
    if (runtime->hasFunction(0x171BC0u)) {
        auto targetFn = runtime->lookupFunction(0x171BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171BA4u; }
        if (ctx->pc != 0x171BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171BC0_0x171bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171BA4u; }
        if (ctx->pc != 0x171BA4u) { return; }
    }
    ctx->pc = 0x171BA4u;
label_171ba4:
    // 0x171ba4: 0xc05c84c  jal         func_172130
    ctx->pc = 0x171BA4u;
    SET_GPR_U32(ctx, 31, 0x171BACu);
    ctx->pc = 0x171BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171BA4u;
            // 0x171ba8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172130u;
    if (runtime->hasFunction(0x172130u)) {
        auto targetFn = runtime->lookupFunction(0x172130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171BACu; }
        if (ctx->pc != 0x171BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172130_0x172130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171BACu; }
        if (ctx->pc != 0x171BACu) { return; }
    }
    ctx->pc = 0x171BACu;
label_171bac:
    // 0x171bac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x171bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x171bb0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x171bb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171bb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x171bb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x171BB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171BB8u;
            // 0x171bbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x171BC0u;
}
