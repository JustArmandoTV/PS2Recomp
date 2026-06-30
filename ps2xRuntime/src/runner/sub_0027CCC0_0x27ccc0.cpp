#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027CCC0
// Address: 0x27ccc0 - 0x27d040
void sub_0027CCC0_0x27ccc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027CCC0_0x27ccc0");
#endif

    switch (ctx->pc) {
        case 0x27ccc0u: goto label_27ccc0;
        case 0x27ccc4u: goto label_27ccc4;
        case 0x27ccc8u: goto label_27ccc8;
        case 0x27ccccu: goto label_27cccc;
        case 0x27ccd0u: goto label_27ccd0;
        case 0x27ccd4u: goto label_27ccd4;
        case 0x27ccd8u: goto label_27ccd8;
        case 0x27ccdcu: goto label_27ccdc;
        case 0x27cce0u: goto label_27cce0;
        case 0x27cce4u: goto label_27cce4;
        case 0x27cce8u: goto label_27cce8;
        case 0x27ccecu: goto label_27ccec;
        case 0x27ccf0u: goto label_27ccf0;
        case 0x27ccf4u: goto label_27ccf4;
        case 0x27ccf8u: goto label_27ccf8;
        case 0x27ccfcu: goto label_27ccfc;
        case 0x27cd00u: goto label_27cd00;
        case 0x27cd04u: goto label_27cd04;
        case 0x27cd08u: goto label_27cd08;
        case 0x27cd0cu: goto label_27cd0c;
        case 0x27cd10u: goto label_27cd10;
        case 0x27cd14u: goto label_27cd14;
        case 0x27cd18u: goto label_27cd18;
        case 0x27cd1cu: goto label_27cd1c;
        case 0x27cd20u: goto label_27cd20;
        case 0x27cd24u: goto label_27cd24;
        case 0x27cd28u: goto label_27cd28;
        case 0x27cd2cu: goto label_27cd2c;
        case 0x27cd30u: goto label_27cd30;
        case 0x27cd34u: goto label_27cd34;
        case 0x27cd38u: goto label_27cd38;
        case 0x27cd3cu: goto label_27cd3c;
        case 0x27cd40u: goto label_27cd40;
        case 0x27cd44u: goto label_27cd44;
        case 0x27cd48u: goto label_27cd48;
        case 0x27cd4cu: goto label_27cd4c;
        case 0x27cd50u: goto label_27cd50;
        case 0x27cd54u: goto label_27cd54;
        case 0x27cd58u: goto label_27cd58;
        case 0x27cd5cu: goto label_27cd5c;
        case 0x27cd60u: goto label_27cd60;
        case 0x27cd64u: goto label_27cd64;
        case 0x27cd68u: goto label_27cd68;
        case 0x27cd6cu: goto label_27cd6c;
        case 0x27cd70u: goto label_27cd70;
        case 0x27cd74u: goto label_27cd74;
        case 0x27cd78u: goto label_27cd78;
        case 0x27cd7cu: goto label_27cd7c;
        case 0x27cd80u: goto label_27cd80;
        case 0x27cd84u: goto label_27cd84;
        case 0x27cd88u: goto label_27cd88;
        case 0x27cd8cu: goto label_27cd8c;
        case 0x27cd90u: goto label_27cd90;
        case 0x27cd94u: goto label_27cd94;
        case 0x27cd98u: goto label_27cd98;
        case 0x27cd9cu: goto label_27cd9c;
        case 0x27cda0u: goto label_27cda0;
        case 0x27cda4u: goto label_27cda4;
        case 0x27cda8u: goto label_27cda8;
        case 0x27cdacu: goto label_27cdac;
        case 0x27cdb0u: goto label_27cdb0;
        case 0x27cdb4u: goto label_27cdb4;
        case 0x27cdb8u: goto label_27cdb8;
        case 0x27cdbcu: goto label_27cdbc;
        case 0x27cdc0u: goto label_27cdc0;
        case 0x27cdc4u: goto label_27cdc4;
        case 0x27cdc8u: goto label_27cdc8;
        case 0x27cdccu: goto label_27cdcc;
        case 0x27cdd0u: goto label_27cdd0;
        case 0x27cdd4u: goto label_27cdd4;
        case 0x27cdd8u: goto label_27cdd8;
        case 0x27cddcu: goto label_27cddc;
        case 0x27cde0u: goto label_27cde0;
        case 0x27cde4u: goto label_27cde4;
        case 0x27cde8u: goto label_27cde8;
        case 0x27cdecu: goto label_27cdec;
        case 0x27cdf0u: goto label_27cdf0;
        case 0x27cdf4u: goto label_27cdf4;
        case 0x27cdf8u: goto label_27cdf8;
        case 0x27cdfcu: goto label_27cdfc;
        case 0x27ce00u: goto label_27ce00;
        case 0x27ce04u: goto label_27ce04;
        case 0x27ce08u: goto label_27ce08;
        case 0x27ce0cu: goto label_27ce0c;
        case 0x27ce10u: goto label_27ce10;
        case 0x27ce14u: goto label_27ce14;
        case 0x27ce18u: goto label_27ce18;
        case 0x27ce1cu: goto label_27ce1c;
        case 0x27ce20u: goto label_27ce20;
        case 0x27ce24u: goto label_27ce24;
        case 0x27ce28u: goto label_27ce28;
        case 0x27ce2cu: goto label_27ce2c;
        case 0x27ce30u: goto label_27ce30;
        case 0x27ce34u: goto label_27ce34;
        case 0x27ce38u: goto label_27ce38;
        case 0x27ce3cu: goto label_27ce3c;
        case 0x27ce40u: goto label_27ce40;
        case 0x27ce44u: goto label_27ce44;
        case 0x27ce48u: goto label_27ce48;
        case 0x27ce4cu: goto label_27ce4c;
        case 0x27ce50u: goto label_27ce50;
        case 0x27ce54u: goto label_27ce54;
        case 0x27ce58u: goto label_27ce58;
        case 0x27ce5cu: goto label_27ce5c;
        case 0x27ce60u: goto label_27ce60;
        case 0x27ce64u: goto label_27ce64;
        case 0x27ce68u: goto label_27ce68;
        case 0x27ce6cu: goto label_27ce6c;
        case 0x27ce70u: goto label_27ce70;
        case 0x27ce74u: goto label_27ce74;
        case 0x27ce78u: goto label_27ce78;
        case 0x27ce7cu: goto label_27ce7c;
        case 0x27ce80u: goto label_27ce80;
        case 0x27ce84u: goto label_27ce84;
        case 0x27ce88u: goto label_27ce88;
        case 0x27ce8cu: goto label_27ce8c;
        case 0x27ce90u: goto label_27ce90;
        case 0x27ce94u: goto label_27ce94;
        case 0x27ce98u: goto label_27ce98;
        case 0x27ce9cu: goto label_27ce9c;
        case 0x27cea0u: goto label_27cea0;
        case 0x27cea4u: goto label_27cea4;
        case 0x27cea8u: goto label_27cea8;
        case 0x27ceacu: goto label_27ceac;
        case 0x27ceb0u: goto label_27ceb0;
        case 0x27ceb4u: goto label_27ceb4;
        case 0x27ceb8u: goto label_27ceb8;
        case 0x27cebcu: goto label_27cebc;
        case 0x27cec0u: goto label_27cec0;
        case 0x27cec4u: goto label_27cec4;
        case 0x27cec8u: goto label_27cec8;
        case 0x27ceccu: goto label_27cecc;
        case 0x27ced0u: goto label_27ced0;
        case 0x27ced4u: goto label_27ced4;
        case 0x27ced8u: goto label_27ced8;
        case 0x27cedcu: goto label_27cedc;
        case 0x27cee0u: goto label_27cee0;
        case 0x27cee4u: goto label_27cee4;
        case 0x27cee8u: goto label_27cee8;
        case 0x27ceecu: goto label_27ceec;
        case 0x27cef0u: goto label_27cef0;
        case 0x27cef4u: goto label_27cef4;
        case 0x27cef8u: goto label_27cef8;
        case 0x27cefcu: goto label_27cefc;
        case 0x27cf00u: goto label_27cf00;
        case 0x27cf04u: goto label_27cf04;
        case 0x27cf08u: goto label_27cf08;
        case 0x27cf0cu: goto label_27cf0c;
        case 0x27cf10u: goto label_27cf10;
        case 0x27cf14u: goto label_27cf14;
        case 0x27cf18u: goto label_27cf18;
        case 0x27cf1cu: goto label_27cf1c;
        case 0x27cf20u: goto label_27cf20;
        case 0x27cf24u: goto label_27cf24;
        case 0x27cf28u: goto label_27cf28;
        case 0x27cf2cu: goto label_27cf2c;
        case 0x27cf30u: goto label_27cf30;
        case 0x27cf34u: goto label_27cf34;
        case 0x27cf38u: goto label_27cf38;
        case 0x27cf3cu: goto label_27cf3c;
        case 0x27cf40u: goto label_27cf40;
        case 0x27cf44u: goto label_27cf44;
        case 0x27cf48u: goto label_27cf48;
        case 0x27cf4cu: goto label_27cf4c;
        case 0x27cf50u: goto label_27cf50;
        case 0x27cf54u: goto label_27cf54;
        case 0x27cf58u: goto label_27cf58;
        case 0x27cf5cu: goto label_27cf5c;
        case 0x27cf60u: goto label_27cf60;
        case 0x27cf64u: goto label_27cf64;
        case 0x27cf68u: goto label_27cf68;
        case 0x27cf6cu: goto label_27cf6c;
        case 0x27cf70u: goto label_27cf70;
        case 0x27cf74u: goto label_27cf74;
        case 0x27cf78u: goto label_27cf78;
        case 0x27cf7cu: goto label_27cf7c;
        case 0x27cf80u: goto label_27cf80;
        case 0x27cf84u: goto label_27cf84;
        case 0x27cf88u: goto label_27cf88;
        case 0x27cf8cu: goto label_27cf8c;
        case 0x27cf90u: goto label_27cf90;
        case 0x27cf94u: goto label_27cf94;
        case 0x27cf98u: goto label_27cf98;
        case 0x27cf9cu: goto label_27cf9c;
        case 0x27cfa0u: goto label_27cfa0;
        case 0x27cfa4u: goto label_27cfa4;
        case 0x27cfa8u: goto label_27cfa8;
        case 0x27cfacu: goto label_27cfac;
        case 0x27cfb0u: goto label_27cfb0;
        case 0x27cfb4u: goto label_27cfb4;
        case 0x27cfb8u: goto label_27cfb8;
        case 0x27cfbcu: goto label_27cfbc;
        case 0x27cfc0u: goto label_27cfc0;
        case 0x27cfc4u: goto label_27cfc4;
        case 0x27cfc8u: goto label_27cfc8;
        case 0x27cfccu: goto label_27cfcc;
        case 0x27cfd0u: goto label_27cfd0;
        case 0x27cfd4u: goto label_27cfd4;
        case 0x27cfd8u: goto label_27cfd8;
        case 0x27cfdcu: goto label_27cfdc;
        case 0x27cfe0u: goto label_27cfe0;
        case 0x27cfe4u: goto label_27cfe4;
        case 0x27cfe8u: goto label_27cfe8;
        case 0x27cfecu: goto label_27cfec;
        case 0x27cff0u: goto label_27cff0;
        case 0x27cff4u: goto label_27cff4;
        case 0x27cff8u: goto label_27cff8;
        case 0x27cffcu: goto label_27cffc;
        case 0x27d000u: goto label_27d000;
        case 0x27d004u: goto label_27d004;
        case 0x27d008u: goto label_27d008;
        case 0x27d00cu: goto label_27d00c;
        case 0x27d010u: goto label_27d010;
        case 0x27d014u: goto label_27d014;
        case 0x27d018u: goto label_27d018;
        case 0x27d01cu: goto label_27d01c;
        case 0x27d020u: goto label_27d020;
        case 0x27d024u: goto label_27d024;
        case 0x27d028u: goto label_27d028;
        case 0x27d02cu: goto label_27d02c;
        case 0x27d030u: goto label_27d030;
        case 0x27d034u: goto label_27d034;
        case 0x27d038u: goto label_27d038;
        case 0x27d03cu: goto label_27d03c;
        default: break;
    }

    ctx->pc = 0x27ccc0u;

