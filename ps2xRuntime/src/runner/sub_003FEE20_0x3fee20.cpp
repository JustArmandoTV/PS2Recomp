#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003FEE20
// Address: 0x3fee20 - 0x3ff160
void sub_003FEE20_0x3fee20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FEE20_0x3fee20");
#endif

    switch (ctx->pc) {
        case 0x3fee20u: goto label_3fee20;
        case 0x3fee24u: goto label_3fee24;
        case 0x3fee28u: goto label_3fee28;
        case 0x3fee2cu: goto label_3fee2c;
        case 0x3fee30u: goto label_3fee30;
        case 0x3fee34u: goto label_3fee34;
        case 0x3fee38u: goto label_3fee38;
        case 0x3fee3cu: goto label_3fee3c;
        case 0x3fee40u: goto label_3fee40;
        case 0x3fee44u: goto label_3fee44;
        case 0x3fee48u: goto label_3fee48;
        case 0x3fee4cu: goto label_3fee4c;
        case 0x3fee50u: goto label_3fee50;
        case 0x3fee54u: goto label_3fee54;
        case 0x3fee58u: goto label_3fee58;
        case 0x3fee5cu: goto label_3fee5c;
        case 0x3fee60u: goto label_3fee60;
        case 0x3fee64u: goto label_3fee64;
        case 0x3fee68u: goto label_3fee68;
        case 0x3fee6cu: goto label_3fee6c;
        case 0x3fee70u: goto label_3fee70;
        case 0x3fee74u: goto label_3fee74;
        case 0x3fee78u: goto label_3fee78;
        case 0x3fee7cu: goto label_3fee7c;
        case 0x3fee80u: goto label_3fee80;
        case 0x3fee84u: goto label_3fee84;
        case 0x3fee88u: goto label_3fee88;
        case 0x3fee8cu: goto label_3fee8c;
        case 0x3fee90u: goto label_3fee90;
        case 0x3fee94u: goto label_3fee94;
        case 0x3fee98u: goto label_3fee98;
        case 0x3fee9cu: goto label_3fee9c;
        case 0x3feea0u: goto label_3feea0;
        case 0x3feea4u: goto label_3feea4;
        case 0x3feea8u: goto label_3feea8;
        case 0x3feeacu: goto label_3feeac;
        case 0x3feeb0u: goto label_3feeb0;
        case 0x3feeb4u: goto label_3feeb4;
        case 0x3feeb8u: goto label_3feeb8;
        case 0x3feebcu: goto label_3feebc;
        case 0x3feec0u: goto label_3feec0;
        case 0x3feec4u: goto label_3feec4;
        case 0x3feec8u: goto label_3feec8;
        case 0x3feeccu: goto label_3feecc;
        case 0x3feed0u: goto label_3feed0;
        case 0x3feed4u: goto label_3feed4;
        case 0x3feed8u: goto label_3feed8;
        case 0x3feedcu: goto label_3feedc;
        case 0x3feee0u: goto label_3feee0;
        case 0x3feee4u: goto label_3feee4;
        case 0x3feee8u: goto label_3feee8;
        case 0x3feeecu: goto label_3feeec;
        case 0x3feef0u: goto label_3feef0;
        case 0x3feef4u: goto label_3feef4;
        case 0x3feef8u: goto label_3feef8;
        case 0x3feefcu: goto label_3feefc;
        case 0x3fef00u: goto label_3fef00;
        case 0x3fef04u: goto label_3fef04;
        case 0x3fef08u: goto label_3fef08;
        case 0x3fef0cu: goto label_3fef0c;
        case 0x3fef10u: goto label_3fef10;
        case 0x3fef14u: goto label_3fef14;
        case 0x3fef18u: goto label_3fef18;
        case 0x3fef1cu: goto label_3fef1c;
        case 0x3fef20u: goto label_3fef20;
        case 0x3fef24u: goto label_3fef24;
        case 0x3fef28u: goto label_3fef28;
        case 0x3fef2cu: goto label_3fef2c;
        case 0x3fef30u: goto label_3fef30;
        case 0x3fef34u: goto label_3fef34;
        case 0x3fef38u: goto label_3fef38;
        case 0x3fef3cu: goto label_3fef3c;
        case 0x3fef40u: goto label_3fef40;
        case 0x3fef44u: goto label_3fef44;
        case 0x3fef48u: goto label_3fef48;
        case 0x3fef4cu: goto label_3fef4c;
        case 0x3fef50u: goto label_3fef50;
        case 0x3fef54u: goto label_3fef54;
        case 0x3fef58u: goto label_3fef58;
        case 0x3fef5cu: goto label_3fef5c;
        case 0x3fef60u: goto label_3fef60;
        case 0x3fef64u: goto label_3fef64;
        case 0x3fef68u: goto label_3fef68;
        case 0x3fef6cu: goto label_3fef6c;
        case 0x3fef70u: goto label_3fef70;
        case 0x3fef74u: goto label_3fef74;
        case 0x3fef78u: goto label_3fef78;
        case 0x3fef7cu: goto label_3fef7c;
        case 0x3fef80u: goto label_3fef80;
        case 0x3fef84u: goto label_3fef84;
        case 0x3fef88u: goto label_3fef88;
        case 0x3fef8cu: goto label_3fef8c;
        case 0x3fef90u: goto label_3fef90;
        case 0x3fef94u: goto label_3fef94;
        case 0x3fef98u: goto label_3fef98;
        case 0x3fef9cu: goto label_3fef9c;
        case 0x3fefa0u: goto label_3fefa0;
        case 0x3fefa4u: goto label_3fefa4;
        case 0x3fefa8u: goto label_3fefa8;
        case 0x3fefacu: goto label_3fefac;
        case 0x3fefb0u: goto label_3fefb0;
        case 0x3fefb4u: goto label_3fefb4;
        case 0x3fefb8u: goto label_3fefb8;
        case 0x3fefbcu: goto label_3fefbc;
        case 0x3fefc0u: goto label_3fefc0;
        case 0x3fefc4u: goto label_3fefc4;
        case 0x3fefc8u: goto label_3fefc8;
        case 0x3fefccu: goto label_3fefcc;
        case 0x3fefd0u: goto label_3fefd0;
        case 0x3fefd4u: goto label_3fefd4;
        case 0x3fefd8u: goto label_3fefd8;
        case 0x3fefdcu: goto label_3fefdc;
        case 0x3fefe0u: goto label_3fefe0;
        case 0x3fefe4u: goto label_3fefe4;
        case 0x3fefe8u: goto label_3fefe8;
        case 0x3fefecu: goto label_3fefec;
        case 0x3feff0u: goto label_3feff0;
        case 0x3feff4u: goto label_3feff4;
        case 0x3feff8u: goto label_3feff8;
        case 0x3feffcu: goto label_3feffc;
        case 0x3ff000u: goto label_3ff000;
        case 0x3ff004u: goto label_3ff004;
        case 0x3ff008u: goto label_3ff008;
        case 0x3ff00cu: goto label_3ff00c;
        case 0x3ff010u: goto label_3ff010;
        case 0x3ff014u: goto label_3ff014;
        case 0x3ff018u: goto label_3ff018;
        case 0x3ff01cu: goto label_3ff01c;
        case 0x3ff020u: goto label_3ff020;
        case 0x3ff024u: goto label_3ff024;
        case 0x3ff028u: goto label_3ff028;
        case 0x3ff02cu: goto label_3ff02c;
        case 0x3ff030u: goto label_3ff030;
        case 0x3ff034u: goto label_3ff034;
        case 0x3ff038u: goto label_3ff038;
        case 0x3ff03cu: goto label_3ff03c;
        case 0x3ff040u: goto label_3ff040;
        case 0x3ff044u: goto label_3ff044;
        case 0x3ff048u: goto label_3ff048;
        case 0x3ff04cu: goto label_3ff04c;
        case 0x3ff050u: goto label_3ff050;
        case 0x3ff054u: goto label_3ff054;
        case 0x3ff058u: goto label_3ff058;
        case 0x3ff05cu: goto label_3ff05c;
        case 0x3ff060u: goto label_3ff060;
        case 0x3ff064u: goto label_3ff064;
        case 0x3ff068u: goto label_3ff068;
        case 0x3ff06cu: goto label_3ff06c;
        case 0x3ff070u: goto label_3ff070;
        case 0x3ff074u: goto label_3ff074;
        case 0x3ff078u: goto label_3ff078;
        case 0x3ff07cu: goto label_3ff07c;
        case 0x3ff080u: goto label_3ff080;
        case 0x3ff084u: goto label_3ff084;
        case 0x3ff088u: goto label_3ff088;
        case 0x3ff08cu: goto label_3ff08c;
        case 0x3ff090u: goto label_3ff090;
        case 0x3ff094u: goto label_3ff094;
        case 0x3ff098u: goto label_3ff098;
        case 0x3ff09cu: goto label_3ff09c;
        case 0x3ff0a0u: goto label_3ff0a0;
        case 0x3ff0a4u: goto label_3ff0a4;
        case 0x3ff0a8u: goto label_3ff0a8;
        case 0x3ff0acu: goto label_3ff0ac;
        case 0x3ff0b0u: goto label_3ff0b0;
        case 0x3ff0b4u: goto label_3ff0b4;
        case 0x3ff0b8u: goto label_3ff0b8;
        case 0x3ff0bcu: goto label_3ff0bc;
        case 0x3ff0c0u: goto label_3ff0c0;
        case 0x3ff0c4u: goto label_3ff0c4;
        case 0x3ff0c8u: goto label_3ff0c8;
        case 0x3ff0ccu: goto label_3ff0cc;
        case 0x3ff0d0u: goto label_3ff0d0;
        case 0x3ff0d4u: goto label_3ff0d4;
        case 0x3ff0d8u: goto label_3ff0d8;
        case 0x3ff0dcu: goto label_3ff0dc;
        case 0x3ff0e0u: goto label_3ff0e0;
        case 0x3ff0e4u: goto label_3ff0e4;
        case 0x3ff0e8u: goto label_3ff0e8;
        case 0x3ff0ecu: goto label_3ff0ec;
        case 0x3ff0f0u: goto label_3ff0f0;
        case 0x3ff0f4u: goto label_3ff0f4;
        case 0x3ff0f8u: goto label_3ff0f8;
        case 0x3ff0fcu: goto label_3ff0fc;
        case 0x3ff100u: goto label_3ff100;
        case 0x3ff104u: goto label_3ff104;
        case 0x3ff108u: goto label_3ff108;
        case 0x3ff10cu: goto label_3ff10c;
        case 0x3ff110u: goto label_3ff110;
        case 0x3ff114u: goto label_3ff114;
        case 0x3ff118u: goto label_3ff118;
        case 0x3ff11cu: goto label_3ff11c;
        case 0x3ff120u: goto label_3ff120;
        case 0x3ff124u: goto label_3ff124;
        case 0x3ff128u: goto label_3ff128;
        case 0x3ff12cu: goto label_3ff12c;
        case 0x3ff130u: goto label_3ff130;
        case 0x3ff134u: goto label_3ff134;
        case 0x3ff138u: goto label_3ff138;
        case 0x3ff13cu: goto label_3ff13c;
        case 0x3ff140u: goto label_3ff140;
        case 0x3ff144u: goto label_3ff144;
        case 0x3ff148u: goto label_3ff148;
        case 0x3ff14cu: goto label_3ff14c;
        case 0x3ff150u: goto label_3ff150;
        case 0x3ff154u: goto label_3ff154;
        case 0x3ff158u: goto label_3ff158;
        case 0x3ff15cu: goto label_3ff15c;
        default: break;
    }

    ctx->pc = 0x3fee20u;

