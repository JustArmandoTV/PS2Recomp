#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004CEE90
// Address: 0x4cee90 - 0x4cf330
void sub_004CEE90_0x4cee90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CEE90_0x4cee90");
#endif

    switch (ctx->pc) {
        case 0x4cee90u: goto label_4cee90;
        case 0x4cee94u: goto label_4cee94;
        case 0x4cee98u: goto label_4cee98;
        case 0x4cee9cu: goto label_4cee9c;
        case 0x4ceea0u: goto label_4ceea0;
        case 0x4ceea4u: goto label_4ceea4;
        case 0x4ceea8u: goto label_4ceea8;
        case 0x4ceeacu: goto label_4ceeac;
        case 0x4ceeb0u: goto label_4ceeb0;
        case 0x4ceeb4u: goto label_4ceeb4;
        case 0x4ceeb8u: goto label_4ceeb8;
        case 0x4ceebcu: goto label_4ceebc;
        case 0x4ceec0u: goto label_4ceec0;
        case 0x4ceec4u: goto label_4ceec4;
        case 0x4ceec8u: goto label_4ceec8;
        case 0x4ceeccu: goto label_4ceecc;
        case 0x4ceed0u: goto label_4ceed0;
        case 0x4ceed4u: goto label_4ceed4;
        case 0x4ceed8u: goto label_4ceed8;
        case 0x4ceedcu: goto label_4ceedc;
        case 0x4ceee0u: goto label_4ceee0;
        case 0x4ceee4u: goto label_4ceee4;
        case 0x4ceee8u: goto label_4ceee8;
        case 0x4ceeecu: goto label_4ceeec;
        case 0x4ceef0u: goto label_4ceef0;
        case 0x4ceef4u: goto label_4ceef4;
        case 0x4ceef8u: goto label_4ceef8;
        case 0x4ceefcu: goto label_4ceefc;
        case 0x4cef00u: goto label_4cef00;
        case 0x4cef04u: goto label_4cef04;
        case 0x4cef08u: goto label_4cef08;
        case 0x4cef0cu: goto label_4cef0c;
        case 0x4cef10u: goto label_4cef10;
        case 0x4cef14u: goto label_4cef14;
        case 0x4cef18u: goto label_4cef18;
        case 0x4cef1cu: goto label_4cef1c;
        case 0x4cef20u: goto label_4cef20;
        case 0x4cef24u: goto label_4cef24;
        case 0x4cef28u: goto label_4cef28;
        case 0x4cef2cu: goto label_4cef2c;
        case 0x4cef30u: goto label_4cef30;
        case 0x4cef34u: goto label_4cef34;
        case 0x4cef38u: goto label_4cef38;
        case 0x4cef3cu: goto label_4cef3c;
        case 0x4cef40u: goto label_4cef40;
        case 0x4cef44u: goto label_4cef44;
        case 0x4cef48u: goto label_4cef48;
        case 0x4cef4cu: goto label_4cef4c;
        case 0x4cef50u: goto label_4cef50;
        case 0x4cef54u: goto label_4cef54;
        case 0x4cef58u: goto label_4cef58;
        case 0x4cef5cu: goto label_4cef5c;
        case 0x4cef60u: goto label_4cef60;
        case 0x4cef64u: goto label_4cef64;
        case 0x4cef68u: goto label_4cef68;
        case 0x4cef6cu: goto label_4cef6c;
        case 0x4cef70u: goto label_4cef70;
        case 0x4cef74u: goto label_4cef74;
        case 0x4cef78u: goto label_4cef78;
        case 0x4cef7cu: goto label_4cef7c;
        case 0x4cef80u: goto label_4cef80;
        case 0x4cef84u: goto label_4cef84;
        case 0x4cef88u: goto label_4cef88;
        case 0x4cef8cu: goto label_4cef8c;
        case 0x4cef90u: goto label_4cef90;
        case 0x4cef94u: goto label_4cef94;
        case 0x4cef98u: goto label_4cef98;
        case 0x4cef9cu: goto label_4cef9c;
        case 0x4cefa0u: goto label_4cefa0;
        case 0x4cefa4u: goto label_4cefa4;
        case 0x4cefa8u: goto label_4cefa8;
        case 0x4cefacu: goto label_4cefac;
        case 0x4cefb0u: goto label_4cefb0;
        case 0x4cefb4u: goto label_4cefb4;
        case 0x4cefb8u: goto label_4cefb8;
        case 0x4cefbcu: goto label_4cefbc;
        case 0x4cefc0u: goto label_4cefc0;
        case 0x4cefc4u: goto label_4cefc4;
        case 0x4cefc8u: goto label_4cefc8;
        case 0x4cefccu: goto label_4cefcc;
        case 0x4cefd0u: goto label_4cefd0;
        case 0x4cefd4u: goto label_4cefd4;
        case 0x4cefd8u: goto label_4cefd8;
        case 0x4cefdcu: goto label_4cefdc;
        case 0x4cefe0u: goto label_4cefe0;
        case 0x4cefe4u: goto label_4cefe4;
        case 0x4cefe8u: goto label_4cefe8;
        case 0x4cefecu: goto label_4cefec;
        case 0x4ceff0u: goto label_4ceff0;
        case 0x4ceff4u: goto label_4ceff4;
        case 0x4ceff8u: goto label_4ceff8;
        case 0x4ceffcu: goto label_4ceffc;
        case 0x4cf000u: goto label_4cf000;
        case 0x4cf004u: goto label_4cf004;
        case 0x4cf008u: goto label_4cf008;
        case 0x4cf00cu: goto label_4cf00c;
        case 0x4cf010u: goto label_4cf010;
        case 0x4cf014u: goto label_4cf014;
        case 0x4cf018u: goto label_4cf018;
        case 0x4cf01cu: goto label_4cf01c;
        case 0x4cf020u: goto label_4cf020;
        case 0x4cf024u: goto label_4cf024;
        case 0x4cf028u: goto label_4cf028;
        case 0x4cf02cu: goto label_4cf02c;
        case 0x4cf030u: goto label_4cf030;
        case 0x4cf034u: goto label_4cf034;
        case 0x4cf038u: goto label_4cf038;
        case 0x4cf03cu: goto label_4cf03c;
        case 0x4cf040u: goto label_4cf040;
        case 0x4cf044u: goto label_4cf044;
        case 0x4cf048u: goto label_4cf048;
        case 0x4cf04cu: goto label_4cf04c;
        case 0x4cf050u: goto label_4cf050;
        case 0x4cf054u: goto label_4cf054;
        case 0x4cf058u: goto label_4cf058;
        case 0x4cf05cu: goto label_4cf05c;
        case 0x4cf060u: goto label_4cf060;
        case 0x4cf064u: goto label_4cf064;
        case 0x4cf068u: goto label_4cf068;
        case 0x4cf06cu: goto label_4cf06c;
        case 0x4cf070u: goto label_4cf070;
        case 0x4cf074u: goto label_4cf074;
        case 0x4cf078u: goto label_4cf078;
        case 0x4cf07cu: goto label_4cf07c;
        case 0x4cf080u: goto label_4cf080;
        case 0x4cf084u: goto label_4cf084;
        case 0x4cf088u: goto label_4cf088;
        case 0x4cf08cu: goto label_4cf08c;
        case 0x4cf090u: goto label_4cf090;
        case 0x4cf094u: goto label_4cf094;
        case 0x4cf098u: goto label_4cf098;
        case 0x4cf09cu: goto label_4cf09c;
        case 0x4cf0a0u: goto label_4cf0a0;
        case 0x4cf0a4u: goto label_4cf0a4;
        case 0x4cf0a8u: goto label_4cf0a8;
        case 0x4cf0acu: goto label_4cf0ac;
        case 0x4cf0b0u: goto label_4cf0b0;
        case 0x4cf0b4u: goto label_4cf0b4;
        case 0x4cf0b8u: goto label_4cf0b8;
        case 0x4cf0bcu: goto label_4cf0bc;
        case 0x4cf0c0u: goto label_4cf0c0;
        case 0x4cf0c4u: goto label_4cf0c4;
        case 0x4cf0c8u: goto label_4cf0c8;
        case 0x4cf0ccu: goto label_4cf0cc;
        case 0x4cf0d0u: goto label_4cf0d0;
        case 0x4cf0d4u: goto label_4cf0d4;
        case 0x4cf0d8u: goto label_4cf0d8;
        case 0x4cf0dcu: goto label_4cf0dc;
        case 0x4cf0e0u: goto label_4cf0e0;
        case 0x4cf0e4u: goto label_4cf0e4;
        case 0x4cf0e8u: goto label_4cf0e8;
        case 0x4cf0ecu: goto label_4cf0ec;
        case 0x4cf0f0u: goto label_4cf0f0;
        case 0x4cf0f4u: goto label_4cf0f4;
        case 0x4cf0f8u: goto label_4cf0f8;
        case 0x4cf0fcu: goto label_4cf0fc;
        case 0x4cf100u: goto label_4cf100;
        case 0x4cf104u: goto label_4cf104;
        case 0x4cf108u: goto label_4cf108;
        case 0x4cf10cu: goto label_4cf10c;
        case 0x4cf110u: goto label_4cf110;
        case 0x4cf114u: goto label_4cf114;
        case 0x4cf118u: goto label_4cf118;
        case 0x4cf11cu: goto label_4cf11c;
        case 0x4cf120u: goto label_4cf120;
        case 0x4cf124u: goto label_4cf124;
        case 0x4cf128u: goto label_4cf128;
        case 0x4cf12cu: goto label_4cf12c;
        case 0x4cf130u: goto label_4cf130;
        case 0x4cf134u: goto label_4cf134;
        case 0x4cf138u: goto label_4cf138;
        case 0x4cf13cu: goto label_4cf13c;
        case 0x4cf140u: goto label_4cf140;
        case 0x4cf144u: goto label_4cf144;
        case 0x4cf148u: goto label_4cf148;
        case 0x4cf14cu: goto label_4cf14c;
        case 0x4cf150u: goto label_4cf150;
        case 0x4cf154u: goto label_4cf154;
        case 0x4cf158u: goto label_4cf158;
        case 0x4cf15cu: goto label_4cf15c;
        case 0x4cf160u: goto label_4cf160;
        case 0x4cf164u: goto label_4cf164;
        case 0x4cf168u: goto label_4cf168;
        case 0x4cf16cu: goto label_4cf16c;
        case 0x4cf170u: goto label_4cf170;
        case 0x4cf174u: goto label_4cf174;
        case 0x4cf178u: goto label_4cf178;
        case 0x4cf17cu: goto label_4cf17c;
        case 0x4cf180u: goto label_4cf180;
        case 0x4cf184u: goto label_4cf184;
        case 0x4cf188u: goto label_4cf188;
        case 0x4cf18cu: goto label_4cf18c;
        case 0x4cf190u: goto label_4cf190;
        case 0x4cf194u: goto label_4cf194;
        case 0x4cf198u: goto label_4cf198;
        case 0x4cf19cu: goto label_4cf19c;
        case 0x4cf1a0u: goto label_4cf1a0;
        case 0x4cf1a4u: goto label_4cf1a4;
        case 0x4cf1a8u: goto label_4cf1a8;
        case 0x4cf1acu: goto label_4cf1ac;
        case 0x4cf1b0u: goto label_4cf1b0;
        case 0x4cf1b4u: goto label_4cf1b4;
        case 0x4cf1b8u: goto label_4cf1b8;
        case 0x4cf1bcu: goto label_4cf1bc;
        case 0x4cf1c0u: goto label_4cf1c0;
        case 0x4cf1c4u: goto label_4cf1c4;
        case 0x4cf1c8u: goto label_4cf1c8;
        case 0x4cf1ccu: goto label_4cf1cc;
        case 0x4cf1d0u: goto label_4cf1d0;
        case 0x4cf1d4u: goto label_4cf1d4;
        case 0x4cf1d8u: goto label_4cf1d8;
        case 0x4cf1dcu: goto label_4cf1dc;
        case 0x4cf1e0u: goto label_4cf1e0;
        case 0x4cf1e4u: goto label_4cf1e4;
        case 0x4cf1e8u: goto label_4cf1e8;
        case 0x4cf1ecu: goto label_4cf1ec;
        case 0x4cf1f0u: goto label_4cf1f0;
        case 0x4cf1f4u: goto label_4cf1f4;
        case 0x4cf1f8u: goto label_4cf1f8;
        case 0x4cf1fcu: goto label_4cf1fc;
        case 0x4cf200u: goto label_4cf200;
        case 0x4cf204u: goto label_4cf204;
        case 0x4cf208u: goto label_4cf208;
        case 0x4cf20cu: goto label_4cf20c;
        case 0x4cf210u: goto label_4cf210;
        case 0x4cf214u: goto label_4cf214;
        case 0x4cf218u: goto label_4cf218;
        case 0x4cf21cu: goto label_4cf21c;
        case 0x4cf220u: goto label_4cf220;
        case 0x4cf224u: goto label_4cf224;
        case 0x4cf228u: goto label_4cf228;
        case 0x4cf22cu: goto label_4cf22c;
        case 0x4cf230u: goto label_4cf230;
        case 0x4cf234u: goto label_4cf234;
        case 0x4cf238u: goto label_4cf238;
        case 0x4cf23cu: goto label_4cf23c;
        case 0x4cf240u: goto label_4cf240;
        case 0x4cf244u: goto label_4cf244;
        case 0x4cf248u: goto label_4cf248;
        case 0x4cf24cu: goto label_4cf24c;
        case 0x4cf250u: goto label_4cf250;
        case 0x4cf254u: goto label_4cf254;
        case 0x4cf258u: goto label_4cf258;
        case 0x4cf25cu: goto label_4cf25c;
        case 0x4cf260u: goto label_4cf260;
        case 0x4cf264u: goto label_4cf264;
        case 0x4cf268u: goto label_4cf268;
        case 0x4cf26cu: goto label_4cf26c;
        case 0x4cf270u: goto label_4cf270;
        case 0x4cf274u: goto label_4cf274;
        case 0x4cf278u: goto label_4cf278;
        case 0x4cf27cu: goto label_4cf27c;
        case 0x4cf280u: goto label_4cf280;
        case 0x4cf284u: goto label_4cf284;
        case 0x4cf288u: goto label_4cf288;
        case 0x4cf28cu: goto label_4cf28c;
        case 0x4cf290u: goto label_4cf290;
        case 0x4cf294u: goto label_4cf294;
        case 0x4cf298u: goto label_4cf298;
        case 0x4cf29cu: goto label_4cf29c;
        case 0x4cf2a0u: goto label_4cf2a0;
        case 0x4cf2a4u: goto label_4cf2a4;
        case 0x4cf2a8u: goto label_4cf2a8;
        case 0x4cf2acu: goto label_4cf2ac;
        case 0x4cf2b0u: goto label_4cf2b0;
        case 0x4cf2b4u: goto label_4cf2b4;
        case 0x4cf2b8u: goto label_4cf2b8;
        case 0x4cf2bcu: goto label_4cf2bc;
        case 0x4cf2c0u: goto label_4cf2c0;
        case 0x4cf2c4u: goto label_4cf2c4;
        case 0x4cf2c8u: goto label_4cf2c8;
        case 0x4cf2ccu: goto label_4cf2cc;
        case 0x4cf2d0u: goto label_4cf2d0;
        case 0x4cf2d4u: goto label_4cf2d4;
        case 0x4cf2d8u: goto label_4cf2d8;
        case 0x4cf2dcu: goto label_4cf2dc;
        case 0x4cf2e0u: goto label_4cf2e0;
        case 0x4cf2e4u: goto label_4cf2e4;
        case 0x4cf2e8u: goto label_4cf2e8;
        case 0x4cf2ecu: goto label_4cf2ec;
        case 0x4cf2f0u: goto label_4cf2f0;
        case 0x4cf2f4u: goto label_4cf2f4;
        case 0x4cf2f8u: goto label_4cf2f8;
        case 0x4cf2fcu: goto label_4cf2fc;
        case 0x4cf300u: goto label_4cf300;
        case 0x4cf304u: goto label_4cf304;
        case 0x4cf308u: goto label_4cf308;
        case 0x4cf30cu: goto label_4cf30c;
        case 0x4cf310u: goto label_4cf310;
        case 0x4cf314u: goto label_4cf314;
        case 0x4cf318u: goto label_4cf318;
        case 0x4cf31cu: goto label_4cf31c;
        case 0x4cf320u: goto label_4cf320;
        case 0x4cf324u: goto label_4cf324;
        case 0x4cf328u: goto label_4cf328;
        case 0x4cf32cu: goto label_4cf32c;
        default: break;
    }

    ctx->pc = 0x4cee90u;

