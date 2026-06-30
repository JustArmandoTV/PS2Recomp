#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018BCD0
// Address: 0x18bcd0 - 0x18be48
void sub_0018BCD0_0x18bcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018BCD0_0x18bcd0");
#endif

    switch (ctx->pc) {
        case 0x18bcd0u: goto label_18bcd0;
        case 0x18bcd4u: goto label_18bcd4;
        case 0x18bcd8u: goto label_18bcd8;
        case 0x18bcdcu: goto label_18bcdc;
        case 0x18bce0u: goto label_18bce0;
        case 0x18bce4u: goto label_18bce4;
        case 0x18bce8u: goto label_18bce8;
        case 0x18bcecu: goto label_18bcec;
        case 0x18bcf0u: goto label_18bcf0;
        case 0x18bcf4u: goto label_18bcf4;
        case 0x18bcf8u: goto label_18bcf8;
        case 0x18bcfcu: goto label_18bcfc;
        case 0x18bd00u: goto label_18bd00;
        case 0x18bd04u: goto label_18bd04;
        case 0x18bd08u: goto label_18bd08;
        case 0x18bd0cu: goto label_18bd0c;
        case 0x18bd10u: goto label_18bd10;
        case 0x18bd14u: goto label_18bd14;
        case 0x18bd18u: goto label_18bd18;
        case 0x18bd1cu: goto label_18bd1c;
        case 0x18bd20u: goto label_18bd20;
        case 0x18bd24u: goto label_18bd24;
        case 0x18bd28u: goto label_18bd28;
        case 0x18bd2cu: goto label_18bd2c;
        case 0x18bd30u: goto label_18bd30;
        case 0x18bd34u: goto label_18bd34;
        case 0x18bd38u: goto label_18bd38;
        case 0x18bd3cu: goto label_18bd3c;
        case 0x18bd40u: goto label_18bd40;
        case 0x18bd44u: goto label_18bd44;
        case 0x18bd48u: goto label_18bd48;
        case 0x18bd4cu: goto label_18bd4c;
        case 0x18bd50u: goto label_18bd50;
        case 0x18bd54u: goto label_18bd54;
        case 0x18bd58u: goto label_18bd58;
        case 0x18bd5cu: goto label_18bd5c;
        case 0x18bd60u: goto label_18bd60;
        case 0x18bd64u: goto label_18bd64;
        case 0x18bd68u: goto label_18bd68;
        case 0x18bd6cu: goto label_18bd6c;
        case 0x18bd70u: goto label_18bd70;
        case 0x18bd74u: goto label_18bd74;
        case 0x18bd78u: goto label_18bd78;
        case 0x18bd7cu: goto label_18bd7c;
        case 0x18bd80u: goto label_18bd80;
        case 0x18bd84u: goto label_18bd84;
        case 0x18bd88u: goto label_18bd88;
        case 0x18bd8cu: goto label_18bd8c;
        case 0x18bd90u: goto label_18bd90;
        case 0x18bd94u: goto label_18bd94;
        case 0x18bd98u: goto label_18bd98;
        case 0x18bd9cu: goto label_18bd9c;
        case 0x18bda0u: goto label_18bda0;
        case 0x18bda4u: goto label_18bda4;
        case 0x18bda8u: goto label_18bda8;
        case 0x18bdacu: goto label_18bdac;
        case 0x18bdb0u: goto label_18bdb0;
        case 0x18bdb4u: goto label_18bdb4;
        case 0x18bdb8u: goto label_18bdb8;
        case 0x18bdbcu: goto label_18bdbc;
        case 0x18bdc0u: goto label_18bdc0;
        case 0x18bdc4u: goto label_18bdc4;
        case 0x18bdc8u: goto label_18bdc8;
        case 0x18bdccu: goto label_18bdcc;
        case 0x18bdd0u: goto label_18bdd0;
        case 0x18bdd4u: goto label_18bdd4;
        case 0x18bdd8u: goto label_18bdd8;
        case 0x18bddcu: goto label_18bddc;
        case 0x18bde0u: goto label_18bde0;
        case 0x18bde4u: goto label_18bde4;
        case 0x18bde8u: goto label_18bde8;
        case 0x18bdecu: goto label_18bdec;
        case 0x18bdf0u: goto label_18bdf0;
        case 0x18bdf4u: goto label_18bdf4;
        case 0x18bdf8u: goto label_18bdf8;
        case 0x18bdfcu: goto label_18bdfc;
        case 0x18be00u: goto label_18be00;
        case 0x18be04u: goto label_18be04;
        case 0x18be08u: goto label_18be08;
        case 0x18be0cu: goto label_18be0c;
        case 0x18be10u: goto label_18be10;
        case 0x18be14u: goto label_18be14;
        case 0x18be18u: goto label_18be18;
        case 0x18be1cu: goto label_18be1c;
        case 0x18be20u: goto label_18be20;
        case 0x18be24u: goto label_18be24;
        case 0x18be28u: goto label_18be28;
        case 0x18be2cu: goto label_18be2c;
        case 0x18be30u: goto label_18be30;
        case 0x18be34u: goto label_18be34;
        case 0x18be38u: goto label_18be38;
        case 0x18be3cu: goto label_18be3c;
        case 0x18be40u: goto label_18be40;
        case 0x18be44u: goto label_18be44;
        default: break;
    }

    ctx->pc = 0x18bcd0u;