label_3fee20:
    // 0x3fee20: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x3fee20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_3fee24:
    // 0x3fee24: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3fee24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_3fee28:
    // 0x3fee28: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3fee28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_3fee2c:
    // 0x3fee2c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3fee2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_3fee30:
    // 0x3fee30: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3fee30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3fee34:
    // 0x3fee34: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3fee34u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fee38:
    // 0x3fee38: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3fee38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3fee3c:
    // 0x3fee3c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x3fee3cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3fee40:
    // 0x3fee40: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3fee40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3fee44:
    // 0x3fee44: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x3fee44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3fee48:
    // 0x3fee48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3fee48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3fee4c:
    // 0x3fee4c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x3fee4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3fee50:
    // 0x3fee50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3fee50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3fee54:
    // 0x3fee54: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3fee54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3fee58:
    // 0x3fee58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3fee58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3fee5c:
    // 0x3fee5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3fee5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3fee60:
    // 0x3fee60: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x3fee60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3fee64:
    // 0x3fee64: 0x8ce200e8  lw          $v0, 0xE8($a3)
    ctx->pc = 0x3fee64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 232)));
label_3fee68:
    // 0x3fee68: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_3fee6c:
    if (ctx->pc == 0x3FEE6Cu) {
        ctx->pc = 0x3FEE6Cu;
            // 0x3fee6c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FEE70u;
        goto label_3fee70;
    }
    ctx->pc = 0x3FEE68u;
    {
        const bool branch_taken_0x3fee68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FEE6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FEE68u;
            // 0x3fee6c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fee68) {
            ctx->pc = 0x3FEEA8u;
            goto label_3feea8;
        }
    }
    ctx->pc = 0x3FEE70u;