label_4cee90:
    // 0x4cee90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4cee90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4cee94:
    // 0x4cee94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4cee94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4cee98:
    // 0x4cee98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4cee98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4cee9c:
    // 0x4cee9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4cee9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4ceea0:
    // 0x4ceea0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4ceea0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4ceea4:
    // 0x4ceea4: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_4ceea8:
    if (ctx->pc == 0x4CEEA8u) {
        ctx->pc = 0x4CEEA8u;
            // 0x4ceea8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CEEACu;
        goto label_4ceeac;
    }
    ctx->pc = 0x4CEEA4u;
    {
        const bool branch_taken_0x4ceea4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CEEA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CEEA4u;
            // 0x4ceea8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ceea4) {
            ctx->pc = 0x4CEFD8u;
            goto label_4cefd8;
        }
    }
    ctx->pc = 0x4CEEACu;
label_4ceeac:
    // 0x4ceeac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4ceeacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4ceeb0:
    // 0x4ceeb0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4ceeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4ceeb4:
    // 0x4ceeb4: 0x24631df0  addiu       $v1, $v1, 0x1DF0
    ctx->pc = 0x4ceeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7664));
label_4ceeb8:
    // 0x4ceeb8: 0x3c05004d  lui         $a1, 0x4D
    ctx->pc = 0x4ceeb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)77 << 16));
