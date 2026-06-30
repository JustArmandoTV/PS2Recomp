#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0042ECA0
// Address: 0x42eca0 - 0x42ef20
void sub_0042ECA0_0x42eca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042ECA0_0x42eca0");
#endif

    switch (ctx->pc) {
        case 0x42eca0u: goto label_42eca0;
        case 0x42eca4u: goto label_42eca4;
        case 0x42eca8u: goto label_42eca8;
        case 0x42ecacu: goto label_42ecac;
        case 0x42ecb0u: goto label_42ecb0;
        case 0x42ecb4u: goto label_42ecb4;
        case 0x42ecb8u: goto label_42ecb8;
        case 0x42ecbcu: goto label_42ecbc;
        case 0x42ecc0u: goto label_42ecc0;
        case 0x42ecc4u: goto label_42ecc4;
        case 0x42ecc8u: goto label_42ecc8;
        case 0x42ecccu: goto label_42eccc;
        case 0x42ecd0u: goto label_42ecd0;
        case 0x42ecd4u: goto label_42ecd4;
        case 0x42ecd8u: goto label_42ecd8;
        case 0x42ecdcu: goto label_42ecdc;
        case 0x42ece0u: goto label_42ece0;
        case 0x42ece4u: goto label_42ece4;
        case 0x42ece8u: goto label_42ece8;
        case 0x42ececu: goto label_42ecec;
        case 0x42ecf0u: goto label_42ecf0;
        case 0x42ecf4u: goto label_42ecf4;
        case 0x42ecf8u: goto label_42ecf8;
        case 0x42ecfcu: goto label_42ecfc;
        case 0x42ed00u: goto label_42ed00;
        case 0x42ed04u: goto label_42ed04;
        case 0x42ed08u: goto label_42ed08;
        case 0x42ed0cu: goto label_42ed0c;
        case 0x42ed10u: goto label_42ed10;
        case 0x42ed14u: goto label_42ed14;
        case 0x42ed18u: goto label_42ed18;
        case 0x42ed1cu: goto label_42ed1c;
        case 0x42ed20u: goto label_42ed20;
        case 0x42ed24u: goto label_42ed24;
        case 0x42ed28u: goto label_42ed28;
        case 0x42ed2cu: goto label_42ed2c;
        case 0x42ed30u: goto label_42ed30;
        case 0x42ed34u: goto label_42ed34;
        case 0x42ed38u: goto label_42ed38;
        case 0x42ed3cu: goto label_42ed3c;
        case 0x42ed40u: goto label_42ed40;
        case 0x42ed44u: goto label_42ed44;
        case 0x42ed48u: goto label_42ed48;
        case 0x42ed4cu: goto label_42ed4c;
        case 0x42ed50u: goto label_42ed50;
        case 0x42ed54u: goto label_42ed54;
        case 0x42ed58u: goto label_42ed58;
        case 0x42ed5cu: goto label_42ed5c;
        case 0x42ed60u: goto label_42ed60;
        case 0x42ed64u: goto label_42ed64;
        case 0x42ed68u: goto label_42ed68;
        case 0x42ed6cu: goto label_42ed6c;
        case 0x42ed70u: goto label_42ed70;
        case 0x42ed74u: goto label_42ed74;
        case 0x42ed78u: goto label_42ed78;
        case 0x42ed7cu: goto label_42ed7c;
        case 0x42ed80u: goto label_42ed80;
        case 0x42ed84u: goto label_42ed84;
        case 0x42ed88u: goto label_42ed88;
        case 0x42ed8cu: goto label_42ed8c;
        case 0x42ed90u: goto label_42ed90;
        case 0x42ed94u: goto label_42ed94;
        case 0x42ed98u: goto label_42ed98;
        case 0x42ed9cu: goto label_42ed9c;
        case 0x42eda0u: goto label_42eda0;
        case 0x42eda4u: goto label_42eda4;
        case 0x42eda8u: goto label_42eda8;
        case 0x42edacu: goto label_42edac;
        case 0x42edb0u: goto label_42edb0;
        case 0x42edb4u: goto label_42edb4;
        case 0x42edb8u: goto label_42edb8;
        case 0x42edbcu: goto label_42edbc;
        case 0x42edc0u: goto label_42edc0;
        case 0x42edc4u: goto label_42edc4;
        case 0x42edc8u: goto label_42edc8;
        case 0x42edccu: goto label_42edcc;
        case 0x42edd0u: goto label_42edd0;
        case 0x42edd4u: goto label_42edd4;
        case 0x42edd8u: goto label_42edd8;
        case 0x42eddcu: goto label_42eddc;
        case 0x42ede0u: goto label_42ede0;
        case 0x42ede4u: goto label_42ede4;
        case 0x42ede8u: goto label_42ede8;
        case 0x42edecu: goto label_42edec;
        case 0x42edf0u: goto label_42edf0;
        case 0x42edf4u: goto label_42edf4;
        case 0x42edf8u: goto label_42edf8;
        case 0x42edfcu: goto label_42edfc;
        case 0x42ee00u: goto label_42ee00;
        case 0x42ee04u: goto label_42ee04;
        case 0x42ee08u: goto label_42ee08;
        case 0x42ee0cu: goto label_42ee0c;
        case 0x42ee10u: goto label_42ee10;
        case 0x42ee14u: goto label_42ee14;
        case 0x42ee18u: goto label_42ee18;
        case 0x42ee1cu: goto label_42ee1c;
        case 0x42ee20u: goto label_42ee20;
        case 0x42ee24u: goto label_42ee24;
        case 0x42ee28u: goto label_42ee28;
        case 0x42ee2cu: goto label_42ee2c;
        case 0x42ee30u: goto label_42ee30;
        case 0x42ee34u: goto label_42ee34;
        case 0x42ee38u: goto label_42ee38;
        case 0x42ee3cu: goto label_42ee3c;
        case 0x42ee40u: goto label_42ee40;
        case 0x42ee44u: goto label_42ee44;
        case 0x42ee48u: goto label_42ee48;
        case 0x42ee4cu: goto label_42ee4c;
        case 0x42ee50u: goto label_42ee50;
        case 0x42ee54u: goto label_42ee54;
        case 0x42ee58u: goto label_42ee58;
        case 0x42ee5cu: goto label_42ee5c;
        case 0x42ee60u: goto label_42ee60;
        case 0x42ee64u: goto label_42ee64;
        case 0x42ee68u: goto label_42ee68;
        case 0x42ee6cu: goto label_42ee6c;
        case 0x42ee70u: goto label_42ee70;
        case 0x42ee74u: goto label_42ee74;
        case 0x42ee78u: goto label_42ee78;
        case 0x42ee7cu: goto label_42ee7c;
        case 0x42ee80u: goto label_42ee80;
        case 0x42ee84u: goto label_42ee84;
        case 0x42ee88u: goto label_42ee88;
        case 0x42ee8cu: goto label_42ee8c;
        case 0x42ee90u: goto label_42ee90;
        case 0x42ee94u: goto label_42ee94;
        case 0x42ee98u: goto label_42ee98;
        case 0x42ee9cu: goto label_42ee9c;
        case 0x42eea0u: goto label_42eea0;
        case 0x42eea4u: goto label_42eea4;
        case 0x42eea8u: goto label_42eea8;
        case 0x42eeacu: goto label_42eeac;
        case 0x42eeb0u: goto label_42eeb0;
        case 0x42eeb4u: goto label_42eeb4;
        case 0x42eeb8u: goto label_42eeb8;
        case 0x42eebcu: goto label_42eebc;
        case 0x42eec0u: goto label_42eec0;
        case 0x42eec4u: goto label_42eec4;
        case 0x42eec8u: goto label_42eec8;
        case 0x42eeccu: goto label_42eecc;
        case 0x42eed0u: goto label_42eed0;
        case 0x42eed4u: goto label_42eed4;
        case 0x42eed8u: goto label_42eed8;
        case 0x42eedcu: goto label_42eedc;
        case 0x42eee0u: goto label_42eee0;
        case 0x42eee4u: goto label_42eee4;
        case 0x42eee8u: goto label_42eee8;
        case 0x42eeecu: goto label_42eeec;
        case 0x42eef0u: goto label_42eef0;
        case 0x42eef4u: goto label_42eef4;
        case 0x42eef8u: goto label_42eef8;
        case 0x42eefcu: goto label_42eefc;
        case 0x42ef00u: goto label_42ef00;
        case 0x42ef04u: goto label_42ef04;
        case 0x42ef08u: goto label_42ef08;
        case 0x42ef0cu: goto label_42ef0c;
        case 0x42ef10u: goto label_42ef10;
        case 0x42ef14u: goto label_42ef14;
        case 0x42ef18u: goto label_42ef18;
        case 0x42ef1cu: goto label_42ef1c;
        default: break;
    }

    ctx->pc = 0x42eca0u;