label_3fee70:
    // 0x3fee70: 0xc040138  jal         func_1004E0
label_3fee74:
    if (ctx->pc == 0x3FEE74u) {
        ctx->pc = 0x3FEE74u;
            // 0x3fee74: 0x1520c0  sll         $a0, $s5, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
        ctx->pc = 0x3FEE78u;
        goto label_3fee78;
    }
    ctx->pc = 0x3FEE70u;
    SET_GPR_U32(ctx, 31, 0x3FEE78u);
    ctx->pc = 0x3FEE74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FEE70u;
            // 0x3fee74: 0x1520c0  sll         $a0, $s5, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FEE78u; }
        if (ctx->pc != 0x3FEE78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FEE78u; }
        if (ctx->pc != 0x3FEE78u) { return; }
    }
    ctx->pc = 0x3FEE78u;
label_3fee78:
    // 0x3fee78: 0xae8200e8  sw          $v0, 0xE8($s4)
    ctx->pc = 0x3fee78u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 232), GPR_U32(ctx, 2));
label_3fee7c:
    // 0x3fee7c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3fee7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3fee80:
    // 0x3fee80: 0x8e8200e8  lw          $v0, 0xE8($s4)
    ctx->pc = 0x3fee80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 232)));
label_3fee84:
    // 0x3fee84: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3fee84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3fee88:
    // 0x3fee88: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x3fee88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_3fee8c:
    // 0x3fee8c: 0x8e8300e8  lw          $v1, 0xE8($s4)
    ctx->pc = 0x3fee8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 232)));
label_3fee90:
    // 0x3fee90: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3fee90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3fee94:
    // 0x3fee94: 0x215102b  sltu        $v0, $s0, $s5
    ctx->pc = 0x3fee94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_3fee98:
    // 0x3fee98: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3fee98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3fee9c:
    // 0x3fee9c: 0xac740004  sw          $s4, 0x4($v1)
    ctx->pc = 0x3fee9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 20));
label_3feea0:
    // 0x3feea0: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_3feea4:
    if (ctx->pc == 0x3FEEA4u) {
        ctx->pc = 0x3FEEA4u;
            // 0x3feea4: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x3FEEA8u;
        goto label_3feea8;
    }
    ctx->pc = 0x3FEEA0u;
    {
        const bool branch_taken_0x3feea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FEEA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FEEA0u;
            // 0x3feea4: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3feea0) {
            ctx->pc = 0x3FEE80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3fee80;
        }
    }
    ctx->pc = 0x3FEEA8u;
label_3feea8:
    // 0x3feea8: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x3feea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_3feeac:
    // 0x3feeac: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3feeacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3feeb0:
    // 0x3feeb0: 0x8ec300b0  lw          $v1, 0xB0($s6)
    ctx->pc = 0x3feeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 176)));
