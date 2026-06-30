#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0040CE50
// Address: 0x40ce50 - 0x40d390
void sub_0040CE50_0x40ce50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040CE50_0x40ce50");
#endif

    switch (ctx->pc) {
        case 0x40ce50u: goto label_40ce50;
        case 0x40ce54u: goto label_40ce54;
        case 0x40ce58u: goto label_40ce58;
        case 0x40ce5cu: goto label_40ce5c;
        case 0x40ce60u: goto label_40ce60;
        case 0x40ce64u: goto label_40ce64;
        case 0x40ce68u: goto label_40ce68;
        case 0x40ce6cu: goto label_40ce6c;
        case 0x40ce70u: goto label_40ce70;
        case 0x40ce74u: goto label_40ce74;
        case 0x40ce78u: goto label_40ce78;
        case 0x40ce7cu: goto label_40ce7c;
        case 0x40ce80u: goto label_40ce80;
        case 0x40ce84u: goto label_40ce84;
        case 0x40ce88u: goto label_40ce88;
        case 0x40ce8cu: goto label_40ce8c;
        case 0x40ce90u: goto label_40ce90;
        case 0x40ce94u: goto label_40ce94;
        case 0x40ce98u: goto label_40ce98;
        case 0x40ce9cu: goto label_40ce9c;
        case 0x40cea0u: goto label_40cea0;
        case 0x40cea4u: goto label_40cea4;
        case 0x40cea8u: goto label_40cea8;
        case 0x40ceacu: goto label_40ceac;
        case 0x40ceb0u: goto label_40ceb0;
        case 0x40ceb4u: goto label_40ceb4;
        case 0x40ceb8u: goto label_40ceb8;
        case 0x40cebcu: goto label_40cebc;
        case 0x40cec0u: goto label_40cec0;
        case 0x40cec4u: goto label_40cec4;
        case 0x40cec8u: goto label_40cec8;
        case 0x40ceccu: goto label_40cecc;
        case 0x40ced0u: goto label_40ced0;
        case 0x40ced4u: goto label_40ced4;
        case 0x40ced8u: goto label_40ced8;
        case 0x40cedcu: goto label_40cedc;
        case 0x40cee0u: goto label_40cee0;
        case 0x40cee4u: goto label_40cee4;
        case 0x40cee8u: goto label_40cee8;
        case 0x40ceecu: goto label_40ceec;
        case 0x40cef0u: goto label_40cef0;
        case 0x40cef4u: goto label_40cef4;
        case 0x40cef8u: goto label_40cef8;
        case 0x40cefcu: goto label_40cefc;
        case 0x40cf00u: goto label_40cf00;
        case 0x40cf04u: goto label_40cf04;
        case 0x40cf08u: goto label_40cf08;
        case 0x40cf0cu: goto label_40cf0c;
        case 0x40cf10u: goto label_40cf10;
        case 0x40cf14u: goto label_40cf14;
        case 0x40cf18u: goto label_40cf18;
        case 0x40cf1cu: goto label_40cf1c;
        case 0x40cf20u: goto label_40cf20;
        case 0x40cf24u: goto label_40cf24;
        case 0x40cf28u: goto label_40cf28;
        case 0x40cf2cu: goto label_40cf2c;
        case 0x40cf30u: goto label_40cf30;
        case 0x40cf34u: goto label_40cf34;
        case 0x40cf38u: goto label_40cf38;
        case 0x40cf3cu: goto label_40cf3c;
        case 0x40cf40u: goto label_40cf40;
        case 0x40cf44u: goto label_40cf44;
        case 0x40cf48u: goto label_40cf48;
        case 0x40cf4cu: goto label_40cf4c;
        case 0x40cf50u: goto label_40cf50;
        case 0x40cf54u: goto label_40cf54;
        case 0x40cf58u: goto label_40cf58;
        case 0x40cf5cu: goto label_40cf5c;
        case 0x40cf60u: goto label_40cf60;
        case 0x40cf64u: goto label_40cf64;
        case 0x40cf68u: goto label_40cf68;
        case 0x40cf6cu: goto label_40cf6c;
        case 0x40cf70u: goto label_40cf70;
        case 0x40cf74u: goto label_40cf74;
        case 0x40cf78u: goto label_40cf78;
        case 0x40cf7cu: goto label_40cf7c;
        case 0x40cf80u: goto label_40cf80;
        case 0x40cf84u: goto label_40cf84;
        case 0x40cf88u: goto label_40cf88;
        case 0x40cf8cu: goto label_40cf8c;
        case 0x40cf90u: goto label_40cf90;
        case 0x40cf94u: goto label_40cf94;
        case 0x40cf98u: goto label_40cf98;
        case 0x40cf9cu: goto label_40cf9c;
        case 0x40cfa0u: goto label_40cfa0;
        case 0x40cfa4u: goto label_40cfa4;
        case 0x40cfa8u: goto label_40cfa8;
        case 0x40cfacu: goto label_40cfac;
        case 0x40cfb0u: goto label_40cfb0;
        case 0x40cfb4u: goto label_40cfb4;
        case 0x40cfb8u: goto label_40cfb8;
        case 0x40cfbcu: goto label_40cfbc;
        case 0x40cfc0u: goto label_40cfc0;
        case 0x40cfc4u: goto label_40cfc4;
        case 0x40cfc8u: goto label_40cfc8;
        case 0x40cfccu: goto label_40cfcc;
        case 0x40cfd0u: goto label_40cfd0;
        case 0x40cfd4u: goto label_40cfd4;
        case 0x40cfd8u: goto label_40cfd8;
        case 0x40cfdcu: goto label_40cfdc;
        case 0x40cfe0u: goto label_40cfe0;
        case 0x40cfe4u: goto label_40cfe4;
        case 0x40cfe8u: goto label_40cfe8;
        case 0x40cfecu: goto label_40cfec;
        case 0x40cff0u: goto label_40cff0;
        case 0x40cff4u: goto label_40cff4;
        case 0x40cff8u: goto label_40cff8;
        case 0x40cffcu: goto label_40cffc;
        case 0x40d000u: goto label_40d000;
        case 0x40d004u: goto label_40d004;
        case 0x40d008u: goto label_40d008;
        case 0x40d00cu: goto label_40d00c;
        case 0x40d010u: goto label_40d010;
        case 0x40d014u: goto label_40d014;
        case 0x40d018u: goto label_40d018;
        case 0x40d01cu: goto label_40d01c;
        case 0x40d020u: goto label_40d020;
        case 0x40d024u: goto label_40d024;
        case 0x40d028u: goto label_40d028;
        case 0x40d02cu: goto label_40d02c;
        case 0x40d030u: goto label_40d030;
        case 0x40d034u: goto label_40d034;
        case 0x40d038u: goto label_40d038;
        case 0x40d03cu: goto label_40d03c;
        case 0x40d040u: goto label_40d040;
        case 0x40d044u: goto label_40d044;
        case 0x40d048u: goto label_40d048;
        case 0x40d04cu: goto label_40d04c;
        case 0x40d050u: goto label_40d050;
        case 0x40d054u: goto label_40d054;
        case 0x40d058u: goto label_40d058;
        case 0x40d05cu: goto label_40d05c;
        case 0x40d060u: goto label_40d060;
        case 0x40d064u: goto label_40d064;
        case 0x40d068u: goto label_40d068;
        case 0x40d06cu: goto label_40d06c;
        case 0x40d070u: goto label_40d070;
        case 0x40d074u: goto label_40d074;
        case 0x40d078u: goto label_40d078;
        case 0x40d07cu: goto label_40d07c;
        case 0x40d080u: goto label_40d080;
        case 0x40d084u: goto label_40d084;
        case 0x40d088u: goto label_40d088;
        case 0x40d08cu: goto label_40d08c;
        case 0x40d090u: goto label_40d090;
        case 0x40d094u: goto label_40d094;
        case 0x40d098u: goto label_40d098;
        case 0x40d09cu: goto label_40d09c;
        case 0x40d0a0u: goto label_40d0a0;
        case 0x40d0a4u: goto label_40d0a4;
        case 0x40d0a8u: goto label_40d0a8;
        case 0x40d0acu: goto label_40d0ac;
        case 0x40d0b0u: goto label_40d0b0;
        case 0x40d0b4u: goto label_40d0b4;
        case 0x40d0b8u: goto label_40d0b8;
        case 0x40d0bcu: goto label_40d0bc;
        case 0x40d0c0u: goto label_40d0c0;
        case 0x40d0c4u: goto label_40d0c4;
        case 0x40d0c8u: goto label_40d0c8;
        case 0x40d0ccu: goto label_40d0cc;
        case 0x40d0d0u: goto label_40d0d0;
        case 0x40d0d4u: goto label_40d0d4;
        case 0x40d0d8u: goto label_40d0d8;
        case 0x40d0dcu: goto label_40d0dc;
        case 0x40d0e0u: goto label_40d0e0;
        case 0x40d0e4u: goto label_40d0e4;
        case 0x40d0e8u: goto label_40d0e8;
        case 0x40d0ecu: goto label_40d0ec;
        case 0x40d0f0u: goto label_40d0f0;
        case 0x40d0f4u: goto label_40d0f4;
        case 0x40d0f8u: goto label_40d0f8;
        case 0x40d0fcu: goto label_40d0fc;
        case 0x40d100u: goto label_40d100;
        case 0x40d104u: goto label_40d104;
        case 0x40d108u: goto label_40d108;
        case 0x40d10cu: goto label_40d10c;
        case 0x40d110u: goto label_40d110;
        case 0x40d114u: goto label_40d114;
        case 0x40d118u: goto label_40d118;
        case 0x40d11cu: goto label_40d11c;
        case 0x40d120u: goto label_40d120;
        case 0x40d124u: goto label_40d124;
        case 0x40d128u: goto label_40d128;
        case 0x40d12cu: goto label_40d12c;
        case 0x40d130u: goto label_40d130;
        case 0x40d134u: goto label_40d134;
        case 0x40d138u: goto label_40d138;
        case 0x40d13cu: goto label_40d13c;
        case 0x40d140u: goto label_40d140;
        case 0x40d144u: goto label_40d144;
        case 0x40d148u: goto label_40d148;
        case 0x40d14cu: goto label_40d14c;
        case 0x40d150u: goto label_40d150;
        case 0x40d154u: goto label_40d154;
        case 0x40d158u: goto label_40d158;
        case 0x40d15cu: goto label_40d15c;
        case 0x40d160u: goto label_40d160;
        case 0x40d164u: goto label_40d164;
        case 0x40d168u: goto label_40d168;
        case 0x40d16cu: goto label_40d16c;
        case 0x40d170u: goto label_40d170;
        case 0x40d174u: goto label_40d174;
        case 0x40d178u: goto label_40d178;
        case 0x40d17cu: goto label_40d17c;
        case 0x40d180u: goto label_40d180;
        case 0x40d184u: goto label_40d184;
        case 0x40d188u: goto label_40d188;
        case 0x40d18cu: goto label_40d18c;
        case 0x40d190u: goto label_40d190;
        case 0x40d194u: goto label_40d194;
        case 0x40d198u: goto label_40d198;
        case 0x40d19cu: goto label_40d19c;
        case 0x40d1a0u: goto label_40d1a0;
        case 0x40d1a4u: goto label_40d1a4;
        case 0x40d1a8u: goto label_40d1a8;
        case 0x40d1acu: goto label_40d1ac;
        case 0x40d1b0u: goto label_40d1b0;
        case 0x40d1b4u: goto label_40d1b4;
        case 0x40d1b8u: goto label_40d1b8;
        case 0x40d1bcu: goto label_40d1bc;
        case 0x40d1c0u: goto label_40d1c0;
        case 0x40d1c4u: goto label_40d1c4;
        case 0x40d1c8u: goto label_40d1c8;
        case 0x40d1ccu: goto label_40d1cc;
        case 0x40d1d0u: goto label_40d1d0;
        case 0x40d1d4u: goto label_40d1d4;
        case 0x40d1d8u: goto label_40d1d8;
        case 0x40d1dcu: goto label_40d1dc;
        case 0x40d1e0u: goto label_40d1e0;
        case 0x40d1e4u: goto label_40d1e4;
        case 0x40d1e8u: goto label_40d1e8;
        case 0x40d1ecu: goto label_40d1ec;
        case 0x40d1f0u: goto label_40d1f0;
        case 0x40d1f4u: goto label_40d1f4;
        case 0x40d1f8u: goto label_40d1f8;
        case 0x40d1fcu: goto label_40d1fc;
        case 0x40d200u: goto label_40d200;
        case 0x40d204u: goto label_40d204;
        case 0x40d208u: goto label_40d208;
        case 0x40d20cu: goto label_40d20c;
        case 0x40d210u: goto label_40d210;
        case 0x40d214u: goto label_40d214;
        case 0x40d218u: goto label_40d218;
        case 0x40d21cu: goto label_40d21c;
        case 0x40d220u: goto label_40d220;
        case 0x40d224u: goto label_40d224;
        case 0x40d228u: goto label_40d228;
        case 0x40d22cu: goto label_40d22c;
        case 0x40d230u: goto label_40d230;
        case 0x40d234u: goto label_40d234;
        case 0x40d238u: goto label_40d238;
        case 0x40d23cu: goto label_40d23c;
        case 0x40d240u: goto label_40d240;
        case 0x40d244u: goto label_40d244;
        case 0x40d248u: goto label_40d248;
        case 0x40d24cu: goto label_40d24c;
        case 0x40d250u: goto label_40d250;
        case 0x40d254u: goto label_40d254;
        case 0x40d258u: goto label_40d258;
        case 0x40d25cu: goto label_40d25c;
        case 0x40d260u: goto label_40d260;
        case 0x40d264u: goto label_40d264;
        case 0x40d268u: goto label_40d268;
        case 0x40d26cu: goto label_40d26c;
        case 0x40d270u: goto label_40d270;
        case 0x40d274u: goto label_40d274;
        case 0x40d278u: goto label_40d278;
        case 0x40d27cu: goto label_40d27c;
        case 0x40d280u: goto label_40d280;
        case 0x40d284u: goto label_40d284;
        case 0x40d288u: goto label_40d288;
        case 0x40d28cu: goto label_40d28c;
        case 0x40d290u: goto label_40d290;
        case 0x40d294u: goto label_40d294;
        case 0x40d298u: goto label_40d298;
        case 0x40d29cu: goto label_40d29c;
        case 0x40d2a0u: goto label_40d2a0;
        case 0x40d2a4u: goto label_40d2a4;
        case 0x40d2a8u: goto label_40d2a8;
        case 0x40d2acu: goto label_40d2ac;
        case 0x40d2b0u: goto label_40d2b0;
        case 0x40d2b4u: goto label_40d2b4;
        case 0x40d2b8u: goto label_40d2b8;
        case 0x40d2bcu: goto label_40d2bc;
        case 0x40d2c0u: goto label_40d2c0;
        case 0x40d2c4u: goto label_40d2c4;
        case 0x40d2c8u: goto label_40d2c8;
        case 0x40d2ccu: goto label_40d2cc;
        case 0x40d2d0u: goto label_40d2d0;
        case 0x40d2d4u: goto label_40d2d4;
        case 0x40d2d8u: goto label_40d2d8;
        case 0x40d2dcu: goto label_40d2dc;
        case 0x40d2e0u: goto label_40d2e0;
        case 0x40d2e4u: goto label_40d2e4;
        case 0x40d2e8u: goto label_40d2e8;
        case 0x40d2ecu: goto label_40d2ec;
        case 0x40d2f0u: goto label_40d2f0;
        case 0x40d2f4u: goto label_40d2f4;
        case 0x40d2f8u: goto label_40d2f8;
        case 0x40d2fcu: goto label_40d2fc;
        case 0x40d300u: goto label_40d300;
        case 0x40d304u: goto label_40d304;
        case 0x40d308u: goto label_40d308;
        case 0x40d30cu: goto label_40d30c;
        case 0x40d310u: goto label_40d310;
        case 0x40d314u: goto label_40d314;
        case 0x40d318u: goto label_40d318;
        case 0x40d31cu: goto label_40d31c;
        case 0x40d320u: goto label_40d320;
        case 0x40d324u: goto label_40d324;
        case 0x40d328u: goto label_40d328;
        case 0x40d32cu: goto label_40d32c;
        case 0x40d330u: goto label_40d330;
        case 0x40d334u: goto label_40d334;
        case 0x40d338u: goto label_40d338;
        case 0x40d33cu: goto label_40d33c;
        case 0x40d340u: goto label_40d340;
        case 0x40d344u: goto label_40d344;
        case 0x40d348u: goto label_40d348;
        case 0x40d34cu: goto label_40d34c;
        case 0x40d350u: goto label_40d350;
        case 0x40d354u: goto label_40d354;
        case 0x40d358u: goto label_40d358;
        case 0x40d35cu: goto label_40d35c;
        case 0x40d360u: goto label_40d360;
        case 0x40d364u: goto label_40d364;
        case 0x40d368u: goto label_40d368;
        case 0x40d36cu: goto label_40d36c;
        case 0x40d370u: goto label_40d370;
        case 0x40d374u: goto label_40d374;
        case 0x40d378u: goto label_40d378;
        case 0x40d37cu: goto label_40d37c;
        case 0x40d380u: goto label_40d380;
        case 0x40d384u: goto label_40d384;
        case 0x40d388u: goto label_40d388;
        case 0x40d38cu: goto label_40d38c;
        default: break;
    }

    ctx->pc = 0x40ce50u;

