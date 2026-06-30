#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EBE70
// Address: 0x1ebe70 - 0x1ec880
void sub_001EBE70_0x1ebe70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EBE70_0x1ebe70");
#endif

    switch (ctx->pc) {
        case 0x1ebe70u: goto label_1ebe70;
        case 0x1ebe74u: goto label_1ebe74;
        case 0x1ebe78u: goto label_1ebe78;
        case 0x1ebe7cu: goto label_1ebe7c;
        case 0x1ebe80u: goto label_1ebe80;
        case 0x1ebe84u: goto label_1ebe84;
        case 0x1ebe88u: goto label_1ebe88;
        case 0x1ebe8cu: goto label_1ebe8c;
        case 0x1ebe90u: goto label_1ebe90;
        case 0x1ebe94u: goto label_1ebe94;
        case 0x1ebe98u: goto label_1ebe98;
        case 0x1ebe9cu: goto label_1ebe9c;
        case 0x1ebea0u: goto label_1ebea0;
        case 0x1ebea4u: goto label_1ebea4;
        case 0x1ebea8u: goto label_1ebea8;
        case 0x1ebeacu: goto label_1ebeac;
        case 0x1ebeb0u: goto label_1ebeb0;
        case 0x1ebeb4u: goto label_1ebeb4;
        case 0x1ebeb8u: goto label_1ebeb8;
        case 0x1ebebcu: goto label_1ebebc;
        case 0x1ebec0u: goto label_1ebec0;
        case 0x1ebec4u: goto label_1ebec4;
        case 0x1ebec8u: goto label_1ebec8;
        case 0x1ebeccu: goto label_1ebecc;
        case 0x1ebed0u: goto label_1ebed0;
        case 0x1ebed4u: goto label_1ebed4;
        case 0x1ebed8u: goto label_1ebed8;
        case 0x1ebedcu: goto label_1ebedc;
        case 0x1ebee0u: goto label_1ebee0;
        case 0x1ebee4u: goto label_1ebee4;
        case 0x1ebee8u: goto label_1ebee8;
        case 0x1ebeecu: goto label_1ebeec;
        case 0x1ebef0u: goto label_1ebef0;
        case 0x1ebef4u: goto label_1ebef4;
        case 0x1ebef8u: goto label_1ebef8;
        case 0x1ebefcu: goto label_1ebefc;
        case 0x1ebf00u: goto label_1ebf00;
        case 0x1ebf04u: goto label_1ebf04;
        case 0x1ebf08u: goto label_1ebf08;
        case 0x1ebf0cu: goto label_1ebf0c;
        case 0x1ebf10u: goto label_1ebf10;
        case 0x1ebf14u: goto label_1ebf14;
        case 0x1ebf18u: goto label_1ebf18;
        case 0x1ebf1cu: goto label_1ebf1c;
        case 0x1ebf20u: goto label_1ebf20;
        case 0x1ebf24u: goto label_1ebf24;
        case 0x1ebf28u: goto label_1ebf28;
        case 0x1ebf2cu: goto label_1ebf2c;
        case 0x1ebf30u: goto label_1ebf30;
        case 0x1ebf34u: goto label_1ebf34;
        case 0x1ebf38u: goto label_1ebf38;
        case 0x1ebf3cu: goto label_1ebf3c;
        case 0x1ebf40u: goto label_1ebf40;
        case 0x1ebf44u: goto label_1ebf44;
        case 0x1ebf48u: goto label_1ebf48;
        case 0x1ebf4cu: goto label_1ebf4c;
        case 0x1ebf50u: goto label_1ebf50;
        case 0x1ebf54u: goto label_1ebf54;
        case 0x1ebf58u: goto label_1ebf58;
        case 0x1ebf5cu: goto label_1ebf5c;
        case 0x1ebf60u: goto label_1ebf60;
        case 0x1ebf64u: goto label_1ebf64;
        case 0x1ebf68u: goto label_1ebf68;
        case 0x1ebf6cu: goto label_1ebf6c;
        case 0x1ebf70u: goto label_1ebf70;
        case 0x1ebf74u: goto label_1ebf74;
        case 0x1ebf78u: goto label_1ebf78;
        case 0x1ebf7cu: goto label_1ebf7c;
        case 0x1ebf80u: goto label_1ebf80;
        case 0x1ebf84u: goto label_1ebf84;
        case 0x1ebf88u: goto label_1ebf88;
        case 0x1ebf8cu: goto label_1ebf8c;
        case 0x1ebf90u: goto label_1ebf90;
        case 0x1ebf94u: goto label_1ebf94;
        case 0x1ebf98u: goto label_1ebf98;
        case 0x1ebf9cu: goto label_1ebf9c;
        case 0x1ebfa0u: goto label_1ebfa0;
        case 0x1ebfa4u: goto label_1ebfa4;
        case 0x1ebfa8u: goto label_1ebfa8;
        case 0x1ebfacu: goto label_1ebfac;
        case 0x1ebfb0u: goto label_1ebfb0;
        case 0x1ebfb4u: goto label_1ebfb4;
        case 0x1ebfb8u: goto label_1ebfb8;
        case 0x1ebfbcu: goto label_1ebfbc;
        case 0x1ebfc0u: goto label_1ebfc0;
        case 0x1ebfc4u: goto label_1ebfc4;
        case 0x1ebfc8u: goto label_1ebfc8;
        case 0x1ebfccu: goto label_1ebfcc;
        case 0x1ebfd0u: goto label_1ebfd0;
        case 0x1ebfd4u: goto label_1ebfd4;
        case 0x1ebfd8u: goto label_1ebfd8;
        case 0x1ebfdcu: goto label_1ebfdc;
        case 0x1ebfe0u: goto label_1ebfe0;
        case 0x1ebfe4u: goto label_1ebfe4;
        case 0x1ebfe8u: goto label_1ebfe8;
        case 0x1ebfecu: goto label_1ebfec;
        case 0x1ebff0u: goto label_1ebff0;
        case 0x1ebff4u: goto label_1ebff4;
        case 0x1ebff8u: goto label_1ebff8;
        case 0x1ebffcu: goto label_1ebffc;
        case 0x1ec000u: goto label_1ec000;
        case 0x1ec004u: goto label_1ec004;
        case 0x1ec008u: goto label_1ec008;
        case 0x1ec00cu: goto label_1ec00c;
        case 0x1ec010u: goto label_1ec010;
        case 0x1ec014u: goto label_1ec014;
        case 0x1ec018u: goto label_1ec018;
        case 0x1ec01cu: goto label_1ec01c;
        case 0x1ec020u: goto label_1ec020;
        case 0x1ec024u: goto label_1ec024;
        case 0x1ec028u: goto label_1ec028;
        case 0x1ec02cu: goto label_1ec02c;
        case 0x1ec030u: goto label_1ec030;
        case 0x1ec034u: goto label_1ec034;
        case 0x1ec038u: goto label_1ec038;
        case 0x1ec03cu: goto label_1ec03c;
        case 0x1ec040u: goto label_1ec040;
        case 0x1ec044u: goto label_1ec044;
        case 0x1ec048u: goto label_1ec048;
        case 0x1ec04cu: goto label_1ec04c;
        case 0x1ec050u: goto label_1ec050;
        case 0x1ec054u: goto label_1ec054;
        case 0x1ec058u: goto label_1ec058;
        case 0x1ec05cu: goto label_1ec05c;
        case 0x1ec060u: goto label_1ec060;
        case 0x1ec064u: goto label_1ec064;
        case 0x1ec068u: goto label_1ec068;
        case 0x1ec06cu: goto label_1ec06c;
        case 0x1ec070u: goto label_1ec070;
        case 0x1ec074u: goto label_1ec074;
        case 0x1ec078u: goto label_1ec078;
        case 0x1ec07cu: goto label_1ec07c;
        case 0x1ec080u: goto label_1ec080;
        case 0x1ec084u: goto label_1ec084;
        case 0x1ec088u: goto label_1ec088;
        case 0x1ec08cu: goto label_1ec08c;
        case 0x1ec090u: goto label_1ec090;
        case 0x1ec094u: goto label_1ec094;
        case 0x1ec098u: goto label_1ec098;
        case 0x1ec09cu: goto label_1ec09c;
        case 0x1ec0a0u: goto label_1ec0a0;
        case 0x1ec0a4u: goto label_1ec0a4;
        case 0x1ec0a8u: goto label_1ec0a8;
        case 0x1ec0acu: goto label_1ec0ac;
        case 0x1ec0b0u: goto label_1ec0b0;
        case 0x1ec0b4u: goto label_1ec0b4;
        case 0x1ec0b8u: goto label_1ec0b8;
        case 0x1ec0bcu: goto label_1ec0bc;
        case 0x1ec0c0u: goto label_1ec0c0;
        case 0x1ec0c4u: goto label_1ec0c4;
        case 0x1ec0c8u: goto label_1ec0c8;
        case 0x1ec0ccu: goto label_1ec0cc;
        case 0x1ec0d0u: goto label_1ec0d0;
        case 0x1ec0d4u: goto label_1ec0d4;
        case 0x1ec0d8u: goto label_1ec0d8;
        case 0x1ec0dcu: goto label_1ec0dc;
        case 0x1ec0e0u: goto label_1ec0e0;
        case 0x1ec0e4u: goto label_1ec0e4;
        case 0x1ec0e8u: goto label_1ec0e8;
        case 0x1ec0ecu: goto label_1ec0ec;
        case 0x1ec0f0u: goto label_1ec0f0;
        case 0x1ec0f4u: goto label_1ec0f4;
        case 0x1ec0f8u: goto label_1ec0f8;
        case 0x1ec0fcu: goto label_1ec0fc;
        case 0x1ec100u: goto label_1ec100;
        case 0x1ec104u: goto label_1ec104;
        case 0x1ec108u: goto label_1ec108;
        case 0x1ec10cu: goto label_1ec10c;
        case 0x1ec110u: goto label_1ec110;
        case 0x1ec114u: goto label_1ec114;
        case 0x1ec118u: goto label_1ec118;
        case 0x1ec11cu: goto label_1ec11c;
        case 0x1ec120u: goto label_1ec120;
        case 0x1ec124u: goto label_1ec124;
        case 0x1ec128u: goto label_1ec128;
        case 0x1ec12cu: goto label_1ec12c;
        case 0x1ec130u: goto label_1ec130;
        case 0x1ec134u: goto label_1ec134;
        case 0x1ec138u: goto label_1ec138;
        case 0x1ec13cu: goto label_1ec13c;
        case 0x1ec140u: goto label_1ec140;
        case 0x1ec144u: goto label_1ec144;
        case 0x1ec148u: goto label_1ec148;
        case 0x1ec14cu: goto label_1ec14c;
        case 0x1ec150u: goto label_1ec150;
        case 0x1ec154u: goto label_1ec154;
        case 0x1ec158u: goto label_1ec158;
        case 0x1ec15cu: goto label_1ec15c;
        case 0x1ec160u: goto label_1ec160;
        case 0x1ec164u: goto label_1ec164;
        case 0x1ec168u: goto label_1ec168;
        case 0x1ec16cu: goto label_1ec16c;
        case 0x1ec170u: goto label_1ec170;
        case 0x1ec174u: goto label_1ec174;
        case 0x1ec178u: goto label_1ec178;
        case 0x1ec17cu: goto label_1ec17c;
        case 0x1ec180u: goto label_1ec180;
        case 0x1ec184u: goto label_1ec184;
        case 0x1ec188u: goto label_1ec188;
        case 0x1ec18cu: goto label_1ec18c;
        case 0x1ec190u: goto label_1ec190;
        case 0x1ec194u: goto label_1ec194;
        case 0x1ec198u: goto label_1ec198;
        case 0x1ec19cu: goto label_1ec19c;
        case 0x1ec1a0u: goto label_1ec1a0;
        case 0x1ec1a4u: goto label_1ec1a4;
        case 0x1ec1a8u: goto label_1ec1a8;
        case 0x1ec1acu: goto label_1ec1ac;
        case 0x1ec1b0u: goto label_1ec1b0;
        case 0x1ec1b4u: goto label_1ec1b4;
        case 0x1ec1b8u: goto label_1ec1b8;
        case 0x1ec1bcu: goto label_1ec1bc;
        case 0x1ec1c0u: goto label_1ec1c0;
        case 0x1ec1c4u: goto label_1ec1c4;
        case 0x1ec1c8u: goto label_1ec1c8;
        case 0x1ec1ccu: goto label_1ec1cc;
        case 0x1ec1d0u: goto label_1ec1d0;
        case 0x1ec1d4u: goto label_1ec1d4;
        case 0x1ec1d8u: goto label_1ec1d8;
        case 0x1ec1dcu: goto label_1ec1dc;
        case 0x1ec1e0u: goto label_1ec1e0;
        case 0x1ec1e4u: goto label_1ec1e4;
        case 0x1ec1e8u: goto label_1ec1e8;
        case 0x1ec1ecu: goto label_1ec1ec;
        case 0x1ec1f0u: goto label_1ec1f0;
        case 0x1ec1f4u: goto label_1ec1f4;
        case 0x1ec1f8u: goto label_1ec1f8;
        case 0x1ec1fcu: goto label_1ec1fc;
        case 0x1ec200u: goto label_1ec200;
        case 0x1ec204u: goto label_1ec204;
        case 0x1ec208u: goto label_1ec208;
        case 0x1ec20cu: goto label_1ec20c;
        case 0x1ec210u: goto label_1ec210;
        case 0x1ec214u: goto label_1ec214;
        case 0x1ec218u: goto label_1ec218;
        case 0x1ec21cu: goto label_1ec21c;
        case 0x1ec220u: goto label_1ec220;
        case 0x1ec224u: goto label_1ec224;
        case 0x1ec228u: goto label_1ec228;
        case 0x1ec22cu: goto label_1ec22c;
        case 0x1ec230u: goto label_1ec230;
        case 0x1ec234u: goto label_1ec234;
        case 0x1ec238u: goto label_1ec238;
        case 0x1ec23cu: goto label_1ec23c;
        case 0x1ec240u: goto label_1ec240;
        case 0x1ec244u: goto label_1ec244;
        case 0x1ec248u: goto label_1ec248;
        case 0x1ec24cu: goto label_1ec24c;
        case 0x1ec250u: goto label_1ec250;
        case 0x1ec254u: goto label_1ec254;
        case 0x1ec258u: goto label_1ec258;
        case 0x1ec25cu: goto label_1ec25c;
        case 0x1ec260u: goto label_1ec260;
        case 0x1ec264u: goto label_1ec264;
        case 0x1ec268u: goto label_1ec268;
        case 0x1ec26cu: goto label_1ec26c;
        case 0x1ec270u: goto label_1ec270;
        case 0x1ec274u: goto label_1ec274;
        case 0x1ec278u: goto label_1ec278;
        case 0x1ec27cu: goto label_1ec27c;
        case 0x1ec280u: goto label_1ec280;
        case 0x1ec284u: goto label_1ec284;
        case 0x1ec288u: goto label_1ec288;
        case 0x1ec28cu: goto label_1ec28c;
        case 0x1ec290u: goto label_1ec290;
        case 0x1ec294u: goto label_1ec294;
        case 0x1ec298u: goto label_1ec298;
        case 0x1ec29cu: goto label_1ec29c;
        case 0x1ec2a0u: goto label_1ec2a0;
        case 0x1ec2a4u: goto label_1ec2a4;
        case 0x1ec2a8u: goto label_1ec2a8;
        case 0x1ec2acu: goto label_1ec2ac;
        case 0x1ec2b0u: goto label_1ec2b0;
        case 0x1ec2b4u: goto label_1ec2b4;
        case 0x1ec2b8u: goto label_1ec2b8;
        case 0x1ec2bcu: goto label_1ec2bc;
        case 0x1ec2c0u: goto label_1ec2c0;
        case 0x1ec2c4u: goto label_1ec2c4;
        case 0x1ec2c8u: goto label_1ec2c8;
        case 0x1ec2ccu: goto label_1ec2cc;
        case 0x1ec2d0u: goto label_1ec2d0;
        case 0x1ec2d4u: goto label_1ec2d4;
        case 0x1ec2d8u: goto label_1ec2d8;
        case 0x1ec2dcu: goto label_1ec2dc;
        case 0x1ec2e0u: goto label_1ec2e0;
        case 0x1ec2e4u: goto label_1ec2e4;
        case 0x1ec2e8u: goto label_1ec2e8;
        case 0x1ec2ecu: goto label_1ec2ec;
        case 0x1ec2f0u: goto label_1ec2f0;
        case 0x1ec2f4u: goto label_1ec2f4;
        case 0x1ec2f8u: goto label_1ec2f8;
        case 0x1ec2fcu: goto label_1ec2fc;
        case 0x1ec300u: goto label_1ec300;
        case 0x1ec304u: goto label_1ec304;
        case 0x1ec308u: goto label_1ec308;
        case 0x1ec30cu: goto label_1ec30c;
        case 0x1ec310u: goto label_1ec310;
        case 0x1ec314u: goto label_1ec314;
        case 0x1ec318u: goto label_1ec318;
        case 0x1ec31cu: goto label_1ec31c;
        case 0x1ec320u: goto label_1ec320;
        case 0x1ec324u: goto label_1ec324;
        case 0x1ec328u: goto label_1ec328;
        case 0x1ec32cu: goto label_1ec32c;
        case 0x1ec330u: goto label_1ec330;
        case 0x1ec334u: goto label_1ec334;
        case 0x1ec338u: goto label_1ec338;
        case 0x1ec33cu: goto label_1ec33c;
        case 0x1ec340u: goto label_1ec340;
        case 0x1ec344u: goto label_1ec344;
        case 0x1ec348u: goto label_1ec348;
        case 0x1ec34cu: goto label_1ec34c;
        case 0x1ec350u: goto label_1ec350;
        case 0x1ec354u: goto label_1ec354;
        case 0x1ec358u: goto label_1ec358;
        case 0x1ec35cu: goto label_1ec35c;
        case 0x1ec360u: goto label_1ec360;
        case 0x1ec364u: goto label_1ec364;
        case 0x1ec368u: goto label_1ec368;
        case 0x1ec36cu: goto label_1ec36c;
        case 0x1ec370u: goto label_1ec370;
        case 0x1ec374u: goto label_1ec374;
        case 0x1ec378u: goto label_1ec378;
        case 0x1ec37cu: goto label_1ec37c;
        case 0x1ec380u: goto label_1ec380;
        case 0x1ec384u: goto label_1ec384;
        case 0x1ec388u: goto label_1ec388;
        case 0x1ec38cu: goto label_1ec38c;
        case 0x1ec390u: goto label_1ec390;
        case 0x1ec394u: goto label_1ec394;
        case 0x1ec398u: goto label_1ec398;
        case 0x1ec39cu: goto label_1ec39c;
        case 0x1ec3a0u: goto label_1ec3a0;
        case 0x1ec3a4u: goto label_1ec3a4;
        case 0x1ec3a8u: goto label_1ec3a8;
        case 0x1ec3acu: goto label_1ec3ac;
        case 0x1ec3b0u: goto label_1ec3b0;
        case 0x1ec3b4u: goto label_1ec3b4;
        case 0x1ec3b8u: goto label_1ec3b8;
        case 0x1ec3bcu: goto label_1ec3bc;
        case 0x1ec3c0u: goto label_1ec3c0;
        case 0x1ec3c4u: goto label_1ec3c4;
        case 0x1ec3c8u: goto label_1ec3c8;
        case 0x1ec3ccu: goto label_1ec3cc;
        case 0x1ec3d0u: goto label_1ec3d0;
        case 0x1ec3d4u: goto label_1ec3d4;
        case 0x1ec3d8u: goto label_1ec3d8;
        case 0x1ec3dcu: goto label_1ec3dc;
        case 0x1ec3e0u: goto label_1ec3e0;
        case 0x1ec3e4u: goto label_1ec3e4;
        case 0x1ec3e8u: goto label_1ec3e8;
        case 0x1ec3ecu: goto label_1ec3ec;
        case 0x1ec3f0u: goto label_1ec3f0;
        case 0x1ec3f4u: goto label_1ec3f4;
        case 0x1ec3f8u: goto label_1ec3f8;
        case 0x1ec3fcu: goto label_1ec3fc;
        case 0x1ec400u: goto label_1ec400;
        case 0x1ec404u: goto label_1ec404;
        case 0x1ec408u: goto label_1ec408;
        case 0x1ec40cu: goto label_1ec40c;
        case 0x1ec410u: goto label_1ec410;
        case 0x1ec414u: goto label_1ec414;
        case 0x1ec418u: goto label_1ec418;
        case 0x1ec41cu: goto label_1ec41c;
        case 0x1ec420u: goto label_1ec420;
        case 0x1ec424u: goto label_1ec424;
        case 0x1ec428u: goto label_1ec428;
        case 0x1ec42cu: goto label_1ec42c;
        case 0x1ec430u: goto label_1ec430;
        case 0x1ec434u: goto label_1ec434;
        case 0x1ec438u: goto label_1ec438;
        case 0x1ec43cu: goto label_1ec43c;
        case 0x1ec440u: goto label_1ec440;
        case 0x1ec444u: goto label_1ec444;
        case 0x1ec448u: goto label_1ec448;
        case 0x1ec44cu: goto label_1ec44c;
        case 0x1ec450u: goto label_1ec450;
        case 0x1ec454u: goto label_1ec454;
        case 0x1ec458u: goto label_1ec458;
        case 0x1ec45cu: goto label_1ec45c;
        case 0x1ec460u: goto label_1ec460;
        case 0x1ec464u: goto label_1ec464;
        case 0x1ec468u: goto label_1ec468;
        case 0x1ec46cu: goto label_1ec46c;
        case 0x1ec470u: goto label_1ec470;
        case 0x1ec474u: goto label_1ec474;
        case 0x1ec478u: goto label_1ec478;
        case 0x1ec47cu: goto label_1ec47c;
        case 0x1ec480u: goto label_1ec480;
        case 0x1ec484u: goto label_1ec484;
        case 0x1ec488u: goto label_1ec488;
        case 0x1ec48cu: goto label_1ec48c;
        case 0x1ec490u: goto label_1ec490;
        case 0x1ec494u: goto label_1ec494;
        case 0x1ec498u: goto label_1ec498;
        case 0x1ec49cu: goto label_1ec49c;
        case 0x1ec4a0u: goto label_1ec4a0;
        case 0x1ec4a4u: goto label_1ec4a4;
        case 0x1ec4a8u: goto label_1ec4a8;
        case 0x1ec4acu: goto label_1ec4ac;
        case 0x1ec4b0u: goto label_1ec4b0;
        case 0x1ec4b4u: goto label_1ec4b4;
        case 0x1ec4b8u: goto label_1ec4b8;
        case 0x1ec4bcu: goto label_1ec4bc;
        case 0x1ec4c0u: goto label_1ec4c0;
        case 0x1ec4c4u: goto label_1ec4c4;
        case 0x1ec4c8u: goto label_1ec4c8;
        case 0x1ec4ccu: goto label_1ec4cc;
        case 0x1ec4d0u: goto label_1ec4d0;
        case 0x1ec4d4u: goto label_1ec4d4;
        case 0x1ec4d8u: goto label_1ec4d8;
        case 0x1ec4dcu: goto label_1ec4dc;
        case 0x1ec4e0u: goto label_1ec4e0;
        case 0x1ec4e4u: goto label_1ec4e4;
        case 0x1ec4e8u: goto label_1ec4e8;
        case 0x1ec4ecu: goto label_1ec4ec;
        case 0x1ec4f0u: goto label_1ec4f0;
        case 0x1ec4f4u: goto label_1ec4f4;
        case 0x1ec4f8u: goto label_1ec4f8;
        case 0x1ec4fcu: goto label_1ec4fc;
        case 0x1ec500u: goto label_1ec500;
        case 0x1ec504u: goto label_1ec504;
        case 0x1ec508u: goto label_1ec508;
        case 0x1ec50cu: goto label_1ec50c;
        case 0x1ec510u: goto label_1ec510;
        case 0x1ec514u: goto label_1ec514;
        case 0x1ec518u: goto label_1ec518;
        case 0x1ec51cu: goto label_1ec51c;
        case 0x1ec520u: goto label_1ec520;
        case 0x1ec524u: goto label_1ec524;
        case 0x1ec528u: goto label_1ec528;
        case 0x1ec52cu: goto label_1ec52c;
        case 0x1ec530u: goto label_1ec530;
        case 0x1ec534u: goto label_1ec534;
        case 0x1ec538u: goto label_1ec538;
        case 0x1ec53cu: goto label_1ec53c;
        case 0x1ec540u: goto label_1ec540;
        case 0x1ec544u: goto label_1ec544;
        case 0x1ec548u: goto label_1ec548;
        case 0x1ec54cu: goto label_1ec54c;
        case 0x1ec550u: goto label_1ec550;
        case 0x1ec554u: goto label_1ec554;
        case 0x1ec558u: goto label_1ec558;
        case 0x1ec55cu: goto label_1ec55c;
        case 0x1ec560u: goto label_1ec560;
        case 0x1ec564u: goto label_1ec564;
        case 0x1ec568u: goto label_1ec568;
        case 0x1ec56cu: goto label_1ec56c;
        case 0x1ec570u: goto label_1ec570;
        case 0x1ec574u: goto label_1ec574;
        case 0x1ec578u: goto label_1ec578;
        case 0x1ec57cu: goto label_1ec57c;
        case 0x1ec580u: goto label_1ec580;
        case 0x1ec584u: goto label_1ec584;
        case 0x1ec588u: goto label_1ec588;
        case 0x1ec58cu: goto label_1ec58c;
        case 0x1ec590u: goto label_1ec590;
        case 0x1ec594u: goto label_1ec594;
        case 0x1ec598u: goto label_1ec598;
        case 0x1ec59cu: goto label_1ec59c;
        case 0x1ec5a0u: goto label_1ec5a0;
        case 0x1ec5a4u: goto label_1ec5a4;
        case 0x1ec5a8u: goto label_1ec5a8;
        case 0x1ec5acu: goto label_1ec5ac;
        case 0x1ec5b0u: goto label_1ec5b0;
        case 0x1ec5b4u: goto label_1ec5b4;
        case 0x1ec5b8u: goto label_1ec5b8;
        case 0x1ec5bcu: goto label_1ec5bc;
        case 0x1ec5c0u: goto label_1ec5c0;
        case 0x1ec5c4u: goto label_1ec5c4;
        case 0x1ec5c8u: goto label_1ec5c8;
        case 0x1ec5ccu: goto label_1ec5cc;
        case 0x1ec5d0u: goto label_1ec5d0;
        case 0x1ec5d4u: goto label_1ec5d4;
        case 0x1ec5d8u: goto label_1ec5d8;
        case 0x1ec5dcu: goto label_1ec5dc;
        case 0x1ec5e0u: goto label_1ec5e0;
        case 0x1ec5e4u: goto label_1ec5e4;
        case 0x1ec5e8u: goto label_1ec5e8;
        case 0x1ec5ecu: goto label_1ec5ec;
        case 0x1ec5f0u: goto label_1ec5f0;
        case 0x1ec5f4u: goto label_1ec5f4;
        case 0x1ec5f8u: goto label_1ec5f8;
        case 0x1ec5fcu: goto label_1ec5fc;
        case 0x1ec600u: goto label_1ec600;
        case 0x1ec604u: goto label_1ec604;
        case 0x1ec608u: goto label_1ec608;
        case 0x1ec60cu: goto label_1ec60c;
        case 0x1ec610u: goto label_1ec610;
        case 0x1ec614u: goto label_1ec614;
        case 0x1ec618u: goto label_1ec618;
        case 0x1ec61cu: goto label_1ec61c;
        case 0x1ec620u: goto label_1ec620;
        case 0x1ec624u: goto label_1ec624;
        case 0x1ec628u: goto label_1ec628;
        case 0x1ec62cu: goto label_1ec62c;
        case 0x1ec630u: goto label_1ec630;
        case 0x1ec634u: goto label_1ec634;
        case 0x1ec638u: goto label_1ec638;
        case 0x1ec63cu: goto label_1ec63c;
        case 0x1ec640u: goto label_1ec640;
        case 0x1ec644u: goto label_1ec644;
        case 0x1ec648u: goto label_1ec648;
        case 0x1ec64cu: goto label_1ec64c;
        case 0x1ec650u: goto label_1ec650;
        case 0x1ec654u: goto label_1ec654;
        case 0x1ec658u: goto label_1ec658;
        case 0x1ec65cu: goto label_1ec65c;
        case 0x1ec660u: goto label_1ec660;
        case 0x1ec664u: goto label_1ec664;
        case 0x1ec668u: goto label_1ec668;
        case 0x1ec66cu: goto label_1ec66c;
        case 0x1ec670u: goto label_1ec670;
        case 0x1ec674u: goto label_1ec674;
        case 0x1ec678u: goto label_1ec678;
        case 0x1ec67cu: goto label_1ec67c;
        case 0x1ec680u: goto label_1ec680;
        case 0x1ec684u: goto label_1ec684;
        case 0x1ec688u: goto label_1ec688;
        case 0x1ec68cu: goto label_1ec68c;
        case 0x1ec690u: goto label_1ec690;
        case 0x1ec694u: goto label_1ec694;
        case 0x1ec698u: goto label_1ec698;
        case 0x1ec69cu: goto label_1ec69c;
        case 0x1ec6a0u: goto label_1ec6a0;
        case 0x1ec6a4u: goto label_1ec6a4;
        case 0x1ec6a8u: goto label_1ec6a8;
        case 0x1ec6acu: goto label_1ec6ac;
        case 0x1ec6b0u: goto label_1ec6b0;
        case 0x1ec6b4u: goto label_1ec6b4;
        case 0x1ec6b8u: goto label_1ec6b8;
        case 0x1ec6bcu: goto label_1ec6bc;
        case 0x1ec6c0u: goto label_1ec6c0;
        case 0x1ec6c4u: goto label_1ec6c4;
        case 0x1ec6c8u: goto label_1ec6c8;
        case 0x1ec6ccu: goto label_1ec6cc;
        case 0x1ec6d0u: goto label_1ec6d0;
        case 0x1ec6d4u: goto label_1ec6d4;
        case 0x1ec6d8u: goto label_1ec6d8;
        case 0x1ec6dcu: goto label_1ec6dc;
        case 0x1ec6e0u: goto label_1ec6e0;
        case 0x1ec6e4u: goto label_1ec6e4;
        case 0x1ec6e8u: goto label_1ec6e8;
        case 0x1ec6ecu: goto label_1ec6ec;
        case 0x1ec6f0u: goto label_1ec6f0;
        case 0x1ec6f4u: goto label_1ec6f4;
        case 0x1ec6f8u: goto label_1ec6f8;
        case 0x1ec6fcu: goto label_1ec6fc;
        case 0x1ec700u: goto label_1ec700;
        case 0x1ec704u: goto label_1ec704;
        case 0x1ec708u: goto label_1ec708;
        case 0x1ec70cu: goto label_1ec70c;
        case 0x1ec710u: goto label_1ec710;
        case 0x1ec714u: goto label_1ec714;
        case 0x1ec718u: goto label_1ec718;
        case 0x1ec71cu: goto label_1ec71c;
        case 0x1ec720u: goto label_1ec720;
        case 0x1ec724u: goto label_1ec724;
        case 0x1ec728u: goto label_1ec728;
        case 0x1ec72cu: goto label_1ec72c;
        case 0x1ec730u: goto label_1ec730;
        case 0x1ec734u: goto label_1ec734;
        case 0x1ec738u: goto label_1ec738;
        case 0x1ec73cu: goto label_1ec73c;
        case 0x1ec740u: goto label_1ec740;
        case 0x1ec744u: goto label_1ec744;
        case 0x1ec748u: goto label_1ec748;
        case 0x1ec74cu: goto label_1ec74c;
        case 0x1ec750u: goto label_1ec750;
        case 0x1ec754u: goto label_1ec754;
        case 0x1ec758u: goto label_1ec758;
        case 0x1ec75cu: goto label_1ec75c;
        case 0x1ec760u: goto label_1ec760;
        case 0x1ec764u: goto label_1ec764;
        case 0x1ec768u: goto label_1ec768;
        case 0x1ec76cu: goto label_1ec76c;
        case 0x1ec770u: goto label_1ec770;
        case 0x1ec774u: goto label_1ec774;
        case 0x1ec778u: goto label_1ec778;
        case 0x1ec77cu: goto label_1ec77c;
        case 0x1ec780u: goto label_1ec780;
        case 0x1ec784u: goto label_1ec784;
        case 0x1ec788u: goto label_1ec788;
        case 0x1ec78cu: goto label_1ec78c;
        case 0x1ec790u: goto label_1ec790;
        case 0x1ec794u: goto label_1ec794;
        case 0x1ec798u: goto label_1ec798;
        case 0x1ec79cu: goto label_1ec79c;
        case 0x1ec7a0u: goto label_1ec7a0;
        case 0x1ec7a4u: goto label_1ec7a4;
        case 0x1ec7a8u: goto label_1ec7a8;
        case 0x1ec7acu: goto label_1ec7ac;
        case 0x1ec7b0u: goto label_1ec7b0;
        case 0x1ec7b4u: goto label_1ec7b4;
        case 0x1ec7b8u: goto label_1ec7b8;
        case 0x1ec7bcu: goto label_1ec7bc;
        case 0x1ec7c0u: goto label_1ec7c0;
        case 0x1ec7c4u: goto label_1ec7c4;
        case 0x1ec7c8u: goto label_1ec7c8;
        case 0x1ec7ccu: goto label_1ec7cc;
        case 0x1ec7d0u: goto label_1ec7d0;
        case 0x1ec7d4u: goto label_1ec7d4;
        case 0x1ec7d8u: goto label_1ec7d8;
        case 0x1ec7dcu: goto label_1ec7dc;
        case 0x1ec7e0u: goto label_1ec7e0;
        case 0x1ec7e4u: goto label_1ec7e4;
        case 0x1ec7e8u: goto label_1ec7e8;
        case 0x1ec7ecu: goto label_1ec7ec;
        case 0x1ec7f0u: goto label_1ec7f0;
        case 0x1ec7f4u: goto label_1ec7f4;
        case 0x1ec7f8u: goto label_1ec7f8;
        case 0x1ec7fcu: goto label_1ec7fc;
        case 0x1ec800u: goto label_1ec800;
        case 0x1ec804u: goto label_1ec804;
        case 0x1ec808u: goto label_1ec808;
        case 0x1ec80cu: goto label_1ec80c;
        case 0x1ec810u: goto label_1ec810;
        case 0x1ec814u: goto label_1ec814;
        case 0x1ec818u: goto label_1ec818;
        case 0x1ec81cu: goto label_1ec81c;
        case 0x1ec820u: goto label_1ec820;
        case 0x1ec824u: goto label_1ec824;
        case 0x1ec828u: goto label_1ec828;
        case 0x1ec82cu: goto label_1ec82c;
        case 0x1ec830u: goto label_1ec830;
        case 0x1ec834u: goto label_1ec834;
        case 0x1ec838u: goto label_1ec838;
        case 0x1ec83cu: goto label_1ec83c;
        case 0x1ec840u: goto label_1ec840;
        case 0x1ec844u: goto label_1ec844;
        case 0x1ec848u: goto label_1ec848;
        case 0x1ec84cu: goto label_1ec84c;
        case 0x1ec850u: goto label_1ec850;
        case 0x1ec854u: goto label_1ec854;
        case 0x1ec858u: goto label_1ec858;
        case 0x1ec85cu: goto label_1ec85c;
        case 0x1ec860u: goto label_1ec860;
        case 0x1ec864u: goto label_1ec864;
        case 0x1ec868u: goto label_1ec868;
        case 0x1ec86cu: goto label_1ec86c;
        case 0x1ec870u: goto label_1ec870;
        case 0x1ec874u: goto label_1ec874;
        case 0x1ec878u: goto label_1ec878;
        case 0x1ec87cu: goto label_1ec87c;
        default: break;
    }

    ctx->pc = 0x1ebe70u;