label_3feeb4:
    // 0x3feeb4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3feeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3feeb8:
    // 0x3feeb8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3feeb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3feebc:
    // 0x3feebc: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x3feebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_3feec0:
    // 0x3feec0: 0xc0788fc  jal         func_1E23F0
label_3feec4:
    if (ctx->pc == 0x3FEEC4u) {
        ctx->pc = 0x3FEEC4u;
            // 0x3feec4: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x3FEEC8u;
        goto label_3feec8;
    }
    ctx->pc = 0x3FEEC0u;
    SET_GPR_U32(ctx, 31, 0x3FEEC8u);
    ctx->pc = 0x3FEEC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FEEC0u;
            // 0x3feec4: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FEEC8u; }
        if (ctx->pc != 0x3FEEC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FEEC8u; }
        if (ctx->pc != 0x3FEEC8u) { return; }
    }
    ctx->pc = 0x3FEEC8u;
label_3feec8:
    // 0x3feec8: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x3feec8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3feecc:
    // 0x3feecc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3feeccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3feed0:
    // 0x3feed0: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x3feed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_3feed4:
    // 0x3feed4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3feed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_3feed8:
    // 0x3feed8: 0xc0a7a88  jal         func_29EA20
label_3feedc:
    if (ctx->pc == 0x3FEEDCu) {
        ctx->pc = 0x3FEEDCu;
            // 0x3feedc: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x3FEEE0u;
        goto label_3feee0;
    }
    ctx->pc = 0x3FEED8u;
    SET_GPR_U32(ctx, 31, 0x3FEEE0u);
    ctx->pc = 0x3FEEDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FEED8u;
            // 0x3feedc: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FEEE0u; }
        if (ctx->pc != 0x3FEEE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FEEE0u; }
        if (ctx->pc != 0x3FEEE0u) { return; }
    }
    ctx->pc = 0x3FEEE0u;
label_3feee0:
    // 0x3feee0: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x3feee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_3feee4:
    // 0x3feee4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3feee4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3feee8:
    // 0x3feee8: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
label_3feeec:
    if (ctx->pc == 0x3FEEECu) {
        ctx->pc = 0x3FEEECu;
            // 0x3feeec: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3FEEF0u;
        goto label_3feef0;
    }
    ctx->pc = 0x3FEEE8u;
    {
        const bool branch_taken_0x3feee8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FEEECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FEEE8u;
            // 0x3feeec: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3feee8) {
            ctx->pc = 0x3FEF20u;
            goto label_3fef20;
        }
    }
    ctx->pc = 0x3FEEF0u;
label_3feef0:
    // 0x3feef0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3feef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_3feef4:
    // 0x3feef4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3feef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3feef8:
    // 0x3feef8: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x3feef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3feefc:
    // 0x3feefc: 0xc081fa8  jal         func_207EA0
label_3fef00:
    if (ctx->pc == 0x3FEF00u) {
        ctx->pc = 0x3FEF00u;
            // 0x3fef00: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x3FEF04u;
        goto label_3fef04;
    }
    ctx->pc = 0x3FEEFCu;
    SET_GPR_U32(ctx, 31, 0x3FEF04u);
    ctx->pc = 0x3FEF00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FEEFCu;
            // 0x3fef00: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x207EA0u;
    if (runtime->hasFunction(0x207EA0u)) {
        auto targetFn = runtime->lookupFunction(0x207EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FEF04u; }
        if (ctx->pc != 0x3FEF04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00207EA0_0x207ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FEF04u; }
        if (ctx->pc != 0x3FEF04u) { return; }
    }
    ctx->pc = 0x3FEF04u;
label_3fef04:
    // 0x3fef04: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3fef04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3fef08:
    // 0x3fef08: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3fef08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3fef0c:
    // 0x3fef0c: 0x2463e300  addiu       $v1, $v1, -0x1D00
    ctx->pc = 0x3fef0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959872));
label_3fef10:
    // 0x3fef10: 0x2442e328  addiu       $v0, $v0, -0x1CD8
    ctx->pc = 0x3fef10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959912));
label_3fef14:
    // 0x3fef14: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x3fef14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_3fef18:
    // 0x3fef18: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x3fef18u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_3fef1c:
    // 0x3fef1c: 0x0  nop
    ctx->pc = 0x3fef1cu;
    // NOP
label_3fef20:
    // 0x3fef20: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x3fef20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_3fef24:
    // 0x3fef24: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x3fef24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_3fef28:
    // 0x3fef28: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3fef28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fef2c:
    // 0x3fef2c: 0xae420050  sw          $v0, 0x50($s2)
    ctx->pc = 0x3fef2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 2));
label_3fef30:
    // 0x3fef30: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3fef30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3fef34:
    // 0x3fef34: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3fef34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3fef38:
    // 0x3fef38: 0xa3a700f1  sb          $a3, 0xF1($sp)
    ctx->pc = 0x3fef38u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 241), (uint8_t)GPR_U32(ctx, 7));
label_3fef3c:
    // 0x3fef3c: 0xafa20114  sw          $v0, 0x114($sp)
    ctx->pc = 0x3fef3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
label_3fef40:
    // 0x3fef40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3fef40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3fef44:
    // 0x3fef44: 0xafa00104  sw          $zero, 0x104($sp)
    ctx->pc = 0x3fef44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
