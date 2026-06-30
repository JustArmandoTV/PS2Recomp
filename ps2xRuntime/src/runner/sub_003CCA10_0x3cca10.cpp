#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003CCA10
// Address: 0x3cca10 - 0x3ccc60
void sub_003CCA10_0x3cca10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CCA10_0x3cca10");
#endif

    switch (ctx->pc) {
        case 0x3cca10u: goto label_3cca10;
        case 0x3cca14u: goto label_3cca14;
        case 0x3cca18u: goto label_3cca18;
        case 0x3cca1cu: goto label_3cca1c;
        case 0x3cca20u: goto label_3cca20;
        case 0x3cca24u: goto label_3cca24;
        case 0x3cca28u: goto label_3cca28;
        case 0x3cca2cu: goto label_3cca2c;
        case 0x3cca30u: goto label_3cca30;
        case 0x3cca34u: goto label_3cca34;
        case 0x3cca38u: goto label_3cca38;
        case 0x3cca3cu: goto label_3cca3c;
        case 0x3cca40u: goto label_3cca40;
        case 0x3cca44u: goto label_3cca44;
        case 0x3cca48u: goto label_3cca48;
        case 0x3cca4cu: goto label_3cca4c;
        case 0x3cca50u: goto label_3cca50;
        case 0x3cca54u: goto label_3cca54;
        case 0x3cca58u: goto label_3cca58;
        case 0x3cca5cu: goto label_3cca5c;
        case 0x3cca60u: goto label_3cca60;
        case 0x3cca64u: goto label_3cca64;
        case 0x3cca68u: goto label_3cca68;
        case 0x3cca6cu: goto label_3cca6c;
        case 0x3cca70u: goto label_3cca70;
        case 0x3cca74u: goto label_3cca74;
        case 0x3cca78u: goto label_3cca78;
        case 0x3cca7cu: goto label_3cca7c;
        case 0x3cca80u: goto label_3cca80;
        case 0x3cca84u: goto label_3cca84;
        case 0x3cca88u: goto label_3cca88;
        case 0x3cca8cu: goto label_3cca8c;
        case 0x3cca90u: goto label_3cca90;
        case 0x3cca94u: goto label_3cca94;
        case 0x3cca98u: goto label_3cca98;
        case 0x3cca9cu: goto label_3cca9c;
        case 0x3ccaa0u: goto label_3ccaa0;
        case 0x3ccaa4u: goto label_3ccaa4;
        case 0x3ccaa8u: goto label_3ccaa8;
        case 0x3ccaacu: goto label_3ccaac;
        case 0x3ccab0u: goto label_3ccab0;
        case 0x3ccab4u: goto label_3ccab4;
        case 0x3ccab8u: goto label_3ccab8;
        case 0x3ccabcu: goto label_3ccabc;
        case 0x3ccac0u: goto label_3ccac0;
        case 0x3ccac4u: goto label_3ccac4;
        case 0x3ccac8u: goto label_3ccac8;
        case 0x3ccaccu: goto label_3ccacc;
        case 0x3ccad0u: goto label_3ccad0;
        case 0x3ccad4u: goto label_3ccad4;
        case 0x3ccad8u: goto label_3ccad8;
        case 0x3ccadcu: goto label_3ccadc;
        case 0x3ccae0u: goto label_3ccae0;
        case 0x3ccae4u: goto label_3ccae4;
        case 0x3ccae8u: goto label_3ccae8;
        case 0x3ccaecu: goto label_3ccaec;
        case 0x3ccaf0u: goto label_3ccaf0;
        case 0x3ccaf4u: goto label_3ccaf4;
        case 0x3ccaf8u: goto label_3ccaf8;
        case 0x3ccafcu: goto label_3ccafc;
        case 0x3ccb00u: goto label_3ccb00;
        case 0x3ccb04u: goto label_3ccb04;
        case 0x3ccb08u: goto label_3ccb08;
        case 0x3ccb0cu: goto label_3ccb0c;
        case 0x3ccb10u: goto label_3ccb10;
        case 0x3ccb14u: goto label_3ccb14;
        case 0x3ccb18u: goto label_3ccb18;
        case 0x3ccb1cu: goto label_3ccb1c;
        case 0x3ccb20u: goto label_3ccb20;
        case 0x3ccb24u: goto label_3ccb24;
        case 0x3ccb28u: goto label_3ccb28;
        case 0x3ccb2cu: goto label_3ccb2c;
        case 0x3ccb30u: goto label_3ccb30;
        case 0x3ccb34u: goto label_3ccb34;
        case 0x3ccb38u: goto label_3ccb38;
        case 0x3ccb3cu: goto label_3ccb3c;
        case 0x3ccb40u: goto label_3ccb40;
        case 0x3ccb44u: goto label_3ccb44;
        case 0x3ccb48u: goto label_3ccb48;
        case 0x3ccb4cu: goto label_3ccb4c;
        case 0x3ccb50u: goto label_3ccb50;
        case 0x3ccb54u: goto label_3ccb54;
        case 0x3ccb58u: goto label_3ccb58;
        case 0x3ccb5cu: goto label_3ccb5c;
        case 0x3ccb60u: goto label_3ccb60;
        case 0x3ccb64u: goto label_3ccb64;
        case 0x3ccb68u: goto label_3ccb68;
        case 0x3ccb6cu: goto label_3ccb6c;
        case 0x3ccb70u: goto label_3ccb70;
        case 0x3ccb74u: goto label_3ccb74;
        case 0x3ccb78u: goto label_3ccb78;
        case 0x3ccb7cu: goto label_3ccb7c;
        case 0x3ccb80u: goto label_3ccb80;
        case 0x3ccb84u: goto label_3ccb84;
        case 0x3ccb88u: goto label_3ccb88;
        case 0x3ccb8cu: goto label_3ccb8c;
        case 0x3ccb90u: goto label_3ccb90;
        case 0x3ccb94u: goto label_3ccb94;
        case 0x3ccb98u: goto label_3ccb98;
        case 0x3ccb9cu: goto label_3ccb9c;
        case 0x3ccba0u: goto label_3ccba0;
        case 0x3ccba4u: goto label_3ccba4;
        case 0x3ccba8u: goto label_3ccba8;
        case 0x3ccbacu: goto label_3ccbac;
        case 0x3ccbb0u: goto label_3ccbb0;
        case 0x3ccbb4u: goto label_3ccbb4;
        case 0x3ccbb8u: goto label_3ccbb8;
        case 0x3ccbbcu: goto label_3ccbbc;
        case 0x3ccbc0u: goto label_3ccbc0;
        case 0x3ccbc4u: goto label_3ccbc4;
        case 0x3ccbc8u: goto label_3ccbc8;
        case 0x3ccbccu: goto label_3ccbcc;
        case 0x3ccbd0u: goto label_3ccbd0;
        case 0x3ccbd4u: goto label_3ccbd4;
        case 0x3ccbd8u: goto label_3ccbd8;
        case 0x3ccbdcu: goto label_3ccbdc;
        case 0x3ccbe0u: goto label_3ccbe0;
        case 0x3ccbe4u: goto label_3ccbe4;
        case 0x3ccbe8u: goto label_3ccbe8;
        case 0x3ccbecu: goto label_3ccbec;
        case 0x3ccbf0u: goto label_3ccbf0;
        case 0x3ccbf4u: goto label_3ccbf4;
        case 0x3ccbf8u: goto label_3ccbf8;
        case 0x3ccbfcu: goto label_3ccbfc;
        case 0x3ccc00u: goto label_3ccc00;
        case 0x3ccc04u: goto label_3ccc04;
        case 0x3ccc08u: goto label_3ccc08;
        case 0x3ccc0cu: goto label_3ccc0c;
        case 0x3ccc10u: goto label_3ccc10;
        case 0x3ccc14u: goto label_3ccc14;
        case 0x3ccc18u: goto label_3ccc18;
        case 0x3ccc1cu: goto label_3ccc1c;
        case 0x3ccc20u: goto label_3ccc20;
        case 0x3ccc24u: goto label_3ccc24;
        case 0x3ccc28u: goto label_3ccc28;
        case 0x3ccc2cu: goto label_3ccc2c;
        case 0x3ccc30u: goto label_3ccc30;
        case 0x3ccc34u: goto label_3ccc34;
        case 0x3ccc38u: goto label_3ccc38;
        case 0x3ccc3cu: goto label_3ccc3c;
        case 0x3ccc40u: goto label_3ccc40;
        case 0x3ccc44u: goto label_3ccc44;
        case 0x3ccc48u: goto label_3ccc48;
        case 0x3ccc4cu: goto label_3ccc4c;
        case 0x3ccc50u: goto label_3ccc50;
        case 0x3ccc54u: goto label_3ccc54;
        case 0x3ccc58u: goto label_3ccc58;
        case 0x3ccc5cu: goto label_3ccc5c;
        default: break;
    }

    ctx->pc = 0x3cca10u;

