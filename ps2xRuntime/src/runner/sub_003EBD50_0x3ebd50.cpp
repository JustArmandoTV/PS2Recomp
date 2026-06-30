#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003EBD50
// Address: 0x3ebd50 - 0x3ec390
void sub_003EBD50_0x3ebd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EBD50_0x3ebd50");
#endif

    switch (ctx->pc) {
        case 0x3ebd50u: goto label_3ebd50;
        case 0x3ebd54u: goto label_3ebd54;
        case 0x3ebd58u: goto label_3ebd58;
        case 0x3ebd5cu: goto label_3ebd5c;
        case 0x3ebd60u: goto label_3ebd60;
        case 0x3ebd64u: goto label_3ebd64;
        case 0x3ebd68u: goto label_3ebd68;
        case 0x3ebd6cu: goto label_3ebd6c;
        case 0x3ebd70u: goto label_3ebd70;
        case 0x3ebd74u: goto label_3ebd74;
        case 0x3ebd78u: goto label_3ebd78;
        case 0x3ebd7cu: goto label_3ebd7c;
        case 0x3ebd80u: goto label_3ebd80;
        case 0x3ebd84u: goto label_3ebd84;
        case 0x3ebd88u: goto label_3ebd88;
        case 0x3ebd8cu: goto label_3ebd8c;
        case 0x3ebd90u: goto label_3ebd90;
        case 0x3ebd94u: goto label_3ebd94;
        case 0x3ebd98u: goto label_3ebd98;
        case 0x3ebd9cu: goto label_3ebd9c;
        case 0x3ebda0u: goto label_3ebda0;
        case 0x3ebda4u: goto label_3ebda4;
        case 0x3ebda8u: goto label_3ebda8;
        case 0x3ebdacu: goto label_3ebdac;
        case 0x3ebdb0u: goto label_3ebdb0;
        case 0x3ebdb4u: goto label_3ebdb4;
        case 0x3ebdb8u: goto label_3ebdb8;
        case 0x3ebdbcu: goto label_3ebdbc;
        case 0x3ebdc0u: goto label_3ebdc0;
        case 0x3ebdc4u: goto label_3ebdc4;
        case 0x3ebdc8u: goto label_3ebdc8;
        case 0x3ebdccu: goto label_3ebdcc;
        case 0x3ebdd0u: goto label_3ebdd0;
        case 0x3ebdd4u: goto label_3ebdd4;
        case 0x3ebdd8u: goto label_3ebdd8;
        case 0x3ebddcu: goto label_3ebddc;
        case 0x3ebde0u: goto label_3ebde0;
        case 0x3ebde4u: goto label_3ebde4;
        case 0x3ebde8u: goto label_3ebde8;
        case 0x3ebdecu: goto label_3ebdec;
        case 0x3ebdf0u: goto label_3ebdf0;
        case 0x3ebdf4u: goto label_3ebdf4;
        case 0x3ebdf8u: goto label_3ebdf8;
        case 0x3ebdfcu: goto label_3ebdfc;
        case 0x3ebe00u: goto label_3ebe00;
        case 0x3ebe04u: goto label_3ebe04;
        case 0x3ebe08u: goto label_3ebe08;
        case 0x3ebe0cu: goto label_3ebe0c;
        case 0x3ebe10u: goto label_3ebe10;
        case 0x3ebe14u: goto label_3ebe14;
        case 0x3ebe18u: goto label_3ebe18;
        case 0x3ebe1cu: goto label_3ebe1c;
        case 0x3ebe20u: goto label_3ebe20;
        case 0x3ebe24u: goto label_3ebe24;
        case 0x3ebe28u: goto label_3ebe28;
        case 0x3ebe2cu: goto label_3ebe2c;
        case 0x3ebe30u: goto label_3ebe30;
        case 0x3ebe34u: goto label_3ebe34;
        case 0x3ebe38u: goto label_3ebe38;
        case 0x3ebe3cu: goto label_3ebe3c;
        case 0x3ebe40u: goto label_3ebe40;
        case 0x3ebe44u: goto label_3ebe44;
        case 0x3ebe48u: goto label_3ebe48;
        case 0x3ebe4cu: goto label_3ebe4c;
        case 0x3ebe50u: goto label_3ebe50;
        case 0x3ebe54u: goto label_3ebe54;
        case 0x3ebe58u: goto label_3ebe58;
        case 0x3ebe5cu: goto label_3ebe5c;
        case 0x3ebe60u: goto label_3ebe60;
        case 0x3ebe64u: goto label_3ebe64;
        case 0x3ebe68u: goto label_3ebe68;
        case 0x3ebe6cu: goto label_3ebe6c;
        case 0x3ebe70u: goto label_3ebe70;
        case 0x3ebe74u: goto label_3ebe74;
        case 0x3ebe78u: goto label_3ebe78;
        case 0x3ebe7cu: goto label_3ebe7c;
        case 0x3ebe80u: goto label_3ebe80;
        case 0x3ebe84u: goto label_3ebe84;
        case 0x3ebe88u: goto label_3ebe88;
        case 0x3ebe8cu: goto label_3ebe8c;
        case 0x3ebe90u: goto label_3ebe90;
        case 0x3ebe94u: goto label_3ebe94;
        case 0x3ebe98u: goto label_3ebe98;
        case 0x3ebe9cu: goto label_3ebe9c;
        case 0x3ebea0u: goto label_3ebea0;
        case 0x3ebea4u: goto label_3ebea4;
        case 0x3ebea8u: goto label_3ebea8;
        case 0x3ebeacu: goto label_3ebeac;
        case 0x3ebeb0u: goto label_3ebeb0;
        case 0x3ebeb4u: goto label_3ebeb4;
        case 0x3ebeb8u: goto label_3ebeb8;
        case 0x3ebebcu: goto label_3ebebc;
        case 0x3ebec0u: goto label_3ebec0;
        case 0x3ebec4u: goto label_3ebec4;
        case 0x3ebec8u: goto label_3ebec8;
        case 0x3ebeccu: goto label_3ebecc;
        case 0x3ebed0u: goto label_3ebed0;
        case 0x3ebed4u: goto label_3ebed4;
        case 0x3ebed8u: goto label_3ebed8;
        case 0x3ebedcu: goto label_3ebedc;
        case 0x3ebee0u: goto label_3ebee0;
        case 0x3ebee4u: goto label_3ebee4;
        case 0x3ebee8u: goto label_3ebee8;
        case 0x3ebeecu: goto label_3ebeec;
        case 0x3ebef0u: goto label_3ebef0;
        case 0x3ebef4u: goto label_3ebef4;
        case 0x3ebef8u: goto label_3ebef8;
        case 0x3ebefcu: goto label_3ebefc;
        case 0x3ebf00u: goto label_3ebf00;
        case 0x3ebf04u: goto label_3ebf04;
        case 0x3ebf08u: goto label_3ebf08;
        case 0x3ebf0cu: goto label_3ebf0c;
        case 0x3ebf10u: goto label_3ebf10;
        case 0x3ebf14u: goto label_3ebf14;
        case 0x3ebf18u: goto label_3ebf18;
        case 0x3ebf1cu: goto label_3ebf1c;
        case 0x3ebf20u: goto label_3ebf20;
        case 0x3ebf24u: goto label_3ebf24;
        case 0x3ebf28u: goto label_3ebf28;
        case 0x3ebf2cu: goto label_3ebf2c;
        case 0x3ebf30u: goto label_3ebf30;
        case 0x3ebf34u: goto label_3ebf34;
        case 0x3ebf38u: goto label_3ebf38;
        case 0x3ebf3cu: goto label_3ebf3c;
        case 0x3ebf40u: goto label_3ebf40;
        case 0x3ebf44u: goto label_3ebf44;
        case 0x3ebf48u: goto label_3ebf48;
        case 0x3ebf4cu: goto label_3ebf4c;
        case 0x3ebf50u: goto label_3ebf50;
        case 0x3ebf54u: goto label_3ebf54;
        case 0x3ebf58u: goto label_3ebf58;
        case 0x3ebf5cu: goto label_3ebf5c;
        case 0x3ebf60u: goto label_3ebf60;
        case 0x3ebf64u: goto label_3ebf64;
        case 0x3ebf68u: goto label_3ebf68;
        case 0x3ebf6cu: goto label_3ebf6c;
        case 0x3ebf70u: goto label_3ebf70;
        case 0x3ebf74u: goto label_3ebf74;
        case 0x3ebf78u: goto label_3ebf78;
        case 0x3ebf7cu: goto label_3ebf7c;
        case 0x3ebf80u: goto label_3ebf80;
        case 0x3ebf84u: goto label_3ebf84;
        case 0x3ebf88u: goto label_3ebf88;
        case 0x3ebf8cu: goto label_3ebf8c;
        case 0x3ebf90u: goto label_3ebf90;
        case 0x3ebf94u: goto label_3ebf94;
        case 0x3ebf98u: goto label_3ebf98;
        case 0x3ebf9cu: goto label_3ebf9c;
        case 0x3ebfa0u: goto label_3ebfa0;
        case 0x3ebfa4u: goto label_3ebfa4;
        case 0x3ebfa8u: goto label_3ebfa8;
        case 0x3ebfacu: goto label_3ebfac;
        case 0x3ebfb0u: goto label_3ebfb0;
        case 0x3ebfb4u: goto label_3ebfb4;
        case 0x3ebfb8u: goto label_3ebfb8;
        case 0x3ebfbcu: goto label_3ebfbc;
        case 0x3ebfc0u: goto label_3ebfc0;
        case 0x3ebfc4u: goto label_3ebfc4;
        case 0x3ebfc8u: goto label_3ebfc8;
        case 0x3ebfccu: goto label_3ebfcc;
        case 0x3ebfd0u: goto label_3ebfd0;
        case 0x3ebfd4u: goto label_3ebfd4;
        case 0x3ebfd8u: goto label_3ebfd8;
        case 0x3ebfdcu: goto label_3ebfdc;
        case 0x3ebfe0u: goto label_3ebfe0;
        case 0x3ebfe4u: goto label_3ebfe4;
        case 0x3ebfe8u: goto label_3ebfe8;
        case 0x3ebfecu: goto label_3ebfec;
        case 0x3ebff0u: goto label_3ebff0;
        case 0x3ebff4u: goto label_3ebff4;
        case 0x3ebff8u: goto label_3ebff8;
        case 0x3ebffcu: goto label_3ebffc;
        case 0x3ec000u: goto label_3ec000;
        case 0x3ec004u: goto label_3ec004;
        case 0x3ec008u: goto label_3ec008;
        case 0x3ec00cu: goto label_3ec00c;
        case 0x3ec010u: goto label_3ec010;
        case 0x3ec014u: goto label_3ec014;
        case 0x3ec018u: goto label_3ec018;
        case 0x3ec01cu: goto label_3ec01c;
        case 0x3ec020u: goto label_3ec020;
        case 0x3ec024u: goto label_3ec024;
        case 0x3ec028u: goto label_3ec028;
        case 0x3ec02cu: goto label_3ec02c;
        case 0x3ec030u: goto label_3ec030;
        case 0x3ec034u: goto label_3ec034;
        case 0x3ec038u: goto label_3ec038;
        case 0x3ec03cu: goto label_3ec03c;
        case 0x3ec040u: goto label_3ec040;
        case 0x3ec044u: goto label_3ec044;
        case 0x3ec048u: goto label_3ec048;
        case 0x3ec04cu: goto label_3ec04c;
        case 0x3ec050u: goto label_3ec050;
        case 0x3ec054u: goto label_3ec054;
        case 0x3ec058u: goto label_3ec058;
        case 0x3ec05cu: goto label_3ec05c;
        case 0x3ec060u: goto label_3ec060;
        case 0x3ec064u: goto label_3ec064;
        case 0x3ec068u: goto label_3ec068;
        case 0x3ec06cu: goto label_3ec06c;
        case 0x3ec070u: goto label_3ec070;
        case 0x3ec074u: goto label_3ec074;
        case 0x3ec078u: goto label_3ec078;
        case 0x3ec07cu: goto label_3ec07c;
        case 0x3ec080u: goto label_3ec080;
        case 0x3ec084u: goto label_3ec084;
        case 0x3ec088u: goto label_3ec088;
        case 0x3ec08cu: goto label_3ec08c;
        case 0x3ec090u: goto label_3ec090;
        case 0x3ec094u: goto label_3ec094;
        case 0x3ec098u: goto label_3ec098;
        case 0x3ec09cu: goto label_3ec09c;
        case 0x3ec0a0u: goto label_3ec0a0;
        case 0x3ec0a4u: goto label_3ec0a4;
        case 0x3ec0a8u: goto label_3ec0a8;
        case 0x3ec0acu: goto label_3ec0ac;
        case 0x3ec0b0u: goto label_3ec0b0;
        case 0x3ec0b4u: goto label_3ec0b4;
        case 0x3ec0b8u: goto label_3ec0b8;
        case 0x3ec0bcu: goto label_3ec0bc;
        case 0x3ec0c0u: goto label_3ec0c0;
        case 0x3ec0c4u: goto label_3ec0c4;
        case 0x3ec0c8u: goto label_3ec0c8;
        case 0x3ec0ccu: goto label_3ec0cc;
        case 0x3ec0d0u: goto label_3ec0d0;
        case 0x3ec0d4u: goto label_3ec0d4;
        case 0x3ec0d8u: goto label_3ec0d8;
        case 0x3ec0dcu: goto label_3ec0dc;
        case 0x3ec0e0u: goto label_3ec0e0;
        case 0x3ec0e4u: goto label_3ec0e4;
        case 0x3ec0e8u: goto label_3ec0e8;
        case 0x3ec0ecu: goto label_3ec0ec;
        case 0x3ec0f0u: goto label_3ec0f0;
        case 0x3ec0f4u: goto label_3ec0f4;
        case 0x3ec0f8u: goto label_3ec0f8;
        case 0x3ec0fcu: goto label_3ec0fc;
        case 0x3ec100u: goto label_3ec100;
        case 0x3ec104u: goto label_3ec104;
        case 0x3ec108u: goto label_3ec108;
        case 0x3ec10cu: goto label_3ec10c;
        case 0x3ec110u: goto label_3ec110;
        case 0x3ec114u: goto label_3ec114;
        case 0x3ec118u: goto label_3ec118;
        case 0x3ec11cu: goto label_3ec11c;
        case 0x3ec120u: goto label_3ec120;
        case 0x3ec124u: goto label_3ec124;
        case 0x3ec128u: goto label_3ec128;
        case 0x3ec12cu: goto label_3ec12c;
        case 0x3ec130u: goto label_3ec130;
        case 0x3ec134u: goto label_3ec134;
        case 0x3ec138u: goto label_3ec138;
        case 0x3ec13cu: goto label_3ec13c;
        case 0x3ec140u: goto label_3ec140;
        case 0x3ec144u: goto label_3ec144;
        case 0x3ec148u: goto label_3ec148;
        case 0x3ec14cu: goto label_3ec14c;
        case 0x3ec150u: goto label_3ec150;
        case 0x3ec154u: goto label_3ec154;
        case 0x3ec158u: goto label_3ec158;
        case 0x3ec15cu: goto label_3ec15c;
        case 0x3ec160u: goto label_3ec160;
        case 0x3ec164u: goto label_3ec164;
        case 0x3ec168u: goto label_3ec168;
        case 0x3ec16cu: goto label_3ec16c;
        case 0x3ec170u: goto label_3ec170;
        case 0x3ec174u: goto label_3ec174;
        case 0x3ec178u: goto label_3ec178;
        case 0x3ec17cu: goto label_3ec17c;
        case 0x3ec180u: goto label_3ec180;
        case 0x3ec184u: goto label_3ec184;
        case 0x3ec188u: goto label_3ec188;
        case 0x3ec18cu: goto label_3ec18c;
        case 0x3ec190u: goto label_3ec190;
        case 0x3ec194u: goto label_3ec194;
        case 0x3ec198u: goto label_3ec198;
        case 0x3ec19cu: goto label_3ec19c;
        case 0x3ec1a0u: goto label_3ec1a0;
        case 0x3ec1a4u: goto label_3ec1a4;
        case 0x3ec1a8u: goto label_3ec1a8;
        case 0x3ec1acu: goto label_3ec1ac;
        case 0x3ec1b0u: goto label_3ec1b0;
        case 0x3ec1b4u: goto label_3ec1b4;
        case 0x3ec1b8u: goto label_3ec1b8;
        case 0x3ec1bcu: goto label_3ec1bc;
        case 0x3ec1c0u: goto label_3ec1c0;
        case 0x3ec1c4u: goto label_3ec1c4;
        case 0x3ec1c8u: goto label_3ec1c8;
        case 0x3ec1ccu: goto label_3ec1cc;
        case 0x3ec1d0u: goto label_3ec1d0;
        case 0x3ec1d4u: goto label_3ec1d4;
        case 0x3ec1d8u: goto label_3ec1d8;
        case 0x3ec1dcu: goto label_3ec1dc;
        case 0x3ec1e0u: goto label_3ec1e0;
        case 0x3ec1e4u: goto label_3ec1e4;
        case 0x3ec1e8u: goto label_3ec1e8;
        case 0x3ec1ecu: goto label_3ec1ec;
        case 0x3ec1f0u: goto label_3ec1f0;
        case 0x3ec1f4u: goto label_3ec1f4;
        case 0x3ec1f8u: goto label_3ec1f8;
        case 0x3ec1fcu: goto label_3ec1fc;
        case 0x3ec200u: goto label_3ec200;
        case 0x3ec204u: goto label_3ec204;
        case 0x3ec208u: goto label_3ec208;
        case 0x3ec20cu: goto label_3ec20c;
        case 0x3ec210u: goto label_3ec210;
        case 0x3ec214u: goto label_3ec214;
        case 0x3ec218u: goto label_3ec218;
        case 0x3ec21cu: goto label_3ec21c;
        case 0x3ec220u: goto label_3ec220;
        case 0x3ec224u: goto label_3ec224;
        case 0x3ec228u: goto label_3ec228;
        case 0x3ec22cu: goto label_3ec22c;
        case 0x3ec230u: goto label_3ec230;
        case 0x3ec234u: goto label_3ec234;
        case 0x3ec238u: goto label_3ec238;
        case 0x3ec23cu: goto label_3ec23c;
        case 0x3ec240u: goto label_3ec240;
        case 0x3ec244u: goto label_3ec244;
        case 0x3ec248u: goto label_3ec248;
        case 0x3ec24cu: goto label_3ec24c;
        case 0x3ec250u: goto label_3ec250;
        case 0x3ec254u: goto label_3ec254;
        case 0x3ec258u: goto label_3ec258;
        case 0x3ec25cu: goto label_3ec25c;
        case 0x3ec260u: goto label_3ec260;
        case 0x3ec264u: goto label_3ec264;
        case 0x3ec268u: goto label_3ec268;
        case 0x3ec26cu: goto label_3ec26c;
        case 0x3ec270u: goto label_3ec270;
        case 0x3ec274u: goto label_3ec274;
        case 0x3ec278u: goto label_3ec278;
        case 0x3ec27cu: goto label_3ec27c;
        case 0x3ec280u: goto label_3ec280;
        case 0x3ec284u: goto label_3ec284;
        case 0x3ec288u: goto label_3ec288;
        case 0x3ec28cu: goto label_3ec28c;
        case 0x3ec290u: goto label_3ec290;
        case 0x3ec294u: goto label_3ec294;
        case 0x3ec298u: goto label_3ec298;
        case 0x3ec29cu: goto label_3ec29c;
        case 0x3ec2a0u: goto label_3ec2a0;
        case 0x3ec2a4u: goto label_3ec2a4;
        case 0x3ec2a8u: goto label_3ec2a8;
        case 0x3ec2acu: goto label_3ec2ac;
        case 0x3ec2b0u: goto label_3ec2b0;
        case 0x3ec2b4u: goto label_3ec2b4;
        case 0x3ec2b8u: goto label_3ec2b8;
        case 0x3ec2bcu: goto label_3ec2bc;
        case 0x3ec2c0u: goto label_3ec2c0;
        case 0x3ec2c4u: goto label_3ec2c4;
        case 0x3ec2c8u: goto label_3ec2c8;
        case 0x3ec2ccu: goto label_3ec2cc;
        case 0x3ec2d0u: goto label_3ec2d0;
        case 0x3ec2d4u: goto label_3ec2d4;
        case 0x3ec2d8u: goto label_3ec2d8;
        case 0x3ec2dcu: goto label_3ec2dc;
        case 0x3ec2e0u: goto label_3ec2e0;
        case 0x3ec2e4u: goto label_3ec2e4;
        case 0x3ec2e8u: goto label_3ec2e8;
        case 0x3ec2ecu: goto label_3ec2ec;
        case 0x3ec2f0u: goto label_3ec2f0;
        case 0x3ec2f4u: goto label_3ec2f4;
        case 0x3ec2f8u: goto label_3ec2f8;
        case 0x3ec2fcu: goto label_3ec2fc;
        case 0x3ec300u: goto label_3ec300;
        case 0x3ec304u: goto label_3ec304;
        case 0x3ec308u: goto label_3ec308;
        case 0x3ec30cu: goto label_3ec30c;
        case 0x3ec310u: goto label_3ec310;
        case 0x3ec314u: goto label_3ec314;
        case 0x3ec318u: goto label_3ec318;
        case 0x3ec31cu: goto label_3ec31c;
        case 0x3ec320u: goto label_3ec320;
        case 0x3ec324u: goto label_3ec324;
        case 0x3ec328u: goto label_3ec328;
        case 0x3ec32cu: goto label_3ec32c;
        case 0x3ec330u: goto label_3ec330;
        case 0x3ec334u: goto label_3ec334;
        case 0x3ec338u: goto label_3ec338;
        case 0x3ec33cu: goto label_3ec33c;
        case 0x3ec340u: goto label_3ec340;
        case 0x3ec344u: goto label_3ec344;
        case 0x3ec348u: goto label_3ec348;
        case 0x3ec34cu: goto label_3ec34c;
        case 0x3ec350u: goto label_3ec350;
        case 0x3ec354u: goto label_3ec354;
        case 0x3ec358u: goto label_3ec358;
        case 0x3ec35cu: goto label_3ec35c;
        case 0x3ec360u: goto label_3ec360;
        case 0x3ec364u: goto label_3ec364;
        case 0x3ec368u: goto label_3ec368;
        case 0x3ec36cu: goto label_3ec36c;
        case 0x3ec370u: goto label_3ec370;
        case 0x3ec374u: goto label_3ec374;
        case 0x3ec378u: goto label_3ec378;
        case 0x3ec37cu: goto label_3ec37c;
        case 0x3ec380u: goto label_3ec380;
        case 0x3ec384u: goto label_3ec384;
        case 0x3ec388u: goto label_3ec388;
        case 0x3ec38cu: goto label_3ec38c;
        default: break;
    }

    ctx->pc = 0x3ebd50u;