label_3fef48:
    // 0x3fef48: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3fef48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3fef4c:
    // 0x3fef4c: 0xafa0010c  sw          $zero, 0x10C($sp)
    ctx->pc = 0x3fef4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 0));
label_3fef50:
    // 0x3fef50: 0xafa70110  sw          $a3, 0x110($sp)
    ctx->pc = 0x3fef50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 7));
label_3fef54:
    // 0x3fef54: 0xafa00108  sw          $zero, 0x108($sp)
    ctx->pc = 0x3fef54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 0));
label_3fef58:
    // 0x3fef58: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x3fef58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
label_3fef5c:
    // 0x3fef5c: 0xafa000f8  sw          $zero, 0xF8($sp)
    ctx->pc = 0x3fef5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 0));
label_3fef60:
    // 0x3fef60: 0x8e660000  lw          $a2, 0x0($s3)
    ctx->pc = 0x3fef60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3fef64:
    // 0x3fef64: 0xafa600e0  sw          $a2, 0xE0($sp)
    ctx->pc = 0x3fef64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 6));
label_3fef68:
    // 0x3fef68: 0xafa300e4  sw          $v1, 0xE4($sp)
    ctx->pc = 0x3fef68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 3));
label_3fef6c:
    // 0x3fef6c: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x3fef6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3fef70:
    // 0x3fef70: 0xafa300e8  sw          $v1, 0xE8($sp)
    ctx->pc = 0x3fef70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 3));
label_3fef74:
    // 0x3fef74: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x3fef74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3fef78:
    // 0x3fef78: 0xafa300ec  sw          $v1, 0xEC($sp)
    ctx->pc = 0x3fef78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 3));
label_3fef7c:
    // 0x3fef7c: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x3fef7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
label_3fef80:
    // 0x3fef80: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x3fef80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_3fef84:
    // 0x3fef84: 0xafa200fc  sw          $v0, 0xFC($sp)
    ctx->pc = 0x3fef84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 2));
label_3fef88:
    // 0x3fef88: 0xa3a700f0  sb          $a3, 0xF0($sp)
    ctx->pc = 0x3fef88u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 240), (uint8_t)GPR_U32(ctx, 7));
label_3fef8c:
    // 0x3fef8c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x3fef8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3fef90:
    // 0x3fef90: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x3fef90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_3fef94:
    // 0x3fef94: 0x320f809  jalr        $t9
label_3fef98:
    if (ctx->pc == 0x3FEF98u) {
        ctx->pc = 0x3FEF98u;
            // 0x3fef98: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x3FEF9Cu;
        goto label_3fef9c;
    }
    ctx->pc = 0x3FEF94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3FEF9Cu);
        ctx->pc = 0x3FEF98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FEF94u;
            // 0x3fef98: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3FEF9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3FEF9Cu; }
            if (ctx->pc != 0x3FEF9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3FEF9Cu;
label_3fef9c:
    // 0x3fef9c: 0xc082544  jal         func_209510
label_3fefa0:
    if (ctx->pc == 0x3FEFA0u) {
        ctx->pc = 0x3FEFA0u;
            // 0x3fefa0: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x3FEFA4u;
        goto label_3fefa4;
    }
    ctx->pc = 0x3FEF9Cu;
    SET_GPR_U32(ctx, 31, 0x3FEFA4u);
    ctx->pc = 0x3FEFA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FEF9Cu;
            // 0x3fefa0: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x209510u;
    if (runtime->hasFunction(0x209510u)) {
        auto targetFn = runtime->lookupFunction(0x209510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FEFA4u; }
        if (ctx->pc != 0x3FEFA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209510_0x209510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FEFA4u; }
        if (ctx->pc != 0x3FEFA4u) { return; }
    }
    ctx->pc = 0x3FEFA4u;
label_3fefa4:
    // 0x3fefa4: 0x12400002  beqz        $s2, . + 4 + (0x2 << 2)
label_3fefa8:
    if (ctx->pc == 0x3FEFA8u) {
        ctx->pc = 0x3FEFA8u;
            // 0x3fefa8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FEFACu;
        goto label_3fefac;
    }
    ctx->pc = 0x3FEFA4u;
    {
        const bool branch_taken_0x3fefa4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FEFA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FEFA4u;
            // 0x3fefa8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fefa4) {
            ctx->pc = 0x3FEFB0u;
            goto label_3fefb0;
        }
    }
    ctx->pc = 0x3FEFACu;
label_3fefac:
    // 0x3fefac: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x3fefacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_3fefb0:
    // 0x3fefb0: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x3fefb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_3fefb4:
    // 0x3fefb4: 0xc082650  jal         func_209940
label_3fefb8:
    if (ctx->pc == 0x3FEFB8u) {
        ctx->pc = 0x3FEFB8u;
            // 0x3fefb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FEFBCu;
        goto label_3fefbc;
    }
    ctx->pc = 0x3FEFB4u;
    SET_GPR_U32(ctx, 31, 0x3FEFBCu);
    ctx->pc = 0x3FEFB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FEFB4u;
            // 0x3fefb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x209940u;
    if (runtime->hasFunction(0x209940u)) {
        auto targetFn = runtime->lookupFunction(0x209940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FEFBCu; }
        if (ctx->pc != 0x3FEFBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209940_0x209940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FEFBCu; }
        if (ctx->pc != 0x3FEFBCu) { return; }
    }
    ctx->pc = 0x3FEFBCu;