label_4ceebc:
    // 0x4ceebc: 0x24421e28  addiu       $v0, $v0, 0x1E28
    ctx->pc = 0x4ceebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7720));
label_4ceec0:
    // 0x4ceec0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4ceec0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4ceec4:
    // 0x4ceec4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4ceec4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4ceec8:
    // 0x4ceec8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x4ceec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_4ceecc:
    // 0x4ceecc: 0xc0407c0  jal         func_101F00
label_4ceed0:
    if (ctx->pc == 0x4CEED0u) {
        ctx->pc = 0x4CEED0u;
            // 0x4ceed0: 0x24a5eff0  addiu       $a1, $a1, -0x1010 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963184));
        ctx->pc = 0x4CEED4u;
        goto label_4ceed4;
    }
    ctx->pc = 0x4CEECCu;
    SET_GPR_U32(ctx, 31, 0x4CEED4u);
    ctx->pc = 0x4CEED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CEECCu;
            // 0x4ceed0: 0x24a5eff0  addiu       $a1, $a1, -0x1010 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CEED4u; }
        if (ctx->pc != 0x4CEED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CEED4u; }
        if (ctx->pc != 0x4CEED4u) { return; }
    }
    ctx->pc = 0x4CEED4u;
label_4ceed4:
    // 0x4ceed4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x4ceed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_4ceed8:
    // 0x4ceed8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4ceedc:
    if (ctx->pc == 0x4CEEDCu) {
        ctx->pc = 0x4CEEDCu;
            // 0x4ceedc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x4CEEE0u;
        goto label_4ceee0;
    }
    ctx->pc = 0x4CEED8u;
    {
        const bool branch_taken_0x4ceed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ceed8) {
            ctx->pc = 0x4CEEDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CEED8u;
            // 0x4ceedc: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CEEECu;
            goto label_4ceeec;
        }
    }
    ctx->pc = 0x4CEEE0u;
label_4ceee0:
    // 0x4ceee0: 0xc07507c  jal         func_1D41F0
label_4ceee4:
    if (ctx->pc == 0x4CEEE4u) {
        ctx->pc = 0x4CEEE4u;
            // 0x4ceee4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x4CEEE8u;
        goto label_4ceee8;
    }
    ctx->pc = 0x4CEEE0u;
    SET_GPR_U32(ctx, 31, 0x4CEEE8u);
    ctx->pc = 0x4CEEE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CEEE0u;
            // 0x4ceee4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CEEE8u; }
        if (ctx->pc != 0x4CEEE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CEEE8u; }
        if (ctx->pc != 0x4CEEE8u) { return; }
    }
    ctx->pc = 0x4CEEE8u;
label_4ceee8:
    // 0x4ceee8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x4ceee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_4ceeec:
    // 0x4ceeec: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4ceef0:
    if (ctx->pc == 0x4CEEF0u) {
        ctx->pc = 0x4CEEF0u;
            // 0x4ceef0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x4CEEF4u;
        goto label_4ceef4;
    }
    ctx->pc = 0x4CEEECu;
    {
        const bool branch_taken_0x4ceeec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ceeec) {
            ctx->pc = 0x4CEEF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CEEECu;
            // 0x4ceef0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CEF1Cu;
            goto label_4cef1c;
        }
    }
    ctx->pc = 0x4CEEF4u;
label_4ceef4:
    // 0x4ceef4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4ceef8:
    if (ctx->pc == 0x4CEEF8u) {
        ctx->pc = 0x4CEEFCu;
        goto label_4ceefc;
    }
    ctx->pc = 0x4CEEF4u;
    {
        const bool branch_taken_0x4ceef4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ceef4) {
            ctx->pc = 0x4CEF18u;
            goto label_4cef18;
        }
    }
    ctx->pc = 0x4CEEFCu;
label_4ceefc:
    // 0x4ceefc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4cef00:
    if (ctx->pc == 0x4CEF00u) {
        ctx->pc = 0x4CEF04u;
        goto label_4cef04;
    }
    ctx->pc = 0x4CEEFCu;
    {
        const bool branch_taken_0x4ceefc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ceefc) {
            ctx->pc = 0x4CEF18u;
            goto label_4cef18;
        }
    }
    ctx->pc = 0x4CEF04u;
label_4cef04:
    // 0x4cef04: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x4cef04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_4cef08:
    // 0x4cef08: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4cef0c:
    if (ctx->pc == 0x4CEF0Cu) {
        ctx->pc = 0x4CEF10u;
        goto label_4cef10;
    }
    ctx->pc = 0x4CEF08u;
    {
        const bool branch_taken_0x4cef08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cef08) {
            ctx->pc = 0x4CEF18u;
            goto label_4cef18;
        }
    }
    ctx->pc = 0x4CEF10u;
label_4cef10:
    // 0x4cef10: 0xc0400a8  jal         func_1002A0
label_4cef14:
    if (ctx->pc == 0x4CEF14u) {
        ctx->pc = 0x4CEF18u;
        goto label_4cef18;
    }
    ctx->pc = 0x4CEF10u;
    SET_GPR_U32(ctx, 31, 0x4CEF18u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CEF18u; }
        if (ctx->pc != 0x4CEF18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CEF18u; }
        if (ctx->pc != 0x4CEF18u) { return; }
    }
    ctx->pc = 0x4CEF18u;
label_4cef18:
    // 0x4cef18: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x4cef18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_4cef1c:
    // 0x4cef1c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4cef20:
    if (ctx->pc == 0x4CEF20u) {
        ctx->pc = 0x4CEF20u;
            // 0x4cef20: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x4CEF24u;
        goto label_4cef24;
    }
    ctx->pc = 0x4CEF1Cu;
    {
        const bool branch_taken_0x4cef1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cef1c) {
            ctx->pc = 0x4CEF20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CEF1Cu;
            // 0x4cef20: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CEF4Cu;
            goto label_4cef4c;
        }
    }
    ctx->pc = 0x4CEF24u;
label_4cef24:
    // 0x4cef24: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4cef28:
    if (ctx->pc == 0x4CEF28u) {
        ctx->pc = 0x4CEF2Cu;
        goto label_4cef2c;
    }
    ctx->pc = 0x4CEF24u;
    {
        const bool branch_taken_0x4cef24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cef24) {
            ctx->pc = 0x4CEF48u;
            goto label_4cef48;
        }
    }
    ctx->pc = 0x4CEF2Cu;
label_4cef2c:
    // 0x4cef2c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4cef30:
    if (ctx->pc == 0x4CEF30u) {
        ctx->pc = 0x4CEF34u;
        goto label_4cef34;
    }
    ctx->pc = 0x4CEF2Cu;
    {
        const bool branch_taken_0x4cef2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cef2c) {
            ctx->pc = 0x4CEF48u;
            goto label_4cef48;
        }
    }
    ctx->pc = 0x4CEF34u;