label_18bcd0:
    // 0x18bcd0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x18bcd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_18bcd4:
    // 0x18bcd4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x18bcd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_18bcd8:
    // 0x18bcd8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18bcd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18bcdc:
    // 0x18bcdc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x18bcdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_18bce0:
    // 0x18bce0: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x18bce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_18bce4:
    // 0x18bce4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x18bce4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_18bce8:
    // 0x18bce8: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x18bce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_18bcec:
    // 0x18bcec: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x18bcecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_18bcf0:
    // 0x18bcf0: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x18bcf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_18bcf4:
    // 0x18bcf4: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x18bcf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_18bcf8:
    // 0x18bcf8: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x18bcf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_18bcfc:
    // 0x18bcfc: 0x8e5305a0  lw          $s3, 0x5A0($s2)
    ctx->pc = 0x18bcfcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1440)));
label_18bd00:
    // 0x18bd00: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x18bd00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_18bd04:
    // 0x18bd04: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x18bd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_18bd08:
    // 0x18bd08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x18bd08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_18bd0c:
    // 0x18bd0c: 0x24540130  addiu       $s4, $v0, 0x130
    ctx->pc = 0x18bd0cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
label_18bd10:
    // 0x18bd10: 0x2541821  addu        $v1, $s2, $s4
    ctx->pc = 0x18bd10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_18bd14:
    // 0x18bd14: 0x8c71000c  lw          $s1, 0xC($v1)
    ctx->pc = 0x18bd14u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_18bd18:
    // 0x18bd18: 0x1220002f  beqz        $s1, . + 4 + (0x2F << 2)
label_18bd1c:
    if (ctx->pc == 0x18BD1Cu) {
        ctx->pc = 0x18BD1Cu;
            // 0x18bd1c: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18BD20u;
        goto label_18bd20;
    }
    ctx->pc = 0x18BD18u;
    {
        const bool branch_taken_0x18bd18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BD1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BD18u;
            // 0x18bd1c: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bd18) {
            ctx->pc = 0x18BDD8u;
            goto label_18bdd8;
        }
    }
    ctx->pc = 0x18BD20u;
label_18bd20:
    // 0x18bd20: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x18bd20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_18bd24:
    // 0x18bd24: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x18bd24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_18bd28:
    // 0x18bd28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18bd28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18bd2c:
    // 0x18bd2c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x18bd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_18bd30:
    // 0x18bd30: 0x40f809  jalr        $v0
label_18bd34:
    if (ctx->pc == 0x18BD34u) {
        ctx->pc = 0x18BD34u;
            // 0x18bd34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18BD38u;
        goto label_18bd38;
    }
    ctx->pc = 0x18BD30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18BD38u);
        ctx->pc = 0x18BD34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BD30u;
            // 0x18bd34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18BD38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18BD38u; }
            if (ctx->pc != 0x18BD38u) { return; }
        }
        }
    }
    ctx->pc = 0x18BD38u;
