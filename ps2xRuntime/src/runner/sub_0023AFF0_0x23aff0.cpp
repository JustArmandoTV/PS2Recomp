#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023AFF0
// Address: 0x23aff0 - 0x23b2e0
void sub_0023AFF0_0x23aff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023AFF0_0x23aff0");
#endif

    switch (ctx->pc) {
        case 0x23aff0u: goto label_23aff0;
        case 0x23aff4u: goto label_23aff4;
        case 0x23aff8u: goto label_23aff8;
        case 0x23affcu: goto label_23affc;
        case 0x23b000u: goto label_23b000;
        case 0x23b004u: goto label_23b004;
        case 0x23b008u: goto label_23b008;
        case 0x23b00cu: goto label_23b00c;
        case 0x23b010u: goto label_23b010;
        case 0x23b014u: goto label_23b014;
        case 0x23b018u: goto label_23b018;
        case 0x23b01cu: goto label_23b01c;
        case 0x23b020u: goto label_23b020;
        case 0x23b024u: goto label_23b024;
        case 0x23b028u: goto label_23b028;
        case 0x23b02cu: goto label_23b02c;
        case 0x23b030u: goto label_23b030;
        case 0x23b034u: goto label_23b034;
        case 0x23b038u: goto label_23b038;
        case 0x23b03cu: goto label_23b03c;
        case 0x23b040u: goto label_23b040;
        case 0x23b044u: goto label_23b044;
        case 0x23b048u: goto label_23b048;
        case 0x23b04cu: goto label_23b04c;
        case 0x23b050u: goto label_23b050;
        case 0x23b054u: goto label_23b054;
        case 0x23b058u: goto label_23b058;
        case 0x23b05cu: goto label_23b05c;
        case 0x23b060u: goto label_23b060;
        case 0x23b064u: goto label_23b064;
        case 0x23b068u: goto label_23b068;
        case 0x23b06cu: goto label_23b06c;
        case 0x23b070u: goto label_23b070;
        case 0x23b074u: goto label_23b074;
        case 0x23b078u: goto label_23b078;
        case 0x23b07cu: goto label_23b07c;
        case 0x23b080u: goto label_23b080;
        case 0x23b084u: goto label_23b084;
        case 0x23b088u: goto label_23b088;
        case 0x23b08cu: goto label_23b08c;
        case 0x23b090u: goto label_23b090;
        case 0x23b094u: goto label_23b094;
        case 0x23b098u: goto label_23b098;
        case 0x23b09cu: goto label_23b09c;
        case 0x23b0a0u: goto label_23b0a0;
        case 0x23b0a4u: goto label_23b0a4;
        case 0x23b0a8u: goto label_23b0a8;
        case 0x23b0acu: goto label_23b0ac;
        case 0x23b0b0u: goto label_23b0b0;
        case 0x23b0b4u: goto label_23b0b4;
        case 0x23b0b8u: goto label_23b0b8;
        case 0x23b0bcu: goto label_23b0bc;
        case 0x23b0c0u: goto label_23b0c0;
        case 0x23b0c4u: goto label_23b0c4;
        case 0x23b0c8u: goto label_23b0c8;
        case 0x23b0ccu: goto label_23b0cc;
        case 0x23b0d0u: goto label_23b0d0;
        case 0x23b0d4u: goto label_23b0d4;
        case 0x23b0d8u: goto label_23b0d8;
        case 0x23b0dcu: goto label_23b0dc;
        case 0x23b0e0u: goto label_23b0e0;
        case 0x23b0e4u: goto label_23b0e4;
        case 0x23b0e8u: goto label_23b0e8;
        case 0x23b0ecu: goto label_23b0ec;
        case 0x23b0f0u: goto label_23b0f0;
        case 0x23b0f4u: goto label_23b0f4;
        case 0x23b0f8u: goto label_23b0f8;
        case 0x23b0fcu: goto label_23b0fc;
        case 0x23b100u: goto label_23b100;
        case 0x23b104u: goto label_23b104;
        case 0x23b108u: goto label_23b108;
        case 0x23b10cu: goto label_23b10c;
        case 0x23b110u: goto label_23b110;
        case 0x23b114u: goto label_23b114;
        case 0x23b118u: goto label_23b118;
        case 0x23b11cu: goto label_23b11c;
        case 0x23b120u: goto label_23b120;
        case 0x23b124u: goto label_23b124;
        case 0x23b128u: goto label_23b128;
        case 0x23b12cu: goto label_23b12c;
        case 0x23b130u: goto label_23b130;
        case 0x23b134u: goto label_23b134;
        case 0x23b138u: goto label_23b138;
        case 0x23b13cu: goto label_23b13c;
        case 0x23b140u: goto label_23b140;
        case 0x23b144u: goto label_23b144;
        case 0x23b148u: goto label_23b148;
        case 0x23b14cu: goto label_23b14c;
        case 0x23b150u: goto label_23b150;
        case 0x23b154u: goto label_23b154;
        case 0x23b158u: goto label_23b158;
        case 0x23b15cu: goto label_23b15c;
        case 0x23b160u: goto label_23b160;
        case 0x23b164u: goto label_23b164;
        case 0x23b168u: goto label_23b168;
        case 0x23b16cu: goto label_23b16c;
        case 0x23b170u: goto label_23b170;
        case 0x23b174u: goto label_23b174;
        case 0x23b178u: goto label_23b178;
        case 0x23b17cu: goto label_23b17c;
        case 0x23b180u: goto label_23b180;
        case 0x23b184u: goto label_23b184;
        case 0x23b188u: goto label_23b188;
        case 0x23b18cu: goto label_23b18c;
        case 0x23b190u: goto label_23b190;
        case 0x23b194u: goto label_23b194;
        case 0x23b198u: goto label_23b198;
        case 0x23b19cu: goto label_23b19c;
        case 0x23b1a0u: goto label_23b1a0;
        case 0x23b1a4u: goto label_23b1a4;
        case 0x23b1a8u: goto label_23b1a8;
        case 0x23b1acu: goto label_23b1ac;
        case 0x23b1b0u: goto label_23b1b0;
        case 0x23b1b4u: goto label_23b1b4;
        case 0x23b1b8u: goto label_23b1b8;
        case 0x23b1bcu: goto label_23b1bc;
        case 0x23b1c0u: goto label_23b1c0;
        case 0x23b1c4u: goto label_23b1c4;
        case 0x23b1c8u: goto label_23b1c8;
        case 0x23b1ccu: goto label_23b1cc;
        case 0x23b1d0u: goto label_23b1d0;
        case 0x23b1d4u: goto label_23b1d4;
        case 0x23b1d8u: goto label_23b1d8;
        case 0x23b1dcu: goto label_23b1dc;
        case 0x23b1e0u: goto label_23b1e0;
        case 0x23b1e4u: goto label_23b1e4;
        case 0x23b1e8u: goto label_23b1e8;
        case 0x23b1ecu: goto label_23b1ec;
        case 0x23b1f0u: goto label_23b1f0;
        case 0x23b1f4u: goto label_23b1f4;
        case 0x23b1f8u: goto label_23b1f8;
        case 0x23b1fcu: goto label_23b1fc;
        case 0x23b200u: goto label_23b200;
        case 0x23b204u: goto label_23b204;
        case 0x23b208u: goto label_23b208;
        case 0x23b20cu: goto label_23b20c;
        case 0x23b210u: goto label_23b210;
        case 0x23b214u: goto label_23b214;
        case 0x23b218u: goto label_23b218;
        case 0x23b21cu: goto label_23b21c;
        case 0x23b220u: goto label_23b220;
        case 0x23b224u: goto label_23b224;
        case 0x23b228u: goto label_23b228;
        case 0x23b22cu: goto label_23b22c;
        case 0x23b230u: goto label_23b230;
        case 0x23b234u: goto label_23b234;
        case 0x23b238u: goto label_23b238;
        case 0x23b23cu: goto label_23b23c;
        case 0x23b240u: goto label_23b240;
        case 0x23b244u: goto label_23b244;
        case 0x23b248u: goto label_23b248;
        case 0x23b24cu: goto label_23b24c;
        case 0x23b250u: goto label_23b250;
        case 0x23b254u: goto label_23b254;
        case 0x23b258u: goto label_23b258;
        case 0x23b25cu: goto label_23b25c;
        case 0x23b260u: goto label_23b260;
        case 0x23b264u: goto label_23b264;
        case 0x23b268u: goto label_23b268;
        case 0x23b26cu: goto label_23b26c;
        case 0x23b270u: goto label_23b270;
        case 0x23b274u: goto label_23b274;
        case 0x23b278u: goto label_23b278;
        case 0x23b27cu: goto label_23b27c;
        case 0x23b280u: goto label_23b280;
        case 0x23b284u: goto label_23b284;
        case 0x23b288u: goto label_23b288;
        case 0x23b28cu: goto label_23b28c;
        case 0x23b290u: goto label_23b290;
        case 0x23b294u: goto label_23b294;
        case 0x23b298u: goto label_23b298;
        case 0x23b29cu: goto label_23b29c;
        case 0x23b2a0u: goto label_23b2a0;
        case 0x23b2a4u: goto label_23b2a4;
        case 0x23b2a8u: goto label_23b2a8;
        case 0x23b2acu: goto label_23b2ac;
        case 0x23b2b0u: goto label_23b2b0;
        case 0x23b2b4u: goto label_23b2b4;
        case 0x23b2b8u: goto label_23b2b8;
        case 0x23b2bcu: goto label_23b2bc;
        case 0x23b2c0u: goto label_23b2c0;
        case 0x23b2c4u: goto label_23b2c4;
        case 0x23b2c8u: goto label_23b2c8;
        case 0x23b2ccu: goto label_23b2cc;
        case 0x23b2d0u: goto label_23b2d0;
        case 0x23b2d4u: goto label_23b2d4;
        case 0x23b2d8u: goto label_23b2d8;
        case 0x23b2dcu: goto label_23b2dc;
        default: break;
    }

    ctx->pc = 0x23aff0u;