label_40ce50:
    // 0x40ce50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x40ce50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_40ce54:
    // 0x40ce54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x40ce54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_40ce58:
    // 0x40ce58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x40ce58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_40ce5c:
    // 0x40ce5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x40ce5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_40ce60:
    // 0x40ce60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x40ce60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_40ce64:
    // 0x40ce64: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_40ce68:
    if (ctx->pc == 0x40CE68u) {
        ctx->pc = 0x40CE68u;
            // 0x40ce68: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40CE6Cu;
        goto label_40ce6c;
    }
    ctx->pc = 0x40CE64u;
    {
        const bool branch_taken_0x40ce64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x40CE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40CE64u;
            // 0x40ce68: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ce64) {
            ctx->pc = 0x40CF98u;
            goto label_40cf98;
        }
    }
    ctx->pc = 0x40CE6Cu;
label_40ce6c:
    // 0x40ce6c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x40ce6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_40ce70:
    // 0x40ce70: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x40ce70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_40ce74:
    // 0x40ce74: 0x2463adb0  addiu       $v1, $v1, -0x5250
    ctx->pc = 0x40ce74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946224));
label_40ce78:
    // 0x40ce78: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x40ce78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
label_40ce7c:
    // 0x40ce7c: 0x2442ade8  addiu       $v0, $v0, -0x5218
    ctx->pc = 0x40ce7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946280));