label_3fefbc:
    // 0x3fefbc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3fefbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fefc0:
    // 0x3fefc0: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x3fefc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_3fefc4:
    // 0x3fefc4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3fefc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3fefc8:
    // 0x3fefc8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3fefc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_3fefcc:
    // 0x3fefcc: 0xc0a7a88  jal         func_29EA20
label_3fefd0:
    if (ctx->pc == 0x3FEFD0u) {
        ctx->pc = 0x3FEFD0u;
            // 0x3fefd0: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x3FEFD4u;
        goto label_3fefd4;
    }
    ctx->pc = 0x3FEFCCu;
    SET_GPR_U32(ctx, 31, 0x3FEFD4u);
    ctx->pc = 0x3FEFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FEFCCu;
            // 0x3fefd0: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FEFD4u; }
        if (ctx->pc != 0x3FEFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FEFD4u; }
        if (ctx->pc != 0x3FEFD4u) { return; }
    }
    ctx->pc = 0x3FEFD4u;
label_3fefd4:
    // 0x3fefd4: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x3fefd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_3fefd8:
    // 0x3fefd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3fefd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fefdc:
    // 0x3fefdc: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_3fefe0:
    if (ctx->pc == 0x3FEFE0u) {
        ctx->pc = 0x3FEFE0u;
            // 0x3fefe0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3FEFE4u;
        goto label_3fefe4;
    }
    ctx->pc = 0x3FEFDCu;
    {
        const bool branch_taken_0x3fefdc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FEFE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FEFDCu;
            // 0x3fefe0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fefdc) {
            ctx->pc = 0x3FEFF8u;
            goto label_3feff8;
        }
    }
    ctx->pc = 0x3FEFE4u;
label_3fefe4:
    // 0x3fefe4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3fefe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3fefe8:
    // 0x3fefe8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3fefe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3fefec:
    // 0x3fefec: 0xc0822a8  jal         func_208AA0
label_3feff0:
    if (ctx->pc == 0x3FEFF0u) {
        ctx->pc = 0x3FEFF0u;
            // 0x3feff0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3FEFF4u;
        goto label_3feff4;
    }
    ctx->pc = 0x3FEFECu;
    SET_GPR_U32(ctx, 31, 0x3FEFF4u);
    ctx->pc = 0x3FEFF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FEFECu;
            // 0x3feff0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208AA0u;
    if (runtime->hasFunction(0x208AA0u)) {
        auto targetFn = runtime->lookupFunction(0x208AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FEFF4u; }
        if (ctx->pc != 0x3FEFF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00208AA0_0x208aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FEFF4u; }
        if (ctx->pc != 0x3FEFF4u) { return; }
    }
    ctx->pc = 0x3FEFF4u;
label_3feff4:
    // 0x3feff4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3feff4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3feff8:
    // 0x3feff8: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x3feff8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_3feffc:
    // 0x3feffc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_3ff000:
    if (ctx->pc == 0x3FF000u) {
        ctx->pc = 0x3FF004u;
        goto label_3ff004;
    }
    ctx->pc = 0x3FEFFCu;
    {
        const bool branch_taken_0x3feffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3feffc) {
            ctx->pc = 0x3FF040u;
            goto label_3ff040;
        }
    }
    ctx->pc = 0x3FF004u;
label_3ff004:
    // 0x3ff004: 0x86220006  lh          $v0, 0x6($s1)
    ctx->pc = 0x3ff004u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_3ff008:
    // 0x3ff008: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3ff008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3ff00c:
    // 0x3ff00c: 0xa6220006  sh          $v0, 0x6($s1)
    ctx->pc = 0x3ff00cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 2));
label_3ff010:
    // 0x3ff010: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3ff010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_3ff014:
    // 0x3ff014: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3ff014u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3ff018:
    // 0x3ff018: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_3ff01c:
    if (ctx->pc == 0x3FF01Cu) {
        ctx->pc = 0x3FF020u;
        goto label_3ff020;
    }
    ctx->pc = 0x3FF018u;
    {
        const bool branch_taken_0x3ff018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ff018) {
            ctx->pc = 0x3FF040u;
            goto label_3ff040;
        }
    }
    ctx->pc = 0x3FF020u;
label_3ff020:
    // 0x3ff020: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_3ff024:
    if (ctx->pc == 0x3FF024u) {
        ctx->pc = 0x3FF028u;
        goto label_3ff028;
    }
    ctx->pc = 0x3FF020u;
    {
        const bool branch_taken_0x3ff020 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ff020) {
            ctx->pc = 0x3FF040u;
            goto label_3ff040;
        }
    }
    ctx->pc = 0x3FF028u;
label_3ff028:
    // 0x3ff028: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x3ff028u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ff02c:
    // 0x3ff02c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ff02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ff030:
    // 0x3ff030: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3ff030u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3ff034:
    // 0x3ff034: 0x320f809  jalr        $t9
label_3ff038:
    if (ctx->pc == 0x3FF038u) {
        ctx->pc = 0x3FF038u;
            // 0x3ff038: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3FF03Cu;
        goto label_3ff03c;
    }
    ctx->pc = 0x3FF034u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3FF03Cu);
        ctx->pc = 0x3FF038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FF034u;
            // 0x3ff038: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3FF03Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3FF03Cu; }
            if (ctx->pc != 0x3FF03Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3FF03Cu;
label_3ff03c:
    // 0x3ff03c: 0x0  nop
    ctx->pc = 0x3ff03cu;
    // NOP
label_3ff040:
    // 0x3ff040: 0x96420004  lhu         $v0, 0x4($s2)
    ctx->pc = 0x3ff040u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
label_3ff044:
    // 0x3ff044: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_3ff048:
    if (ctx->pc == 0x3FF048u) {
        ctx->pc = 0x3FF04Cu;
        goto label_3ff04c;
    }
    ctx->pc = 0x3FF044u;
    {
        const bool branch_taken_0x3ff044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ff044) {
            ctx->pc = 0x3FF088u;
            goto label_3ff088;
        }
    }
    ctx->pc = 0x3FF04Cu;
