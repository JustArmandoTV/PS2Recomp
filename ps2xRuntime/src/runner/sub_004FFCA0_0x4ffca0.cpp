#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004FFCA0
// Address: 0x4ffca0 - 0x4ffea0
void sub_004FFCA0_0x4ffca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004FFCA0_0x4ffca0");
#endif

    switch (ctx->pc) {
        case 0x4ffca0u: goto label_4ffca0;
        case 0x4ffca4u: goto label_4ffca4;
        case 0x4ffca8u: goto label_4ffca8;
        case 0x4ffcacu: goto label_4ffcac;
        case 0x4ffcb0u: goto label_4ffcb0;
        case 0x4ffcb4u: goto label_4ffcb4;
        case 0x4ffcb8u: goto label_4ffcb8;
        case 0x4ffcbcu: goto label_4ffcbc;
        case 0x4ffcc0u: goto label_4ffcc0;
        case 0x4ffcc4u: goto label_4ffcc4;
        case 0x4ffcc8u: goto label_4ffcc8;
        case 0x4ffcccu: goto label_4ffccc;
        case 0x4ffcd0u: goto label_4ffcd0;
        case 0x4ffcd4u: goto label_4ffcd4;
        case 0x4ffcd8u: goto label_4ffcd8;
        case 0x4ffcdcu: goto label_4ffcdc;
        case 0x4ffce0u: goto label_4ffce0;
        case 0x4ffce4u: goto label_4ffce4;
        case 0x4ffce8u: goto label_4ffce8;
        case 0x4ffcecu: goto label_4ffcec;
        case 0x4ffcf0u: goto label_4ffcf0;
        case 0x4ffcf4u: goto label_4ffcf4;
        case 0x4ffcf8u: goto label_4ffcf8;
        case 0x4ffcfcu: goto label_4ffcfc;
        case 0x4ffd00u: goto label_4ffd00;
        case 0x4ffd04u: goto label_4ffd04;
        case 0x4ffd08u: goto label_4ffd08;
        case 0x4ffd0cu: goto label_4ffd0c;
        case 0x4ffd10u: goto label_4ffd10;
        case 0x4ffd14u: goto label_4ffd14;
        case 0x4ffd18u: goto label_4ffd18;
        case 0x4ffd1cu: goto label_4ffd1c;
        case 0x4ffd20u: goto label_4ffd20;
        case 0x4ffd24u: goto label_4ffd24;
        case 0x4ffd28u: goto label_4ffd28;
        case 0x4ffd2cu: goto label_4ffd2c;
        case 0x4ffd30u: goto label_4ffd30;
        case 0x4ffd34u: goto label_4ffd34;
        case 0x4ffd38u: goto label_4ffd38;
        case 0x4ffd3cu: goto label_4ffd3c;
        case 0x4ffd40u: goto label_4ffd40;
        case 0x4ffd44u: goto label_4ffd44;
        case 0x4ffd48u: goto label_4ffd48;
        case 0x4ffd4cu: goto label_4ffd4c;
        case 0x4ffd50u: goto label_4ffd50;
        case 0x4ffd54u: goto label_4ffd54;
        case 0x4ffd58u: goto label_4ffd58;
        case 0x4ffd5cu: goto label_4ffd5c;
        case 0x4ffd60u: goto label_4ffd60;
        case 0x4ffd64u: goto label_4ffd64;
        case 0x4ffd68u: goto label_4ffd68;
        case 0x4ffd6cu: goto label_4ffd6c;
        case 0x4ffd70u: goto label_4ffd70;
        case 0x4ffd74u: goto label_4ffd74;
        case 0x4ffd78u: goto label_4ffd78;
        case 0x4ffd7cu: goto label_4ffd7c;
        case 0x4ffd80u: goto label_4ffd80;
        case 0x4ffd84u: goto label_4ffd84;
        case 0x4ffd88u: goto label_4ffd88;
        case 0x4ffd8cu: goto label_4ffd8c;
        case 0x4ffd90u: goto label_4ffd90;
        case 0x4ffd94u: goto label_4ffd94;
        case 0x4ffd98u: goto label_4ffd98;
        case 0x4ffd9cu: goto label_4ffd9c;
        case 0x4ffda0u: goto label_4ffda0;
        case 0x4ffda4u: goto label_4ffda4;
        case 0x4ffda8u: goto label_4ffda8;
        case 0x4ffdacu: goto label_4ffdac;
        case 0x4ffdb0u: goto label_4ffdb0;
        case 0x4ffdb4u: goto label_4ffdb4;
        case 0x4ffdb8u: goto label_4ffdb8;
        case 0x4ffdbcu: goto label_4ffdbc;
        case 0x4ffdc0u: goto label_4ffdc0;
        case 0x4ffdc4u: goto label_4ffdc4;
        case 0x4ffdc8u: goto label_4ffdc8;
        case 0x4ffdccu: goto label_4ffdcc;
        case 0x4ffdd0u: goto label_4ffdd0;
        case 0x4ffdd4u: goto label_4ffdd4;
        case 0x4ffdd8u: goto label_4ffdd8;
        case 0x4ffddcu: goto label_4ffddc;
        case 0x4ffde0u: goto label_4ffde0;
        case 0x4ffde4u: goto label_4ffde4;
        case 0x4ffde8u: goto label_4ffde8;
        case 0x4ffdecu: goto label_4ffdec;
        case 0x4ffdf0u: goto label_4ffdf0;
        case 0x4ffdf4u: goto label_4ffdf4;
        case 0x4ffdf8u: goto label_4ffdf8;
        case 0x4ffdfcu: goto label_4ffdfc;
        case 0x4ffe00u: goto label_4ffe00;
        case 0x4ffe04u: goto label_4ffe04;
        case 0x4ffe08u: goto label_4ffe08;
        case 0x4ffe0cu: goto label_4ffe0c;
        case 0x4ffe10u: goto label_4ffe10;
        case 0x4ffe14u: goto label_4ffe14;
        case 0x4ffe18u: goto label_4ffe18;
        case 0x4ffe1cu: goto label_4ffe1c;
        case 0x4ffe20u: goto label_4ffe20;
        case 0x4ffe24u: goto label_4ffe24;
        case 0x4ffe28u: goto label_4ffe28;
        case 0x4ffe2cu: goto label_4ffe2c;
        case 0x4ffe30u: goto label_4ffe30;
        case 0x4ffe34u: goto label_4ffe34;
        case 0x4ffe38u: goto label_4ffe38;
        case 0x4ffe3cu: goto label_4ffe3c;
        case 0x4ffe40u: goto label_4ffe40;
        case 0x4ffe44u: goto label_4ffe44;
        case 0x4ffe48u: goto label_4ffe48;
        case 0x4ffe4cu: goto label_4ffe4c;
        case 0x4ffe50u: goto label_4ffe50;
        case 0x4ffe54u: goto label_4ffe54;
        case 0x4ffe58u: goto label_4ffe58;
        case 0x4ffe5cu: goto label_4ffe5c;
        case 0x4ffe60u: goto label_4ffe60;
        case 0x4ffe64u: goto label_4ffe64;
        case 0x4ffe68u: goto label_4ffe68;
        case 0x4ffe6cu: goto label_4ffe6c;
        case 0x4ffe70u: goto label_4ffe70;
        case 0x4ffe74u: goto label_4ffe74;
        case 0x4ffe78u: goto label_4ffe78;
        case 0x4ffe7cu: goto label_4ffe7c;
        case 0x4ffe80u: goto label_4ffe80;
        case 0x4ffe84u: goto label_4ffe84;
        case 0x4ffe88u: goto label_4ffe88;
        case 0x4ffe8cu: goto label_4ffe8c;
        case 0x4ffe90u: goto label_4ffe90;
        case 0x4ffe94u: goto label_4ffe94;
        case 0x4ffe98u: goto label_4ffe98;
        case 0x4ffe9cu: goto label_4ffe9c;
        default: break;
    }

    ctx->pc = 0x4ffca0u;