label_40ce80:
    // 0x40ce80: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x40ce80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_40ce84:
    // 0x40ce84: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x40ce84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_40ce88:
    // 0x40ce88: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x40ce88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_40ce8c:
    // 0x40ce8c: 0xc0407c0  jal         func_101F00
label_40ce90:
    if (ctx->pc == 0x40CE90u) {
        ctx->pc = 0x40CE90u;
            // 0x40ce90: 0x24a5cfb0  addiu       $a1, $a1, -0x3050 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954928));
        ctx->pc = 0x40CE94u;
        goto label_40ce94;
    }
    ctx->pc = 0x40CE8Cu;
    SET_GPR_U32(ctx, 31, 0x40CE94u);
    ctx->pc = 0x40CE90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40CE8Cu;
            // 0x40ce90: 0x24a5cfb0  addiu       $a1, $a1, -0x3050 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40CE94u; }
        if (ctx->pc != 0x40CE94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40CE94u; }
        if (ctx->pc != 0x40CE94u) { return; }
    }
    ctx->pc = 0x40CE94u;
label_40ce94:
    // 0x40ce94: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x40ce94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_40ce98:
    // 0x40ce98: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_40ce9c:
    if (ctx->pc == 0x40CE9Cu) {
        ctx->pc = 0x40CE9Cu;
            // 0x40ce9c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x40CEA0u;
        goto label_40cea0;
    }
    ctx->pc = 0x40CE98u;
    {
        const bool branch_taken_0x40ce98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x40ce98) {
            ctx->pc = 0x40CE9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40CE98u;
            // 0x40ce9c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40CEACu;
            goto label_40ceac;
        }
    }
    ctx->pc = 0x40CEA0u;
label_40cea0:
    // 0x40cea0: 0xc07507c  jal         func_1D41F0
label_40cea4:
    if (ctx->pc == 0x40CEA4u) {
        ctx->pc = 0x40CEA4u;
            // 0x40cea4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x40CEA8u;
        goto label_40cea8;
    }
    ctx->pc = 0x40CEA0u;
    SET_GPR_U32(ctx, 31, 0x40CEA8u);
    ctx->pc = 0x40CEA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40CEA0u;
            // 0x40cea4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40CEA8u; }
        if (ctx->pc != 0x40CEA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40CEA8u; }
        if (ctx->pc != 0x40CEA8u) { return; }
    }
    ctx->pc = 0x40CEA8u;
label_40cea8:
    // 0x40cea8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x40cea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_40ceac:
    // 0x40ceac: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_40ceb0:
    if (ctx->pc == 0x40CEB0u) {
        ctx->pc = 0x40CEB0u;
            // 0x40ceb0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x40CEB4u;
        goto label_40ceb4;
    }
    ctx->pc = 0x40CEACu;
    {
        const bool branch_taken_0x40ceac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x40ceac) {
            ctx->pc = 0x40CEB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40CEACu;
            // 0x40ceb0: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40CEDCu;
            goto label_40cedc;
        }
    }
    ctx->pc = 0x40CEB4u;
label_40ceb4:
    // 0x40ceb4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_40ceb8:
    if (ctx->pc == 0x40CEB8u) {
        ctx->pc = 0x40CEBCu;
        goto label_40cebc;
    }
    ctx->pc = 0x40CEB4u;
    {
        const bool branch_taken_0x40ceb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x40ceb4) {
            ctx->pc = 0x40CED8u;
            goto label_40ced8;
        }
    }
    ctx->pc = 0x40CEBCu;
label_40cebc:
    // 0x40cebc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_40cec0:
    if (ctx->pc == 0x40CEC0u) {
        ctx->pc = 0x40CEC4u;
        goto label_40cec4;
    }
    ctx->pc = 0x40CEBCu;
    {
        const bool branch_taken_0x40cebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x40cebc) {
            ctx->pc = 0x40CED8u;
            goto label_40ced8;
        }
    }
    ctx->pc = 0x40CEC4u;
label_40cec4:
    // 0x40cec4: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x40cec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_40cec8:
    // 0x40cec8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_40cecc:
    if (ctx->pc == 0x40CECCu) {
        ctx->pc = 0x40CED0u;
        goto label_40ced0;
    }
    ctx->pc = 0x40CEC8u;
    {
        const bool branch_taken_0x40cec8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x40cec8) {
            ctx->pc = 0x40CED8u;
            goto label_40ced8;
        }
    }
    ctx->pc = 0x40CED0u;
label_40ced0:
    // 0x40ced0: 0xc0400a8  jal         func_1002A0
label_40ced4:
    if (ctx->pc == 0x40CED4u) {
        ctx->pc = 0x40CED8u;
        goto label_40ced8;
    }
    ctx->pc = 0x40CED0u;
    SET_GPR_U32(ctx, 31, 0x40CED8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40CED8u; }
        if (ctx->pc != 0x40CED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40CED8u; }
        if (ctx->pc != 0x40CED8u) { return; }
    }
    ctx->pc = 0x40CED8u;
label_40ced8:
    // 0x40ced8: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x40ced8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_40cedc:
    // 0x40cedc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_40cee0:
    if (ctx->pc == 0x40CEE0u) {
        ctx->pc = 0x40CEE0u;
            // 0x40cee0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x40CEE4u;
        goto label_40cee4;
    }
    ctx->pc = 0x40CEDCu;
    {
        const bool branch_taken_0x40cedc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x40cedc) {
            ctx->pc = 0x40CEE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40CEDCu;
            // 0x40cee0: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40CF0Cu;
            goto label_40cf0c;
        }
    }
    ctx->pc = 0x40CEE4u;
label_40cee4:
    // 0x40cee4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_40cee8:
    if (ctx->pc == 0x40CEE8u) {
        ctx->pc = 0x40CEECu;
        goto label_40ceec;
    }
    ctx->pc = 0x40CEE4u;
    {
        const bool branch_taken_0x40cee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x40cee4) {
            ctx->pc = 0x40CF08u;
            goto label_40cf08;
        }
    }
    ctx->pc = 0x40CEECu;
label_40ceec:
    // 0x40ceec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_40cef0:
    if (ctx->pc == 0x40CEF0u) {
        ctx->pc = 0x40CEF4u;
        goto label_40cef4;
    }
    ctx->pc = 0x40CEECu;
    {
        const bool branch_taken_0x40ceec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x40ceec) {
            ctx->pc = 0x40CF08u;
            goto label_40cf08;
        }
    }
    ctx->pc = 0x40CEF4u;