label_3ebd50:
    // 0x3ebd50: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x3ebd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_3ebd54:
    // 0x3ebd54: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3ebd54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3ebd58:
    // 0x3ebd58: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3ebd58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_3ebd5c:
    // 0x3ebd5c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x3ebd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_3ebd60:
    // 0x3ebd60: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x3ebd60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_3ebd64:
    // 0x3ebd64: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x3ebd64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_3ebd68:
    // 0x3ebd68: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x3ebd68u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3ebd6c:
    // 0x3ebd6c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3ebd6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3ebd70:
    // 0x3ebd70: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x3ebd70u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3ebd74:
    // 0x3ebd74: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3ebd74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3ebd78:
    // 0x3ebd78: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3ebd78u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ebd7c:
    // 0x3ebd7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3ebd7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3ebd80:
    // 0x3ebd80: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3ebd80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ebd84:
    // 0x3ebd84: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3ebd84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3ebd88:
    // 0x3ebd88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ebd88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3ebd8c:
    // 0x3ebd8c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3ebd8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ebd90:
    // 0x3ebd90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ebd90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3ebd94:
    // 0x3ebd94: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3ebd94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ebd98:
    // 0x3ebd98: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x3ebd98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
label_3ebd9c:
    // 0x3ebd9c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3ebd9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ebda0:
    // 0x3ebda0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3ebda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3ebda4:
    // 0x3ebda4: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x3ebda4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
