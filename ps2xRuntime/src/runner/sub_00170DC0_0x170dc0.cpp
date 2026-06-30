#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00170DC0
// Address: 0x170dc0 - 0x170df0
void sub_00170DC0_0x170dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170DC0_0x170dc0");
#endif

    switch (ctx->pc) {
        case 0x170dd4u: goto label_170dd4;
        case 0x170ddcu: goto label_170ddc;
        default: break;
    }

    ctx->pc = 0x170dc0u;

    // 0x170dc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x170dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x170dc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x170dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x170dc8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x170dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x170dcc: 0xc05c846  jal         func_172118
    ctx->pc = 0x170DCCu;
    SET_GPR_U32(ctx, 31, 0x170DD4u);
    ctx->pc = 0x170DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170DCCu;
            // 0x170dd0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172118u;
    if (runtime->hasFunction(0x172118u)) {
        auto targetFn = runtime->lookupFunction(0x172118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170DD4u; }
        if (ctx->pc != 0x170DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172118_0x172118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170DD4u; }
        if (ctx->pc != 0x170DD4u) { return; }
    }
    ctx->pc = 0x170DD4u;
label_170dd4:
    // 0x170dd4: 0xc05c37c  jal         func_170DF0
    ctx->pc = 0x170DD4u;
    SET_GPR_U32(ctx, 31, 0x170DDCu);
    ctx->pc = 0x170DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170DD4u;
            // 0x170dd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170DF0u;
    if (runtime->hasFunction(0x170DF0u)) {
        auto targetFn = runtime->lookupFunction(0x170DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170DDCu; }
        if (ctx->pc != 0x170DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170DF0_0x170df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170DDCu; }
        if (ctx->pc != 0x170DDCu) { return; }
    }
    ctx->pc = 0x170DDCu;
label_170ddc:
    // 0x170ddc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x170ddcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170de0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x170de0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x170de4: 0x805c84c  j           func_172130
    ctx->pc = 0x170DE4u;
    ctx->pc = 0x170DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170DE4u;
            // 0x170de8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172130u;
    if (runtime->hasFunction(0x172130u)) {
        auto targetFn = runtime->lookupFunction(0x172130u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00172130_0x172130(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x170DECu;
    // 0x170dec: 0x0  nop
    ctx->pc = 0x170decu;
    // NOP
}