label_3ff04c:
    // 0x3ff04c: 0x86420006  lh          $v0, 0x6($s2)
    ctx->pc = 0x3ff04cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
label_3ff050:
    // 0x3ff050: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3ff050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3ff054:
    // 0x3ff054: 0xa6420006  sh          $v0, 0x6($s2)
    ctx->pc = 0x3ff054u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 2));
label_3ff058:
    // 0x3ff058: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3ff058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_3ff05c:
    // 0x3ff05c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3ff05cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3ff060:
    // 0x3ff060: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_3ff064:
    if (ctx->pc == 0x3FF064u) {
        ctx->pc = 0x3FF068u;
        goto label_3ff068;
    }
    ctx->pc = 0x3FF060u;
    {
        const bool branch_taken_0x3ff060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ff060) {
            ctx->pc = 0x3FF088u;
            goto label_3ff088;
        }
    }
    ctx->pc = 0x3FF068u;
label_3ff068:
    // 0x3ff068: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_3ff06c:
    if (ctx->pc == 0x3FF06Cu) {
        ctx->pc = 0x3FF070u;
        goto label_3ff070;
    }
    ctx->pc = 0x3FF068u;
    {
        const bool branch_taken_0x3ff068 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ff068) {
            ctx->pc = 0x3FF088u;
            goto label_3ff088;
        }
    }
    ctx->pc = 0x3FF070u;
label_3ff070:
    // 0x3ff070: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x3ff070u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3ff074:
    // 0x3ff074: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ff074u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ff078:
    // 0x3ff078: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3ff078u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3ff07c:
    // 0x3ff07c: 0x320f809  jalr        $t9
label_3ff080:
    if (ctx->pc == 0x3FF080u) {
        ctx->pc = 0x3FF080u;
            // 0x3ff080: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3FF084u;
        goto label_3ff084;
    }
    ctx->pc = 0x3FF07Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3FF084u);
        ctx->pc = 0x3FF080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FF07Cu;
            // 0x3ff080: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3FF084u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3FF084u; }
            if (ctx->pc != 0x3FF084u) { return; }
        }
        }
    }
    ctx->pc = 0x3FF084u;
label_3ff084:
    // 0x3ff084: 0x0  nop
    ctx->pc = 0x3ff084u;
    // NOP
label_3ff088:
    // 0x3ff088: 0x8e8200e8  lw          $v0, 0xE8($s4)
    ctx->pc = 0x3ff088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 232)));
label_3ff08c:
    // 0x3ff08c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3ff08cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3ff090:
    // 0x3ff090: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ff090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ff094:
    // 0x3ff094: 0x26660010  addiu       $a2, $s3, 0x10
    ctx->pc = 0x3ff094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_3ff098:
    // 0x3ff098: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3ff098u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ff09c:
    // 0x3ff09c: 0xc0ffc58  jal         func_3FF160
label_3ff0a0:
    if (ctx->pc == 0x3FF0A0u) {
        ctx->pc = 0x3FF0A0u;
            // 0x3ff0a0: 0x5e3821  addu        $a3, $v0, $fp (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
        ctx->pc = 0x3FF0A4u;
        goto label_3ff0a4;
    }
    ctx->pc = 0x3FF09Cu;
    SET_GPR_U32(ctx, 31, 0x3FF0A4u);
    ctx->pc = 0x3FF0A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FF09Cu;
            // 0x3ff0a0: 0x5e3821  addu        $a3, $v0, $fp (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3FF160u;
    if (runtime->hasFunction(0x3FF160u)) {
        auto targetFn = runtime->lookupFunction(0x3FF160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF0A4u; }
        if (ctx->pc != 0x3FF0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003FF160_0x3ff160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF0A4u; }
        if (ctx->pc != 0x3FF0A4u) { return; }
    }
    ctx->pc = 0x3FF0A4u;
label_3ff0a4:
    // 0x3ff0a4: 0xafa2011c  sw          $v0, 0x11C($sp)
    ctx->pc = 0x3ff0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 2));
label_3ff0a8:
    // 0x3ff0a8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3ff0a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ff0ac:
    // 0x3ff0ac: 0x8ec300b0  lw          $v1, 0xB0($s6)
    ctx->pc = 0x3ff0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 176)));
label_3ff0b0:
    // 0x3ff0b0: 0x27a7011c  addiu       $a3, $sp, 0x11C
    ctx->pc = 0x3ff0b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
label_3ff0b4:
    // 0x3ff0b4: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x3ff0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_3ff0b8:
    // 0x3ff0b8: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x3ff0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3ff0bc:
    // 0x3ff0bc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3ff0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3ff0c0:
    // 0x3ff0c0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3ff0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_3ff0c4:
    // 0x3ff0c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3ff0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3ff0c8:
    // 0x3ff0c8: 0xc0a997c  jal         func_2A65F0