label_1ebe70:
    // 0x1ebe70: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1ebe70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1ebe74:
    // 0x1ebe74: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1ebe74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1ebe78:
    // 0x1ebe78: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ebe78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1ebe7c:
    // 0x1ebe7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ebe7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1ebe80:
    // 0x1ebe80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ebe80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1ebe84:
    // 0x1ebe84: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1ebe84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ebe88:
    // 0x1ebe88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ebe88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ebe8c:
    // 0x1ebe8c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1ebe8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ebe90:
    // 0x1ebe90: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ebe90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ebe94:
    // 0x1ebe94: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1ebe94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ebe98:
    // 0x1ebe98: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1ebe98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1ebe9c:
    // 0x1ebe9c: 0xc07be84  jal         func_1EFA10
label_1ebea0:
    if (ctx->pc == 0x1EBEA0u) {
        ctx->pc = 0x1EBEA0u;
            // 0x1ebea0: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EBEA4u;
        goto label_1ebea4;
    }
    ctx->pc = 0x1EBE9Cu;
    SET_GPR_U32(ctx, 31, 0x1EBEA4u);
    ctx->pc = 0x1EBEA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBE9Cu;
            // 0x1ebea0: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EFA10u;
    if (runtime->hasFunction(0x1EFA10u)) {
        auto targetFn = runtime->lookupFunction(0x1EFA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBEA4u; }
        if (ctx->pc != 0x1EBEA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EFA10_0x1efa10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBEA4u; }
        if (ctx->pc != 0x1EBEA4u) { return; }
    }
    ctx->pc = 0x1EBEA4u;