label_42eca0:
    // 0x42eca0: 0x3e00008  jr          $ra
label_42eca4:
    if (ctx->pc == 0x42ECA4u) {
        ctx->pc = 0x42ECA4u;
            // 0x42eca4: 0x8c8200f0  lw          $v0, 0xF0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
        ctx->pc = 0x42ECA8u;
        goto label_42eca8;
    }
    ctx->pc = 0x42ECA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42ECA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42ECA0u;
            // 0x42eca4: 0x8c8200f0  lw          $v0, 0xF0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42ECA8u;
label_42eca8:
    // 0x42eca8: 0x0  nop
    ctx->pc = 0x42eca8u;
    // NOP
label_42ecac:
    // 0x42ecac: 0x0  nop
    ctx->pc = 0x42ecacu;
    // NOP
label_42ecb0:
    // 0x42ecb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x42ecb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_42ecb4:
    // 0x42ecb4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x42ecb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_42ecb8:
    // 0x42ecb8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x42ecb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_42ecbc:
    // 0x42ecbc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x42ecbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_42ecc0:
    // 0x42ecc0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x42ecc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_42ecc4:
    // 0x42ecc4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x42ecc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_42ecc8:
    // 0x42ecc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42ecc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_42eccc:
    // 0x42eccc: 0x90870010  lbu         $a3, 0x10($a0)
    ctx->pc = 0x42ecccu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_42ecd0:
    // 0x42ecd0: 0x10e6003c  beq         $a3, $a2, . + 4 + (0x3C << 2)