label_3ff0cc:
    if (ctx->pc == 0x3FF0CCu) {
        ctx->pc = 0x3FF0CCu;
            // 0x3ff0cc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x3FF0D0u;
        goto label_3ff0d0;
    }
    ctx->pc = 0x3FF0C8u;
    SET_GPR_U32(ctx, 31, 0x3FF0D0u);
    ctx->pc = 0x3FF0CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3FF0C8u;
            // 0x3ff0cc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF0D0u; }
        if (ctx->pc != 0x3FF0D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3FF0D0u; }
        if (ctx->pc != 0x3FF0D0u) { return; }
    }
    ctx->pc = 0x3FF0D0u;
label_3ff0d0:
    // 0x3ff0d0: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x3ff0d0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_3ff0d4:
    // 0x3ff0d4: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_3ff0d8:
    if (ctx->pc == 0x3FF0D8u) {
        ctx->pc = 0x3FF0DCu;
        goto label_3ff0dc;
    }
    ctx->pc = 0x3FF0D4u;
    {
        const bool branch_taken_0x3ff0d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ff0d4) {
            ctx->pc = 0x3FF118u;
            goto label_3ff118;
        }
    }
    ctx->pc = 0x3FF0DCu;
label_3ff0dc:
    // 0x3ff0dc: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x3ff0dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_3ff0e0:
    // 0x3ff0e0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3ff0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3ff0e4:
    // 0x3ff0e4: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x3ff0e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
label_3ff0e8:
    // 0x3ff0e8: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x3ff0e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_3ff0ec:
    // 0x3ff0ec: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3ff0ecu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_3ff0f0:
    // 0x3ff0f0: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_3ff0f4:
    if (ctx->pc == 0x3FF0F4u) {
        ctx->pc = 0x3FF0F8u;
        goto label_3ff0f8;
    }
    ctx->pc = 0x3FF0F0u;
    {
        const bool branch_taken_0x3ff0f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ff0f0) {
            ctx->pc = 0x3FF118u;
            goto label_3ff118;
        }
    }
    ctx->pc = 0x3FF0F8u;
label_3ff0f8:
    // 0x3ff0f8: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_3ff0fc:
    if (ctx->pc == 0x3FF0FCu) {
        ctx->pc = 0x3FF100u;
        goto label_3ff100;
    }
    ctx->pc = 0x3FF0F8u;
    {
        const bool branch_taken_0x3ff0f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ff0f8) {
            ctx->pc = 0x3FF118u;
            goto label_3ff118;
        }
    }
    ctx->pc = 0x3FF100u;
label_3ff100:
    // 0x3ff100: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3ff100u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ff104:
    // 0x3ff104: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ff104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ff108:
    // 0x3ff108: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3ff108u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3ff10c:
    // 0x3ff10c: 0x320f809  jalr        $t9
label_3ff110:
    if (ctx->pc == 0x3FF110u) {
        ctx->pc = 0x3FF110u;
            // 0x3ff110: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3FF114u;
        goto label_3ff114;
    }
    ctx->pc = 0x3FF10Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3FF114u);
        ctx->pc = 0x3FF110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FF10Cu;
            // 0x3ff110: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3FF114u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3FF114u; }
            if (ctx->pc != 0x3FF114u) { return; }
        }
        }
    }
    ctx->pc = 0x3FF114u;
label_3ff114:
    // 0x3ff114: 0x0  nop
    ctx->pc = 0x3ff114u;
    // NOP
label_3ff118:
    // 0x3ff118: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x3ff118u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_3ff11c:
    // 0x3ff11c: 0x2f5182b  sltu        $v1, $s7, $s5
    ctx->pc = 0x3ff11cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_3ff120:
    // 0x3ff120: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x3ff120u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_3ff124:
    // 0x3ff124: 0x1460ff69  bnez        $v1, . + 4 + (-0x97 << 2)
label_3ff128:
    if (ctx->pc == 0x3FF128u) {
        ctx->pc = 0x3FF128u;
            // 0x3ff128: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->pc = 0x3FF12Cu;
        goto label_3ff12c;
    }
    ctx->pc = 0x3FF124u;
    {
        const bool branch_taken_0x3ff124 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FF128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FF124u;
            // 0x3ff128: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ff124) {
            ctx->pc = 0x3FEECCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3feecc;
        }
    }
    ctx->pc = 0x3FF12Cu;
label_3ff12c:
    // 0x3ff12c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3ff12cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3ff130:
    // 0x3ff130: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3ff130u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3ff134:
    // 0x3ff134: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3ff134u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3ff138:
    // 0x3ff138: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3ff138u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3ff13c:
    // 0x3ff13c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3ff13cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ff140:
    // 0x3ff140: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3ff140u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ff144:
    // 0x3ff144: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3ff144u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ff148:
    // 0x3ff148: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3ff148u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ff14c:
    // 0x3ff14c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ff14cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ff150:
    // 0x3ff150: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ff150u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ff154:
    // 0x3ff154: 0x3e00008  jr          $ra
label_3ff158:
    if (ctx->pc == 0x3FF158u) {
        ctx->pc = 0x3FF158u;
            // 0x3ff158: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x3FF15Cu;
        goto label_3ff15c;
    }
    ctx->pc = 0x3FF154u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FF158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3FF154u;
            // 0x3ff158: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3FF15Cu;
label_3ff15c:
    // 0x3ff15c: 0x0  nop
    ctx->pc = 0x3ff15cu;
    // NOP
}