label_4ffca0:
    // 0x4ffca0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ffca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4ffca4:
    // 0x4ffca4: 0x34a500f4  ori         $a1, $a1, 0xF4
    ctx->pc = 0x4ffca4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)244);
label_4ffca8:
    // 0x4ffca8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4ffca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4ffcac:
    // 0x4ffcac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4ffcacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ffcb0:
    // 0x4ffcb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ffcb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4ffcb4:
    // 0x4ffcb4: 0xc11e7b0  jal         func_479EC0
label_4ffcb8:
    if (ctx->pc == 0x4FFCB8u) {
        ctx->pc = 0x4FFCB8u;
            // 0x4ffcb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FFCBCu;
        goto label_4ffcbc;
    }
    ctx->pc = 0x4FFCB4u;
    SET_GPR_U32(ctx, 31, 0x4FFCBCu);
    ctx->pc = 0x4FFCB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FFCB4u;
            // 0x4ffcb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x479EC0u;
    if (runtime->hasFunction(0x479EC0u)) {
        auto targetFn = runtime->lookupFunction(0x479EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FFCBCu; }
        if (ctx->pc != 0x4FFCBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00479EC0_0x479ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FFCBCu; }
        if (ctx->pc != 0x4FFCBCu) { return; }
    }
    ctx->pc = 0x4FFCBCu;