label_27ccc0:
    // 0x27ccc0: 0x27bdcef0  addiu       $sp, $sp, -0x3110
    ctx->pc = 0x27ccc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294954736));
label_27ccc4:
    // 0x27ccc4: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x27ccc4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_27ccc8:
    // 0x27ccc8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x27ccc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_27cccc:
    // 0x27cccc: 0x24e7ea60  addiu       $a3, $a3, -0x15A0
    ctx->pc = 0x27ccccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961760));
label_27ccd0:
    // 0x27ccd0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x27ccd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_27ccd4:
    // 0x27ccd4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x27ccd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_27ccd8:
    // 0x27ccd8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x27ccd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_27ccdc:
    // 0x27ccdc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x27ccdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_27cce0:
    // 0x27cce0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x27cce0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27cce4:
    // 0x27cce4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27cce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_27cce8:
    // 0x27cce8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x27cce8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_27ccec:
    // 0x27ccec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27ccecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_27ccf0:
    // 0x27ccf0: 0x27a4310c  addiu       $a0, $sp, 0x310C
    ctx->pc = 0x27ccf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 12556));
label_27ccf4:
    // 0x27ccf4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27ccf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_27ccf8:
    // 0x27ccf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27ccf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_27ccfc:
    // 0x27ccfc: 0x8ce6000c  lw          $a2, 0xC($a3)
    ctx->pc = 0x27ccfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_27cd00:
    // 0x27cd00: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x27cd00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_27cd04:
    // 0x27cd04: 0x66182b  sltu        $v1, $v1, $a2
    ctx->pc = 0x27cd04u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_27cd08:
    // 0x27cd08: 0xa3a3310c  sb          $v1, 0x310C($sp)
    ctx->pc = 0x27cd08u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 12556), (uint8_t)GPR_U32(ctx, 3));
