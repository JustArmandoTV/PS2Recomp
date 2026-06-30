#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CDD10
// Address: 0x1cdd10 - 0x1cde78
void sub_001CDD10_0x1cdd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CDD10_0x1cdd10");
#endif

    switch (ctx->pc) {
        case 0x1cdd10u: goto label_1cdd10;
        case 0x1cdd14u: goto label_1cdd14;
        case 0x1cdd18u: goto label_1cdd18;
        case 0x1cdd1cu: goto label_1cdd1c;
        case 0x1cdd20u: goto label_1cdd20;
        case 0x1cdd24u: goto label_1cdd24;
        case 0x1cdd28u: goto label_1cdd28;
        case 0x1cdd2cu: goto label_1cdd2c;
        case 0x1cdd30u: goto label_1cdd30;
        case 0x1cdd34u: goto label_1cdd34;
        case 0x1cdd38u: goto label_1cdd38;
        case 0x1cdd3cu: goto label_1cdd3c;
        case 0x1cdd40u: goto label_1cdd40;
        case 0x1cdd44u: goto label_1cdd44;
        case 0x1cdd48u: goto label_1cdd48;
        case 0x1cdd4cu: goto label_1cdd4c;
        case 0x1cdd50u: goto label_1cdd50;
        case 0x1cdd54u: goto label_1cdd54;
        case 0x1cdd58u: goto label_1cdd58;
        case 0x1cdd5cu: goto label_1cdd5c;
        case 0x1cdd60u: goto label_1cdd60;
        case 0x1cdd64u: goto label_1cdd64;
        case 0x1cdd68u: goto label_1cdd68;
        case 0x1cdd6cu: goto label_1cdd6c;
        case 0x1cdd70u: goto label_1cdd70;
        case 0x1cdd74u: goto label_1cdd74;
        case 0x1cdd78u: goto label_1cdd78;
        case 0x1cdd7cu: goto label_1cdd7c;
        case 0x1cdd80u: goto label_1cdd80;
        case 0x1cdd84u: goto label_1cdd84;
        case 0x1cdd88u: goto label_1cdd88;
        case 0x1cdd8cu: goto label_1cdd8c;
        case 0x1cdd90u: goto label_1cdd90;
        case 0x1cdd94u: goto label_1cdd94;
        case 0x1cdd98u: goto label_1cdd98;
        case 0x1cdd9cu: goto label_1cdd9c;
        case 0x1cdda0u: goto label_1cdda0;
        case 0x1cdda4u: goto label_1cdda4;
        case 0x1cdda8u: goto label_1cdda8;
        case 0x1cddacu: goto label_1cddac;
        case 0x1cddb0u: goto label_1cddb0;
        case 0x1cddb4u: goto label_1cddb4;
        case 0x1cddb8u: goto label_1cddb8;
        case 0x1cddbcu: goto label_1cddbc;
        case 0x1cddc0u: goto label_1cddc0;
        case 0x1cddc4u: goto label_1cddc4;
        case 0x1cddc8u: goto label_1cddc8;
        case 0x1cddccu: goto label_1cddcc;
        case 0x1cddd0u: goto label_1cddd0;
        case 0x1cddd4u: goto label_1cddd4;
        case 0x1cddd8u: goto label_1cddd8;
        case 0x1cdddcu: goto label_1cdddc;
        case 0x1cdde0u: goto label_1cdde0;
        case 0x1cdde4u: goto label_1cdde4;
        case 0x1cdde8u: goto label_1cdde8;
        case 0x1cddecu: goto label_1cddec;
        case 0x1cddf0u: goto label_1cddf0;
        case 0x1cddf4u: goto label_1cddf4;
        case 0x1cddf8u: goto label_1cddf8;
        case 0x1cddfcu: goto label_1cddfc;
        case 0x1cde00u: goto label_1cde00;
        case 0x1cde04u: goto label_1cde04;
        case 0x1cde08u: goto label_1cde08;
        case 0x1cde0cu: goto label_1cde0c;
        case 0x1cde10u: goto label_1cde10;
        case 0x1cde14u: goto label_1cde14;
        case 0x1cde18u: goto label_1cde18;
        case 0x1cde1cu: goto label_1cde1c;
        case 0x1cde20u: goto label_1cde20;
        case 0x1cde24u: goto label_1cde24;
        case 0x1cde28u: goto label_1cde28;
        case 0x1cde2cu: goto label_1cde2c;
        case 0x1cde30u: goto label_1cde30;
        case 0x1cde34u: goto label_1cde34;
        case 0x1cde38u: goto label_1cde38;
        case 0x1cde3cu: goto label_1cde3c;
        case 0x1cde40u: goto label_1cde40;
        case 0x1cde44u: goto label_1cde44;
        case 0x1cde48u: goto label_1cde48;
        case 0x1cde4cu: goto label_1cde4c;
        case 0x1cde50u: goto label_1cde50;
        case 0x1cde54u: goto label_1cde54;
        case 0x1cde58u: goto label_1cde58;
        case 0x1cde5cu: goto label_1cde5c;
        case 0x1cde60u: goto label_1cde60;
        case 0x1cde64u: goto label_1cde64;
        case 0x1cde68u: goto label_1cde68;
        case 0x1cde6cu: goto label_1cde6c;
        case 0x1cde70u: goto label_1cde70;
        case 0x1cde74u: goto label_1cde74;
        default: break;
    }

    ctx->pc = 0x1cdd10u;