label_4cef34:
    // 0x4cef34: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x4cef34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_4cef38:
    // 0x4cef38: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4cef3c:
    if (ctx->pc == 0x4CEF3Cu) {
        ctx->pc = 0x4CEF40u;
        goto label_4cef40;
    }
    ctx->pc = 0x4CEF38u;
    {
        const bool branch_taken_0x4cef38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cef38) {
            ctx->pc = 0x4CEF48u;
            goto label_4cef48;
        }
    }
    ctx->pc = 0x4CEF40u;
label_4cef40:
    // 0x4cef40: 0xc0400a8  jal         func_1002A0
label_4cef44:
    if (ctx->pc == 0x4CEF44u) {
        ctx->pc = 0x4CEF48u;
        goto label_4cef48;
    }
    ctx->pc = 0x4CEF40u;
    SET_GPR_U32(ctx, 31, 0x4CEF48u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CEF48u; }
        if (ctx->pc != 0x4CEF48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CEF48u; }
        if (ctx->pc != 0x4CEF48u) { return; }
    }
    ctx->pc = 0x4CEF48u;
label_4cef48:
    // 0x4cef48: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x4cef48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_4cef4c:
    // 0x4cef4c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4cef50:
    if (ctx->pc == 0x4CEF50u) {
        ctx->pc = 0x4CEF54u;
        goto label_4cef54;
    }
    ctx->pc = 0x4CEF4Cu;
    {
        const bool branch_taken_0x4cef4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cef4c) {
            ctx->pc = 0x4CEF68u;
            goto label_4cef68;
        }
    }
    ctx->pc = 0x4CEF54u;
label_4cef54:
    // 0x4cef54: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4cef54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4cef58:
    // 0x4cef58: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4cef58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4cef5c:
    // 0x4cef5c: 0x24631dd8  addiu       $v1, $v1, 0x1DD8
    ctx->pc = 0x4cef5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7640));
label_4cef60:
    // 0x4cef60: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x4cef60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_4cef64:
    // 0x4cef64: 0xac40aa20  sw          $zero, -0x55E0($v0)
    ctx->pc = 0x4cef64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945312), GPR_U32(ctx, 0));
label_4cef68:
    // 0x4cef68: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_4cef6c:
    if (ctx->pc == 0x4CEF6Cu) {
        ctx->pc = 0x4CEF6Cu;
            // 0x4cef6c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4CEF70u;
        goto label_4cef70;
    }
    ctx->pc = 0x4CEF68u;
    {
        const bool branch_taken_0x4cef68 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cef68) {
            ctx->pc = 0x4CEF6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CEF68u;
            // 0x4cef6c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CEFC4u;
            goto label_4cefc4;
        }
    }
    ctx->pc = 0x4CEF70u;
label_4cef70:
    // 0x4cef70: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4cef70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4cef74:
    // 0x4cef74: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4cef74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_4cef78:
    // 0x4cef78: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4cef78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4cef7c:
    // 0x4cef7c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x4cef7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_4cef80:
    // 0x4cef80: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4cef84:
    if (ctx->pc == 0x4CEF84u) {
        ctx->pc = 0x4CEF84u;
            // 0x4cef84: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x4CEF88u;
        goto label_4cef88;
    }
    ctx->pc = 0x4CEF80u;
    {
        const bool branch_taken_0x4cef80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cef80) {
            ctx->pc = 0x4CEF84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CEF80u;
            // 0x4cef84: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CEF9Cu;
            goto label_4cef9c;
        }
    }
    ctx->pc = 0x4CEF88u;
label_4cef88:
    // 0x4cef88: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4cef88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4cef8c:
    // 0x4cef8c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4cef8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4cef90:
    // 0x4cef90: 0x320f809  jalr        $t9
label_4cef94:
    if (ctx->pc == 0x4CEF94u) {
        ctx->pc = 0x4CEF94u;
            // 0x4cef94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4CEF98u;
        goto label_4cef98;
    }
    ctx->pc = 0x4CEF90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4CEF98u);
        ctx->pc = 0x4CEF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CEF90u;
            // 0x4cef94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4CEF98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4CEF98u; }
            if (ctx->pc != 0x4CEF98u) { return; }
        }
        }
    }
    ctx->pc = 0x4CEF98u;
label_4cef98:
    // 0x4cef98: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x4cef98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_4cef9c:
    // 0x4cef9c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4cefa0:
    if (ctx->pc == 0x4CEFA0u) {
        ctx->pc = 0x4CEFA0u;
            // 0x4cefa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CEFA4u;
        goto label_4cefa4;
    }
    ctx->pc = 0x4CEF9Cu;
    {
        const bool branch_taken_0x4cef9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cef9c) {
            ctx->pc = 0x4CEFA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CEF9Cu;
            // 0x4cefa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CEFB8u;
            goto label_4cefb8;
        }
    }
    ctx->pc = 0x4CEFA4u;
label_4cefa4:
    // 0x4cefa4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4cefa4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4cefa8:
    // 0x4cefa8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4cefa8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4cefac:
    // 0x4cefac: 0x320f809  jalr        $t9
label_4cefb0:
    if (ctx->pc == 0x4CEFB0u) {
        ctx->pc = 0x4CEFB0u;
            // 0x4cefb0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4CEFB4u;
        goto label_4cefb4;
    }
    ctx->pc = 0x4CEFACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4CEFB4u);
        ctx->pc = 0x4CEFB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CEFACu;
            // 0x4cefb0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4CEFB4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4CEFB4u; }
            if (ctx->pc != 0x4CEFB4u) { return; }
        }
        }
    }
    ctx->pc = 0x4CEFB4u;
label_4cefb4:
    // 0x4cefb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4cefb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4cefb8:
    // 0x4cefb8: 0xc075bf8  jal         func_1D6FE0
label_4cefbc:
    if (ctx->pc == 0x4CEFBCu) {
        ctx->pc = 0x4CEFBCu;
            // 0x4cefbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CEFC0u;
        goto label_4cefc0;
    }
    ctx->pc = 0x4CEFB8u;
    SET_GPR_U32(ctx, 31, 0x4CEFC0u);
    ctx->pc = 0x4CEFBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CEFB8u;
            // 0x4cefbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CEFC0u; }
        if (ctx->pc != 0x4CEFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CEFC0u; }
        if (ctx->pc != 0x4CEFC0u) { return; }
    }
    ctx->pc = 0x4CEFC0u;
label_4cefc0:
    // 0x4cefc0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4cefc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4cefc4:
    // 0x4cefc4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4cefc4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4cefc8:
    // 0x4cefc8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4cefcc:
    if (ctx->pc == 0x4CEFCCu) {
        ctx->pc = 0x4CEFCCu;
            // 0x4cefcc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CEFD0u;
        goto label_4cefd0;
    }
    ctx->pc = 0x4CEFC8u;
    {
        const bool branch_taken_0x4cefc8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4cefc8) {
            ctx->pc = 0x4CEFCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CEFC8u;
            // 0x4cefcc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CEFDCu;
            goto label_4cefdc;
        }
    }
    ctx->pc = 0x4CEFD0u;
label_4cefd0:
    // 0x4cefd0: 0xc0400a8  jal         func_1002A0
label_4cefd4:
    if (ctx->pc == 0x4CEFD4u) {
        ctx->pc = 0x4CEFD4u;
            // 0x4cefd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CEFD8u;
        goto label_4cefd8;
    }
    ctx->pc = 0x4CEFD0u;
    SET_GPR_U32(ctx, 31, 0x4CEFD8u);
    ctx->pc = 0x4CEFD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CEFD0u;
            // 0x4cefd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CEFD8u; }
        if (ctx->pc != 0x4CEFD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CEFD8u; }
        if (ctx->pc != 0x4CEFD8u) { return; }
    }
    ctx->pc = 0x4CEFD8u;
label_4cefd8:
    // 0x4cefd8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4cefd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4cefdc:
    // 0x4cefdc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4cefdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4cefe0:
    // 0x4cefe0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4cefe0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4cefe4:
    // 0x4cefe4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4cefe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4cefe8:
    // 0x4cefe8: 0x3e00008  jr          $ra
label_4cefec:
    if (ctx->pc == 0x4CEFECu) {
        ctx->pc = 0x4CEFECu;
            // 0x4cefec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4CEFF0u;
        goto label_4ceff0;
    }
    ctx->pc = 0x4CEFE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CEFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CEFE8u;
            // 0x4cefec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CEFF0u;
