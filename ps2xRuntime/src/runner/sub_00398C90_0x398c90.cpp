#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00398C90
// Address: 0x398c90 - 0x398d70
void sub_00398C90_0x398c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00398C90_0x398c90");
#endif

    switch (ctx->pc) {
        case 0x398c90u: goto label_398c90;
        case 0x398c94u: goto label_398c94;
        case 0x398c98u: goto label_398c98;
        case 0x398c9cu: goto label_398c9c;
        case 0x398ca0u: goto label_398ca0;
        case 0x398ca4u: goto label_398ca4;
        case 0x398ca8u: goto label_398ca8;
        case 0x398cacu: goto label_398cac;
        case 0x398cb0u: goto label_398cb0;
        case 0x398cb4u: goto label_398cb4;
        case 0x398cb8u: goto label_398cb8;
        case 0x398cbcu: goto label_398cbc;
        case 0x398cc0u: goto label_398cc0;
        case 0x398cc4u: goto label_398cc4;
        case 0x398cc8u: goto label_398cc8;
        case 0x398cccu: goto label_398ccc;
        case 0x398cd0u: goto label_398cd0;
        case 0x398cd4u: goto label_398cd4;
        case 0x398cd8u: goto label_398cd8;
        case 0x398cdcu: goto label_398cdc;
        case 0x398ce0u: goto label_398ce0;
        case 0x398ce4u: goto label_398ce4;
        case 0x398ce8u: goto label_398ce8;
        case 0x398cecu: goto label_398cec;
        case 0x398cf0u: goto label_398cf0;
        case 0x398cf4u: goto label_398cf4;
        case 0x398cf8u: goto label_398cf8;
        case 0x398cfcu: goto label_398cfc;
        case 0x398d00u: goto label_398d00;
        case 0x398d04u: goto label_398d04;
        case 0x398d08u: goto label_398d08;
        case 0x398d0cu: goto label_398d0c;
        case 0x398d10u: goto label_398d10;
        case 0x398d14u: goto label_398d14;
        case 0x398d18u: goto label_398d18;
        case 0x398d1cu: goto label_398d1c;
        case 0x398d20u: goto label_398d20;
        case 0x398d24u: goto label_398d24;
        case 0x398d28u: goto label_398d28;
        case 0x398d2cu: goto label_398d2c;
        case 0x398d30u: goto label_398d30;
        case 0x398d34u: goto label_398d34;
        case 0x398d38u: goto label_398d38;
        case 0x398d3cu: goto label_398d3c;
        case 0x398d40u: goto label_398d40;
        case 0x398d44u: goto label_398d44;
        case 0x398d48u: goto label_398d48;
        case 0x398d4cu: goto label_398d4c;
        case 0x398d50u: goto label_398d50;
        case 0x398d54u: goto label_398d54;
        case 0x398d58u: goto label_398d58;
        case 0x398d5cu: goto label_398d5c;
        case 0x398d60u: goto label_398d60;
        case 0x398d64u: goto label_398d64;
        case 0x398d68u: goto label_398d68;
        case 0x398d6cu: goto label_398d6c;
        default: break;
    }

    ctx->pc = 0x398c90u;

label_398c90:
    // 0x398c90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x398c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_398c94:
    // 0x398c94: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x398c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_398c98:
    // 0x398c98: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x398c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_398c9c:
    // 0x398c9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x398c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_398ca0:
    // 0x398ca0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x398ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_398ca4:
    // 0x398ca4: 0x8c920004  lw          $s2, 0x4($a0)
    ctx->pc = 0x398ca4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_398ca8:
    // 0x398ca8: 0x1240002b  beqz        $s2, . + 4 + (0x2B << 2)
label_398cac:
    if (ctx->pc == 0x398CACu) {
        ctx->pc = 0x398CACu;
            // 0x398cac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x398CB0u;
        goto label_398cb0;
    }
    ctx->pc = 0x398CA8u;
    {
        const bool branch_taken_0x398ca8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x398CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x398CA8u;
            // 0x398cac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398ca8) {
            ctx->pc = 0x398D58u;
            goto label_398d58;
        }
    }
    ctx->pc = 0x398CB0u;
label_398cb0:
    // 0x398cb0: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x398cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_398cb4:
    // 0x398cb4: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x398cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_398cb8:
    // 0x398cb8: 0xc04a508  jal         func_129420