label_3ebda8:
    // 0x3ebda8: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x3ebda8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_3ebdac:
    // 0x3ebdac: 0x10000154  b           . + 4 + (0x154 << 2)
label_3ebdb0:
    if (ctx->pc == 0x3EBDB0u) {
        ctx->pc = 0x3EBDB0u;
            // 0x3ebdb0: 0xafa200a0  sw          $v0, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
        ctx->pc = 0x3EBDB4u;
        goto label_3ebdb4;
    }
    ctx->pc = 0x3EBDACu;
    {
        const bool branch_taken_0x3ebdac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBDB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EBDACu;
            // 0x3ebdb0: 0xafa200a0  sw          $v0, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebdac) {
            ctx->pc = 0x3EC300u;
            goto label_3ec300;
        }
    }
    ctx->pc = 0x3EBDB4u;
label_3ebdb4:
    // 0x3ebdb4: 0x0  nop
    ctx->pc = 0x3ebdb4u;
    // NOP
label_3ebdb8:
    // 0x3ebdb8: 0x8ee40020  lw          $a0, 0x20($s7)
    ctx->pc = 0x3ebdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 32)));
label_3ebdbc:
    // 0x3ebdbc: 0x8ee20024  lw          $v0, 0x24($s7)
    ctx->pc = 0x3ebdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 36)));
label_3ebdc0:
    // 0x3ebdc0: 0x9e082b  sltu        $at, $a0, $fp
    ctx->pc = 0x3ebdc0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_3ebdc4:
    // 0x3ebdc4: 0x441823  subu        $v1, $v0, $a0
    ctx->pc = 0x3ebdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3ebdc8:
    // 0x3ebdc8: 0xafa300c8  sw          $v1, 0xC8($sp)
    ctx->pc = 0x3ebdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
label_3ebdcc:
    // 0x3ebdcc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3ebdd0:
    if (ctx->pc == 0x3EBDD0u) {
        ctx->pc = 0x3EBDD0u;
            // 0x3ebdd0: 0x8ee20010  lw          $v0, 0x10($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
        ctx->pc = 0x3EBDD4u;
        goto label_3ebdd4;
    }
    ctx->pc = 0x3EBDCCu;
    {
        const bool branch_taken_0x3ebdcc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBDD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EBDCCu;
            // 0x3ebdd0: 0x8ee20010  lw          $v0, 0x10($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebdcc) {
            ctx->pc = 0x3EBDD8u;
            goto label_3ebdd8;
        }
    }
    ctx->pc = 0x3EBDD4u;
label_3ebdd4:
    // 0x3ebdd4: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x3ebdd4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ebdd8:
    // 0x3ebdd8: 0x8ee40010  lw          $a0, 0x10($s7)
    ctx->pc = 0x3ebdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
label_3ebddc:
    // 0x3ebddc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3ebddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_3ebde0:
    // 0x3ebde0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3ebde0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_3ebde4:
    // 0x3ebde4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3ebde4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3ebde8:
    // 0x3ebde8: 0xaee30010  sw          $v1, 0x10($s7)
    ctx->pc = 0x3ebde8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 16), GPR_U32(ctx, 3));
label_3ebdec:
    // 0x3ebdec: 0x8ee40020  lw          $a0, 0x20($s7)
    ctx->pc = 0x3ebdecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 32)));
label_3ebdf0:
    // 0x3ebdf0: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x3ebdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_3ebdf4:
    // 0x3ebdf4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3ebdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3ebdf8:
    // 0x3ebdf8: 0xaee30020  sw          $v1, 0x20($s7)
    ctx->pc = 0x3ebdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 32), GPR_U32(ctx, 3));
label_3ebdfc:
    // 0x3ebdfc: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x3ebdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_3ebe00:
    // 0x3ebe00: 0x1c60000f  bgtz        $v1, . + 4 + (0xF << 2)
label_3ebe04:
    if (ctx->pc == 0x3EBE04u) {
        ctx->pc = 0x3EBE08u;
        goto label_3ebe08;
    }
    ctx->pc = 0x3EBE00u;
    {
        const bool branch_taken_0x3ebe00 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x3ebe00) {
            ctx->pc = 0x3EBE40u;
            goto label_3ebe40;
        }
    }
    ctx->pc = 0x3EBE08u;
label_3ebe08:
    // 0x3ebe08: 0x8ee30028  lw          $v1, 0x28($s7)
    ctx->pc = 0x3ebe08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 40)));
label_3ebe0c:
    // 0x3ebe0c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_3ebe10:
    if (ctx->pc == 0x3EBE10u) {
        ctx->pc = 0x3EBE14u;
        goto label_3ebe14;
    }
    ctx->pc = 0x3EBE0Cu;
    {
        const bool branch_taken_0x3ebe0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ebe0c) {
            ctx->pc = 0x3EBE30u;
            goto label_3ebe30;
        }
    }
    ctx->pc = 0x3EBE14u;
label_3ebe14:
    // 0x3ebe14: 0x8ee40020  lw          $a0, 0x20($s7)
    ctx->pc = 0x3ebe14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 32)));
label_3ebe18:
    // 0x3ebe18: 0x8ee30024  lw          $v1, 0x24($s7)
    ctx->pc = 0x3ebe18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 36)));
label_3ebe1c:
    // 0x3ebe1c: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x3ebe1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3ebe20:
    // 0x3ebe20: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_3ebe24:
    if (ctx->pc == 0x3EBE24u) {
        ctx->pc = 0x3EBE28u;
        goto label_3ebe28;
    }
    ctx->pc = 0x3EBE20u;
    {
        const bool branch_taken_0x3ebe20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ebe20) {
            ctx->pc = 0x3EBE30u;
            goto label_3ebe30;
        }
    }
    ctx->pc = 0x3EBE28u;
label_3ebe28:
    // 0x3ebe28: 0x10000003  b           . + 4 + (0x3 << 2)
label_3ebe2c:
    if (ctx->pc == 0x3EBE2Cu) {
        ctx->pc = 0x3EBE2Cu;
            // 0x3ebe2c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3EBE30u;
        goto label_3ebe30;
    }
    ctx->pc = 0x3EBE28u;
    {
        const bool branch_taken_0x3ebe28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EBE28u;
            // 0x3ebe2c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebe28) {
            ctx->pc = 0x3EBE38u;
            goto label_3ebe38;
        }
    }
    ctx->pc = 0x3EBE30u;
label_3ebe30:
    // 0x3ebe30: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3ebe30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ebe34:
    // 0x3ebe34: 0x0  nop
    ctx->pc = 0x3ebe34u;
    // NOP
label_3ebe38:
    // 0x3ebe38: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_3ebe3c:
    if (ctx->pc == 0x3EBE3Cu) {
        ctx->pc = 0x3EBE40u;
        goto label_3ebe40;
    }
    ctx->pc = 0x3EBE38u;
    {
        const bool branch_taken_0x3ebe38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ebe38) {
            ctx->pc = 0x3EBE48u;
            goto label_3ebe48;
        }
    }
    ctx->pc = 0x3EBE40u;
label_3ebe40:
    // 0x3ebe40: 0x1000000d  b           . + 4 + (0xD << 2)
label_3ebe44:
    if (ctx->pc == 0x3EBE44u) {
        ctx->pc = 0x3EBE48u;
        goto label_3ebe48;
    }
    ctx->pc = 0x3EBE40u;
    {
        const bool branch_taken_0x3ebe40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ebe40) {
            ctx->pc = 0x3EBE78u;
            goto label_3ebe78;
        }
    }
    ctx->pc = 0x3EBE48u;
label_3ebe48:
    // 0x3ebe48: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3ebe48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3ebe4c:
    // 0x3ebe4c: 0x8c4267f0  lw          $v0, 0x67F0($v0)
    ctx->pc = 0x3ebe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26608)));
label_3ebe50:
    // 0x3ebe50: 0x40f809  jalr        $v0
label_3ebe54:
    if (ctx->pc == 0x3EBE54u) {
        ctx->pc = 0x3EBE54u;
            // 0x3ebe54: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->pc = 0x3EBE58u;
        goto label_3ebe58;
    }
    ctx->pc = 0x3EBE50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EBE58u);
        ctx->pc = 0x3EBE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EBE50u;
            // 0x3ebe54: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3EBE58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3EBE58u; }
            if (ctx->pc != 0x3EBE58u) { return; }
        }
        }
    }
    ctx->pc = 0x3EBE58u;