label_27cd0c:
    // 0x27cd0c: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x27cd0cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_27cd10:
    // 0x27cd10: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_27cd14:
    if (ctx->pc == 0x27CD14u) {
        ctx->pc = 0x27CD18u;
        goto label_27cd18;
    }
    ctx->pc = 0x27CD10u;
    {
        const bool branch_taken_0x27cd10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cd10) {
            ctx->pc = 0x27CD40u;
            goto label_27cd40;
        }
    }
    ctx->pc = 0x27CD18u;
label_27cd18:
    // 0x27cd18: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x27cd18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_27cd1c:
    // 0x27cd1c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x27cd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_27cd20:
    // 0x27cd20: 0x2463d558  addiu       $v1, $v1, -0x2AA8
    ctx->pc = 0x27cd20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956376));
label_27cd24:
    // 0x27cd24: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x27cd24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_27cd28:
    // 0x27cd28: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27cd28u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_27cd2c:
    // 0x27cd2c: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x27cd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_27cd30:
    // 0x27cd30: 0x4004c803  .word       0x4004C803                   # mfc0        $a0, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27cd30u;
    SET_GPR_S32(ctx, 4, (int32_t)ctx->cop0_perf);
label_27cd34:
    // 0x27cd34: 0x24c3000c  addiu       $v1, $a2, 0xC
    ctx->pc = 0x27cd34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
label_27cd38:
    // 0x27cd38: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x27cd38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
label_27cd3c:
    // 0x27cd3c: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x27cd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
label_27cd40:
    // 0x27cd40: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x27cd40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_27cd44:
    // 0x27cd44: 0x27a330a0  addiu       $v1, $sp, 0x30A0
    ctx->pc = 0x27cd44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 12448));
label_27cd48:
    // 0x27cd48: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x27cd48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_27cd4c:
    // 0x27cd4c: 0x0  nop
    ctx->pc = 0x27cd4cu;
    // NOP
label_27cd50:
    // 0x27cd50: 0x0  nop
    ctx->pc = 0x27cd50u;
    // NOP
label_27cd54:
    // 0x27cd54: 0x0  nop
    ctx->pc = 0x27cd54u;
    // NOP
label_27cd58:
    // 0x27cd58: 0x0  nop
    ctx->pc = 0x27cd58u;
    // NOP