label_18bd38:
    // 0x18bd38: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x18bd38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_18bd3c:
    // 0x18bd3c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x18bd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_18bd40:
    // 0x18bd40: 0xc04a508  jal         func_129420
label_18bd44:
    if (ctx->pc == 0x18BD44u) {
        ctx->pc = 0x18BD44u;
            // 0x18bd44: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x18BD48u;
        goto label_18bd48;
    }
    ctx->pc = 0x18BD40u;
    SET_GPR_U32(ctx, 31, 0x18BD48u);
    ctx->pc = 0x18BD44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BD40u;
            // 0x18bd44: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BD48u; }
        if (ctx->pc != 0x18BD48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BD48u; }
        if (ctx->pc != 0x18BD48u) { return; }
    }
    ctx->pc = 0x18BD48u;
label_18bd48:
    // 0x18bd48: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x18bd48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_18bd4c:
    // 0x18bd4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18bd4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18bd50:
    // 0x18bd50: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x18bd50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18bd54:
    // 0x18bd54: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x18bd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_18bd58:
    // 0x18bd58: 0x40f809  jalr        $v0
label_18bd5c:
    if (ctx->pc == 0x18BD5Cu) {
        ctx->pc = 0x18BD5Cu;
            // 0x18bd5c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18BD60u;
        goto label_18bd60;
    }
    ctx->pc = 0x18BD58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18BD60u);
        ctx->pc = 0x18BD5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BD58u;
            // 0x18bd5c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18BD60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18BD60u; }
            if (ctx->pc != 0x18BD60u) { return; }
        }
        }
    }
    ctx->pc = 0x18BD60u;
label_18bd60:
    // 0x18bd60: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x18bd60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_18bd64:
    // 0x18bd64: 0x95102a  slt         $v0, $a0, $s5
    ctx->pc = 0x18bd64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_18bd68:
    // 0x18bd68: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_18bd6c:
    if (ctx->pc == 0x18BD6Cu) {
        ctx->pc = 0x18BD6Cu;
            // 0x18bd6c: 0x2541021  addu        $v0, $s2, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
        ctx->pc = 0x18BD70u;
        goto label_18bd70;
    }
    ctx->pc = 0x18BD68u;
    {
        const bool branch_taken_0x18bd68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BD6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BD68u;
            // 0x18bd6c: 0x2541021  addu        $v0, $s2, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bd68) {
            ctx->pc = 0x18BDC0u;
            goto label_18bdc0;
        }
    }
    ctx->pc = 0x18BD70u;
label_18bd70:
    // 0x18bd70: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x18bd70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_18bd74:
    // 0x18bd74: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x18bd74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_18bd78:
    // 0x18bd78: 0x2a43023  subu        $a2, $s5, $a0
    ctx->pc = 0x18bd78u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
label_18bd7c:
    // 0x18bd7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18bd7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18bd80:
    // 0x18bd80: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x18bd80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_18bd84:
    // 0x18bd84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18bd84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18bd88:
    // 0x18bd88: 0x40f809  jalr        $v0
label_18bd8c:
    if (ctx->pc == 0x18BD8Cu) {
        ctx->pc = 0x18BD8Cu;
            // 0x18bd8c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18BD90u;
        goto label_18bd90;
    }
    ctx->pc = 0x18BD88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18BD90u);
        ctx->pc = 0x18BD8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BD88u;
            // 0x18bd8c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18BD90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18BD90u; }
            if (ctx->pc != 0x18BD90u) { return; }
        }
        }
    }
    ctx->pc = 0x18BD90u;
label_18bd90:
    // 0x18bd90: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x18bd90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_18bd94:
    // 0x18bd94: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x18bd94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_18bd98:
    // 0x18bd98: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x18bd98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_18bd9c:
    // 0x18bd9c: 0xc04a508  jal         func_129420