label_3ebe58:
    // 0x3ebe58: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x3ebe58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_3ebe5c:
    // 0x3ebe5c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3ebe5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3ebe60:
    // 0x3ebe60: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3ebe60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3ebe64:
    // 0x3ebe64: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
label_3ebe68:
    if (ctx->pc == 0x3EBE68u) {
        ctx->pc = 0x3EBE6Cu;
        goto label_3ebe6c;
    }
    ctx->pc = 0x3EBE64u;
    {
        const bool branch_taken_0x3ebe64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ebe64) {
            ctx->pc = 0x3EBDB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ebdb8;
        }
    }
    ctx->pc = 0x3EBE6Cu;
label_3ebe6c:
    // 0x3ebe6c: 0x2402ff3c  addiu       $v0, $zero, -0xC4
    ctx->pc = 0x3ebe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967100));
label_3ebe70:
    // 0x3ebe70: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x3ebe70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_3ebe74:
    // 0x3ebe74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ebe74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ebe78:
    // 0x3ebe78: 0x10400135  beqz        $v0, . + 4 + (0x135 << 2)
label_3ebe7c:
    if (ctx->pc == 0x3EBE7Cu) {
        ctx->pc = 0x3EBE7Cu;
            // 0x3ebe7c: 0xafa200cc  sw          $v0, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
        ctx->pc = 0x3EBE80u;
        goto label_3ebe80;
    }
    ctx->pc = 0x3EBE78u;
    {
        const bool branch_taken_0x3ebe78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBE7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EBE78u;
            // 0x3ebe7c: 0xafa200cc  sw          $v0, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebe78) {
            ctx->pc = 0x3EC350u;
            goto label_3ec350;
        }
    }
    ctx->pc = 0x3EBE80u;
label_3ebe80:
    // 0x3ebe80: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x3ebe80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_3ebe84:
    // 0x3ebe84: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_3ebe88:
    if (ctx->pc == 0x3EBE88u) {
        ctx->pc = 0x3EBE8Cu;
        goto label_3ebe8c;
    }
    ctx->pc = 0x3EBE84u;
    {
        const bool branch_taken_0x3ebe84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ebe84) {
            ctx->pc = 0x3EBEA8u;
            goto label_3ebea8;
        }
    }
    ctx->pc = 0x3EBE8Cu;
label_3ebe8c:
    // 0x3ebe8c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3ebe8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3ebe90:
    // 0x3ebe90: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x3ebe90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
label_3ebe94:
    // 0x3ebe94: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x3ebe94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_3ebe98:
    // 0x3ebe98: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x3ebe98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_3ebe9c:
    // 0x3ebe9c: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x3ebe9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_3ebea0:
    // 0x3ebea0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3ebea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3ebea4:
    // 0x3ebea4: 0xafa300c8  sw          $v1, 0xC8($sp)
    ctx->pc = 0x3ebea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
label_3ebea8:
    // 0x3ebea8: 0x1640002b  bnez        $s2, . + 4 + (0x2B << 2)
label_3ebeac:
    if (ctx->pc == 0x3EBEACu) {
        ctx->pc = 0x3EBEB0u;
        goto label_3ebeb0;
    }
    ctx->pc = 0x3EBEA8u;
    {
        const bool branch_taken_0x3ebea8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ebea8) {
            ctx->pc = 0x3EBF58u;
            goto label_3ebf58;
        }
    }
    ctx->pc = 0x3EBEB0u;
label_3ebeb0:
    // 0x3ebeb0: 0x8e850024  lw          $a1, 0x24($s4)
    ctx->pc = 0x3ebeb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_3ebeb4:
    // 0x3ebeb4: 0x8e840020  lw          $a0, 0x20($s4)
    ctx->pc = 0x3ebeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_3ebeb8:
    // 0x3ebeb8: 0x8e830038  lw          $v1, 0x38($s4)
    ctx->pc = 0x3ebeb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
label_3ebebc:
    // 0x3ebebc: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x3ebebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_3ebec0:
    // 0x3ebec0: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x3ebec0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_3ebec4:
    // 0x3ebec4: 0x8e86002c  lw          $a2, 0x2C($s4)
    ctx->pc = 0x3ebec4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_3ebec8:
    // 0x3ebec8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3ebec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3ebecc:
    // 0x3ebecc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3ebeccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3ebed0:
    // 0x3ebed0: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x3ebed0u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3ebed4:
    // 0x3ebed4: 0x1012  mflo        $v0
    ctx->pc = 0x3ebed4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_3ebed8:
    // 0x3ebed8: 0xc29018  mult        $s2, $a2, $v0
    ctx->pc = 0x3ebed8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
label_3ebedc:
    // 0x3ebedc: 0x1a40000a  blez        $s2, . + 4 + (0xA << 2)
label_3ebee0:
    if (ctx->pc == 0x3EBEE0u) {
        ctx->pc = 0x3EBEE4u;
        goto label_3ebee4;
    }
    ctx->pc = 0x3EBEDCu;
    {
        const bool branch_taken_0x3ebedc = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x3ebedc) {
            ctx->pc = 0x3EBF08u;
            goto label_3ebf08;
        }
    }
    ctx->pc = 0x3EBEE4u;
label_3ebee4:
    // 0x3ebee4: 0x8e930014  lw          $s3, 0x14($s4)
    ctx->pc = 0x3ebee4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_3ebee8:
    // 0x3ebee8: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x3ebee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_3ebeec:
    // 0x3ebeec: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x3ebeecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_3ebef0:
    // 0x3ebef0: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x3ebef0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3ebef4:
    // 0x3ebef4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3ebef8:
    if (ctx->pc == 0x3EBEF8u) {
        ctx->pc = 0x3EBEFCu;
        goto label_3ebefc;
    }
    ctx->pc = 0x3EBEF4u;
    {
        const bool branch_taken_0x3ebef4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ebef4) {
            ctx->pc = 0x3EBF00u;
            goto label_3ebf00;
        }
    }
    ctx->pc = 0x3EBEFCu;
label_3ebefc:
    // 0x3ebefc: 0x739023  subu        $s2, $v1, $s3
    ctx->pc = 0x3ebefcu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_3ebf00:
    // 0x3ebf00: 0x10000003  b           . + 4 + (0x3 << 2)
label_3ebf04:
    if (ctx->pc == 0x3EBF04u) {
        ctx->pc = 0x3EBF08u;
        goto label_3ebf08;
    }
    ctx->pc = 0x3EBF00u;
    {
        const bool branch_taken_0x3ebf00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ebf00) {
            ctx->pc = 0x3EBF10u;
            goto label_3ebf10;
        }
    }
    ctx->pc = 0x3EBF08u;
label_3ebf08:
    // 0x3ebf08: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3ebf08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ebf0c:
    // 0x3ebf0c: 0x0  nop
    ctx->pc = 0x3ebf0cu;
    // NOP
label_3ebf10:
    // 0x3ebf10: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_3ebf14:
    if (ctx->pc == 0x3EBF14u) {
        ctx->pc = 0x3EBF18u;
        goto label_3ebf18;
    }
    ctx->pc = 0x3EBF10u;
    {
        const bool branch_taken_0x3ebf10 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ebf10) {
            ctx->pc = 0x3EBF20u;
            goto label_3ebf20;
        }
    }
    ctx->pc = 0x3EBF18u;
label_3ebf18:
    // 0x3ebf18: 0x1000000d  b           . + 4 + (0xD << 2)
label_3ebf1c:
    if (ctx->pc == 0x3EBF1Cu) {
        ctx->pc = 0x3EBF20u;
        goto label_3ebf20;
    }
    ctx->pc = 0x3EBF18u;
    {
        const bool branch_taken_0x3ebf18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ebf18) {
            ctx->pc = 0x3EBF50u;
            goto label_3ebf50;
        }
    }
    ctx->pc = 0x3EBF20u;
label_3ebf20:
    // 0x3ebf20: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3ebf20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3ebf24:
    // 0x3ebf24: 0x8c4267f0  lw          $v0, 0x67F0($v0)
    ctx->pc = 0x3ebf24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26608)));
label_3ebf28:
    // 0x3ebf28: 0x40f809  jalr        $v0
label_3ebf2c:
    if (ctx->pc == 0x3EBF2Cu) {
        ctx->pc = 0x3EBF2Cu;
            // 0x3ebf2c: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->pc = 0x3EBF30u;
        goto label_3ebf30;
    }
    ctx->pc = 0x3EBF28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EBF30u);
        ctx->pc = 0x3EBF2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EBF28u;
            // 0x3ebf2c: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3EBF30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3EBF30u; }
            if (ctx->pc != 0x3EBF30u) { return; }
        }
        }
    }
    ctx->pc = 0x3EBF30u;
label_3ebf30:
    // 0x3ebf30: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x3ebf30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_3ebf34:
    // 0x3ebf34: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3ebf34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3ebf38:
    // 0x3ebf38: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3ebf38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3ebf3c:
    // 0x3ebf3c: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
label_3ebf40:
    if (ctx->pc == 0x3EBF40u) {
        ctx->pc = 0x3EBF44u;
        goto label_3ebf44;
    }
    ctx->pc = 0x3EBF3Cu;
    {
        const bool branch_taken_0x3ebf3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ebf3c) {
            ctx->pc = 0x3EBEB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ebeb0;
        }
    }
    ctx->pc = 0x3EBF44u;
label_3ebf44:
    // 0x3ebf44: 0x2402ff3c  addiu       $v0, $zero, -0xC4
    ctx->pc = 0x3ebf44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967100));
label_3ebf48:
    // 0x3ebf48: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3ebf48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ebf4c:
    // 0x3ebf4c: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x3ebf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_3ebf50:
    // 0x3ebf50: 0x52600100  beql        $s3, $zero, . + 4 + (0x100 << 2)
label_3ebf54:
    if (ctx->pc == 0x3EBF54u) {
        ctx->pc = 0x3EBF54u;
            // 0x3ebf54: 0x8fa200a0  lw          $v0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x3EBF58u;
        goto label_3ebf58;
    }
    ctx->pc = 0x3EBF50u;
    {
        const bool branch_taken_0x3ebf50 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ebf50) {
            ctx->pc = 0x3EBF54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3EBF50u;
            // 0x3ebf54: 0x8fa200a0  lw          $v0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3EC354u;
            goto label_3ec354;
        }
    }
    ctx->pc = 0x3EBF58u;
label_3ebf58:
    // 0x3ebf58: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3ebf58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3ebf5c:
    // 0x3ebf5c: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
label_3ebf60:
    if (ctx->pc == 0x3EBF60u) {
        ctx->pc = 0x3EBF64u;
        goto label_3ebf64;
    }
    ctx->pc = 0x3EBF5Cu;
    {
        const bool branch_taken_0x3ebf5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ebf5c) {
            ctx->pc = 0x3EBF80u;
            goto label_3ebf80;
        }
    }
    ctx->pc = 0x3EBF64u;
