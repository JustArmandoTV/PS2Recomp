#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001498C0
// Address: 0x1498c0 - 0x149910
void sub_001498C0_0x1498c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001498C0_0x1498c0");
#endif

    switch (ctx->pc) {
        case 0x1498e0u: goto label_1498e0;
        case 0x1498f8u: goto label_1498f8;
        default: break;
    }

    ctx->pc = 0x1498c0u;

    // 0x1498c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1498c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1498c4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1498c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1498c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1498c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1498cc: 0x24847940  addiu       $a0, $a0, 0x7940
    ctx->pc = 0x1498ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31040));
    // 0x1498d0: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1498d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1498d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1498d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1498d8: 0xc05750c  jal         func_15D430
    ctx->pc = 0x1498D8u;
    SET_GPR_U32(ctx, 31, 0x1498E0u);
    ctx->pc = 0x1498DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1498D8u;
            // 0x1498dc: 0xaf808318  sw          $zero, -0x7CE8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935320), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D430u;
    if (runtime->hasFunction(0x15D430u)) {
        auto targetFn = runtime->lookupFunction(0x15D430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1498E0u; }
        if (ctx->pc != 0x1498E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D430_0x15d430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1498E0u; }
        if (ctx->pc != 0x1498E0u) { return; }
    }
    ctx->pc = 0x1498E0u;
label_1498e0:
    // 0x1498e0: 0xaf828350  sw          $v0, -0x7CB0($gp)
    ctx->pc = 0x1498e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935376), GPR_U32(ctx, 2));
    // 0x1498e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1498e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1498e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1498e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1498ec: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x1498ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1498f0: 0xc057540  jal         func_15D500
    ctx->pc = 0x1498F0u;
    SET_GPR_U32(ctx, 31, 0x1498F8u);
    ctx->pc = 0x1498F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1498F0u;
            // 0x1498f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1498F8u; }
        if (ctx->pc != 0x1498F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1498F8u; }
        if (ctx->pc != 0x1498F8u) { return; }
    }
    ctx->pc = 0x1498F8u;
label_1498f8:
    // 0x1498f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1498f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1498fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1498FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1498FCu;
            // 0x149900: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x149904u;
    // 0x149904: 0x0  nop
    ctx->pc = 0x149904u;
    // NOP
    // 0x149908: 0x0  nop
    ctx->pc = 0x149908u;
    // NOP
    // 0x14990c: 0x0  nop
    ctx->pc = 0x14990cu;
    // NOP
}