label_18bda0:
    if (ctx->pc == 0x18BDA0u) {
        ctx->pc = 0x18BDA0u;
            // 0x18bda0: 0x2c52821  addu        $a1, $s6, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
        ctx->pc = 0x18BDA4u;
        goto label_18bda4;
    }
    ctx->pc = 0x18BD9Cu;
    SET_GPR_U32(ctx, 31, 0x18BDA4u);
    ctx->pc = 0x18BDA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BD9Cu;
            // 0x18bda0: 0x2c52821  addu        $a1, $s6, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BDA4u; }
        if (ctx->pc != 0x18BDA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BDA4u; }
        if (ctx->pc != 0x18BDA4u) { return; }
    }
    ctx->pc = 0x18BDA4u;
label_18bda4:
    // 0x18bda4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x18bda4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_18bda8:
    // 0x18bda8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18bda8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_18bdac:
    // 0x18bdac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x18bdacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18bdb0:
    // 0x18bdb0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x18bdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_18bdb4:
    // 0x18bdb4: 0x40f809  jalr        $v0
label_18bdb8:
    if (ctx->pc == 0x18BDB8u) {
        ctx->pc = 0x18BDB8u;
            // 0x18bdb8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x18BDBCu;
        goto label_18bdbc;
    }
    ctx->pc = 0x18BDB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18BDBCu);
        ctx->pc = 0x18BDB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BDB4u;
            // 0x18bdb8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18BDBCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18BDBCu; }
            if (ctx->pc != 0x18BDBCu) { return; }
        }
        }
    }
    ctx->pc = 0x18BDBCu;
label_18bdbc:
    // 0x18bdbc: 0x2541021  addu        $v0, $s2, $s4
    ctx->pc = 0x18bdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_18bdc0:
    // 0x18bdc0: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x18bdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_18bdc4:
    // 0x18bdc4: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_18bdc8:
    if (ctx->pc == 0x18BDC8u) {
        ctx->pc = 0x18BDC8u;
            // 0x18bdc8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x18BDCCu;
        goto label_18bdcc;
    }
    ctx->pc = 0x18BDC4u;
    {
        const bool branch_taken_0x18bdc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bdc4) {
            ctx->pc = 0x18BDC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18BDC4u;
            // 0x18bdc8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18BDDCu;
            goto label_18bddc;
        }
    }
    ctx->pc = 0x18BDCCu;
label_18bdcc:
    // 0x18bdcc: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x18bdccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_18bdd0:
    // 0x18bdd0: 0x60f809  jalr        $v1
label_18bdd4:
    if (ctx->pc == 0x18BDD4u) {
        ctx->pc = 0x18BDD4u;
            // 0x18bdd4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18BDD8u;
        goto label_18bdd8;
    }
    ctx->pc = 0x18BDD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x18BDD8u);
        ctx->pc = 0x18BDD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BDD0u;
            // 0x18bdd4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x18BDD8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x18BDD8u; }
            if (ctx->pc != 0x18BDD8u) { return; }
        }
        }
    }
    ctx->pc = 0x18BDD8u;
label_18bdd8:
    // 0x18bdd8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x18bdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_18bddc:
    // 0x18bddc: 0x16620010  bne         $s3, $v0, . + 4 + (0x10 << 2)
label_18bde0:
    if (ctx->pc == 0x18BDE0u) {
        ctx->pc = 0x18BDE0u;
            // 0x18bde0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x18BDE4u;
        goto label_18bde4;
    }
    ctx->pc = 0x18BDDCu;
    {
        const bool branch_taken_0x18bddc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x18BDE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BDDCu;
            // 0x18bde0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bddc) {
            ctx->pc = 0x18BE20u;
            goto label_18be20;
        }
    }
    ctx->pc = 0x18BDE4u;
label_18bde4:
    // 0x18bde4: 0x8e42016c  lw          $v0, 0x16C($s2)
    ctx->pc = 0x18bde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 364)));
label_18bde8:
    // 0x18bde8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_18bdec:
    if (ctx->pc == 0x18BDECu) {
        ctx->pc = 0x18BDECu;
            // 0x18bdec: 0xdfb10028  ld          $s1, 0x28($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->pc = 0x18BDF0u;
        goto label_18bdf0;
    }
    ctx->pc = 0x18BDE8u;
    {
        const bool branch_taken_0x18bde8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BDECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BDE8u;
            // 0x18bdec: 0xdfb10028  ld          $s1, 0x28($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bde8) {
            ctx->pc = 0x18BE24u;
            goto label_18be24;
        }
    }
    ctx->pc = 0x18BDF0u;