label_3ebf64:
    // 0x3ebf64: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_3ebf68:
    if (ctx->pc == 0x3EBF68u) {
        ctx->pc = 0x3EBF6Cu;
        goto label_3ebf6c;
    }
    ctx->pc = 0x3EBF64u;
    {
        const bool branch_taken_0x3ebf64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ebf64) {
            ctx->pc = 0x3EBF78u;
            goto label_3ebf78;
        }
    }
    ctx->pc = 0x3EBF6Cu;
label_3ebf6c:
    // 0x3ebf6c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_3ebf70:
    if (ctx->pc == 0x3EBF70u) {
        ctx->pc = 0x3EBF74u;
        goto label_3ebf74;
    }
    ctx->pc = 0x3EBF6Cu;
    {
        const bool branch_taken_0x3ebf6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ebf6c) {
            ctx->pc = 0x3EBFD8u;
            goto label_3ebfd8;
        }
    }
    ctx->pc = 0x3EBF74u;
label_3ebf74:
    // 0x3ebf74: 0x0  nop
    ctx->pc = 0x3ebf74u;
    // NOP
label_3ebf78:
    // 0x3ebf78: 0x10000037  b           . + 4 + (0x37 << 2)
label_3ebf7c:
    if (ctx->pc == 0x3EBF7Cu) {
        ctx->pc = 0x3EBF7Cu;
            // 0x3ebf7c: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x3EBF80u;
        goto label_3ebf80;
    }
    ctx->pc = 0x3EBF78u;
    {
        const bool branch_taken_0x3ebf78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBF7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EBF78u;
            // 0x3ebf7c: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebf78) {
            ctx->pc = 0x3EC058u;
            goto label_3ec058;
        }
    }
    ctx->pc = 0x3EBF80u;
label_3ebf80:
    // 0x3ebf80: 0x1a400033  blez        $s2, . + 4 + (0x33 << 2)
label_3ebf84:
    if (ctx->pc == 0x3EBF84u) {
        ctx->pc = 0x3EBF88u;
        goto label_3ebf88;
    }
    ctx->pc = 0x3EBF80u;
    {
        const bool branch_taken_0x3ebf80 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x3ebf80) {
            ctx->pc = 0x3EC050u;
            goto label_3ec050;
        }
    }
    ctx->pc = 0x3EBF88u;
label_3ebf88:
    // 0x3ebf88: 0xa2700000  sb          $s0, 0x0($s3)
    ctx->pc = 0x3ebf88u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 16));
label_3ebf8c:
    // 0x3ebf8c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3ebf8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3ebf90:
    // 0x3ebf90: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x3ebf90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_3ebf94:
    // 0x3ebf94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ebf94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3ebf98:
    // 0x3ebf98: 0xae820014  sw          $v0, 0x14($s4)
    ctx->pc = 0x3ebf98u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
label_3ebf9c:
    // 0x3ebf9c: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x3ebf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_3ebfa0:
    // 0x3ebfa0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ebfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3ebfa4:
    // 0x3ebfa4: 0xae820024  sw          $v0, 0x24($s4)
    ctx->pc = 0x3ebfa4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
label_3ebfa8:
    // 0x3ebfa8: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x3ebfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_3ebfac:
    // 0x3ebfac: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x3ebfacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_3ebfb0:
    // 0x3ebfb0: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x3ebfb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3ebfb4:
    // 0x3ebfb4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_3ebfb8:
    if (ctx->pc == 0x3EBFB8u) {
        ctx->pc = 0x3EBFB8u;
            // 0x3ebfb8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x3EBFBCu;
        goto label_3ebfbc;
    }
    ctx->pc = 0x3EBFB4u;
    {
        const bool branch_taken_0x3ebfb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EBFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EBFB4u;
            // 0x3ebfb8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebfb4) {
            ctx->pc = 0x3EBFC8u;
            goto label_3ebfc8;
        }
    }
    ctx->pc = 0x3EBFBCu;
label_3ebfbc:
    // 0x3ebfbc: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x3ebfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_3ebfc0:
    // 0x3ebfc0: 0xae820014  sw          $v0, 0x14($s4)
    ctx->pc = 0x3ebfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
label_3ebfc4:
    // 0x3ebfc4: 0x0  nop
    ctx->pc = 0x3ebfc4u;
    // NOP
label_3ebfc8:
    // 0x3ebfc8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3ebfc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ebfcc:
    // 0x3ebfcc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3ebfccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ebfd0:
    // 0x3ebfd0: 0x10000021  b           . + 4 + (0x21 << 2)
label_3ebfd4:
    if (ctx->pc == 0x3EBFD4u) {
        ctx->pc = 0x3EBFD4u;
            // 0x3ebfd4: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x3EBFD8u;
        goto label_3ebfd8;
    }
    ctx->pc = 0x3EBFD0u;
    {
        const bool branch_taken_0x3ebfd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EBFD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EBFD0u;
            // 0x3ebfd4: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ebfd0) {
            ctx->pc = 0x3EC058u;
            goto label_3ec058;
        }
    }
    ctx->pc = 0x3EBFD8u;
label_3ebfd8:
    // 0x3ebfd8: 0x250102a  slt         $v0, $s2, $s0
    ctx->pc = 0x3ebfd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_3ebfdc:
    // 0x3ebfdc: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_3ebfe0:
    if (ctx->pc == 0x3EBFE0u) {
        ctx->pc = 0x3EBFE4u;
        goto label_3ebfe4;
    }
    ctx->pc = 0x3EBFDCu;
    {
        const bool branch_taken_0x3ebfdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ebfdc) {
            ctx->pc = 0x3EC050u;
            goto label_3ec050;
        }
    }
    ctx->pc = 0x3EBFE4u;
label_3ebfe4:
    // 0x3ebfe4: 0x2711823  subu        $v1, $s3, $s1
    ctx->pc = 0x3ebfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_3ebfe8:
    // 0x3ebfe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ebfe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ebfec:
    // 0x3ebfec: 0x0  nop
    ctx->pc = 0x3ebfecu;
    // NOP
label_3ebff0:
    // 0x3ebff0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3ebff0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3ebff4:
    // 0x3ebff4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x3ebff4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_3ebff8:
    // 0x3ebff8: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3ebff8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3ebffc:
    // 0x3ebffc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ebffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3ec000:
    // 0x3ec000: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3ec000u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3ec004:
    // 0x3ec004: 0x1e00fffa  bgtz        $s0, . + 4 + (-0x6 << 2)
label_3ec008:
    if (ctx->pc == 0x3EC008u) {
        ctx->pc = 0x3EC00Cu;
        goto label_3ec00c;
    }
    ctx->pc = 0x3EC004u;
    {
        const bool branch_taken_0x3ec004 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x3ec004) {
            ctx->pc = 0x3EBFF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ebff0;
        }
    }
    ctx->pc = 0x3EC00Cu;
label_3ec00c:
    // 0x3ec00c: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x3ec00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_3ec010:
    // 0x3ec010: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3ec010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3ec014:
    // 0x3ec014: 0xae820014  sw          $v0, 0x14($s4)
    ctx->pc = 0x3ec014u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
label_3ec018:
    // 0x3ec018: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x3ec018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_3ec01c:
    // 0x3ec01c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3ec01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3ec020:
    // 0x3ec020: 0xae820024  sw          $v0, 0x24($s4)
    ctx->pc = 0x3ec020u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
label_3ec024:
    // 0x3ec024: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x3ec024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_3ec028:
    // 0x3ec028: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x3ec028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_3ec02c:
    // 0x3ec02c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x3ec02cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3ec030:
    // 0x3ec030: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3ec034:
    if (ctx->pc == 0x3EC034u) {
        ctx->pc = 0x3EC034u;
            // 0x3ec034: 0x2449023  subu        $s2, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->pc = 0x3EC038u;
        goto label_3ec038;
    }
    ctx->pc = 0x3EC030u;
    {
        const bool branch_taken_0x3ec030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EC034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EC030u;
            // 0x3ec034: 0x2449023  subu        $s2, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec030) {
            ctx->pc = 0x3EC040u;
            goto label_3ec040;
        }
    }
    ctx->pc = 0x3EC038u;
label_3ec038:
    // 0x3ec038: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x3ec038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_3ec03c:
    // 0x3ec03c: 0xae820014  sw          $v0, 0x14($s4)
    ctx->pc = 0x3ec03cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
label_3ec040:
    // 0x3ec040: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3ec040u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ec044:
    // 0x3ec044: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3ec044u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ec048:
    // 0x3ec048: 0x10000003  b           . + 4 + (0x3 << 2)
label_3ec04c:
    if (ctx->pc == 0x3EC04Cu) {
        ctx->pc = 0x3EC04Cu;
            // 0x3ec04c: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x3EC050u;
        goto label_3ec050;
    }
    ctx->pc = 0x3EC048u;
    {
        const bool branch_taken_0x3ec048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC04Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EC048u;
            // 0x3ec04c: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec048) {
            ctx->pc = 0x3EC058u;
            goto label_3ec058;
        }
    }
    ctx->pc = 0x3EC050u;
label_3ec050:
    // 0x3ec050: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ec050u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ec054:
    // 0x3ec054: 0x0  nop
    ctx->pc = 0x3ec054u;
    // NOP
label_3ec058:
    // 0x3ec058: 0x1040ff93  beqz        $v0, . + 4 + (-0x6D << 2)
label_3ec05c:
    if (ctx->pc == 0x3EC05Cu) {
        ctx->pc = 0x3EC060u;
        goto label_3ec060;
    }
    ctx->pc = 0x3EC058u;
    {
        const bool branch_taken_0x3ec058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ec058) {
            ctx->pc = 0x3EBEA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ebea8;
        }
    }
    ctx->pc = 0x3EC060u;
label_3ec060:
    // 0x3ec060: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x3ec060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_3ec064:
    // 0x3ec064: 0x186000a6  blez        $v1, . + 4 + (0xA6 << 2)
label_3ec068:
    if (ctx->pc == 0x3EC068u) {
        ctx->pc = 0x3EC06Cu;
        goto label_3ec06c;
    }
    ctx->pc = 0x3EC064u;
    {
        const bool branch_taken_0x3ec064 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x3ec064) {
            ctx->pc = 0x3EC300u;
            goto label_3ec300;
        }
    }
    ctx->pc = 0x3EC06Cu;
label_3ec06c:
    // 0x3ec06c: 0x0  nop
    ctx->pc = 0x3ec06cu;
    // NOP
label_3ec070:
    // 0x3ec070: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
label_3ec074:
    if (ctx->pc == 0x3EC074u) {
        ctx->pc = 0x3EC078u;
        goto label_3ec078;
    }
    ctx->pc = 0x3EC070u;
    {
        const bool branch_taken_0x3ec070 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x3ec070) {
            ctx->pc = 0x3EC080u;
            goto label_3ec080;
        }
    }
    ctx->pc = 0x3EC078u;