label_4ceff0:
    // 0x4ceff0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ceff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4ceff4:
    // 0x4ceff4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4ceff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4ceff8:
    // 0x4ceff8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ceff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4ceffc:
    // 0x4ceffc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ceffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4cf000:
    // 0x4cf000: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4cf000u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4cf004:
    // 0x4cf004: 0x12200031  beqz        $s1, . + 4 + (0x31 << 2)
label_4cf008:
    if (ctx->pc == 0x4CF008u) {
        ctx->pc = 0x4CF008u;
            // 0x4cf008: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CF00Cu;
        goto label_4cf00c;
    }
    ctx->pc = 0x4CF004u;
    {
        const bool branch_taken_0x4cf004 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CF008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF004u;
            // 0x4cf008: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cf004) {
            ctx->pc = 0x4CF0CCu;
            goto label_4cf0cc;
        }
    }
    ctx->pc = 0x4CF00Cu;
label_4cf00c:
    // 0x4cf00c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4cf00cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4cf010:
    // 0x4cf010: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4cf010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4cf014:
    // 0x4cf014: 0x24631e90  addiu       $v1, $v1, 0x1E90
    ctx->pc = 0x4cf014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7824));
label_4cf018:
    // 0x4cf018: 0x24421ed0  addiu       $v0, $v0, 0x1ED0
    ctx->pc = 0x4cf018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7888));
label_4cf01c:
    // 0x4cf01c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4cf01cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4cf020:
    // 0x4cf020: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x4cf020u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_4cf024:
    // 0x4cf024: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4cf024u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4cf028:
    // 0x4cf028: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4cf028u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4cf02c:
    // 0x4cf02c: 0x320f809  jalr        $t9
label_4cf030:
    if (ctx->pc == 0x4CF030u) {
        ctx->pc = 0x4CF034u;
        goto label_4cf034;
    }
    ctx->pc = 0x4CF02Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4CF034u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4CF034u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4CF034u; }
            if (ctx->pc != 0x4CF034u) { return; }
        }
        }
    }
    ctx->pc = 0x4CF034u;
label_4cf034:
    // 0x4cf034: 0x52200020  beql        $s1, $zero, . + 4 + (0x20 << 2)
label_4cf038:
    if (ctx->pc == 0x4CF038u) {
        ctx->pc = 0x4CF038u;
            // 0x4cf038: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4CF03Cu;
        goto label_4cf03c;
    }
    ctx->pc = 0x4CF034u;
    {
        const bool branch_taken_0x4cf034 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cf034) {
            ctx->pc = 0x4CF038u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF034u;
            // 0x4cf038: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CF0B8u;
            goto label_4cf0b8;
        }
    }
    ctx->pc = 0x4CF03Cu;
label_4cf03c:
    // 0x4cf03c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4cf03cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4cf040:
    // 0x4cf040: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4cf040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4cf044:
    // 0x4cf044: 0x24422670  addiu       $v0, $v0, 0x2670
    ctx->pc = 0x4cf044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9840));
label_4cf048:
    // 0x4cf048: 0x246326b0  addiu       $v1, $v1, 0x26B0
    ctx->pc = 0x4cf048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9904));
label_4cf04c:
    // 0x4cf04c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4cf04cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4cf050:
    // 0x4cf050: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x4cf050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_4cf054:
    // 0x4cf054: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_4cf058:
    if (ctx->pc == 0x4CF058u) {
        ctx->pc = 0x4CF058u;
            // 0x4cf058: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x4CF05Cu;
        goto label_4cf05c;
    }
    ctx->pc = 0x4CF054u;
    {
        const bool branch_taken_0x4cf054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CF058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF054u;
            // 0x4cf058: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cf054) {
            ctx->pc = 0x4CF090u;
            goto label_4cf090;
        }
    }
    ctx->pc = 0x4CF05Cu;
label_4cf05c:
    // 0x4cf05c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4cf05cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4cf060:
    // 0x4cf060: 0x24422660  addiu       $v0, $v0, 0x2660
    ctx->pc = 0x4cf060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9824));
label_4cf064:
    // 0x4cf064: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x4cf064u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_4cf068:
    // 0x4cf068: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x4cf068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_4cf06c:
    // 0x4cf06c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_4cf070:
    if (ctx->pc == 0x4CF070u) {
        ctx->pc = 0x4CF074u;
        goto label_4cf074;
    }
    ctx->pc = 0x4CF06Cu;
    {
        const bool branch_taken_0x4cf06c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cf06c) {
            ctx->pc = 0x4CF090u;
            goto label_4cf090;
        }
    }
    ctx->pc = 0x4CF074u;
label_4cf074:
    // 0x4cf074: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4cf078:
    if (ctx->pc == 0x4CF078u) {
        ctx->pc = 0x4CF078u;
            // 0x4cf078: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x4CF07Cu;
        goto label_4cf07c;
    }
    ctx->pc = 0x4CF074u;
    {
        const bool branch_taken_0x4cf074 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cf074) {
            ctx->pc = 0x4CF078u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF074u;
            // 0x4cf078: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CF090u;
            goto label_4cf090;
        }
    }
    ctx->pc = 0x4CF07Cu;
label_4cf07c:
    // 0x4cf07c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4cf07cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4cf080:
    // 0x4cf080: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4cf080u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4cf084:
    // 0x4cf084: 0x320f809  jalr        $t9
label_4cf088:
    if (ctx->pc == 0x4CF088u) {
        ctx->pc = 0x4CF088u;
            // 0x4cf088: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4CF08Cu;
        goto label_4cf08c;
    }
    ctx->pc = 0x4CF084u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4CF08Cu);
        ctx->pc = 0x4CF088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF084u;
            // 0x4cf088: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4CF08Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4CF08Cu; }
            if (ctx->pc != 0x4CF08Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4CF08Cu;
label_4cf08c:
    // 0x4cf08c: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x4cf08cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_4cf090:
    // 0x4cf090: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_4cf094:
    if (ctx->pc == 0x4CF094u) {
        ctx->pc = 0x4CF098u;
        goto label_4cf098;
    }
    ctx->pc = 0x4CF090u;
    {
        const bool branch_taken_0x4cf090 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cf090) {
            ctx->pc = 0x4CF0B4u;
            goto label_4cf0b4;
        }
    }
    ctx->pc = 0x4CF098u;
label_4cf098:
    // 0x4cf098: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4cf098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4cf09c:
    // 0x4cf09c: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x4cf09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_4cf0a0:
    // 0x4cf0a0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_4cf0a4:
    if (ctx->pc == 0x4CF0A4u) {
        ctx->pc = 0x4CF0A4u;
            // 0x4cf0a4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4CF0A8u;
        goto label_4cf0a8;
    }
    ctx->pc = 0x4CF0A0u;
    {
        const bool branch_taken_0x4cf0a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CF0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF0A0u;
            // 0x4cf0a4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cf0a0) {
            ctx->pc = 0x4CF0B4u;
            goto label_4cf0b4;
        }
    }
    ctx->pc = 0x4CF0A8u;
label_4cf0a8:
    // 0x4cf0a8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4cf0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4cf0ac:
    // 0x4cf0ac: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x4cf0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_4cf0b0:
    // 0x4cf0b0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4cf0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4cf0b4:
    // 0x4cf0b4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4cf0b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4cf0b8:
    // 0x4cf0b8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4cf0b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4cf0bc:
    // 0x4cf0bc: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4cf0c0:
    if (ctx->pc == 0x4CF0C0u) {
        ctx->pc = 0x4CF0C0u;
            // 0x4cf0c0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CF0C4u;
        goto label_4cf0c4;
    }
    ctx->pc = 0x4CF0BCu;
    {
        const bool branch_taken_0x4cf0bc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4cf0bc) {
            ctx->pc = 0x4CF0C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF0BCu;
            // 0x4cf0c0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CF0D0u;
            goto label_4cf0d0;
        }
    }
    ctx->pc = 0x4CF0C4u;
label_4cf0c4:
    // 0x4cf0c4: 0xc0400a8  jal         func_1002A0
label_4cf0c8:
    if (ctx->pc == 0x4CF0C8u) {
        ctx->pc = 0x4CF0C8u;
            // 0x4cf0c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CF0CCu;
        goto label_4cf0cc;
    }
    ctx->pc = 0x4CF0C4u;
    SET_GPR_U32(ctx, 31, 0x4CF0CCu);
    ctx->pc = 0x4CF0C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF0C4u;
            // 0x4cf0c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CF0CCu; }
        if (ctx->pc != 0x4CF0CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CF0CCu; }
        if (ctx->pc != 0x4CF0CCu) { return; }
    }
    ctx->pc = 0x4CF0CCu;