label_42ecd4:
    if (ctx->pc == 0x42ECD4u) {
        ctx->pc = 0x42ECD4u;
            // 0x42ecd4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42ECD8u;
        goto label_42ecd8;
    }
    ctx->pc = 0x42ECD0u;
    {
        const bool branch_taken_0x42ecd0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x42ECD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42ECD0u;
            // 0x42ecd4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ecd0) {
            ctx->pc = 0x42EDC4u;
            goto label_42edc4;
        }
    }
    ctx->pc = 0x42ECD8u;
label_42ecd8:
    // 0x42ecd8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x42ecd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_42ecdc:
    // 0x42ecdc: 0x50e30036  beql        $a3, $v1, . + 4 + (0x36 << 2)
label_42ece0:
    if (ctx->pc == 0x42ECE0u) {
        ctx->pc = 0x42ECE0u;
            // 0x42ece0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x42ECE4u;
        goto label_42ece4;
    }
    ctx->pc = 0x42ECDCu;
    {
        const bool branch_taken_0x42ecdc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x42ecdc) {
            ctx->pc = 0x42ECE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42ECDCu;
            // 0x42ece0: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42EDB8u;
            goto label_42edb8;
        }
    }
    ctx->pc = 0x42ECE4u;
label_42ece4:
    // 0x42ece4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x42ece4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_42ece8:
    // 0x42ece8: 0x50e50003  beql        $a3, $a1, . + 4 + (0x3 << 2)
label_42ecec:
    if (ctx->pc == 0x42ECECu) {
        ctx->pc = 0x42ECECu;
            // 0x42ecec: 0x92230091  lbu         $v1, 0x91($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 145)));
        ctx->pc = 0x42ECF0u;
        goto label_42ecf0;
    }
    ctx->pc = 0x42ECE8u;
    {
        const bool branch_taken_0x42ece8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 5));
        if (branch_taken_0x42ece8) {
            ctx->pc = 0x42ECECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42ECE8u;
            // 0x42ecec: 0x92230091  lbu         $v1, 0x91($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 145)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42ECF8u;
            goto label_42ecf8;
        }
    }
    ctx->pc = 0x42ECF0u;
label_42ecf0:
    // 0x42ecf0: 0x10000041  b           . + 4 + (0x41 << 2)
label_42ecf4:
    if (ctx->pc == 0x42ECF4u) {
        ctx->pc = 0x42ECF8u;
        goto label_42ecf8;
    }
    ctx->pc = 0x42ECF0u;
    {
        const bool branch_taken_0x42ecf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x42ecf0) {
            ctx->pc = 0x42EDF8u;
            goto label_42edf8;
        }
    }
    ctx->pc = 0x42ECF8u;