label_3cca10:
    // 0x3cca10: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3cca10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3cca14:
    // 0x3cca14: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x3cca14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_3cca18:
    // 0x3cca18: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3cca18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3cca1c:
    // 0x3cca1c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3cca1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3cca20:
    // 0x3cca20: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3cca20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3cca24:
    // 0x3cca24: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3cca24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3cca28:
    // 0x3cca28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3cca28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3cca2c:
    // 0x3cca2c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3cca2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3cca30:
    // 0x3cca30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3cca30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3cca34:
    // 0x3cca34: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3cca34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3cca38:
    // 0x3cca38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3cca38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3cca3c:
    // 0x3cca3c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x3cca3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3cca40:
    // 0x3cca40: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x3cca40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3cca44:
    // 0x3cca44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3cca44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cca48:
    // 0x3cca48: 0xc0ee760  jal         func_3B9D80
label_3cca4c:
    if (ctx->pc == 0x3CCA4Cu) {
        ctx->pc = 0x3CCA4Cu;
            // 0x3cca4c: 0x3445aece  ori         $a1, $v0, 0xAECE (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44750);
        ctx->pc = 0x3CCA50u;
        goto label_3cca50;
    }
    ctx->pc = 0x3CCA48u;
    SET_GPR_U32(ctx, 31, 0x3CCA50u);
    ctx->pc = 0x3CCA4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CCA48u;
            // 0x3cca4c: 0x3445aece  ori         $a1, $v0, 0xAECE (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44750);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B9D80u;
    if (runtime->hasFunction(0x3B9D80u)) {
        auto targetFn = runtime->lookupFunction(0x3B9D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CCA50u; }
        if (ctx->pc != 0x3CCA50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B9D80_0x3b9d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CCA50u; }
        if (ctx->pc != 0x3CCA50u) { return; }
    }
    ctx->pc = 0x3CCA50u;