label_23aff0:
    // 0x23aff0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x23aff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_23aff4:
    // 0x23aff4: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x23aff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_23aff8:
    // 0x23aff8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x23aff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_23affc:
    // 0x23affc: 0x64060001  daddiu      $a2, $zero, 0x1
    ctx->pc = 0x23affcu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_23b000:
    // 0x23b000: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x23b000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_23b004:
    // 0x23b004: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x23b004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_23b008:
    // 0x23b008: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x23b008u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23b00c:
    // 0x23b00c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23b00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_23b010:
    // 0x23b010: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23b010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_23b014:
    // 0x23b014: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23b014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_23b018:
    // 0x23b018: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x23b018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_23b01c:
    // 0x23b01c: 0x8c930028  lw          $s3, 0x28($a0)
    ctx->pc = 0x23b01cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_23b020:
    // 0x23b020: 0x90670027  lbu         $a3, 0x27($v1)
    ctx->pc = 0x23b020u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 39)));
label_23b024:
    // 0x23b024: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x23b024u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
label_23b028:
    // 0x23b028: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x23b028u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_23b02c:
    // 0x23b02c: 0xa0650027  sb          $a1, 0x27($v1)
    ctx->pc = 0x23b02cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 39), (uint8_t)GPR_U32(ctx, 5));