label_1ebea4:
    // 0x1ebea4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ebea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ebea8:
    // 0x1ebea8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1ebea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1ebeac:
    // 0x1ebeac: 0x2442d9a0  addiu       $v0, $v0, -0x2660
    ctx->pc = 0x1ebeacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957472));
label_1ebeb0:
    // 0x1ebeb0: 0x2463d860  addiu       $v1, $v1, -0x27A0
    ctx->pc = 0x1ebeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957152));
label_1ebeb4:
    // 0x1ebeb4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1ebeb4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_1ebeb8:
    // 0x1ebeb8: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x1ebeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_1ebebc:
    // 0x1ebebc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ebebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ebec0:
    // 0x1ebec0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ebec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ebec4:
    // 0x1ebec4: 0xae630080  sw          $v1, 0x80($s3)
    ctx->pc = 0x1ebec4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 3));
label_1ebec8:
    // 0x1ebec8: 0xa2620084  sb          $v0, 0x84($s3)
    ctx->pc = 0x1ebec8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 132), (uint8_t)GPR_U32(ctx, 2));
label_1ebecc:
    // 0x1ebecc: 0xa2600085  sb          $zero, 0x85($s3)
    ctx->pc = 0x1ebeccu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 133), (uint8_t)GPR_U32(ctx, 0));
label_1ebed0:
    // 0x1ebed0: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x1ebed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1ebed4:
    // 0x1ebed4: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x1ebed4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1ebed8:
    // 0x1ebed8: 0x8e540000  lw          $s4, 0x0($s2)
    ctx->pc = 0x1ebed8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1ebedc:
    // 0x1ebedc: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x1ebedcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ebee0:
    // 0x1ebee0: 0xc0a45a0  jal         func_291680
label_1ebee4:
    if (ctx->pc == 0x1EBEE4u) {
        ctx->pc = 0x1EBEE4u;
            // 0x1ebee4: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1EBEE8u;
        goto label_1ebee8;
    }
    ctx->pc = 0x1EBEE0u;
    SET_GPR_U32(ctx, 31, 0x1EBEE8u);
    ctx->pc = 0x1EBEE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBEE0u;
            // 0x1ebee4: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291680u;
    if (runtime->hasFunction(0x291680u)) {
        auto targetFn = runtime->lookupFunction(0x291680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBEE8u; }
        if (ctx->pc != 0x1EBEE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00291680_0x291680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBEE8u; }
        if (ctx->pc != 0x1EBEE8u) { return; }
    }
    ctx->pc = 0x1EBEE8u;
label_1ebee8:
    // 0x1ebee8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ebee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ebeec:
    // 0x1ebeec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ebeecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ebef0:
    // 0x1ebef0: 0x2664000c  addiu       $a0, $s3, 0xC
    ctx->pc = 0x1ebef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_1ebef4:
    // 0x1ebef4: 0xc099878  jal         func_2661E0
label_1ebef8:
    if (ctx->pc == 0x1EBEF8u) {
        ctx->pc = 0x1EBEF8u;
            // 0x1ebef8: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1EBEFCu;
        goto label_1ebefc;
    }
    ctx->pc = 0x1EBEF4u;
    SET_GPR_U32(ctx, 31, 0x1EBEFCu);
    ctx->pc = 0x1EBEF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBEF4u;
            // 0x1ebef8: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2661E0u;
    if (runtime->hasFunction(0x2661E0u)) {
        auto targetFn = runtime->lookupFunction(0x2661E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBEFCu; }
        if (ctx->pc != 0x1EBEFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002661E0_0x2661e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBEFCu; }
        if (ctx->pc != 0x1EBEFCu) { return; }
    }
    ctx->pc = 0x1EBEFCu;
label_1ebefc:
    // 0x1ebefc: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x1ebefcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_1ebf00:
    // 0x1ebf00: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1ebf00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ebf04:
    // 0x1ebf04: 0xae63002c  sw          $v1, 0x2C($s3)
    ctx->pc = 0x1ebf04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 3));
label_1ebf08:
    // 0x1ebf08: 0xae630018  sw          $v1, 0x18($s3)
    ctx->pc = 0x1ebf08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 3));
label_1ebf0c:
    // 0x1ebf0c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1ebf0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1ebf10:
    // 0x1ebf10: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ebf10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ebf14:
    // 0x1ebf14: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ebf14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ebf18:
    // 0x1ebf18: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ebf18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ebf1c:
    // 0x1ebf1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ebf1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ebf20:
    // 0x1ebf20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ebf20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ebf24:
    // 0x1ebf24: 0x3e00008  jr          $ra
label_1ebf28:
    if (ctx->pc == 0x1EBF28u) {
        ctx->pc = 0x1EBF28u;
            // 0x1ebf28: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x1EBF2Cu;
        goto label_1ebf2c;
    }
    ctx->pc = 0x1EBF24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBF28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBF24u;
            // 0x1ebf28: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EBF2Cu;
label_1ebf2c:
    // 0x1ebf2c: 0x0  nop
    ctx->pc = 0x1ebf2cu;
    // NOP
label_1ebf30:
    // 0x1ebf30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ebf30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ebf34:
    // 0x1ebf34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ebf34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ebf38:
    // 0x1ebf38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ebf38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ebf3c:
    // 0x1ebf3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ebf3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ebf40:
    // 0x1ebf40: 0x52000027  beql        $s0, $zero, . + 4 + (0x27 << 2)
label_1ebf44:
    if (ctx->pc == 0x1EBF44u) {
        ctx->pc = 0x1EBF44u;
            // 0x1ebf44: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EBF48u;
        goto label_1ebf48;
    }
    ctx->pc = 0x1EBF40u;
    {
        const bool branch_taken_0x1ebf40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ebf40) {
            ctx->pc = 0x1EBF44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBF40u;
            // 0x1ebf44: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EBFE0u;
            goto label_1ebfe0;
        }
    }
    ctx->pc = 0x1EBF48u;
label_1ebf48:
    // 0x1ebf48: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ebf48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ebf4c:
    // 0x1ebf4c: 0x2442d9a0  addiu       $v0, $v0, -0x2660
    ctx->pc = 0x1ebf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957472));
label_1ebf50:
    // 0x1ebf50: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
label_1ebf54:
    if (ctx->pc == 0x1EBF54u) {
        ctx->pc = 0x1EBF54u;
            // 0x1ebf54: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1EBF58u;
        goto label_1ebf58;
    }
    ctx->pc = 0x1EBF50u;
    {
        const bool branch_taken_0x1ebf50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBF50u;
            // 0x1ebf54: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebf50) {
            ctx->pc = 0x1EBFB4u;
            goto label_1ebfb4;
        }
    }
    ctx->pc = 0x1EBF58u;
label_1ebf58:
    // 0x1ebf58: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ebf58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ebf5c:
    // 0x1ebf5c: 0x2442d960  addiu       $v0, $v0, -0x26A0
    ctx->pc = 0x1ebf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957408));
label_1ebf60:
    // 0x1ebf60: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
label_1ebf64:
    if (ctx->pc == 0x1EBF64u) {
        ctx->pc = 0x1EBF64u;
            // 0x1ebf64: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1EBF68u;
        goto label_1ebf68;
    }
    ctx->pc = 0x1EBF60u;
    {
        const bool branch_taken_0x1ebf60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBF64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBF60u;
            // 0x1ebf64: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebf60) {
            ctx->pc = 0x1EBFB4u;
            goto label_1ebfb4;
        }
    }
    ctx->pc = 0x1EBF68u;
label_1ebf68:
    // 0x1ebf68: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ebf68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ebf6c:
    // 0x1ebf6c: 0x2442d920  addiu       $v0, $v0, -0x26E0
    ctx->pc = 0x1ebf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957344));
label_1ebf70:
    // 0x1ebf70: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_1ebf74:
    if (ctx->pc == 0x1EBF74u) {
        ctx->pc = 0x1EBF74u;
            // 0x1ebf74: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1EBF78u;
        goto label_1ebf78;
    }
    ctx->pc = 0x1EBF70u;
    {
        const bool branch_taken_0x1ebf70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBF70u;
            // 0x1ebf74: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebf70) {
            ctx->pc = 0x1EBFB4u;
            goto label_1ebfb4;
        }
    }
    ctx->pc = 0x1EBF78u;
label_1ebf78:
    // 0x1ebf78: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ebf78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ebf7c:
    // 0x1ebf7c: 0x2442da20  addiu       $v0, $v0, -0x25E0
    ctx->pc = 0x1ebf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957600));
label_1ebf80:
    // 0x1ebf80: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_1ebf84:
    if (ctx->pc == 0x1EBF84u) {
        ctx->pc = 0x1EBF84u;
            // 0x1ebf84: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1EBF88u;
        goto label_1ebf88;
    }
    ctx->pc = 0x1EBF80u;
    {
        const bool branch_taken_0x1ebf80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBF84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBF80u;
            // 0x1ebf84: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebf80) {
            ctx->pc = 0x1EBFB4u;
            goto label_1ebfb4;
        }
    }
    ctx->pc = 0x1EBF88u;
label_1ebf88:
    // 0x1ebf88: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ebf88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ebf8c:
    // 0x1ebf8c: 0x2442d9e0  addiu       $v0, $v0, -0x2620
    ctx->pc = 0x1ebf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
label_1ebf90:
    // 0x1ebf90: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_1ebf94:
    if (ctx->pc == 0x1EBF94u) {
        ctx->pc = 0x1EBF94u;
            // 0x1ebf94: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1EBF98u;
        goto label_1ebf98;
    }
    ctx->pc = 0x1EBF90u;
    {
        const bool branch_taken_0x1ebf90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBF90u;
            // 0x1ebf94: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebf90) {
            ctx->pc = 0x1EBFB4u;
            goto label_1ebfb4;
        }
    }
    ctx->pc = 0x1EBF98u;
label_1ebf98:
    // 0x1ebf98: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ebf98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ebf9c:
    // 0x1ebf9c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1ebf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_1ebfa0:
    // 0x1ebfa0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1ebfa4:
    if (ctx->pc == 0x1EBFA4u) {
        ctx->pc = 0x1EBFA4u;
            // 0x1ebfa4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1EBFA8u;
        goto label_1ebfa8;
    }
    ctx->pc = 0x1EBFA0u;
    {
        const bool branch_taken_0x1ebfa0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EBFA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBFA0u;
            // 0x1ebfa4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebfa0) {
            ctx->pc = 0x1EBFB4u;
            goto label_1ebfb4;
        }
    }
    ctx->pc = 0x1EBFA8u;
label_1ebfa8:
    // 0x1ebfa8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ebfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ebfac:
    // 0x1ebfac: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x1ebfacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_1ebfb0:
    // 0x1ebfb0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1ebfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1ebfb4:
    // 0x1ebfb4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1ebfb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_1ebfb8:
    // 0x1ebfb8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1ebfb8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1ebfbc:
    // 0x1ebfbc: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_1ebfc0:
    if (ctx->pc == 0x1EBFC0u) {
        ctx->pc = 0x1EBFC4u;
        goto label_1ebfc4;
    }
    ctx->pc = 0x1EBFBCu;
    {
        const bool branch_taken_0x1ebfbc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1ebfbc) {
            ctx->pc = 0x1EBFDCu;
            goto label_1ebfdc;
        }
    }
    ctx->pc = 0x1EBFC4u;
label_1ebfc4:
    // 0x1ebfc4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1ebfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1ebfc8:
    // 0x1ebfc8: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x1ebfc8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_1ebfcc:
    // 0x1ebfcc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1ebfccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1ebfd0:
    // 0x1ebfd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ebfd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ebfd4:
    // 0x1ebfd4: 0xc0a7ab4  jal         func_29EAD0
label_1ebfd8:
    if (ctx->pc == 0x1EBFD8u) {
        ctx->pc = 0x1EBFD8u;
            // 0x1ebfd8: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x1EBFDCu;
        goto label_1ebfdc;
    }
    ctx->pc = 0x1EBFD4u;
    SET_GPR_U32(ctx, 31, 0x1EBFDCu);
    ctx->pc = 0x1EBFD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBFD4u;
            // 0x1ebfd8: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBFDCu; }
        if (ctx->pc != 0x1EBFDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EBFDCu; }
        if (ctx->pc != 0x1EBFDCu) { return; }
    }
    ctx->pc = 0x1EBFDCu;
label_1ebfdc:
    // 0x1ebfdc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ebfdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ebfe0:
    // 0x1ebfe0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ebfe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ebfe4:
    // 0x1ebfe4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ebfe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ebfe8:
    // 0x1ebfe8: 0x3e00008  jr          $ra
label_1ebfec:
    if (ctx->pc == 0x1EBFECu) {
        ctx->pc = 0x1EBFECu;
            // 0x1ebfec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1EBFF0u;
        goto label_1ebff0;
    }
    ctx->pc = 0x1EBFE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EBFE8u;
            // 0x1ebfec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EBFF0u;
label_1ebff0:
    // 0x1ebff0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ebff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ebff4:
    // 0x1ebff4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ebff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ebff8:
    // 0x1ebff8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ebff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ebffc:
    // 0x1ebffc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ebffcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ec000:
    // 0x1ec000: 0x52000023  beql        $s0, $zero, . + 4 + (0x23 << 2)
label_1ec004:
    if (ctx->pc == 0x1EC004u) {
        ctx->pc = 0x1EC004u;
            // 0x1ec004: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EC008u;
        goto label_1ec008;
    }
    ctx->pc = 0x1EC000u;
    {
        const bool branch_taken_0x1ec000 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec000) {
            ctx->pc = 0x1EC004u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC000u;
            // 0x1ec004: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EC090u;
            goto label_1ec090;
        }
    }
    ctx->pc = 0x1EC008u;
label_1ec008:
    // 0x1ec008: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ec008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ec00c:
    // 0x1ec00c: 0x2442d960  addiu       $v0, $v0, -0x26A0
    ctx->pc = 0x1ec00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957408));
label_1ec010:
    // 0x1ec010: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
label_1ec014:
    if (ctx->pc == 0x1EC014u) {
        ctx->pc = 0x1EC014u;
            // 0x1ec014: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1EC018u;
        goto label_1ec018;
    }
    ctx->pc = 0x1EC010u;
    {
        const bool branch_taken_0x1ec010 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC010u;
            // 0x1ec014: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec010) {
            ctx->pc = 0x1EC064u;
            goto label_1ec064;
        }
    }
    ctx->pc = 0x1EC018u;
label_1ec018:
    // 0x1ec018: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ec018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ec01c:
    // 0x1ec01c: 0x2442d920  addiu       $v0, $v0, -0x26E0
    ctx->pc = 0x1ec01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957344));
label_1ec020:
    // 0x1ec020: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_1ec024:
    if (ctx->pc == 0x1EC024u) {
        ctx->pc = 0x1EC024u;
            // 0x1ec024: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1EC028u;
        goto label_1ec028;
    }
    ctx->pc = 0x1EC020u;
    {
        const bool branch_taken_0x1ec020 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC020u;
            // 0x1ec024: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec020) {
            ctx->pc = 0x1EC064u;
            goto label_1ec064;
        }
    }
    ctx->pc = 0x1EC028u;
label_1ec028:
    // 0x1ec028: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ec028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ec02c:
    // 0x1ec02c: 0x2442da20  addiu       $v0, $v0, -0x25E0
    ctx->pc = 0x1ec02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957600));
label_1ec030:
    // 0x1ec030: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_1ec034:
    if (ctx->pc == 0x1EC034u) {
        ctx->pc = 0x1EC034u;
            // 0x1ec034: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1EC038u;
        goto label_1ec038;
    }
    ctx->pc = 0x1EC030u;
    {
        const bool branch_taken_0x1ec030 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC030u;
            // 0x1ec034: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec030) {
            ctx->pc = 0x1EC064u;
            goto label_1ec064;
        }
    }
    ctx->pc = 0x1EC038u;