label_3cca50:
    // 0x3cca50: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3cca50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3cca54:
    // 0x3cca54: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3cca54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3cca58:
    // 0x3cca58: 0x24639080  addiu       $v1, $v1, -0x6F80
    ctx->pc = 0x3cca58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938752));
label_3cca5c:
    // 0x3cca5c: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x3cca5cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_3cca60:
    // 0x3cca60: 0xae930058  sw          $s3, 0x58($s4)
    ctx->pc = 0x3cca60u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 88), GPR_U32(ctx, 19));
label_3cca64:
    // 0x3cca64: 0x2a430006  slti        $v1, $s2, 0x6
    ctx->pc = 0x3cca64u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
label_3cca68:
    // 0x3cca68: 0xae90005c  sw          $s0, 0x5C($s4)
    ctx->pc = 0x3cca68u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 92), GPR_U32(ctx, 16));
label_3cca6c:
    // 0x3cca6c: 0xae920060  sw          $s2, 0x60($s4)
    ctx->pc = 0x3cca6cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 96), GPR_U32(ctx, 18));
label_3cca70:
    // 0x3cca70: 0xae910064  sw          $s1, 0x64($s4)
    ctx->pc = 0x3cca70u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 100), GPR_U32(ctx, 17));
label_3cca74:
    // 0x3cca74: 0xa280006c  sb          $zero, 0x6C($s4)
    ctx->pc = 0x3cca74u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 108), (uint8_t)GPR_U32(ctx, 0));
label_3cca78:
    // 0x3cca78: 0xa680006e  sh          $zero, 0x6E($s4)
    ctx->pc = 0x3cca78u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 110), (uint16_t)GPR_U32(ctx, 0));
label_3cca7c:
    // 0x3cca7c: 0xa2800070  sb          $zero, 0x70($s4)
    ctx->pc = 0x3cca7cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 112), (uint8_t)GPR_U32(ctx, 0));
label_3cca80:
    // 0x3cca80: 0xa6800072  sh          $zero, 0x72($s4)
    ctx->pc = 0x3cca80u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 114), (uint16_t)GPR_U32(ctx, 0));
label_3cca84:
    // 0x3cca84: 0xae800078  sw          $zero, 0x78($s4)
    ctx->pc = 0x3cca84u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 120), GPR_U32(ctx, 0));
