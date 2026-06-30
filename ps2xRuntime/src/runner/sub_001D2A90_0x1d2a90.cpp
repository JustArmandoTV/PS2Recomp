#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D2A90
// Address: 0x1d2a90 - 0x1d2ae0
void sub_001D2A90_0x1d2a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2A90_0x1d2a90");
#endif

    switch (ctx->pc) {
        case 0x1d2aacu: goto label_1d2aac;
        case 0x1d2ac8u: goto label_1d2ac8;
        default: break;
    }

    ctx->pc = 0x1d2a90u;

    // 0x1d2a90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d2a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d2a94: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1d2a94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x1d2a98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d2a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d2a9c: 0x2484a300  addiu       $a0, $a0, -0x5D00
    ctx->pc = 0x1d2a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943488));
    // 0x1d2aa0: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1d2aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1d2aa4: 0xc05750c  jal         func_15D430
    ctx->pc = 0x1D2AA4u;
    SET_GPR_U32(ctx, 31, 0x1D2AACu);
    ctx->pc = 0x1D2AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2AA4u;
            // 0x1d2aa8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D430u;
    if (runtime->hasFunction(0x15D430u)) {
        auto targetFn = runtime->lookupFunction(0x15D430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2AACu; }
        if (ctx->pc != 0x1D2AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D430_0x15d430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2AACu; }
        if (ctx->pc != 0x1D2AACu) { return; }
    }
    ctx->pc = 0x1D2AACu;
label_1d2aac:
    // 0x1d2aac: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1d2aacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x1d2ab0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d2ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2ab4: 0xac62a340  sw          $v0, -0x5CC0($v1)
    ctx->pc = 0x1d2ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294943552), GPR_U32(ctx, 2));
    // 0x1d2ab8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d2ab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2abc: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x1d2abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1d2ac0: 0xc057540  jal         func_15D500
    ctx->pc = 0x1D2AC0u;
    SET_GPR_U32(ctx, 31, 0x1D2AC8u);
    ctx->pc = 0x1D2AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2AC0u;
            // 0x1d2ac4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2AC8u; }
        if (ctx->pc != 0x1D2AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2AC8u; }
        if (ctx->pc != 0x1D2AC8u) { return; }
    }
    ctx->pc = 0x1D2AC8u;
label_1d2ac8:
    // 0x1d2ac8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d2ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d2acc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2ACCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2ACCu;
            // 0x1d2ad0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D2AD4u;
    // 0x1d2ad4: 0x0  nop
    ctx->pc = 0x1d2ad4u;
    // NOP
    // 0x1d2ad8: 0x0  nop
    ctx->pc = 0x1d2ad8u;
    // NOP
    // 0x1d2adc: 0x0  nop
    ctx->pc = 0x1d2adcu;
    // NOP
}