label_4ffcbc:
    // 0x4ffcbc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4ffcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4ffcc0:
    // 0x4ffcc0: 0x244247a0  addiu       $v0, $v0, 0x47A0
    ctx->pc = 0x4ffcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18336));
label_4ffcc4:
    // 0x4ffcc4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4ffcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4ffcc8:
    // 0x4ffcc8: 0x8c590030  lw          $t9, 0x30($v0)
    ctx->pc = 0x4ffcc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_4ffccc:
    // 0x4ffccc: 0x320f809  jalr        $t9
label_4ffcd0:
    if (ctx->pc == 0x4FFCD0u) {
        ctx->pc = 0x4FFCD0u;
            // 0x4ffcd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FFCD4u;
        goto label_4ffcd4;
    }
    ctx->pc = 0x4FFCCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4FFCD4u);
        ctx->pc = 0x4FFCD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FFCCCu;
            // 0x4ffcd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4FFCD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4FFCD4u; }
            if (ctx->pc != 0x4FFCD4u) { return; }
        }
        }
    }
    ctx->pc = 0x4FFCD4u;
label_4ffcd4:
    // 0x4ffcd4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ffcd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ffcd8:
    // 0x4ffcd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4ffcd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4ffcdc:
    // 0x4ffcdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ffcdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4ffce0:
    // 0x4ffce0: 0x3e00008  jr          $ra
label_4ffce4:
    if (ctx->pc == 0x4FFCE4u) {
        ctx->pc = 0x4FFCE4u;
            // 0x4ffce4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4FFCE8u;
        goto label_4ffce8;
    }
    ctx->pc = 0x4FFCE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FFCE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FFCE0u;
            // 0x4ffce4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4FFCE8u;
label_4ffce8:
    // 0x4ffce8: 0x0  nop
    ctx->pc = 0x4ffce8u;
    // NOP
label_4ffcec:
    // 0x4ffcec: 0x0  nop
    ctx->pc = 0x4ffcecu;
    // NOP
label_4ffcf0:
    // 0x4ffcf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4ffcf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4ffcf4:
    // 0x4ffcf4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4ffcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4ffcf8:
    // 0x4ffcf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4ffcf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4ffcfc:
    // 0x4ffcfc: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4ffcfcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4ffd00:
    // 0x4ffd00: 0x50a30012  beql        $a1, $v1, . + 4 + (0x12 << 2)
label_4ffd04:
    if (ctx->pc == 0x4FFD04u) {
        ctx->pc = 0x4FFD04u;
            // 0x4ffd04: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x4FFD08u;
        goto label_4ffd08;
    }
    ctx->pc = 0x4FFD00u;
    {
        const bool branch_taken_0x4ffd00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4ffd00) {
            ctx->pc = 0x4FFD04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FFD00u;
            // 0x4ffd04: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FFD4Cu;
            goto label_4ffd4c;
        }
    }
    ctx->pc = 0x4FFD08u;
label_4ffd08:
    // 0x4ffd08: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4ffd08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4ffd0c:
    // 0x4ffd0c: 0x10a3000e  beq         $a1, $v1, . + 4 + (0xE << 2)
label_4ffd10:
    if (ctx->pc == 0x4FFD10u) {
        ctx->pc = 0x4FFD14u;
        goto label_4ffd14;
    }
    ctx->pc = 0x4FFD0Cu;
    {
        const bool branch_taken_0x4ffd0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4ffd0c) {
            ctx->pc = 0x4FFD48u;
            goto label_4ffd48;
        }
    }
    ctx->pc = 0x4FFD14u;
