#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BED10
// Address: 0x1bed10 - 0x1bed68
void sub_001BED10_0x1bed10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BED10_0x1bed10");
#endif

    switch (ctx->pc) {
        case 0x1bed4cu: goto label_1bed4c;
        default: break;
    }

    ctx->pc = 0x1bed10u;

    // 0x1bed10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bed10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bed14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bed14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bed18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bed18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bed1c: 0x806fb4a  j           func_1BED28
    ctx->pc = 0x1BED1Cu;
    ctx->pc = 0x1BED20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BED1Cu;
            // 0x1bed20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BED28u;
    goto label_1bed28;
    ctx->pc = 0x1BED24u;
    // 0x1bed24: 0x0  nop
    ctx->pc = 0x1bed24u;
    // NOP
label_1bed28:
    // 0x1bed28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bed28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bed2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bed2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bed30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bed30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bed34: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1bed34u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x1bed38: 0x2610a240  addiu       $s0, $s0, -0x5DC0
    ctx->pc = 0x1bed38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943296));
    // 0x1bed3c: 0x2406026c  addiu       $a2, $zero, 0x26C
    ctx->pc = 0x1bed3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 620));
    // 0x1bed40: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1bed40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1bed44: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x1BED44u;
    SET_GPR_U32(ctx, 31, 0x1BED4Cu);
    ctx->pc = 0x1BED48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BED44u;
            // 0x1bed48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BED4Cu; }
        if (ctx->pc != 0x1BED4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BED4Cu; }
        if (ctx->pc != 0x1BED4Cu) { return; }
    }
    ctx->pc = 0x1BED4Cu;
label_1bed4c:
    // 0x1bed4c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x1bed4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1bed50: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1bed50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1bed54: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1bed54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bed58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bed58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bed5c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bed5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bed60: 0x806fda2  j           func_1BF688
    ctx->pc = 0x1BED60u;
    ctx->pc = 0x1BED64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BED60u;
            // 0x1bed64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BF688u;
    {
        auto targetFn = runtime->lookupFunction(0x1BF688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1BED68u;
}