label_3cca88:
    // 0x3cca88: 0xae80007c  sw          $zero, 0x7C($s4)
    ctx->pc = 0x3cca88u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 124), GPR_U32(ctx, 0));
label_3cca8c:
    // 0x3cca8c: 0xae800080  sw          $zero, 0x80($s4)
    ctx->pc = 0x3cca8cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 128), GPR_U32(ctx, 0));
label_3cca90:
    // 0x3cca90: 0xae800084  sw          $zero, 0x84($s4)
    ctx->pc = 0x3cca90u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 132), GPR_U32(ctx, 0));
label_3cca94:
    // 0x3cca94: 0xa28000d0  sb          $zero, 0xD0($s4)
    ctx->pc = 0x3cca94u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 208), (uint8_t)GPR_U32(ctx, 0));
label_3cca98:
    // 0x3cca98: 0xae8000d4  sw          $zero, 0xD4($s4)
    ctx->pc = 0x3cca98u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 212), GPR_U32(ctx, 0));
label_3cca9c:
    // 0x3cca9c: 0xae8000d8  sw          $zero, 0xD8($s4)
    ctx->pc = 0x3cca9cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 216), GPR_U32(ctx, 0));
label_3ccaa0:
    // 0x3ccaa0: 0xae8000dc  sw          $zero, 0xDC($s4)
    ctx->pc = 0x3ccaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 220), GPR_U32(ctx, 0));
label_3ccaa4:
    // 0x3ccaa4: 0xae8000e0  sw          $zero, 0xE0($s4)
    ctx->pc = 0x3ccaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 224), GPR_U32(ctx, 0));
label_3ccaa8:
    // 0x3ccaa8: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_3ccaac:
    if (ctx->pc == 0x3CCAACu) {
        ctx->pc = 0x3CCAACu;
            // 0x3ccaac: 0x8c500eac  lw          $s0, 0xEAC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3756)));
        ctx->pc = 0x3CCAB0u;
        goto label_3ccab0;
    }
    ctx->pc = 0x3CCAA8u;
    {
        const bool branch_taken_0x3ccaa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CCAACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CCAA8u;
            // 0x3ccaac: 0x8c500eac  lw          $s0, 0xEAC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3756)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccaa8) {
            ctx->pc = 0x3CCACCu;
            goto label_3ccacc;
        }
    }
    ctx->pc = 0x3CCAB0u;
label_3ccab0:
    // 0x3ccab0: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x3ccab0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3ccab4:
    // 0x3ccab4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3ccab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ccab8:
    // 0x3ccab8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3ccab8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3ccabc:
    // 0x3ccabc: 0x320f809  jalr        $t9
label_3ccac0:
    if (ctx->pc == 0x3CCAC0u) {
        ctx->pc = 0x3CCAC0u;
            // 0x3ccac0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CCAC4u;
        goto label_3ccac4;
    }
    ctx->pc = 0x3CCABCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CCAC4u);
        ctx->pc = 0x3CCAC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CCABCu;
            // 0x3ccac0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CCAC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CCAC4u; }
            if (ctx->pc != 0x3CCAC4u) { return; }
        }
        }
    }
    ctx->pc = 0x3CCAC4u;
label_3ccac4:
    // 0x3ccac4: 0x1000005d  b           . + 4 + (0x5D << 2)
label_3ccac8:
    if (ctx->pc == 0x3CCAC8u) {
        ctx->pc = 0x3CCAC8u;
            // 0x3ccac8: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CCACCu;
        goto label_3ccacc;
    }
    ctx->pc = 0x3CCAC4u;
    {
        const bool branch_taken_0x3ccac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CCAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CCAC4u;
            // 0x3ccac8: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccac4) {
            ctx->pc = 0x3CCC3Cu;
            goto label_3ccc3c;
        }
    }
    ctx->pc = 0x3CCACCu;
label_3ccacc:
    // 0x3ccacc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3ccaccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3ccad0:
    // 0x3ccad0: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x3ccad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3ccad4:
    // 0x3ccad4: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x3ccad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_3ccad8:
    // 0x3ccad8: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x3ccad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_3ccadc:
    // 0x3ccadc: 0x54430014  bnel        $v0, $v1, . + 4 + (0x14 << 2)