label_4cf0cc:
    // 0x4cf0cc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4cf0ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4cf0d0:
    // 0x4cf0d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4cf0d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4cf0d4:
    // 0x4cf0d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4cf0d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4cf0d8:
    // 0x4cf0d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4cf0d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4cf0dc:
    // 0x4cf0dc: 0x3e00008  jr          $ra
label_4cf0e0:
    if (ctx->pc == 0x4CF0E0u) {
        ctx->pc = 0x4CF0E0u;
            // 0x4cf0e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4CF0E4u;
        goto label_4cf0e4;
    }
    ctx->pc = 0x4CF0DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CF0E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF0DCu;
            // 0x4cf0e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CF0E4u;
label_4cf0e4:
    // 0x4cf0e4: 0x0  nop
    ctx->pc = 0x4cf0e4u;
    // NOP
label_4cf0e8:
    // 0x4cf0e8: 0x0  nop
    ctx->pc = 0x4cf0e8u;
    // NOP
label_4cf0ec:
    // 0x4cf0ec: 0x0  nop
    ctx->pc = 0x4cf0ecu;
    // NOP
label_4cf0f0:
    // 0x4cf0f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x4cf0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_4cf0f4:
    // 0x4cf0f4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4cf0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4cf0f8:
    // 0x4cf0f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4cf0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4cf0fc:
    // 0x4cf0fc: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4cf0fcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4cf100:
    // 0x4cf100: 0x50a30013  beql        $a1, $v1, . + 4 + (0x13 << 2)
label_4cf104:
    if (ctx->pc == 0x4CF104u) {
        ctx->pc = 0x4CF104u;
            // 0x4cf104: 0x8c840070  lw          $a0, 0x70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
        ctx->pc = 0x4CF108u;
        goto label_4cf108;
    }
    ctx->pc = 0x4CF100u;
    {
        const bool branch_taken_0x4cf100 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4cf100) {
            ctx->pc = 0x4CF104u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF100u;
            // 0x4cf104: 0x8c840070  lw          $a0, 0x70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CF150u;
            goto label_4cf150;
        }
    }
    ctx->pc = 0x4CF108u;
label_4cf108:
    // 0x4cf108: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4cf108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4cf10c:
    // 0x4cf10c: 0x10a3001a  beq         $a1, $v1, . + 4 + (0x1A << 2)
label_4cf110:
    if (ctx->pc == 0x4CF110u) {
        ctx->pc = 0x4CF114u;
        goto label_4cf114;
    }
    ctx->pc = 0x4CF10Cu;
    {
        const bool branch_taken_0x4cf10c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4cf10c) {
            ctx->pc = 0x4CF178u;
            goto label_4cf178;
        }
    }
    ctx->pc = 0x4CF114u;
label_4cf114:
    // 0x4cf114: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4cf114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4cf118:
    // 0x4cf118: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_4cf11c:
    if (ctx->pc == 0x4CF11Cu) {
        ctx->pc = 0x4CF120u;
        goto label_4cf120;
    }
    ctx->pc = 0x4CF118u;
    {
        const bool branch_taken_0x4cf118 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4cf118) {
            ctx->pc = 0x4CF128u;
            goto label_4cf128;
        }
    }
    ctx->pc = 0x4CF120u;
label_4cf120:
    // 0x4cf120: 0x10000015  b           . + 4 + (0x15 << 2)
label_4cf124:
    if (ctx->pc == 0x4CF124u) {
        ctx->pc = 0x4CF128u;
        goto label_4cf128;
    }
    ctx->pc = 0x4CF120u;
    {
        const bool branch_taken_0x4cf120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cf120) {
            ctx->pc = 0x4CF178u;
            goto label_4cf178;
        }
    }
    ctx->pc = 0x4CF128u;
label_4cf128:
    // 0x4cf128: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4cf128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4cf12c:
    // 0x4cf12c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4cf12cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4cf130:
    // 0x4cf130: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4cf130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4cf134:
    // 0x4cf134: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x4cf134u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_4cf138:
    // 0x4cf138: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x4cf138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_4cf13c:
    // 0x4cf13c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4cf13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4cf140:
    // 0x4cf140: 0x320f809  jalr        $t9
label_4cf144:
    if (ctx->pc == 0x4CF144u) {
        ctx->pc = 0x4CF144u;
            // 0x4cf144: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x4CF148u;
        goto label_4cf148;
    }
    ctx->pc = 0x4CF140u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4CF148u);
        ctx->pc = 0x4CF144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF140u;
            // 0x4cf144: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4CF148u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4CF148u; }
            if (ctx->pc != 0x4CF148u) { return; }
        }
        }
    }
    ctx->pc = 0x4CF148u;
label_4cf148:
    // 0x4cf148: 0x1000000b  b           . + 4 + (0xB << 2)
label_4cf14c:
    if (ctx->pc == 0x4CF14Cu) {
        ctx->pc = 0x4CF150u;
        goto label_4cf150;
    }
    ctx->pc = 0x4CF148u;
    {
        const bool branch_taken_0x4cf148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cf148) {
            ctx->pc = 0x4CF178u;
            goto label_4cf178;
        }
    }
    ctx->pc = 0x4CF150u;
label_4cf150:
    // 0x4cf150: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_4cf154:
    if (ctx->pc == 0x4CF154u) {
        ctx->pc = 0x4CF158u;
        goto label_4cf158;
    }
    ctx->pc = 0x4CF150u;
    {
        const bool branch_taken_0x4cf150 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cf150) {
            ctx->pc = 0x4CF178u;
            goto label_4cf178;
        }
    }
    ctx->pc = 0x4CF158u;
label_4cf158:
    // 0x4cf158: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4cf158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4cf15c:
    // 0x4cf15c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4cf15cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_4cf160:
    // 0x4cf160: 0xa4182b  sltu        $v1, $a1, $a0
    ctx->pc = 0x4cf160u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4cf164:
    // 0x4cf164: 0x0  nop
    ctx->pc = 0x4cf164u;
    // NOP
label_4cf168:
    // 0x4cf168: 0x0  nop
    ctx->pc = 0x4cf168u;
    // NOP
label_4cf16c:
    // 0x4cf16c: 0x0  nop
    ctx->pc = 0x4cf16cu;
    // NOP
label_4cf170:
    // 0x4cf170: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_4cf174:
    if (ctx->pc == 0x4CF174u) {
        ctx->pc = 0x4CF178u;
        goto label_4cf178;
    }
    ctx->pc = 0x4CF170u;
    {
        const bool branch_taken_0x4cf170 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4cf170) {
            ctx->pc = 0x4CF15Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4cf15c;
        }
    }
    ctx->pc = 0x4CF178u;
label_4cf178:
    // 0x4cf178: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4cf178u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4cf17c:
    // 0x4cf17c: 0x3e00008  jr          $ra
label_4cf180:
    if (ctx->pc == 0x4CF180u) {
        ctx->pc = 0x4CF180u;
            // 0x4cf180: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x4CF184u;
        goto label_4cf184;
    }
    ctx->pc = 0x4CF17Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CF180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF17Cu;
            // 0x4cf180: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CF184u;
label_4cf184:
    // 0x4cf184: 0x0  nop
    ctx->pc = 0x4cf184u;
    // NOP
label_4cf188:
    // 0x4cf188: 0x0  nop
    ctx->pc = 0x4cf188u;
    // NOP
label_4cf18c:
    // 0x4cf18c: 0x0  nop
    ctx->pc = 0x4cf18cu;
    // NOP
label_4cf190:
    // 0x4cf190: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4cf190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4cf194:
    // 0x4cf194: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4cf194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4cf198:
    // 0x4cf198: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4cf198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4cf19c:
    // 0x4cf19c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4cf19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4cf1a0:
    // 0x4cf1a0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4cf1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4cf1a4:
    // 0x4cf1a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4cf1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4cf1a8:
    // 0x4cf1a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4cf1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4cf1ac:
    // 0x4cf1ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4cf1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4cf1b0:
    // 0x4cf1b0: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4cf1b0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4cf1b4:
    // 0x4cf1b4: 0x10a30018  beq         $a1, $v1, . + 4 + (0x18 << 2)
