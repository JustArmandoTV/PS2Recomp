#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B7500
// Address: 0x1b7500 - 0x1b7568
void sub_001B7500_0x1b7500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B7500_0x1b7500");
#endif

    switch (ctx->pc) {
        case 0x1b7514u: goto label_1b7514;
        case 0x1b7540u: goto label_1b7540;
        case 0x1b7554u: goto label_1b7554;
        default: break;
    }

    ctx->pc = 0x1b7500u;

    // 0x1b7500: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b7500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b7504: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b7504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b7508: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b7508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b750c: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1B750Cu;
    SET_GPR_U32(ctx, 31, 0x1B7514u);
    ctx->pc = 0x1B7510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B750Cu;
            // 0x1b7510: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7514u; }
        if (ctx->pc != 0x1B7514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7514u; }
        if (ctx->pc != 0x1B7514u) { return; }
    }
    ctx->pc = 0x1B7514u;
label_1b7514:
    // 0x1b7514: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b7514u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b7518: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b7518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b751c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B751Cu;
    {
        const bool branch_taken_0x1b751c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B751Cu;
            // 0x1b7520: 0x34a5012a  ori         $a1, $a1, 0x12A (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)298);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b751c) {
            ctx->pc = 0x1B7538u;
            goto label_1b7538;
        }
    }
    ctx->pc = 0x1B7524u;
    // 0x1b7524: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b7524u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7528: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b7528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b752c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b752cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b7530: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1B7530u;
    ctx->pc = 0x1B7534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7530u;
            // 0x1b7534: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B7538u;
label_1b7538:
    // 0x1b7538: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1B7538u;
    SET_GPR_U32(ctx, 31, 0x1B7540u);
    ctx->pc = 0x1B753Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7538u;
            // 0x1b753c: 0x24050047  addiu       $a1, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7540u; }
        if (ctx->pc != 0x1B7540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7540u; }
        if (ctx->pc != 0x1B7540u) { return; }
    }
    ctx->pc = 0x1B7540u;
label_1b7540:
    // 0x1b7540: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b7540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b7544: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B7544u;
    {
        const bool branch_taken_0x1b7544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B7548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7544u;
            // 0x1b7548: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7544) {
            ctx->pc = 0x1B7554u;
            goto label_1b7554;
        }
    }
    ctx->pc = 0x1B754Cu;
    // 0x1b754c: 0xc06dd5a  jal         func_1B7568
    ctx->pc = 0x1B754Cu;
    SET_GPR_U32(ctx, 31, 0x1B7554u);
    ctx->pc = 0x1B7568u;
    if (runtime->hasFunction(0x1B7568u)) {
        auto targetFn = runtime->lookupFunction(0x1B7568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7554u; }
        if (ctx->pc != 0x1B7554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B7568_0x1b7568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B7554u; }
        if (ctx->pc != 0x1B7554u) { return; }
    }
    ctx->pc = 0x1B7554u;
label_1b7554:
    // 0x1b7554: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b7554u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7558: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b7558u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b755c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b755cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b7560: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B7560u;
            // 0x1b7564: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B7568u;
}