label_1ec038:
    // 0x1ec038: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ec038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ec03c:
    // 0x1ec03c: 0x2442d9e0  addiu       $v0, $v0, -0x2620
    ctx->pc = 0x1ec03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
label_1ec040:
    // 0x1ec040: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_1ec044:
    if (ctx->pc == 0x1EC044u) {
        ctx->pc = 0x1EC044u;
            // 0x1ec044: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1EC048u;
        goto label_1ec048;
    }
    ctx->pc = 0x1EC040u;
    {
        const bool branch_taken_0x1ec040 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC040u;
            // 0x1ec044: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec040) {
            ctx->pc = 0x1EC064u;
            goto label_1ec064;
        }
    }
    ctx->pc = 0x1EC048u;
label_1ec048:
    // 0x1ec048: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ec048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ec04c:
    // 0x1ec04c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1ec04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_1ec050:
    // 0x1ec050: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1ec054:
    if (ctx->pc == 0x1EC054u) {
        ctx->pc = 0x1EC054u;
            // 0x1ec054: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1EC058u;
        goto label_1ec058;
    }
    ctx->pc = 0x1EC050u;
    {
        const bool branch_taken_0x1ec050 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC050u;
            // 0x1ec054: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec050) {
            ctx->pc = 0x1EC064u;
            goto label_1ec064;
        }
    }
    ctx->pc = 0x1EC058u;
label_1ec058:
    // 0x1ec058: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ec058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ec05c:
    // 0x1ec05c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x1ec05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_1ec060:
    // 0x1ec060: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1ec060u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1ec064:
    // 0x1ec064: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1ec064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_1ec068:
    // 0x1ec068: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1ec068u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1ec06c:
    // 0x1ec06c: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_1ec070:
    if (ctx->pc == 0x1EC070u) {
        ctx->pc = 0x1EC074u;
        goto label_1ec074;
    }
    ctx->pc = 0x1EC06Cu;
    {
        const bool branch_taken_0x1ec06c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1ec06c) {
            ctx->pc = 0x1EC08Cu;
            goto label_1ec08c;
        }
    }
    ctx->pc = 0x1EC074u;
label_1ec074:
    // 0x1ec074: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1ec074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1ec078:
    // 0x1ec078: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x1ec078u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_1ec07c:
    // 0x1ec07c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1ec07cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1ec080:
    // 0x1ec080: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ec080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ec084:
    // 0x1ec084: 0xc0a7ab4  jal         func_29EAD0
label_1ec088:
    if (ctx->pc == 0x1EC088u) {
        ctx->pc = 0x1EC088u;
            // 0x1ec088: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x1EC08Cu;
        goto label_1ec08c;
    }
    ctx->pc = 0x1EC084u;
    SET_GPR_U32(ctx, 31, 0x1EC08Cu);
    ctx->pc = 0x1EC088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC084u;
            // 0x1ec088: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC08Cu; }
        if (ctx->pc != 0x1EC08Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC08Cu; }
        if (ctx->pc != 0x1EC08Cu) { return; }
    }
    ctx->pc = 0x1EC08Cu;
label_1ec08c:
    // 0x1ec08c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ec08cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ec090:
    // 0x1ec090: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ec090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ec094:
    // 0x1ec094: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ec094u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ec098:
    // 0x1ec098: 0x3e00008  jr          $ra
label_1ec09c:
    if (ctx->pc == 0x1EC09Cu) {
        ctx->pc = 0x1EC09Cu;
            // 0x1ec09c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1EC0A0u;
        goto label_1ec0a0;
    }
    ctx->pc = 0x1EC098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC09Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC098u;
            // 0x1ec09c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EC0A0u;
label_1ec0a0:
    // 0x1ec0a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ec0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1ec0a4:
    // 0x1ec0a4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1ec0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1ec0a8:
    // 0x1ec0a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ec0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1ec0ac:
    // 0x1ec0ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ec0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1ec0b0:
    // 0x1ec0b0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1ec0b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ec0b4:
    // 0x1ec0b4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ec0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1ec0b8:
    // 0x1ec0b8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1ec0b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ec0bc:
    // 0x1ec0bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ec0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ec0c0:
    // 0x1ec0c0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1ec0c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ec0c4:
    // 0x1ec0c4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1ec0c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1ec0c8:
    // 0x1ec0c8: 0x1220004b  beqz        $s1, . + 4 + (0x4B << 2)
label_1ec0cc:
    if (ctx->pc == 0x1EC0CCu) {
        ctx->pc = 0x1EC0CCu;
            // 0x1ec0cc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x1EC0D0u;
        goto label_1ec0d0;
    }
    ctx->pc = 0x1EC0C8u;
    {
        const bool branch_taken_0x1ec0c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC0CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC0C8u;
            // 0x1ec0cc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec0c8) {
            ctx->pc = 0x1EC1F8u;
            goto label_1ec1f8;
        }
    }
    ctx->pc = 0x1EC0D0u;
label_1ec0d0:
    // 0x1ec0d0: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x1ec0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1ec0d4:
    // 0x1ec0d4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1ec0d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ec0d8:
    // 0x1ec0d8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1ec0d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ec0dc:
    // 0x1ec0dc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1ec0dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1ec0e0:
    // 0x1ec0e0: 0x320f809  jalr        $t9
label_1ec0e4:
    if (ctx->pc == 0x1EC0E4u) {
        ctx->pc = 0x1EC0E4u;
            // 0x1ec0e4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EC0E8u;
        goto label_1ec0e8;
    }
    ctx->pc = 0x1EC0E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EC0E8u);
        ctx->pc = 0x1EC0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC0E0u;
            // 0x1ec0e4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EC0E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EC0E8u; }
            if (ctx->pc != 0x1EC0E8u) { return; }
        }
        }
    }
    ctx->pc = 0x1EC0E8u;
label_1ec0e8:
    // 0x1ec0e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ec0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ec0ec:
    // 0x1ec0ec: 0x5043002a  beql        $v0, $v1, . + 4 + (0x2A << 2)
label_1ec0f0:
    if (ctx->pc == 0x1EC0F0u) {
        ctx->pc = 0x1EC0F0u;
            // 0x1ec0f0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->pc = 0x1EC0F4u;
        goto label_1ec0f4;
    }
    ctx->pc = 0x1EC0ECu;
    {
        const bool branch_taken_0x1ec0ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ec0ec) {
            ctx->pc = 0x1EC0F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC0ECu;
            // 0x1ec0f0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EC198u;
            goto label_1ec198;
        }
    }
    ctx->pc = 0x1EC0F4u;
label_1ec0f4:
    // 0x1ec0f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ec0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ec0f8:
    // 0x1ec0f8: 0x50430015  beql        $v0, $v1, . + 4 + (0x15 << 2)
label_1ec0fc:
    if (ctx->pc == 0x1EC0FCu) {
        ctx->pc = 0x1EC0FCu;
            // 0x1ec0fc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->pc = 0x1EC100u;
        goto label_1ec100;
    }
    ctx->pc = 0x1EC0F8u;
    {
        const bool branch_taken_0x1ec0f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ec0f8) {
            ctx->pc = 0x1EC0FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC0F8u;
            // 0x1ec0fc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EC150u;
            goto label_1ec150;
        }
    }
    ctx->pc = 0x1EC100u;
label_1ec100:
    // 0x1ec100: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_1ec104:
    if (ctx->pc == 0x1EC104u) {
        ctx->pc = 0x1EC104u;
            // 0x1ec104: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->pc = 0x1EC108u;
        goto label_1ec108;
    }
    ctx->pc = 0x1EC100u;
    {
        const bool branch_taken_0x1ec100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec100) {
            ctx->pc = 0x1EC104u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC100u;
            // 0x1ec104: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EC110u;
            goto label_1ec110;
        }
    }
    ctx->pc = 0x1EC108u;
label_1ec108:
    // 0x1ec108: 0x10000039  b           . + 4 + (0x39 << 2)
label_1ec10c:
    if (ctx->pc == 0x1EC10Cu) {
        ctx->pc = 0x1EC10Cu;
            // 0x1ec10c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EC110u;
        goto label_1ec110;
    }
    ctx->pc = 0x1EC108u;
    {
        const bool branch_taken_0x1ec108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC10Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC108u;
            // 0x1ec10c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec108) {
            ctx->pc = 0x1EC1F0u;
            goto label_1ec1f0;
        }
    }
    ctx->pc = 0x1EC110u;
label_1ec110:
    // 0x1ec110: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x1ec110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_1ec114:
    // 0x1ec114: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1ec114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1ec118:
    // 0x1ec118: 0xc0a7a88  jal         func_29EA20
label_1ec11c:
    if (ctx->pc == 0x1EC11Cu) {
        ctx->pc = 0x1EC11Cu;
            // 0x1ec11c: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x1EC120u;
        goto label_1ec120;
    }
    ctx->pc = 0x1EC118u;
    SET_GPR_U32(ctx, 31, 0x1EC120u);
    ctx->pc = 0x1EC11Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC118u;
            // 0x1ec11c: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC120u; }
        if (ctx->pc != 0x1EC120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC120u; }
        if (ctx->pc != 0x1EC120u) { return; }
    }
    ctx->pc = 0x1EC120u;
label_1ec120:
    // 0x1ec120: 0x24030090  addiu       $v1, $zero, 0x90
    ctx->pc = 0x1ec120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_1ec124:
    // 0x1ec124: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ec124u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ec128:
    // 0x1ec128: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_1ec12c:
    if (ctx->pc == 0x1EC12Cu) {
        ctx->pc = 0x1EC12Cu;
            // 0x1ec12c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1EC130u;
        goto label_1ec130;
    }
    ctx->pc = 0x1EC128u;
    {
        const bool branch_taken_0x1ec128 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC12Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC128u;
            // 0x1ec12c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec128) {
            ctx->pc = 0x1EC148u;
            goto label_1ec148;
        }
    }
    ctx->pc = 0x1EC130u;
label_1ec130:
    // 0x1ec130: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ec130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ec134:
    // 0x1ec134: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1ec134u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ec138:
    // 0x1ec138: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1ec138u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ec13c:
    // 0x1ec13c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1ec13cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ec140:
    // 0x1ec140: 0xc07af9c  jal         func_1EBE70
label_1ec144:
    if (ctx->pc == 0x1EC144u) {
        ctx->pc = 0x1EC144u;
            // 0x1ec144: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EC148u;
        goto label_1ec148;
    }
    ctx->pc = 0x1EC140u;
    SET_GPR_U32(ctx, 31, 0x1EC148u);
    ctx->pc = 0x1EC144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC140u;
            // 0x1ec144: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EBE70u;
    goto label_1ebe70;
    ctx->pc = 0x1EC148u;
label_1ec148:
    // 0x1ec148: 0x10000041  b           . + 4 + (0x41 << 2)
label_1ec14c:
    if (ctx->pc == 0x1EC14Cu) {
        ctx->pc = 0x1EC14Cu;
            // 0x1ec14c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EC150u;
        goto label_1ec150;
    }
    ctx->pc = 0x1EC148u;
    {
        const bool branch_taken_0x1ec148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC14Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC148u;
            // 0x1ec14c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec148) {
            ctx->pc = 0x1EC250u;
            goto label_1ec250;
        }
    }
    ctx->pc = 0x1EC150u;
label_1ec150:
    // 0x1ec150: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1ec150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1ec154:
    // 0x1ec154: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1ec154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1ec158:
    // 0x1ec158: 0xc0a7a88  jal         func_29EA20
label_1ec15c:
    if (ctx->pc == 0x1EC15Cu) {
        ctx->pc = 0x1EC15Cu;
            // 0x1ec15c: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x1EC160u;
        goto label_1ec160;
    }
    ctx->pc = 0x1EC158u;
    SET_GPR_U32(ctx, 31, 0x1EC160u);
    ctx->pc = 0x1EC15Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC158u;
            // 0x1ec15c: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC160u; }
        if (ctx->pc != 0x1EC160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC160u; }
        if (ctx->pc != 0x1EC160u) { return; }
    }
    ctx->pc = 0x1EC160u;
label_1ec160:
    // 0x1ec160: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1ec160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1ec164:
    // 0x1ec164: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ec164u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ec168:
    // 0x1ec168: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_1ec16c:
    if (ctx->pc == 0x1EC16Cu) {
        ctx->pc = 0x1EC16Cu;
            // 0x1ec16c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1EC170u;
        goto label_1ec170;
    }
    ctx->pc = 0x1EC168u;
    {
        const bool branch_taken_0x1ec168 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC16Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC168u;
            // 0x1ec16c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec168) {
            ctx->pc = 0x1EC190u;
            goto label_1ec190;
        }
    }
    ctx->pc = 0x1EC170u;
label_1ec170:
    // 0x1ec170: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ec170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ec174:
    // 0x1ec174: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1ec174u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ec178:
    // 0x1ec178: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1ec178u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ec17c:
    // 0x1ec17c: 0xc07be84  jal         func_1EFA10
label_1ec180:
    if (ctx->pc == 0x1EC180u) {
        ctx->pc = 0x1EC180u;
            // 0x1ec180: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EC184u;
        goto label_1ec184;
    }
    ctx->pc = 0x1EC17Cu;
    SET_GPR_U32(ctx, 31, 0x1EC184u);
    ctx->pc = 0x1EC180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC17Cu;
            // 0x1ec180: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EFA10u;
    if (runtime->hasFunction(0x1EFA10u)) {
        auto targetFn = runtime->lookupFunction(0x1EFA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC184u; }
        if (ctx->pc != 0x1EC184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EFA10_0x1efa10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC184u; }
        if (ctx->pc != 0x1EC184u) { return; }
    }
    ctx->pc = 0x1EC184u;
label_1ec184:
    // 0x1ec184: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ec184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ec188:
    // 0x1ec188: 0x2442d9a0  addiu       $v0, $v0, -0x2660
    ctx->pc = 0x1ec188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957472));
label_1ec18c:
    // 0x1ec18c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1ec18cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1ec190:
    // 0x1ec190: 0x1000002f  b           . + 4 + (0x2F << 2)
label_1ec194:
    if (ctx->pc == 0x1EC194u) {
        ctx->pc = 0x1EC194u;
            // 0x1ec194: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EC198u;
        goto label_1ec198;
    }
    ctx->pc = 0x1EC190u;
    {
        const bool branch_taken_0x1ec190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC190u;
            // 0x1ec194: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec190) {
            ctx->pc = 0x1EC250u;
            goto label_1ec250;
        }
    }
    ctx->pc = 0x1EC198u;
label_1ec198:
    // 0x1ec198: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x1ec198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_1ec19c:
    // 0x1ec19c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1ec19cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1ec1a0:
    // 0x1ec1a0: 0xc0a7a88  jal         func_29EA20
label_1ec1a4:
    if (ctx->pc == 0x1EC1A4u) {
        ctx->pc = 0x1EC1A4u;
            // 0x1ec1a4: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x1EC1A8u;
        goto label_1ec1a8;
    }
    ctx->pc = 0x1EC1A0u;
    SET_GPR_U32(ctx, 31, 0x1EC1A8u);
    ctx->pc = 0x1EC1A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC1A0u;
            // 0x1ec1a4: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC1A8u; }
        if (ctx->pc != 0x1EC1A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC1A8u; }
        if (ctx->pc != 0x1EC1A8u) { return; }
    }
    ctx->pc = 0x1EC1A8u;
label_1ec1a8:
    // 0x1ec1a8: 0x24030038  addiu       $v1, $zero, 0x38
    ctx->pc = 0x1ec1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_1ec1ac:
    // 0x1ec1ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ec1acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ec1b0:
    // 0x1ec1b0: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_1ec1b4:
    if (ctx->pc == 0x1EC1B4u) {
        ctx->pc = 0x1EC1B4u;
            // 0x1ec1b4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1EC1B8u;
        goto label_1ec1b8;
    }
    ctx->pc = 0x1EC1B0u;
    {
        const bool branch_taken_0x1ec1b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC1B0u;
            // 0x1ec1b4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec1b0) {
            ctx->pc = 0x1EC1E8u;
            goto label_1ec1e8;
        }
    }
    ctx->pc = 0x1EC1B8u;
label_1ec1b8:
    // 0x1ec1b8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ec1b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ec1bc:
    // 0x1ec1bc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1ec1bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ec1c0:
    // 0x1ec1c0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1ec1c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ec1c4:
    // 0x1ec1c4: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1ec1c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ec1c8:
    // 0x1ec1c8: 0xc07d3e8  jal         func_1F4FA0
label_1ec1cc:
    if (ctx->pc == 0x1EC1CCu) {
        ctx->pc = 0x1EC1CCu;
            // 0x1ec1cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EC1D0u;
        goto label_1ec1d0;
    }
    ctx->pc = 0x1EC1C8u;
    SET_GPR_U32(ctx, 31, 0x1EC1D0u);
    ctx->pc = 0x1EC1CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC1C8u;
            // 0x1ec1cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F4FA0u;
    if (runtime->hasFunction(0x1F4FA0u)) {
        auto targetFn = runtime->lookupFunction(0x1F4FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC1D0u; }
        if (ctx->pc != 0x1EC1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4FA0_0x1f4fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC1D0u; }
        if (ctx->pc != 0x1EC1D0u) { return; }
    }
    ctx->pc = 0x1EC1D0u;
label_1ec1d0:
    // 0x1ec1d0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1ec1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1ec1d4:
    // 0x1ec1d4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ec1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ec1d8:
    // 0x1ec1d8: 0x2463d740  addiu       $v1, $v1, -0x28C0
    ctx->pc = 0x1ec1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956864));
label_1ec1dc:
    // 0x1ec1dc: 0x2442d700  addiu       $v0, $v0, -0x2900
    ctx->pc = 0x1ec1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956800));
label_1ec1e0:
    // 0x1ec1e0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1ec1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1ec1e4:
    // 0x1ec1e4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1ec1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1ec1e8:
    // 0x1ec1e8: 0x10000019  b           . + 4 + (0x19 << 2)