label_40cef4:
    // 0x40cef4: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x40cef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_40cef8:
    // 0x40cef8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_40cefc:
    if (ctx->pc == 0x40CEFCu) {
        ctx->pc = 0x40CF00u;
        goto label_40cf00;
    }
    ctx->pc = 0x40CEF8u;
    {
        const bool branch_taken_0x40cef8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x40cef8) {
            ctx->pc = 0x40CF08u;
            goto label_40cf08;
        }
    }
    ctx->pc = 0x40CF00u;
label_40cf00:
    // 0x40cf00: 0xc0400a8  jal         func_1002A0
label_40cf04:
    if (ctx->pc == 0x40CF04u) {
        ctx->pc = 0x40CF08u;
        goto label_40cf08;
    }
    ctx->pc = 0x40CF00u;
    SET_GPR_U32(ctx, 31, 0x40CF08u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40CF08u; }
        if (ctx->pc != 0x40CF08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40CF08u; }
        if (ctx->pc != 0x40CF08u) { return; }
    }
    ctx->pc = 0x40CF08u;
label_40cf08:
    // 0x40cf08: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x40cf08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_40cf0c:
    // 0x40cf0c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_40cf10:
    if (ctx->pc == 0x40CF10u) {
        ctx->pc = 0x40CF14u;
        goto label_40cf14;
    }
    ctx->pc = 0x40CF0Cu;
    {
        const bool branch_taken_0x40cf0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x40cf0c) {
            ctx->pc = 0x40CF28u;
            goto label_40cf28;
        }
    }
    ctx->pc = 0x40CF14u;
label_40cf14:
    // 0x40cf14: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x40cf14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_40cf18:
    // 0x40cf18: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x40cf18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_40cf1c:
    // 0x40cf1c: 0x2463ad98  addiu       $v1, $v1, -0x5268
    ctx->pc = 0x40cf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946200));
label_40cf20:
    // 0x40cf20: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x40cf20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_40cf24:
    // 0x40cf24: 0xac407300  sw          $zero, 0x7300($v0)
    ctx->pc = 0x40cf24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29440), GPR_U32(ctx, 0));
label_40cf28:
    // 0x40cf28: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_40cf2c:
    if (ctx->pc == 0x40CF2Cu) {
        ctx->pc = 0x40CF2Cu;
            // 0x40cf2c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x40CF30u;
        goto label_40cf30;
    }
    ctx->pc = 0x40CF28u;
    {
        const bool branch_taken_0x40cf28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x40cf28) {
            ctx->pc = 0x40CF2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40CF28u;
            // 0x40cf2c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40CF84u;
            goto label_40cf84;
        }
    }
    ctx->pc = 0x40CF30u;
label_40cf30:
    // 0x40cf30: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x40cf30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_40cf34:
    // 0x40cf34: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x40cf34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_40cf38:
    // 0x40cf38: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x40cf38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_40cf3c:
    // 0x40cf3c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x40cf3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_40cf40:
    // 0x40cf40: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_40cf44:
    if (ctx->pc == 0x40CF44u) {
        ctx->pc = 0x40CF44u;
            // 0x40cf44: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x40CF48u;
        goto label_40cf48;
    }
    ctx->pc = 0x40CF40u;
    {
        const bool branch_taken_0x40cf40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x40cf40) {
            ctx->pc = 0x40CF44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40CF40u;
            // 0x40cf44: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40CF5Cu;
            goto label_40cf5c;
        }
    }
    ctx->pc = 0x40CF48u;
label_40cf48:
    // 0x40cf48: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x40cf48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_40cf4c:
    // 0x40cf4c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x40cf4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_40cf50:
    // 0x40cf50: 0x320f809  jalr        $t9
label_40cf54:
    if (ctx->pc == 0x40CF54u) {
        ctx->pc = 0x40CF54u;
            // 0x40cf54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x40CF58u;
        goto label_40cf58;
    }
    ctx->pc = 0x40CF50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40CF58u);
        ctx->pc = 0x40CF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40CF50u;
            // 0x40cf54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x40CF58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40CF58u; }
            if (ctx->pc != 0x40CF58u) { return; }
        }
        }
    }
    ctx->pc = 0x40CF58u;
label_40cf58:
    // 0x40cf58: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x40cf58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_40cf5c:
    // 0x40cf5c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_40cf60:
    if (ctx->pc == 0x40CF60u) {
        ctx->pc = 0x40CF60u;
            // 0x40cf60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40CF64u;
        goto label_40cf64;
    }
    ctx->pc = 0x40CF5Cu;
    {
        const bool branch_taken_0x40cf5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x40cf5c) {
            ctx->pc = 0x40CF60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40CF5Cu;
            // 0x40cf60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40CF78u;
            goto label_40cf78;
        }
    }
    ctx->pc = 0x40CF64u;
label_40cf64:
    // 0x40cf64: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x40cf64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_40cf68:
    // 0x40cf68: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x40cf68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_40cf6c:
    // 0x40cf6c: 0x320f809  jalr        $t9
label_40cf70:
    if (ctx->pc == 0x40CF70u) {
        ctx->pc = 0x40CF70u;
            // 0x40cf70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x40CF74u;
        goto label_40cf74;
    }
    ctx->pc = 0x40CF6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40CF74u);
        ctx->pc = 0x40CF70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40CF6Cu;
            // 0x40cf70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x40CF74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40CF74u; }
            if (ctx->pc != 0x40CF74u) { return; }
        }
        }
    }
    ctx->pc = 0x40CF74u;
label_40cf74:
    // 0x40cf74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40cf74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_40cf78:
    // 0x40cf78: 0xc075bf8  jal         func_1D6FE0
label_40cf7c:
    if (ctx->pc == 0x40CF7Cu) {
        ctx->pc = 0x40CF7Cu;
            // 0x40cf7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40CF80u;
        goto label_40cf80;
    }
    ctx->pc = 0x40CF78u;
    SET_GPR_U32(ctx, 31, 0x40CF80u);
    ctx->pc = 0x40CF7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40CF78u;
            // 0x40cf7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40CF80u; }
        if (ctx->pc != 0x40CF80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40CF80u; }
        if (ctx->pc != 0x40CF80u) { return; }
    }
    ctx->pc = 0x40CF80u;
label_40cf80:
    // 0x40cf80: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x40cf80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_40cf84:
    // 0x40cf84: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x40cf84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_40cf88:
    // 0x40cf88: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_40cf8c:
    if (ctx->pc == 0x40CF8Cu) {
        ctx->pc = 0x40CF8Cu;
            // 0x40cf8c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40CF90u;
        goto label_40cf90;
    }
    ctx->pc = 0x40CF88u;
    {
        const bool branch_taken_0x40cf88 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x40cf88) {
            ctx->pc = 0x40CF8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40CF88u;
            // 0x40cf8c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40CF9Cu;
            goto label_40cf9c;
        }
    }
    ctx->pc = 0x40CF90u;
label_40cf90:
    // 0x40cf90: 0xc0400a8  jal         func_1002A0
label_40cf94:
    if (ctx->pc == 0x40CF94u) {
        ctx->pc = 0x40CF94u;
            // 0x40cf94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40CF98u;
        goto label_40cf98;
    }
    ctx->pc = 0x40CF90u;
    SET_GPR_U32(ctx, 31, 0x40CF98u);
    ctx->pc = 0x40CF94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40CF90u;
            // 0x40cf94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40CF98u; }
        if (ctx->pc != 0x40CF98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40CF98u; }
        if (ctx->pc != 0x40CF98u) { return; }
    }
    ctx->pc = 0x40CF98u;
label_40cf98:
    // 0x40cf98: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x40cf98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_40cf9c:
    // 0x40cf9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x40cf9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_40cfa0:
    // 0x40cfa0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x40cfa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_40cfa4:
    // 0x40cfa4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x40cfa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_40cfa8:
    // 0x40cfa8: 0x3e00008  jr          $ra
label_40cfac:
    if (ctx->pc == 0x40CFACu) {
        ctx->pc = 0x40CFACu;
            // 0x40cfac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x40CFB0u;
        goto label_40cfb0;
    }
    ctx->pc = 0x40CFA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40CFACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40CFA8u;
            // 0x40cfac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40CFB0u;