label_23b030:
    // 0x23b030: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x23b030u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_23b034:
    // 0x23b034: 0x96690016  lhu         $t1, 0x16($s3)
    ctx->pc = 0x23b034u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 22)));
label_23b038:
    // 0x23b038: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x23b038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_23b03c:
    // 0x23b03c: 0x96680018  lhu         $t0, 0x18($s3)
    ctx->pc = 0x23b03cu;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 24)));
label_23b040:
    // 0x23b040: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
label_23b044:
    if (ctx->pc == 0x23B044u) {
        ctx->pc = 0x23B044u;
            // 0x23b044: 0x966a0014  lhu         $t2, 0x14($s3) (Delay Slot)
        SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->pc = 0x23B048u;
        goto label_23b048;
    }
    ctx->pc = 0x23B040u;
    {
        const bool branch_taken_0x23b040 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B040u;
            // 0x23b044: 0x966a0014  lhu         $t2, 0x14($s3) (Delay Slot)
        SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b040) {
            ctx->pc = 0x23B094u;
            goto label_23b094;
        }
    }
    ctx->pc = 0x23B048u;
label_23b048:
    // 0x23b048: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x23b048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_23b04c:
    // 0x23b04c: 0x8a2023  subu        $a0, $a0, $t2
    ctx->pc = 0x23b04cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_23b050:
    // 0x23b050: 0xaca4000c  sw          $a0, 0xC($a1)
    ctx->pc = 0x23b050u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
label_23b054:
    // 0x23b054: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x23b054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_23b058:
    // 0x23b058: 0x892023  subu        $a0, $a0, $t1
    ctx->pc = 0x23b058u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_23b05c:
    // 0x23b05c: 0xaca40010  sw          $a0, 0x10($a1)
    ctx->pc = 0x23b05cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 4));
label_23b060:
    // 0x23b060: 0x8ca40014  lw          $a0, 0x14($a1)
    ctx->pc = 0x23b060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_23b064:
    // 0x23b064: 0x882023  subu        $a0, $a0, $t0
    ctx->pc = 0x23b064u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_23b068:
    // 0x23b068: 0xaca40014  sw          $a0, 0x14($a1)
    ctx->pc = 0x23b068u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 4));