label_4ffd14:
    // 0x4ffd14: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4ffd14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4ffd18:
    // 0x4ffd18: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_4ffd1c:
    if (ctx->pc == 0x4FFD1Cu) {
        ctx->pc = 0x4FFD20u;
        goto label_4ffd20;
    }
    ctx->pc = 0x4FFD18u;
    {
        const bool branch_taken_0x4ffd18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4ffd18) {
            ctx->pc = 0x4FFD28u;
            goto label_4ffd28;
        }
    }
    ctx->pc = 0x4FFD20u;
label_4ffd20:
    // 0x4ffd20: 0x10000009  b           . + 4 + (0x9 << 2)
label_4ffd24:
    if (ctx->pc == 0x4FFD24u) {
        ctx->pc = 0x4FFD28u;
        goto label_4ffd28;
    }
    ctx->pc = 0x4FFD20u;
    {
        const bool branch_taken_0x4ffd20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ffd20) {
            ctx->pc = 0x4FFD48u;
            goto label_4ffd48;
        }
    }
    ctx->pc = 0x4FFD28u;
label_4ffd28:
    // 0x4ffd28: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4ffd28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4ffd2c:
    // 0x4ffd2c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4ffd2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4ffd30:
    // 0x4ffd30: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4ffd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4ffd34:
    // 0x4ffd34: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x4ffd34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_4ffd38:
    // 0x4ffd38: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x4ffd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_4ffd3c:
    // 0x4ffd3c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4ffd3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4ffd40:
    // 0x4ffd40: 0x320f809  jalr        $t9
label_4ffd44:
    if (ctx->pc == 0x4FFD44u) {
        ctx->pc = 0x4FFD44u;
            // 0x4ffd44: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x4FFD48u;
        goto label_4ffd48;
    }
    ctx->pc = 0x4FFD40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4FFD48u);
        ctx->pc = 0x4FFD44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FFD40u;
            // 0x4ffd44: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4FFD48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4FFD48u; }
            if (ctx->pc != 0x4FFD48u) { return; }
        }
        }
    }
    ctx->pc = 0x4FFD48u;
label_4ffd48:
    // 0x4ffd48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4ffd48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4ffd4c:
    // 0x4ffd4c: 0x3e00008  jr          $ra
label_4ffd50:
    if (ctx->pc == 0x4FFD50u) {
        ctx->pc = 0x4FFD50u;
            // 0x4ffd50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x4FFD54u;
        goto label_4ffd54;
    }
    ctx->pc = 0x4FFD4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FFD50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FFD4Cu;
            // 0x4ffd50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4FFD54u;
label_4ffd54:
    // 0x4ffd54: 0x0  nop
    ctx->pc = 0x4ffd54u;
    // NOP
label_4ffd58:
    // 0x4ffd58: 0x0  nop
    ctx->pc = 0x4ffd58u;
    // NOP
label_4ffd5c:
    // 0x4ffd5c: 0x0  nop
    ctx->pc = 0x4ffd5cu;
    // NOP
label_4ffd60:
    // 0x4ffd60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4ffd60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4ffd64:
    // 0x4ffd64: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4ffd64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4ffd68:
    // 0x4ffd68: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4ffd68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4ffd6c:
    // 0x4ffd6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4ffd6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4ffd70:
    // 0x4ffd70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4ffd70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4ffd74:
    // 0x4ffd74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ffd74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4ffd78:
    // 0x4ffd78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ffd78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4ffd7c:
    // 0x4ffd7c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4ffd7cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4ffd80:
    // 0x4ffd80: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_4ffd84:
    if (ctx->pc == 0x4FFD84u) {
        ctx->pc = 0x4FFD84u;
            // 0x4ffd84: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FFD88u;
        goto label_4ffd88;
    }
    ctx->pc = 0x4FFD80u;
    {
        const bool branch_taken_0x4ffd80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4FFD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FFD80u;
            // 0x4ffd84: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ffd80) {
            ctx->pc = 0x4FFDB4u;
            goto label_4ffdb4;
        }
    }
    ctx->pc = 0x4FFD88u;