label_1cdd10:
    // 0x1cdd10: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1cdd10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_1cdd14:
    // 0x1cdd14: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1cdd14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1cdd18:
    // 0x1cdd18: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x1cdd18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
label_1cdd1c:
    // 0x1cdd1c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x1cdd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_1cdd20:
    // 0x1cdd20: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1cdd20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1cdd24:
    // 0x1cdd24: 0x3e00008  jr          $ra
label_1cdd28:
    if (ctx->pc == 0x1CDD28u) {
        ctx->pc = 0x1CDD28u;
            // 0x1cdd28: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->pc = 0x1CDD2Cu;
        goto label_1cdd2c;
    }
    ctx->pc = 0x1CDD24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDD24u;
            // 0x1cdd28: 0xac830010  sw          $v1, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CDD2Cu;
label_1cdd2c:
    // 0x1cdd2c: 0x0  nop
    ctx->pc = 0x1cdd2cu;
    // NOP
label_1cdd30:
    // 0x1cdd30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1cdd30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1cdd34:
    // 0x1cdd34: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1cdd34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1cdd38:
    // 0x1cdd38: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1cdd38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1cdd3c:
    // 0x1cdd3c: 0x3442001a  ori         $v0, $v0, 0x1A
    ctx->pc = 0x1cdd3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26);
label_1cdd40:
    // 0x1cdd40: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1cdd40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1cdd44:
    // 0x1cdd44: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1cdd44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cdd48:
    // 0x1cdd48: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1cdd48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1cdd4c:
    // 0x1cdd4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cdd4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1cdd50:
    // 0x1cdd50: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x1cdd50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_1cdd54:
    // 0x1cdd54: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
label_1cdd58:
    if (ctx->pc == 0x1CDD58u) {
        ctx->pc = 0x1CDD58u;
            // 0x1cdd58: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->pc = 0x1CDD5Cu;
        goto label_1cdd5c;
    }
    ctx->pc = 0x1CDD54u;
    {
        const bool branch_taken_0x1cdd54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CDD58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDD54u;
            // 0x1cdd58: 0x43102b  sltu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd54) {
            ctx->pc = 0x1CDDA4u;
            goto label_1cdda4;
        }
    }
    ctx->pc = 0x1CDD5Cu;