label_40cfb0:
    // 0x40cfb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x40cfb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_40cfb4:
    // 0x40cfb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x40cfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_40cfb8:
    // 0x40cfb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x40cfb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_40cfbc:
    // 0x40cfbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x40cfbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_40cfc0:
    // 0x40cfc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x40cfc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_40cfc4:
    // 0x40cfc4: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_40cfc8:
    if (ctx->pc == 0x40CFC8u) {
        ctx->pc = 0x40CFC8u;
            // 0x40cfc8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40CFCCu;
        goto label_40cfcc;
    }
    ctx->pc = 0x40CFC4u;
    {
        const bool branch_taken_0x40cfc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x40CFC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40CFC4u;
            // 0x40cfc8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40cfc4) {
            ctx->pc = 0x40D08Cu;
            goto label_40d08c;
        }
    }
    ctx->pc = 0x40CFCCu;
label_40cfcc:
    // 0x40cfcc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x40cfccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_40cfd0:
    // 0x40cfd0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x40cfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_40cfd4:
    // 0x40cfd4: 0x2463acf0  addiu       $v1, $v1, -0x5310
    ctx->pc = 0x40cfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946032));
label_40cfd8:
    // 0x40cfd8: 0x2442ad30  addiu       $v0, $v0, -0x52D0
    ctx->pc = 0x40cfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946096));
label_40cfdc:
    // 0x40cfdc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x40cfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_40cfe0:
    // 0x40cfe0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x40cfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_40cfe4:
    // 0x40cfe4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x40cfe4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_40cfe8:
    // 0x40cfe8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x40cfe8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_40cfec:
    // 0x40cfec: 0x320f809  jalr        $t9
label_40cff0:
    if (ctx->pc == 0x40CFF0u) {
        ctx->pc = 0x40CFF4u;
        goto label_40cff4;
    }
    ctx->pc = 0x40CFECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40CFF4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x40CFF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40CFF4u; }
            if (ctx->pc != 0x40CFF4u) { return; }
        }
        }
    }
    ctx->pc = 0x40CFF4u;
label_40cff4:
    // 0x40cff4: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
label_40cff8:
    if (ctx->pc == 0x40CFF8u) {
        ctx->pc = 0x40CFF8u;
            // 0x40cff8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x40CFFCu;
        goto label_40cffc;
    }
    ctx->pc = 0x40CFF4u;
    {
        const bool branch_taken_0x40cff4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x40cff4) {
            ctx->pc = 0x40CFF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40CFF4u;
            // 0x40cff8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40D078u;
            goto label_40d078;
        }
    }
    ctx->pc = 0x40CFFCu;
label_40cffc:
    // 0x40cffc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x40cffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_40d000:
    // 0x40d000: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x40d000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_40d004:
    // 0x40d004: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x40d004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_40d008:
    // 0x40d008: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x40d008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_40d00c:
    // 0x40d00c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x40d00cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_40d010:
    // 0x40d010: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x40d010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_40d014:
    // 0x40d014: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x40d014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_40d018:
    // 0x40d018: 0xc0aecc4  jal         func_2BB310
label_40d01c:
    if (ctx->pc == 0x40D01Cu) {
        ctx->pc = 0x40D01Cu;
            // 0x40d01c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x40D020u;
        goto label_40d020;
    }
    ctx->pc = 0x40D018u;
    SET_GPR_U32(ctx, 31, 0x40D020u);
    ctx->pc = 0x40D01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40D018u;
            // 0x40d01c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D020u; }
        if (ctx->pc != 0x40D020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D020u; }
        if (ctx->pc != 0x40D020u) { return; }
    }
    ctx->pc = 0x40D020u;
label_40d020:
    // 0x40d020: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x40d020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_40d024:
    // 0x40d024: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x40d024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_40d028:
    // 0x40d028: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_40d02c:
    if (ctx->pc == 0x40D02Cu) {
        ctx->pc = 0x40D02Cu;
            // 0x40d02c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x40D030u;
        goto label_40d030;
    }
    ctx->pc = 0x40D028u;
    {
        const bool branch_taken_0x40d028 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x40d028) {
            ctx->pc = 0x40D02Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40D028u;
            // 0x40d02c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40D044u;
            goto label_40d044;
        }
    }
    ctx->pc = 0x40D030u;
label_40d030:
    // 0x40d030: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x40d030u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_40d034:
    // 0x40d034: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x40d034u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_40d038:
    // 0x40d038: 0x320f809  jalr        $t9
label_40d03c:
    if (ctx->pc == 0x40D03Cu) {
        ctx->pc = 0x40D03Cu;
            // 0x40d03c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x40D040u;
        goto label_40d040;
    }
    ctx->pc = 0x40D038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40D040u);
        ctx->pc = 0x40D03Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40D038u;
            // 0x40d03c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x40D040u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40D040u; }
            if (ctx->pc != 0x40D040u) { return; }
        }
        }
    }
    ctx->pc = 0x40D040u;
label_40d040:
    // 0x40d040: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x40d040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_40d044:
    // 0x40d044: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x40d044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_40d048:
    // 0x40d048: 0xc0aec9c  jal         func_2BB270
label_40d04c:
    if (ctx->pc == 0x40D04Cu) {
        ctx->pc = 0x40D04Cu;
            // 0x40d04c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x40D050u;
        goto label_40d050;
    }
    ctx->pc = 0x40D048u;
    SET_GPR_U32(ctx, 31, 0x40D050u);
    ctx->pc = 0x40D04Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40D048u;
            // 0x40d04c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D050u; }
        if (ctx->pc != 0x40D050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D050u; }
        if (ctx->pc != 0x40D050u) { return; }
    }
    ctx->pc = 0x40D050u;
label_40d050:
    // 0x40d050: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x40d050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_40d054:
    // 0x40d054: 0xc0aec88  jal         func_2BB220
label_40d058:
    if (ctx->pc == 0x40D058u) {
        ctx->pc = 0x40D058u;
            // 0x40d058: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x40D05Cu;
        goto label_40d05c;
    }
    ctx->pc = 0x40D054u;
    SET_GPR_U32(ctx, 31, 0x40D05Cu);
    ctx->pc = 0x40D058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40D054u;
            // 0x40d058: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D05Cu; }
        if (ctx->pc != 0x40D05Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D05Cu; }
        if (ctx->pc != 0x40D05Cu) { return; }
    }
    ctx->pc = 0x40D05Cu;
label_40d05c:
    // 0x40d05c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x40d05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_40d060:
    // 0x40d060: 0xc0aec0c  jal         func_2BB030
label_40d064:
    if (ctx->pc == 0x40D064u) {
        ctx->pc = 0x40D064u;
            // 0x40d064: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40D068u;
        goto label_40d068;
    }
    ctx->pc = 0x40D060u;
    SET_GPR_U32(ctx, 31, 0x40D068u);
    ctx->pc = 0x40D064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40D060u;
            // 0x40d064: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D068u; }
        if (ctx->pc != 0x40D068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D068u; }
        if (ctx->pc != 0x40D068u) { return; }
    }
    ctx->pc = 0x40D068u;
label_40d068:
    // 0x40d068: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40d068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40d06c:
    // 0x40d06c: 0xc0aeaa8  jal         func_2BAAA0
label_40d070:
    if (ctx->pc == 0x40D070u) {
        ctx->pc = 0x40D070u;
            // 0x40d070: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40D074u;
        goto label_40d074;
    }
    ctx->pc = 0x40D06Cu;
    SET_GPR_U32(ctx, 31, 0x40D074u);
    ctx->pc = 0x40D070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40D06Cu;
            // 0x40d070: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D074u; }
        if (ctx->pc != 0x40D074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D074u; }
        if (ctx->pc != 0x40D074u) { return; }
    }
    ctx->pc = 0x40D074u;
label_40d074:
    // 0x40d074: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x40d074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_40d078:
    // 0x40d078: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x40d078u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_40d07c:
    // 0x40d07c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_40d080:
    if (ctx->pc == 0x40D080u) {
        ctx->pc = 0x40D080u;
            // 0x40d080: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40D084u;
        goto label_40d084;
    }
    ctx->pc = 0x40D07Cu;
    {
        const bool branch_taken_0x40d07c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x40d07c) {
            ctx->pc = 0x40D080u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40D07Cu;
            // 0x40d080: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40D090u;
            goto label_40d090;
        }
    }
    ctx->pc = 0x40D084u;
label_40d084:
    // 0x40d084: 0xc0400a8  jal         func_1002A0