label_4ffd88:
    // 0x4ffd88: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4ffd88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4ffd8c:
    // 0x4ffd8c: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_4ffd90:
    if (ctx->pc == 0x4FFD90u) {
        ctx->pc = 0x4FFD90u;
            // 0x4ffd90: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4FFD94u;
        goto label_4ffd94;
    }
    ctx->pc = 0x4FFD8Cu;
    {
        const bool branch_taken_0x4ffd8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4ffd8c) {
            ctx->pc = 0x4FFD90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FFD8Cu;
            // 0x4ffd90: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FFDA8u;
            goto label_4ffda8;
        }
    }
    ctx->pc = 0x4FFD94u;
label_4ffd94:
    // 0x4ffd94: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4ffd94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4ffd98:
    // 0x4ffd98: 0x10a30021  beq         $a1, $v1, . + 4 + (0x21 << 2)
label_4ffd9c:
    if (ctx->pc == 0x4FFD9Cu) {
        ctx->pc = 0x4FFDA0u;
        goto label_4ffda0;
    }
    ctx->pc = 0x4FFD98u;
    {
        const bool branch_taken_0x4ffd98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4ffd98) {
            ctx->pc = 0x4FFE20u;
            goto label_4ffe20;
        }
    }
    ctx->pc = 0x4FFDA0u;
label_4ffda0:
    // 0x4ffda0: 0x1000001f  b           . + 4 + (0x1F << 2)
label_4ffda4:
    if (ctx->pc == 0x4FFDA4u) {
        ctx->pc = 0x4FFDA8u;
        goto label_4ffda8;
    }
    ctx->pc = 0x4FFDA0u;
    {
        const bool branch_taken_0x4ffda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ffda0) {
            ctx->pc = 0x4FFE20u;
            goto label_4ffe20;
        }
    }
    ctx->pc = 0x4FFDA8u;
label_4ffda8:
    // 0x4ffda8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4ffda8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4ffdac:
    // 0x4ffdac: 0x320f809  jalr        $t9
label_4ffdb0:
    if (ctx->pc == 0x4FFDB0u) {
        ctx->pc = 0x4FFDB4u;
        goto label_4ffdb4;
    }
    ctx->pc = 0x4FFDACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4FFDB4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4FFDB4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4FFDB4u; }
            if (ctx->pc != 0x4FFDB4u) { return; }
        }
        }
    }
    ctx->pc = 0x4FFDB4u;
label_4ffdb4:
    // 0x4ffdb4: 0x8e300070  lw          $s0, 0x70($s1)
    ctx->pc = 0x4ffdb4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_4ffdb8:
    // 0x4ffdb8: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
label_4ffdbc:
    if (ctx->pc == 0x4FFDBCu) {
        ctx->pc = 0x4FFDC0u;
        goto label_4ffdc0;
    }
    ctx->pc = 0x4FFDB8u;
    {
        const bool branch_taken_0x4ffdb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ffdb8) {
            ctx->pc = 0x4FFE20u;
            goto label_4ffe20;
        }
    }
    ctx->pc = 0x4FFDC0u;
label_4ffdc0:
    // 0x4ffdc0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4ffdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4ffdc4:
    // 0x4ffdc4: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4ffdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4ffdc8:
    // 0x4ffdc8: 0x8c430cb4  lw          $v1, 0xCB4($v0)
    ctx->pc = 0x4ffdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_4ffdcc:
    // 0x4ffdcc: 0x8c420cb8  lw          $v0, 0xCB8($v0)
    ctx->pc = 0x4ffdccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3256)));
label_4ffdd0:
    // 0x4ffdd0: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
label_4ffdd4:
    if (ctx->pc == 0x4FFDD4u) {
        ctx->pc = 0x4FFDD4u;
            // 0x4ffdd4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FFDD8u;
        goto label_4ffdd8;
    }
    ctx->pc = 0x4FFDD0u;
    {
        const bool branch_taken_0x4ffdd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4ffdd0) {
            ctx->pc = 0x4FFDD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FFDD0u;
            // 0x4ffdd4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FFDD8u;
            goto label_4ffdd8;
        }
    }
    ctx->pc = 0x4FFDD8u;