label_27cd5c:
    // 0x27cd5c: 0x1483fffa  bne         $a0, $v1, . + 4 + (-0x6 << 2)
label_27cd60:
    if (ctx->pc == 0x27CD60u) {
        ctx->pc = 0x27CD64u;
        goto label_27cd64;
    }
    ctx->pc = 0x27CD5Cu;
    {
        const bool branch_taken_0x27cd5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x27cd5c) {
            ctx->pc = 0x27CD48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27cd48;
        }
    }
    ctx->pc = 0x27CD64u;
label_27cd64:
    // 0x27cd64: 0x3c037f7f  lui         $v1, 0x7F7F
    ctx->pc = 0x27cd64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32639 << 16));
label_27cd68:
    // 0x27cd68: 0xafa50094  sw          $a1, 0x94($sp)
    ctx->pc = 0x27cd68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 5));
label_27cd6c:
    // 0x27cd6c: 0x3463ffee  ori         $v1, $v1, 0xFFEE
    ctx->pc = 0x27cd6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65518);
label_27cd70:
    // 0x27cd70: 0x24b3005c  addiu       $s3, $a1, 0x5C
    ctx->pc = 0x27cd70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 92));
label_27cd74:
    // 0x27cd74: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x27cd74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27cd78:
    // 0x27cd78: 0x1000008d  b           . + 4 + (0x8D << 2)
label_27cd7c:
    if (ctx->pc == 0x27CD7Cu) {
        ctx->pc = 0x27CD7Cu;
            // 0x27cd7c: 0xafa330c0  sw          $v1, 0x30C0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12480), GPR_U32(ctx, 3));
        ctx->pc = 0x27CD80u;
        goto label_27cd80;
    }
    ctx->pc = 0x27CD78u;
    {
        const bool branch_taken_0x27cd78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CD7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CD78u;
            // 0x27cd7c: 0xafa330c0  sw          $v1, 0x30C0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12480), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cd78) {
            ctx->pc = 0x27CFB0u;
            goto label_27cfb0;
        }
    }
    ctx->pc = 0x27CD80u;
label_27cd80:
    // 0x27cd80: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x27cd80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_27cd84:
    // 0x27cd84: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x27cd84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_27cd88:
    // 0x27cd88: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x27cd88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_27cd8c:
    // 0x27cd8c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x27cd8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_27cd90:
    // 0x27cd90: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x27cd90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_27cd94:
    // 0x27cd94: 0x16450004  bne         $s2, $a1, . + 4 + (0x4 << 2)
label_27cd98:
    if (ctx->pc == 0x27CD98u) {
        ctx->pc = 0x27CD98u;
            // 0x27cd98: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x27CD9Cu;
        goto label_27cd9c;
    }
    ctx->pc = 0x27CD94u;
    {
        const bool branch_taken_0x27cd94 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 5));
        ctx->pc = 0x27CD98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CD94u;
            // 0x27cd98: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cd94) {
            ctx->pc = 0x27CDA8u;
            goto label_27cda8;
        }
    }
    ctx->pc = 0x27CD9Cu;
label_27cd9c:
    // 0x27cd9c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x27cd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_27cda0:
    // 0x27cda0: 0x10000003  b           . + 4 + (0x3 << 2)
label_27cda4:
    if (ctx->pc == 0x27CDA4u) {
        ctx->pc = 0x27CDA4u;
            // 0x27cda4: 0x2238021  addu        $s0, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->pc = 0x27CDA8u;
        goto label_27cda8;
    }
    ctx->pc = 0x27CDA0u;
    {
        const bool branch_taken_0x27cda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CDA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CDA0u;
            // 0x27cda4: 0x2238021  addu        $s0, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cda0) {
            ctx->pc = 0x27CDB0u;
            goto label_27cdb0;
        }
    }
    ctx->pc = 0x27CDA8u;
label_27cda8:
    // 0x27cda8: 0x26300200  addiu       $s0, $s1, 0x200
    ctx->pc = 0x27cda8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
label_27cdac:
    // 0x27cdac: 0x0  nop
    ctx->pc = 0x27cdacu;
    // NOP
label_27cdb0:
    // 0x27cdb0: 0x1000007b  b           . + 4 + (0x7B << 2)
label_27cdb4:
    if (ctx->pc == 0x27CDB4u) {
        ctx->pc = 0x27CDB8u;
        goto label_27cdb8;
    }
    ctx->pc = 0x27CDB0u;
    {
        const bool branch_taken_0x27cdb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cdb0) {
            ctx->pc = 0x27CFA0u;
            goto label_27cfa0;
        }
    }
    ctx->pc = 0x27CDB8u;
label_27cdb8:
    // 0x27cdb8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x27cdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_27cdbc:
    // 0x27cdbc: 0x8e360014  lw          $s6, 0x14($s1)
    ctx->pc = 0x27cdbcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_27cdc0:
    // 0x27cdc0: 0x8e370018  lw          $s7, 0x18($s1)
    ctx->pc = 0x27cdc0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_27cdc4:
    // 0x27cdc4: 0xcc400000  pref        0x00, 0x0($v0)
    ctx->pc = 0x27cdc4u;
    // PREF instruction (ignored)
label_27cdc8:
    // 0x27cdc8: 0x26220080  addiu       $v0, $s1, 0x80
    ctx->pc = 0x27cdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_27cdcc:
    // 0x27cdcc: 0xcc400000  pref        0x00, 0x0($v0)
    ctx->pc = 0x27cdccu;
    // PREF instruction (ignored)