label_40d088:
    if (ctx->pc == 0x40D088u) {
        ctx->pc = 0x40D088u;
            // 0x40d088: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40D08Cu;
        goto label_40d08c;
    }
    ctx->pc = 0x40D084u;
    SET_GPR_U32(ctx, 31, 0x40D08Cu);
    ctx->pc = 0x40D088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40D084u;
            // 0x40d088: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D08Cu; }
        if (ctx->pc != 0x40D08Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D08Cu; }
        if (ctx->pc != 0x40D08Cu) { return; }
    }
    ctx->pc = 0x40D08Cu;
label_40d08c:
    // 0x40d08c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x40d08cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40d090:
    // 0x40d090: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x40d090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_40d094:
    // 0x40d094: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x40d094u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_40d098:
    // 0x40d098: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x40d098u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_40d09c:
    // 0x40d09c: 0x3e00008  jr          $ra
label_40d0a0:
    if (ctx->pc == 0x40D0A0u) {
        ctx->pc = 0x40D0A0u;
            // 0x40d0a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x40D0A4u;
        goto label_40d0a4;
    }
    ctx->pc = 0x40D09Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40D0A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40D09Cu;
            // 0x40d0a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40D0A4u;
label_40d0a4:
    // 0x40d0a4: 0x0  nop
    ctx->pc = 0x40d0a4u;
    // NOP
label_40d0a8:
    // 0x40d0a8: 0x0  nop
    ctx->pc = 0x40d0a8u;
    // NOP
label_40d0ac:
    // 0x40d0ac: 0x0  nop
    ctx->pc = 0x40d0acu;
    // NOP
label_40d0b0:
    // 0x40d0b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x40d0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_40d0b4:
    // 0x40d0b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x40d0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_40d0b8:
    // 0x40d0b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x40d0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_40d0bc:
    // 0x40d0bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x40d0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_40d0c0:
    // 0x40d0c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x40d0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_40d0c4:
    // 0x40d0c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x40d0c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_40d0c8:
    // 0x40d0c8: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x40d0c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_40d0cc:
    // 0x40d0cc: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_40d0d0:
    if (ctx->pc == 0x40D0D0u) {
        ctx->pc = 0x40D0D0u;
            // 0x40d0d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40D0D4u;
        goto label_40d0d4;
    }
    ctx->pc = 0x40D0CCu;
    {
        const bool branch_taken_0x40d0cc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x40D0D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40D0CCu;
            // 0x40d0d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d0cc) {
            ctx->pc = 0x40D108u;
            goto label_40d108;
        }
    }
    ctx->pc = 0x40D0D4u;
label_40d0d4:
    // 0x40d0d4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x40d0d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40d0d8:
    // 0x40d0d8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x40d0d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40d0dc:
    // 0x40d0dc: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x40d0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_40d0e0:
    // 0x40d0e0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x40d0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_40d0e4:
    // 0x40d0e4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x40d0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_40d0e8:
    // 0x40d0e8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x40d0e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_40d0ec:
    // 0x40d0ec: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x40d0ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_40d0f0:
    // 0x40d0f0: 0x320f809  jalr        $t9
label_40d0f4:
    if (ctx->pc == 0x40D0F4u) {
        ctx->pc = 0x40D0F8u;
        goto label_40d0f8;
    }
    ctx->pc = 0x40D0F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40D0F8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x40D0F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40D0F8u; }
            if (ctx->pc != 0x40D0F8u) { return; }
        }
        }
    }
    ctx->pc = 0x40D0F8u;
label_40d0f8:
    // 0x40d0f8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x40d0f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_40d0fc:
    // 0x40d0fc: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x40d0fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_40d100:
    // 0x40d100: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_40d104:
    if (ctx->pc == 0x40D104u) {
        ctx->pc = 0x40D104u;
            // 0x40d104: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x40D108u;
        goto label_40d108;
    }
    ctx->pc = 0x40D100u;
    {
        const bool branch_taken_0x40d100 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x40D104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40D100u;
            // 0x40d104: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d100) {
            ctx->pc = 0x40D0DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_40d0dc;
        }
    }
    ctx->pc = 0x40D108u;
label_40d108:
    // 0x40d108: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x40d108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_40d10c:
    // 0x40d10c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x40d10cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_40d110:
    // 0x40d110: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x40d110u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_40d114:
    // 0x40d114: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x40d114u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_40d118:
    // 0x40d118: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x40d118u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_40d11c:
    // 0x40d11c: 0x3e00008  jr          $ra
label_40d120:
    if (ctx->pc == 0x40D120u) {
        ctx->pc = 0x40D120u;
            // 0x40d120: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x40D124u;
        goto label_40d124;
    }
    ctx->pc = 0x40D11Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40D120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40D11Cu;
            // 0x40d120: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40D124u;
label_40d124:
    // 0x40d124: 0x0  nop
    ctx->pc = 0x40d124u;
    // NOP
label_40d128:
    // 0x40d128: 0x0  nop
    ctx->pc = 0x40d128u;
    // NOP
label_40d12c:
    // 0x40d12c: 0x0  nop
    ctx->pc = 0x40d12cu;
    // NOP
label_40d130:
    // 0x40d130: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x40d130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_40d134:
    // 0x40d134: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x40d134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_40d138:
    // 0x40d138: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x40d138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_40d13c:
    // 0x40d13c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x40d13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_40d140:
    // 0x40d140: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x40d140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_40d144:
    // 0x40d144: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x40d144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_40d148:
    // 0x40d148: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x40d148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_40d14c:
    // 0x40d14c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x40d14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_40d150:
    // 0x40d150: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x40d150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_40d154:
    // 0x40d154: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x40d154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_40d158:
    // 0x40d158: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x40d158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_40d15c:
    // 0x40d15c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x40d15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_40d160:
    // 0x40d160: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x40d160u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_40d164:
    // 0x40d164: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x40d164u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_40d168:
    // 0x40d168: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x40d168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_40d16c:
    // 0x40d16c: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
label_40d170:
    if (ctx->pc == 0x40D170u) {
        ctx->pc = 0x40D170u;
            // 0x40d170: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40D174u;
        goto label_40d174;
    }
    ctx->pc = 0x40D16Cu;
    {
        const bool branch_taken_0x40d16c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x40D170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40D16Cu;
            // 0x40d170: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d16c) {
            ctx->pc = 0x40D1B0u;
            goto label_40d1b0;
        }
    }
    ctx->pc = 0x40D174u;
label_40d174:
    // 0x40d174: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x40d174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_40d178:
    // 0x40d178: 0x50a3004c  beql        $a1, $v1, . + 4 + (0x4C << 2)
label_40d17c:
    if (ctx->pc == 0x40D17Cu) {
        ctx->pc = 0x40D17Cu;
            // 0x40d17c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x40D180u;
        goto label_40d180;
    }
    ctx->pc = 0x40D178u;
    {
        const bool branch_taken_0x40d178 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x40d178) {
            ctx->pc = 0x40D17Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40D178u;
            // 0x40d17c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40D2ACu;
            goto label_40d2ac;
        }
    }
    ctx->pc = 0x40D180u;
label_40d180:
    // 0x40d180: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x40d180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_40d184:
    // 0x40d184: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_40d188:
    if (ctx->pc == 0x40D188u) {
        ctx->pc = 0x40D188u;
            // 0x40d188: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x40D18Cu;
        goto label_40d18c;
    }
    ctx->pc = 0x40D184u;
    {
        const bool branch_taken_0x40d184 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x40d184) {
            ctx->pc = 0x40D188u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40D184u;
            // 0x40d188: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40D194u;
            goto label_40d194;
        }
    }
    ctx->pc = 0x40D18Cu;
label_40d18c:
    // 0x40d18c: 0x10000046  b           . + 4 + (0x46 << 2)
label_40d190:
    if (ctx->pc == 0x40D190u) {
        ctx->pc = 0x40D194u;
        goto label_40d194;
    }
    ctx->pc = 0x40D18Cu;
    {
        const bool branch_taken_0x40d18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x40d18c) {
            ctx->pc = 0x40D2A8u;
            goto label_40d2a8;
        }
    }
    ctx->pc = 0x40D194u;
label_40d194:
    // 0x40d194: 0x8cc20cb4  lw          $v0, 0xCB4($a2)
    ctx->pc = 0x40d194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
label_40d198:
    // 0x40d198: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x40d198u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_40d19c:
    // 0x40d19c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x40d19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_40d1a0:
    // 0x40d1a0: 0x320f809  jalr        $t9