label_42ecf8:
    // 0x42ecf8: 0x1460003f  bnez        $v1, . + 4 + (0x3F << 2)
label_42ecfc:
    if (ctx->pc == 0x42ECFCu) {
        ctx->pc = 0x42ED00u;
        goto label_42ed00;
    }
    ctx->pc = 0x42ECF8u;
    {
        const bool branch_taken_0x42ecf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x42ecf8) {
            ctx->pc = 0x42EDF8u;
            goto label_42edf8;
        }
    }
    ctx->pc = 0x42ED00u;
label_42ed00:
    // 0x42ed00: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x42ed00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_42ed04:
    // 0x42ed04: 0x240461c6  addiu       $a0, $zero, 0x61C6
    ctx->pc = 0x42ed04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25030));
label_42ed08:
    // 0x42ed08: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x42ed08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_42ed0c:
    // 0x42ed0c: 0xa04674b2  sb          $a2, 0x74B2($v0)
    ctx->pc = 0x42ed0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 29874), (uint8_t)GPR_U32(ctx, 6));
label_42ed10:
    // 0x42ed10: 0xa46474b0  sh          $a0, 0x74B0($v1)
    ctx->pc = 0x42ed10u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 29872), (uint16_t)GPR_U32(ctx, 4));
label_42ed14:
    // 0x42ed14: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x42ed14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_42ed18:
    // 0x42ed18: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x42ed18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_42ed1c:
    // 0x42ed1c: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x42ed1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_42ed20:
    // 0x42ed20: 0xa04374b3  sb          $v1, 0x74B3($v0)
    ctx->pc = 0x42ed20u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 29875), (uint8_t)GPR_U32(ctx, 3));
label_42ed24:
    // 0x42ed24: 0x248474bc  addiu       $a0, $a0, 0x74BC
    ctx->pc = 0x42ed24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29884));
label_42ed28:
    // 0x42ed28: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x42ed28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_42ed2c:
    // 0x42ed2c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x42ed2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42ed30:
    // 0x42ed30: 0xac4574b4  sw          $a1, 0x74B4($v0)
    ctx->pc = 0x42ed30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29876), GPR_U32(ctx, 5));
label_42ed34:
    // 0x42ed34: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x42ed34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_42ed38:
    // 0x42ed38: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x42ed38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_42ed3c:
    // 0x42ed3c: 0xac4074b8  sw          $zero, 0x74B8($v0)
    ctx->pc = 0x42ed3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29880), GPR_U32(ctx, 0));
label_42ed40:
    // 0x42ed40: 0xc04cb1c  jal         func_132C70
label_42ed44:
    if (ctx->pc == 0x42ED44u) {
        ctx->pc = 0x42ED44u;
            // 0x42ed44: 0x24a5cc60  addiu       $a1, $a1, -0x33A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954080));
        ctx->pc = 0x42ED48u;
        goto label_42ed48;
    }
    ctx->pc = 0x42ED40u;
    SET_GPR_U32(ctx, 31, 0x42ED48u);
    ctx->pc = 0x42ED44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42ED40u;
            // 0x42ed44: 0x24a5cc60  addiu       $a1, $a1, -0x33A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C70u;
    if (runtime->hasFunction(0x132C70u)) {
        auto targetFn = runtime->lookupFunction(0x132C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42ED48u; }
        if (ctx->pc != 0x42ED48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C70_0x132c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42ED48u; }
        if (ctx->pc != 0x42ED48u) { return; }
    }
    ctx->pc = 0x42ED48u;
label_42ed48:
    // 0x42ed48: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x42ed48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_42ed4c:
    // 0x42ed4c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x42ed4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_42ed50:
    // 0x42ed50: 0x248474c8  addiu       $a0, $a0, 0x74C8
    ctx->pc = 0x42ed50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29896));
label_42ed54:
    // 0x42ed54: 0xc04cb1c  jal         func_132C70
label_42ed58:
    if (ctx->pc == 0x42ED58u) {
        ctx->pc = 0x42ED58u;
            // 0x42ed58: 0x24a5cc60  addiu       $a1, $a1, -0x33A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954080));
        ctx->pc = 0x42ED5Cu;
        goto label_42ed5c;
    }
    ctx->pc = 0x42ED54u;
    SET_GPR_U32(ctx, 31, 0x42ED5Cu);
    ctx->pc = 0x42ED58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42ED54u;
            // 0x42ed58: 0x24a5cc60  addiu       $a1, $a1, -0x33A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C70u;
    if (runtime->hasFunction(0x132C70u)) {
        auto targetFn = runtime->lookupFunction(0x132C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42ED5Cu; }
        if (ctx->pc != 0x42ED5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C70_0x132c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42ED5Cu; }
        if (ctx->pc != 0x42ED5Cu) { return; }
    }
    ctx->pc = 0x42ED5Cu;