label_27cdd0:
    // 0x27cdd0: 0x27a730f8  addiu       $a3, $sp, 0x30F8
    ctx->pc = 0x27cdd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 12536));
label_27cdd4:
    // 0x27cdd4: 0x92280010  lbu         $t0, 0x10($s1)
    ctx->pc = 0x27cdd4u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
label_27cdd8:
    // 0x27cdd8: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x27cdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
label_27cddc:
    // 0x27cddc: 0x3442ffee  ori         $v0, $v0, 0xFFEE
    ctx->pc = 0x27cddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
label_27cde0:
    // 0x27cde0: 0x8e890000  lw          $t1, 0x0($s4)
    ctx->pc = 0x27cde0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_27cde4:
    // 0x27cde4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27cde4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27cde8:
    // 0x27cde8: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x27cde8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_27cdec:
    // 0x27cdec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27cdecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27cdf0:
    // 0x27cdf0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x27cdf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27cdf4:
    // 0x27cdf4: 0x8163c  dsll32      $v0, $t0, 24
    ctx->pc = 0x27cdf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 24));
label_27cdf8:
    // 0x27cdf8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x27cdf8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_27cdfc:
    // 0x27cdfc: 0x2463c  dsll32      $t0, $v0, 24
    ctx->pc = 0x27cdfcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 24));
label_27ce00:
    // 0x27ce00: 0x8463f  dsra32      $t0, $t0, 24
    ctx->pc = 0x27ce00u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 24));
label_27ce04:
    // 0x27ce04: 0x81100  sll         $v0, $t0, 4
    ctx->pc = 0x27ce04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_27ce08:
    // 0x27ce08: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x27ce08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_27ce0c:
    // 0x27ce0c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x27ce0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_27ce10:
    // 0x27ce10: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x27ce10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_27ce14:
    // 0x27ce14: 0x24421a50  addiu       $v0, $v0, 0x1A50
    ctx->pc = 0x27ce14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6736));
label_27ce18:
    // 0x27ce18: 0xae820030  sw          $v0, 0x30($s4)
    ctx->pc = 0x27ce18u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 48), GPR_U32(ctx, 2));
label_27ce1c:
    // 0x27ce1c: 0x8e820030  lw          $v0, 0x30($s4)
    ctx->pc = 0x27ce1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_27ce20:
    // 0x27ce20: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x27ce20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_27ce24:
    // 0x27ce24: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x27ce24u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_27ce28:
    // 0x27ce28: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x27ce28u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
label_27ce2c:
    // 0x27ce2c: 0x83a230f8  lb          $v0, 0x30F8($sp)
    ctx->pc = 0x27ce2cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 12536)));
label_27ce30:
    // 0x27ce30: 0xa2820010  sb          $v0, 0x10($s4)
    ctx->pc = 0x27ce30u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 16), (uint8_t)GPR_U32(ctx, 2));
label_27ce34:
    // 0x27ce34: 0xafa30090  sw          $v1, 0x90($sp)
    ctx->pc = 0x27ce34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
label_27ce38:
    // 0x27ce38: 0xe7a030c0  swc1        $f0, 0x30C0($sp)
    ctx->pc = 0x27ce38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12480), bits); }
label_27ce3c:
    // 0x27ce3c: 0xafa030e0  sw          $zero, 0x30E0($sp)
    ctx->pc = 0x27ce3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12512), GPR_U32(ctx, 0));
label_27ce40:
    // 0x27ce40: 0x8e27000c  lw          $a3, 0xC($s1)
    ctx->pc = 0x27ce40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_27ce44:
    // 0x27ce44: 0xc092544  jal         func_249510
label_27ce48:
    if (ctx->pc == 0x27CE48u) {
        ctx->pc = 0x27CE48u;
            // 0x27ce48: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x27CE4Cu;
        goto label_27ce4c;
    }
    ctx->pc = 0x27CE44u;
    SET_GPR_U32(ctx, 31, 0x27CE4Cu);
    ctx->pc = 0x27CE48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CE44u;
            // 0x27ce48: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x249510u;
    if (runtime->hasFunction(0x249510u)) {
        auto targetFn = runtime->lookupFunction(0x249510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CE4Cu; }
        if (ctx->pc != 0x27CE4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00249510_0x249510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CE4Cu; }
        if (ctx->pc != 0x27CE4Cu) { return; }
    }
    ctx->pc = 0x27CE4Cu;
label_27ce4c:
    // 0x27ce4c: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x27ce4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_27ce50:
    // 0x27ce50: 0x8c23ea20  lw          $v1, -0x15E0($at)
    ctx->pc = 0x27ce50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961696)));
label_27ce54:
    // 0x27ce54: 0x8c650028  lw          $a1, 0x28($v1)
    ctx->pc = 0x27ce54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_27ce58:
    // 0x27ce58: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x27ce58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_27ce5c:
    // 0x27ce5c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x27ce5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_27ce60:
    // 0x27ce60: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x27ce60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_27ce64:
    // 0x27ce64: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x27ce64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_27ce68:
    // 0x27ce68: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_27ce6c:
    if (ctx->pc == 0x27CE6Cu) {
        ctx->pc = 0x27CE70u;
        goto label_27ce70;
    }
    ctx->pc = 0x27CE68u;
    {
        const bool branch_taken_0x27ce68 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x27ce68) {
            ctx->pc = 0x27CE78u;
            goto label_27ce78;
        }
    }
    ctx->pc = 0x27CE70u;