label_1cdd5c:
    // 0x1cdd5c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1cdd60:
    if (ctx->pc == 0x1CDD60u) {
        ctx->pc = 0x1CDD64u;
        goto label_1cdd64;
    }
    ctx->pc = 0x1CDD5Cu;
    {
        const bool branch_taken_0x1cdd5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cdd5c) {
            ctx->pc = 0x1CDD7Cu;
            goto label_1cdd7c;
        }
    }
    ctx->pc = 0x1CDD64u;
label_1cdd64:
    // 0x1cdd64: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1cdd64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1cdd68:
    // 0x1cdd68: 0x34420019  ori         $v0, $v0, 0x19
    ctx->pc = 0x1cdd68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25);
label_1cdd6c:
    // 0x1cdd6c: 0x5062001d  beql        $v1, $v0, . + 4 + (0x1D << 2)
label_1cdd70:
    if (ctx->pc == 0x1CDD70u) {
        ctx->pc = 0x1CDD70u;
            // 0x1cdd70: 0x8e51001c  lw          $s1, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->pc = 0x1CDD74u;
        goto label_1cdd74;
    }
    ctx->pc = 0x1CDD6Cu;
    {
        const bool branch_taken_0x1cdd6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cdd6c) {
            ctx->pc = 0x1CDD70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDD6Cu;
            // 0x1cdd70: 0x8e51001c  lw          $s1, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CDDE4u;
            goto label_1cdde4;
        }
    }
    ctx->pc = 0x1CDD74u;
label_1cdd74:
    // 0x1cdd74: 0x10000028  b           . + 4 + (0x28 << 2)
label_1cdd78:
    if (ctx->pc == 0x1CDD78u) {
        ctx->pc = 0x1CDD78u;
            // 0x1cdd78: 0x8e50001c  lw          $s0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->pc = 0x1CDD7Cu;
        goto label_1cdd7c;
    }
    ctx->pc = 0x1CDD74u;
    {
        const bool branch_taken_0x1cdd74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDD78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDD74u;
            // 0x1cdd78: 0x8e50001c  lw          $s0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd74) {
            ctx->pc = 0x1CDE18u;
            goto label_1cde18;
        }
    }
    ctx->pc = 0x1CDD7Cu;
label_1cdd7c:
    // 0x1cdd7c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1cdd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1cdd80:
    // 0x1cdd80: 0x3442001c  ori         $v0, $v0, 0x1C
    ctx->pc = 0x1cdd80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28);
label_1cdd84:
    // 0x1cdd84: 0x50620024  beql        $v1, $v0, . + 4 + (0x24 << 2)
label_1cdd88:
    if (ctx->pc == 0x1CDD88u) {
        ctx->pc = 0x1CDD88u;
            // 0x1cdd88: 0x8e50001c  lw          $s0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->pc = 0x1CDD8Cu;
        goto label_1cdd8c;
    }
    ctx->pc = 0x1CDD84u;
    {
        const bool branch_taken_0x1cdd84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cdd84) {
            ctx->pc = 0x1CDD88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDD84u;
            // 0x1cdd88: 0x8e50001c  lw          $s0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CDE18u;
            goto label_1cde18;
        }
    }
    ctx->pc = 0x1CDD8Cu;
label_1cdd8c:
    // 0x1cdd8c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1cdd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_1cdd90:
    // 0x1cdd90: 0x3442001d  ori         $v0, $v0, 0x1D
    ctx->pc = 0x1cdd90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29);
label_1cdd94:
    // 0x1cdd94: 0x5062001b  beql        $v1, $v0, . + 4 + (0x1B << 2)
label_1cdd98:
    if (ctx->pc == 0x1CDD98u) {
        ctx->pc = 0x1CDD98u;
            // 0x1cdd98: 0x8e51001c  lw          $s1, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->pc = 0x1CDD9Cu;
        goto label_1cdd9c;
    }
    ctx->pc = 0x1CDD94u;
    {
        const bool branch_taken_0x1cdd94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cdd94) {
            ctx->pc = 0x1CDD98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDD94u;
            // 0x1cdd98: 0x8e51001c  lw          $s1, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CDE04u;
            goto label_1cde04;
        }
    }
    ctx->pc = 0x1CDD9Cu;