label_3ec078:
    // 0x3ec078: 0x10000051  b           . + 4 + (0x51 << 2)
label_3ec07c:
    if (ctx->pc == 0x3EC07Cu) {
        ctx->pc = 0x3EC07Cu;
            // 0x3ec07c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EC080u;
        goto label_3ec080;
    }
    ctx->pc = 0x3EC078u;
    {
        const bool branch_taken_0x3ec078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EC078u;
            // 0x3ec07c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec078) {
            ctx->pc = 0x3EC1C0u;
            goto label_3ec1c0;
        }
    }
    ctx->pc = 0x3EC080u;
label_3ec080:
    // 0x3ec080: 0x8fa800cc  lw          $t0, 0xCC($sp)
    ctx->pc = 0x3ec080u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_3ec084:
    // 0x3ec084: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x3ec084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_3ec088:
    // 0x3ec088: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x3ec088u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_3ec08c:
    // 0x3ec08c: 0x2487ffff  addiu       $a3, $a0, -0x1
    ctx->pc = 0x3ec08cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_3ec090:
    // 0x3ec090: 0xe21007  srav        $v0, $v0, $a3
    ctx->pc = 0x3ec090u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
label_3ec094:
    // 0x3ec094: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3ec094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3ec098:
    // 0x3ec098: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_3ec09c:
    if (ctx->pc == 0x3EC09Cu) {
        ctx->pc = 0x3EC0A0u;
        goto label_3ec0a0;
    }
    ctx->pc = 0x3EC098u;
    {
        const bool branch_taken_0x3ec098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ec098) {
            ctx->pc = 0x3EC130u;
            goto label_3ec130;
        }
    }
    ctx->pc = 0x3EC0A0u;
label_3ec0a0:
    // 0x3ec0a0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3ec0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3ec0a4:
    // 0x3ec0a4: 0x92a20009  lbu         $v0, 0x9($s5)
    ctx->pc = 0x3ec0a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 9)));
label_3ec0a8:
    // 0x3ec0a8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3ec0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_3ec0ac:
    // 0x3ec0ac: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3ec0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3ec0b0:
    // 0x3ec0b0: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x3ec0b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3ec0b4:
    // 0x3ec0b4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_3ec0b8:
    if (ctx->pc == 0x3EC0B8u) {
        ctx->pc = 0x3EC0BCu;
        goto label_3ec0bc;
    }
    ctx->pc = 0x3EC0B4u;
    {
        const bool branch_taken_0x3ec0b4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ec0b4) {
            ctx->pc = 0x3EC0C8u;
            goto label_3ec0c8;
        }
    }
    ctx->pc = 0x3EC0BCu;
label_3ec0bc:
    // 0x3ec0bc: 0x10000040  b           . + 4 + (0x40 << 2)
label_3ec0c0:
    if (ctx->pc == 0x3EC0C0u) {
        ctx->pc = 0x3EC0C0u;
            // 0x3ec0c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EC0C4u;
        goto label_3ec0c4;
    }
    ctx->pc = 0x3EC0BCu;
    {
        const bool branch_taken_0x3ec0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC0C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EC0BCu;
            // 0x3ec0c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec0bc) {
            ctx->pc = 0x3EC1C0u;
            goto label_3ec1c0;
        }
    }
    ctx->pc = 0x3EC0C4u;
label_3ec0c4:
    // 0x3ec0c4: 0x0  nop
    ctx->pc = 0x3ec0c4u;
    // NOP
label_3ec0c8:
    // 0x3ec0c8: 0x14e00009  bnez        $a3, . + 4 + (0x9 << 2)
label_3ec0cc:
    if (ctx->pc == 0x3EC0CCu) {
        ctx->pc = 0x3EC0CCu;
            // 0x3ec0cc: 0xafa700c4  sw          $a3, 0xC4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 7));
        ctx->pc = 0x3EC0D0u;
        goto label_3ec0d0;
    }
    ctx->pc = 0x3EC0C8u;
    {
        const bool branch_taken_0x3ec0c8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EC0CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EC0C8u;
            // 0x3ec0cc: 0xafa700c4  sw          $a3, 0xC4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec0c8) {
            ctx->pc = 0x3EC0F0u;
            goto label_3ec0f0;
        }
    }
    ctx->pc = 0x3EC0D0u;
label_3ec0d0:
    // 0x3ec0d0: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x3ec0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3ec0d4:
    // 0x3ec0d4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3ec0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3ec0d8:
    // 0x3ec0d8: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x3ec0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
label_3ec0dc:
    // 0x3ec0dc: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x3ec0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_3ec0e0:
    // 0x3ec0e0: 0xafa300c4  sw          $v1, 0xC4($sp)
    ctx->pc = 0x3ec0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 3));
label_3ec0e4:
    // 0x3ec0e4: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x3ec0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3ec0e8:
    // 0x3ec0e8: 0xafa300c8  sw          $v1, 0xC8($sp)
    ctx->pc = 0x3ec0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
label_3ec0ec:
    // 0x3ec0ec: 0x0  nop
    ctx->pc = 0x3ec0ecu;
    // NOP
label_3ec0f0:
    // 0x3ec0f0: 0x92a80004  lbu         $t0, 0x4($s5)
    ctx->pc = 0x3ec0f0u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 4)));
label_3ec0f4:
    // 0x3ec0f4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3ec0f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3ec0f8:
    // 0x3ec0f8: 0x27a500cc  addiu       $a1, $sp, 0xCC
    ctx->pc = 0x3ec0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
label_3ec0fc:
    // 0x3ec0fc: 0x27a600c8  addiu       $a2, $sp, 0xC8
    ctx->pc = 0x3ec0fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_3ec100:
    // 0x3ec100: 0xc0fad9c  jal         func_3EB670
label_3ec104:
    if (ctx->pc == 0x3EC104u) {
        ctx->pc = 0x3EC104u;
            // 0x3ec104: 0x27a700c4  addiu       $a3, $sp, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
        ctx->pc = 0x3EC108u;
        goto label_3ec108;
    }
    ctx->pc = 0x3EC100u;
    SET_GPR_U32(ctx, 31, 0x3EC108u);
    ctx->pc = 0x3EC104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EC100u;
            // 0x3ec104: 0x27a700c4  addiu       $a3, $sp, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3EB670u;
    if (runtime->hasFunction(0x3EB670u)) {
        auto targetFn = runtime->lookupFunction(0x3EB670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EC108u; }
        if (ctx->pc != 0x3EC108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003EB670_0x3eb670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EC108u; }
        if (ctx->pc != 0x3EC108u) { return; }
    }
    ctx->pc = 0x3EC108u;
label_3ec108:
    // 0x3ec108: 0x92a80005  lbu         $t0, 0x5($s5)
    ctx->pc = 0x3ec108u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 5)));
label_3ec10c:
    // 0x3ec10c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3ec10cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ec110:
    // 0x3ec110: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3ec110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3ec114:
    // 0x3ec114: 0x27a500cc  addiu       $a1, $sp, 0xCC
    ctx->pc = 0x3ec114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
label_3ec118:
    // 0x3ec118: 0x27a600c8  addiu       $a2, $sp, 0xC8
    ctx->pc = 0x3ec118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_3ec11c:
    // 0x3ec11c: 0xc0fad9c  jal         func_3EB670
label_3ec120:
    if (ctx->pc == 0x3EC120u) {
        ctx->pc = 0x3EC120u;
            // 0x3ec120: 0x27a700c4  addiu       $a3, $sp, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
        ctx->pc = 0x3EC124u;
        goto label_3ec124;
    }
    ctx->pc = 0x3EC11Cu;
    SET_GPR_U32(ctx, 31, 0x3EC124u);
    ctx->pc = 0x3EC120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3EC11Cu;
            // 0x3ec120: 0x27a700c4  addiu       $a3, $sp, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3EB670u;
    if (runtime->hasFunction(0x3EB670u)) {
        auto targetFn = runtime->lookupFunction(0x3EB670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EC124u; }
        if (ctx->pc != 0x3EC124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003EB670_0x3eb670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3EC124u; }
        if (ctx->pc != 0x3EC124u) { return; }
    }
    ctx->pc = 0x3EC124u;
label_3ec124:
    // 0x3ec124: 0x10000024  b           . + 4 + (0x24 << 2)
label_3ec128:
    if (ctx->pc == 0x3EC128u) {
        ctx->pc = 0x3EC128u;
            // 0x3ec128: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EC12Cu;
        goto label_3ec12c;
    }
    ctx->pc = 0x3EC124u;
    {
        const bool branch_taken_0x3ec124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EC124u;
            // 0x3ec128: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec124) {
            ctx->pc = 0x3EC1B8u;
            goto label_3ec1b8;
        }
    }
    ctx->pc = 0x3EC12Cu;
label_3ec12c:
    // 0x3ec12c: 0x0  nop
    ctx->pc = 0x3ec12cu;
    // NOP
label_3ec130:
    // 0x3ec130: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x3ec130u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_3ec134:
    // 0x3ec134: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_3ec138:
    if (ctx->pc == 0x3EC138u) {
        ctx->pc = 0x3EC13Cu;
        goto label_3ec13c;
    }
    ctx->pc = 0x3EC134u;
    {
        const bool branch_taken_0x3ec134 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ec134) {
            ctx->pc = 0x3EC148u;
            goto label_3ec148;
        }
    }
    ctx->pc = 0x3EC13Cu;
label_3ec13c:
    // 0x3ec13c: 0x10000020  b           . + 4 + (0x20 << 2)
label_3ec140:
    if (ctx->pc == 0x3EC140u) {
        ctx->pc = 0x3EC140u;
            // 0x3ec140: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3EC144u;
        goto label_3ec144;
    }
    ctx->pc = 0x3EC13Cu;
    {
        const bool branch_taken_0x3ec13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EC13Cu;
            // 0x3ec140: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec13c) {
            ctx->pc = 0x3EC1C0u;
            goto label_3ec1c0;
        }
    }
    ctx->pc = 0x3EC144u;
label_3ec144:
    // 0x3ec144: 0x0  nop
    ctx->pc = 0x3ec144u;
    // NOP
label_3ec148:
    // 0x3ec148: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ec148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ec14c:
    // 0x3ec14c: 0x1482000a  bne         $a0, $v0, . + 4 + (0xA << 2)
label_3ec150:
    if (ctx->pc == 0x3EC150u) {
        ctx->pc = 0x3EC154u;
        goto label_3ec154;
    }
    ctx->pc = 0x3EC14Cu;
    {
        const bool branch_taken_0x3ec14c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ec14c) {
            ctx->pc = 0x3EC178u;
            goto label_3ec178;
        }
    }
    ctx->pc = 0x3EC154u;
label_3ec154:
    // 0x3ec154: 0x91100001  lbu         $s0, 0x1($t0)
    ctx->pc = 0x3ec154u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
