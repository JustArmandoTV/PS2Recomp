#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B3C38
// Address: 0x1b3c38 - 0x1b3cb8
void sub_001B3C38_0x1b3c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3C38_0x1b3c38");
#endif

    switch (ctx->pc) {
        case 0x1b3c4cu: goto label_1b3c4c;
        case 0x1b3c78u: goto label_1b3c78;
        case 0x1b3c8cu: goto label_1b3c8c;
        case 0x1b3ca0u: goto label_1b3ca0;
        default: break;
    }

    ctx->pc = 0x1b3c38u;

    // 0x1b3c38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b3c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b3c3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b3c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b3c40: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b3c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b3c44: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1B3C44u;
    SET_GPR_U32(ctx, 31, 0x1B3C4Cu);
    ctx->pc = 0x1B3C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3C44u;
            // 0x1b3c48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3C4Cu; }
        if (ctx->pc != 0x1B3C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3C4Cu; }
        if (ctx->pc != 0x1B3C4Cu) { return; }
    }
    ctx->pc = 0x1B3C4Cu;
label_1b3c4c:
    // 0x1b3c4c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b3c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b3c50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b3c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3c54: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B3C54u;
    {
        const bool branch_taken_0x1b3c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3C54u;
            // 0x1b3c58: 0x34a50132  ori         $a1, $a1, 0x132 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)306);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3c54) {
            ctx->pc = 0x1B3C70u;
            goto label_1b3c70;
        }
    }
    ctx->pc = 0x1B3C5Cu;
    // 0x1b3c5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b3c5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3c60: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b3c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b3c64: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b3c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b3c68: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1B3C68u;
    ctx->pc = 0x1B3C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3C68u;
            // 0x1b3c6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B3C70u;
label_1b3c70:
    // 0x1b3c70: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1B3C70u;
    SET_GPR_U32(ctx, 31, 0x1B3C78u);
    ctx->pc = 0x1B3C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3C70u;
            // 0x1b3c74: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3C78u; }
        if (ctx->pc != 0x1B3C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3C78u; }
        if (ctx->pc != 0x1B3C78u) { return; }
    }
    ctx->pc = 0x1B3C78u;
label_1b3c78:
    // 0x1b3c78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b3c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b3c7c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B3C7Cu;
    {
        const bool branch_taken_0x1b3c7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B3C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3C7Cu;
            // 0x1b3c80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3c7c) {
            ctx->pc = 0x1B3C98u;
            goto label_1b3c98;
        }
    }
    ctx->pc = 0x1B3C84u;
    // 0x1b3c84: 0xc06c8c6  jal         func_1B2318
    ctx->pc = 0x1B3C84u;
    SET_GPR_U32(ctx, 31, 0x1B3C8Cu);
    ctx->pc = 0x1B2318u;
    if (runtime->hasFunction(0x1B2318u)) {
        auto targetFn = runtime->lookupFunction(0x1B2318u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3C8Cu; }
        if (ctx->pc != 0x1B3C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2318_0x1b2318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3C8Cu; }
        if (ctx->pc != 0x1B3C8Cu) { return; }
    }
    ctx->pc = 0x1B3C8Cu;
label_1b3c8c:
    // 0x1b3c8c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B3C8Cu;
    {
        const bool branch_taken_0x1b3c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B3C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3C8Cu;
            // 0x1b3c90: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b3c8c) {
            ctx->pc = 0x1B3CA4u;
            goto label_1b3ca4;
        }
    }
    ctx->pc = 0x1B3C94u;
    // 0x1b3c94: 0x0  nop
    ctx->pc = 0x1b3c94u;
    // NOP
label_1b3c98:
    // 0x1b3c98: 0xc06cf2e  jal         func_1B3CB8
    ctx->pc = 0x1B3C98u;
    SET_GPR_U32(ctx, 31, 0x1B3CA0u);
    ctx->pc = 0x1B3CB8u;
    if (runtime->hasFunction(0x1B3CB8u)) {
        auto targetFn = runtime->lookupFunction(0x1B3CB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3CA0u; }
        if (ctx->pc != 0x1B3CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3CB8_0x1b3cb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B3CA0u; }
        if (ctx->pc != 0x1B3CA0u) { return; }
    }
    ctx->pc = 0x1B3CA0u;
label_1b3ca0:
    // 0x1b3ca0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b3ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b3ca4:
    // 0x1b3ca4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b3ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b3ca8: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x1b3ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
    // 0x1b3cac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b3cacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b3cb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3CB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B3CB0u;
            // 0x1b3cb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B3CB8u;
}