label_42ed5c:
    // 0x42ed5c: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x42ed5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_42ed60:
    // 0x42ed60: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x42ed60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_42ed64:
    // 0x42ed64: 0x248474d4  addiu       $a0, $a0, 0x74D4
    ctx->pc = 0x42ed64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29908));
label_42ed68:
    // 0x42ed68: 0xc04cb1c  jal         func_132C70
label_42ed6c:
    if (ctx->pc == 0x42ED6Cu) {
        ctx->pc = 0x42ED6Cu;
            // 0x42ed6c: 0x24a5cc60  addiu       $a1, $a1, -0x33A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954080));
        ctx->pc = 0x42ED70u;
        goto label_42ed70;
    }
    ctx->pc = 0x42ED68u;
    SET_GPR_U32(ctx, 31, 0x42ED70u);
    ctx->pc = 0x42ED6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42ED68u;
            // 0x42ed6c: 0x24a5cc60  addiu       $a1, $a1, -0x33A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C70u;
    if (runtime->hasFunction(0x132C70u)) {
        auto targetFn = runtime->lookupFunction(0x132C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42ED70u; }
        if (ctx->pc != 0x42ED70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C70_0x132c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42ED70u; }
        if (ctx->pc != 0x42ED70u) { return; }
    }
    ctx->pc = 0x42ED70u;
label_42ed70:
    // 0x42ed70: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x42ed70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_42ed74:
    // 0x42ed74: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x42ed74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_42ed78:
    // 0x42ed78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x42ed78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42ed7c:
    // 0x42ed7c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x42ed7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_42ed80:
    // 0x42ed80: 0x320f809  jalr        $t9
label_42ed84:
    if (ctx->pc == 0x42ED84u) {
        ctx->pc = 0x42ED84u;
            // 0x42ed84: 0x24a574b0  addiu       $a1, $a1, 0x74B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29872));
        ctx->pc = 0x42ED88u;
        goto label_42ed88;
    }
    ctx->pc = 0x42ED80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42ED88u);
        ctx->pc = 0x42ED84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42ED80u;
            // 0x42ed84: 0x24a574b0  addiu       $a1, $a1, 0x74B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29872));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x42ED88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42ED88u; }
            if (ctx->pc != 0x42ED88u) { return; }
        }
        }
    }
    ctx->pc = 0x42ED88u;
label_42ed88:
    // 0x42ed88: 0x8e230074  lw          $v1, 0x74($s1)
    ctx->pc = 0x42ed88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_42ed8c:
    // 0x42ed8c: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x42ed8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_42ed90:
    // 0x42ed90: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x42ed90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_42ed94:
    // 0x42ed94: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x42ed94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_42ed98:
    // 0x42ed98: 0xac7000f8  sw          $s0, 0xF8($v1)
    ctx->pc = 0x42ed98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 248), GPR_U32(ctx, 16));
label_42ed9c:
    // 0x42ed9c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x42ed9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_42eda0:
    // 0x42eda0: 0x2a030002  slti        $v1, $s0, 0x2
    ctx->pc = 0x42eda0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_42eda4:
    // 0x42eda4: 0x5460fff3  bnel        $v1, $zero, . + 4 + (-0xD << 2)
label_42eda8:
    if (ctx->pc == 0x42EDA8u) {
        ctx->pc = 0x42EDA8u;
            // 0x42eda8: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x42EDACu;
        goto label_42edac;
    }
    ctx->pc = 0x42EDA4u;
    {
        const bool branch_taken_0x42eda4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x42eda4) {
            ctx->pc = 0x42EDA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42EDA4u;
            // 0x42eda8: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42ED74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_42ed74;
        }
    }
    ctx->pc = 0x42EDACu;
label_42edac:
    // 0x42edac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x42edacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42edb0:
    // 0x42edb0: 0x10000011  b           . + 4 + (0x11 << 2)