label_40d1a4:
    if (ctx->pc == 0x40D1A4u) {
        ctx->pc = 0x40D1A4u;
            // 0x40d1a4: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x40D1A8u;
        goto label_40d1a8;
    }
    ctx->pc = 0x40D1A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40D1A8u);
        ctx->pc = 0x40D1A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40D1A0u;
            // 0x40d1a4: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x40D1A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40D1A8u; }
            if (ctx->pc != 0x40D1A8u) { return; }
        }
        }
    }
    ctx->pc = 0x40D1A8u;
label_40d1a8:
    // 0x40d1a8: 0x1000003f  b           . + 4 + (0x3F << 2)
label_40d1ac:
    if (ctx->pc == 0x40D1ACu) {
        ctx->pc = 0x40D1B0u;
        goto label_40d1b0;
    }
    ctx->pc = 0x40D1A8u;
    {
        const bool branch_taken_0x40d1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x40d1a8) {
            ctx->pc = 0x40D2A8u;
            goto label_40d2a8;
        }
    }
    ctx->pc = 0x40D1B0u;
label_40d1b0:
    // 0x40d1b0: 0x8eb00070  lw          $s0, 0x70($s5)
    ctx->pc = 0x40d1b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_40d1b4:
    // 0x40d1b4: 0x1200003c  beqz        $s0, . + 4 + (0x3C << 2)
label_40d1b8:
    if (ctx->pc == 0x40D1B8u) {
        ctx->pc = 0x40D1BCu;
        goto label_40d1bc;
    }
    ctx->pc = 0x40D1B4u;
    {
        const bool branch_taken_0x40d1b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x40d1b4) {
            ctx->pc = 0x40D2A8u;
            goto label_40d2a8;
        }
    }
    ctx->pc = 0x40D1BCu;
label_40d1bc:
    // 0x40d1bc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x40d1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_40d1c0:
    // 0x40d1c0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x40d1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_40d1c4:
    // 0x40d1c4: 0x8c74e378  lw          $s4, -0x1C88($v1)
    ctx->pc = 0x40d1c4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_40d1c8:
    // 0x40d1c8: 0x26b30084  addiu       $s3, $s5, 0x84
    ctx->pc = 0x40d1c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
label_40d1cc:
    // 0x40d1cc: 0x8c44d130  lw          $a0, -0x2ED0($v0)
    ctx->pc = 0x40d1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_40d1d0:
    // 0x40d1d0: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x40d1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_40d1d4:
    // 0x40d1d4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x40d1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_40d1d8:
    // 0x40d1d8: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x40d1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_40d1dc:
    // 0x40d1dc: 0x8c57e370  lw          $s7, -0x1C90($v0)
    ctx->pc = 0x40d1dcu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_40d1e0:
    // 0x40d1e0: 0x8c840130  lw          $a0, 0x130($a0)
    ctx->pc = 0x40d1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_40d1e4:
    // 0x40d1e4: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x40d1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_40d1e8:
    // 0x40d1e8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x40d1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_40d1ec:
    // 0x40d1ec: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x40d1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_40d1f0:
    // 0x40d1f0: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x40d1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_40d1f4:
    // 0x40d1f4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x40d1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_40d1f8:
    // 0x40d1f8: 0x8ea40088  lw          $a0, 0x88($s5)
    ctx->pc = 0x40d1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
label_40d1fc:
    // 0x40d1fc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x40d1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_40d200:
    // 0x40d200: 0x8c5e0034  lw          $fp, 0x34($v0)
    ctx->pc = 0x40d200u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_40d204:
    // 0x40d204: 0xc04e738  jal         func_139CE0
label_40d208:
    if (ctx->pc == 0x40D208u) {
        ctx->pc = 0x40D208u;
            // 0x40d208: 0x24760010  addiu       $s6, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->pc = 0x40D20Cu;
        goto label_40d20c;
    }
    ctx->pc = 0x40D204u;
    SET_GPR_U32(ctx, 31, 0x40D20Cu);
    ctx->pc = 0x40D208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40D204u;
            // 0x40d208: 0x24760010  addiu       $s6, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D20Cu; }
        if (ctx->pc != 0x40D20Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D20Cu; }
        if (ctx->pc != 0x40D20Cu) { return; }
    }
    ctx->pc = 0x40D20Cu;
label_40d20c:
    // 0x40d20c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x40d20cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_40d210:
    // 0x40d210: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x40d210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_40d214:
    // 0x40d214: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x40d214u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_40d218:
    // 0x40d218: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x40d218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_40d21c:
    // 0x40d21c: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x40d21cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_40d220:
    // 0x40d220: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x40d220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_40d224:
    // 0x40d224: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x40d224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_40d228:
    // 0x40d228: 0xc04e4a4  jal         func_139290
label_40d22c:
    if (ctx->pc == 0x40D22Cu) {
        ctx->pc = 0x40D22Cu;
            // 0x40d22c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40D230u;
        goto label_40d230;
    }
    ctx->pc = 0x40D228u;
    SET_GPR_U32(ctx, 31, 0x40D230u);
    ctx->pc = 0x40D22Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40D228u;
            // 0x40d22c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D230u; }
        if (ctx->pc != 0x40D230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D230u; }
        if (ctx->pc != 0x40D230u) { return; }
    }
    ctx->pc = 0x40D230u;
label_40d230:
    // 0x40d230: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x40d230u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40d234:
    // 0x40d234: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x40d234u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40d238:
    // 0x40d238: 0x8ea30074  lw          $v1, 0x74($s5)
    ctx->pc = 0x40d238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_40d23c:
    // 0x40d23c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x40d23cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_40d240:
    // 0x40d240: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x40d240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_40d244:
    // 0x40d244: 0x3d25021  addu        $t2, $fp, $s2
    ctx->pc = 0x40d244u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 18)));
label_40d248:
    // 0x40d248: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x40d248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_40d24c:
    // 0x40d24c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x40d24cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_40d250:
    // 0x40d250: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x40d250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_40d254:
    // 0x40d254: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x40d254u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_40d258:
    // 0x40d258: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x40d258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_40d25c:
    // 0x40d25c: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x40d25cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_40d260:
    // 0x40d260: 0x8c4b0130  lw          $t3, 0x130($v0)
    ctx->pc = 0x40d260u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
label_40d264:
    // 0x40d264: 0xc103878  jal         func_40E1E0
label_40d268:
    if (ctx->pc == 0x40D268u) {
        ctx->pc = 0x40D268u;
            // 0x40d268: 0x27a900a0  addiu       $t1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x40D26Cu;
        goto label_40d26c;
    }
    ctx->pc = 0x40D264u;
    SET_GPR_U32(ctx, 31, 0x40D26Cu);
    ctx->pc = 0x40D268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40D264u;
            // 0x40d268: 0x27a900a0  addiu       $t1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x40E1E0u;
    if (runtime->hasFunction(0x40E1E0u)) {
        auto targetFn = runtime->lookupFunction(0x40E1E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D26Cu; }
        if (ctx->pc != 0x40D26Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0040E1E0_0x40e1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D26Cu; }
        if (ctx->pc != 0x40D26Cu) { return; }
    }
    ctx->pc = 0x40D26Cu;
label_40d26c:
    // 0x40d26c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x40d26cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_40d270:
    // 0x40d270: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x40d270u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_40d274:
    // 0x40d274: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
label_40d278:
    if (ctx->pc == 0x40D278u) {
        ctx->pc = 0x40D278u;
            // 0x40d278: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x40D27Cu;
        goto label_40d27c;
    }
    ctx->pc = 0x40D274u;
    {
        const bool branch_taken_0x40d274 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x40D278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40D274u;
            // 0x40d278: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d274) {
            ctx->pc = 0x40D238u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_40d238;
        }
    }
    ctx->pc = 0x40D27Cu;
label_40d27c:
    // 0x40d27c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x40d27cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_40d280:
    // 0x40d280: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x40d280u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_40d284:
    // 0x40d284: 0x19200008  blez        $t1, . + 4 + (0x8 << 2)
label_40d288:
    if (ctx->pc == 0x40D288u) {
        ctx->pc = 0x40D288u;
            // 0x40d288: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x40D28Cu;
        goto label_40d28c;
    }
    ctx->pc = 0x40D284u;
    {
        const bool branch_taken_0x40d284 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x40D288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40D284u;
            // 0x40d288: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d284) {
            ctx->pc = 0x40D2A8u;
            goto label_40d2a8;
        }
    }
    ctx->pc = 0x40D28Cu;