label_23b06c:
    // 0x23b06c: 0x8e870028  lw          $a3, 0x28($s4)
    ctx->pc = 0x23b06cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_23b070:
    // 0x23b070: 0x94e40016  lhu         $a0, 0x16($a3)
    ctx->pc = 0x23b070u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 22)));
label_23b074:
    // 0x23b074: 0x94e60018  lhu         $a2, 0x18($a3)
    ctx->pc = 0x23b074u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 24)));
label_23b078:
    // 0x23b078: 0x94e50014  lhu         $a1, 0x14($a3)
    ctx->pc = 0x23b078u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 20)));
label_23b07c:
    // 0x23b07c: 0x892023  subu        $a0, $a0, $t1
    ctx->pc = 0x23b07cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_23b080:
    // 0x23b080: 0xc83023  subu        $a2, $a2, $t0
    ctx->pc = 0x23b080u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_23b084:
    // 0x23b084: 0xa4e40016  sh          $a0, 0x16($a3)
    ctx->pc = 0x23b084u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 22), (uint16_t)GPR_U32(ctx, 4));
label_23b088:
    // 0x23b088: 0xaa2823  subu        $a1, $a1, $t2
    ctx->pc = 0x23b088u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_23b08c:
    // 0x23b08c: 0xa4e60018  sh          $a2, 0x18($a3)
    ctx->pc = 0x23b08cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 24), (uint16_t)GPR_U32(ctx, 6));
label_23b090:
    // 0x23b090: 0xa4e50014  sh          $a1, 0x14($a3)
    ctx->pc = 0x23b090u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 20), (uint16_t)GPR_U32(ctx, 5));
label_23b094:
    // 0x23b094: 0x8c65001c  lw          $a1, 0x1C($v1)
    ctx->pc = 0x23b094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_23b098:
    // 0x23b098: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23b098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23b09c:
    // 0x23b09c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x23b09cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_23b0a0:
    // 0x23b0a0: 0xac65001c  sw          $a1, 0x1C($v1)
    ctx->pc = 0x23b0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 5));
label_23b0a4:
    // 0x23b0a4: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x23b0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
label_23b0a8:
    // 0x23b0a8: 0x9265001a  lbu         $a1, 0x1A($s3)
    ctx->pc = 0x23b0a8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 26)));
label_23b0ac:
    // 0x23b0ac: 0x96670022  lhu         $a3, 0x22($s3)
    ctx->pc = 0x23b0acu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 34)));
label_23b0b0:
    // 0x23b0b0: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x23b0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_23b0b4:
    // 0x23b0b4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x23b0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_23b0b8:
    // 0x23b0b8: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x23b0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_23b0bc:
    // 0x23b0bc: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x23b0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_23b0c0:
    // 0x23b0c0: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x23b0c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_23b0c4:
    // 0x23b0c4: 0x8cc4007c  lw          $a0, 0x7C($a2)
    ctx->pc = 0x23b0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
label_23b0c8:
    // 0x23b0c8: 0x8cc50078  lw          $a1, 0x78($a2)
    ctx->pc = 0x23b0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 120)));
label_23b0cc:
    // 0x23b0cc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x23b0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_23b0d0:
    // 0x23b0d0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x23b0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_23b0d4:
    // 0x23b0d4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x23b0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_23b0d8:
    // 0x23b0d8: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x23b0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_23b0dc:
    // 0x23b0dc: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x23b0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23b0e0:
    // 0x23b0e0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x23b0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_23b0e4:
    // 0x23b0e4: 0x8cc3007c  lw          $v1, 0x7C($a2)
    ctx->pc = 0x23b0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
label_23b0e8:
    // 0x23b0e8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x23b0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_23b0ec:
    // 0x23b0ec: 0xacc3007c  sw          $v1, 0x7C($a2)
    ctx->pc = 0x23b0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 124), GPR_U32(ctx, 3));
label_23b0f0:
    // 0x23b0f0: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x23b0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_23b0f4:
    // 0x23b0f4: 0xa4670022  sh          $a3, 0x22($v1)
    ctx->pc = 0x23b0f4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 34), (uint16_t)GPR_U32(ctx, 7));
label_23b0f8:
    // 0x23b0f8: 0x9263001a  lbu         $v1, 0x1A($s3)
    ctx->pc = 0x23b0f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 26)));
label_23b0fc:
    // 0x23b0fc: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x23b0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_23b100:
    // 0x23b100: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23b100u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_23b104:
    // 0x23b104: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x23b104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_23b108:
    // 0x23b108: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x23b108u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_23b10c:
    // 0x23b10c: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