label_42edb4:
    if (ctx->pc == 0x42EDB4u) {
        ctx->pc = 0x42EDB4u;
            // 0x42edb4: 0xa2230091  sb          $v1, 0x91($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 145), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x42EDB8u;
        goto label_42edb8;
    }
    ctx->pc = 0x42EDB0u;
    {
        const bool branch_taken_0x42edb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42EDB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42EDB0u;
            // 0x42edb4: 0xa2230091  sb          $v1, 0x91($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 145), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42edb0) {
            ctx->pc = 0x42EDF8u;
            goto label_42edf8;
        }
    }
    ctx->pc = 0x42EDB8u;
label_42edb8:
    // 0x42edb8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x42edb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_42edbc:
    // 0x42edbc: 0x320f809  jalr        $t9
label_42edc0:
    if (ctx->pc == 0x42EDC0u) {
        ctx->pc = 0x42EDC4u;
        goto label_42edc4;
    }
    ctx->pc = 0x42EDBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42EDC4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x42EDC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42EDC4u; }
            if (ctx->pc != 0x42EDC4u) { return; }
        }
        }
    }
    ctx->pc = 0x42EDC4u;
label_42edc4:
    // 0x42edc4: 0x8e300070  lw          $s0, 0x70($s1)
    ctx->pc = 0x42edc4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_42edc8:
    // 0x42edc8: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
label_42edcc:
    if (ctx->pc == 0x42EDCCu) {
        ctx->pc = 0x42EDD0u;
        goto label_42edd0;
    }
    ctx->pc = 0x42EDC8u;
    {
        const bool branch_taken_0x42edc8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x42edc8) {
            ctx->pc = 0x42EDF8u;
            goto label_42edf8;
        }
    }
    ctx->pc = 0x42EDD0u;
label_42edd0:
    // 0x42edd0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x42edd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42edd4:
    // 0x42edd4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x42edd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42edd8:
    // 0x42edd8: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x42edd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_42eddc:
    // 0x42eddc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x42eddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_42ede0:
    // 0x42ede0: 0xc0e3658  jal         func_38D960
label_42ede4:
    if (ctx->pc == 0x42EDE4u) {
        ctx->pc = 0x42EDE4u;
            // 0x42ede4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x42EDE8u;
        goto label_42ede8;
    }
    ctx->pc = 0x42EDE0u;
    SET_GPR_U32(ctx, 31, 0x42EDE8u);
    ctx->pc = 0x42EDE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42EDE0u;
            // 0x42ede4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42EDE8u; }
        if (ctx->pc != 0x42EDE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42EDE8u; }
        if (ctx->pc != 0x42EDE8u) { return; }
    }
    ctx->pc = 0x42EDE8u;
label_42ede8:
    // 0x42ede8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x42ede8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_42edec:
    // 0x42edec: 0x270182b  sltu        $v1, $s3, $s0
    ctx->pc = 0x42edecu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_42edf0:
    // 0x42edf0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_42edf4:
    if (ctx->pc == 0x42EDF4u) {
        ctx->pc = 0x42EDF4u;
            // 0x42edf4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x42EDF8u;
        goto label_42edf8;
    }
    ctx->pc = 0x42EDF0u;
    {
        const bool branch_taken_0x42edf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x42EDF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42EDF0u;
            // 0x42edf4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42edf0) {
            ctx->pc = 0x42EDD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_42edd8;
        }
    }
    ctx->pc = 0x42EDF8u;
label_42edf8:
    // 0x42edf8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x42edf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_42edfc:
    // 0x42edfc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x42edfcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_42ee00:
    // 0x42ee00: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x42ee00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_42ee04:
    // 0x42ee04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x42ee04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_42ee08:
    // 0x42ee08: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42ee08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_42ee0c:
    // 0x42ee0c: 0x3e00008  jr          $ra
label_42ee10:
    if (ctx->pc == 0x42EE10u) {
        ctx->pc = 0x42EE10u;
            // 0x42ee10: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x42EE14u;
        goto label_42ee14;
    }
    ctx->pc = 0x42EE0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42EE10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42EE0Cu;
            // 0x42ee10: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42EE14u;
label_42ee14:
    // 0x42ee14: 0x0  nop
    ctx->pc = 0x42ee14u;
    // NOP
label_42ee18:
    // 0x42ee18: 0x0  nop
    ctx->pc = 0x42ee18u;
    // NOP
label_42ee1c:
    // 0x42ee1c: 0x0  nop
    ctx->pc = 0x42ee1cu;
    // NOP