label_1ec1ec:
    if (ctx->pc == 0x1EC1ECu) {
        ctx->pc = 0x1EC1ECu;
            // 0x1ec1ec: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EC1F0u;
        goto label_1ec1f0;
    }
    ctx->pc = 0x1EC1E8u;
    {
        const bool branch_taken_0x1ec1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC1ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC1E8u;
            // 0x1ec1ec: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec1e8) {
            ctx->pc = 0x1EC250u;
            goto label_1ec250;
        }
    }
    ctx->pc = 0x1EC1F0u;
label_1ec1f0:
    // 0x1ec1f0: 0x10000018  b           . + 4 + (0x18 << 2)
label_1ec1f4:
    if (ctx->pc == 0x1EC1F4u) {
        ctx->pc = 0x1EC1F4u;
            // 0x1ec1f4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x1EC1F8u;
        goto label_1ec1f8;
    }
    ctx->pc = 0x1EC1F0u;
    {
        const bool branch_taken_0x1ec1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC1F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC1F0u;
            // 0x1ec1f4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec1f0) {
            ctx->pc = 0x1EC254u;
            goto label_1ec254;
        }
    }
    ctx->pc = 0x1EC1F8u;
label_1ec1f8:
    // 0x1ec1f8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1ec1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1ec1fc:
    // 0x1ec1fc: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x1ec1fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_1ec200:
    // 0x1ec200: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1ec200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1ec204:
    // 0x1ec204: 0xc0a7a88  jal         func_29EA20
label_1ec208:
    if (ctx->pc == 0x1EC208u) {
        ctx->pc = 0x1EC208u;
            // 0x1ec208: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x1EC20Cu;
        goto label_1ec20c;
    }
    ctx->pc = 0x1EC204u;
    SET_GPR_U32(ctx, 31, 0x1EC20Cu);
    ctx->pc = 0x1EC208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC204u;
            // 0x1ec208: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC20Cu; }
        if (ctx->pc != 0x1EC20Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC20Cu; }
        if (ctx->pc != 0x1EC20Cu) { return; }
    }
    ctx->pc = 0x1EC20Cu;
label_1ec20c:
    // 0x1ec20c: 0x24030038  addiu       $v1, $zero, 0x38
    ctx->pc = 0x1ec20cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_1ec210:
    // 0x1ec210: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ec210u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ec214:
    // 0x1ec214: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_1ec218:
    if (ctx->pc == 0x1EC218u) {
        ctx->pc = 0x1EC218u;
            // 0x1ec218: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1EC21Cu;
        goto label_1ec21c;
    }
    ctx->pc = 0x1EC214u;
    {
        const bool branch_taken_0x1ec214 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC214u;
            // 0x1ec218: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec214) {
            ctx->pc = 0x1EC24Cu;
            goto label_1ec24c;
        }
    }
    ctx->pc = 0x1EC21Cu;
label_1ec21c:
    // 0x1ec21c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ec21cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ec220:
    // 0x1ec220: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1ec220u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ec224:
    // 0x1ec224: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1ec224u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ec228:
    // 0x1ec228: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1ec228u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ec22c:
    // 0x1ec22c: 0xc07d3e8  jal         func_1F4FA0
label_1ec230:
    if (ctx->pc == 0x1EC230u) {
        ctx->pc = 0x1EC230u;
            // 0x1ec230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EC234u;
        goto label_1ec234;
    }
    ctx->pc = 0x1EC22Cu;
    SET_GPR_U32(ctx, 31, 0x1EC234u);
    ctx->pc = 0x1EC230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC22Cu;
            // 0x1ec230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F4FA0u;
    if (runtime->hasFunction(0x1F4FA0u)) {
        auto targetFn = runtime->lookupFunction(0x1F4FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC234u; }
        if (ctx->pc != 0x1EC234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4FA0_0x1f4fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC234u; }
        if (ctx->pc != 0x1EC234u) { return; }
    }
    ctx->pc = 0x1EC234u;
label_1ec234:
    // 0x1ec234: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1ec234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1ec238:
    // 0x1ec238: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ec238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ec23c:
    // 0x1ec23c: 0x2463d740  addiu       $v1, $v1, -0x28C0
    ctx->pc = 0x1ec23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956864));
label_1ec240:
    // 0x1ec240: 0x2442d700  addiu       $v0, $v0, -0x2900
    ctx->pc = 0x1ec240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956800));
label_1ec244:
    // 0x1ec244: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1ec244u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1ec248:
    // 0x1ec248: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1ec248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1ec24c:
    // 0x1ec24c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ec24cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ec250:
    // 0x1ec250: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1ec250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1ec254:
    // 0x1ec254: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ec254u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ec258:
    // 0x1ec258: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ec258u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ec25c:
    // 0x1ec25c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ec25cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ec260:
    // 0x1ec260: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ec260u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ec264:
    // 0x1ec264: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ec264u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ec268:
    // 0x1ec268: 0x3e00008  jr          $ra
label_1ec26c:
    if (ctx->pc == 0x1EC26Cu) {
        ctx->pc = 0x1EC26Cu;
            // 0x1ec26c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1EC270u;
        goto label_1ec270;
    }
    ctx->pc = 0x1EC268u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC26Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC268u;
            // 0x1ec26c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EC270u;
label_1ec270:
    // 0x1ec270: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ec270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1ec274:
    // 0x1ec274: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1ec274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1ec278:
    // 0x1ec278: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ec278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1ec27c:
    // 0x1ec27c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ec27cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1ec280:
    // 0x1ec280: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1ec280u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ec284:
    // 0x1ec284: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ec284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1ec288:
    // 0x1ec288: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1ec288u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ec28c:
    // 0x1ec28c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ec28cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ec290:
    // 0x1ec290: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1ec290u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ec294:
    // 0x1ec294: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1ec294u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1ec298:
    // 0x1ec298: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_1ec29c:
    if (ctx->pc == 0x1EC29Cu) {
        ctx->pc = 0x1EC29Cu;
            // 0x1ec29c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x1EC2A0u;
        goto label_1ec2a0;
    }
    ctx->pc = 0x1EC298u;
    {
        const bool branch_taken_0x1ec298 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC29Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC298u;
            // 0x1ec29c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec298) {
            ctx->pc = 0x1EC3CCu;
            goto label_1ec3cc;
        }
    }
    ctx->pc = 0x1EC2A0u;
label_1ec2a0:
    // 0x1ec2a0: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x1ec2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1ec2a4:
    // 0x1ec2a4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ec2a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ec2a8:
    // 0x1ec2a8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1ec2a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ec2ac:
    // 0x1ec2ac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1ec2acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ec2b0:
    // 0x1ec2b0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1ec2b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1ec2b4:
    // 0x1ec2b4: 0x320f809  jalr        $t9
label_1ec2b8:
    if (ctx->pc == 0x1EC2B8u) {
        ctx->pc = 0x1EC2B8u;
            // 0x1ec2b8: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EC2BCu;
        goto label_1ec2bc;
    }
    ctx->pc = 0x1EC2B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EC2BCu);
        ctx->pc = 0x1EC2B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC2B4u;
            // 0x1ec2b8: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EC2BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EC2BCu; }
            if (ctx->pc != 0x1EC2BCu) { return; }
        }
        }
    }
    ctx->pc = 0x1EC2BCu;
label_1ec2bc:
    // 0x1ec2bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ec2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ec2c0:
    // 0x1ec2c0: 0x50430030  beql        $v0, $v1, . + 4 + (0x30 << 2)
label_1ec2c4:
    if (ctx->pc == 0x1EC2C4u) {
        ctx->pc = 0x1EC2C4u;
            // 0x1ec2c4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->pc = 0x1EC2C8u;
        goto label_1ec2c8;
    }
    ctx->pc = 0x1EC2C0u;
    {
        const bool branch_taken_0x1ec2c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ec2c0) {
            ctx->pc = 0x1EC2C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC2C0u;
            // 0x1ec2c4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EC384u;
            goto label_1ec384;
        }
    }
    ctx->pc = 0x1EC2C8u;
label_1ec2c8:
    // 0x1ec2c8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ec2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ec2cc:
    // 0x1ec2cc: 0x5043001b  beql        $v0, $v1, . + 4 + (0x1B << 2)
label_1ec2d0:
    if (ctx->pc == 0x1EC2D0u) {
        ctx->pc = 0x1EC2D0u;
            // 0x1ec2d0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->pc = 0x1EC2D4u;
        goto label_1ec2d4;
    }
    ctx->pc = 0x1EC2CCu;
    {
        const bool branch_taken_0x1ec2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ec2cc) {
            ctx->pc = 0x1EC2D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC2CCu;
            // 0x1ec2d0: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EC33Cu;
            goto label_1ec33c;
        }
    }
    ctx->pc = 0x1EC2D4u;
label_1ec2d4:
    // 0x1ec2d4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_1ec2d8:
    if (ctx->pc == 0x1EC2D8u) {
        ctx->pc = 0x1EC2D8u;
            // 0x1ec2d8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->pc = 0x1EC2DCu;
        goto label_1ec2dc;
    }
    ctx->pc = 0x1EC2D4u;
    {
        const bool branch_taken_0x1ec2d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec2d4) {
            ctx->pc = 0x1EC2D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC2D4u;
            // 0x1ec2d8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EC2E4u;
            goto label_1ec2e4;
        }
    }
    ctx->pc = 0x1EC2DCu;
label_1ec2dc:
    // 0x1ec2dc: 0x10000039  b           . + 4 + (0x39 << 2)
label_1ec2e0:
    if (ctx->pc == 0x1EC2E0u) {
        ctx->pc = 0x1EC2E0u;
            // 0x1ec2e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EC2E4u;
        goto label_1ec2e4;
    }
    ctx->pc = 0x1EC2DCu;
    {
        const bool branch_taken_0x1ec2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC2E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC2DCu;
            // 0x1ec2e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec2dc) {
            ctx->pc = 0x1EC3C4u;
            goto label_1ec3c4;
        }
    }
    ctx->pc = 0x1EC2E4u;
label_1ec2e4:
    // 0x1ec2e4: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x1ec2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_1ec2e8:
    // 0x1ec2e8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1ec2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1ec2ec:
    // 0x1ec2ec: 0xc0a7a88  jal         func_29EA20
label_1ec2f0:
    if (ctx->pc == 0x1EC2F0u) {
        ctx->pc = 0x1EC2F0u;
            // 0x1ec2f0: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x1EC2F4u;
        goto label_1ec2f4;
    }
    ctx->pc = 0x1EC2ECu;
    SET_GPR_U32(ctx, 31, 0x1EC2F4u);
    ctx->pc = 0x1EC2F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC2ECu;
            // 0x1ec2f0: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC2F4u; }
        if (ctx->pc != 0x1EC2F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC2F4u; }
        if (ctx->pc != 0x1EC2F4u) { return; }
    }
    ctx->pc = 0x1EC2F4u;
label_1ec2f4:
    // 0x1ec2f4: 0x24030090  addiu       $v1, $zero, 0x90
    ctx->pc = 0x1ec2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_1ec2f8:
    // 0x1ec2f8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ec2f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ec2fc:
    // 0x1ec2fc: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_1ec300:
    if (ctx->pc == 0x1EC300u) {
        ctx->pc = 0x1EC300u;
            // 0x1ec300: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1EC304u;
        goto label_1ec304;
    }
    ctx->pc = 0x1EC2FCu;
    {
        const bool branch_taken_0x1ec2fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC2FCu;
            // 0x1ec300: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec2fc) {
            ctx->pc = 0x1EC334u;
            goto label_1ec334;
        }
    }
    ctx->pc = 0x1EC304u;
label_1ec304:
    // 0x1ec304: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ec304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ec308:
    // 0x1ec308: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1ec308u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ec30c:
    // 0x1ec30c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1ec30cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ec310:
    // 0x1ec310: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1ec310u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ec314:
    // 0x1ec314: 0xc07af9c  jal         func_1EBE70
label_1ec318:
    if (ctx->pc == 0x1EC318u) {
        ctx->pc = 0x1EC318u;
            // 0x1ec318: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EC31Cu;
        goto label_1ec31c;
    }
    ctx->pc = 0x1EC314u;
    SET_GPR_U32(ctx, 31, 0x1EC31Cu);
    ctx->pc = 0x1EC318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC314u;
            // 0x1ec318: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EBE70u;
    goto label_1ebe70;
    ctx->pc = 0x1EC31Cu;
label_1ec31c:
    // 0x1ec31c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1ec31cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1ec320:
    // 0x1ec320: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ec320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ec324:
    // 0x1ec324: 0x2463d8e0  addiu       $v1, $v1, -0x2720
    ctx->pc = 0x1ec324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957280));
label_1ec328:
    // 0x1ec328: 0x2442d8a0  addiu       $v0, $v0, -0x2760
    ctx->pc = 0x1ec328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957216));
label_1ec32c:
    // 0x1ec32c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1ec32cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1ec330:
    // 0x1ec330: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1ec330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1ec334:
    // 0x1ec334: 0x10000035  b           . + 4 + (0x35 << 2)
label_1ec338:
    if (ctx->pc == 0x1EC338u) {
        ctx->pc = 0x1EC338u;
            // 0x1ec338: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EC33Cu;
        goto label_1ec33c;
    }
    ctx->pc = 0x1EC334u;
    {
        const bool branch_taken_0x1ec334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC334u;
            // 0x1ec338: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec334) {
            ctx->pc = 0x1EC40Cu;
            goto label_1ec40c;
        }
    }
    ctx->pc = 0x1EC33Cu;
label_1ec33c:
    // 0x1ec33c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1ec33cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1ec340:
    // 0x1ec340: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1ec340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1ec344:
    // 0x1ec344: 0xc0a7a88  jal         func_29EA20
label_1ec348:
    if (ctx->pc == 0x1EC348u) {
        ctx->pc = 0x1EC348u;
            // 0x1ec348: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x1EC34Cu;
        goto label_1ec34c;
    }
    ctx->pc = 0x1EC344u;
    SET_GPR_U32(ctx, 31, 0x1EC34Cu);
    ctx->pc = 0x1EC348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC344u;
            // 0x1ec348: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC34Cu; }
        if (ctx->pc != 0x1EC34Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC34Cu; }
        if (ctx->pc != 0x1EC34Cu) { return; }
    }
    ctx->pc = 0x1EC34Cu;
label_1ec34c:
    // 0x1ec34c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1ec34cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1ec350:
    // 0x1ec350: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ec350u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ec354:
    // 0x1ec354: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_1ec358:
    if (ctx->pc == 0x1EC358u) {
        ctx->pc = 0x1EC358u;
            // 0x1ec358: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1EC35Cu;
        goto label_1ec35c;
    }
    ctx->pc = 0x1EC354u;
    {
        const bool branch_taken_0x1ec354 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC354u;
            // 0x1ec358: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec354) {
            ctx->pc = 0x1EC37Cu;
            goto label_1ec37c;
        }
    }
    ctx->pc = 0x1EC35Cu;
label_1ec35c:
    // 0x1ec35c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ec35cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ec360:
    // 0x1ec360: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1ec360u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ec364:
    // 0x1ec364: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1ec364u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ec368:
    // 0x1ec368: 0xc07be84  jal         func_1EFA10
label_1ec36c:
    if (ctx->pc == 0x1EC36Cu) {
        ctx->pc = 0x1EC36Cu;
            // 0x1ec36c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EC370u;
        goto label_1ec370;
    }
    ctx->pc = 0x1EC368u;
    SET_GPR_U32(ctx, 31, 0x1EC370u);
    ctx->pc = 0x1EC36Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC368u;
            // 0x1ec36c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EFA10u;
    if (runtime->hasFunction(0x1EFA10u)) {
        auto targetFn = runtime->lookupFunction(0x1EFA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC370u; }
        if (ctx->pc != 0x1EC370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EFA10_0x1efa10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC370u; }
        if (ctx->pc != 0x1EC370u) { return; }
    }
    ctx->pc = 0x1EC370u;
label_1ec370:
    // 0x1ec370: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ec370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ec374:
    // 0x1ec374: 0x2442d9a0  addiu       $v0, $v0, -0x2660
    ctx->pc = 0x1ec374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957472));
label_1ec378:
    // 0x1ec378: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1ec378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1ec37c:
    // 0x1ec37c: 0x10000023  b           . + 4 + (0x23 << 2)
label_1ec380:
    if (ctx->pc == 0x1EC380u) {
        ctx->pc = 0x1EC380u;
            // 0x1ec380: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EC384u;
        goto label_1ec384;
    }
    ctx->pc = 0x1EC37Cu;
    {
        const bool branch_taken_0x1ec37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC37Cu;
            // 0x1ec380: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec37c) {
            ctx->pc = 0x1EC40Cu;
            goto label_1ec40c;
        }
    }
    ctx->pc = 0x1EC384u;
label_1ec384:
    // 0x1ec384: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x1ec384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_1ec388:
    // 0x1ec388: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1ec388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1ec38c:
    // 0x1ec38c: 0xc0a7a88  jal         func_29EA20
label_1ec390:
    if (ctx->pc == 0x1EC390u) {
        ctx->pc = 0x1EC390u;
            // 0x1ec390: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x1EC394u;
        goto label_1ec394;
    }
    ctx->pc = 0x1EC38Cu;
    SET_GPR_U32(ctx, 31, 0x1EC394u);
    ctx->pc = 0x1EC390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC38Cu;
            // 0x1ec390: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC394u; }
        if (ctx->pc != 0x1EC394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC394u; }
        if (ctx->pc != 0x1EC394u) { return; }
    }
    ctx->pc = 0x1EC394u;