label_1cdd9c:
    // 0x1cdd9c: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1cdda0:
    if (ctx->pc == 0x1CDDA0u) {
        ctx->pc = 0x1CDDA0u;
            // 0x1cdda0: 0x8e50001c  lw          $s0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->pc = 0x1CDDA4u;
        goto label_1cdda4;
    }
    ctx->pc = 0x1CDD9Cu;
    {
        const bool branch_taken_0x1cdd9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDDA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDD9Cu;
            // 0x1cdda0: 0x8e50001c  lw          $s0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd9c) {
            ctx->pc = 0x1CDE18u;
            goto label_1cde18;
        }
    }
    ctx->pc = 0x1CDDA4u;
label_1cdda4:
    // 0x1cdda4: 0x8e51001c  lw          $s1, 0x1C($s2)
    ctx->pc = 0x1cdda4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_1cdda8:
    // 0x1cdda8: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x1cdda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1cddac:
    // 0x1cddac: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1cddb0:
    if (ctx->pc == 0x1CDDB0u) {
        ctx->pc = 0x1CDDB4u;
        goto label_1cddb4;
    }
    ctx->pc = 0x1CDDACu;
    {
        const bool branch_taken_0x1cddac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cddac) {
            ctx->pc = 0x1CDDD4u;
            goto label_1cddd4;
        }
    }
    ctx->pc = 0x1CDDB4u;
label_1cddb4:
    // 0x1cddb4: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1cddb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1cddb8:
    // 0x1cddb8: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x1cddb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_1cddbc:
    // 0x1cddbc: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x1cddbcu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cddc0:
    // 0x1cddc0: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x1cddc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1cddc4:
    // 0x1cddc4: 0x60f809  jalr        $v1
label_1cddc8:
    if (ctx->pc == 0x1CDDC8u) {
        ctx->pc = 0x1CDDC8u;
            // 0x1cddc8: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->pc = 0x1CDDCCu;
        goto label_1cddcc;
    }
    ctx->pc = 0x1CDDC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1CDDCCu);
        ctx->pc = 0x1CDDC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDDC4u;
            // 0x1cddc8: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CDDCCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CDDCCu; }
            if (ctx->pc != 0x1CDDCCu) { return; }
        }
        }
    }
    ctx->pc = 0x1CDDCCu;
label_1cddcc:
    // 0x1cddcc: 0x380102d  daddu       $v0, $gp, $zero
    ctx->pc = 0x1cddccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_1cddd0:
    // 0x1cddd0: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x1cddd0u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cddd4:
    // 0x1cddd4: 0xc0430e4  jal         func_10C390
label_1cddd8:
    if (ctx->pc == 0x1CDDD8u) {
        ctx->pc = 0x1CDDD8u;
            // 0x1cddd8: 0x8e240028  lw          $a0, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->pc = 0x1CDDDCu;
        goto label_1cdddc;
    }
    ctx->pc = 0x1CDDD4u;
    SET_GPR_U32(ctx, 31, 0x1CDDDCu);
    ctx->pc = 0x1CDDD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDDD4u;
            // 0x1cddd8: 0x8e240028  lw          $a0, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C390u;
    if (runtime->hasFunction(0x10C390u)) {
        auto targetFn = runtime->lookupFunction(0x10C390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDDDCu; }
        if (ctx->pc != 0x1CDDDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C390_0x10c390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDDDCu; }
        if (ctx->pc != 0x1CDDDCu) { return; }
    }
    ctx->pc = 0x1CDDDCu;
label_1cdddc:
    // 0x1cdddc: 0x1000000e  b           . + 4 + (0xE << 2)