label_42ee20:
    // 0x42ee20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x42ee20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_42ee24:
    // 0x42ee24: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x42ee24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_42ee28:
    // 0x42ee28: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x42ee28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_42ee2c:
    // 0x42ee2c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x42ee2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_42ee30:
    // 0x42ee30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x42ee30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_42ee34:
    // 0x42ee34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42ee34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_42ee38:
    // 0x42ee38: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x42ee38u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_42ee3c:
    // 0x42ee3c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_42ee40:
    if (ctx->pc == 0x42EE40u) {
        ctx->pc = 0x42EE40u;
            // 0x42ee40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42EE44u;
        goto label_42ee44;
    }
    ctx->pc = 0x42EE3Cu;
    {
        const bool branch_taken_0x42ee3c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x42EE40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42EE3Cu;
            // 0x42ee40: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ee3c) {
            ctx->pc = 0x42EE78u;
            goto label_42ee78;
        }
    }
    ctx->pc = 0x42EE44u;
label_42ee44:
    // 0x42ee44: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x42ee44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42ee48:
    // 0x42ee48: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x42ee48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42ee4c:
    // 0x42ee4c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x42ee4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_42ee50:
    // 0x42ee50: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x42ee50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_42ee54:
    // 0x42ee54: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x42ee54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_42ee58:
    // 0x42ee58: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x42ee58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_42ee5c:
    // 0x42ee5c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x42ee5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_42ee60:
    // 0x42ee60: 0x320f809  jalr        $t9
label_42ee64:
    if (ctx->pc == 0x42EE64u) {
        ctx->pc = 0x42EE68u;
        goto label_42ee68;
    }
    ctx->pc = 0x42EE60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42EE68u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x42EE68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42EE68u; }
            if (ctx->pc != 0x42EE68u) { return; }
        }
        }
    }
    ctx->pc = 0x42EE68u;
label_42ee68:
    // 0x42ee68: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x42ee68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_42ee6c:
    // 0x42ee6c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x42ee6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_42ee70:
    // 0x42ee70: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_42ee74:
    if (ctx->pc == 0x42EE74u) {
        ctx->pc = 0x42EE74u;
            // 0x42ee74: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x42EE78u;
        goto label_42ee78;
    }
    ctx->pc = 0x42EE70u;
    {
        const bool branch_taken_0x42ee70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x42EE74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42EE70u;
            // 0x42ee74: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ee70) {
            ctx->pc = 0x42EE4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_42ee4c;
        }
    }
    ctx->pc = 0x42EE78u;
label_42ee78:
    // 0x42ee78: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x42ee78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_42ee7c:
    // 0x42ee7c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x42ee7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_42ee80:
    // 0x42ee80: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x42ee80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_42ee84:
    // 0x42ee84: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x42ee84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_42ee88:
    // 0x42ee88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42ee88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_42ee8c:
    // 0x42ee8c: 0x3e00008  jr          $ra
label_42ee90:
    if (ctx->pc == 0x42EE90u) {
        ctx->pc = 0x42EE90u;
            // 0x42ee90: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x42EE94u;
        goto label_42ee94;
    }
    ctx->pc = 0x42EE8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42EE90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42EE8Cu;
            // 0x42ee90: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42EE94u;
label_42ee94:
    // 0x42ee94: 0x0  nop
    ctx->pc = 0x42ee94u;
    // NOP
label_42ee98:
    // 0x42ee98: 0x0  nop
    ctx->pc = 0x42ee98u;
    // NOP
label_42ee9c:
    // 0x42ee9c: 0x0  nop
    ctx->pc = 0x42ee9cu;
    // NOP
label_42eea0:
    // 0x42eea0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x42eea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_42eea4:
    // 0x42eea4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x42eea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_42eea8:
    // 0x42eea8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x42eea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_42eeac:
    // 0x42eeac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x42eeacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42eeb0:
    // 0x42eeb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42eeb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_42eeb4:
    // 0x42eeb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x42eeb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_42eeb8:
    // 0x42eeb8: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x42eeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_42eebc:
    // 0x42eebc: 0xc08914c  jal         func_224530
label_42eec0:
    if (ctx->pc == 0x42EEC0u) {
        ctx->pc = 0x42EEC0u;
            // 0x42eec0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42EEC4u;
        goto label_42eec4;
    }
    ctx->pc = 0x42EEBCu;
    SET_GPR_U32(ctx, 31, 0x42EEC4u);
    ctx->pc = 0x42EEC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42EEBCu;
            // 0x42eec0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42EEC4u; }
        if (ctx->pc != 0x42EEC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42EEC4u; }
        if (ctx->pc != 0x42EEC4u) { return; }
    }
    ctx->pc = 0x42EEC4u;