label_27ce70:
    // 0x27ce70: 0x10000003  b           . + 4 + (0x3 << 2)
label_27ce74:
    if (ctx->pc == 0x27CE74u) {
        ctx->pc = 0x27CE74u;
            // 0x27ce74: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27CE78u;
        goto label_27ce78;
    }
    ctx->pc = 0x27CE70u;
    {
        const bool branch_taken_0x27ce70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CE74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CE70u;
            // 0x27ce74: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ce70) {
            ctx->pc = 0x27CE80u;
            goto label_27ce80;
        }
    }
    ctx->pc = 0x27CE78u;
label_27ce78:
    // 0x27ce78: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x27ce78u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_27ce7c:
    // 0x27ce7c: 0x0  nop
    ctx->pc = 0x27ce7cu;
    // NOP
label_27ce80:
    // 0x27ce80: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_27ce84:
    if (ctx->pc == 0x27CE84u) {
        ctx->pc = 0x27CE84u;
            // 0x27ce84: 0x3c01006f  lui         $at, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
        ctx->pc = 0x27CE88u;
        goto label_27ce88;
    }
    ctx->pc = 0x27CE80u;
    {
        const bool branch_taken_0x27ce80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27CE84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CE80u;
            // 0x27ce84: 0x3c01006f  lui         $at, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ce80) {
            ctx->pc = 0x27CE98u;
            goto label_27ce98;
        }
    }
    ctx->pc = 0x27CE88u;
label_27ce88:
    // 0x27ce88: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27ce88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27ce8c:
    // 0x27ce8c: 0x8c24ea20  lw          $a0, -0x15E0($at)
    ctx->pc = 0x27ce8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961696)));
label_27ce90:
    // 0x27ce90: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x27ce90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_27ce94:
    // 0x27ce94: 0x0  nop
    ctx->pc = 0x27ce94u;
    // NOP
label_27ce98:
    // 0x27ce98: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x27ce98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_27ce9c:
    // 0x27ce9c: 0x8c24ea20  lw          $a0, -0x15E0($at)
    ctx->pc = 0x27ce9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961696)));
label_27cea0:
    // 0x27cea0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27cea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27cea4:
    // 0x27cea4: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x27cea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_27cea8:
    // 0x27cea8: 0x14830017  bne         $a0, $v1, . + 4 + (0x17 << 2)
label_27ceac:
    if (ctx->pc == 0x27CEACu) {
        ctx->pc = 0x27CEACu;
            // 0x27ceac: 0x3c06006f  lui         $a2, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
        ctx->pc = 0x27CEB0u;
        goto label_27ceb0;
    }
    ctx->pc = 0x27CEA8u;
    {
        const bool branch_taken_0x27cea8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x27CEACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CEA8u;
            // 0x27ceac: 0x3c06006f  lui         $a2, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cea8) {
            ctx->pc = 0x27CF08u;
            goto label_27cf08;
        }
    }
    ctx->pc = 0x27CEB0u;
label_27ceb0:
    // 0x27ceb0: 0x27a43108  addiu       $a0, $sp, 0x3108
    ctx->pc = 0x27ceb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 12552));
label_27ceb4:
    // 0x27ceb4: 0x24c6ea60  addiu       $a2, $a2, -0x15A0
    ctx->pc = 0x27ceb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
label_27ceb8:
    // 0x27ceb8: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x27ceb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_27cebc:
    // 0x27cebc: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x27cebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_27cec0:
    // 0x27cec0: 0x65182b  sltu        $v1, $v1, $a1
    ctx->pc = 0x27cec0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_27cec4:
    // 0x27cec4: 0xa3a33108  sb          $v1, 0x3108($sp)
    ctx->pc = 0x27cec4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 12552), (uint8_t)GPR_U32(ctx, 3));
label_27cec8:
    // 0x27cec8: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x27cec8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_27cecc:
    // 0x27cecc: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_27ced0:
    if (ctx->pc == 0x27CED0u) {
        ctx->pc = 0x27CED4u;
        goto label_27ced4;
    }
    ctx->pc = 0x27CECCu;
    {
        const bool branch_taken_0x27cecc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cecc) {
            ctx->pc = 0x27CF00u;
            goto label_27cf00;
        }
    }
    ctx->pc = 0x27CED4u;
label_27ced4:
    // 0x27ced4: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x27ced4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_27ced8:
    // 0x27ced8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x27ced8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_27cedc:
    // 0x27cedc: 0x2463d4a8  addiu       $v1, $v1, -0x2B58
    ctx->pc = 0x27cedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956200));
label_27cee0:
    // 0x27cee0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x27cee0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_27cee4:
    // 0x27cee4: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27cee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_27cee8:
    // 0x27cee8: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x27cee8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_27ceec:
    // 0x27ceec: 0x4004c803  .word       0x4004C803                   # mfc0        $a0, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27ceecu;
    SET_GPR_S32(ctx, 4, (int32_t)ctx->cop0_perf);
label_27cef0:
    // 0x27cef0: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x27cef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_27cef4:
    // 0x27cef4: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x27cef4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
label_27cef8:
    // 0x27cef8: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x27cef8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_27cefc:
    // 0x27cefc: 0x0  nop
    ctx->pc = 0x27cefcu;
    // NOP
label_27cf00:
    // 0x27cf00: 0x10000043  b           . + 4 + (0x43 << 2)
label_27cf04:
    if (ctx->pc == 0x27CF04u) {
        ctx->pc = 0x27CF08u;
        goto label_27cf08;
    }
    ctx->pc = 0x27CF00u;
    {
        const bool branch_taken_0x27cf00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cf00) {
            ctx->pc = 0x27D010u;
            goto label_27d010;
        }
    }
    ctx->pc = 0x27CF08u;