label_3ec158:
    // 0x3ec158: 0x25030002  addiu       $v1, $t0, 0x2
    ctx->pc = 0x3ec158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
label_3ec15c:
    // 0x3ec15c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x3ec15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_3ec160:
    // 0x3ec160: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x3ec160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3ec164:
    // 0x3ec164: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x3ec164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
label_3ec168:
    // 0x3ec168: 0x2443fffe  addiu       $v1, $v0, -0x2
    ctx->pc = 0x3ec168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_3ec16c:
    // 0x3ec16c: 0xafa400c4  sw          $a0, 0xC4($sp)
    ctx->pc = 0x3ec16cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 4));
label_3ec170:
    // 0x3ec170: 0x1000000f  b           . + 4 + (0xF << 2)
label_3ec174:
    if (ctx->pc == 0x3EC174u) {
        ctx->pc = 0x3EC174u;
            // 0x3ec174: 0xafa300c8  sw          $v1, 0xC8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
        ctx->pc = 0x3EC178u;
        goto label_3ec178;
    }
    ctx->pc = 0x3EC170u;
    {
        const bool branch_taken_0x3ec170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EC170u;
            // 0x3ec174: 0xafa300c8  sw          $v1, 0xC8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec170) {
            ctx->pc = 0x3EC1B0u;
            goto label_3ec1b0;
        }
    }
    ctx->pc = 0x3EC178u;
label_3ec178:
    // 0x3ec178: 0xafa700c4  sw          $a3, 0xC4($sp)
    ctx->pc = 0x3ec178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 7));
label_3ec17c:
    // 0x3ec17c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3ec17cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3ec180:
    // 0x3ec180: 0x91040001  lbu         $a0, 0x1($t0)
    ctx->pc = 0x3ec180u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
label_3ec184:
    // 0x3ec184: 0x472823  subu        $a1, $v0, $a3
    ctx->pc = 0x3ec184u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_3ec188:
    // 0x3ec188: 0x91060000  lbu         $a2, 0x0($t0)
    ctx->pc = 0x3ec188u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_3ec18c:
    // 0x3ec18c: 0x25030001  addiu       $v1, $t0, 0x1
    ctx->pc = 0x3ec18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3ec190:
    // 0x3ec190: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x3ec190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_3ec194:
    // 0x3ec194: 0xe42007  srav        $a0, $a0, $a3
    ctx->pc = 0x3ec194u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 7) & 0x1F));
label_3ec198:
    // 0x3ec198: 0xa62804  sllv        $a1, $a2, $a1
    ctx->pc = 0x3ec198u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 5) & 0x1F));
label_3ec19c:
    // 0x3ec19c: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x3ec19cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
label_3ec1a0:
    // 0x3ec1a0: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x3ec1a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_3ec1a4:
    // 0x3ec1a4: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x3ec1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3ec1a8:
    // 0x3ec1a8: 0xa48025  or          $s0, $a1, $a0
    ctx->pc = 0x3ec1a8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_3ec1ac:
    // 0x3ec1ac: 0xafa300c8  sw          $v1, 0xC8($sp)
    ctx->pc = 0x3ec1acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 3));
label_3ec1b0:
    // 0x3ec1b0: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x3ec1b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3ec1b4:
    // 0x3ec1b4: 0x0  nop
    ctx->pc = 0x3ec1b4u;
    // NOP
label_3ec1b8:
    // 0x3ec1b8: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x3ec1b8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3ec1bc:
    // 0x3ec1bc: 0x0  nop
    ctx->pc = 0x3ec1bcu;
    // NOP
label_3ec1c0:
    // 0x3ec1c0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3ec1c4:
    if (ctx->pc == 0x3EC1C4u) {
        ctx->pc = 0x3EC1C8u;
        goto label_3ec1c8;
    }
    ctx->pc = 0x3EC1C0u;
    {
        const bool branch_taken_0x3ec1c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ec1c0) {
            ctx->pc = 0x3EC1D8u;
            goto label_3ec1d8;
        }
    }
    ctx->pc = 0x3EC1C8u;
label_3ec1c8:
    // 0x3ec1c8: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x3ec1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_3ec1cc:
    // 0x3ec1cc: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x3ec1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_3ec1d0:
    // 0x3ec1d0: 0x1000004b  b           . + 4 + (0x4B << 2)
label_3ec1d4:
    if (ctx->pc == 0x3EC1D4u) {
        ctx->pc = 0x3EC1D4u;
            // 0x3ec1d4: 0xafa000c8  sw          $zero, 0xC8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
        ctx->pc = 0x3EC1D8u;
        goto label_3ec1d8;
    }
    ctx->pc = 0x3EC1D0u;
    {
        const bool branch_taken_0x3ec1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC1D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EC1D0u;
            // 0x3ec1d4: 0xafa000c8  sw          $zero, 0xC8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec1d0) {
            ctx->pc = 0x3EC300u;
            goto label_3ec300;
        }
    }
    ctx->pc = 0x3EC1D8u;
label_3ec1d8:
    // 0x3ec1d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3ec1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3ec1dc:
    // 0x3ec1dc: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
label_3ec1e0:
    if (ctx->pc == 0x3EC1E0u) {
        ctx->pc = 0x3EC1E4u;
        goto label_3ec1e4;
    }
    ctx->pc = 0x3EC1DCu;
    {
        const bool branch_taken_0x3ec1dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ec1dc) {
            ctx->pc = 0x3EC200u;
            goto label_3ec200;
        }
    }
    ctx->pc = 0x3EC1E4u;
label_3ec1e4:
    // 0x3ec1e4: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_3ec1e8:
    if (ctx->pc == 0x3EC1E8u) {
        ctx->pc = 0x3EC1ECu;
        goto label_3ec1ec;
    }
    ctx->pc = 0x3EC1E4u;
    {
        const bool branch_taken_0x3ec1e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ec1e4) {
            ctx->pc = 0x3EC1F8u;
            goto label_3ec1f8;
        }
    }
    ctx->pc = 0x3EC1ECu;
label_3ec1ec:
    // 0x3ec1ec: 0x1000001a  b           . + 4 + (0x1A << 2)
label_3ec1f0:
    if (ctx->pc == 0x3EC1F0u) {
        ctx->pc = 0x3EC1F4u;
        goto label_3ec1f4;
    }
    ctx->pc = 0x3EC1ECu;
    {
        const bool branch_taken_0x3ec1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ec1ec) {
            ctx->pc = 0x3EC258u;
            goto label_3ec258;
        }
    }
    ctx->pc = 0x3EC1F4u;
label_3ec1f4:
    // 0x3ec1f4: 0x0  nop
    ctx->pc = 0x3ec1f4u;
    // NOP
label_3ec1f8:
    // 0x3ec1f8: 0x10000037  b           . + 4 + (0x37 << 2)
label_3ec1fc:
    if (ctx->pc == 0x3EC1FCu) {
        ctx->pc = 0x3EC1FCu;
            // 0x3ec1fc: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x3EC200u;
        goto label_3ec200;
    }
    ctx->pc = 0x3EC1F8u;
    {
        const bool branch_taken_0x3ec1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC1FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EC1F8u;
            // 0x3ec1fc: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec1f8) {
            ctx->pc = 0x3EC2D8u;
            goto label_3ec2d8;
        }
    }
    ctx->pc = 0x3EC200u;
label_3ec200:
    // 0x3ec200: 0x1a400033  blez        $s2, . + 4 + (0x33 << 2)
label_3ec204:
    if (ctx->pc == 0x3EC204u) {
        ctx->pc = 0x3EC208u;
        goto label_3ec208;
    }
    ctx->pc = 0x3EC200u;
    {
        const bool branch_taken_0x3ec200 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x3ec200) {
            ctx->pc = 0x3EC2D0u;
            goto label_3ec2d0;
        }
    }
    ctx->pc = 0x3EC208u;
label_3ec208:
    // 0x3ec208: 0xa2700000  sb          $s0, 0x0($s3)
    ctx->pc = 0x3ec208u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 16));
label_3ec20c:
    // 0x3ec20c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3ec20cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3ec210:
    // 0x3ec210: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x3ec210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_3ec214:
    // 0x3ec214: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ec214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3ec218:
    // 0x3ec218: 0xae820014  sw          $v0, 0x14($s4)
    ctx->pc = 0x3ec218u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
label_3ec21c:
    // 0x3ec21c: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x3ec21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_3ec220:
    // 0x3ec220: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ec220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3ec224:
    // 0x3ec224: 0xae820024  sw          $v0, 0x24($s4)
    ctx->pc = 0x3ec224u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
label_3ec228:
    // 0x3ec228: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x3ec228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_3ec22c:
    // 0x3ec22c: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x3ec22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_3ec230:
    // 0x3ec230: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x3ec230u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3ec234:
    // 0x3ec234: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_3ec238:
    if (ctx->pc == 0x3EC238u) {
        ctx->pc = 0x3EC238u;
            // 0x3ec238: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x3EC23Cu;
        goto label_3ec23c;
    }
    ctx->pc = 0x3EC234u;
    {
        const bool branch_taken_0x3ec234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EC238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EC234u;
            // 0x3ec238: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec234) {
            ctx->pc = 0x3EC248u;
            goto label_3ec248;
        }
    }
    ctx->pc = 0x3EC23Cu;
label_3ec23c:
    // 0x3ec23c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x3ec23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_3ec240:
    // 0x3ec240: 0xae820014  sw          $v0, 0x14($s4)
    ctx->pc = 0x3ec240u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
label_3ec244:
    // 0x3ec244: 0x0  nop
    ctx->pc = 0x3ec244u;
    // NOP
label_3ec248:
    // 0x3ec248: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3ec248u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ec24c:
    // 0x3ec24c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3ec24cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ec250:
    // 0x3ec250: 0x10000021  b           . + 4 + (0x21 << 2)
label_3ec254:
    if (ctx->pc == 0x3EC254u) {
        ctx->pc = 0x3EC254u;
            // 0x3ec254: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x3EC258u;
        goto label_3ec258;
    }
    ctx->pc = 0x3EC250u;
    {
        const bool branch_taken_0x3ec250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EC250u;
            // 0x3ec254: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec250) {
            ctx->pc = 0x3EC2D8u;
            goto label_3ec2d8;
        }
    }
    ctx->pc = 0x3EC258u;
label_3ec258:
    // 0x3ec258: 0x250102a  slt         $v0, $s2, $s0
    ctx->pc = 0x3ec258u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_3ec25c:
    // 0x3ec25c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_3ec260:
    if (ctx->pc == 0x3EC260u) {
        ctx->pc = 0x3EC264u;
        goto label_3ec264;
    }
    ctx->pc = 0x3EC25Cu;
    {
        const bool branch_taken_0x3ec25c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ec25c) {
            ctx->pc = 0x3EC2D0u;
            goto label_3ec2d0;
        }
    }
    ctx->pc = 0x3EC264u;
