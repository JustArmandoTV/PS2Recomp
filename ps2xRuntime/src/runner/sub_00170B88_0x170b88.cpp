#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00170B88
// Address: 0x170b88 - 0x170bc0
void sub_00170B88_0x170b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170B88_0x170b88");
#endif

    switch (ctx->pc) {
        case 0x170b9cu: goto label_170b9c;
        case 0x170ba4u: goto label_170ba4;
        case 0x170bacu: goto label_170bac;
        default: break;
    }

    ctx->pc = 0x170b88u;

    // 0x170b88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x170b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x170b8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x170b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x170b90: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x170b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x170b94: 0xc05c846  jal         func_172118
    ctx->pc = 0x170B94u;
    SET_GPR_U32(ctx, 31, 0x170B9Cu);
    ctx->pc = 0x170B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170B94u;
            // 0x170b98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172118u;
    if (runtime->hasFunction(0x172118u)) {
        auto targetFn = runtime->lookupFunction(0x172118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170B9Cu; }
        if (ctx->pc != 0x170B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172118_0x172118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170B9Cu; }
        if (ctx->pc != 0x170B9Cu) { return; }
    }
    ctx->pc = 0x170B9Cu;
label_170b9c:
    // 0x170b9c: 0xc05c2f0  jal         func_170BC0
    ctx->pc = 0x170B9Cu;
    SET_GPR_U32(ctx, 31, 0x170BA4u);
    ctx->pc = 0x170BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170B9Cu;
            // 0x170ba0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170BC0u;
    if (runtime->hasFunction(0x170BC0u)) {
        auto targetFn = runtime->lookupFunction(0x170BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170BA4u; }
        if (ctx->pc != 0x170BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170BC0_0x170bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170BA4u; }
        if (ctx->pc != 0x170BA4u) { return; }
    }
    ctx->pc = 0x170BA4u;
label_170ba4:
    // 0x170ba4: 0xc05c84c  jal         func_172130
    ctx->pc = 0x170BA4u;
    SET_GPR_U32(ctx, 31, 0x170BACu);
    ctx->pc = 0x170BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170BA4u;
            // 0x170ba8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172130u;
    if (runtime->hasFunction(0x172130u)) {
        auto targetFn = runtime->lookupFunction(0x172130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170BACu; }
        if (ctx->pc != 0x170BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172130_0x172130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170BACu; }
        if (ctx->pc != 0x170BACu) { return; }
    }
    ctx->pc = 0x170BACu;
label_170bac:
    // 0x170bac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x170bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x170bb0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x170bb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170bb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x170bb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x170BB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170BB8u;
            // 0x170bbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x170BC0u;
}