label_1cdde0:
    if (ctx->pc == 0x1CDDE0u) {
        ctx->pc = 0x1CDDE0u;
            // 0x1cdde0: 0x8e50001c  lw          $s0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->pc = 0x1CDDE4u;
        goto label_1cdde4;
    }
    ctx->pc = 0x1CDDDCu;
    {
        const bool branch_taken_0x1cdddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDDE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDDDCu;
            // 0x1cdde0: 0x8e50001c  lw          $s0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdddc) {
            ctx->pc = 0x1CDE18u;
            goto label_1cde18;
        }
    }
    ctx->pc = 0x1CDDE4u;
label_1cdde4:
    // 0x1cdde4: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x1cdde4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1cdde8:
    // 0x1cdde8: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x1cdde8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_1cddec:
    // 0x1cddec: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x1cddecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
label_1cddf0:
    // 0x1cddf0: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x1cddf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_1cddf4:
    // 0x1cddf4: 0xc0430e4  jal         func_10C390
label_1cddf8:
    if (ctx->pc == 0x1CDDF8u) {
        ctx->pc = 0x1CDDF8u;
            // 0x1cddf8: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x1CDDFCu;
        goto label_1cddfc;
    }
    ctx->pc = 0x1CDDF4u;
    SET_GPR_U32(ctx, 31, 0x1CDDFCu);
    ctx->pc = 0x1CDDF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDDF4u;
            // 0x1cddf8: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C390u;
    if (runtime->hasFunction(0x10C390u)) {
        auto targetFn = runtime->lookupFunction(0x10C390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDDFCu; }
        if (ctx->pc != 0x1CDDFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C390_0x10c390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDDFCu; }
        if (ctx->pc != 0x1CDDFCu) { return; }
    }
    ctx->pc = 0x1CDDFCu;
label_1cddfc:
    // 0x1cddfc: 0x10000006  b           . + 4 + (0x6 << 2)
label_1cde00:
    if (ctx->pc == 0x1CDE00u) {
        ctx->pc = 0x1CDE00u;
            // 0x1cde00: 0x8e50001c  lw          $s0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->pc = 0x1CDE04u;
        goto label_1cde04;
    }
    ctx->pc = 0x1CDDFCu;
    {
        const bool branch_taken_0x1cddfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDE00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDDFCu;
            // 0x1cde00: 0x8e50001c  lw          $s0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cddfc) {
            ctx->pc = 0x1CDE18u;
            goto label_1cde18;
        }
    }
    ctx->pc = 0x1CDE04u;
label_1cde04:
    // 0x1cde04: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x1cde04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_1cde08:
    // 0x1cde08: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x1cde08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_1cde0c:
    // 0x1cde0c: 0xc0430e4  jal         func_10C390
label_1cde10:
    if (ctx->pc == 0x1CDE10u) {
        ctx->pc = 0x1CDE10u;
            // 0x1cde10: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
        ctx->pc = 0x1CDE14u;
        goto label_1cde14;
    }
    ctx->pc = 0x1CDE0Cu;
    SET_GPR_U32(ctx, 31, 0x1CDE14u);
    ctx->pc = 0x1CDE10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDE0Cu;
            // 0x1cde10: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C390u;
    if (runtime->hasFunction(0x10C390u)) {
        auto targetFn = runtime->lookupFunction(0x10C390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDE14u; }
        if (ctx->pc != 0x1CDE14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C390_0x10c390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDE14u; }
        if (ctx->pc != 0x1CDE14u) { return; }
    }
    ctx->pc = 0x1CDE14u;
label_1cde14:
    // 0x1cde14: 0x8e50001c  lw          $s0, 0x1C($s2)
    ctx->pc = 0x1cde14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_1cde18:
    // 0x1cde18: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1cde18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1cde1c:
    // 0x1cde1c: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
label_1cde20:
    if (ctx->pc == 0x1CDE20u) {
        ctx->pc = 0x1CDE24u;
        goto label_1cde24;
    }
    ctx->pc = 0x1CDE1Cu;
    {
        const bool branch_taken_0x1cde1c = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x1cde1c) {
            ctx->pc = 0x1CDE2Cu;
            goto label_1cde2c;
        }
    }
    ctx->pc = 0x1CDE24u;