label_398cbc:
    if (ctx->pc == 0x398CBCu) {
        ctx->pc = 0x398CBCu;
            // 0x398cbc: 0x123080  sll         $a2, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->pc = 0x398CC0u;
        goto label_398cc0;
    }
    ctx->pc = 0x398CB8u;
    SET_GPR_U32(ctx, 31, 0x398CC0u);
    ctx->pc = 0x398CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x398CB8u;
            // 0x398cbc: 0x123080  sll         $a2, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398CC0u; }
        if (ctx->pc != 0x398CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398CC0u; }
        if (ctx->pc != 0x398CC0u) { return; }
    }
    ctx->pc = 0x398CC0u;
label_398cc0:
    // 0x398cc0: 0x8e11001c  lw          $s1, 0x1C($s0)
    ctx->pc = 0x398cc0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_398cc4:
    // 0x398cc4: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x398cc4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_398cc8:
    // 0x398cc8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x398cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_398ccc:
    // 0x398ccc: 0x8e0401c0  lw          $a0, 0x1C0($s0)
    ctx->pc = 0x398cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
label_398cd0:
    // 0x398cd0: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
label_398cd4:
    if (ctx->pc == 0x398CD4u) {
        ctx->pc = 0x398CD8u;
        goto label_398cd8;
    }
    ctx->pc = 0x398CD0u;
    {
        const bool branch_taken_0x398cd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x398cd0) {
            ctx->pc = 0x398D28u;
            goto label_398d28;
        }
    }
    ctx->pc = 0x398CD8u;
label_398cd8:
    // 0x398cd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x398cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_398cdc:
    // 0x398cdc: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
label_398ce0:
    if (ctx->pc == 0x398CE0u) {
        ctx->pc = 0x398CE4u;
        goto label_398ce4;
    }
    ctx->pc = 0x398CDCu;
    {
        const bool branch_taken_0x398cdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x398cdc) {
            ctx->pc = 0x398D00u;
            goto label_398d00;
        }
    }
    ctx->pc = 0x398CE4u;
label_398ce4:
    // 0x398ce4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_398ce8:
    if (ctx->pc == 0x398CE8u) {
        ctx->pc = 0x398CECu;
        goto label_398cec;
    }
    ctx->pc = 0x398CE4u;
    {
        const bool branch_taken_0x398ce4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x398ce4) {
            ctx->pc = 0x398CF8u;
            goto label_398cf8;
        }
    }
    ctx->pc = 0x398CECu;
label_398cec:
    // 0x398cec: 0x10000016  b           . + 4 + (0x16 << 2)
label_398cf0:
    if (ctx->pc == 0x398CF0u) {
        ctx->pc = 0x398CF4u;
        goto label_398cf4;
    }
    ctx->pc = 0x398CECu;
    {
        const bool branch_taken_0x398cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x398cec) {
            ctx->pc = 0x398D48u;
            goto label_398d48;
        }
    }
    ctx->pc = 0x398CF4u;
label_398cf4:
    // 0x398cf4: 0x0  nop
    ctx->pc = 0x398cf4u;
    // NOP
label_398cf8:
    // 0x398cf8: 0xae0301c0  sw          $v1, 0x1C0($s0)
    ctx->pc = 0x398cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 3));
label_398cfc:
    // 0x398cfc: 0x0  nop
    ctx->pc = 0x398cfcu;
    // NOP
label_398d00:
    // 0x398d00: 0xc0e6374  jal         func_398DD0
label_398d04:
    if (ctx->pc == 0x398D04u) {
        ctx->pc = 0x398D04u;
            // 0x398d04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x398D08u;
        goto label_398d08;
    }
    ctx->pc = 0x398D00u;
    SET_GPR_U32(ctx, 31, 0x398D08u);
    ctx->pc = 0x398D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x398D00u;
            // 0x398d04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x398DD0u;
    if (runtime->hasFunction(0x398DD0u)) {
        auto targetFn = runtime->lookupFunction(0x398DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398D08u; }
        if (ctx->pc != 0x398D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00398DD0_0x398dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398D08u; }
        if (ctx->pc != 0x398D08u) { return; }
    }
    ctx->pc = 0x398D08u;
label_398d08:
    // 0x398d08: 0x8e0401c4  lw          $a0, 0x1C4($s0)
    ctx->pc = 0x398d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 452)));
label_398d0c:
    // 0x398d0c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x398d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_398d10:
    // 0x398d10: 0x1483000d  bne         $a0, $v1, . + 4 + (0xD << 2)