label_4cf1b8:
    if (ctx->pc == 0x4CF1B8u) {
        ctx->pc = 0x4CF1B8u;
            // 0x4cf1b8: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CF1BCu;
        goto label_4cf1bc;
    }
    ctx->pc = 0x4CF1B4u;
    {
        const bool branch_taken_0x4cf1b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4CF1B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF1B4u;
            // 0x4cf1b8: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cf1b4) {
            ctx->pc = 0x4CF218u;
            goto label_4cf218;
        }
    }
    ctx->pc = 0x4CF1BCu;
label_4cf1bc:
    // 0x4cf1bc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4cf1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4cf1c0:
    // 0x4cf1c0: 0x50a30012  beql        $a1, $v1, . + 4 + (0x12 << 2)
label_4cf1c4:
    if (ctx->pc == 0x4CF1C4u) {
        ctx->pc = 0x4CF1C4u;
            // 0x4cf1c4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4CF1C8u;
        goto label_4cf1c8;
    }
    ctx->pc = 0x4CF1C0u;
    {
        const bool branch_taken_0x4cf1c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4cf1c0) {
            ctx->pc = 0x4CF1C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF1C0u;
            // 0x4cf1c4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4CF20Cu;
            goto label_4cf20c;
        }
    }
    ctx->pc = 0x4CF1C8u;
label_4cf1c8:
    // 0x4cf1c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4cf1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4cf1cc:
    // 0x4cf1cc: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_4cf1d0:
    if (ctx->pc == 0x4CF1D0u) {
        ctx->pc = 0x4CF1D4u;
        goto label_4cf1d4;
    }
    ctx->pc = 0x4CF1CCu;
    {
        const bool branch_taken_0x4cf1cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4cf1cc) {
            ctx->pc = 0x4CF1DCu;
            goto label_4cf1dc;
        }
    }
    ctx->pc = 0x4CF1D4u;
label_4cf1d4:
    // 0x4cf1d4: 0x10000036  b           . + 4 + (0x36 << 2)
label_4cf1d8:
    if (ctx->pc == 0x4CF1D8u) {
        ctx->pc = 0x4CF1DCu;
        goto label_4cf1dc;
    }
    ctx->pc = 0x4CF1D4u;
    {
        const bool branch_taken_0x4cf1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cf1d4) {
            ctx->pc = 0x4CF2B0u;
            goto label_4cf2b0;
        }
    }
    ctx->pc = 0x4CF1DCu;
label_4cf1dc:
    // 0x4cf1dc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4cf1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4cf1e0:
    // 0x4cf1e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4cf1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4cf1e4:
    // 0x4cf1e4: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x4cf1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4cf1e8:
    // 0x4cf1e8: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x4cf1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_4cf1ec:
    // 0x4cf1ec: 0x10650030  beq         $v1, $a1, . + 4 + (0x30 << 2)
label_4cf1f0:
    if (ctx->pc == 0x4CF1F0u) {
        ctx->pc = 0x4CF1F4u;
        goto label_4cf1f4;
    }
    ctx->pc = 0x4CF1ECu;
    {
        const bool branch_taken_0x4cf1ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x4cf1ec) {
            ctx->pc = 0x4CF2B0u;
            goto label_4cf2b0;
        }
    }
    ctx->pc = 0x4CF1F4u;
label_4cf1f4:
    // 0x4cf1f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4cf1f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4cf1f8:
    // 0x4cf1f8: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x4cf1f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_4cf1fc:
    // 0x4cf1fc: 0x320f809  jalr        $t9
label_4cf200:
    if (ctx->pc == 0x4CF200u) {
        ctx->pc = 0x4CF204u;
        goto label_4cf204;
    }
    ctx->pc = 0x4CF1FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4CF204u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4CF204u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4CF204u; }
            if (ctx->pc != 0x4CF204u) { return; }
        }
        }
    }
    ctx->pc = 0x4CF204u;
label_4cf204:
    // 0x4cf204: 0x1000002a  b           . + 4 + (0x2A << 2)
label_4cf208:
    if (ctx->pc == 0x4CF208u) {
        ctx->pc = 0x4CF20Cu;
        goto label_4cf20c;
    }
    ctx->pc = 0x4CF204u;
    {
        const bool branch_taken_0x4cf204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cf204) {
            ctx->pc = 0x4CF2B0u;
            goto label_4cf2b0;
        }
    }
    ctx->pc = 0x4CF20Cu;
label_4cf20c:
    // 0x4cf20c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4cf20cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4cf210:
    // 0x4cf210: 0x320f809  jalr        $t9
label_4cf214:
    if (ctx->pc == 0x4CF214u) {
        ctx->pc = 0x4CF218u;
        goto label_4cf218;
    }
    ctx->pc = 0x4CF210u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4CF218u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4CF218u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4CF218u; }
            if (ctx->pc != 0x4CF218u) { return; }
        }
        }
    }
    ctx->pc = 0x4CF218u;
label_4cf218:
    // 0x4cf218: 0x8e910070  lw          $s1, 0x70($s4)
    ctx->pc = 0x4cf218u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_4cf21c:
    // 0x4cf21c: 0x12200024  beqz        $s1, . + 4 + (0x24 << 2)
label_4cf220:
    if (ctx->pc == 0x4CF220u) {
        ctx->pc = 0x4CF224u;
        goto label_4cf224;
    }
    ctx->pc = 0x4CF21Cu;
    {
        const bool branch_taken_0x4cf21c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cf21c) {
            ctx->pc = 0x4CF2B0u;
            goto label_4cf2b0;
        }
    }
    ctx->pc = 0x4CF224u;
label_4cf224:
    // 0x4cf224: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4cf224u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4cf228:
    // 0x4cf228: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4cf228u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4cf22c:
    // 0x4cf22c: 0x8e840074  lw          $a0, 0x74($s4)
    ctx->pc = 0x4cf22cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_4cf230:
    // 0x4cf230: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4cf230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4cf234:
    // 0x4cf234: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x4cf234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_4cf238:
    // 0x4cf238: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x4cf238u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4cf23c:
    // 0x4cf23c: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x4cf23cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_4cf240:
    // 0x4cf240: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
label_4cf244:
    if (ctx->pc == 0x4CF244u) {
        ctx->pc = 0x4CF248u;
        goto label_4cf248;
    }
    ctx->pc = 0x4CF240u;
    {
        const bool branch_taken_0x4cf240 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4cf240) {
            ctx->pc = 0x4CF260u;
            goto label_4cf260;
        }
    }
    ctx->pc = 0x4CF248u;
label_4cf248:
    // 0x4cf248: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4cf24c:
    if (ctx->pc == 0x4CF24Cu) {
        ctx->pc = 0x4CF250u;
        goto label_4cf250;
    }
    ctx->pc = 0x4CF248u;
    {
        const bool branch_taken_0x4cf248 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cf248) {
            ctx->pc = 0x4CF258u;
            goto label_4cf258;
        }
    }
    ctx->pc = 0x4CF250u;
label_4cf250:
    // 0x4cf250: 0x10000013  b           . + 4 + (0x13 << 2)
label_4cf254:
    if (ctx->pc == 0x4CF254u) {
        ctx->pc = 0x4CF258u;
        goto label_4cf258;
    }
    ctx->pc = 0x4CF250u;
    {
        const bool branch_taken_0x4cf250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cf250) {
            ctx->pc = 0x4CF2A0u;
            goto label_4cf2a0;
        }
    }
    ctx->pc = 0x4CF258u;
label_4cf258:
    // 0x4cf258: 0x10000011  b           . + 4 + (0x11 << 2)
label_4cf25c:
    if (ctx->pc == 0x4CF25Cu) {
        ctx->pc = 0x4CF25Cu;
            // 0x4cf25c: 0xae030064  sw          $v1, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
        ctx->pc = 0x4CF260u;
        goto label_4cf260;
    }
    ctx->pc = 0x4CF258u;
    {
        const bool branch_taken_0x4cf258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CF25Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF258u;
            // 0x4cf25c: 0xae030064  sw          $v1, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cf258) {
            ctx->pc = 0x4CF2A0u;
            goto label_4cf2a0;
        }
    }
    ctx->pc = 0x4CF260u;
label_4cf260:
    // 0x4cf260: 0x92030078  lbu         $v1, 0x78($s0)
    ctx->pc = 0x4cf260u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 120)));
label_4cf264:
    // 0x4cf264: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_4cf268:
    if (ctx->pc == 0x4CF268u) {
        ctx->pc = 0x4CF26Cu;
        goto label_4cf26c;
    }
    ctx->pc = 0x4CF264u;
    {
        const bool branch_taken_0x4cf264 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4cf264) {
            ctx->pc = 0x4CF2A0u;
            goto label_4cf2a0;
        }
    }
    ctx->pc = 0x4CF26Cu;