label_40d28c:
    // 0x40d28c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x40d28cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_40d290:
    // 0x40d290: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x40d290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_40d294:
    // 0x40d294: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x40d294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_40d298:
    // 0x40d298: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x40d298u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_40d29c:
    // 0x40d29c: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x40d29cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_40d2a0:
    // 0x40d2a0: 0xc055990  jal         func_156640
label_40d2a4:
    if (ctx->pc == 0x40D2A4u) {
        ctx->pc = 0x40D2A4u;
            // 0x40d2a4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40D2A8u;
        goto label_40d2a8;
    }
    ctx->pc = 0x40D2A0u;
    SET_GPR_U32(ctx, 31, 0x40D2A8u);
    ctx->pc = 0x40D2A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40D2A0u;
            // 0x40d2a4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156640u;
    if (runtime->hasFunction(0x156640u)) {
        auto targetFn = runtime->lookupFunction(0x156640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D2A8u; }
        if (ctx->pc != 0x40D2A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156640_0x156640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D2A8u; }
        if (ctx->pc != 0x40D2A8u) { return; }
    }
    ctx->pc = 0x40D2A8u;
label_40d2a8:
    // 0x40d2a8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x40d2a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_40d2ac:
    // 0x40d2ac: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x40d2acu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_40d2b0:
    // 0x40d2b0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x40d2b0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_40d2b4:
    // 0x40d2b4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x40d2b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_40d2b8:
    // 0x40d2b8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x40d2b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_40d2bc:
    // 0x40d2bc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x40d2bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_40d2c0:
    // 0x40d2c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x40d2c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_40d2c4:
    // 0x40d2c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x40d2c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_40d2c8:
    // 0x40d2c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x40d2c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_40d2cc:
    // 0x40d2cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x40d2ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_40d2d0:
    // 0x40d2d0: 0x3e00008  jr          $ra
label_40d2d4:
    if (ctx->pc == 0x40D2D4u) {
        ctx->pc = 0x40D2D4u;
            // 0x40d2d4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x40D2D8u;
        goto label_40d2d8;
    }
    ctx->pc = 0x40D2D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40D2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40D2D0u;
            // 0x40d2d4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40D2D8u;
label_40d2d8:
    // 0x40d2d8: 0x0  nop
    ctx->pc = 0x40d2d8u;
    // NOP
label_40d2dc:
    // 0x40d2dc: 0x0  nop
    ctx->pc = 0x40d2dcu;
    // NOP
label_40d2e0:
    // 0x40d2e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x40d2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_40d2e4:
    // 0x40d2e4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x40d2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_40d2e8:
    // 0x40d2e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x40d2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_40d2ec:
    // 0x40d2ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x40d2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_40d2f0:
    // 0x40d2f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x40d2f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_40d2f4:
    // 0x40d2f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x40d2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_40d2f8:
    // 0x40d2f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x40d2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_40d2fc:
    // 0x40d2fc: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x40d2fcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_40d300:
    // 0x40d300: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_40d304:
    if (ctx->pc == 0x40D304u) {
        ctx->pc = 0x40D304u;
            // 0x40d304: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40D308u;
        goto label_40d308;
    }
    ctx->pc = 0x40D300u;
    {
        const bool branch_taken_0x40d300 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x40D304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40D300u;
            // 0x40d304: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d300) {
            ctx->pc = 0x40D334u;
            goto label_40d334;
        }
    }
    ctx->pc = 0x40D308u;
label_40d308:
    // 0x40d308: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x40d308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_40d30c:
    // 0x40d30c: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_40d310:
    if (ctx->pc == 0x40D310u) {
        ctx->pc = 0x40D310u;
            // 0x40d310: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x40D314u;
        goto label_40d314;
    }
    ctx->pc = 0x40D30Cu;
    {
        const bool branch_taken_0x40d30c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x40d30c) {
            ctx->pc = 0x40D310u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40D30Cu;
            // 0x40d310: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40D328u;
            goto label_40d328;
        }
    }
    ctx->pc = 0x40D314u;
label_40d314:
    // 0x40d314: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x40d314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_40d318:
    // 0x40d318: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_40d31c:
    if (ctx->pc == 0x40D31Cu) {
        ctx->pc = 0x40D320u;
        goto label_40d320;
    }
    ctx->pc = 0x40D318u;
    {
        const bool branch_taken_0x40d318 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x40d318) {
            ctx->pc = 0x40D368u;
            goto label_40d368;
        }
    }
    ctx->pc = 0x40D320u;
label_40d320:
    // 0x40d320: 0x10000011  b           . + 4 + (0x11 << 2)
label_40d324:
    if (ctx->pc == 0x40D324u) {
        ctx->pc = 0x40D328u;
        goto label_40d328;
    }
    ctx->pc = 0x40D320u;
    {
        const bool branch_taken_0x40d320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x40d320) {
            ctx->pc = 0x40D368u;
            goto label_40d368;
        }
    }
    ctx->pc = 0x40D328u;
label_40d328:
    // 0x40d328: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x40d328u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_40d32c:
    // 0x40d32c: 0x320f809  jalr        $t9
label_40d330:
    if (ctx->pc == 0x40D330u) {
        ctx->pc = 0x40D334u;
        goto label_40d334;
    }
    ctx->pc = 0x40D32Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40D334u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x40D334u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40D334u; }
            if (ctx->pc != 0x40D334u) { return; }
        }
        }
    }
    ctx->pc = 0x40D334u;
label_40d334:
    // 0x40d334: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x40d334u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_40d338:
    // 0x40d338: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_40d33c:
    if (ctx->pc == 0x40D33Cu) {
        ctx->pc = 0x40D340u;
        goto label_40d340;
    }
    ctx->pc = 0x40D338u;
    {
        const bool branch_taken_0x40d338 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x40d338) {
            ctx->pc = 0x40D368u;
            goto label_40d368;
        }
    }
    ctx->pc = 0x40D340u;
label_40d340:
    // 0x40d340: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x40d340u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40d344:
    // 0x40d344: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x40d344u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40d348:
    // 0x40d348: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x40d348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_40d34c:
    // 0x40d34c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x40d34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_40d350:
    // 0x40d350: 0xc0e3658  jal         func_38D960
label_40d354:
    if (ctx->pc == 0x40D354u) {
        ctx->pc = 0x40D354u;
            // 0x40d354: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x40D358u;
        goto label_40d358;
    }
    ctx->pc = 0x40D350u;
    SET_GPR_U32(ctx, 31, 0x40D358u);
    ctx->pc = 0x40D354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40D350u;
            // 0x40d354: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D358u; }
        if (ctx->pc != 0x40D358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40D358u; }
        if (ctx->pc != 0x40D358u) { return; }
    }
    ctx->pc = 0x40D358u;
label_40d358:
    // 0x40d358: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x40d358u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_40d35c:
    // 0x40d35c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x40d35cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_40d360:
    // 0x40d360: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_40d364:
    if (ctx->pc == 0x40D364u) {
        ctx->pc = 0x40D364u;
            // 0x40d364: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x40D368u;
        goto label_40d368;
    }
    ctx->pc = 0x40D360u;
    {
        const bool branch_taken_0x40d360 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x40D364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40D360u;
            // 0x40d364: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d360) {
            ctx->pc = 0x40D348u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_40d348;
        }
    }
    ctx->pc = 0x40D368u;
label_40d368:
    // 0x40d368: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x40d368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_40d36c:
    // 0x40d36c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x40d36cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_40d370:
    // 0x40d370: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x40d370u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_40d374:
    // 0x40d374: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x40d374u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_40d378:
    // 0x40d378: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x40d378u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_40d37c:
    // 0x40d37c: 0x3e00008  jr          $ra
label_40d380:
    if (ctx->pc == 0x40D380u) {
        ctx->pc = 0x40D380u;
            // 0x40d380: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x40D384u;
        goto label_40d384;
    }
    ctx->pc = 0x40D37Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40D380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40D37Cu;
            // 0x40d380: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40D384u;
label_40d384:
    // 0x40d384: 0x0  nop
    ctx->pc = 0x40d384u;
    // NOP
label_40d388:
    // 0x40d388: 0x0  nop
    ctx->pc = 0x40d388u;
    // NOP
label_40d38c:
    // 0x40d38c: 0x0  nop
    ctx->pc = 0x40d38cu;
    // NOP
}