label_3ec264:
    // 0x3ec264: 0x2711823  subu        $v1, $s3, $s1
    ctx->pc = 0x3ec264u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_3ec268:
    // 0x3ec268: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ec268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ec26c:
    // 0x3ec26c: 0x0  nop
    ctx->pc = 0x3ec26cu;
    // NOP
label_3ec270:
    // 0x3ec270: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3ec270u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3ec274:
    // 0x3ec274: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x3ec274u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_3ec278:
    // 0x3ec278: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x3ec278u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
label_3ec27c:
    // 0x3ec27c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3ec27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3ec280:
    // 0x3ec280: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3ec280u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3ec284:
    // 0x3ec284: 0x1e00fffa  bgtz        $s0, . + 4 + (-0x6 << 2)
label_3ec288:
    if (ctx->pc == 0x3EC288u) {
        ctx->pc = 0x3EC28Cu;
        goto label_3ec28c;
    }
    ctx->pc = 0x3EC284u;
    {
        const bool branch_taken_0x3ec284 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x3ec284) {
            ctx->pc = 0x3EC270u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ec270;
        }
    }
    ctx->pc = 0x3EC28Cu;
label_3ec28c:
    // 0x3ec28c: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x3ec28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_3ec290:
    // 0x3ec290: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3ec290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3ec294:
    // 0x3ec294: 0xae820014  sw          $v0, 0x14($s4)
    ctx->pc = 0x3ec294u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
label_3ec298:
    // 0x3ec298: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x3ec298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_3ec29c:
    // 0x3ec29c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3ec29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3ec2a0:
    // 0x3ec2a0: 0xae820024  sw          $v0, 0x24($s4)
    ctx->pc = 0x3ec2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
label_3ec2a4:
    // 0x3ec2a4: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x3ec2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_3ec2a8:
    // 0x3ec2a8: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x3ec2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_3ec2ac:
    // 0x3ec2ac: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x3ec2acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3ec2b0:
    // 0x3ec2b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3ec2b4:
    if (ctx->pc == 0x3EC2B4u) {
        ctx->pc = 0x3EC2B4u;
            // 0x3ec2b4: 0x2449023  subu        $s2, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->pc = 0x3EC2B8u;
        goto label_3ec2b8;
    }
    ctx->pc = 0x3EC2B0u;
    {
        const bool branch_taken_0x3ec2b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EC2B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EC2B0u;
            // 0x3ec2b4: 0x2449023  subu        $s2, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec2b0) {
            ctx->pc = 0x3EC2C0u;
            goto label_3ec2c0;
        }
    }
    ctx->pc = 0x3EC2B8u;
label_3ec2b8:
    // 0x3ec2b8: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x3ec2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_3ec2bc:
    // 0x3ec2bc: 0xae820014  sw          $v0, 0x14($s4)
    ctx->pc = 0x3ec2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
label_3ec2c0:
    // 0x3ec2c0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3ec2c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ec2c4:
    // 0x3ec2c4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3ec2c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ec2c8:
    // 0x3ec2c8: 0x10000003  b           . + 4 + (0x3 << 2)
label_3ec2cc:
    if (ctx->pc == 0x3EC2CCu) {
        ctx->pc = 0x3EC2CCu;
            // 0x3ec2cc: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x3EC2D0u;
        goto label_3ec2d0;
    }
    ctx->pc = 0x3EC2C8u;
    {
        const bool branch_taken_0x3ec2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC2CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EC2C8u;
            // 0x3ec2cc: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec2c8) {
            ctx->pc = 0x3EC2D8u;
            goto label_3ec2d8;
        }
    }
    ctx->pc = 0x3EC2D0u;
label_3ec2d0:
    // 0x3ec2d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ec2d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ec2d4:
    // 0x3ec2d4: 0x0  nop
    ctx->pc = 0x3ec2d4u;
    // NOP
label_3ec2d8:
    // 0x3ec2d8: 0x1040fef3  beqz        $v0, . + 4 + (-0x10D << 2)
label_3ec2dc:
    if (ctx->pc == 0x3EC2DCu) {
        ctx->pc = 0x3EC2E0u;
        goto label_3ec2e0;
    }
    ctx->pc = 0x3EC2D8u;
    {
        const bool branch_taken_0x3ec2d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ec2d8) {
            ctx->pc = 0x3EBEA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ebea8;
        }
    }
    ctx->pc = 0x3EC2E0u;
label_3ec2e0:
    // 0x3ec2e0: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x3ec2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_3ec2e4:
    // 0x3ec2e4: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
label_3ec2e8:
    if (ctx->pc == 0x3EC2E8u) {
        ctx->pc = 0x3EC2ECu;
        goto label_3ec2ec;
    }
    ctx->pc = 0x3EC2E4u;
    {
        const bool branch_taken_0x3ec2e4 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x3ec2e4) {
            ctx->pc = 0x3EC300u;
            goto label_3ec300;
        }
    }
    ctx->pc = 0x3EC2ECu;
label_3ec2ec:
    // 0x3ec2ec: 0x1e40ff60  bgtz        $s2, . + 4 + (-0xA0 << 2)
label_3ec2f0:
    if (ctx->pc == 0x3EC2F0u) {
        ctx->pc = 0x3EC2F4u;
        goto label_3ec2f4;
    }
    ctx->pc = 0x3EC2ECu;
    {
        const bool branch_taken_0x3ec2ec = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x3ec2ec) {
            ctx->pc = 0x3EC070u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ec070;
        }
    }
    ctx->pc = 0x3EC2F4u;
label_3ec2f4:
    // 0x3ec2f4: 0x1000feec  b           . + 4 + (-0x114 << 2)
label_3ec2f8:
    if (ctx->pc == 0x3EC2F8u) {
        ctx->pc = 0x3EC2FCu;
        goto label_3ec2fc;
    }
    ctx->pc = 0x3EC2F4u;
    {
        const bool branch_taken_0x3ec2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ec2f4) {
            ctx->pc = 0x3EBEA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ebea8;
        }
    }
    ctx->pc = 0x3EC2FCu;
label_3ec2fc:
    // 0x3ec2fc: 0x0  nop
    ctx->pc = 0x3ec2fcu;
    // NOP
label_3ec300:
    // 0x3ec300: 0x8ee20028  lw          $v0, 0x28($s7)
    ctx->pc = 0x3ec300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 40)));
label_3ec304:
    // 0x3ec304: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3ec304u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3ec308:
    // 0x3ec308: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3ec308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3ec30c:
    // 0x3ec30c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_3ec310:
    if (ctx->pc == 0x3EC310u) {
        ctx->pc = 0x3EC314u;
        goto label_3ec314;
    }
    ctx->pc = 0x3EC30Cu;
    {
        const bool branch_taken_0x3ec30c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ec30c) {
            ctx->pc = 0x3EC330u;
            goto label_3ec330;
        }
    }
    ctx->pc = 0x3EC314u;
label_3ec314:
    // 0x3ec314: 0x8ee30020  lw          $v1, 0x20($s7)
    ctx->pc = 0x3ec314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 32)));
label_3ec318:
    // 0x3ec318: 0x8ee20024  lw          $v0, 0x24($s7)
    ctx->pc = 0x3ec318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 36)));
label_3ec31c:
    // 0x3ec31c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x3ec31cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3ec320:
    // 0x3ec320: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3ec324:
    if (ctx->pc == 0x3EC324u) {
        ctx->pc = 0x3EC328u;
        goto label_3ec328;
    }
    ctx->pc = 0x3EC320u;
    {
        const bool branch_taken_0x3ec320 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ec320) {
            ctx->pc = 0x3EC330u;
            goto label_3ec330;
        }
    }
    ctx->pc = 0x3EC328u;
label_3ec328:
    // 0x3ec328: 0x10000003  b           . + 4 + (0x3 << 2)
label_3ec32c:
    if (ctx->pc == 0x3EC32Cu) {
        ctx->pc = 0x3EC32Cu;
            // 0x3ec32c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3EC330u;
        goto label_3ec330;
    }
    ctx->pc = 0x3EC328u;
    {
        const bool branch_taken_0x3ec328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EC32Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EC328u;
            // 0x3ec32c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ec328) {
            ctx->pc = 0x3EC338u;
            goto label_3ec338;
        }
    }
    ctx->pc = 0x3EC330u;
label_3ec330:
    // 0x3ec330: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ec330u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ec334:
    // 0x3ec334: 0x0  nop
    ctx->pc = 0x3ec334u;
    // NOP
label_3ec338:
    // 0x3ec338: 0x5040fe9e  beql        $v0, $zero, . + 4 + (-0x162 << 2)
label_3ec33c:
    if (ctx->pc == 0x3EC33Cu) {
        ctx->pc = 0x3EC33Cu;
            // 0x3ec33c: 0x8fbe00b0  lw          $fp, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->pc = 0x3EC340u;
        goto label_3ec340;
    }
    ctx->pc = 0x3EC338u;
    {
        const bool branch_taken_0x3ec338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ec338) {
            ctx->pc = 0x3EC33Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3EC338u;
            // 0x3ec33c: 0x8fbe00b0  lw          $fp, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3EBDB4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ebdb4;
        }
    }
    ctx->pc = 0x3EC340u;
label_3ec340:
    // 0x3ec340: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ec340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ec344:
    // 0x3ec344: 0xae820028  sw          $v0, 0x28($s4)
    ctx->pc = 0x3ec344u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
label_3ec348:
    // 0x3ec348: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x3ec348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_3ec34c:
    // 0x3ec34c: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x3ec34cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_3ec350:
    // 0x3ec350: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x3ec350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_3ec354:
    // 0x3ec354: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3ec354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3ec358:
    // 0x3ec358: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x3ec358u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3ec35c:
    // 0x3ec35c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x3ec35cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3ec360:
    // 0x3ec360: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x3ec360u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3ec364:
    // 0x3ec364: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3ec364u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ec368:
    // 0x3ec368: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3ec368u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ec36c:
    // 0x3ec36c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3ec36cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ec370:
    // 0x3ec370: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3ec370u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ec374:
    // 0x3ec374: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ec374u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ec378:
    // 0x3ec378: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ec378u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ec37c:
    // 0x3ec37c: 0x3e00008  jr          $ra
label_3ec380:
    if (ctx->pc == 0x3EC380u) {
        ctx->pc = 0x3EC380u;
            // 0x3ec380: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x3EC384u;
        goto label_3ec384;
    }
    ctx->pc = 0x3EC37Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EC380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3EC37Cu;
            // 0x3ec380: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3EC384u;
label_3ec384:
    // 0x3ec384: 0x0  nop
    ctx->pc = 0x3ec384u;
    // NOP
label_3ec388:
    // 0x3ec388: 0x0  nop
    ctx->pc = 0x3ec388u;
    // NOP
label_3ec38c:
    // 0x3ec38c: 0x0  nop
    ctx->pc = 0x3ec38cu;
    // NOP
}
