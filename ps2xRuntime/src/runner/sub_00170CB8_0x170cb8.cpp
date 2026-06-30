#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00170CB8
// Address: 0x170cb8 - 0x170cf0
void sub_00170CB8_0x170cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170CB8_0x170cb8");
#endif

    switch (ctx->pc) {
        case 0x170cccu: goto label_170ccc;
        case 0x170cd4u: goto label_170cd4;
        case 0x170cdcu: goto label_170cdc;
        default: break;
    }

    ctx->pc = 0x170cb8u;

    // 0x170cb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x170cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x170cbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x170cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x170cc0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x170cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x170cc4: 0xc05c846  jal         func_172118
    ctx->pc = 0x170CC4u;
    SET_GPR_U32(ctx, 31, 0x170CCCu);
    ctx->pc = 0x170CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170CC4u;
            // 0x170cc8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172118u;
    if (runtime->hasFunction(0x172118u)) {
        auto targetFn = runtime->lookupFunction(0x172118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170CCCu; }
        if (ctx->pc != 0x170CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172118_0x172118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170CCCu; }
        if (ctx->pc != 0x170CCCu) { return; }
    }
    ctx->pc = 0x170CCCu;
label_170ccc:
    // 0x170ccc: 0xc05c33c  jal         func_170CF0
    ctx->pc = 0x170CCCu;
    SET_GPR_U32(ctx, 31, 0x170CD4u);
    ctx->pc = 0x170CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170CCCu;
            // 0x170cd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170CF0u;
    if (runtime->hasFunction(0x170CF0u)) {
        auto targetFn = runtime->lookupFunction(0x170CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170CD4u; }
        if (ctx->pc != 0x170CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170CF0_0x170cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170CD4u; }
        if (ctx->pc != 0x170CD4u) { return; }
    }
    ctx->pc = 0x170CD4u;
label_170cd4:
    // 0x170cd4: 0xc05c84c  jal         func_172130
    ctx->pc = 0x170CD4u;
    SET_GPR_U32(ctx, 31, 0x170CDCu);
    ctx->pc = 0x170CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170CD4u;
            // 0x170cd8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172130u;
    if (runtime->hasFunction(0x172130u)) {
        auto targetFn = runtime->lookupFunction(0x172130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170CDCu; }
        if (ctx->pc != 0x170CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172130_0x172130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170CDCu; }
        if (ctx->pc != 0x170CDCu) { return; }
    }
    ctx->pc = 0x170CDCu;
label_170cdc:
    // 0x170cdc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x170cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x170ce0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x170ce0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170ce4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x170ce4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170ce8: 0x3e00008  jr          $ra
    ctx->pc = 0x170CE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170CE8u;
            // 0x170cec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x170CF0u;
}