label_3ccae0:
    if (ctx->pc == 0x3CCAE0u) {
        ctx->pc = 0x3CCAE0u;
            // 0x3ccae0: 0x131100  sll         $v0, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x3CCAE4u;
        goto label_3ccae4;
    }
    ctx->pc = 0x3CCADCu;
    {
        const bool branch_taken_0x3ccadc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3ccadc) {
            ctx->pc = 0x3CCAE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CCADCu;
            // 0x3ccae0: 0x131100  sll         $v0, $s3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CCB30u;
            goto label_3ccb30;
        }
    }
    ctx->pc = 0x3CCAE4u;
label_3ccae4:
    // 0x3ccae4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3ccae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3ccae8:
    // 0x3ccae8: 0x8c440e80  lw          $a0, 0xE80($v0)
    ctx->pc = 0x3ccae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3ccaec:
    // 0x3ccaec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3ccaecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3ccaf0:
    // 0x3ccaf0: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x3ccaf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_3ccaf4:
    // 0x3ccaf4: 0x320f809  jalr        $t9
label_3ccaf8:
    if (ctx->pc == 0x3CCAF8u) {
        ctx->pc = 0x3CCAF8u;
            // 0x3ccaf8: 0x8e310e38  lw          $s1, 0xE38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3640)));
        ctx->pc = 0x3CCAFCu;
        goto label_3ccafc;
    }
    ctx->pc = 0x3CCAF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3CCAFCu);
        ctx->pc = 0x3CCAF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CCAF4u;
            // 0x3ccaf8: 0x8e310e38  lw          $s1, 0xE38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3640)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3CCAFCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3CCAFCu; }
            if (ctx->pc != 0x3CCAFCu) { return; }
        }
        }
    }
    ctx->pc = 0x3CCAFCu;
label_3ccafc:
    // 0x3ccafc: 0x222001b  divu        $zero, $s1, $v0
    ctx->pc = 0x3ccafcu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
label_3ccb00:
    // 0x3ccb00: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3ccb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3ccb04:
    // 0x3ccb04: 0x0  nop
    ctx->pc = 0x3ccb04u;
    // NOP
label_3ccb08:
    // 0x3ccb08: 0x1812  mflo        $v1
    ctx->pc = 0x3ccb08u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_3ccb0c:
    // 0x3ccb0c: 0x56220003  bnel        $s1, $v0, . + 4 + (0x3 << 2)
label_3ccb10:
    if (ctx->pc == 0x3CCB10u) {
        ctx->pc = 0x3CCB10u;
            // 0x3ccb10: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x3CCB14u;
        goto label_3ccb14;
    }
    ctx->pc = 0x3CCB0Cu;
    {
        const bool branch_taken_0x3ccb0c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ccb0c) {
            ctx->pc = 0x3CCB10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CCB0Cu;
            // 0x3ccb10: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CCB1Cu;
            goto label_3ccb1c;
        }
    }
    ctx->pc = 0x3CCB14u;
label_3ccb14:
    // 0x3ccb14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ccb14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ccb18:
    // 0x3ccb18: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x3ccb18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_3ccb1c:
    // 0x3ccb1c: 0xae830058  sw          $v1, 0x58($s4)
    ctx->pc = 0x3ccb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 88), GPR_U32(ctx, 3));
label_3ccb20:
    // 0x3ccb20: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3ccb20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3ccb24:
    // 0x3ccb24: 0x24420094  addiu       $v0, $v0, 0x94
    ctx->pc = 0x3ccb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 148));
label_3ccb28:
    // 0x3ccb28: 0x10000004  b           . + 4 + (0x4 << 2)
label_3ccb2c:
    if (ctx->pc == 0x3CCB2Cu) {
        ctx->pc = 0x3CCB2Cu;
            // 0x3ccb2c: 0xae820068  sw          $v0, 0x68($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 104), GPR_U32(ctx, 2));
        ctx->pc = 0x3CCB30u;
        goto label_3ccb30;
    }
    ctx->pc = 0x3CCB28u;
    {
        const bool branch_taken_0x3ccb28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CCB2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CCB28u;
            // 0x3ccb2c: 0xae820068  sw          $v0, 0x68($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccb28) {
            ctx->pc = 0x3CCB3Cu;
            goto label_3ccb3c;
        }
    }
    ctx->pc = 0x3CCB30u;
label_3ccb30:
    // 0x3ccb30: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3ccb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3ccb34:
    // 0x3ccb34: 0x24420094  addiu       $v0, $v0, 0x94
    ctx->pc = 0x3ccb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 148));
label_3ccb38:
    // 0x3ccb38: 0xae820068  sw          $v0, 0x68($s4)
    ctx->pc = 0x3ccb38u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 104), GPR_U32(ctx, 2));
