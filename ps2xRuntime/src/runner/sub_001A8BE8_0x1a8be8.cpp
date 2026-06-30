#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A8BE8
// Address: 0x1a8be8 - 0x1a8ca0
void sub_001A8BE8_0x1a8be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8BE8_0x1a8be8");
#endif

    switch (ctx->pc) {
        case 0x1a8c00u: goto label_1a8c00;
        case 0x1a8c40u: goto label_1a8c40;
        case 0x1a8c60u: goto label_1a8c60;
        case 0x1a8c68u: goto label_1a8c68;
        case 0x1a8c84u: goto label_1a8c84;
        default: break;
    }

    ctx->pc = 0x1a8be8u;

    // 0x1a8be8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8BE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8BE8u;
            // 0x1a8bec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A8BF0u;
    // 0x1a8bf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a8bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a8bf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a8bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a8bf8: 0xc064a40  jal         func_192900
    ctx->pc = 0x1A8BF8u;
    SET_GPR_U32(ctx, 31, 0x1A8C00u);
    ctx->pc = 0x192900u;
    if (runtime->hasFunction(0x192900u)) {
        auto targetFn = runtime->lookupFunction(0x192900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8C00u; }
        if (ctx->pc != 0x1A8C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192900_0x192900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8C00u; }
        if (ctx->pc != 0x1A8C00u) { return; }
    }
    ctx->pc = 0x1A8C00u;
label_1a8c00:
    // 0x1a8c00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a8c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8c04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a8c04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8c08: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8C08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8C08u;
            // 0x1a8c0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A8C10u;
    // 0x1a8c10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a8c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a8c14: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a8c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a8c18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a8c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8c1c: 0x806a30a  j           func_1A8C28
    ctx->pc = 0x1A8C1Cu;
    ctx->pc = 0x1A8C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8C1Cu;
            // 0x1a8c20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8C28u;
    goto label_1a8c28;
    ctx->pc = 0x1A8C24u;
    // 0x1a8c24: 0x0  nop
    ctx->pc = 0x1a8c24u;
    // NOP
label_1a8c28:
    // 0x1a8c28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a8c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a8c2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a8c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a8c30: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a8c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a8c34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a8c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a8c38: 0xc06a774  jal         func_1A9DD0
    ctx->pc = 0x1A8C38u;
    SET_GPR_U32(ctx, 31, 0x1A8C40u);
    ctx->pc = 0x1A8C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8C38u;
            // 0x1a8c3c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9DD0u;
    if (runtime->hasFunction(0x1A9DD0u)) {
        auto targetFn = runtime->lookupFunction(0x1A9DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8C40u; }
        if (ctx->pc != 0x1A8C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9DD0_0x1a9dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8C40u; }
        if (ctx->pc != 0x1A8C40u) { return; }
    }
    ctx->pc = 0x1A8C40u;
label_1a8c40:
    // 0x1a8c40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a8c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a8c44: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A8C44u;
    {
        const bool branch_taken_0x1a8c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A8C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8C44u;
            // 0x1a8c48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8c44) {
            ctx->pc = 0x1A8C58u;
            goto label_1a8c58;
        }
    }
    ctx->pc = 0x1A8C4Cu;
    // 0x1a8c4c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1A8C4Cu;
    {
        const bool branch_taken_0x1a8c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8C4Cu;
            // 0x1a8c50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8c4c) {
            ctx->pc = 0x1A8C88u;
            goto label_1a8c88;
        }
    }
    ctx->pc = 0x1A8C54u;
    // 0x1a8c54: 0x0  nop
    ctx->pc = 0x1a8c54u;
    // NOP
label_1a8c58:
    // 0x1a8c58: 0xc06a328  jal         func_1A8CA0
    ctx->pc = 0x1A8C58u;
    SET_GPR_U32(ctx, 31, 0x1A8C60u);
    ctx->pc = 0x1A8CA0u;
    if (runtime->hasFunction(0x1A8CA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A8CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8C60u; }
        if (ctx->pc != 0x1A8C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8CA0_0x1a8ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8C60u; }
        if (ctx->pc != 0x1A8C60u) { return; }
    }
    ctx->pc = 0x1A8C60u;
label_1a8c60:
    // 0x1a8c60: 0xc06a332  jal         func_1A8CC8
    ctx->pc = 0x1A8C60u;
    SET_GPR_U32(ctx, 31, 0x1A8C68u);
    ctx->pc = 0x1A8C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8C60u;
            // 0x1a8c64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8CC8u;
    if (runtime->hasFunction(0x1A8CC8u)) {
        auto targetFn = runtime->lookupFunction(0x1A8CC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8C68u; }
        if (ctx->pc != 0x1A8C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8CC8_0x1a8cc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8C68u; }
        if (ctx->pc != 0x1A8C68u) { return; }
    }
    ctx->pc = 0x1A8C68u;
label_1a8c68:
    // 0x1a8c68: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x1a8c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1a8c6c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a8c6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8c70: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a8c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a8c74: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A8C74u;
    {
        const bool branch_taken_0x1a8c74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A8C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8C74u;
            // 0x1a8c78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8c74) {
            ctx->pc = 0x1A8C84u;
            goto label_1a8c84;
        }
    }
    ctx->pc = 0x1A8C7Cu;
    // 0x1a8c7c: 0xc06a81e  jal         func_1AA078
    ctx->pc = 0x1A8C7Cu;
    SET_GPR_U32(ctx, 31, 0x1A8C84u);
    ctx->pc = 0x1AA078u;
    if (runtime->hasFunction(0x1AA078u)) {
        auto targetFn = runtime->lookupFunction(0x1AA078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8C84u; }
        if (ctx->pc != 0x1A8C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AA078_0x1aa078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8C84u; }
        if (ctx->pc != 0x1A8C84u) { return; }
    }
    ctx->pc = 0x1A8C84u;
label_1a8c84:
    // 0x1a8c84: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a8c84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a8c88:
    // 0x1a8c88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a8c88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8c8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a8c8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a8c90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a8c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a8c94: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8C94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8C94u;
            // 0x1a8c98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A8C9Cu;
    // 0x1a8c9c: 0x0  nop
    ctx->pc = 0x1a8c9cu;
    // NOP
}