label_23b110:
    if (ctx->pc == 0x23B110u) {
        ctx->pc = 0x23B110u;
            // 0x23b110: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23B114u;
        goto label_23b114;
    }
    ctx->pc = 0x23B10Cu;
    {
        const bool branch_taken_0x23b10c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B10Cu;
            // 0x23b110: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b10c) {
            ctx->pc = 0x23B148u;
            goto label_23b148;
        }
    }
    ctx->pc = 0x23B114u;
label_23b114:
    // 0x23b114: 0x96650020  lhu         $a1, 0x20($s3)
    ctx->pc = 0x23b114u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
label_23b118:
    // 0x23b118: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x23b118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_23b11c:
    // 0x23b11c: 0x8e020088  lw          $v0, 0x88($s0)
    ctx->pc = 0x23b11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_23b120:
    // 0x23b120: 0x59023  negu        $s2, $a1
    ctx->pc = 0x23b120u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
label_23b124:
    // 0x23b124: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x23b124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_23b128:
    // 0x23b128: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x23b128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23b12c:
    // 0x23b12c: 0xc0a8450  jal         func_2A1140
label_23b130:
    if (ctx->pc == 0x23B130u) {
        ctx->pc = 0x23B130u;
            // 0x23b130: 0x453023  subu        $a2, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->pc = 0x23B134u;
        goto label_23b134;
    }
    ctx->pc = 0x23B12Cu;
    SET_GPR_U32(ctx, 31, 0x23B134u);
    ctx->pc = 0x23B130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B12Cu;
            // 0x23b130: 0x453023  subu        $a2, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1140u;
    if (runtime->hasFunction(0x2A1140u)) {
        auto targetFn = runtime->lookupFunction(0x2A1140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B134u; }
        if (ctx->pc != 0x23B134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A1140_0x2a1140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B134u; }
        if (ctx->pc != 0x23B134u) { return; }
    }
    ctx->pc = 0x23B134u;
label_23b134:
    // 0x23b134: 0x96640020  lhu         $a0, 0x20($s3)
    ctx->pc = 0x23b134u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 32)));
label_23b138:
    // 0x23b138: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x23b138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_23b13c:
    // 0x23b13c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x23b13cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_23b140:
    // 0x23b140: 0xae030088  sw          $v1, 0x88($s0)
    ctx->pc = 0x23b140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 3));
label_23b144:
    // 0x23b144: 0xae60001c  sw          $zero, 0x1C($s3)
    ctx->pc = 0x23b144u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 0));
label_23b148:
    // 0x23b148: 0x8e71000c  lw          $s1, 0xC($s3)
    ctx->pc = 0x23b148u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_23b14c:
    // 0x23b14c: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x23b14cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_23b150:
    // 0x23b150: 0x28630017  slti        $v1, $v1, 0x17
    ctx->pc = 0x23b150u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)23) ? 1 : 0);
label_23b154:
    // 0x23b154: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x23b154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_23b158:
    // 0x23b158: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x23b158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_23b15c:
    // 0x23b15c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x23b15cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_23b160:
    // 0x23b160: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x23b160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_23b164:
    // 0x23b164: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_23b168:
    if (ctx->pc == 0x23B168u) {
        ctx->pc = 0x23B16Cu;
        goto label_23b16c;
    }
    ctx->pc = 0x23B164u;
    {
        const bool branch_taken_0x23b164 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b164) {
            ctx->pc = 0x23B190u;
            goto label_23b190;
        }
    }
    ctx->pc = 0x23B16Cu;
label_23b16c:
    // 0x23b16c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x23b16cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23b170:
    // 0x23b170: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x23b170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_23b174:
    // 0x23b174: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x23b174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_23b178:
    // 0x23b178: 0x94a60010  lhu         $a2, 0x10($a1)
    ctx->pc = 0x23b178u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
label_23b17c:
    // 0x23b17c: 0x8e310014  lw          $s1, 0x14($s1)
    ctx->pc = 0x23b17cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_23b180:
    // 0x23b180: 0xc0a7ab4  jal         func_29EAD0
label_23b184:
    if (ctx->pc == 0x23B184u) {
        ctx->pc = 0x23B184u;
            // 0x23b184: 0x2407002a  addiu       $a3, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->pc = 0x23B188u;
        goto label_23b188;
    }
    ctx->pc = 0x23B180u;
    SET_GPR_U32(ctx, 31, 0x23B188u);
    ctx->pc = 0x23B184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23B180u;
            // 0x23b184: 0x2407002a  addiu       $a3, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B188u; }
        if (ctx->pc != 0x23B188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23B188u; }
        if (ctx->pc != 0x23B188u) { return; }
    }
    ctx->pc = 0x23B188u;