label_1ec394:
    // 0x1ec394: 0x24030038  addiu       $v1, $zero, 0x38
    ctx->pc = 0x1ec394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_1ec398:
    // 0x1ec398: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ec398u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ec39c:
    // 0x1ec39c: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_1ec3a0:
    if (ctx->pc == 0x1EC3A0u) {
        ctx->pc = 0x1EC3A0u;
            // 0x1ec3a0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1EC3A4u;
        goto label_1ec3a4;
    }
    ctx->pc = 0x1EC39Cu;
    {
        const bool branch_taken_0x1ec39c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC3A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC39Cu;
            // 0x1ec3a0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec39c) {
            ctx->pc = 0x1EC3BCu;
            goto label_1ec3bc;
        }
    }
    ctx->pc = 0x1EC3A4u;
label_1ec3a4:
    // 0x1ec3a4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ec3a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ec3a8:
    // 0x1ec3a8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1ec3a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ec3ac:
    // 0x1ec3ac: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1ec3acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ec3b0:
    // 0x1ec3b0: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1ec3b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ec3b4:
    // 0x1ec3b4: 0xc07d3e8  jal         func_1F4FA0
label_1ec3b8:
    if (ctx->pc == 0x1EC3B8u) {
        ctx->pc = 0x1EC3B8u;
            // 0x1ec3b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EC3BCu;
        goto label_1ec3bc;
    }
    ctx->pc = 0x1EC3B4u;
    SET_GPR_U32(ctx, 31, 0x1EC3BCu);
    ctx->pc = 0x1EC3B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC3B4u;
            // 0x1ec3b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F4FA0u;
    if (runtime->hasFunction(0x1F4FA0u)) {
        auto targetFn = runtime->lookupFunction(0x1F4FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC3BCu; }
        if (ctx->pc != 0x1EC3BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4FA0_0x1f4fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC3BCu; }
        if (ctx->pc != 0x1EC3BCu) { return; }
    }
    ctx->pc = 0x1EC3BCu;
label_1ec3bc:
    // 0x1ec3bc: 0x10000013  b           . + 4 + (0x13 << 2)
label_1ec3c0:
    if (ctx->pc == 0x1EC3C0u) {
        ctx->pc = 0x1EC3C0u;
            // 0x1ec3c0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EC3C4u;
        goto label_1ec3c4;
    }
    ctx->pc = 0x1EC3BCu;
    {
        const bool branch_taken_0x1ec3bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC3C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC3BCu;
            // 0x1ec3c0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec3bc) {
            ctx->pc = 0x1EC40Cu;
            goto label_1ec40c;
        }
    }
    ctx->pc = 0x1EC3C4u;
label_1ec3c4:
    // 0x1ec3c4: 0x10000012  b           . + 4 + (0x12 << 2)
label_1ec3c8:
    if (ctx->pc == 0x1EC3C8u) {
        ctx->pc = 0x1EC3C8u;
            // 0x1ec3c8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x1EC3CCu;
        goto label_1ec3cc;
    }
    ctx->pc = 0x1EC3C4u;
    {
        const bool branch_taken_0x1ec3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC3C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC3C4u;
            // 0x1ec3c8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec3c4) {
            ctx->pc = 0x1EC410u;
            goto label_1ec410;
        }
    }
    ctx->pc = 0x1EC3CCu;
label_1ec3cc:
    // 0x1ec3cc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1ec3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1ec3d0:
    // 0x1ec3d0: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x1ec3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_1ec3d4:
    // 0x1ec3d4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1ec3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1ec3d8:
    // 0x1ec3d8: 0xc0a7a88  jal         func_29EA20
label_1ec3dc:
    if (ctx->pc == 0x1EC3DCu) {
        ctx->pc = 0x1EC3DCu;
            // 0x1ec3dc: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x1EC3E0u;
        goto label_1ec3e0;
    }
    ctx->pc = 0x1EC3D8u;
    SET_GPR_U32(ctx, 31, 0x1EC3E0u);
    ctx->pc = 0x1EC3DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC3D8u;
            // 0x1ec3dc: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC3E0u; }
        if (ctx->pc != 0x1EC3E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC3E0u; }
        if (ctx->pc != 0x1EC3E0u) { return; }
    }
    ctx->pc = 0x1EC3E0u;
label_1ec3e0:
    // 0x1ec3e0: 0x24030038  addiu       $v1, $zero, 0x38
    ctx->pc = 0x1ec3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_1ec3e4:
    // 0x1ec3e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ec3e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ec3e8:
    // 0x1ec3e8: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_1ec3ec:
    if (ctx->pc == 0x1EC3ECu) {
        ctx->pc = 0x1EC3ECu;
            // 0x1ec3ec: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1EC3F0u;
        goto label_1ec3f0;
    }
    ctx->pc = 0x1EC3E8u;
    {
        const bool branch_taken_0x1ec3e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC3E8u;
            // 0x1ec3ec: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec3e8) {
            ctx->pc = 0x1EC408u;
            goto label_1ec408;
        }
    }
    ctx->pc = 0x1EC3F0u;
label_1ec3f0:
    // 0x1ec3f0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ec3f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ec3f4:
    // 0x1ec3f4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1ec3f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ec3f8:
    // 0x1ec3f8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1ec3f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ec3fc:
    // 0x1ec3fc: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1ec3fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ec400:
    // 0x1ec400: 0xc07d3e8  jal         func_1F4FA0
label_1ec404:
    if (ctx->pc == 0x1EC404u) {
        ctx->pc = 0x1EC404u;
            // 0x1ec404: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EC408u;
        goto label_1ec408;
    }
    ctx->pc = 0x1EC400u;
    SET_GPR_U32(ctx, 31, 0x1EC408u);
    ctx->pc = 0x1EC404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC400u;
            // 0x1ec404: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F4FA0u;
    if (runtime->hasFunction(0x1F4FA0u)) {
        auto targetFn = runtime->lookupFunction(0x1F4FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC408u; }
        if (ctx->pc != 0x1EC408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4FA0_0x1f4fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC408u; }
        if (ctx->pc != 0x1EC408u) { return; }
    }
    ctx->pc = 0x1EC408u;
label_1ec408:
    // 0x1ec408: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ec408u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ec40c:
    // 0x1ec40c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1ec40cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1ec410:
    // 0x1ec410: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ec410u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ec414:
    // 0x1ec414: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ec414u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ec418:
    // 0x1ec418: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ec418u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ec41c:
    // 0x1ec41c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ec41cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ec420:
    // 0x1ec420: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ec420u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ec424:
    // 0x1ec424: 0x3e00008  jr          $ra
label_1ec428:
    if (ctx->pc == 0x1EC428u) {
        ctx->pc = 0x1EC428u;
            // 0x1ec428: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1EC42Cu;
        goto label_1ec42c;
    }
    ctx->pc = 0x1EC424u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC424u;
            // 0x1ec428: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EC42Cu;
label_1ec42c:
    // 0x1ec42c: 0x0  nop
    ctx->pc = 0x1ec42cu;
    // NOP
label_1ec430:
    // 0x1ec430: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ec430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ec434:
    // 0x1ec434: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ec434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ec438:
    // 0x1ec438: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ec438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ec43c:
    // 0x1ec43c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ec43cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ec440:
    // 0x1ec440: 0x5200002f  beql        $s0, $zero, . + 4 + (0x2F << 2)
label_1ec444:
    if (ctx->pc == 0x1EC444u) {
        ctx->pc = 0x1EC444u;
            // 0x1ec444: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EC448u;
        goto label_1ec448;
    }
    ctx->pc = 0x1EC440u;
    {
        const bool branch_taken_0x1ec440 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec440) {
            ctx->pc = 0x1EC444u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC440u;
            // 0x1ec444: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EC500u;
            goto label_1ec500;
        }
    }
    ctx->pc = 0x1EC448u;
label_1ec448:
    // 0x1ec448: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ec448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ec44c:
    // 0x1ec44c: 0x2442d8e0  addiu       $v0, $v0, -0x2720
    ctx->pc = 0x1ec44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957280));
label_1ec450:
    // 0x1ec450: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
label_1ec454:
    if (ctx->pc == 0x1EC454u) {
        ctx->pc = 0x1EC454u;
            // 0x1ec454: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1EC458u;
        goto label_1ec458;
    }
    ctx->pc = 0x1EC450u;
    {
        const bool branch_taken_0x1ec450 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC450u;
            // 0x1ec454: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec450) {
            ctx->pc = 0x1EC4D4u;
            goto label_1ec4d4;
        }
    }
    ctx->pc = 0x1EC458u;
label_1ec458:
    // 0x1ec458: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ec458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ec45c:
    // 0x1ec45c: 0x2442d860  addiu       $v0, $v0, -0x27A0
    ctx->pc = 0x1ec45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957152));
label_1ec460:
    // 0x1ec460: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
label_1ec464:
    if (ctx->pc == 0x1EC464u) {
        ctx->pc = 0x1EC464u;
            // 0x1ec464: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1EC468u;
        goto label_1ec468;
    }
    ctx->pc = 0x1EC460u;
    {
        const bool branch_taken_0x1ec460 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC460u;
            // 0x1ec464: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec460) {
            ctx->pc = 0x1EC4D4u;
            goto label_1ec4d4;
        }
    }
    ctx->pc = 0x1EC468u;
label_1ec468:
    // 0x1ec468: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ec468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ec46c:
    // 0x1ec46c: 0x2442d9a0  addiu       $v0, $v0, -0x2660
    ctx->pc = 0x1ec46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957472));
label_1ec470:
    // 0x1ec470: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
label_1ec474:
    if (ctx->pc == 0x1EC474u) {
        ctx->pc = 0x1EC474u;
            // 0x1ec474: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1EC478u;
        goto label_1ec478;
    }
    ctx->pc = 0x1EC470u;
    {
        const bool branch_taken_0x1ec470 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC470u;
            // 0x1ec474: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec470) {
            ctx->pc = 0x1EC4D4u;
            goto label_1ec4d4;
        }
    }
    ctx->pc = 0x1EC478u;
label_1ec478:
    // 0x1ec478: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ec478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ec47c:
    // 0x1ec47c: 0x2442d960  addiu       $v0, $v0, -0x26A0
    ctx->pc = 0x1ec47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957408));
label_1ec480:
    // 0x1ec480: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
label_1ec484:
    if (ctx->pc == 0x1EC484u) {
        ctx->pc = 0x1EC484u;
            // 0x1ec484: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1EC488u;
        goto label_1ec488;
    }
    ctx->pc = 0x1EC480u;
    {
        const bool branch_taken_0x1ec480 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC480u;
            // 0x1ec484: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec480) {
            ctx->pc = 0x1EC4D4u;
            goto label_1ec4d4;
        }
    }
    ctx->pc = 0x1EC488u;
label_1ec488:
    // 0x1ec488: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ec488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ec48c:
    // 0x1ec48c: 0x2442d920  addiu       $v0, $v0, -0x26E0
    ctx->pc = 0x1ec48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957344));
label_1ec490:
    // 0x1ec490: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_1ec494:
    if (ctx->pc == 0x1EC494u) {
        ctx->pc = 0x1EC494u;
            // 0x1ec494: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1EC498u;
        goto label_1ec498;
    }
    ctx->pc = 0x1EC490u;
    {
        const bool branch_taken_0x1ec490 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC490u;
            // 0x1ec494: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec490) {
            ctx->pc = 0x1EC4D4u;
            goto label_1ec4d4;
        }
    }
    ctx->pc = 0x1EC498u;
label_1ec498:
    // 0x1ec498: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ec498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ec49c:
    // 0x1ec49c: 0x2442da20  addiu       $v0, $v0, -0x25E0
    ctx->pc = 0x1ec49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957600));
label_1ec4a0:
    // 0x1ec4a0: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_1ec4a4:
    if (ctx->pc == 0x1EC4A4u) {
        ctx->pc = 0x1EC4A4u;
            // 0x1ec4a4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1EC4A8u;
        goto label_1ec4a8;
    }
    ctx->pc = 0x1EC4A0u;
    {
        const bool branch_taken_0x1ec4a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC4A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC4A0u;
            // 0x1ec4a4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec4a0) {
            ctx->pc = 0x1EC4D4u;
            goto label_1ec4d4;
        }
    }
    ctx->pc = 0x1EC4A8u;
label_1ec4a8:
    // 0x1ec4a8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ec4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ec4ac:
    // 0x1ec4ac: 0x2442d9e0  addiu       $v0, $v0, -0x2620
    ctx->pc = 0x1ec4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
label_1ec4b0:
    // 0x1ec4b0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_1ec4b4:
    if (ctx->pc == 0x1EC4B4u) {
        ctx->pc = 0x1EC4B4u;
            // 0x1ec4b4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1EC4B8u;
        goto label_1ec4b8;
    }
    ctx->pc = 0x1EC4B0u;
    {
        const bool branch_taken_0x1ec4b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC4B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC4B0u;
            // 0x1ec4b4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec4b0) {
            ctx->pc = 0x1EC4D4u;
            goto label_1ec4d4;
        }
    }
    ctx->pc = 0x1EC4B8u;
label_1ec4b8:
    // 0x1ec4b8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ec4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ec4bc:
    // 0x1ec4bc: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1ec4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_1ec4c0:
    // 0x1ec4c0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1ec4c4:
    if (ctx->pc == 0x1EC4C4u) {
        ctx->pc = 0x1EC4C4u;
            // 0x1ec4c4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1EC4C8u;
        goto label_1ec4c8;
    }
    ctx->pc = 0x1EC4C0u;
    {
        const bool branch_taken_0x1ec4c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC4C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC4C0u;
            // 0x1ec4c4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec4c0) {
            ctx->pc = 0x1EC4D4u;
            goto label_1ec4d4;
        }
    }
    ctx->pc = 0x1EC4C8u;
label_1ec4c8:
    // 0x1ec4c8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ec4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ec4cc:
    // 0x1ec4cc: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x1ec4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_1ec4d0:
    // 0x1ec4d0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1ec4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1ec4d4:
    // 0x1ec4d4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1ec4d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_1ec4d8:
    // 0x1ec4d8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1ec4d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1ec4dc:
    // 0x1ec4dc: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_1ec4e0:
    if (ctx->pc == 0x1EC4E0u) {
        ctx->pc = 0x1EC4E4u;
        goto label_1ec4e4;
    }
    ctx->pc = 0x1EC4DCu;
    {
        const bool branch_taken_0x1ec4dc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1ec4dc) {
            ctx->pc = 0x1EC4FCu;
            goto label_1ec4fc;
        }
    }
    ctx->pc = 0x1EC4E4u;
label_1ec4e4:
    // 0x1ec4e4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1ec4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1ec4e8:
    // 0x1ec4e8: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x1ec4e8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_1ec4ec:
    // 0x1ec4ec: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1ec4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1ec4f0:
    // 0x1ec4f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ec4f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ec4f4:
    // 0x1ec4f4: 0xc0a7ab4  jal         func_29EAD0
label_1ec4f8:
    if (ctx->pc == 0x1EC4F8u) {
        ctx->pc = 0x1EC4F8u;
            // 0x1ec4f8: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x1EC4FCu;
        goto label_1ec4fc;
    }
    ctx->pc = 0x1EC4F4u;
    SET_GPR_U32(ctx, 31, 0x1EC4FCu);
    ctx->pc = 0x1EC4F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC4F4u;
            // 0x1ec4f8: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC4FCu; }
        if (ctx->pc != 0x1EC4FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC4FCu; }
        if (ctx->pc != 0x1EC4FCu) { return; }
    }
    ctx->pc = 0x1EC4FCu;
label_1ec4fc:
    // 0x1ec4fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ec4fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ec500:
    // 0x1ec500: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ec500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ec504:
    // 0x1ec504: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ec504u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ec508:
    // 0x1ec508: 0x3e00008  jr          $ra
label_1ec50c:
    if (ctx->pc == 0x1EC50Cu) {
        ctx->pc = 0x1EC50Cu;
            // 0x1ec50c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1EC510u;
        goto label_1ec510;
    }
    ctx->pc = 0x1EC508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC508u;
            // 0x1ec50c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EC510u;
label_1ec510:
    // 0x1ec510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ec510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ec514:
    // 0x1ec514: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ec514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1ec518:
    // 0x1ec518: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ec518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1ec51c:
    // 0x1ec51c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ec51cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ec520:
    // 0x1ec520: 0x5200002b  beql        $s0, $zero, . + 4 + (0x2B << 2)
label_1ec524:
    if (ctx->pc == 0x1EC524u) {
        ctx->pc = 0x1EC524u;
            // 0x1ec524: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EC528u;
        goto label_1ec528;
    }
    ctx->pc = 0x1EC520u;
    {
        const bool branch_taken_0x1ec520 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec520) {
            ctx->pc = 0x1EC524u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC520u;
            // 0x1ec524: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EC5D0u;
            goto label_1ec5d0;
        }
    }
    ctx->pc = 0x1EC528u;
label_1ec528:
    // 0x1ec528: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ec528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ec52c:
    // 0x1ec52c: 0x2442d860  addiu       $v0, $v0, -0x27A0
    ctx->pc = 0x1ec52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957152));
label_1ec530:
    // 0x1ec530: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
label_1ec534:
    if (ctx->pc == 0x1EC534u) {
        ctx->pc = 0x1EC534u;
            // 0x1ec534: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1EC538u;
        goto label_1ec538;
    }
    ctx->pc = 0x1EC530u;
    {
        const bool branch_taken_0x1ec530 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC530u;
            // 0x1ec534: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec530) {
            ctx->pc = 0x1EC5A4u;
            goto label_1ec5a4;
        }
    }
    ctx->pc = 0x1EC538u;
label_1ec538:
    // 0x1ec538: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ec538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ec53c:
    // 0x1ec53c: 0x2442d9a0  addiu       $v0, $v0, -0x2660
    ctx->pc = 0x1ec53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957472));
label_1ec540:
    // 0x1ec540: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