label_3ccb3c:
    // 0x3ccb3c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3ccb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3ccb40:
    // 0x3ccb40: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3ccb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3ccb44:
    // 0x3ccb44: 0x8c430788  lw          $v1, 0x788($v0)
    ctx->pc = 0x3ccb44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1928)));
label_3ccb48:
    // 0x3ccb48: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x3ccb48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3ccb4c:
    // 0x3ccb4c: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_3ccb50:
    if (ctx->pc == 0x3CCB50u) {
        ctx->pc = 0x3CCB50u;
            // 0x3ccb50: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3CCB54u;
        goto label_3ccb54;
    }
    ctx->pc = 0x3CCB4Cu;
    {
        const bool branch_taken_0x3ccb4c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CCB50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CCB4Cu;
            // 0x3ccb50: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ccb4c) {
            ctx->pc = 0x3CCB58u;
            goto label_3ccb58;
        }
    }
    ctx->pc = 0x3CCB54u;
label_3ccb54:
    // 0x3ccb54: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x3ccb54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
label_3ccb58:
    // 0x3ccb58: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x3ccb58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_3ccb5c:
    // 0x3ccb5c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_3ccb60:
    if (ctx->pc == 0x3CCB60u) {
        ctx->pc = 0x3CCB60u;
            // 0x3ccb60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3CCB64u;
        goto label_3ccb64;
    }
    ctx->pc = 0x3CCB5Cu;
    {
        const bool branch_taken_0x3ccb5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ccb5c) {
            ctx->pc = 0x3CCB60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CCB5Cu;
            // 0x3ccb60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CCB6Cu;
            goto label_3ccb6c;
        }
    }
    ctx->pc = 0x3CCB64u;
label_3ccb64:
    // 0x3ccb64: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x3ccb64u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
label_3ccb68:
    // 0x3ccb68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ccb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ccb6c:
    // 0x3ccb6c: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
label_3ccb70:
    if (ctx->pc == 0x3CCB70u) {
        ctx->pc = 0x3CCB70u;
            // 0x3ccb70: 0xae840074  sw          $a0, 0x74($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 116), GPR_U32(ctx, 4));
        ctx->pc = 0x3CCB74u;
        goto label_3ccb74;
    }
    ctx->pc = 0x3CCB6Cu;
    {
        const bool branch_taken_0x3ccb6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ccb6c) {
            ctx->pc = 0x3CCB70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CCB6Cu;
            // 0x3ccb70: 0xae840074  sw          $a0, 0x74($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 116), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CCB7Cu;
            goto label_3ccb7c;
        }
    }
    ctx->pc = 0x3CCB74u;
label_3ccb74:
    // 0x3ccb74: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x3ccb74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
label_3ccb78:
    // 0x3ccb78: 0xae840074  sw          $a0, 0x74($s4)
    ctx->pc = 0x3ccb78u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 116), GPR_U32(ctx, 4));
label_3ccb7c:
    // 0x3ccb7c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3ccb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3ccb80:
    // 0x3ccb80: 0x8e850058  lw          $a1, 0x58($s4)
    ctx->pc = 0x3ccb80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
label_3ccb84:
    // 0x3ccb84: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3ccb84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3ccb88:
    // 0x3ccb88: 0x8c5065b8  lw          $s0, 0x65B8($v0)
    ctx->pc = 0x3ccb88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26040)));
label_3ccb8c:
    // 0x3ccb8c: 0x246365c0  addiu       $v1, $v1, 0x65C0
    ctx->pc = 0x3ccb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26048));
label_3ccb90:
    // 0x3ccb90: 0x26840090  addiu       $a0, $s4, 0x90
    ctx->pc = 0x3ccb90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_3ccb94:
    // 0x3ccb94: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x3ccb94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_3ccb98:
    // 0x3ccb98: 0xc04f26c  jal         func_13C9B0
label_3ccb9c:
    if (ctx->pc == 0x3CCB9Cu) {
        ctx->pc = 0x3CCB9Cu;
            // 0x3ccb9c: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x3CCBA0u;
        goto label_3ccba0;
    }
    ctx->pc = 0x3CCB98u;
    SET_GPR_U32(ctx, 31, 0x3CCBA0u);
    ctx->pc = 0x3CCB9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CCB98u;
            // 0x3ccb9c: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CCBA0u; }
        if (ctx->pc != 0x3CCBA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CCBA0u; }
        if (ctx->pc != 0x3CCBA0u) { return; }
    }
    ctx->pc = 0x3CCBA0u;