label_27cf08:
    // 0x27cf08: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x27cf08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_27cf0c:
    // 0x27cf0c: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x27cf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_27cf10:
    // 0x27cf10: 0x27a43104  addiu       $a0, $sp, 0x3104
    ctx->pc = 0x27cf10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 12548));
label_27cf14:
    // 0x27cf14: 0xa31826  xor         $v1, $a1, $v1
    ctx->pc = 0x27cf14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
label_27cf18:
    // 0x27cf18: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x27cf18u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_27cf1c:
    // 0x27cf1c: 0xa3a33104  sb          $v1, 0x3104($sp)
    ctx->pc = 0x27cf1cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 12548), (uint8_t)GPR_U32(ctx, 3));
label_27cf20:
    // 0x27cf20: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x27cf20u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_27cf24:
    // 0x27cf24: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_27cf28:
    if (ctx->pc == 0x27CF28u) {
        ctx->pc = 0x27CF2Cu;
        goto label_27cf2c;
    }
    ctx->pc = 0x27CF24u;
    {
        const bool branch_taken_0x27cf24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27cf24) {
            ctx->pc = 0x27CF50u;
            goto label_27cf50;
        }
    }
    ctx->pc = 0x27CF2Cu;
label_27cf2c:
    // 0x27cf2c: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x27cf2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_27cf30:
    // 0x27cf30: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x27cf30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_27cf34:
    // 0x27cf34: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x27cf34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_27cf38:
    // 0x27cf38: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x27cf38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27cf3c:
    // 0x27cf3c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27cf3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27cf40:
    // 0x27cf40: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x27cf40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_27cf44:
    // 0x27cf44: 0x320f809  jalr        $t9
label_27cf48:
    if (ctx->pc == 0x27CF48u) {
        ctx->pc = 0x27CF48u;
            // 0x27cf48: 0x27a80090  addiu       $t0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x27CF4Cu;
        goto label_27cf4c;
    }
    ctx->pc = 0x27CF44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27CF4Cu);
        ctx->pc = 0x27CF48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CF44u;
            // 0x27cf48: 0x27a80090  addiu       $t0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x27CF4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27CF4Cu; }
            if (ctx->pc != 0x27CF4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x27CF4Cu;
label_27cf4c:
    // 0x27cf4c: 0x0  nop
    ctx->pc = 0x27cf4cu;
    // NOP
label_27cf50:
    // 0x27cf50: 0x3c037f7f  lui         $v1, 0x7F7F
    ctx->pc = 0x27cf50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32639 << 16));
label_27cf54:
    // 0x27cf54: 0xc7a130c0  lwc1        $f1, 0x30C0($sp)
    ctx->pc = 0x27cf54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27cf58:
    // 0x27cf58: 0x3463ffee  ori         $v1, $v1, 0xFFEE
    ctx->pc = 0x27cf58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65518);
label_27cf5c:
    // 0x27cf5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27cf5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27cf60:
    // 0x27cf60: 0x0  nop
    ctx->pc = 0x27cf60u;
    // NOP
label_27cf64:
    // 0x27cf64: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x27cf64u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27cf68:
    // 0x27cf68: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_27cf6c:
    if (ctx->pc == 0x27CF6Cu) {
        ctx->pc = 0x27CF6Cu;
            // 0x27cf6c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x27CF70u;
        goto label_27cf70;
    }
    ctx->pc = 0x27CF68u;
    {
        const bool branch_taken_0x27cf68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27CF6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CF68u;
            // 0x27cf6c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cf68) {
            ctx->pc = 0x27CF74u;
            goto label_27cf74;
        }
    }
    ctx->pc = 0x27CF70u;
label_27cf70:
    // 0x27cf70: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27cf70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27cf74:
    // 0x27cf74: 0xa3a43100  sb          $a0, 0x3100($sp)
    ctx->pc = 0x27cf74u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 12544), (uint8_t)GPR_U32(ctx, 4));
label_27cf78:
    // 0x27cf78: 0x27a33100  addiu       $v1, $sp, 0x3100
    ctx->pc = 0x27cf78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 12544));
label_27cf7c:
    // 0x27cf7c: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x27cf7cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_27cf80:
    // 0x27cf80: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_27cf84:
    if (ctx->pc == 0x27CF84u) {
        ctx->pc = 0x27CF88u;
        goto label_27cf88;
    }
    ctx->pc = 0x27CF80u;
    {
        const bool branch_taken_0x27cf80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cf80) {
            ctx->pc = 0x27CF98u;
            goto label_27cf98;
        }
    }
    ctx->pc = 0x27CF88u;
label_27cf88:
    // 0x27cf88: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x27cf88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_27cf8c:
    // 0x27cf8c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x27cf8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_27cf90:
    // 0x27cf90: 0xc09f480  jal         func_27D200
label_27cf94:
    if (ctx->pc == 0x27CF94u) {
        ctx->pc = 0x27CF94u;
            // 0x27cf94: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27CF98u;
        goto label_27cf98;
    }
    ctx->pc = 0x27CF90u;
    SET_GPR_U32(ctx, 31, 0x27CF98u);
    ctx->pc = 0x27CF94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27CF90u;
            // 0x27cf94: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27D200u;
    if (runtime->hasFunction(0x27D200u)) {
        auto targetFn = runtime->lookupFunction(0x27D200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CF98u; }
        if (ctx->pc != 0x27CF98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027D200_0x27d200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27CF98u; }
        if (ctx->pc != 0x27CF98u) { return; }
    }
    ctx->pc = 0x27CF98u;