label_4cf26c:
    // 0x4cf26c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4cf26cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4cf270:
    // 0x4cf270: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4cf270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4cf274:
    // 0x4cf274: 0xc6010074  lwc1        $f1, 0x74($s0)
    ctx->pc = 0x4cf274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4cf278:
    // 0x4cf278: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4cf278u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4cf27c:
    // 0x4cf27c: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x4cf27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4cf280:
    // 0x4cf280: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x4cf280u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_4cf284:
    // 0x4cf284: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4cf284u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4cf288:
    // 0x4cf288: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_4cf28c:
    if (ctx->pc == 0x4CF28Cu) {
        ctx->pc = 0x4CF28Cu;
            // 0x4cf28c: 0xe6010074  swc1        $f1, 0x74($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
        ctx->pc = 0x4CF290u;
        goto label_4cf290;
    }
    ctx->pc = 0x4CF288u;
    {
        const bool branch_taken_0x4cf288 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4CF28Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF288u;
            // 0x4cf28c: 0xe6010074  swc1        $f1, 0x74($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cf288) {
            ctx->pc = 0x4CF2A0u;
            goto label_4cf2a0;
        }
    }
    ctx->pc = 0x4CF290u;
label_4cf290:
    // 0x4cf290: 0xc072a56  jal         func_1CA958
label_4cf294:
    if (ctx->pc == 0x4CF294u) {
        ctx->pc = 0x4CF294u;
            // 0x4cf294: 0x92040068  lbu         $a0, 0x68($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 104)));
        ctx->pc = 0x4CF298u;
        goto label_4cf298;
    }
    ctx->pc = 0x4CF290u;
    SET_GPR_U32(ctx, 31, 0x4CF298u);
    ctx->pc = 0x4CF294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF290u;
            // 0x4cf294: 0x92040068  lbu         $a0, 0x68($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 104)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA958u;
    if (runtime->hasFunction(0x1CA958u)) {
        auto targetFn = runtime->lookupFunction(0x1CA958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CF298u; }
        if (ctx->pc != 0x4CF298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA958_0x1ca958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4CF298u; }
        if (ctx->pc != 0x4CF298u) { return; }
    }
    ctx->pc = 0x4CF298u;
label_4cf298:
    // 0x4cf298: 0xa2000078  sb          $zero, 0x78($s0)
    ctx->pc = 0x4cf298u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 120), (uint8_t)GPR_U32(ctx, 0));
label_4cf29c:
    // 0x4cf29c: 0x0  nop
    ctx->pc = 0x4cf29cu;
    // NOP
label_4cf2a0:
    // 0x4cf2a0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4cf2a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4cf2a4:
    // 0x4cf2a4: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x4cf2a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4cf2a8:
    // 0x4cf2a8: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
label_4cf2ac:
    if (ctx->pc == 0x4CF2ACu) {
        ctx->pc = 0x4CF2ACu;
            // 0x4cf2ac: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4CF2B0u;
        goto label_4cf2b0;
    }
    ctx->pc = 0x4CF2A8u;
    {
        const bool branch_taken_0x4cf2a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CF2ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF2A8u;
            // 0x4cf2ac: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cf2a8) {
            ctx->pc = 0x4CF22Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4cf22c;
        }
    }
    ctx->pc = 0x4CF2B0u;
label_4cf2b0:
    // 0x4cf2b0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4cf2b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4cf2b4:
    // 0x4cf2b4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4cf2b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4cf2b8:
    // 0x4cf2b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4cf2b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4cf2bc:
    // 0x4cf2bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4cf2bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4cf2c0:
    // 0x4cf2c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4cf2c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4cf2c4:
    // 0x4cf2c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4cf2c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4cf2c8:
    // 0x4cf2c8: 0x3e00008  jr          $ra
label_4cf2cc:
    if (ctx->pc == 0x4CF2CCu) {
        ctx->pc = 0x4CF2CCu;
            // 0x4cf2cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4CF2D0u;
        goto label_4cf2d0;
    }
    ctx->pc = 0x4CF2C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CF2CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF2C8u;
            // 0x4cf2cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CF2D0u;
label_4cf2d0:
    // 0x4cf2d0: 0x8c860070  lw          $a2, 0x70($a0)
    ctx->pc = 0x4cf2d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4cf2d4:
    // 0x4cf2d4: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
label_4cf2d8:
    if (ctx->pc == 0x4CF2D8u) {
        ctx->pc = 0x4CF2D8u;
            // 0x4cf2d8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4CF2DCu;
        goto label_4cf2dc;
    }
    ctx->pc = 0x4CF2D4u;
    {
        const bool branch_taken_0x4cf2d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4CF2D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF2D4u;
            // 0x4cf2d8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cf2d4) {
            ctx->pc = 0x4CF320u;
            goto label_4cf320;
        }
    }
    ctx->pc = 0x4CF2DCu;
label_4cf2dc:
    // 0x4cf2dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4cf2dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4cf2e0:
    // 0x4cf2e0: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x4cf2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_4cf2e4:
    // 0x4cf2e4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x4cf2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_4cf2e8:
    // 0x4cf2e8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x4cf2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4cf2ec:
    // 0x4cf2ec: 0x8ca30064  lw          $v1, 0x64($a1)
    ctx->pc = 0x4cf2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
label_4cf2f0:
    // 0x4cf2f0: 0x18600007  blez        $v1, . + 4 + (0x7 << 2)
label_4cf2f4:
    if (ctx->pc == 0x4CF2F4u) {
        ctx->pc = 0x4CF2F8u;
        goto label_4cf2f8;
    }
    ctx->pc = 0x4CF2F0u;
    {
        const bool branch_taken_0x4cf2f0 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x4cf2f0) {
            ctx->pc = 0x4CF310u;
            goto label_4cf310;
        }
    }
    ctx->pc = 0x4CF2F8u;
label_4cf2f8:
    // 0x4cf2f8: 0xaca0006c  sw          $zero, 0x6C($a1)
    ctx->pc = 0x4cf2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 108), GPR_U32(ctx, 0));
label_4cf2fc:
    // 0x4cf2fc: 0xaca00068  sw          $zero, 0x68($a1)
    ctx->pc = 0x4cf2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 104), GPR_U32(ctx, 0));
label_4cf300:
    // 0x4cf300: 0xaca00074  sw          $zero, 0x74($a1)
    ctx->pc = 0x4cf300u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 116), GPR_U32(ctx, 0));
label_4cf304:
    // 0x4cf304: 0xaca00064  sw          $zero, 0x64($a1)
    ctx->pc = 0x4cf304u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 0));
label_4cf308:
    // 0x4cf308: 0xa0a00078  sb          $zero, 0x78($a1)
    ctx->pc = 0x4cf308u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 120), (uint8_t)GPR_U32(ctx, 0));
label_4cf30c:
    // 0x4cf30c: 0x0  nop
    ctx->pc = 0x4cf30cu;
    // NOP
label_4cf310:
    // 0x4cf310: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x4cf310u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_4cf314:
    // 0x4cf314: 0x106182b  sltu        $v1, $t0, $a2
    ctx->pc = 0x4cf314u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_4cf318:
    // 0x4cf318: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_4cf31c:
    if (ctx->pc == 0x4CF31Cu) {
        ctx->pc = 0x4CF31Cu;
            // 0x4cf31c: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->pc = 0x4CF320u;
        goto label_4cf320;
    }
    ctx->pc = 0x4CF318u;
    {
        const bool branch_taken_0x4cf318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4CF31Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CF318u;
            // 0x4cf31c: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4cf318) {
            ctx->pc = 0x4CF2E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4cf2e0;
        }
    }
    ctx->pc = 0x4CF320u;
label_4cf320:
    // 0x4cf320: 0x3e00008  jr          $ra
label_4cf324:
    if (ctx->pc == 0x4CF324u) {
        ctx->pc = 0x4CF328u;
        goto label_4cf328;
    }
    ctx->pc = 0x4CF320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CF328u;
label_4cf328:
    // 0x4cf328: 0x0  nop
    ctx->pc = 0x4cf328u;
    // NOP
label_4cf32c:
    // 0x4cf32c: 0x0  nop
    ctx->pc = 0x4cf32cu;
    // NOP
}