label_1ec544:
    if (ctx->pc == 0x1EC544u) {
        ctx->pc = 0x1EC544u;
            // 0x1ec544: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1EC548u;
        goto label_1ec548;
    }
    ctx->pc = 0x1EC540u;
    {
        const bool branch_taken_0x1ec540 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC540u;
            // 0x1ec544: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec540) {
            ctx->pc = 0x1EC5A4u;
            goto label_1ec5a4;
        }
    }
    ctx->pc = 0x1EC548u;
label_1ec548:
    // 0x1ec548: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ec548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ec54c:
    // 0x1ec54c: 0x2442d960  addiu       $v0, $v0, -0x26A0
    ctx->pc = 0x1ec54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957408));
label_1ec550:
    // 0x1ec550: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
label_1ec554:
    if (ctx->pc == 0x1EC554u) {
        ctx->pc = 0x1EC554u;
            // 0x1ec554: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1EC558u;
        goto label_1ec558;
    }
    ctx->pc = 0x1EC550u;
    {
        const bool branch_taken_0x1ec550 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC550u;
            // 0x1ec554: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec550) {
            ctx->pc = 0x1EC5A4u;
            goto label_1ec5a4;
        }
    }
    ctx->pc = 0x1EC558u;
label_1ec558:
    // 0x1ec558: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ec558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ec55c:
    // 0x1ec55c: 0x2442d920  addiu       $v0, $v0, -0x26E0
    ctx->pc = 0x1ec55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957344));
label_1ec560:
    // 0x1ec560: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_1ec564:
    if (ctx->pc == 0x1EC564u) {
        ctx->pc = 0x1EC564u;
            // 0x1ec564: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1EC568u;
        goto label_1ec568;
    }
    ctx->pc = 0x1EC560u;
    {
        const bool branch_taken_0x1ec560 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC560u;
            // 0x1ec564: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec560) {
            ctx->pc = 0x1EC5A4u;
            goto label_1ec5a4;
        }
    }
    ctx->pc = 0x1EC568u;
label_1ec568:
    // 0x1ec568: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ec568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ec56c:
    // 0x1ec56c: 0x2442da20  addiu       $v0, $v0, -0x25E0
    ctx->pc = 0x1ec56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957600));
label_1ec570:
    // 0x1ec570: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_1ec574:
    if (ctx->pc == 0x1EC574u) {
        ctx->pc = 0x1EC574u;
            // 0x1ec574: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1EC578u;
        goto label_1ec578;
    }
    ctx->pc = 0x1EC570u;
    {
        const bool branch_taken_0x1ec570 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC570u;
            // 0x1ec574: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec570) {
            ctx->pc = 0x1EC5A4u;
            goto label_1ec5a4;
        }
    }
    ctx->pc = 0x1EC578u;
label_1ec578:
    // 0x1ec578: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ec578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ec57c:
    // 0x1ec57c: 0x2442d9e0  addiu       $v0, $v0, -0x2620
    ctx->pc = 0x1ec57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
label_1ec580:
    // 0x1ec580: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_1ec584:
    if (ctx->pc == 0x1EC584u) {
        ctx->pc = 0x1EC584u;
            // 0x1ec584: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1EC588u;
        goto label_1ec588;
    }
    ctx->pc = 0x1EC580u;
    {
        const bool branch_taken_0x1ec580 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC580u;
            // 0x1ec584: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec580) {
            ctx->pc = 0x1EC5A4u;
            goto label_1ec5a4;
        }
    }
    ctx->pc = 0x1EC588u;
label_1ec588:
    // 0x1ec588: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ec588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ec58c:
    // 0x1ec58c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1ec58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_1ec590:
    // 0x1ec590: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1ec594:
    if (ctx->pc == 0x1EC594u) {
        ctx->pc = 0x1EC594u;
            // 0x1ec594: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1EC598u;
        goto label_1ec598;
    }
    ctx->pc = 0x1EC590u;
    {
        const bool branch_taken_0x1ec590 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC590u;
            // 0x1ec594: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec590) {
            ctx->pc = 0x1EC5A4u;
            goto label_1ec5a4;
        }
    }
    ctx->pc = 0x1EC598u;
label_1ec598:
    // 0x1ec598: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ec598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ec59c:
    // 0x1ec59c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x1ec59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_1ec5a0:
    // 0x1ec5a0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1ec5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1ec5a4:
    // 0x1ec5a4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1ec5a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_1ec5a8:
    // 0x1ec5a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1ec5a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1ec5ac:
    // 0x1ec5ac: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_1ec5b0:
    if (ctx->pc == 0x1EC5B0u) {
        ctx->pc = 0x1EC5B4u;
        goto label_1ec5b4;
    }
    ctx->pc = 0x1EC5ACu;
    {
        const bool branch_taken_0x1ec5ac = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1ec5ac) {
            ctx->pc = 0x1EC5CCu;
            goto label_1ec5cc;
        }
    }
    ctx->pc = 0x1EC5B4u;
label_1ec5b4:
    // 0x1ec5b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1ec5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1ec5b8:
    // 0x1ec5b8: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x1ec5b8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_1ec5bc:
    // 0x1ec5bc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1ec5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1ec5c0:
    // 0x1ec5c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ec5c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ec5c4:
    // 0x1ec5c4: 0xc0a7ab4  jal         func_29EAD0
label_1ec5c8:
    if (ctx->pc == 0x1EC5C8u) {
        ctx->pc = 0x1EC5C8u;
            // 0x1ec5c8: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x1EC5CCu;
        goto label_1ec5cc;
    }
    ctx->pc = 0x1EC5C4u;
    SET_GPR_U32(ctx, 31, 0x1EC5CCu);
    ctx->pc = 0x1EC5C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC5C4u;
            // 0x1ec5c8: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC5CCu; }
        if (ctx->pc != 0x1EC5CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC5CCu; }
        if (ctx->pc != 0x1EC5CCu) { return; }
    }
    ctx->pc = 0x1EC5CCu;
label_1ec5cc:
    // 0x1ec5cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ec5ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ec5d0:
    // 0x1ec5d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ec5d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ec5d4:
    // 0x1ec5d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ec5d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ec5d8:
    // 0x1ec5d8: 0x3e00008  jr          $ra
label_1ec5dc:
    if (ctx->pc == 0x1EC5DCu) {
        ctx->pc = 0x1EC5DCu;
            // 0x1ec5dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1EC5E0u;
        goto label_1ec5e0;
    }
    ctx->pc = 0x1EC5D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC5DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC5D8u;
            // 0x1ec5dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EC5E0u;
label_1ec5e0:
    // 0x1ec5e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ec5e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1ec5e4:
    // 0x1ec5e4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1ec5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1ec5e8:
    // 0x1ec5e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1ec5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1ec5ec:
    // 0x1ec5ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ec5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1ec5f0:
    // 0x1ec5f0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1ec5f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ec5f4:
    // 0x1ec5f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ec5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1ec5f8:
    // 0x1ec5f8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1ec5f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ec5fc:
    // 0x1ec5fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ec5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1ec600:
    // 0x1ec600: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1ec600u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1ec604:
    // 0x1ec604: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1ec604u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1ec608:
    // 0x1ec608: 0x12200080  beqz        $s1, . + 4 + (0x80 << 2)
label_1ec60c:
    if (ctx->pc == 0x1EC60Cu) {
        ctx->pc = 0x1EC60Cu;
            // 0x1ec60c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x1EC610u;
        goto label_1ec610;
    }
    ctx->pc = 0x1EC608u;
    {
        const bool branch_taken_0x1ec608 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC60Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC608u;
            // 0x1ec60c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec608) {
            ctx->pc = 0x1EC80Cu;
            goto label_1ec80c;
        }
    }
    ctx->pc = 0x1EC610u;
label_1ec610:
    // 0x1ec610: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x1ec610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1ec614:
    // 0x1ec614: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ec614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ec618:
    // 0x1ec618: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1ec618u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ec61c:
    // 0x1ec61c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1ec61cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ec620:
    // 0x1ec620: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1ec620u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1ec624:
    // 0x1ec624: 0x320f809  jalr        $t9
label_1ec628:
    if (ctx->pc == 0x1EC628u) {
        ctx->pc = 0x1EC628u;
            // 0x1ec628: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EC62Cu;
        goto label_1ec62c;
    }
    ctx->pc = 0x1EC624u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EC62Cu);
        ctx->pc = 0x1EC628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC624u;
            // 0x1ec628: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EC62Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EC62Cu; }
            if (ctx->pc != 0x1EC62Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1EC62Cu;
label_1ec62c:
    // 0x1ec62c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ec62cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ec630:
    // 0x1ec630: 0x5043002e  beql        $v0, $v1, . + 4 + (0x2E << 2)
label_1ec634:
    if (ctx->pc == 0x1EC634u) {
        ctx->pc = 0x1EC634u;
            // 0x1ec634: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->pc = 0x1EC638u;
        goto label_1ec638;
    }
    ctx->pc = 0x1EC630u;
    {
        const bool branch_taken_0x1ec630 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ec630) {
            ctx->pc = 0x1EC634u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC630u;
            // 0x1ec634: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EC6ECu;
            goto label_1ec6ec;
        }
    }
    ctx->pc = 0x1EC638u;
label_1ec638:
    // 0x1ec638: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ec638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ec63c:
    // 0x1ec63c: 0x5043001b  beql        $v0, $v1, . + 4 + (0x1B << 2)
label_1ec640:
    if (ctx->pc == 0x1EC640u) {
        ctx->pc = 0x1EC640u;
            // 0x1ec640: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->pc = 0x1EC644u;
        goto label_1ec644;
    }
    ctx->pc = 0x1EC63Cu;
    {
        const bool branch_taken_0x1ec63c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ec63c) {
            ctx->pc = 0x1EC640u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC63Cu;
            // 0x1ec640: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EC6ACu;
            goto label_1ec6ac;
        }
    }
    ctx->pc = 0x1EC644u;
label_1ec644:
    // 0x1ec644: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_1ec648:
    if (ctx->pc == 0x1EC648u) {
        ctx->pc = 0x1EC648u;
            // 0x1ec648: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->pc = 0x1EC64Cu;
        goto label_1ec64c;
    }
    ctx->pc = 0x1EC644u;
    {
        const bool branch_taken_0x1ec644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec644) {
            ctx->pc = 0x1EC648u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC644u;
            // 0x1ec648: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EC654u;
            goto label_1ec654;
        }
    }
    ctx->pc = 0x1EC64Cu;
label_1ec64c:
    // 0x1ec64c: 0x10000081  b           . + 4 + (0x81 << 2)
label_1ec650:
    if (ctx->pc == 0x1EC650u) {
        ctx->pc = 0x1EC650u;
            // 0x1ec650: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EC654u;
        goto label_1ec654;
    }
    ctx->pc = 0x1EC64Cu;
    {
        const bool branch_taken_0x1ec64c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC64Cu;
            // 0x1ec650: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec64c) {
            ctx->pc = 0x1EC854u;
            goto label_1ec854;
        }
    }
    ctx->pc = 0x1EC654u;
label_1ec654:
    // 0x1ec654: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x1ec654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_1ec658:
    // 0x1ec658: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1ec658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1ec65c:
    // 0x1ec65c: 0xc0a7a88  jal         func_29EA20
label_1ec660:
    if (ctx->pc == 0x1EC660u) {
        ctx->pc = 0x1EC660u;
            // 0x1ec660: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x1EC664u;
        goto label_1ec664;
    }
    ctx->pc = 0x1EC65Cu;
    SET_GPR_U32(ctx, 31, 0x1EC664u);
    ctx->pc = 0x1EC660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC65Cu;
            // 0x1ec660: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC664u; }
        if (ctx->pc != 0x1EC664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC664u; }
        if (ctx->pc != 0x1EC664u) { return; }
    }
    ctx->pc = 0x1EC664u;
label_1ec664:
    // 0x1ec664: 0x24030090  addiu       $v1, $zero, 0x90
    ctx->pc = 0x1ec664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_1ec668:
    // 0x1ec668: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ec668u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ec66c:
    // 0x1ec66c: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_1ec670:
    if (ctx->pc == 0x1EC670u) {
        ctx->pc = 0x1EC670u;
            // 0x1ec670: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1EC674u;
        goto label_1ec674;
    }
    ctx->pc = 0x1EC66Cu;
    {
        const bool branch_taken_0x1ec66c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC66Cu;
            // 0x1ec670: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec66c) {
            ctx->pc = 0x1EC6A4u;
            goto label_1ec6a4;
        }
    }
    ctx->pc = 0x1EC674u;
label_1ec674:
    // 0x1ec674: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ec674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ec678:
    // 0x1ec678: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1ec678u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ec67c:
    // 0x1ec67c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1ec67cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ec680:
    // 0x1ec680: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1ec680u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ec684:
    // 0x1ec684: 0xc07af9c  jal         func_1EBE70
label_1ec688:
    if (ctx->pc == 0x1EC688u) {
        ctx->pc = 0x1EC688u;
            // 0x1ec688: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EC68Cu;
        goto label_1ec68c;
    }
    ctx->pc = 0x1EC684u;
    SET_GPR_U32(ctx, 31, 0x1EC68Cu);
    ctx->pc = 0x1EC688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC684u;
            // 0x1ec688: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EBE70u;
    goto label_1ebe70;
    ctx->pc = 0x1EC68Cu;
label_1ec68c:
    // 0x1ec68c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1ec68cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1ec690:
    // 0x1ec690: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ec690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ec694:
    // 0x1ec694: 0x2463d8e0  addiu       $v1, $v1, -0x2720
    ctx->pc = 0x1ec694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957280));
label_1ec698:
    // 0x1ec698: 0x2442d8a0  addiu       $v0, $v0, -0x2760
    ctx->pc = 0x1ec698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957216));
label_1ec69c:
    // 0x1ec69c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1ec69cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1ec6a0:
    // 0x1ec6a0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1ec6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1ec6a4:
    // 0x1ec6a4: 0x1000006b  b           . + 4 + (0x6B << 2)
label_1ec6a8:
    if (ctx->pc == 0x1EC6A8u) {
        ctx->pc = 0x1EC6A8u;
            // 0x1ec6a8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EC6ACu;
        goto label_1ec6ac;
    }
    ctx->pc = 0x1EC6A4u;
    {
        const bool branch_taken_0x1ec6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC6A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC6A4u;
            // 0x1ec6a8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec6a4) {
            ctx->pc = 0x1EC854u;
            goto label_1ec854;
        }
    }
    ctx->pc = 0x1EC6ACu;
label_1ec6ac:
    // 0x1ec6ac: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x1ec6acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_1ec6b0:
    // 0x1ec6b0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1ec6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1ec6b4:
    // 0x1ec6b4: 0xc0a7a88  jal         func_29EA20
label_1ec6b8:
    if (ctx->pc == 0x1EC6B8u) {
        ctx->pc = 0x1EC6B8u;
            // 0x1ec6b8: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x1EC6BCu;
        goto label_1ec6bc;
    }
    ctx->pc = 0x1EC6B4u;
    SET_GPR_U32(ctx, 31, 0x1EC6BCu);
    ctx->pc = 0x1EC6B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC6B4u;
            // 0x1ec6b8: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC6BCu; }
        if (ctx->pc != 0x1EC6BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC6BCu; }
        if (ctx->pc != 0x1EC6BCu) { return; }
    }
    ctx->pc = 0x1EC6BCu;
label_1ec6bc:
    // 0x1ec6bc: 0x24030038  addiu       $v1, $zero, 0x38
    ctx->pc = 0x1ec6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_1ec6c0:
    // 0x1ec6c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ec6c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ec6c4:
    // 0x1ec6c4: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_1ec6c8:
    if (ctx->pc == 0x1EC6C8u) {
        ctx->pc = 0x1EC6C8u;
            // 0x1ec6c8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1EC6CCu;
        goto label_1ec6cc;
    }
    ctx->pc = 0x1EC6C4u;
    {
        const bool branch_taken_0x1ec6c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC6C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC6C4u;
            // 0x1ec6c8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec6c4) {
            ctx->pc = 0x1EC6E4u;
            goto label_1ec6e4;
        }
    }
    ctx->pc = 0x1EC6CCu;
label_1ec6cc:
    // 0x1ec6cc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ec6ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ec6d0:
    // 0x1ec6d0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1ec6d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ec6d4:
    // 0x1ec6d4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1ec6d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ec6d8:
    // 0x1ec6d8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1ec6d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ec6dc:
    // 0x1ec6dc: 0xc07d3e8  jal         func_1F4FA0
label_1ec6e0:
    if (ctx->pc == 0x1EC6E0u) {
        ctx->pc = 0x1EC6E0u;
            // 0x1ec6e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EC6E4u;
        goto label_1ec6e4;
    }
    ctx->pc = 0x1EC6DCu;
    SET_GPR_U32(ctx, 31, 0x1EC6E4u);
    ctx->pc = 0x1EC6E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC6DCu;
            // 0x1ec6e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F4FA0u;
    if (runtime->hasFunction(0x1F4FA0u)) {
        auto targetFn = runtime->lookupFunction(0x1F4FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC6E4u; }
        if (ctx->pc != 0x1EC6E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4FA0_0x1f4fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC6E4u; }
        if (ctx->pc != 0x1EC6E4u) { return; }
    }
    ctx->pc = 0x1EC6E4u;
label_1ec6e4:
    // 0x1ec6e4: 0x1000005b  b           . + 4 + (0x5B << 2)
label_1ec6e8:
    if (ctx->pc == 0x1EC6E8u) {
        ctx->pc = 0x1EC6E8u;
            // 0x1ec6e8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EC6ECu;
        goto label_1ec6ec;
    }
    ctx->pc = 0x1EC6E4u;
    {
        const bool branch_taken_0x1ec6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC6E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC6E4u;
            // 0x1ec6e8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec6e4) {
            ctx->pc = 0x1EC854u;
            goto label_1ec854;
        }
    }
    ctx->pc = 0x1EC6ECu;