label_23b188:
    // 0x23b188: 0x1000fff1  b           . + 4 + (-0xF << 2)
label_23b18c:
    if (ctx->pc == 0x23B18Cu) {
        ctx->pc = 0x23B18Cu;
            // 0x23b18c: 0x96230000  lhu         $v1, 0x0($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x23B190u;
        goto label_23b190;
    }
    ctx->pc = 0x23B188u;
    {
        const bool branch_taken_0x23b188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23B18Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B188u;
            // 0x23b18c: 0x96230000  lhu         $v1, 0x0($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23b188) {
            ctx->pc = 0x23B150u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23b150;
        }
    }
    ctx->pc = 0x23B190u;
label_23b190:
    // 0x23b190: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x23b190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_23b194:
    // 0x23b194: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x23b194u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
label_23b198:
    // 0x23b198: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x23b198u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
label_23b19c:
    // 0x23b19c: 0xae800028  sw          $zero, 0x28($s4)
    ctx->pc = 0x23b19cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 0));
label_23b1a0:
    // 0x23b1a0: 0x96040074  lhu         $a0, 0x74($s0)
    ctx->pc = 0x23b1a0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 116)));
label_23b1a4:
    // 0x23b1a4: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x23b1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_23b1a8:
    // 0x23b1a8: 0x2485ffff  addiu       $a1, $a0, -0x1
    ctx->pc = 0x23b1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_23b1ac:
    // 0x23b1ac: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x23b1acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_23b1b0:
    // 0x23b1b0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x23b1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_23b1b4:
    // 0x23b1b4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x23b1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_23b1b8:
    // 0x23b1b8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x23b1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_23b1bc:
    // 0x23b1bc: 0x264082b  sltu        $at, $s3, $a0
    ctx->pc = 0x23b1bcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_23b1c0:
    // 0x23b1c0: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
label_23b1c4:
    if (ctx->pc == 0x23B1C4u) {
        ctx->pc = 0x23B1C8u;
        goto label_23b1c8;
    }
    ctx->pc = 0x23B1C0u;
    {
        const bool branch_taken_0x23b1c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b1c0) {
            ctx->pc = 0x23B270u;
            goto label_23b270;
        }
    }
    ctx->pc = 0x23B1C8u;
label_23b1c8:
    // 0x23b1c8: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x23b1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_23b1cc:
    // 0x23b1cc: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x23b1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_23b1d0:
    // 0x23b1d0: 0xc6610028  lwc1        $f1, 0x28($s3)
    ctx->pc = 0x23b1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23b1d4:
    // 0x23b1d4: 0xc660002c  lwc1        $f0, 0x2C($s3)
    ctx->pc = 0x23b1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23b1d8:
    // 0x23b1d8: 0xe6610004  swc1        $f1, 0x4($s3)
    ctx->pc = 0x23b1d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_23b1dc:
    // 0x23b1dc: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x23b1dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_23b1e0:
    // 0x23b1e0: 0x8e630030  lw          $v1, 0x30($s3)
    ctx->pc = 0x23b1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_23b1e4:
    // 0x23b1e4: 0xae63000c  sw          $v1, 0xC($s3)
    ctx->pc = 0x23b1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
label_23b1e8:
    // 0x23b1e8: 0x96630034  lhu         $v1, 0x34($s3)
    ctx->pc = 0x23b1e8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 52)));
label_23b1ec:
    // 0x23b1ec: 0xa6630010  sh          $v1, 0x10($s3)
    ctx->pc = 0x23b1ecu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 16), (uint16_t)GPR_U32(ctx, 3));
label_23b1f0:
    // 0x23b1f0: 0x92630036  lbu         $v1, 0x36($s3)
    ctx->pc = 0x23b1f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 54)));
label_23b1f4:
    // 0x23b1f4: 0xa2630012  sb          $v1, 0x12($s3)
    ctx->pc = 0x23b1f4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 18), (uint8_t)GPR_U32(ctx, 3));
label_23b1f8:
    // 0x23b1f8: 0x92630037  lbu         $v1, 0x37($s3)
    ctx->pc = 0x23b1f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 55)));
label_23b1fc:
    // 0x23b1fc: 0xa2630013  sb          $v1, 0x13($s3)
    ctx->pc = 0x23b1fcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 19), (uint8_t)GPR_U32(ctx, 3));