label_3ccba0:
    // 0x3ccba0: 0xc040180  jal         func_100600
label_3ccba4:
    if (ctx->pc == 0x3CCBA4u) {
        ctx->pc = 0x3CCBA4u;
            // 0x3ccba4: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = 0x3CCBA8u;
        goto label_3ccba8;
    }
    ctx->pc = 0x3CCBA0u;
    SET_GPR_U32(ctx, 31, 0x3CCBA8u);
    ctx->pc = 0x3CCBA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CCBA0u;
            // 0x3ccba4: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CCBA8u; }
        if (ctx->pc != 0x3CCBA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CCBA8u; }
        if (ctx->pc != 0x3CCBA8u) { return; }
    }
    ctx->pc = 0x3CCBA8u;
label_3ccba8:
    // 0x3ccba8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_3ccbac:
    if (ctx->pc == 0x3CCBACu) {
        ctx->pc = 0x3CCBACu;
            // 0x3ccbac: 0xae8200dc  sw          $v0, 0xDC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 220), GPR_U32(ctx, 2));
        ctx->pc = 0x3CCBB0u;
        goto label_3ccbb0;
    }
    ctx->pc = 0x3CCBA8u;
    {
        const bool branch_taken_0x3ccba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ccba8) {
            ctx->pc = 0x3CCBACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CCBA8u;
            // 0x3ccbac: 0xae8200dc  sw          $v0, 0xDC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CCBDCu;
            goto label_3ccbdc;
        }
    }
    ctx->pc = 0x3CCBB0u;
label_3ccbb0:
    // 0x3ccbb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3ccbb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ccbb4:
    // 0x3ccbb4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x3ccbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ccbb8:
    // 0x3ccbb8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3ccbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3ccbbc:
    // 0x3ccbbc: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x3ccbbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ccbc0:
    // 0x3ccbc0: 0x8c4a0eac  lw          $t2, 0xEAC($v0)
    ctx->pc = 0x3ccbc0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3756)));
label_3ccbc4:
    // 0x3ccbc4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3ccbc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ccbc8:
    // 0x3ccbc8: 0x268700d4  addiu       $a3, $s4, 0xD4
    ctx->pc = 0x3ccbc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 212));
label_3ccbcc:
    // 0x3ccbcc: 0x26280010  addiu       $t0, $s1, 0x10
    ctx->pc = 0x3ccbccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3ccbd0:
    // 0x3ccbd0: 0xc1109e0  jal         func_442780
label_3ccbd4:
    if (ctx->pc == 0x3CCBD4u) {
        ctx->pc = 0x3CCBD4u;
            // 0x3ccbd4: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x3CCBD8u;
        goto label_3ccbd8;
    }
    ctx->pc = 0x3CCBD0u;
    SET_GPR_U32(ctx, 31, 0x3CCBD8u);
    ctx->pc = 0x3CCBD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CCBD0u;
            // 0x3ccbd4: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x442780u;
    if (runtime->hasFunction(0x442780u)) {
        auto targetFn = runtime->lookupFunction(0x442780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CCBD8u; }
        if (ctx->pc != 0x3CCBD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442780_0x442780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CCBD8u; }
        if (ctx->pc != 0x3CCBD8u) { return; }
    }
    ctx->pc = 0x3CCBD8u;
label_3ccbd8:
    // 0x3ccbd8: 0xae8200dc  sw          $v0, 0xDC($s4)
    ctx->pc = 0x3ccbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 220), GPR_U32(ctx, 2));
label_3ccbdc:
    // 0x3ccbdc: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x3ccbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_3ccbe0:
    // 0x3ccbe0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x3ccbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3ccbe4:
    // 0x3ccbe4: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x3ccbe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ccbe8:
    // 0x3ccbe8: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x3ccbe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_3ccbec:
    // 0x3ccbec: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x3ccbecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_3ccbf0:
    // 0x3ccbf0: 0xc040180  jal         func_100600