label_1ec6ec:
    // 0x1ec6ec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ec6ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ec6f0:
    // 0x1ec6f0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1ec6f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ec6f4:
    // 0x1ec6f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1ec6f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ec6f8:
    // 0x1ec6f8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1ec6f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1ec6fc:
    // 0x1ec6fc: 0x320f809  jalr        $t9
label_1ec700:
    if (ctx->pc == 0x1EC700u) {
        ctx->pc = 0x1EC700u;
            // 0x1ec700: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EC704u;
        goto label_1ec704;
    }
    ctx->pc = 0x1EC6FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1EC704u);
        ctx->pc = 0x1EC700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC6FCu;
            // 0x1ec700: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1EC704u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1EC704u; }
            if (ctx->pc != 0x1EC704u) { return; }
        }
        }
    }
    ctx->pc = 0x1EC704u;
label_1ec704:
    // 0x1ec704: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ec704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ec708:
    // 0x1ec708: 0x5043002a  beql        $v0, $v1, . + 4 + (0x2A << 2)
label_1ec70c:
    if (ctx->pc == 0x1EC70Cu) {
        ctx->pc = 0x1EC70Cu;
            // 0x1ec70c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->pc = 0x1EC710u;
        goto label_1ec710;
    }
    ctx->pc = 0x1EC708u;
    {
        const bool branch_taken_0x1ec708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ec708) {
            ctx->pc = 0x1EC70Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC708u;
            // 0x1ec70c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EC7B4u;
            goto label_1ec7b4;
        }
    }
    ctx->pc = 0x1EC710u;
label_1ec710:
    // 0x1ec710: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1ec710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ec714:
    // 0x1ec714: 0x50430015  beql        $v0, $v1, . + 4 + (0x15 << 2)
label_1ec718:
    if (ctx->pc == 0x1EC718u) {
        ctx->pc = 0x1EC718u;
            // 0x1ec718: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->pc = 0x1EC71Cu;
        goto label_1ec71c;
    }
    ctx->pc = 0x1EC714u;
    {
        const bool branch_taken_0x1ec714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1ec714) {
            ctx->pc = 0x1EC718u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC714u;
            // 0x1ec718: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EC76Cu;
            goto label_1ec76c;
        }
    }
    ctx->pc = 0x1EC71Cu;
label_1ec71c:
    // 0x1ec71c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_1ec720:
    if (ctx->pc == 0x1EC720u) {
        ctx->pc = 0x1EC720u;
            // 0x1ec720: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->pc = 0x1EC724u;
        goto label_1ec724;
    }
    ctx->pc = 0x1EC71Cu;
    {
        const bool branch_taken_0x1ec71c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec71c) {
            ctx->pc = 0x1EC720u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC71Cu;
            // 0x1ec720: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EC72Cu;
            goto label_1ec72c;
        }
    }
    ctx->pc = 0x1EC724u;
label_1ec724:
    // 0x1ec724: 0x1000004a  b           . + 4 + (0x4A << 2)
label_1ec728:
    if (ctx->pc == 0x1EC728u) {
        ctx->pc = 0x1EC72Cu;
        goto label_1ec72c;
    }
    ctx->pc = 0x1EC724u;
    {
        const bool branch_taken_0x1ec724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec724) {
            ctx->pc = 0x1EC850u;
            goto label_1ec850;
        }
    }
    ctx->pc = 0x1EC72Cu;
label_1ec72c:
    // 0x1ec72c: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x1ec72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_1ec730:
    // 0x1ec730: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1ec730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1ec734:
    // 0x1ec734: 0xc0a7a88  jal         func_29EA20
label_1ec738:
    if (ctx->pc == 0x1EC738u) {
        ctx->pc = 0x1EC738u;
            // 0x1ec738: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x1EC73Cu;
        goto label_1ec73c;
    }
    ctx->pc = 0x1EC734u;
    SET_GPR_U32(ctx, 31, 0x1EC73Cu);
    ctx->pc = 0x1EC738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC734u;
            // 0x1ec738: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC73Cu; }
        if (ctx->pc != 0x1EC73Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC73Cu; }
        if (ctx->pc != 0x1EC73Cu) { return; }
    }
    ctx->pc = 0x1EC73Cu;
label_1ec73c:
    // 0x1ec73c: 0x24030090  addiu       $v1, $zero, 0x90
    ctx->pc = 0x1ec73cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_1ec740:
    // 0x1ec740: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ec740u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ec744:
    // 0x1ec744: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_1ec748:
    if (ctx->pc == 0x1EC748u) {
        ctx->pc = 0x1EC748u;
            // 0x1ec748: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1EC74Cu;
        goto label_1ec74c;
    }
    ctx->pc = 0x1EC744u;
    {
        const bool branch_taken_0x1ec744 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC744u;
            // 0x1ec748: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec744) {
            ctx->pc = 0x1EC764u;
            goto label_1ec764;
        }
    }
    ctx->pc = 0x1EC74Cu;
label_1ec74c:
    // 0x1ec74c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ec74cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ec750:
    // 0x1ec750: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1ec750u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ec754:
    // 0x1ec754: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1ec754u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ec758:
    // 0x1ec758: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1ec758u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ec75c:
    // 0x1ec75c: 0xc07af9c  jal         func_1EBE70
label_1ec760:
    if (ctx->pc == 0x1EC760u) {
        ctx->pc = 0x1EC760u;
            // 0x1ec760: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EC764u;
        goto label_1ec764;
    }
    ctx->pc = 0x1EC75Cu;
    SET_GPR_U32(ctx, 31, 0x1EC764u);
    ctx->pc = 0x1EC760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC75Cu;
            // 0x1ec760: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EBE70u;
    goto label_1ebe70;
    ctx->pc = 0x1EC764u;
label_1ec764:
    // 0x1ec764: 0x1000003b  b           . + 4 + (0x3B << 2)
label_1ec768:
    if (ctx->pc == 0x1EC768u) {
        ctx->pc = 0x1EC768u;
            // 0x1ec768: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EC76Cu;
        goto label_1ec76c;
    }
    ctx->pc = 0x1EC764u;
    {
        const bool branch_taken_0x1ec764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC764u;
            // 0x1ec768: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec764) {
            ctx->pc = 0x1EC854u;
            goto label_1ec854;
        }
    }
    ctx->pc = 0x1EC76Cu;
label_1ec76c:
    // 0x1ec76c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1ec76cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1ec770:
    // 0x1ec770: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1ec770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1ec774:
    // 0x1ec774: 0xc0a7a88  jal         func_29EA20
label_1ec778:
    if (ctx->pc == 0x1EC778u) {
        ctx->pc = 0x1EC778u;
            // 0x1ec778: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x1EC77Cu;
        goto label_1ec77c;
    }
    ctx->pc = 0x1EC774u;
    SET_GPR_U32(ctx, 31, 0x1EC77Cu);
    ctx->pc = 0x1EC778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC774u;
            // 0x1ec778: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC77Cu; }
        if (ctx->pc != 0x1EC77Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC77Cu; }
        if (ctx->pc != 0x1EC77Cu) { return; }
    }
    ctx->pc = 0x1EC77Cu;
label_1ec77c:
    // 0x1ec77c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1ec77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1ec780:
    // 0x1ec780: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ec780u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ec784:
    // 0x1ec784: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_1ec788:
    if (ctx->pc == 0x1EC788u) {
        ctx->pc = 0x1EC788u;
            // 0x1ec788: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1EC78Cu;
        goto label_1ec78c;
    }
    ctx->pc = 0x1EC784u;
    {
        const bool branch_taken_0x1ec784 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC784u;
            // 0x1ec788: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec784) {
            ctx->pc = 0x1EC7ACu;
            goto label_1ec7ac;
        }
    }
    ctx->pc = 0x1EC78Cu;
label_1ec78c:
    // 0x1ec78c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ec78cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ec790:
    // 0x1ec790: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1ec790u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ec794:
    // 0x1ec794: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1ec794u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ec798:
    // 0x1ec798: 0xc07be84  jal         func_1EFA10
label_1ec79c:
    if (ctx->pc == 0x1EC79Cu) {
        ctx->pc = 0x1EC79Cu;
            // 0x1ec79c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EC7A0u;
        goto label_1ec7a0;
    }
    ctx->pc = 0x1EC798u;
    SET_GPR_U32(ctx, 31, 0x1EC7A0u);
    ctx->pc = 0x1EC79Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC798u;
            // 0x1ec79c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EFA10u;
    if (runtime->hasFunction(0x1EFA10u)) {
        auto targetFn = runtime->lookupFunction(0x1EFA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC7A0u; }
        if (ctx->pc != 0x1EC7A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EFA10_0x1efa10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC7A0u; }
        if (ctx->pc != 0x1EC7A0u) { return; }
    }
    ctx->pc = 0x1EC7A0u;
label_1ec7a0:
    // 0x1ec7a0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ec7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ec7a4:
    // 0x1ec7a4: 0x2442d9a0  addiu       $v0, $v0, -0x2660
    ctx->pc = 0x1ec7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957472));
label_1ec7a8:
    // 0x1ec7a8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1ec7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1ec7ac:
    // 0x1ec7ac: 0x10000029  b           . + 4 + (0x29 << 2)
label_1ec7b0:
    if (ctx->pc == 0x1EC7B0u) {
        ctx->pc = 0x1EC7B0u;
            // 0x1ec7b0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EC7B4u;
        goto label_1ec7b4;
    }
    ctx->pc = 0x1EC7ACu;
    {
        const bool branch_taken_0x1ec7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC7B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC7ACu;
            // 0x1ec7b0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec7ac) {
            ctx->pc = 0x1EC854u;
            goto label_1ec854;
        }
    }
    ctx->pc = 0x1EC7B4u;
label_1ec7b4:
    // 0x1ec7b4: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x1ec7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_1ec7b8:
    // 0x1ec7b8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1ec7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1ec7bc:
    // 0x1ec7bc: 0xc0a7a88  jal         func_29EA20
label_1ec7c0:
    if (ctx->pc == 0x1EC7C0u) {
        ctx->pc = 0x1EC7C0u;
            // 0x1ec7c0: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x1EC7C4u;
        goto label_1ec7c4;
    }
    ctx->pc = 0x1EC7BCu;
    SET_GPR_U32(ctx, 31, 0x1EC7C4u);
    ctx->pc = 0x1EC7C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC7BCu;
            // 0x1ec7c0: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC7C4u; }
        if (ctx->pc != 0x1EC7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC7C4u; }
        if (ctx->pc != 0x1EC7C4u) { return; }
    }
    ctx->pc = 0x1EC7C4u;
label_1ec7c4:
    // 0x1ec7c4: 0x24030038  addiu       $v1, $zero, 0x38
    ctx->pc = 0x1ec7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_1ec7c8:
    // 0x1ec7c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ec7c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ec7cc:
    // 0x1ec7cc: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_1ec7d0:
    if (ctx->pc == 0x1EC7D0u) {
        ctx->pc = 0x1EC7D0u;
            // 0x1ec7d0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1EC7D4u;
        goto label_1ec7d4;
    }
    ctx->pc = 0x1EC7CCu;
    {
        const bool branch_taken_0x1ec7cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC7D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC7CCu;
            // 0x1ec7d0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec7cc) {
            ctx->pc = 0x1EC804u;
            goto label_1ec804;
        }
    }
    ctx->pc = 0x1EC7D4u;
label_1ec7d4:
    // 0x1ec7d4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ec7d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ec7d8:
    // 0x1ec7d8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1ec7d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ec7dc:
    // 0x1ec7dc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1ec7dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ec7e0:
    // 0x1ec7e0: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1ec7e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ec7e4:
    // 0x1ec7e4: 0xc07d3e8  jal         func_1F4FA0
label_1ec7e8:
    if (ctx->pc == 0x1EC7E8u) {
        ctx->pc = 0x1EC7E8u;
            // 0x1ec7e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EC7ECu;
        goto label_1ec7ec;
    }
    ctx->pc = 0x1EC7E4u;
    SET_GPR_U32(ctx, 31, 0x1EC7ECu);
    ctx->pc = 0x1EC7E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC7E4u;
            // 0x1ec7e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F4FA0u;
    if (runtime->hasFunction(0x1F4FA0u)) {
        auto targetFn = runtime->lookupFunction(0x1F4FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC7ECu; }
        if (ctx->pc != 0x1EC7ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4FA0_0x1f4fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC7ECu; }
        if (ctx->pc != 0x1EC7ECu) { return; }
    }
    ctx->pc = 0x1EC7ECu;
label_1ec7ec:
    // 0x1ec7ec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1ec7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1ec7f0:
    // 0x1ec7f0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ec7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ec7f4:
    // 0x1ec7f4: 0x2463d740  addiu       $v1, $v1, -0x28C0
    ctx->pc = 0x1ec7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956864));
label_1ec7f8:
    // 0x1ec7f8: 0x2442d700  addiu       $v0, $v0, -0x2900
    ctx->pc = 0x1ec7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956800));
label_1ec7fc:
    // 0x1ec7fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1ec7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1ec800:
    // 0x1ec800: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1ec800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1ec804:
    // 0x1ec804: 0x10000013  b           . + 4 + (0x13 << 2)
label_1ec808:
    if (ctx->pc == 0x1EC808u) {
        ctx->pc = 0x1EC808u;
            // 0x1ec808: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EC80Cu;
        goto label_1ec80c;
    }
    ctx->pc = 0x1EC804u;
    {
        const bool branch_taken_0x1ec804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC804u;
            // 0x1ec808: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec804) {
            ctx->pc = 0x1EC854u;
            goto label_1ec854;
        }
    }
    ctx->pc = 0x1EC80Cu;
label_1ec80c:
    // 0x1ec80c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1ec80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1ec810:
    // 0x1ec810: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x1ec810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_1ec814:
    // 0x1ec814: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1ec814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1ec818:
    // 0x1ec818: 0xc0a7a88  jal         func_29EA20
label_1ec81c:
    if (ctx->pc == 0x1EC81Cu) {
        ctx->pc = 0x1EC81Cu;
            // 0x1ec81c: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x1EC820u;
        goto label_1ec820;
    }
    ctx->pc = 0x1EC818u;
    SET_GPR_U32(ctx, 31, 0x1EC820u);
    ctx->pc = 0x1EC81Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC818u;
            // 0x1ec81c: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC820u; }
        if (ctx->pc != 0x1EC820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC820u; }
        if (ctx->pc != 0x1EC820u) { return; }
    }
    ctx->pc = 0x1EC820u;
label_1ec820:
    // 0x1ec820: 0x24030038  addiu       $v1, $zero, 0x38
    ctx->pc = 0x1ec820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_1ec824:
    // 0x1ec824: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ec824u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ec828:
    // 0x1ec828: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_1ec82c:
    if (ctx->pc == 0x1EC82Cu) {
        ctx->pc = 0x1EC82Cu;
            // 0x1ec82c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1EC830u;
        goto label_1ec830;
    }
    ctx->pc = 0x1EC828u;
    {
        const bool branch_taken_0x1ec828 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC828u;
            // 0x1ec82c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec828) {
            ctx->pc = 0x1EC848u;
            goto label_1ec848;
        }
    }
    ctx->pc = 0x1EC830u;
label_1ec830:
    // 0x1ec830: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1ec830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1ec834:
    // 0x1ec834: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1ec834u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1ec838:
    // 0x1ec838: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1ec838u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ec83c:
    // 0x1ec83c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1ec83cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ec840:
    // 0x1ec840: 0xc07d3e8  jal         func_1F4FA0
label_1ec844:
    if (ctx->pc == 0x1EC844u) {
        ctx->pc = 0x1EC844u;
            // 0x1ec844: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EC848u;
        goto label_1ec848;
    }
    ctx->pc = 0x1EC840u;
    SET_GPR_U32(ctx, 31, 0x1EC848u);
    ctx->pc = 0x1EC844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC840u;
            // 0x1ec844: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F4FA0u;
    if (runtime->hasFunction(0x1F4FA0u)) {
        auto targetFn = runtime->lookupFunction(0x1F4FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC848u; }
        if (ctx->pc != 0x1EC848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F4FA0_0x1f4fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EC848u; }
        if (ctx->pc != 0x1EC848u) { return; }
    }
    ctx->pc = 0x1EC848u;
label_1ec848:
    // 0x1ec848: 0x10000002  b           . + 4 + (0x2 << 2)
label_1ec84c:
    if (ctx->pc == 0x1EC84Cu) {
        ctx->pc = 0x1EC84Cu;
            // 0x1ec84c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1EC850u;
        goto label_1ec850;
    }
    ctx->pc = 0x1EC848u;
    {
        const bool branch_taken_0x1ec848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EC84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC848u;
            // 0x1ec84c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ec848) {
            ctx->pc = 0x1EC854u;
            goto label_1ec854;
        }
    }
    ctx->pc = 0x1EC850u;
label_1ec850:
    // 0x1ec850: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ec850u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ec854:
    // 0x1ec854: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1ec854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1ec858:
    // 0x1ec858: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ec858u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ec85c:
    // 0x1ec85c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ec85cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ec860:
    // 0x1ec860: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ec860u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ec864:
    // 0x1ec864: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ec864u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ec868:
    // 0x1ec868: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ec868u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ec86c:
    // 0x1ec86c: 0x3e00008  jr          $ra
label_1ec870:
    if (ctx->pc == 0x1EC870u) {
        ctx->pc = 0x1EC870u;
            // 0x1ec870: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1EC874u;
        goto label_1ec874;
    }
    ctx->pc = 0x1EC86Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EC870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EC86Cu;
            // 0x1ec870: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EC874u;
label_1ec874:
    // 0x1ec874: 0x0  nop
    ctx->pc = 0x1ec874u;
    // NOP
label_1ec878:
    // 0x1ec878: 0x0  nop
    ctx->pc = 0x1ec878u;
    // NOP
label_1ec87c:
    // 0x1ec87c: 0x0  nop
    ctx->pc = 0x1ec87cu;
    // NOP
}