label_27cf98:
    // 0x27cf98: 0x92230003  lbu         $v1, 0x3($s1)
    ctx->pc = 0x27cf98u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_27cf9c:
    // 0x27cf9c: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x27cf9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_27cfa0:
    // 0x27cfa0: 0x230182b  sltu        $v1, $s1, $s0
    ctx->pc = 0x27cfa0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_27cfa4:
    // 0x27cfa4: 0x1460ff84  bnez        $v1, . + 4 + (-0x7C << 2)
label_27cfa8:
    if (ctx->pc == 0x27CFA8u) {
        ctx->pc = 0x27CFACu;
        goto label_27cfac;
    }
    ctx->pc = 0x27CFA4u;
    {
        const bool branch_taken_0x27cfa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27cfa4) {
            ctx->pc = 0x27CDB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27cdb8;
        }
    }
    ctx->pc = 0x27CFACu;
label_27cfac:
    // 0x27cfac: 0x0  nop
    ctx->pc = 0x27cfacu;
    // NOP
label_27cfb0:
    // 0x27cfb0: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x27cfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_27cfb4:
    // 0x27cfb4: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x27cfb4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_27cfb8:
    // 0x27cfb8: 0x1460ff71  bnez        $v1, . + 4 + (-0x8F << 2)
label_27cfbc:
    if (ctx->pc == 0x27CFBCu) {
        ctx->pc = 0x27CFBCu;
            // 0x27cfbc: 0x3c06006f  lui         $a2, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
        ctx->pc = 0x27CFC0u;
        goto label_27cfc0;
    }
    ctx->pc = 0x27CFB8u;
    {
        const bool branch_taken_0x27cfb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27CFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27CFB8u;
            // 0x27cfbc: 0x3c06006f  lui         $a2, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cfb8) {
            ctx->pc = 0x27CD80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27cd80;
        }
    }
    ctx->pc = 0x27CFC0u;
label_27cfc0:
    // 0x27cfc0: 0x27a430fc  addiu       $a0, $sp, 0x30FC
    ctx->pc = 0x27cfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 12540));
label_27cfc4:
    // 0x27cfc4: 0x24c6ea60  addiu       $a2, $a2, -0x15A0
    ctx->pc = 0x27cfc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
label_27cfc8:
    // 0x27cfc8: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x27cfc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_27cfcc:
    // 0x27cfcc: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x27cfccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_27cfd0:
    // 0x27cfd0: 0x65182b  sltu        $v1, $v1, $a1
    ctx->pc = 0x27cfd0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_27cfd4:
    // 0x27cfd4: 0xa3a330fc  sb          $v1, 0x30FC($sp)
    ctx->pc = 0x27cfd4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 12540), (uint8_t)GPR_U32(ctx, 3));
label_27cfd8:
    // 0x27cfd8: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x27cfd8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_27cfdc:
    // 0x27cfdc: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_27cfe0:
    if (ctx->pc == 0x27CFE0u) {
        ctx->pc = 0x27CFE4u;
        goto label_27cfe4;
    }
    ctx->pc = 0x27CFDCu;
    {
        const bool branch_taken_0x27cfdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cfdc) {
            ctx->pc = 0x27D010u;
            goto label_27d010;
        }
    }
    ctx->pc = 0x27CFE4u;
label_27cfe4:
    // 0x27cfe4: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x27cfe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_27cfe8:
    // 0x27cfe8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x27cfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_27cfec:
    // 0x27cfec: 0x2463d4a8  addiu       $v1, $v1, -0x2B58
    ctx->pc = 0x27cfecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956200));
label_27cff0:
    // 0x27cff0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x27cff0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_27cff4:
    // 0x27cff4: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27cff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_27cff8:
    // 0x27cff8: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x27cff8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_27cffc:
    // 0x27cffc: 0x4004c803  .word       0x4004C803                   # mfc0        $a0, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x27cffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ctx->cop0_perf);
label_27d000:
    // 0x27d000: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x27d000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_27d004:
    // 0x27d004: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x27d004u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
label_27d008:
    // 0x27d008: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x27d008u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_27d00c:
    // 0x27d00c: 0x0  nop
    ctx->pc = 0x27d00cu;
    // NOP
label_27d010:
    // 0x27d010: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x27d010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_27d014:
    // 0x27d014: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x27d014u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_27d018:
    // 0x27d018: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x27d018u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_27d01c:
    // 0x27d01c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x27d01cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_27d020:
    // 0x27d020: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x27d020u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_27d024:
    // 0x27d024: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27d024u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_27d028:
    // 0x27d028: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27d028u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27d02c:
    // 0x27d02c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27d02cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27d030:
    // 0x27d030: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27d030u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_27d034:
    // 0x27d034: 0x3e00008  jr          $ra
label_27d038:
    if (ctx->pc == 0x27D038u) {
        ctx->pc = 0x27D038u;
            // 0x27d038: 0x27bd3110  addiu       $sp, $sp, 0x3110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 12560));
        ctx->pc = 0x27D03Cu;
        goto label_27d03c;
    }
    ctx->pc = 0x27D034u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D034u;
            // 0x27d038: 0x27bd3110  addiu       $sp, $sp, 0x3110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 12560));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27D03Cu;
label_27d03c:
    // 0x27d03c: 0x0  nop
    ctx->pc = 0x27d03cu;
    // NOP
}