label_23b200:
    // 0x23b200: 0x96630038  lhu         $v1, 0x38($s3)
    ctx->pc = 0x23b200u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
label_23b204:
    // 0x23b204: 0xa6630014  sh          $v1, 0x14($s3)
    ctx->pc = 0x23b204u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 20), (uint16_t)GPR_U32(ctx, 3));
label_23b208:
    // 0x23b208: 0x9663003a  lhu         $v1, 0x3A($s3)
    ctx->pc = 0x23b208u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 58)));
label_23b20c:
    // 0x23b20c: 0xa6630016  sh          $v1, 0x16($s3)
    ctx->pc = 0x23b20cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 22), (uint16_t)GPR_U32(ctx, 3));
label_23b210:
    // 0x23b210: 0x9663003c  lhu         $v1, 0x3C($s3)
    ctx->pc = 0x23b210u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 60)));
label_23b214:
    // 0x23b214: 0xa6630018  sh          $v1, 0x18($s3)
    ctx->pc = 0x23b214u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 24), (uint16_t)GPR_U32(ctx, 3));
label_23b218:
    // 0x23b218: 0x9263003e  lbu         $v1, 0x3E($s3)
    ctx->pc = 0x23b218u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 62)));
label_23b21c:
    // 0x23b21c: 0xa263001a  sb          $v1, 0x1A($s3)
    ctx->pc = 0x23b21cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 26), (uint8_t)GPR_U32(ctx, 3));
label_23b220:
    // 0x23b220: 0x9263003f  lbu         $v1, 0x3F($s3)
    ctx->pc = 0x23b220u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 63)));
label_23b224:
    // 0x23b224: 0xa263001b  sb          $v1, 0x1B($s3)
    ctx->pc = 0x23b224u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 27), (uint8_t)GPR_U32(ctx, 3));
label_23b228:
    // 0x23b228: 0x8e630040  lw          $v1, 0x40($s3)
    ctx->pc = 0x23b228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_23b22c:
    // 0x23b22c: 0xae63001c  sw          $v1, 0x1C($s3)
    ctx->pc = 0x23b22cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 3));
label_23b230:
    // 0x23b230: 0x96630044  lhu         $v1, 0x44($s3)
    ctx->pc = 0x23b230u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 68)));
label_23b234:
    // 0x23b234: 0xa6630020  sh          $v1, 0x20($s3)
    ctx->pc = 0x23b234u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 32), (uint16_t)GPR_U32(ctx, 3));
label_23b238:
    // 0x23b238: 0x96630046  lhu         $v1, 0x46($s3)
    ctx->pc = 0x23b238u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 70)));
label_23b23c:
    // 0x23b23c: 0xa6630022  sh          $v1, 0x22($s3)
    ctx->pc = 0x23b23cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 34), (uint16_t)GPR_U32(ctx, 3));
label_23b240:
    // 0x23b240: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x23b240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_23b244:
    // 0x23b244: 0xac730028  sw          $s3, 0x28($v1)
    ctx->pc = 0x23b244u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 19));
label_23b248:
    // 0x23b248: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x23b248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_23b24c:
    // 0x23b24c: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
label_23b250:
    if (ctx->pc == 0x23B250u) {
        ctx->pc = 0x23B250u;
            // 0x23b250: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23B254u;
        goto label_23b254;
    }
    ctx->pc = 0x23B24Cu;
    {
        const bool branch_taken_0x23b24c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b24c) {
            ctx->pc = 0x23B250u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23B24Cu;
            // 0x23b250: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23B258u;
            goto label_23b258;
        }
    }
    ctx->pc = 0x23B254u;
label_23b254:
    // 0x23b254: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x23b254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_23b258:
    // 0x23b258: 0xae63001c  sw          $v1, 0x1C($s3)
    ctx->pc = 0x23b258u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 3));
label_23b25c:
    // 0x23b25c: 0x26730024  addiu       $s3, $s3, 0x24
    ctx->pc = 0x23b25cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
label_23b260:
    // 0x23b260: 0x264182b  sltu        $v1, $s3, $a0
    ctx->pc = 0x23b260u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_23b264:
    // 0x23b264: 0x5460ffd9  bnel        $v1, $zero, . + 4 + (-0x27 << 2)
label_23b268:
    if (ctx->pc == 0x23B268u) {
        ctx->pc = 0x23B268u;
            // 0x23b268: 0x8e630024  lw          $v1, 0x24($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
        ctx->pc = 0x23B26Cu;
        goto label_23b26c;
    }
    ctx->pc = 0x23B264u;
    {
        const bool branch_taken_0x23b264 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b264) {
            ctx->pc = 0x23B268u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23B264u;
            // 0x23b268: 0x8e630024  lw          $v1, 0x24($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23B1CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23b1cc;
        }
    }
    ctx->pc = 0x23B26Cu;