label_398d14:
    if (ctx->pc == 0x398D14u) {
        ctx->pc = 0x398D18u;
        goto label_398d18;
    }
    ctx->pc = 0x398D10u;
    {
        const bool branch_taken_0x398d10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x398d10) {
            ctx->pc = 0x398D48u;
            goto label_398d48;
        }
    }
    ctx->pc = 0x398D18u;
label_398d18:
    // 0x398d18: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x398d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_398d1c:
    // 0x398d1c: 0x1000000a  b           . + 4 + (0xA << 2)
label_398d20:
    if (ctx->pc == 0x398D20u) {
        ctx->pc = 0x398D20u;
            // 0x398d20: 0xae0301c0  sw          $v1, 0x1C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 3));
        ctx->pc = 0x398D24u;
        goto label_398d24;
    }
    ctx->pc = 0x398D1Cu;
    {
        const bool branch_taken_0x398d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x398D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x398D1Cu;
            // 0x398d20: 0xae0301c0  sw          $v1, 0x1C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398d1c) {
            ctx->pc = 0x398D48u;
            goto label_398d48;
        }
    }
    ctx->pc = 0x398D24u;
label_398d24:
    // 0x398d24: 0x0  nop
    ctx->pc = 0x398d24u;
    // NOP
label_398d28:
    // 0x398d28: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x398d28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_398d2c:
    // 0x398d2c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x398d2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_398d30:
    // 0x398d30: 0x320f809  jalr        $t9
label_398d34:
    if (ctx->pc == 0x398D34u) {
        ctx->pc = 0x398D34u;
            // 0x398d34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x398D38u;
        goto label_398d38;
    }
    ctx->pc = 0x398D30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x398D38u);
        ctx->pc = 0x398D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x398D30u;
            // 0x398d34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x398D38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x398D38u; }
            if (ctx->pc != 0x398D38u) { return; }
        }
        }
    }
    ctx->pc = 0x398D38u;
label_398d38:
    // 0x398d38: 0x8e0401c8  lw          $a0, 0x1C8($s0)
    ctx->pc = 0x398d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 456)));
label_398d3c:
    // 0x398d3c: 0xc0e635c  jal         func_398D70
label_398d40:
    if (ctx->pc == 0x398D40u) {
        ctx->pc = 0x398D40u;
            // 0x398d40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x398D44u;
        goto label_398d44;
    }
    ctx->pc = 0x398D3Cu;
    SET_GPR_U32(ctx, 31, 0x398D44u);
    ctx->pc = 0x398D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x398D3Cu;
            // 0x398d40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x398D70u;
    if (runtime->hasFunction(0x398D70u)) {
        auto targetFn = runtime->lookupFunction(0x398D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398D44u; }
        if (ctx->pc != 0x398D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00398D70_0x398d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x398D44u; }
        if (ctx->pc != 0x398D44u) { return; }
    }
    ctx->pc = 0x398D44u;
label_398d44:
    // 0x398d44: 0x0  nop
    ctx->pc = 0x398d44u;
    // NOP
label_398d48:
    // 0x398d48: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x398d48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_398d4c:
    // 0x398d4c: 0x1640ffdd  bnez        $s2, . + 4 + (-0x23 << 2)
label_398d50:
    if (ctx->pc == 0x398D50u) {
        ctx->pc = 0x398D50u;
            // 0x398d50: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x398D54u;
        goto label_398d54;
    }
    ctx->pc = 0x398D4Cu;
    {
        const bool branch_taken_0x398d4c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x398D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x398D4Cu;
            // 0x398d50: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398d4c) {
            ctx->pc = 0x398CC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_398cc4;
        }
    }
    ctx->pc = 0x398D54u;
label_398d54:
    // 0x398d54: 0x0  nop
    ctx->pc = 0x398d54u;
    // NOP
label_398d58:
    // 0x398d58: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x398d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_398d5c:
    // 0x398d5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x398d5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_398d60:
    // 0x398d60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x398d60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_398d64:
    // 0x398d64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x398d64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_398d68:
    // 0x398d68: 0x3e00008  jr          $ra
label_398d6c:
    if (ctx->pc == 0x398D6Cu) {
        ctx->pc = 0x398D6Cu;
            // 0x398d6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x398D70u;
        goto label_fallthrough_0x398d68;
    }
    ctx->pc = 0x398D68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x398D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x398D68u;
            // 0x398d6c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x398d68:
    ctx->pc = 0x398D70u;
}