label_1cde24:
    // 0x1cde24: 0xc0430e4  jal         func_10C390
label_1cde28:
    if (ctx->pc == 0x1CDE28u) {
        ctx->pc = 0x1CDE2Cu;
        goto label_1cde2c;
    }
    ctx->pc = 0x1CDE24u;
    SET_GPR_U32(ctx, 31, 0x1CDE2Cu);
    ctx->pc = 0x10C390u;
    if (runtime->hasFunction(0x10C390u)) {
        auto targetFn = runtime->lookupFunction(0x10C390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDE2Cu; }
        if (ctx->pc != 0x1CDE2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C390_0x10c390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDE2Cu; }
        if (ctx->pc != 0x1CDE2Cu) { return; }
    }
    ctx->pc = 0x1CDE2Cu;
label_1cde2c:
    // 0x1cde2c: 0xc073744  jal         func_1CDD10
label_1cde30:
    if (ctx->pc == 0x1CDE30u) {
        ctx->pc = 0x1CDE30u;
            // 0x1cde30: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1CDE34u;
        goto label_1cde34;
    }
    ctx->pc = 0x1CDE2Cu;
    SET_GPR_U32(ctx, 31, 0x1CDE34u);
    ctx->pc = 0x1CDE30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDE2Cu;
            // 0x1cde30: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDD10u;
    goto label_1cdd10;
    ctx->pc = 0x1CDE34u;
label_1cde34:
    // 0x1cde34: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1cde34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1cde38:
    // 0x1cde38: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1cde38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1cde3c:
    // 0x1cde3c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1cde3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1cde40:
    // 0x1cde40: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1cde40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1cde44:
    // 0x1cde44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cde44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cde48:
    // 0x1cde48: 0x3e00008  jr          $ra
label_1cde4c:
    if (ctx->pc == 0x1CDE4Cu) {
        ctx->pc = 0x1CDE4Cu;
            // 0x1cde4c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1CDE50u;
        goto label_1cde50;
    }
    ctx->pc = 0x1CDE48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDE48u;
            // 0x1cde4c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CDE50u;
label_1cde50:
    // 0x1cde50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cde50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1cde54:
    // 0x1cde54: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x1cde54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_1cde58:
    // 0x1cde58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cde58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1cde5c:
    // 0x1cde5c: 0x24082000  addiu       $t0, $zero, 0x2000
    ctx->pc = 0x1cde5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_1cde60:
    // 0x1cde60: 0xc07379e  jal         func_1CDE78
label_1cde64:
    if (ctx->pc == 0x1CDE64u) {
        ctx->pc = 0x1CDE64u;
            // 0x1cde64: 0x24090020  addiu       $t1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x1CDE68u;
        goto label_1cde68;
    }
    ctx->pc = 0x1CDE60u;
    SET_GPR_U32(ctx, 31, 0x1CDE68u);
    ctx->pc = 0x1CDE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDE60u;
            // 0x1cde64: 0x24090020  addiu       $t1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDE78u;
    if (runtime->hasFunction(0x1CDE78u)) {
        auto targetFn = runtime->lookupFunction(0x1CDE78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDE68u; }
        if (ctx->pc != 0x1CDE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CDE78_0x1cde78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDE68u; }
        if (ctx->pc != 0x1CDE68u) { return; }
    }
    ctx->pc = 0x1CDE68u;
label_1cde68:
    // 0x1cde68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cde68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cde6c:
    // 0x1cde6c: 0x3e00008  jr          $ra
label_1cde70:
    if (ctx->pc == 0x1CDE70u) {
        ctx->pc = 0x1CDE70u;
            // 0x1cde70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1CDE74u;
        goto label_1cde74;
    }
    ctx->pc = 0x1CDE6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CDE70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDE6Cu;
            // 0x1cde70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CDE74u;
label_1cde74:
    // 0x1cde74: 0x0  nop
    ctx->pc = 0x1cde74u;
    // NOP
}