label_4ffdd8:
    // 0x4ffdd8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x4ffdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4ffddc:
    // 0x4ffddc: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_4ffde0:
    if (ctx->pc == 0x4FFDE0u) {
        ctx->pc = 0x4FFDE0u;
            // 0x4ffde0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FFDE4u;
        goto label_4ffde4;
    }
    ctx->pc = 0x4FFDDCu;
    {
        const bool branch_taken_0x4ffddc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4ffddc) {
            ctx->pc = 0x4FFDE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FFDDCu;
            // 0x4ffde0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FFDF8u;
            goto label_4ffdf8;
        }
    }
    ctx->pc = 0x4FFDE4u;
label_4ffde4:
    // 0x4ffde4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x4ffde4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4ffde8:
    // 0x4ffde8: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x4ffde8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_4ffdec:
    // 0x4ffdec: 0x320f809  jalr        $t9
label_4ffdf0:
    if (ctx->pc == 0x4FFDF0u) {
        ctx->pc = 0x4FFDF0u;
            // 0x4ffdf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FFDF4u;
        goto label_4ffdf4;
    }
    ctx->pc = 0x4FFDECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4FFDF4u);
        ctx->pc = 0x4FFDF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FFDECu;
            // 0x4ffdf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4FFDF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4FFDF4u; }
            if (ctx->pc != 0x4FFDF4u) { return; }
        }
        }
    }
    ctx->pc = 0x4FFDF4u;
label_4ffdf4:
    // 0x4ffdf4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4ffdf4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ffdf8:
    // 0x4ffdf8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4ffdf8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ffdfc:
    // 0x4ffdfc: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x4ffdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_4ffe00:
    // 0x4ffe00: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4ffe00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4ffe04:
    // 0x4ffe04: 0xc13ffa8  jal         func_4FFEA0
label_4ffe08:
    if (ctx->pc == 0x4FFE08u) {
        ctx->pc = 0x4FFE08u;
            // 0x4ffe08: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4FFE0Cu;
        goto label_4ffe0c;
    }
    ctx->pc = 0x4FFE04u;
    SET_GPR_U32(ctx, 31, 0x4FFE0Cu);
    ctx->pc = 0x4FFE08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FFE04u;
            // 0x4ffe08: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4FFEA0u;
    if (runtime->hasFunction(0x4FFEA0u)) {
        auto targetFn = runtime->lookupFunction(0x4FFEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FFE0Cu; }
        if (ctx->pc != 0x4FFE0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004FFEA0_0x4ffea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FFE0Cu; }
        if (ctx->pc != 0x4FFE0Cu) { return; }
    }
    ctx->pc = 0x4FFE0Cu;
label_4ffe0c:
    // 0x4ffe0c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4ffe0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4ffe10:
    // 0x4ffe10: 0x270182b  sltu        $v1, $s3, $s0
    ctx->pc = 0x4ffe10u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4ffe14:
    // 0x4ffe14: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_4ffe18:
    if (ctx->pc == 0x4FFE18u) {
        ctx->pc = 0x4FFE18u;
            // 0x4ffe18: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4FFE1Cu;
        goto label_4ffe1c;
    }
    ctx->pc = 0x4FFE14u;
    {
        const bool branch_taken_0x4ffe14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4FFE18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FFE14u;
            // 0x4ffe18: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ffe14) {
            ctx->pc = 0x4FFDFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4ffdfc;
        }
    }
    ctx->pc = 0x4FFE1Cu;
label_4ffe1c:
    // 0x4ffe1c: 0x0  nop
    ctx->pc = 0x4ffe1cu;
    // NOP
label_4ffe20:
    // 0x4ffe20: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4ffe20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4ffe24:
    // 0x4ffe24: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4ffe24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ffe28:
    // 0x4ffe28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4ffe28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ffe2c:
    // 0x4ffe2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ffe2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ffe30:
    // 0x4ffe30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ffe30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4ffe34:
    // 0x4ffe34: 0x3e00008  jr          $ra
label_4ffe38:
    if (ctx->pc == 0x4FFE38u) {
        ctx->pc = 0x4FFE38u;
            // 0x4ffe38: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4FFE3Cu;
        goto label_4ffe3c;
    }
    ctx->pc = 0x4FFE34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FFE38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FFE34u;
            // 0x4ffe38: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4FFE3Cu;
label_4ffe3c:
    // 0x4ffe3c: 0x0  nop
    ctx->pc = 0x4ffe3cu;
    // NOP
