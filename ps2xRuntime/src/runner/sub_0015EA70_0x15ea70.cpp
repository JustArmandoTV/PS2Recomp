#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015EA70
// Address: 0x15ea70 - 0x15eab0
void sub_0015EA70_0x15ea70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015EA70_0x15ea70");
#endif

    switch (ctx->pc) {
        case 0x15ea9cu: goto label_15ea9c;
        default: break;
    }

    ctx->pc = 0x15ea70u;

    // 0x15ea70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15ea70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15ea74: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x15ea74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ea78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15ea78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15ea7c: 0x24a2000c  addiu       $v0, $a1, 0xC
    ctx->pc = 0x15ea7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x15ea80: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x15ea80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x15ea84: 0x27a60018  addiu       $a2, $sp, 0x18
    ctx->pc = 0x15ea84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x15ea88: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x15ea88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x15ea8c: 0x27a70014  addiu       $a3, $sp, 0x14
    ctx->pc = 0x15ea8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x15ea90: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x15ea90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x15ea94: 0xc05827c  jal         func_1609F0
    ctx->pc = 0x15EA94u;
    SET_GPR_U32(ctx, 31, 0x15EA9Cu);
    ctx->pc = 0x15EA98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15EA94u;
            // 0x15ea98: 0x27a4001c  addiu       $a0, $sp, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1609F0u;
    if (runtime->hasFunction(0x1609F0u)) {
        auto targetFn = runtime->lookupFunction(0x1609F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EA9Cu; }
        if (ctx->pc != 0x15EA9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001609F0_0x1609f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15EA9Cu; }
        if (ctx->pc != 0x15EA9Cu) { return; }
    }
    ctx->pc = 0x15EA9Cu;
label_15ea9c:
    // 0x15ea9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15ea9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15eaa0: 0x3e00008  jr          $ra
    ctx->pc = 0x15EAA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15EAA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15EAA0u;
            // 0x15eaa4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15EAA8u;
    // 0x15eaa8: 0x0  nop
    ctx->pc = 0x15eaa8u;
    // NOP
    // 0x15eaac: 0x0  nop
    ctx->pc = 0x15eaacu;
    // NOP
}