label_3ccbf4:
    if (ctx->pc == 0x3CCBF4u) {
        ctx->pc = 0x3CCBF4u;
            // 0x3ccbf4: 0xe4400014  swc1        $f0, 0x14($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
        ctx->pc = 0x3CCBF8u;
        goto label_3ccbf8;
    }
    ctx->pc = 0x3CCBF0u;
    SET_GPR_U32(ctx, 31, 0x3CCBF8u);
    ctx->pc = 0x3CCBF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CCBF0u;
            // 0x3ccbf4: 0xe4400014  swc1        $f0, 0x14($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CCBF8u; }
        if (ctx->pc != 0x3CCBF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CCBF8u; }
        if (ctx->pc != 0x3CCBF8u) { return; }
    }
    ctx->pc = 0x3CCBF8u;
label_3ccbf8:
    // 0x3ccbf8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_3ccbfc:
    if (ctx->pc == 0x3CCBFCu) {
        ctx->pc = 0x3CCBFCu;
            // 0x3ccbfc: 0xae8200e0  sw          $v0, 0xE0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 224), GPR_U32(ctx, 2));
        ctx->pc = 0x3CCC00u;
        goto label_3ccc00;
    }
    ctx->pc = 0x3CCBF8u;
    {
        const bool branch_taken_0x3ccbf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ccbf8) {
            ctx->pc = 0x3CCBFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3CCBF8u;
            // 0x3ccbfc: 0xae8200e0  sw          $v0, 0xE0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3CCC2Cu;
            goto label_3ccc2c;
        }
    }
    ctx->pc = 0x3CCC00u;
label_3ccc00:
    // 0x3ccc00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3ccc00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ccc04:
    // 0x3ccc04: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x3ccc04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ccc08:
    // 0x3ccc08: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3ccc08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3ccc0c:
    // 0x3ccc0c: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x3ccc0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ccc10:
    // 0x3ccc10: 0xc60c0030  lwc1        $f12, 0x30($s0)
    ctx->pc = 0x3ccc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3ccc14:
    // 0x3ccc14: 0x8c4a0eac  lw          $t2, 0xEAC($v0)
    ctx->pc = 0x3ccc14u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3756)));
label_3ccc18:
    // 0x3ccc18: 0x268700d8  addiu       $a3, $s4, 0xD8
    ctx->pc = 0x3ccc18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 216));
label_3ccc1c:
    // 0x3ccc1c: 0x26280010  addiu       $t0, $s1, 0x10
    ctx->pc = 0x3ccc1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3ccc20:
    // 0x3ccc20: 0xc1109e0  jal         func_442780
label_3ccc24:
    if (ctx->pc == 0x3CCC24u) {
        ctx->pc = 0x3CCC24u;
            // 0x3ccc24: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x3CCC28u;
        goto label_3ccc28;
    }
    ctx->pc = 0x3CCC20u;
    SET_GPR_U32(ctx, 31, 0x3CCC28u);
    ctx->pc = 0x3CCC24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3CCC20u;
            // 0x3ccc24: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x442780u;
    if (runtime->hasFunction(0x442780u)) {
        auto targetFn = runtime->lookupFunction(0x442780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CCC28u; }
        if (ctx->pc != 0x3CCC28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00442780_0x442780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3CCC28u; }
        if (ctx->pc != 0x3CCC28u) { return; }
    }
    ctx->pc = 0x3CCC28u;
label_3ccc28:
    // 0x3ccc28: 0xae8200e0  sw          $v0, 0xE0($s4)
    ctx->pc = 0x3ccc28u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 224), GPR_U32(ctx, 2));
label_3ccc2c:
    // 0x3ccc2c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x3ccc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3ccc30:
    // 0x3ccc30: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x3ccc30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_3ccc34:
    // 0x3ccc34: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x3ccc34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_3ccc38:
    // 0x3ccc38: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3ccc38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3ccc3c:
    // 0x3ccc3c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3ccc3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3ccc40:
    // 0x3ccc40: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3ccc40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ccc44:
    // 0x3ccc44: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3ccc44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ccc48:
    // 0x3ccc48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3ccc48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ccc4c:
    // 0x3ccc4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ccc4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ccc50:
    // 0x3ccc50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ccc50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ccc54:
    // 0x3ccc54: 0x3e00008  jr          $ra
label_3ccc58:
    if (ctx->pc == 0x3CCC58u) {
        ctx->pc = 0x3CCC58u;
            // 0x3ccc58: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3CCC5Cu;
        goto label_3ccc5c;
    }
    ctx->pc = 0x3CCC54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CCC58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3CCC54u;
            // 0x3ccc58: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3CCC5Cu;
label_3ccc5c:
    // 0x3ccc5c: 0x0  nop
    ctx->pc = 0x3ccc5cu;
    // NOP
}