label_42eec4:
    // 0x42eec4: 0xc0e393c  jal         func_38E4F0
label_42eec8:
    if (ctx->pc == 0x42EEC8u) {
        ctx->pc = 0x42EEC8u;
            // 0x42eec8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42EECCu;
        goto label_42eecc;
    }
    ctx->pc = 0x42EEC4u;
    SET_GPR_U32(ctx, 31, 0x42EECCu);
    ctx->pc = 0x42EEC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42EEC4u;
            // 0x42eec8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42EECCu; }
        if (ctx->pc != 0x42EECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42EECCu; }
        if (ctx->pc != 0x42EECCu) { return; }
    }
    ctx->pc = 0x42EECCu;
label_42eecc:
    // 0x42eecc: 0xae0000f0  sw          $zero, 0xF0($s0)
    ctx->pc = 0x42eeccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
label_42eed0:
    // 0x42eed0: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x42eed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
label_42eed4:
    // 0x42eed4: 0xae0300d4  sw          $v1, 0xD4($s0)
    ctx->pc = 0x42eed4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
label_42eed8:
    // 0x42eed8: 0xa20000fc  sb          $zero, 0xFC($s0)
    ctx->pc = 0x42eed8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 252), (uint8_t)GPR_U32(ctx, 0));
label_42eedc:
    // 0x42eedc: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x42eedcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
label_42eee0:
    // 0x42eee0: 0x8e030180  lw          $v1, 0x180($s0)
    ctx->pc = 0x42eee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
label_42eee4:
    // 0x42eee4: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
label_42eee8:
    if (ctx->pc == 0x42EEE8u) {
        ctx->pc = 0x42EEE8u;
            // 0x42eee8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x42EEECu;
        goto label_42eeec;
    }
    ctx->pc = 0x42EEE4u;
    {
        const bool branch_taken_0x42eee4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x42eee4) {
            ctx->pc = 0x42EEE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42EEE4u;
            // 0x42eee8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42EF0Cu;
            goto label_42ef0c;
        }
    }
    ctx->pc = 0x42EEECu;
label_42eeec:
    // 0x42eeec: 0xa0600060  sb          $zero, 0x60($v1)
    ctx->pc = 0x42eeecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 96), (uint8_t)GPR_U32(ctx, 0));
label_42eef0:
    // 0x42eef0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x42eef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_42eef4:
    // 0x42eef4: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x42eef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_42eef8:
    // 0x42eef8: 0x8e050180  lw          $a1, 0x180($s0)
    ctx->pc = 0x42eef8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
label_42eefc:
    // 0x42eefc: 0xc057b7c  jal         func_15EDF0
label_42ef00:
    if (ctx->pc == 0x42EF00u) {
        ctx->pc = 0x42EF00u;
            // 0x42ef00: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x42EF04u;
        goto label_42ef04;
    }
    ctx->pc = 0x42EEFCu;
    SET_GPR_U32(ctx, 31, 0x42EF04u);
    ctx->pc = 0x42EF00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42EEFCu;
            // 0x42ef00: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42EF04u; }
        if (ctx->pc != 0x42EF04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42EF04u; }
        if (ctx->pc != 0x42EF04u) { return; }
    }
    ctx->pc = 0x42EF04u;
label_42ef04:
    // 0x42ef04: 0xae000180  sw          $zero, 0x180($s0)
    ctx->pc = 0x42ef04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 0));
label_42ef08:
    // 0x42ef08: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x42ef08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_42ef0c:
    // 0x42ef0c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42ef0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_42ef10:
    // 0x42ef10: 0x3e00008  jr          $ra
label_42ef14:
    if (ctx->pc == 0x42EF14u) {
        ctx->pc = 0x42EF14u;
            // 0x42ef14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x42EF18u;
        goto label_42ef18;
    }
    ctx->pc = 0x42EF10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42EF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42EF10u;
            // 0x42ef14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42EF18u;
label_42ef18:
    // 0x42ef18: 0x0  nop
    ctx->pc = 0x42ef18u;
    // NOP
label_42ef1c:
    // 0x42ef1c: 0x0  nop
    ctx->pc = 0x42ef1cu;
    // NOP
}