label_23b26c:
    // 0x23b26c: 0x0  nop
    ctx->pc = 0x23b26cu;
    // NOP
label_23b270:
    // 0x23b270: 0x96030074  lhu         $v1, 0x74($s0)
    ctx->pc = 0x23b270u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 116)));
label_23b274:
    // 0x23b274: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x23b274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_23b278:
    // 0x23b278: 0xa6030074  sh          $v1, 0x74($s0)
    ctx->pc = 0x23b278u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 116), (uint16_t)GPR_U32(ctx, 3));
label_23b27c:
    // 0x23b27c: 0x96830004  lhu         $v1, 0x4($s4)
    ctx->pc = 0x23b27cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
label_23b280:
    // 0x23b280: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
label_23b284:
    if (ctx->pc == 0x23B284u) {
        ctx->pc = 0x23B284u;
            // 0x23b284: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x23B288u;
        goto label_23b288;
    }
    ctx->pc = 0x23B280u;
    {
        const bool branch_taken_0x23b280 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b280) {
            ctx->pc = 0x23B284u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23B280u;
            // 0x23b284: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23B2C4u;
            goto label_23b2c4;
        }
    }
    ctx->pc = 0x23B288u;
label_23b288:
    // 0x23b288: 0x86830006  lh          $v1, 0x6($s4)
    ctx->pc = 0x23b288u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
label_23b28c:
    // 0x23b28c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x23b28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_23b290:
    // 0x23b290: 0xa6830006  sh          $v1, 0x6($s4)
    ctx->pc = 0x23b290u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 6), (uint16_t)GPR_U32(ctx, 3));
label_23b294:
    // 0x23b294: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x23b294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_23b298:
    // 0x23b298: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x23b298u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_23b29c:
    // 0x23b29c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_23b2a0:
    if (ctx->pc == 0x23B2A0u) {
        ctx->pc = 0x23B2A4u;
        goto label_23b2a4;
    }
    ctx->pc = 0x23B29Cu;
    {
        const bool branch_taken_0x23b29c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23b29c) {
            ctx->pc = 0x23B2C0u;
            goto label_23b2c0;
        }
    }
    ctx->pc = 0x23B2A4u;
label_23b2a4:
    // 0x23b2a4: 0x12800006  beqz        $s4, . + 4 + (0x6 << 2)
label_23b2a8:
    if (ctx->pc == 0x23B2A8u) {
        ctx->pc = 0x23B2ACu;
        goto label_23b2ac;
    }
    ctx->pc = 0x23B2A4u;
    {
        const bool branch_taken_0x23b2a4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x23b2a4) {
            ctx->pc = 0x23B2C0u;
            goto label_23b2c0;
        }
    }
    ctx->pc = 0x23B2ACu;
label_23b2ac:
    // 0x23b2ac: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x23b2acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_23b2b0:
    // 0x23b2b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x23b2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23b2b4:
    // 0x23b2b4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x23b2b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_23b2b8:
    // 0x23b2b8: 0x320f809  jalr        $t9
label_23b2bc:
    if (ctx->pc == 0x23B2BCu) {
        ctx->pc = 0x23B2BCu;
            // 0x23b2bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x23B2C0u;
        goto label_23b2c0;
    }
    ctx->pc = 0x23B2B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23B2C0u);
        ctx->pc = 0x23B2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B2B8u;
            // 0x23b2bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23B2C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23B2C0u; }
            if (ctx->pc != 0x23B2C0u) { return; }
        }
        }
    }
    ctx->pc = 0x23B2C0u;
label_23b2c0:
    // 0x23b2c0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x23b2c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_23b2c4:
    // 0x23b2c4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x23b2c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_23b2c8:
    // 0x23b2c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23b2c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_23b2cc:
    // 0x23b2cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23b2ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23b2d0:
    // 0x23b2d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23b2d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23b2d4:
    // 0x23b2d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23b2d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23b2d8:
    // 0x23b2d8: 0x3e00008  jr          $ra
label_23b2dc:
    if (ctx->pc == 0x23B2DCu) {
        ctx->pc = 0x23B2DCu;
            // 0x23b2dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x23B2E0u;
        goto label_fallthrough_0x23b2d8;
    }
    ctx->pc = 0x23B2D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23B2DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23B2D8u;
            // 0x23b2dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x23b2d8:
    ctx->pc = 0x23B2E0u;
}
