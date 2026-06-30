#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B2CD8
// Address: 0x1b2cd8 - 0x1b2d88
void sub_001B2CD8_0x1b2cd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2CD8_0x1b2cd8");
#endif

    switch (ctx->pc) {
        case 0x1b2cfcu: goto label_1b2cfc;
        case 0x1b2d14u: goto label_1b2d14;
        case 0x1b2d38u: goto label_1b2d38;
        case 0x1b2d48u: goto label_1b2d48;
        case 0x1b2d5cu: goto label_1b2d5c;
        case 0x1b2d68u: goto label_1b2d68;
        default: break;
    }

    ctx->pc = 0x1b2cd8u;

    // 0x1b2cd8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b2cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b2cdc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b2cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1b2ce0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b2ce0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2ce4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1b2ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1b2ce8: 0x26110950  addiu       $s1, $s0, 0x950
    ctx->pc = 0x1b2ce8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 2384));
    // 0x1b2cec: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1b2cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1b2cf0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1b2cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1b2cf4: 0xc06a25c  jal         func_1A8970
    ctx->pc = 0x1B2CF4u;
    SET_GPR_U32(ctx, 31, 0x1B2CFCu);
    ctx->pc = 0x1B2CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2CF4u;
            // 0x1b2cf8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8970u;
    if (runtime->hasFunction(0x1A8970u)) {
        auto targetFn = runtime->lookupFunction(0x1A8970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2CFCu; }
        if (ctx->pc != 0x1B2CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8970_0x1a8970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2CFCu; }
        if (ctx->pc != 0x1B2CFCu) { return; }
    }
    ctx->pc = 0x1B2CFCu;
label_1b2cfc:
    // 0x1b2cfc: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1b2cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1b2d00: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b2d00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2d04: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1B2D04u;
    {
        const bool branch_taken_0x1b2d04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2D04u;
            // 0x1b2d08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2d04) {
            ctx->pc = 0x1B2D40u;
            goto label_1b2d40;
        }
    }
    ctx->pc = 0x1B2D0Cu;
    // 0x1b2d0c: 0xc06cb62  jal         func_1B2D88
    ctx->pc = 0x1B2D0Cu;
    SET_GPR_U32(ctx, 31, 0x1B2D14u);
    ctx->pc = 0x1B2D88u;
    if (runtime->hasFunction(0x1B2D88u)) {
        auto targetFn = runtime->lookupFunction(0x1B2D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2D14u; }
        if (ctx->pc != 0x1B2D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2D88_0x1b2d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2D14u; }
        if (ctx->pc != 0x1B2D14u) { return; }
    }
    ctx->pc = 0x1B2D14u;
label_1b2d14:
    // 0x1b2d14: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B2D14u;
    {
        const bool branch_taken_0x1b2d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2D14u;
            // 0x1b2d18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2d14) {
            ctx->pc = 0x1B2D60u;
            goto label_1b2d60;
        }
    }
    ctx->pc = 0x1B2D1Cu;
    // 0x1b2d1c: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1b2d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1b2d20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b2d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2d24: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x1b2d24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x1b2d28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b2d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2d2c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b2d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b2d30: 0xc06c86c  jal         func_1B21B0
    ctx->pc = 0x1B2D30u;
    SET_GPR_U32(ctx, 31, 0x1B2D38u);
    ctx->pc = 0x1B2D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2D30u;
            // 0x1b2d34: 0xae230024  sw          $v1, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B21B0u;
    if (runtime->hasFunction(0x1B21B0u)) {
        auto targetFn = runtime->lookupFunction(0x1B21B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2D38u; }
        if (ctx->pc != 0x1B2D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B21B0_0x1b21b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2D38u; }
        if (ctx->pc != 0x1B2D38u) { return; }
    }
    ctx->pc = 0x1B2D38u;
label_1b2d38:
    // 0x1b2d38: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B2D38u;
    {
        const bool branch_taken_0x1b2d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2D38u;
            // 0x1b2d3c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2d38) {
            ctx->pc = 0x1B2D60u;
            goto label_1b2d60;
        }
    }
    ctx->pc = 0x1B2D40u;
label_1b2d40:
    // 0x1b2d40: 0xc06cbc2  jal         func_1B2F08
    ctx->pc = 0x1B2D40u;
    SET_GPR_U32(ctx, 31, 0x1B2D48u);
    ctx->pc = 0x1B2D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2D40u;
            // 0x1b2d44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2F08u;
    if (runtime->hasFunction(0x1B2F08u)) {
        auto targetFn = runtime->lookupFunction(0x1B2F08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2D48u; }
        if (ctx->pc != 0x1B2D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2F08_0x1b2f08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2D48u; }
        if (ctx->pc != 0x1B2D48u) { return; }
    }
    ctx->pc = 0x1B2D48u;
label_1b2d48:
    // 0x1b2d48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b2d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2d4c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2D4Cu;
    {
        const bool branch_taken_0x1b2d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2D4Cu;
            // 0x1b2d50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2d4c) {
            ctx->pc = 0x1B2D60u;
            goto label_1b2d60;
        }
    }
    ctx->pc = 0x1B2D54u;
    // 0x1b2d54: 0xc06c86c  jal         func_1B21B0
    ctx->pc = 0x1B2D54u;
    SET_GPR_U32(ctx, 31, 0x1B2D5Cu);
    ctx->pc = 0x1B2D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2D54u;
            // 0x1b2d58: 0xae200020  sw          $zero, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B21B0u;
    if (runtime->hasFunction(0x1B21B0u)) {
        auto targetFn = runtime->lookupFunction(0x1B21B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2D5Cu; }
        if (ctx->pc != 0x1B2D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B21B0_0x1b21b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2D5Cu; }
        if (ctx->pc != 0x1B2D5Cu) { return; }
    }
    ctx->pc = 0x1B2D5Cu;
label_1b2d5c:
    // 0x1b2d5c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1b2d5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b2d60:
    // 0x1b2d60: 0xc06a262  jal         func_1A8988
    ctx->pc = 0x1B2D60u;
    SET_GPR_U32(ctx, 31, 0x1B2D68u);
    ctx->pc = 0x1B2D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2D60u;
            // 0x1b2d64: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8988u;
    if (runtime->hasFunction(0x1A8988u)) {
        auto targetFn = runtime->lookupFunction(0x1A8988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2D68u; }
        if (ctx->pc != 0x1B2D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8988_0x1a8988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2D68u; }
        if (ctx->pc != 0x1B2D68u) { return; }
    }
    ctx->pc = 0x1B2D68u;
label_1b2d68:
    // 0x1b2d68: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1b2d68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2d6c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b2d6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2d70: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1b2d70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b2d74: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1b2d74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b2d78: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1b2d78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b2d7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2D7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2D7Cu;
            // 0x1b2d80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B2D84u;
    // 0x1b2d84: 0x0  nop
    ctx->pc = 0x1b2d84u;
    // NOP
}