label_18bdf0:
    // 0x18bdf0: 0x8e420544  lw          $v0, 0x544($s2)
    ctx->pc = 0x18bdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1348)));
label_18bdf4:
    // 0x18bdf4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_18bdf8:
    if (ctx->pc == 0x18BDF8u) {
        ctx->pc = 0x18BDF8u;
            // 0x18bdf8: 0x3c050064  lui         $a1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
        ctx->pc = 0x18BDFCu;
        goto label_18bdfc;
    }
    ctx->pc = 0x18BDF4u;
    {
        const bool branch_taken_0x18bdf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BDF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BDF4u;
            // 0x18bdf8: 0x3c050064  lui         $a1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bdf4) {
            ctx->pc = 0x18BE0Cu;
            goto label_18be0c;
        }
    }
    ctx->pc = 0x18BDFCu;
label_18bdfc:
    // 0x18bdfc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18bdfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18be00:
    // 0x18be00: 0x24a581f8  addiu       $a1, $a1, -0x7E08
    ctx->pc = 0x18be00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935032));
label_18be04:
    // 0x18be04: 0xc062f92  jal         func_18BE48
label_18be08:
    if (ctx->pc == 0x18BE08u) {
        ctx->pc = 0x18BE08u;
            // 0x18be08: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x18BE0Cu;
        goto label_18be0c;
    }
    ctx->pc = 0x18BE04u;
    SET_GPR_U32(ctx, 31, 0x18BE0Cu);
    ctx->pc = 0x18BE08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BE04u;
            // 0x18be08: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18BE48u;
    if (runtime->hasFunction(0x18BE48u)) {
        auto targetFn = runtime->lookupFunction(0x18BE48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BE0Cu; }
        if (ctx->pc != 0x18BE0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018BE48_0x18be48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BE0Cu; }
        if (ctx->pc != 0x18BE0Cu) { return; }
    }
    ctx->pc = 0x18BE0Cu;
label_18be0c:
    // 0x18be0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x18be0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18be10:
    // 0x18be10: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x18be10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_18be14:
    // 0x18be14: 0xc062f92  jal         func_18BE48
label_18be18:
    if (ctx->pc == 0x18BE18u) {
        ctx->pc = 0x18BE18u;
            // 0x18be18: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x18BE1Cu;
        goto label_18be1c;
    }
    ctx->pc = 0x18BE14u;
    SET_GPR_U32(ctx, 31, 0x18BE1Cu);
    ctx->pc = 0x18BE18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18BE14u;
            // 0x18be18: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18BE48u;
    if (runtime->hasFunction(0x18BE48u)) {
        auto targetFn = runtime->lookupFunction(0x18BE48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BE1Cu; }
        if (ctx->pc != 0x18BE1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018BE48_0x18be48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18BE1Cu; }
        if (ctx->pc != 0x18BE1Cu) { return; }
    }
    ctx->pc = 0x18BE1Cu;
label_18be1c:
    // 0x18be1c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x18be1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_18be20:
    // 0x18be20: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x18be20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_18be24:
    // 0x18be24: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x18be24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_18be28:
    // 0x18be28: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x18be28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_18be2c:
    // 0x18be2c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x18be2cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_18be30:
    // 0x18be30: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x18be30u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_18be34:
    // 0x18be34: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x18be34u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_18be38:
    // 0x18be38: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x18be38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_18be3c:
    // 0x18be3c: 0x3e00008  jr          $ra
label_18be40:
    if (ctx->pc == 0x18BE40u) {
        ctx->pc = 0x18BE40u;
            // 0x18be40: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x18BE44u;
        goto label_18be44;
    }
    ctx->pc = 0x18BE3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18BE40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18BE3Cu;
            // 0x18be40: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18BE44u;
label_18be44:
    // 0x18be44: 0x0  nop
    ctx->pc = 0x18be44u;
    // NOP
}