label_4ffe40:
    // 0x4ffe40: 0x8c880070  lw          $t0, 0x70($a0)
    ctx->pc = 0x4ffe40u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4ffe44:
    // 0x4ffe44: 0x11000014  beqz        $t0, . + 4 + (0x14 << 2)
label_4ffe48:
    if (ctx->pc == 0x4FFE48u) {
        ctx->pc = 0x4FFE4Cu;
        goto label_4ffe4c;
    }
    ctx->pc = 0x4FFE44u;
    {
        const bool branch_taken_0x4ffe44 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ffe44) {
            ctx->pc = 0x4FFE98u;
            goto label_4ffe98;
        }
    }
    ctx->pc = 0x4FFE4Cu;
label_4ffe4c:
    // 0x4ffe4c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x4ffe4cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ffe50:
    // 0x4ffe50: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4ffe50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ffe54:
    // 0x4ffe54: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4ffe54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4ffe58:
    // 0x4ffe58: 0x8c860074  lw          $a2, 0x74($a0)
    ctx->pc = 0x4ffe58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_4ffe5c:
    // 0x4ffe5c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x4ffe5cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_4ffe60:
    // 0x4ffe60: 0x148282b  sltu        $a1, $t2, $t0
    ctx->pc = 0x4ffe60u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_4ffe64:
    // 0x4ffe64: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x4ffe64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_4ffe68:
    // 0x4ffe68: 0x8cc70000  lw          $a3, 0x0($a2)
    ctx->pc = 0x4ffe68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4ffe6c:
    // 0x4ffe6c: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x4ffe6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_4ffe70:
    // 0x4ffe70: 0xace00068  sw          $zero, 0x68($a3)
    ctx->pc = 0x4ffe70u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 104), GPR_U32(ctx, 0));
label_4ffe74:
    // 0x4ffe74: 0xace0006c  sw          $zero, 0x6C($a3)
    ctx->pc = 0x4ffe74u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 108), GPR_U32(ctx, 0));
label_4ffe78:
    // 0x4ffe78: 0xace00074  sw          $zero, 0x74($a3)
    ctx->pc = 0x4ffe78u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 116), GPR_U32(ctx, 0));
label_4ffe7c:
    // 0x4ffe7c: 0xace00078  sw          $zero, 0x78($a3)
    ctx->pc = 0x4ffe7cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 120), GPR_U32(ctx, 0));
label_4ffe80:
    // 0x4ffe80: 0x8c668a08  lw          $a2, -0x75F8($v1)
    ctx->pc = 0x4ffe80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4ffe84:
    // 0x4ffe84: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x4ffe84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4ffe88:
    // 0x4ffe88: 0xe4e00070  swc1        $f0, 0x70($a3)
    ctx->pc = 0x4ffe88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 112), bits); }
label_4ffe8c:
    // 0x4ffe8c: 0xace00064  sw          $zero, 0x64($a3)
    ctx->pc = 0x4ffe8cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 100), GPR_U32(ctx, 0));
label_4ffe90:
    // 0x4ffe90: 0x14a0fff1  bnez        $a1, . + 4 + (-0xF << 2)
label_4ffe94:
    if (ctx->pc == 0x4FFE94u) {
        ctx->pc = 0x4FFE94u;
            // 0x4ffe94: 0xace00060  sw          $zero, 0x60($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 96), GPR_U32(ctx, 0));
        ctx->pc = 0x4FFE98u;
        goto label_4ffe98;
    }
    ctx->pc = 0x4FFE90u;
    {
        const bool branch_taken_0x4ffe90 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x4FFE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FFE90u;
            // 0x4ffe94: 0xace00060  sw          $zero, 0x60($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ffe90) {
            ctx->pc = 0x4FFE58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4ffe58;
        }
    }
    ctx->pc = 0x4FFE98u;
label_4ffe98:
    // 0x4ffe98: 0x3e00008  jr          $ra
label_4ffe9c:
    if (ctx->pc == 0x4FFE9Cu) {
        ctx->pc = 0x4FFEA0u;
        goto label_fallthrough_0x4ffe98;
    }
    ctx->pc = 0x4FFE98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x4ffe98:
    ctx->pc = 0x4FFEA0u;
}
