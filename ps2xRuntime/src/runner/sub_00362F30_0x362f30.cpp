#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00362F30
// Address: 0x362f30 - 0x363610
void sub_00362F30_0x362f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00362F30_0x362f30");
#endif

    switch (ctx->pc) {
        case 0x362f30u: goto label_362f30;
        case 0x362f34u: goto label_362f34;
        case 0x362f38u: goto label_362f38;
        case 0x362f3cu: goto label_362f3c;
        case 0x362f40u: goto label_362f40;
        case 0x362f44u: goto label_362f44;
        case 0x362f48u: goto label_362f48;
        case 0x362f4cu: goto label_362f4c;
        case 0x362f50u: goto label_362f50;
        case 0x362f54u: goto label_362f54;
        case 0x362f58u: goto label_362f58;
        case 0x362f5cu: goto label_362f5c;
        case 0x362f60u: goto label_362f60;
        case 0x362f64u: goto label_362f64;
        case 0x362f68u: goto label_362f68;
        case 0x362f6cu: goto label_362f6c;
        case 0x362f70u: goto label_362f70;
        case 0x362f74u: goto label_362f74;
        case 0x362f78u: goto label_362f78;
        case 0x362f7cu: goto label_362f7c;
        case 0x362f80u: goto label_362f80;
        case 0x362f84u: goto label_362f84;
        case 0x362f88u: goto label_362f88;
        case 0x362f8cu: goto label_362f8c;
        case 0x362f90u: goto label_362f90;
        case 0x362f94u: goto label_362f94;
        case 0x362f98u: goto label_362f98;
        case 0x362f9cu: goto label_362f9c;
        case 0x362fa0u: goto label_362fa0;
        case 0x362fa4u: goto label_362fa4;
        case 0x362fa8u: goto label_362fa8;
        case 0x362facu: goto label_362fac;
        case 0x362fb0u: goto label_362fb0;
        case 0x362fb4u: goto label_362fb4;
        case 0x362fb8u: goto label_362fb8;
        case 0x362fbcu: goto label_362fbc;
        case 0x362fc0u: goto label_362fc0;
        case 0x362fc4u: goto label_362fc4;
        case 0x362fc8u: goto label_362fc8;
        case 0x362fccu: goto label_362fcc;
        case 0x362fd0u: goto label_362fd0;
        case 0x362fd4u: goto label_362fd4;
        case 0x362fd8u: goto label_362fd8;
        case 0x362fdcu: goto label_362fdc;
        case 0x362fe0u: goto label_362fe0;
        case 0x362fe4u: goto label_362fe4;
        case 0x362fe8u: goto label_362fe8;
        case 0x362fecu: goto label_362fec;
        case 0x362ff0u: goto label_362ff0;
        case 0x362ff4u: goto label_362ff4;
        case 0x362ff8u: goto label_362ff8;
        case 0x362ffcu: goto label_362ffc;
        case 0x363000u: goto label_363000;
        case 0x363004u: goto label_363004;
        case 0x363008u: goto label_363008;
        case 0x36300cu: goto label_36300c;
        case 0x363010u: goto label_363010;
        case 0x363014u: goto label_363014;
        case 0x363018u: goto label_363018;
        case 0x36301cu: goto label_36301c;
        case 0x363020u: goto label_363020;
        case 0x363024u: goto label_363024;
        case 0x363028u: goto label_363028;
        case 0x36302cu: goto label_36302c;
        case 0x363030u: goto label_363030;
        case 0x363034u: goto label_363034;
        case 0x363038u: goto label_363038;
        case 0x36303cu: goto label_36303c;
        case 0x363040u: goto label_363040;
        case 0x363044u: goto label_363044;
        case 0x363048u: goto label_363048;
        case 0x36304cu: goto label_36304c;
        case 0x363050u: goto label_363050;
        case 0x363054u: goto label_363054;
        case 0x363058u: goto label_363058;
        case 0x36305cu: goto label_36305c;
        case 0x363060u: goto label_363060;
        case 0x363064u: goto label_363064;
        case 0x363068u: goto label_363068;
        case 0x36306cu: goto label_36306c;
        case 0x363070u: goto label_363070;
        case 0x363074u: goto label_363074;
        case 0x363078u: goto label_363078;
        case 0x36307cu: goto label_36307c;
        case 0x363080u: goto label_363080;
        case 0x363084u: goto label_363084;
        case 0x363088u: goto label_363088;
        case 0x36308cu: goto label_36308c;
        case 0x363090u: goto label_363090;
        case 0x363094u: goto label_363094;
        case 0x363098u: goto label_363098;
        case 0x36309cu: goto label_36309c;
        case 0x3630a0u: goto label_3630a0;
        case 0x3630a4u: goto label_3630a4;
        case 0x3630a8u: goto label_3630a8;
        case 0x3630acu: goto label_3630ac;
        case 0x3630b0u: goto label_3630b0;
        case 0x3630b4u: goto label_3630b4;
        case 0x3630b8u: goto label_3630b8;
        case 0x3630bcu: goto label_3630bc;
        case 0x3630c0u: goto label_3630c0;
        case 0x3630c4u: goto label_3630c4;
        case 0x3630c8u: goto label_3630c8;
        case 0x3630ccu: goto label_3630cc;
        case 0x3630d0u: goto label_3630d0;
        case 0x3630d4u: goto label_3630d4;
        case 0x3630d8u: goto label_3630d8;
        case 0x3630dcu: goto label_3630dc;
        case 0x3630e0u: goto label_3630e0;
        case 0x3630e4u: goto label_3630e4;
        case 0x3630e8u: goto label_3630e8;
        case 0x3630ecu: goto label_3630ec;
        case 0x3630f0u: goto label_3630f0;
        case 0x3630f4u: goto label_3630f4;
        case 0x3630f8u: goto label_3630f8;
        case 0x3630fcu: goto label_3630fc;
        case 0x363100u: goto label_363100;
        case 0x363104u: goto label_363104;
        case 0x363108u: goto label_363108;
        case 0x36310cu: goto label_36310c;
        case 0x363110u: goto label_363110;
        case 0x363114u: goto label_363114;
        case 0x363118u: goto label_363118;
        case 0x36311cu: goto label_36311c;
        case 0x363120u: goto label_363120;
        case 0x363124u: goto label_363124;
        case 0x363128u: goto label_363128;
        case 0x36312cu: goto label_36312c;
        case 0x363130u: goto label_363130;
        case 0x363134u: goto label_363134;
        case 0x363138u: goto label_363138;
        case 0x36313cu: goto label_36313c;
        case 0x363140u: goto label_363140;
        case 0x363144u: goto label_363144;
        case 0x363148u: goto label_363148;
        case 0x36314cu: goto label_36314c;
        case 0x363150u: goto label_363150;
        case 0x363154u: goto label_363154;
        case 0x363158u: goto label_363158;
        case 0x36315cu: goto label_36315c;
        case 0x363160u: goto label_363160;
        case 0x363164u: goto label_363164;
        case 0x363168u: goto label_363168;
        case 0x36316cu: goto label_36316c;
        case 0x363170u: goto label_363170;
        case 0x363174u: goto label_363174;
        case 0x363178u: goto label_363178;
        case 0x36317cu: goto label_36317c;
        case 0x363180u: goto label_363180;
        case 0x363184u: goto label_363184;
        case 0x363188u: goto label_363188;
        case 0x36318cu: goto label_36318c;
        case 0x363190u: goto label_363190;
        case 0x363194u: goto label_363194;
        case 0x363198u: goto label_363198;
        case 0x36319cu: goto label_36319c;
        case 0x3631a0u: goto label_3631a0;
        case 0x3631a4u: goto label_3631a4;
        case 0x3631a8u: goto label_3631a8;
        case 0x3631acu: goto label_3631ac;
        case 0x3631b0u: goto label_3631b0;
        case 0x3631b4u: goto label_3631b4;
        case 0x3631b8u: goto label_3631b8;
        case 0x3631bcu: goto label_3631bc;
        case 0x3631c0u: goto label_3631c0;
        case 0x3631c4u: goto label_3631c4;
        case 0x3631c8u: goto label_3631c8;
        case 0x3631ccu: goto label_3631cc;
        case 0x3631d0u: goto label_3631d0;
        case 0x3631d4u: goto label_3631d4;
        case 0x3631d8u: goto label_3631d8;
        case 0x3631dcu: goto label_3631dc;
        case 0x3631e0u: goto label_3631e0;
        case 0x3631e4u: goto label_3631e4;
        case 0x3631e8u: goto label_3631e8;
        case 0x3631ecu: goto label_3631ec;
        case 0x3631f0u: goto label_3631f0;
        case 0x3631f4u: goto label_3631f4;
        case 0x3631f8u: goto label_3631f8;
        case 0x3631fcu: goto label_3631fc;
        case 0x363200u: goto label_363200;
        case 0x363204u: goto label_363204;
        case 0x363208u: goto label_363208;
        case 0x36320cu: goto label_36320c;
        case 0x363210u: goto label_363210;
        case 0x363214u: goto label_363214;
        case 0x363218u: goto label_363218;
        case 0x36321cu: goto label_36321c;
        case 0x363220u: goto label_363220;
        case 0x363224u: goto label_363224;
        case 0x363228u: goto label_363228;
        case 0x36322cu: goto label_36322c;
        case 0x363230u: goto label_363230;
        case 0x363234u: goto label_363234;
        case 0x363238u: goto label_363238;
        case 0x36323cu: goto label_36323c;
        case 0x363240u: goto label_363240;
        case 0x363244u: goto label_363244;
        case 0x363248u: goto label_363248;
        case 0x36324cu: goto label_36324c;
        case 0x363250u: goto label_363250;
        case 0x363254u: goto label_363254;
        case 0x363258u: goto label_363258;
        case 0x36325cu: goto label_36325c;
        case 0x363260u: goto label_363260;
        case 0x363264u: goto label_363264;
        case 0x363268u: goto label_363268;
        case 0x36326cu: goto label_36326c;
        case 0x363270u: goto label_363270;
        case 0x363274u: goto label_363274;
        case 0x363278u: goto label_363278;
        case 0x36327cu: goto label_36327c;
        case 0x363280u: goto label_363280;
        case 0x363284u: goto label_363284;
        case 0x363288u: goto label_363288;
        case 0x36328cu: goto label_36328c;
        case 0x363290u: goto label_363290;
        case 0x363294u: goto label_363294;
        case 0x363298u: goto label_363298;
        case 0x36329cu: goto label_36329c;
        case 0x3632a0u: goto label_3632a0;
        case 0x3632a4u: goto label_3632a4;
        case 0x3632a8u: goto label_3632a8;
        case 0x3632acu: goto label_3632ac;
        case 0x3632b0u: goto label_3632b0;
        case 0x3632b4u: goto label_3632b4;
        case 0x3632b8u: goto label_3632b8;
        case 0x3632bcu: goto label_3632bc;
        case 0x3632c0u: goto label_3632c0;
        case 0x3632c4u: goto label_3632c4;
        case 0x3632c8u: goto label_3632c8;
        case 0x3632ccu: goto label_3632cc;
        case 0x3632d0u: goto label_3632d0;
        case 0x3632d4u: goto label_3632d4;
        case 0x3632d8u: goto label_3632d8;
        case 0x3632dcu: goto label_3632dc;
        case 0x3632e0u: goto label_3632e0;
        case 0x3632e4u: goto label_3632e4;
        case 0x3632e8u: goto label_3632e8;
        case 0x3632ecu: goto label_3632ec;
        case 0x3632f0u: goto label_3632f0;
        case 0x3632f4u: goto label_3632f4;
        case 0x3632f8u: goto label_3632f8;
        case 0x3632fcu: goto label_3632fc;
        case 0x363300u: goto label_363300;
        case 0x363304u: goto label_363304;
        case 0x363308u: goto label_363308;
        case 0x36330cu: goto label_36330c;
        case 0x363310u: goto label_363310;
        case 0x363314u: goto label_363314;
        case 0x363318u: goto label_363318;
        case 0x36331cu: goto label_36331c;
        case 0x363320u: goto label_363320;
        case 0x363324u: goto label_363324;
        case 0x363328u: goto label_363328;
        case 0x36332cu: goto label_36332c;
        case 0x363330u: goto label_363330;
        case 0x363334u: goto label_363334;
        case 0x363338u: goto label_363338;
        case 0x36333cu: goto label_36333c;
        case 0x363340u: goto label_363340;
        case 0x363344u: goto label_363344;
        case 0x363348u: goto label_363348;
        case 0x36334cu: goto label_36334c;
        case 0x363350u: goto label_363350;
        case 0x363354u: goto label_363354;
        case 0x363358u: goto label_363358;
        case 0x36335cu: goto label_36335c;
        case 0x363360u: goto label_363360;
        case 0x363364u: goto label_363364;
        case 0x363368u: goto label_363368;
        case 0x36336cu: goto label_36336c;
        case 0x363370u: goto label_363370;
        case 0x363374u: goto label_363374;
        case 0x363378u: goto label_363378;
        case 0x36337cu: goto label_36337c;
        case 0x363380u: goto label_363380;
        case 0x363384u: goto label_363384;
        case 0x363388u: goto label_363388;
        case 0x36338cu: goto label_36338c;
        case 0x363390u: goto label_363390;
        case 0x363394u: goto label_363394;
        case 0x363398u: goto label_363398;
        case 0x36339cu: goto label_36339c;
        case 0x3633a0u: goto label_3633a0;
        case 0x3633a4u: goto label_3633a4;
        case 0x3633a8u: goto label_3633a8;
        case 0x3633acu: goto label_3633ac;
        case 0x3633b0u: goto label_3633b0;
        case 0x3633b4u: goto label_3633b4;
        case 0x3633b8u: goto label_3633b8;
        case 0x3633bcu: goto label_3633bc;
        case 0x3633c0u: goto label_3633c0;
        case 0x3633c4u: goto label_3633c4;
        case 0x3633c8u: goto label_3633c8;
        case 0x3633ccu: goto label_3633cc;
        case 0x3633d0u: goto label_3633d0;
        case 0x3633d4u: goto label_3633d4;
        case 0x3633d8u: goto label_3633d8;
        case 0x3633dcu: goto label_3633dc;
        case 0x3633e0u: goto label_3633e0;
        case 0x3633e4u: goto label_3633e4;
        case 0x3633e8u: goto label_3633e8;
        case 0x3633ecu: goto label_3633ec;
        case 0x3633f0u: goto label_3633f0;
        case 0x3633f4u: goto label_3633f4;
        case 0x3633f8u: goto label_3633f8;
        case 0x3633fcu: goto label_3633fc;
        case 0x363400u: goto label_363400;
        case 0x363404u: goto label_363404;
        case 0x363408u: goto label_363408;
        case 0x36340cu: goto label_36340c;
        case 0x363410u: goto label_363410;
        case 0x363414u: goto label_363414;
        case 0x363418u: goto label_363418;
        case 0x36341cu: goto label_36341c;
        case 0x363420u: goto label_363420;
        case 0x363424u: goto label_363424;
        case 0x363428u: goto label_363428;
        case 0x36342cu: goto label_36342c;
        case 0x363430u: goto label_363430;
        case 0x363434u: goto label_363434;
        case 0x363438u: goto label_363438;
        case 0x36343cu: goto label_36343c;
        case 0x363440u: goto label_363440;
        case 0x363444u: goto label_363444;
        case 0x363448u: goto label_363448;
        case 0x36344cu: goto label_36344c;
        case 0x363450u: goto label_363450;
        case 0x363454u: goto label_363454;
        case 0x363458u: goto label_363458;
        case 0x36345cu: goto label_36345c;
        case 0x363460u: goto label_363460;
        case 0x363464u: goto label_363464;
        case 0x363468u: goto label_363468;
        case 0x36346cu: goto label_36346c;
        case 0x363470u: goto label_363470;
        case 0x363474u: goto label_363474;
        case 0x363478u: goto label_363478;
        case 0x36347cu: goto label_36347c;
        case 0x363480u: goto label_363480;
        case 0x363484u: goto label_363484;
        case 0x363488u: goto label_363488;
        case 0x36348cu: goto label_36348c;
        case 0x363490u: goto label_363490;
        case 0x363494u: goto label_363494;
        case 0x363498u: goto label_363498;
        case 0x36349cu: goto label_36349c;
        case 0x3634a0u: goto label_3634a0;
        case 0x3634a4u: goto label_3634a4;
        case 0x3634a8u: goto label_3634a8;
        case 0x3634acu: goto label_3634ac;
        case 0x3634b0u: goto label_3634b0;
        case 0x3634b4u: goto label_3634b4;
        case 0x3634b8u: goto label_3634b8;
        case 0x3634bcu: goto label_3634bc;
        case 0x3634c0u: goto label_3634c0;
        case 0x3634c4u: goto label_3634c4;
        case 0x3634c8u: goto label_3634c8;
        case 0x3634ccu: goto label_3634cc;
        case 0x3634d0u: goto label_3634d0;
        case 0x3634d4u: goto label_3634d4;
        case 0x3634d8u: goto label_3634d8;
        case 0x3634dcu: goto label_3634dc;
        case 0x3634e0u: goto label_3634e0;
        case 0x3634e4u: goto label_3634e4;
        case 0x3634e8u: goto label_3634e8;
        case 0x3634ecu: goto label_3634ec;
        case 0x3634f0u: goto label_3634f0;
        case 0x3634f4u: goto label_3634f4;
        case 0x3634f8u: goto label_3634f8;
        case 0x3634fcu: goto label_3634fc;
        case 0x363500u: goto label_363500;
        case 0x363504u: goto label_363504;
        case 0x363508u: goto label_363508;
        case 0x36350cu: goto label_36350c;
        case 0x363510u: goto label_363510;
        case 0x363514u: goto label_363514;
        case 0x363518u: goto label_363518;
        case 0x36351cu: goto label_36351c;
        case 0x363520u: goto label_363520;
        case 0x363524u: goto label_363524;
        case 0x363528u: goto label_363528;
        case 0x36352cu: goto label_36352c;
        case 0x363530u: goto label_363530;
        case 0x363534u: goto label_363534;
        case 0x363538u: goto label_363538;
        case 0x36353cu: goto label_36353c;
        case 0x363540u: goto label_363540;
        case 0x363544u: goto label_363544;
        case 0x363548u: goto label_363548;
        case 0x36354cu: goto label_36354c;
        case 0x363550u: goto label_363550;
        case 0x363554u: goto label_363554;
        case 0x363558u: goto label_363558;
        case 0x36355cu: goto label_36355c;
        case 0x363560u: goto label_363560;
        case 0x363564u: goto label_363564;
        case 0x363568u: goto label_363568;
        case 0x36356cu: goto label_36356c;
        case 0x363570u: goto label_363570;
        case 0x363574u: goto label_363574;
        case 0x363578u: goto label_363578;
        case 0x36357cu: goto label_36357c;
        case 0x363580u: goto label_363580;
        case 0x363584u: goto label_363584;
        case 0x363588u: goto label_363588;
        case 0x36358cu: goto label_36358c;
        case 0x363590u: goto label_363590;
        case 0x363594u: goto label_363594;
        case 0x363598u: goto label_363598;
        case 0x36359cu: goto label_36359c;
        case 0x3635a0u: goto label_3635a0;
        case 0x3635a4u: goto label_3635a4;
        case 0x3635a8u: goto label_3635a8;
        case 0x3635acu: goto label_3635ac;
        case 0x3635b0u: goto label_3635b0;
        case 0x3635b4u: goto label_3635b4;
        case 0x3635b8u: goto label_3635b8;
        case 0x3635bcu: goto label_3635bc;
        case 0x3635c0u: goto label_3635c0;
        case 0x3635c4u: goto label_3635c4;
        case 0x3635c8u: goto label_3635c8;
        case 0x3635ccu: goto label_3635cc;
        case 0x3635d0u: goto label_3635d0;
        case 0x3635d4u: goto label_3635d4;
        case 0x3635d8u: goto label_3635d8;
        case 0x3635dcu: goto label_3635dc;
        case 0x3635e0u: goto label_3635e0;
        case 0x3635e4u: goto label_3635e4;
        case 0x3635e8u: goto label_3635e8;
        case 0x3635ecu: goto label_3635ec;
        case 0x3635f0u: goto label_3635f0;
        case 0x3635f4u: goto label_3635f4;
        case 0x3635f8u: goto label_3635f8;
        case 0x3635fcu: goto label_3635fc;
        case 0x363600u: goto label_363600;
        case 0x363604u: goto label_363604;
        case 0x363608u: goto label_363608;
        case 0x36360cu: goto label_36360c;
        default: break;
    }

    ctx->pc = 0x362f30u;

label_362f30:
    // 0x362f30: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x362f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_362f34:
    // 0x362f34: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x362f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_362f38:
    // 0x362f38: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x362f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_362f3c:
    // 0x362f3c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x362f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_362f40:
    // 0x362f40: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x362f40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_362f44:
    // 0x362f44: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x362f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_362f48:
    // 0x362f48: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x362f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_362f4c:
    // 0x362f4c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x362f4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_362f50:
    // 0x362f50: 0x8ca30da0  lw          $v1, 0xDA0($a1)
    ctx->pc = 0x362f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3488)));
label_362f54:
    // 0x362f54: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x362f54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_362f58:
    // 0x362f58: 0x106000b8  beqz        $v1, . + 4 + (0xB8 << 2)
label_362f5c:
    if (ctx->pc == 0x362F5Cu) {
        ctx->pc = 0x362F5Cu;
            // 0x362f5c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x362F60u;
        goto label_362f60;
    }
    ctx->pc = 0x362F58u;
    {
        const bool branch_taken_0x362f58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x362F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x362F58u;
            // 0x362f5c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362f58) {
            ctx->pc = 0x36323Cu;
            goto label_36323c;
        }
    }
    ctx->pc = 0x362F60u;
label_362f60:
    // 0x362f60: 0x8e510550  lw          $s1, 0x550($s2)
    ctx->pc = 0x362f60u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1360)));
label_362f64:
    // 0x362f64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x362f64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_362f68:
    // 0x362f68: 0x8e630070  lw          $v1, 0x70($s3)
    ctx->pc = 0x362f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_362f6c:
    // 0x362f6c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x362f6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_362f70:
    // 0x362f70: 0x8e650074  lw          $a1, 0x74($s3)
    ctx->pc = 0x362f70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_362f74:
    // 0x362f74: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x362f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_362f78:
    // 0x362f78: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x362f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_362f7c:
    // 0x362f7c: 0x90420094  lbu         $v0, 0x94($v0)
    ctx->pc = 0x362f7cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 148)));
label_362f80:
    // 0x362f80: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_362f84:
    if (ctx->pc == 0x362F84u) {
        ctx->pc = 0x362F88u;
        goto label_362f88;
    }
    ctx->pc = 0x362F80u;
    {
        const bool branch_taken_0x362f80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x362f80) {
            ctx->pc = 0x362F98u;
            goto label_362f98;
        }
    }
    ctx->pc = 0x362F88u;
label_362f88:
    // 0x362f88: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x362f88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
label_362f8c:
    // 0x362f8c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x362f8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_362f90:
    // 0x362f90: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x362f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_362f94:
    // 0x362f94: 0x0  nop
    ctx->pc = 0x362f94u;
    // NOP
label_362f98:
    // 0x362f98: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x362f98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_362f9c:
    // 0x362f9c: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x362f9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_362fa0:
    // 0x362fa0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_362fa4:
    if (ctx->pc == 0x362FA4u) {
        ctx->pc = 0x362FA4u;
            // 0x362fa4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x362FA8u;
        goto label_362fa8;
    }
    ctx->pc = 0x362FA0u;
    {
        const bool branch_taken_0x362fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x362FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x362FA0u;
            // 0x362fa4: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362fa0) {
            ctx->pc = 0x362F78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_362f78;
        }
    }
    ctx->pc = 0x362FA8u;
label_362fa8:
    // 0x362fa8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x362fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_362fac:
    // 0x362fac: 0xc074740  jal         func_1D1D00
label_362fb0:
    if (ctx->pc == 0x362FB0u) {
        ctx->pc = 0x362FB0u;
            // 0x362fb0: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->pc = 0x362FB4u;
        goto label_362fb4;
    }
    ctx->pc = 0x362FACu;
    SET_GPR_U32(ctx, 31, 0x362FB4u);
    ctx->pc = 0x362FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x362FACu;
            // 0x362fb0: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362FB4u; }
        if (ctx->pc != 0x362FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362FB4u; }
        if (ctx->pc != 0x362FB4u) { return; }
    }
    ctx->pc = 0x362FB4u;
label_362fb4:
    // 0x362fb4: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x362fb4u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_362fb8:
    // 0x362fb8: 0x8e440d70  lw          $a0, 0xD70($s2)
    ctx->pc = 0x362fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3440)));
label_362fbc:
    // 0x362fbc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x362fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_362fc0:
    // 0x362fc0: 0x8c8200cc  lw          $v0, 0xCC($a0)
    ctx->pc = 0x362fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
label_362fc4:
    // 0x362fc4: 0x8010  mfhi        $s0
    ctx->pc = 0x362fc4u;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_362fc8:
    // 0x362fc8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x362fc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_362fcc:
    // 0x362fcc: 0x50450006  beql        $v0, $a1, . + 4 + (0x6 << 2)
label_362fd0:
    if (ctx->pc == 0x362FD0u) {
        ctx->pc = 0x362FD0u;
            // 0x362fd0: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x362FD4u;
        goto label_362fd4;
    }
    ctx->pc = 0x362FCCu;
    {
        const bool branch_taken_0x362fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x362fcc) {
            ctx->pc = 0x362FD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x362FCCu;
            // 0x362fd0: 0x8e590000  lw          $t9, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x362FE8u;
            goto label_362fe8;
        }
    }
    ctx->pc = 0x362FD4u;
label_362fd4:
    // 0x362fd4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x362fd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_362fd8:
    // 0x362fd8: 0xc0bdf9c  jal         func_2F7E70
label_362fdc:
    if (ctx->pc == 0x362FDCu) {
        ctx->pc = 0x362FDCu;
            // 0x362fdc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x362FE0u;
        goto label_362fe0;
    }
    ctx->pc = 0x362FD8u;
    SET_GPR_U32(ctx, 31, 0x362FE0u);
    ctx->pc = 0x362FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x362FD8u;
            // 0x362fdc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362FE0u; }
        if (ctx->pc != 0x362FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x362FE0u; }
        if (ctx->pc != 0x362FE0u) { return; }
    }
    ctx->pc = 0x362FE0u;
label_362fe0:
    // 0x362fe0: 0x10000006  b           . + 4 + (0x6 << 2)
label_362fe4:
    if (ctx->pc == 0x362FE4u) {
        ctx->pc = 0x362FE4u;
            // 0x362fe4: 0x8225010c  lb          $a1, 0x10C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 268)));
        ctx->pc = 0x362FE8u;
        goto label_362fe8;
    }
    ctx->pc = 0x362FE0u;
    {
        const bool branch_taken_0x362fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x362FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x362FE0u;
            // 0x362fe4: 0x8225010c  lb          $a1, 0x10C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x362fe0) {
            ctx->pc = 0x362FFCu;
            goto label_362ffc;
        }
    }
    ctx->pc = 0x362FE8u;
label_362fe8:
    // 0x362fe8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x362fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_362fec:
    // 0x362fec: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x362fecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_362ff0:
    // 0x362ff0: 0x320f809  jalr        $t9
label_362ff4:
    if (ctx->pc == 0x362FF4u) {
        ctx->pc = 0x362FF4u;
            // 0x362ff4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x362FF8u;
        goto label_362ff8;
    }
    ctx->pc = 0x362FF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x362FF8u);
        ctx->pc = 0x362FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x362FF0u;
            // 0x362ff4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x362FF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x362FF8u; }
            if (ctx->pc != 0x362FF8u) { return; }
        }
        }
    }
    ctx->pc = 0x362FF8u;
label_362ff8:
    // 0x362ff8: 0x8225010c  lb          $a1, 0x10C($s1)
    ctx->pc = 0x362ff8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 268)));
label_362ffc:
    // 0x362ffc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x362ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_363000:
    // 0x363000: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x363000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_363004:
    // 0x363004: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x363004u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_363008:
    // 0x363008: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x363008u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_36300c:
    // 0x36300c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36300cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_363010:
    // 0x363010: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x363010u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_363014:
    // 0x363014: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x363014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_363018:
    // 0x363018: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x363018u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_36301c:
    // 0x36301c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36301cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_363020:
    // 0x363020: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x363020u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_363024:
    // 0x363024: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x363024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_363028:
    // 0x363028: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x363028u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_36302c:
    // 0x36302c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x36302cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_363030:
    // 0x363030: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x363030u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_363034:
    // 0x363034: 0x8225010d  lb          $a1, 0x10D($s1)
    ctx->pc = 0x363034u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 269)));
label_363038:
    // 0x363038: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x363038u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_36303c:
    // 0x36303c: 0x320f809  jalr        $t9
label_363040:
    if (ctx->pc == 0x363040u) {
        ctx->pc = 0x363040u;
            // 0x363040: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x363044u;
        goto label_363044;
    }
    ctx->pc = 0x36303Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x363044u);
        ctx->pc = 0x363040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36303Cu;
            // 0x363040: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x363044u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x363044u; }
            if (ctx->pc != 0x363044u) { return; }
        }
        }
    }
    ctx->pc = 0x363044u;
label_363044:
    // 0x363044: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x363044u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_363048:
    // 0x363048: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x363048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_36304c:
    // 0x36304c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x36304cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_363050:
    // 0x363050: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x363050u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_363054:
    // 0x363054: 0x320f809  jalr        $t9
label_363058:
    if (ctx->pc == 0x363058u) {
        ctx->pc = 0x363058u;
            // 0x363058: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x36305Cu;
        goto label_36305c;
    }
    ctx->pc = 0x363054u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x36305Cu);
        ctx->pc = 0x363058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x363054u;
            // 0x363058: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x36305Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x36305Cu; }
            if (ctx->pc != 0x36305Cu) { return; }
        }
        }
    }
    ctx->pc = 0x36305Cu;
label_36305c:
    // 0x36305c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x36305cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_363060:
    // 0x363060: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x363060u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_363064:
    // 0x363064: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x363064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_363068:
    // 0x363068: 0x24a54b50  addiu       $a1, $a1, 0x4B50
    ctx->pc = 0x363068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19280));
label_36306c:
    // 0x36306c: 0xc0767f0  jal         func_1D9FC0
label_363070:
    if (ctx->pc == 0x363070u) {
        ctx->pc = 0x363070u;
            // 0x363070: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x363074u;
        goto label_363074;
    }
    ctx->pc = 0x36306Cu;
    SET_GPR_U32(ctx, 31, 0x363074u);
    ctx->pc = 0x363070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36306Cu;
            // 0x363070: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC0u;
    if (runtime->hasFunction(0x1D9FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D9FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363074u; }
        if (ctx->pc != 0x363074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9FC0_0x1d9fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363074u; }
        if (ctx->pc != 0x363074u) { return; }
    }
    ctx->pc = 0x363074u;
label_363074:
    // 0x363074: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x363074u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_363078:
    // 0x363078: 0x26440320  addiu       $a0, $s2, 0x320
    ctx->pc = 0x363078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 800));
label_36307c:
    // 0x36307c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x36307cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_363080:
    // 0x363080: 0xc04cbd8  jal         func_132F60
label_363084:
    if (ctx->pc == 0x363084u) {
        ctx->pc = 0x363084u;
            // 0x363084: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x363088u;
        goto label_363088;
    }
    ctx->pc = 0x363080u;
    SET_GPR_U32(ctx, 31, 0x363088u);
    ctx->pc = 0x363084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x363080u;
            // 0x363084: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363088u; }
        if (ctx->pc != 0x363088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363088u; }
        if (ctx->pc != 0x363088u) { return; }
    }
    ctx->pc = 0x363088u;
label_363088:
    // 0x363088: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x363088u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_36308c:
    // 0x36308c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x36308cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_363090:
    // 0x363090: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x363090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_363094:
    // 0x363094: 0xae430db8  sw          $v1, 0xDB8($s2)
    ctx->pc = 0x363094u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3512), GPR_U32(ctx, 3));
label_363098:
    // 0x363098: 0x24500060  addiu       $s0, $v0, 0x60
    ctx->pc = 0x363098u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_36309c:
    // 0x36309c: 0xae400dc4  sw          $zero, 0xDC4($s2)
    ctx->pc = 0x36309cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3524), GPR_U32(ctx, 0));
label_3630a0:
    // 0x3630a0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3630a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3630a4:
    // 0x3630a4: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x3630a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_3630a8:
    // 0x3630a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3630a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3630ac:
    // 0x3630ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3630acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3630b0:
    // 0x3630b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3630b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3630b4:
    // 0x3630b4: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x3630b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_3630b8:
    // 0x3630b8: 0xc44c00a0  lwc1        $f12, 0xA0($v0)
    ctx->pc = 0x3630b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3630bc:
    // 0x3630bc: 0xc44d00a4  lwc1        $f13, 0xA4($v0)
    ctx->pc = 0x3630bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3630c0:
    // 0x3630c0: 0xc44e00a8  lwc1        $f14, 0xA8($v0)
    ctx->pc = 0x3630c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_3630c4:
    // 0x3630c4: 0xc04cbd8  jal         func_132F60
label_3630c8:
    if (ctx->pc == 0x3630C8u) {
        ctx->pc = 0x3630C8u;
            // 0x3630c8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3630CCu;
        goto label_3630cc;
    }
    ctx->pc = 0x3630C4u;
    SET_GPR_U32(ctx, 31, 0x3630CCu);
    ctx->pc = 0x3630C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3630C4u;
            // 0x3630c8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3630CCu; }
        if (ctx->pc != 0x3630CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3630CCu; }
        if (ctx->pc != 0x3630CCu) { return; }
    }
    ctx->pc = 0x3630CCu;
label_3630cc:
    // 0x3630cc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3630ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3630d0:
    // 0x3630d0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3630d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3630d4:
    // 0x3630d4: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x3630d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_3630d8:
    // 0x3630d8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3630d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3630dc:
    // 0x3630dc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3630dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3630e0:
    // 0x3630e0: 0x264602c0  addiu       $a2, $s2, 0x2C0
    ctx->pc = 0x3630e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
label_3630e4:
    // 0x3630e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3630e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3630e8:
    // 0x3630e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3630e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3630ec:
    // 0x3630ec: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3630ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3630f0:
    // 0x3630f0: 0xc04cc90  jal         func_133240
label_3630f4:
    if (ctx->pc == 0x3630F4u) {
        ctx->pc = 0x3630F4u;
            // 0x3630f4: 0xa0470094  sb          $a3, 0x94($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 148), (uint8_t)GPR_U32(ctx, 7));
        ctx->pc = 0x3630F8u;
        goto label_3630f8;
    }
    ctx->pc = 0x3630F0u;
    SET_GPR_U32(ctx, 31, 0x3630F8u);
    ctx->pc = 0x3630F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3630F0u;
            // 0x3630f4: 0xa0470094  sb          $a3, 0x94($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 148), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3630F8u; }
        if (ctx->pc != 0x3630F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3630F8u; }
        if (ctx->pc != 0x3630F8u) { return; }
    }
    ctx->pc = 0x3630F8u;
label_3630f8:
    // 0x3630f8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3630f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3630fc:
    // 0x3630fc: 0xc04cc44  jal         func_133110
label_363100:
    if (ctx->pc == 0x363100u) {
        ctx->pc = 0x363100u;
            // 0x363100: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x363104u;
        goto label_363104;
    }
    ctx->pc = 0x3630FCu;
    SET_GPR_U32(ctx, 31, 0x363104u);
    ctx->pc = 0x363100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3630FCu;
            // 0x363100: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363104u; }
        if (ctx->pc != 0x363104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363104u; }
        if (ctx->pc != 0x363104u) { return; }
    }
    ctx->pc = 0x363104u;
label_363104:
    // 0x363104: 0x3c023fed  lui         $v0, 0x3FED
    ctx->pc = 0x363104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16365 << 16));
label_363108:
    // 0x363108: 0x26440330  addiu       $a0, $s2, 0x330
    ctx->pc = 0x363108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 816));
label_36310c:
    // 0x36310c: 0x3442097b  ori         $v0, $v0, 0x97B
    ctx->pc = 0x36310cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_363110:
    // 0x363110: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x363110u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_363114:
    // 0x363114: 0xc04cc70  jal         func_1331C0
label_363118:
    if (ctx->pc == 0x363118u) {
        ctx->pc = 0x363118u;
            // 0x363118: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x36311Cu;
        goto label_36311c;
    }
    ctx->pc = 0x363114u;
    SET_GPR_U32(ctx, 31, 0x36311Cu);
    ctx->pc = 0x363118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x363114u;
            // 0x363118: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36311Cu; }
        if (ctx->pc != 0x36311Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36311Cu; }
        if (ctx->pc != 0x36311Cu) { return; }
    }
    ctx->pc = 0x36311Cu;
label_36311c:
    // 0x36311c: 0x26440560  addiu       $a0, $s2, 0x560
    ctx->pc = 0x36311cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
label_363120:
    // 0x363120: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x363120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_363124:
    // 0x363124: 0xc075378  jal         func_1D4DE0
label_363128:
    if (ctx->pc == 0x363128u) {
        ctx->pc = 0x363128u;
            // 0x363128: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36312Cu;
        goto label_36312c;
    }
    ctx->pc = 0x363124u;
    SET_GPR_U32(ctx, 31, 0x36312Cu);
    ctx->pc = 0x363128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x363124u;
            // 0x363128: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36312Cu; }
        if (ctx->pc != 0x36312Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36312Cu; }
        if (ctx->pc != 0x36312Cu) { return; }
    }
    ctx->pc = 0x36312Cu;
label_36312c:
    // 0x36312c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x36312cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_363130:
    // 0x363130: 0x2644092c  addiu       $a0, $s2, 0x92C
    ctx->pc = 0x363130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2348));
label_363134:
    // 0x363134: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x363134u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_363138:
    // 0x363138: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x363138u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_36313c:
    // 0x36313c: 0xc0c753c  jal         func_31D4F0
label_363140:
    if (ctx->pc == 0x363140u) {
        ctx->pc = 0x363140u;
            // 0x363140: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x363144u;
        goto label_363144;
    }
    ctx->pc = 0x36313Cu;
    SET_GPR_U32(ctx, 31, 0x363144u);
    ctx->pc = 0x363140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36313Cu;
            // 0x363140: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363144u; }
        if (ctx->pc != 0x363144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363144u; }
        if (ctx->pc != 0x363144u) { return; }
    }
    ctx->pc = 0x363144u;
label_363144:
    // 0x363144: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x363144u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_363148:
    // 0x363148: 0x2644087c  addiu       $a0, $s2, 0x87C
    ctx->pc = 0x363148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2172));
label_36314c:
    // 0x36314c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x36314cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_363150:
    // 0x363150: 0xc0c753c  jal         func_31D4F0
label_363154:
    if (ctx->pc == 0x363154u) {
        ctx->pc = 0x363154u;
            // 0x363154: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x363158u;
        goto label_363158;
    }
    ctx->pc = 0x363150u;
    SET_GPR_U32(ctx, 31, 0x363158u);
    ctx->pc = 0x363154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x363150u;
            // 0x363154: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363158u; }
        if (ctx->pc != 0x363158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363158u; }
        if (ctx->pc != 0x363158u) { return; }
    }
    ctx->pc = 0x363158u;
label_363158:
    // 0x363158: 0x8e430e34  lw          $v1, 0xE34($s2)
    ctx->pc = 0x363158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3636)));
label_36315c:
    // 0x36315c: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x36315cu;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_363160:
    // 0x363160: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_363164:
    if (ctx->pc == 0x363164u) {
        ctx->pc = 0x363164u;
            // 0x363164: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x363168u;
        goto label_363168;
    }
    ctx->pc = 0x363160u;
    {
        const bool branch_taken_0x363160 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x363164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x363160u;
            // 0x363164: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363160) {
            ctx->pc = 0x363178u;
            goto label_363178;
        }
    }
    ctx->pc = 0x363168u;
label_363168:
    // 0x363168: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x363168u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_36316c:
    // 0x36316c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_363170:
    if (ctx->pc == 0x363170u) {
        ctx->pc = 0x363174u;
        goto label_363174;
    }
    ctx->pc = 0x36316Cu;
    {
        const bool branch_taken_0x36316c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x36316c) {
            ctx->pc = 0x363178u;
            goto label_363178;
        }
    }
    ctx->pc = 0x363174u;
label_363174:
    // 0x363174: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x363174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_363178:
    // 0x363178: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_36317c:
    if (ctx->pc == 0x36317Cu) {
        ctx->pc = 0x363180u;
        goto label_363180;
    }
    ctx->pc = 0x363178u;
    {
        const bool branch_taken_0x363178 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x363178) {
            ctx->pc = 0x363194u;
            goto label_363194;
        }
    }
    ctx->pc = 0x363180u;
label_363180:
    // 0x363180: 0xc075eb4  jal         func_1D7AD0
label_363184:
    if (ctx->pc == 0x363184u) {
        ctx->pc = 0x363184u;
            // 0x363184: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x363188u;
        goto label_363188;
    }
    ctx->pc = 0x363180u;
    SET_GPR_U32(ctx, 31, 0x363188u);
    ctx->pc = 0x363184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x363180u;
            // 0x363184: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363188u; }
        if (ctx->pc != 0x363188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363188u; }
        if (ctx->pc != 0x363188u) { return; }
    }
    ctx->pc = 0x363188u;
label_363188:
    // 0x363188: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_36318c:
    if (ctx->pc == 0x36318Cu) {
        ctx->pc = 0x363190u;
        goto label_363190;
    }
    ctx->pc = 0x363188u;
    {
        const bool branch_taken_0x363188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x363188) {
            ctx->pc = 0x363194u;
            goto label_363194;
        }
    }
    ctx->pc = 0x363190u;
label_363190:
    // 0x363190: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x363190u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_363194:
    // 0x363194: 0x5200002a  beql        $s0, $zero, . + 4 + (0x2A << 2)
label_363198:
    if (ctx->pc == 0x363198u) {
        ctx->pc = 0x363198u;
            // 0x363198: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x36319Cu;
        goto label_36319c;
    }
    ctx->pc = 0x363194u;
    {
        const bool branch_taken_0x363194 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x363194) {
            ctx->pc = 0x363198u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x363194u;
            // 0x363198: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x363240u;
            goto label_363240;
        }
    }
    ctx->pc = 0x36319Cu;
label_36319c:
    // 0x36319c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x36319cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3631a0:
    // 0x3631a0: 0x8e450d98  lw          $a1, 0xD98($s2)
    ctx->pc = 0x3631a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3480)));
label_3631a4:
    // 0x3631a4: 0x90643db0  lbu         $a0, 0x3DB0($v1)
    ctx->pc = 0x3631a4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 15792)));
label_3631a8:
    // 0x3631a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3631a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3631ac:
    // 0x3631ac: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x3631acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
label_3631b0:
    // 0x3631b0: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3631b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3631b4:
    // 0x3631b4: 0x1c600021  bgtz        $v1, . + 4 + (0x21 << 2)
label_3631b8:
    if (ctx->pc == 0x3631B8u) {
        ctx->pc = 0x3631BCu;
        goto label_3631bc;
    }
    ctx->pc = 0x3631B4u;
    {
        const bool branch_taken_0x3631b4 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x3631b4) {
            ctx->pc = 0x36323Cu;
            goto label_36323c;
        }
    }
    ctx->pc = 0x3631BCu;
label_3631bc:
    // 0x3631bc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3631bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3631c0:
    // 0x3631c0: 0x240400d0  addiu       $a0, $zero, 0xD0
    ctx->pc = 0x3631c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_3631c4:
    // 0x3631c4: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3631c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3631c8:
    // 0x3631c8: 0x245102b8  addiu       $s1, $v0, 0x2B8
    ctx->pc = 0x3631c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 696));
label_3631cc:
    // 0x3631cc: 0x8c4202c0  lw          $v0, 0x2C0($v0)
    ctx->pc = 0x3631ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 704)));
label_3631d0:
    // 0x3631d0: 0xc040180  jal         func_100600
label_3631d4:
    if (ctx->pc == 0x3631D4u) {
        ctx->pc = 0x3631D4u;
            // 0x3631d4: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x3631D8u;
        goto label_3631d8;
    }
    ctx->pc = 0x3631D0u;
    SET_GPR_U32(ctx, 31, 0x3631D8u);
    ctx->pc = 0x3631D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3631D0u;
            // 0x3631d4: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3631D8u; }
        if (ctx->pc != 0x3631D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3631D8u; }
        if (ctx->pc != 0x3631D8u) { return; }
    }
    ctx->pc = 0x3631D8u;
label_3631d8:
    // 0x3631d8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_3631dc:
    if (ctx->pc == 0x3631DCu) {
        ctx->pc = 0x3631DCu;
            // 0x3631dc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3631E0u;
        goto label_3631e0;
    }
    ctx->pc = 0x3631D8u;
    {
        const bool branch_taken_0x3631d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3631DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3631D8u;
            // 0x3631dc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3631d8) {
            ctx->pc = 0x36323Cu;
            goto label_36323c;
        }
    }
    ctx->pc = 0x3631E0u;
label_3631e0:
    // 0x3631e0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3631e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3631e4:
    // 0x3631e4: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x3631e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_3631e8:
    // 0x3631e8: 0x8e510d98  lw          $s1, 0xD98($s2)
    ctx->pc = 0x3631e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3480)));
label_3631ec:
    // 0x3631ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3631ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3631f0:
    // 0x3631f0: 0x824911aa  lb          $t1, 0x11AA($s2)
    ctx->pc = 0x3631f0u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4522)));
label_3631f4:
    // 0x3631f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3631f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3631f8:
    // 0x3631f8: 0x344594a8  ori         $a1, $v0, 0x94A8
    ctx->pc = 0x3631f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38056);
label_3631fc:
    // 0x3631fc: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x3631fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_363200:
    // 0x363200: 0x24080821  addiu       $t0, $zero, 0x821
    ctx->pc = 0x363200u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2081));
label_363204:
    // 0x363204: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x363204u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_363208:
    // 0x363208: 0xc0b9404  jal         func_2E5010
label_36320c:
    if (ctx->pc == 0x36320Cu) {
        ctx->pc = 0x36320Cu;
            // 0x36320c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x363210u;
        goto label_363210;
    }
    ctx->pc = 0x363208u;
    SET_GPR_U32(ctx, 31, 0x363210u);
    ctx->pc = 0x36320Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x363208u;
            // 0x36320c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5010u;
    if (runtime->hasFunction(0x2E5010u)) {
        auto targetFn = runtime->lookupFunction(0x2E5010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363210u; }
        if (ctx->pc != 0x363210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5010_0x2e5010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363210u; }
        if (ctx->pc != 0x363210u) { return; }
    }
    ctx->pc = 0x363210u;
label_363210:
    // 0x363210: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x363210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_363214:
    // 0x363214: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x363214u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_363218:
    // 0x363218: 0x2231804  sllv        $v1, $v1, $s1
    ctx->pc = 0x363218u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 17) & 0x1F));
label_36321c:
    // 0x36321c: 0x24844160  addiu       $a0, $a0, 0x4160
    ctx->pc = 0x36321cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16736));
label_363220:
    // 0x363220: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x363220u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_363224:
    // 0x363224: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x363224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_363228:
    // 0x363228: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x363228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_36322c:
    // 0x36322c: 0x90643db0  lbu         $a0, 0x3DB0($v1)
    ctx->pc = 0x36322cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 15792)));
label_363230:
    // 0x363230: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x363230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_363234:
    // 0x363234: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x363234u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_363238:
    // 0x363238: 0xa0643db0  sb          $a0, 0x3DB0($v1)
    ctx->pc = 0x363238u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 15792), (uint8_t)GPR_U32(ctx, 4));
label_36323c:
    // 0x36323c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x36323cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_363240:
    // 0x363240: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x363240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_363244:
    // 0x363244: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x363244u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_363248:
    // 0x363248: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x363248u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_36324c:
    // 0x36324c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x36324cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_363250:
    // 0x363250: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x363250u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_363254:
    // 0x363254: 0x3e00008  jr          $ra
label_363258:
    if (ctx->pc == 0x363258u) {
        ctx->pc = 0x363258u;
            // 0x363258: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x36325Cu;
        goto label_36325c;
    }
    ctx->pc = 0x363254u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x363258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x363254u;
            // 0x363258: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36325Cu;
label_36325c:
    // 0x36325c: 0x0  nop
    ctx->pc = 0x36325cu;
    // NOP
label_363260:
    // 0x363260: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x363260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_363264:
    // 0x363264: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x363264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_363268:
    // 0x363268: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x363268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_36326c:
    // 0x36326c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x36326cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_363270:
    // 0x363270: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x363270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_363274:
    // 0x363274: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x363274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_363278:
    // 0x363278: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x363278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_36327c:
    // 0x36327c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x36327cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_363280:
    // 0x363280: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x363280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_363284:
    // 0x363284: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x363284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_363288:
    // 0x363288: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x363288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_36328c:
    // 0x36328c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x36328cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_363290:
    // 0x363290: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x363290u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_363294:
    // 0x363294: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x363294u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_363298:
    // 0x363298: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x363298u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_36329c:
    // 0x36329c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x36329cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3632a0:
    // 0x3632a0: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
label_3632a4:
    if (ctx->pc == 0x3632A4u) {
        ctx->pc = 0x3632A4u;
            // 0x3632a4: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3632A8u;
        goto label_3632a8;
    }
    ctx->pc = 0x3632A0u;
    {
        const bool branch_taken_0x3632a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3632A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3632A0u;
            // 0x3632a4: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3632a0) {
            ctx->pc = 0x3632E4u;
            goto label_3632e4;
        }
    }
    ctx->pc = 0x3632A8u;
label_3632a8:
    // 0x3632a8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3632a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3632ac:
    // 0x3632ac: 0x50a300c9  beql        $a1, $v1, . + 4 + (0xC9 << 2)
label_3632b0:
    if (ctx->pc == 0x3632B0u) {
        ctx->pc = 0x3632B0u;
            // 0x3632b0: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x3632B4u;
        goto label_3632b4;
    }
    ctx->pc = 0x3632ACu;
    {
        const bool branch_taken_0x3632ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3632ac) {
            ctx->pc = 0x3632B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3632ACu;
            // 0x3632b0: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3635D4u;
            goto label_3635d4;
        }
    }
    ctx->pc = 0x3632B4u;
label_3632b4:
    // 0x3632b4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3632b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3632b8:
    // 0x3632b8: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_3632bc:
    if (ctx->pc == 0x3632BCu) {
        ctx->pc = 0x3632BCu;
            // 0x3632bc: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3632C0u;
        goto label_3632c0;
    }
    ctx->pc = 0x3632B8u;
    {
        const bool branch_taken_0x3632b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3632b8) {
            ctx->pc = 0x3632BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3632B8u;
            // 0x3632bc: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3632C8u;
            goto label_3632c8;
        }
    }
    ctx->pc = 0x3632C0u;
label_3632c0:
    // 0x3632c0: 0x100000c3  b           . + 4 + (0xC3 << 2)
label_3632c4:
    if (ctx->pc == 0x3632C4u) {
        ctx->pc = 0x3632C8u;
        goto label_3632c8;
    }
    ctx->pc = 0x3632C0u;
    {
        const bool branch_taken_0x3632c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3632c0) {
            ctx->pc = 0x3635D0u;
            goto label_3635d0;
        }
    }
    ctx->pc = 0x3632C8u;
label_3632c8:
    // 0x3632c8: 0x8cc20cb4  lw          $v0, 0xCB4($a2)
    ctx->pc = 0x3632c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
label_3632cc:
    // 0x3632cc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x3632ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_3632d0:
    // 0x3632d0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3632d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3632d4:
    // 0x3632d4: 0x320f809  jalr        $t9
label_3632d8:
    if (ctx->pc == 0x3632D8u) {
        ctx->pc = 0x3632D8u;
            // 0x3632d8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x3632DCu;
        goto label_3632dc;
    }
    ctx->pc = 0x3632D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3632DCu);
        ctx->pc = 0x3632D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3632D4u;
            // 0x3632d8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3632DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3632DCu; }
            if (ctx->pc != 0x3632DCu) { return; }
        }
        }
    }
    ctx->pc = 0x3632DCu;
label_3632dc:
    // 0x3632dc: 0x100000bc  b           . + 4 + (0xBC << 2)
label_3632e0:
    if (ctx->pc == 0x3632E0u) {
        ctx->pc = 0x3632E4u;
        goto label_3632e4;
    }
    ctx->pc = 0x3632DCu;
    {
        const bool branch_taken_0x3632dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3632dc) {
            ctx->pc = 0x3635D0u;
            goto label_3635d0;
        }
    }
    ctx->pc = 0x3632E4u;
label_3632e4:
    // 0x3632e4: 0x8ee30070  lw          $v1, 0x70($s7)
    ctx->pc = 0x3632e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 112)));
label_3632e8:
    // 0x3632e8: 0x106000b9  beqz        $v1, . + 4 + (0xB9 << 2)
label_3632ec:
    if (ctx->pc == 0x3632ECu) {
        ctx->pc = 0x3632ECu;
            // 0x3632ec: 0x7fa300d0  sq          $v1, 0xD0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
        ctx->pc = 0x3632F0u;
        goto label_3632f0;
    }
    ctx->pc = 0x3632E8u;
    {
        const bool branch_taken_0x3632e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3632ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3632E8u;
            // 0x3632ec: 0x7fa300d0  sq          $v1, 0xD0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3632e8) {
            ctx->pc = 0x3635D0u;
            goto label_3635d0;
        }
    }
    ctx->pc = 0x3632F0u;
label_3632f0:
    // 0x3632f0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3632f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3632f4:
    // 0x3632f4: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x3632f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
label_3632f8:
    // 0x3632f8: 0x8c42e378  lw          $v0, -0x1C88($v0)
    ctx->pc = 0x3632f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_3632fc:
    // 0x3632fc: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x3632fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_363300:
    // 0x363300: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x363300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_363304:
    // 0x363304: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x363304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_363308:
    // 0x363308: 0x8c85d130  lw          $a1, -0x2ED0($a0)
    ctx->pc = 0x363308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294955312)));
label_36330c:
    // 0x36330c: 0x26fe0084  addiu       $fp, $s7, 0x84
    ctx->pc = 0x36330cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 23), 132));
label_363310:
    // 0x363310: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x363310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_363314:
    // 0x363314: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x363314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_363318:
    // 0x363318: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x363318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_36331c:
    // 0x36331c: 0x8c42e370  lw          $v0, -0x1C90($v0)
    ctx->pc = 0x36331cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_363320:
    // 0x363320: 0x7ba400c0  lq          $a0, 0xC0($sp)
    ctx->pc = 0x363320u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_363324:
    // 0x363324: 0x8ef5008c  lw          $s5, 0x8C($s7)
    ctx->pc = 0x363324u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 140)));
label_363328:
    // 0x363328: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x363328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_36332c:
    // 0x36332c: 0x8ca20130  lw          $v0, 0x130($a1)
    ctx->pc = 0x36332cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_363330:
    // 0x363330: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x363330u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_363334:
    // 0x363334: 0x8ee20084  lw          $v0, 0x84($s7)
    ctx->pc = 0x363334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 132)));
label_363338:
    // 0x363338: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x363338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_36333c:
    // 0x36333c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x36333cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_363340:
    // 0x363340: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x363340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_363344:
    // 0x363344: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x363344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_363348:
    // 0x363348: 0xc04e4a4  jal         func_139290
label_36334c:
    if (ctx->pc == 0x36334Cu) {
        ctx->pc = 0x36334Cu;
            // 0x36334c: 0xafa200e0  sw          $v0, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
        ctx->pc = 0x363350u;
        goto label_363350;
    }
    ctx->pc = 0x363348u;
    SET_GPR_U32(ctx, 31, 0x363350u);
    ctx->pc = 0x36334Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x363348u;
            // 0x36334c: 0xafa200e0  sw          $v0, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363350u; }
        if (ctx->pc != 0x363350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363350u; }
        if (ctx->pc != 0x363350u) { return; }
    }
    ctx->pc = 0x363350u;
label_363350:
    // 0x363350: 0xc04e738  jal         func_139CE0
label_363354:
    if (ctx->pc == 0x363354u) {
        ctx->pc = 0x363354u;
            // 0x363354: 0x8fc40004  lw          $a0, 0x4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
        ctx->pc = 0x363358u;
        goto label_363358;
    }
    ctx->pc = 0x363350u;
    SET_GPR_U32(ctx, 31, 0x363358u);
    ctx->pc = 0x363354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x363350u;
            // 0x363354: 0x8fc40004  lw          $a0, 0x4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363358u; }
        if (ctx->pc != 0x363358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363358u; }
        if (ctx->pc != 0x363358u) { return; }
    }
    ctx->pc = 0x363358u;
label_363358:
    // 0x363358: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x363358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_36335c:
    // 0x36335c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36335cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_363360:
    // 0x363360: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x363360u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_363364:
    // 0x363364: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x363364u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_363368:
    // 0x363368: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x363368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_36336c:
    // 0x36336c: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x36336cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_363370:
    // 0x363370: 0xc4544af0  lwc1        $f20, 0x4AF0($v0)
    ctx->pc = 0x363370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 19184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_363374:
    // 0x363374: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x363374u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_363378:
    // 0x363378: 0x8ee20074  lw          $v0, 0x74($s7)
    ctx->pc = 0x363378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 116)));
label_36337c:
    // 0x36337c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x36337cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_363380:
    // 0x363380: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x363380u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_363384:
    // 0x363384: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x363384u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_363388:
    // 0x363388: 0xafa2016c  sw          $v0, 0x16C($sp)
    ctx->pc = 0x363388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 2));
label_36338c:
    // 0x36338c: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x36338cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_363390:
    // 0x363390: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x363390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
label_363394:
    // 0x363394: 0x8fd30000  lw          $s3, 0x0($fp)
    ctx->pc = 0x363394u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_363398:
    // 0x363398: 0xc0d1c14  jal         func_347050
label_36339c:
    if (ctx->pc == 0x36339Cu) {
        ctx->pc = 0x36339Cu;
            // 0x36339c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3633A0u;
        goto label_3633a0;
    }
    ctx->pc = 0x363398u;
    SET_GPR_U32(ctx, 31, 0x3633A0u);
    ctx->pc = 0x36339Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x363398u;
            // 0x36339c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3633A0u; }
        if (ctx->pc != 0x3633A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3633A0u; }
        if (ctx->pc != 0x3633A0u) { return; }
    }
    ctx->pc = 0x3633A0u;
label_3633a0:
    // 0x3633a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3633a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3633a4:
    // 0x3633a4: 0xc04f278  jal         func_13C9E0
label_3633a8:
    if (ctx->pc == 0x3633A8u) {
        ctx->pc = 0x3633A8u;
            // 0x3633a8: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x3633ACu;
        goto label_3633ac;
    }
    ctx->pc = 0x3633A4u;
    SET_GPR_U32(ctx, 31, 0x3633ACu);
    ctx->pc = 0x3633A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3633A4u;
            // 0x3633a8: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3633ACu; }
        if (ctx->pc != 0x3633ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3633ACu; }
        if (ctx->pc != 0x3633ACu) { return; }
    }
    ctx->pc = 0x3633ACu;
label_3633ac:
    // 0x3633ac: 0xc0d1c10  jal         func_347040
label_3633b0:
    if (ctx->pc == 0x3633B0u) {
        ctx->pc = 0x3633B0u;
            // 0x3633b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3633B4u;
        goto label_3633b4;
    }
    ctx->pc = 0x3633ACu;
    SET_GPR_U32(ctx, 31, 0x3633B4u);
    ctx->pc = 0x3633B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3633ACu;
            // 0x3633b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3633B4u; }
        if (ctx->pc != 0x3633B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3633B4u; }
        if (ctx->pc != 0x3633B4u) { return; }
    }
    ctx->pc = 0x3633B4u;
label_3633b4:
    // 0x3633b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3633b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3633b8:
    // 0x3633b8: 0xc04ce80  jal         func_133A00
label_3633bc:
    if (ctx->pc == 0x3633BCu) {
        ctx->pc = 0x3633BCu;
            // 0x3633bc: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x3633C0u;
        goto label_3633c0;
    }
    ctx->pc = 0x3633B8u;
    SET_GPR_U32(ctx, 31, 0x3633C0u);
    ctx->pc = 0x3633BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3633B8u;
            // 0x3633bc: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3633C0u; }
        if (ctx->pc != 0x3633C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3633C0u; }
        if (ctx->pc != 0x3633C0u) { return; }
    }
    ctx->pc = 0x3633C0u;
label_3633c0:
    // 0x3633c0: 0x8e430070  lw          $v1, 0x70($s2)
    ctx->pc = 0x3633c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_3633c4:
    // 0x3633c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3633c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3633c8:
    // 0x3633c8: 0x14620043  bne         $v1, $v0, . + 4 + (0x43 << 2)
label_3633cc:
    if (ctx->pc == 0x3633CCu) {
        ctx->pc = 0x3633D0u;
        goto label_3633d0;
    }
    ctx->pc = 0x3633C8u;
    {
        const bool branch_taken_0x3633c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3633c8) {
            ctx->pc = 0x3634D8u;
            goto label_3634d8;
        }
    }
    ctx->pc = 0x3633D0u;
label_3633d0:
    // 0x3633d0: 0x8e440074  lw          $a0, 0x74($s2)
    ctx->pc = 0x3633d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
label_3633d4:
    // 0x3633d4: 0x10800040  beqz        $a0, . + 4 + (0x40 << 2)
label_3633d8:
    if (ctx->pc == 0x3633D8u) {
        ctx->pc = 0x3633DCu;
        goto label_3633dc;
    }
    ctx->pc = 0x3633D4u;
    {
        const bool branch_taken_0x3633d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3633d4) {
            ctx->pc = 0x3634D8u;
            goto label_3634d8;
        }
    }
    ctx->pc = 0x3633DCu;
label_3633dc:
    // 0x3633dc: 0xc077574  jal         func_1DD5D0
label_3633e0:
    if (ctx->pc == 0x3633E0u) {
        ctx->pc = 0x3633E4u;
        goto label_3633e4;
    }
    ctx->pc = 0x3633DCu;
    SET_GPR_U32(ctx, 31, 0x3633E4u);
    ctx->pc = 0x1DD5D0u;
    if (runtime->hasFunction(0x1DD5D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3633E4u; }
        if (ctx->pc != 0x3633E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD5D0_0x1dd5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3633E4u; }
        if (ctx->pc != 0x3633E4u) { return; }
    }
    ctx->pc = 0x3633E4u;
label_3633e4:
    // 0x3633e4: 0x14400050  bnez        $v0, . + 4 + (0x50 << 2)
label_3633e8:
    if (ctx->pc == 0x3633E8u) {
        ctx->pc = 0x3633ECu;
        goto label_3633ec;
    }
    ctx->pc = 0x3633E4u;
    {
        const bool branch_taken_0x3633e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3633e4) {
            ctx->pc = 0x363528u;
            goto label_363528;
        }
    }
    ctx->pc = 0x3633ECu;
label_3633ec:
    // 0x3633ec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3633ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3633f0:
    // 0x3633f0: 0xc0775b8  jal         func_1DD6E0
label_3633f4:
    if (ctx->pc == 0x3633F4u) {
        ctx->pc = 0x3633F4u;
            // 0x3633f4: 0x8c50e360  lw          $s0, -0x1CA0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959968)));
        ctx->pc = 0x3633F8u;
        goto label_3633f8;
    }
    ctx->pc = 0x3633F0u;
    SET_GPR_U32(ctx, 31, 0x3633F8u);
    ctx->pc = 0x3633F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3633F0u;
            // 0x3633f4: 0x8c50e360  lw          $s0, -0x1CA0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959968)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3633F8u; }
        if (ctx->pc != 0x3633F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3633F8u; }
        if (ctx->pc != 0x3633F8u) { return; }
    }
    ctx->pc = 0x3633F8u;
label_3633f8:
    // 0x3633f8: 0xc0775b4  jal         func_1DD6D0
label_3633fc:
    if (ctx->pc == 0x3633FCu) {
        ctx->pc = 0x3633FCu;
            // 0x3633fc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x363400u;
        goto label_363400;
    }
    ctx->pc = 0x3633F8u;
    SET_GPR_U32(ctx, 31, 0x363400u);
    ctx->pc = 0x3633FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3633F8u;
            // 0x3633fc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363400u; }
        if (ctx->pc != 0x363400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363400u; }
        if (ctx->pc != 0x363400u) { return; }
    }
    ctx->pc = 0x363400u;
label_363400:
    // 0x363400: 0xc641007c  lwc1        $f1, 0x7C($s2)
    ctx->pc = 0x363400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_363404:
    // 0x363404: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x363404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_363408:
    // 0x363408: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x363408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_36340c:
    // 0x36340c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x36340cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_363410:
    // 0x363410: 0x27a70120  addiu       $a3, $sp, 0x120
    ctx->pc = 0x363410u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_363414:
    // 0x363414: 0xc0528ec  jal         func_14A3B0
label_363418:
    if (ctx->pc == 0x363418u) {
        ctx->pc = 0x363418u;
            // 0x363418: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x36341Cu;
        goto label_36341c;
    }
    ctx->pc = 0x363414u;
    SET_GPR_U32(ctx, 31, 0x36341Cu);
    ctx->pc = 0x363418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x363414u;
            // 0x363418: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14A3B0u;
    if (runtime->hasFunction(0x14A3B0u)) {
        auto targetFn = runtime->lookupFunction(0x14A3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36341Cu; }
        if (ctx->pc != 0x36341Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014A3B0_0x14a3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36341Cu; }
        if (ctx->pc != 0x36341Cu) { return; }
    }
    ctx->pc = 0x36341Cu;
label_36341c:
    // 0x36341c: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x36341cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
label_363420:
    // 0x363420: 0x26050080  addiu       $a1, $s0, 0x80
    ctx->pc = 0x363420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_363424:
    // 0x363424: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x363424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_363428:
    // 0x363428: 0xc04cca0  jal         func_133280
label_36342c:
    if (ctx->pc == 0x36342Cu) {
        ctx->pc = 0x36342Cu;
            // 0x36342c: 0x24c64b50  addiu       $a2, $a2, 0x4B50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19280));
        ctx->pc = 0x363430u;
        goto label_363430;
    }
    ctx->pc = 0x363428u;
    SET_GPR_U32(ctx, 31, 0x363430u);
    ctx->pc = 0x36342Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x363428u;
            // 0x36342c: 0x24c64b50  addiu       $a2, $a2, 0x4B50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363430u; }
        if (ctx->pc != 0x363430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363430u; }
        if (ctx->pc != 0x363430u) { return; }
    }
    ctx->pc = 0x363430u;
label_363430:
    // 0x363430: 0xc0c05c8  jal         func_301720
label_363434:
    if (ctx->pc == 0x363434u) {
        ctx->pc = 0x363434u;
            // 0x363434: 0x8e440074  lw          $a0, 0x74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
        ctx->pc = 0x363438u;
        goto label_363438;
    }
    ctx->pc = 0x363430u;
    SET_GPR_U32(ctx, 31, 0x363438u);
    ctx->pc = 0x363434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x363430u;
            // 0x363434: 0x8e440074  lw          $a0, 0x74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301720u;
    if (runtime->hasFunction(0x301720u)) {
        auto targetFn = runtime->lookupFunction(0x301720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363438u; }
        if (ctx->pc != 0x363438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301720_0x301720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363438u; }
        if (ctx->pc != 0x363438u) { return; }
    }
    ctx->pc = 0x363438u;
label_363438:
    // 0x363438: 0x8e440074  lw          $a0, 0x74($s2)
    ctx->pc = 0x363438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
label_36343c:
    // 0x36343c: 0xc077264  jal         func_1DC990
label_363440:
    if (ctx->pc == 0x363440u) {
        ctx->pc = 0x363440u;
            // 0x363440: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x363444u;
        goto label_363444;
    }
    ctx->pc = 0x36343Cu;
    SET_GPR_U32(ctx, 31, 0x363444u);
    ctx->pc = 0x363440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36343Cu;
            // 0x363440: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC990u;
    if (runtime->hasFunction(0x1DC990u)) {
        auto targetFn = runtime->lookupFunction(0x1DC990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363444u; }
        if (ctx->pc != 0x363444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC990_0x1dc990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363444u; }
        if (ctx->pc != 0x363444u) { return; }
    }
    ctx->pc = 0x363444u;
label_363444:
    // 0x363444: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x363444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_363448:
    // 0x363448: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x363448u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_36344c:
    // 0x36344c: 0xc04cc90  jal         func_133240
label_363450:
    if (ctx->pc == 0x363450u) {
        ctx->pc = 0x363450u;
            // 0x363450: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x363454u;
        goto label_363454;
    }
    ctx->pc = 0x36344Cu;
    SET_GPR_U32(ctx, 31, 0x363454u);
    ctx->pc = 0x363450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36344Cu;
            // 0x363450: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363454u; }
        if (ctx->pc != 0x363454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363454u; }
        if (ctx->pc != 0x363454u) { return; }
    }
    ctx->pc = 0x363454u;
label_363454:
    // 0x363454: 0xc0d1c10  jal         func_347040
label_363458:
    if (ctx->pc == 0x363458u) {
        ctx->pc = 0x363458u;
            // 0x363458: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36345Cu;
        goto label_36345c;
    }
    ctx->pc = 0x363454u;
    SET_GPR_U32(ctx, 31, 0x36345Cu);
    ctx->pc = 0x363458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x363454u;
            // 0x363458: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36345Cu; }
        if (ctx->pc != 0x36345Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36345Cu; }
        if (ctx->pc != 0x36345Cu) { return; }
    }
    ctx->pc = 0x36345Cu;
label_36345c:
    // 0x36345c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x36345cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_363460:
    // 0x363460: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x363460u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_363464:
    // 0x363464: 0xc04cc90  jal         func_133240
label_363468:
    if (ctx->pc == 0x363468u) {
        ctx->pc = 0x363468u;
            // 0x363468: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36346Cu;
        goto label_36346c;
    }
    ctx->pc = 0x363464u;
    SET_GPR_U32(ctx, 31, 0x36346Cu);
    ctx->pc = 0x363468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x363464u;
            // 0x363468: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36346Cu; }
        if (ctx->pc != 0x36346Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36346Cu; }
        if (ctx->pc != 0x36346Cu) { return; }
    }
    ctx->pc = 0x36346Cu;
label_36346c:
    // 0x36346c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x36346cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_363470:
    // 0x363470: 0xc04cc44  jal         func_133110
label_363474:
    if (ctx->pc == 0x363474u) {
        ctx->pc = 0x363474u;
            // 0x363474: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x363478u;
        goto label_363478;
    }
    ctx->pc = 0x363470u;
    SET_GPR_U32(ctx, 31, 0x363478u);
    ctx->pc = 0x363474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x363470u;
            // 0x363474: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363478u; }
        if (ctx->pc != 0x363478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363478u; }
        if (ctx->pc != 0x363478u) { return; }
    }
    ctx->pc = 0x363478u;
label_363478:
    // 0x363478: 0xc0b6d5c  jal         func_2DB570
label_36347c:
    if (ctx->pc == 0x36347Cu) {
        ctx->pc = 0x36347Cu;
            // 0x36347c: 0x8e440074  lw          $a0, 0x74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
        ctx->pc = 0x363480u;
        goto label_363480;
    }
    ctx->pc = 0x363478u;
    SET_GPR_U32(ctx, 31, 0x363480u);
    ctx->pc = 0x36347Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x363478u;
            // 0x36347c: 0x8e440074  lw          $a0, 0x74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB570u;
    if (runtime->hasFunction(0x2DB570u)) {
        auto targetFn = runtime->lookupFunction(0x2DB570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363480u; }
        if (ctx->pc != 0x363480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB570_0x2db570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363480u; }
        if (ctx->pc != 0x363480u) { return; }
    }
    ctx->pc = 0x363480u;
label_363480:
    // 0x363480: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x363480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_363484:
    // 0x363484: 0xc04cc04  jal         func_133010
label_363488:
    if (ctx->pc == 0x363488u) {
        ctx->pc = 0x363488u;
            // 0x363488: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x36348Cu;
        goto label_36348c;
    }
    ctx->pc = 0x363484u;
    SET_GPR_U32(ctx, 31, 0x36348Cu);
    ctx->pc = 0x363488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x363484u;
            // 0x363488: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36348Cu; }
        if (ctx->pc != 0x36348Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36348Cu; }
        if (ctx->pc != 0x36348Cu) { return; }
    }
    ctx->pc = 0x36348Cu;
label_36348c:
    // 0x36348c: 0xc077280  jal         func_1DCA00
label_363490:
    if (ctx->pc == 0x363490u) {
        ctx->pc = 0x363490u;
            // 0x363490: 0x8e440074  lw          $a0, 0x74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
        ctx->pc = 0x363494u;
        goto label_363494;
    }
    ctx->pc = 0x36348Cu;
    SET_GPR_U32(ctx, 31, 0x363494u);
    ctx->pc = 0x363490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36348Cu;
            // 0x363490: 0x8e440074  lw          $a0, 0x74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA00u;
    if (runtime->hasFunction(0x1DCA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363494u; }
        if (ctx->pc != 0x363494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA00_0x1dca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363494u; }
        if (ctx->pc != 0x363494u) { return; }
    }
    ctx->pc = 0x363494u;
label_363494:
    // 0x363494: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x363494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_363498:
    // 0x363498: 0xc075318  jal         func_1D4C60
label_36349c:
    if (ctx->pc == 0x36349Cu) {
        ctx->pc = 0x36349Cu;
            // 0x36349c: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x3634A0u;
        goto label_3634a0;
    }
    ctx->pc = 0x363498u;
    SET_GPR_U32(ctx, 31, 0x3634A0u);
    ctx->pc = 0x36349Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x363498u;
            // 0x36349c: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3634A0u; }
        if (ctx->pc != 0x3634A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3634A0u; }
        if (ctx->pc != 0x3634A0u) { return; }
    }
    ctx->pc = 0x3634A0u;
label_3634a0:
    // 0x3634a0: 0xc0c05dc  jal         func_301770
label_3634a4:
    if (ctx->pc == 0x3634A4u) {
        ctx->pc = 0x3634A4u;
            // 0x3634a4: 0x8e440074  lw          $a0, 0x74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
        ctx->pc = 0x3634A8u;
        goto label_3634a8;
    }
    ctx->pc = 0x3634A0u;
    SET_GPR_U32(ctx, 31, 0x3634A8u);
    ctx->pc = 0x3634A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3634A0u;
            // 0x3634a4: 0x8e440074  lw          $a0, 0x74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301770u;
    if (runtime->hasFunction(0x301770u)) {
        auto targetFn = runtime->lookupFunction(0x301770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3634A8u; }
        if (ctx->pc != 0x3634A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301770_0x301770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3634A8u; }
        if (ctx->pc != 0x3634A8u) { return; }
    }
    ctx->pc = 0x3634A8u;
label_3634a8:
    // 0x3634a8: 0x8e440074  lw          $a0, 0x74($s2)
    ctx->pc = 0x3634a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
label_3634ac:
    // 0x3634ac: 0xc077280  jal         func_1DCA00
label_3634b0:
    if (ctx->pc == 0x3634B0u) {
        ctx->pc = 0x3634B0u;
            // 0x3634b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3634B4u;
        goto label_3634b4;
    }
    ctx->pc = 0x3634ACu;
    SET_GPR_U32(ctx, 31, 0x3634B4u);
    ctx->pc = 0x3634B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3634ACu;
            // 0x3634b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA00u;
    if (runtime->hasFunction(0x1DCA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3634B4u; }
        if (ctx->pc != 0x3634B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA00_0x1dca00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3634B4u; }
        if (ctx->pc != 0x3634B4u) { return; }
    }
    ctx->pc = 0x3634B4u;
label_3634b4:
    // 0x3634b4: 0xc07727c  jal         func_1DC9F0
label_3634b8:
    if (ctx->pc == 0x3634B8u) {
        ctx->pc = 0x3634B8u;
            // 0x3634b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3634BCu;
        goto label_3634bc;
    }
    ctx->pc = 0x3634B4u;
    SET_GPR_U32(ctx, 31, 0x3634BCu);
    ctx->pc = 0x3634B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3634B4u;
            // 0x3634b8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC9F0u;
    if (runtime->hasFunction(0x1DC9F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3634BCu; }
        if (ctx->pc != 0x3634BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC9F0_0x1dc9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3634BCu; }
        if (ctx->pc != 0x3634BCu) { return; }
    }
    ctx->pc = 0x3634BCu;
label_3634bc:
    // 0x3634bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3634bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3634c0:
    // 0x3634c0: 0xc0c05e0  jal         func_301780
label_3634c4:
    if (ctx->pc == 0x3634C4u) {
        ctx->pc = 0x3634C4u;
            // 0x3634c4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3634C8u;
        goto label_3634c8;
    }
    ctx->pc = 0x3634C0u;
    SET_GPR_U32(ctx, 31, 0x3634C8u);
    ctx->pc = 0x3634C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3634C0u;
            // 0x3634c4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301780u;
    if (runtime->hasFunction(0x301780u)) {
        auto targetFn = runtime->lookupFunction(0x301780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3634C8u; }
        if (ctx->pc != 0x3634C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301780_0x301780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3634C8u; }
        if (ctx->pc != 0x3634C8u) { return; }
    }
    ctx->pc = 0x3634C8u;
label_3634c8:
    // 0x3634c8: 0xc0d8dac  jal         func_3636B0
label_3634cc:
    if (ctx->pc == 0x3634CCu) {
        ctx->pc = 0x3634CCu;
            // 0x3634cc: 0x8e440074  lw          $a0, 0x74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
        ctx->pc = 0x3634D0u;
        goto label_3634d0;
    }
    ctx->pc = 0x3634C8u;
    SET_GPR_U32(ctx, 31, 0x3634D0u);
    ctx->pc = 0x3634CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3634C8u;
            // 0x3634cc: 0x8e440074  lw          $a0, 0x74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3636B0u;
    if (runtime->hasFunction(0x3636B0u)) {
        auto targetFn = runtime->lookupFunction(0x3636B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3634D0u; }
        if (ctx->pc != 0x3634D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003636B0_0x3636b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3634D0u; }
        if (ctx->pc != 0x3634D0u) { return; }
    }
    ctx->pc = 0x3634D0u;
label_3634d0:
    // 0x3634d0: 0x10000015  b           . + 4 + (0x15 << 2)
label_3634d4:
    if (ctx->pc == 0x3634D4u) {
        ctx->pc = 0x3634D8u;
        goto label_3634d8;
    }
    ctx->pc = 0x3634D0u;
    {
        const bool branch_taken_0x3634d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3634d0) {
            ctx->pc = 0x363528u;
            goto label_363528;
        }
    }
    ctx->pc = 0x3634D8u;
label_3634d8:
    // 0x3634d8: 0xc0d4108  jal         func_350420
label_3634dc:
    if (ctx->pc == 0x3634DCu) {
        ctx->pc = 0x3634E0u;
        goto label_3634e0;
    }
    ctx->pc = 0x3634D8u;
    SET_GPR_U32(ctx, 31, 0x3634E0u);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3634E0u; }
        if (ctx->pc != 0x3634E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3634E0u; }
        if (ctx->pc != 0x3634E0u) { return; }
    }
    ctx->pc = 0x3634E0u;
label_3634e0:
    // 0x3634e0: 0xc0b36b4  jal         func_2CDAD0
label_3634e4:
    if (ctx->pc == 0x3634E4u) {
        ctx->pc = 0x3634E4u;
            // 0x3634e4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3634E8u;
        goto label_3634e8;
    }
    ctx->pc = 0x3634E0u;
    SET_GPR_U32(ctx, 31, 0x3634E8u);
    ctx->pc = 0x3634E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3634E0u;
            // 0x3634e4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3634E8u; }
        if (ctx->pc != 0x3634E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3634E8u; }
        if (ctx->pc != 0x3634E8u) { return; }
    }
    ctx->pc = 0x3634E8u;
label_3634e8:
    // 0x3634e8: 0xc0b9c64  jal         func_2E7190
label_3634ec:
    if (ctx->pc == 0x3634ECu) {
        ctx->pc = 0x3634ECu;
            // 0x3634ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3634F0u;
        goto label_3634f0;
    }
    ctx->pc = 0x3634E8u;
    SET_GPR_U32(ctx, 31, 0x3634F0u);
    ctx->pc = 0x3634ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3634E8u;
            // 0x3634ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3634F0u; }
        if (ctx->pc != 0x3634F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3634F0u; }
        if (ctx->pc != 0x3634F0u) { return; }
    }
    ctx->pc = 0x3634F0u;
label_3634f0:
    // 0x3634f0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3634f0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3634f4:
    // 0x3634f4: 0xc0d4104  jal         func_350410
label_3634f8:
    if (ctx->pc == 0x3634F8u) {
        ctx->pc = 0x3634F8u;
            // 0x3634f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3634FCu;
        goto label_3634fc;
    }
    ctx->pc = 0x3634F4u;
    SET_GPR_U32(ctx, 31, 0x3634FCu);
    ctx->pc = 0x3634F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3634F4u;
            // 0x3634f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3634FCu; }
        if (ctx->pc != 0x3634FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3634FCu; }
        if (ctx->pc != 0x3634FCu) { return; }
    }
    ctx->pc = 0x3634FCu;
label_3634fc:
    // 0x3634fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3634fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_363500:
    // 0x363500: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x363500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_363504:
    // 0x363504: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x363504u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_363508:
    // 0x363508: 0x27a70120  addiu       $a3, $sp, 0x120
    ctx->pc = 0x363508u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_36350c:
    // 0x36350c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x36350cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_363510:
    // 0x363510: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x363510u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_363514:
    // 0x363514: 0xc0d40ac  jal         func_3502B0
label_363518:
    if (ctx->pc == 0x363518u) {
        ctx->pc = 0x363518u;
            // 0x363518: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x36351Cu;
        goto label_36351c;
    }
    ctx->pc = 0x363514u;
    SET_GPR_U32(ctx, 31, 0x36351Cu);
    ctx->pc = 0x363518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x363514u;
            // 0x363518: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36351Cu; }
        if (ctx->pc != 0x36351Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36351Cu; }
        if (ctx->pc != 0x36351Cu) { return; }
    }
    ctx->pc = 0x36351Cu;
label_36351c:
    // 0x36351c: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x36351cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_363520:
    // 0x363520: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
label_363524:
    if (ctx->pc == 0x363524u) {
        ctx->pc = 0x363524u;
            // 0x363524: 0xae420044  sw          $v0, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x363528u;
        goto label_363528;
    }
    ctx->pc = 0x363520u;
    {
        const bool branch_taken_0x363520 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x363524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x363520u;
            // 0x363524: 0xae420044  sw          $v0, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363520) {
            ctx->pc = 0x363590u;
            goto label_363590;
        }
    }
    ctx->pc = 0x363528u;
label_363528:
    // 0x363528: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x363528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_36352c:
    // 0x36352c: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x36352cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_363530:
    // 0x363530: 0xc0d8d84  jal         func_363610
label_363534:
    if (ctx->pc == 0x363534u) {
        ctx->pc = 0x363534u;
            // 0x363534: 0x27a6016c  addiu       $a2, $sp, 0x16C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
        ctx->pc = 0x363538u;
        goto label_363538;
    }
    ctx->pc = 0x363530u;
    SET_GPR_U32(ctx, 31, 0x363538u);
    ctx->pc = 0x363534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x363530u;
            // 0x363534: 0x27a6016c  addiu       $a2, $sp, 0x16C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
        ctx->in_delay_slot = false;
    ctx->pc = 0x363610u;
    if (runtime->hasFunction(0x363610u)) {
        auto targetFn = runtime->lookupFunction(0x363610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363538u; }
        if (ctx->pc != 0x363538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00363610_0x363610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363538u; }
        if (ctx->pc != 0x363538u) { return; }
    }
    ctx->pc = 0x363538u;
label_363538:
    // 0x363538: 0x8fa4016c  lw          $a0, 0x16C($sp)
    ctx->pc = 0x363538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_36353c:
    // 0x36353c: 0x8e650028  lw          $a1, 0x28($s3)
    ctx->pc = 0x36353cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_363540:
    // 0x363540: 0xc04e4a4  jal         func_139290
label_363544:
    if (ctx->pc == 0x363544u) {
        ctx->pc = 0x363544u;
            // 0x363544: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x363548u;
        goto label_363548;
    }
    ctx->pc = 0x363540u;
    SET_GPR_U32(ctx, 31, 0x363548u);
    ctx->pc = 0x363544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x363540u;
            // 0x363544: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363548u; }
        if (ctx->pc != 0x363548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363548u; }
        if (ctx->pc != 0x363548u) { return; }
    }
    ctx->pc = 0x363548u;
label_363548:
    // 0x363548: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x363548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_36354c:
    // 0x36354c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x36354cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_363550:
    // 0x363550: 0xc04cd60  jal         func_133580
label_363554:
    if (ctx->pc == 0x363554u) {
        ctx->pc = 0x363554u;
            // 0x363554: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x363558u;
        goto label_363558;
    }
    ctx->pc = 0x363550u;
    SET_GPR_U32(ctx, 31, 0x363558u);
    ctx->pc = 0x363554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x363550u;
            // 0x363554: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363558u; }
        if (ctx->pc != 0x363558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363558u; }
        if (ctx->pc != 0x363558u) { return; }
    }
    ctx->pc = 0x363558u;
label_363558:
    // 0x363558: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x363558u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_36355c:
    // 0x36355c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x36355cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_363560:
    // 0x363560: 0x320f809  jalr        $t9
label_363564:
    if (ctx->pc == 0x363564u) {
        ctx->pc = 0x363564u;
            // 0x363564: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x363568u;
        goto label_363568;
    }
    ctx->pc = 0x363560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x363568u);
        ctx->pc = 0x363564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x363560u;
            // 0x363564: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x363568u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x363568u; }
            if (ctx->pc != 0x363568u) { return; }
        }
        }
    }
    ctx->pc = 0x363568u;
label_363568:
    // 0x363568: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x363568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_36356c:
    // 0x36356c: 0xc64c007c  lwc1        $f12, 0x7C($s2)
    ctx->pc = 0x36356cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_363570:
    // 0x363570: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x363570u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_363574:
    // 0x363574: 0x8fa5016c  lw          $a1, 0x16C($sp)
    ctx->pc = 0x363574u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_363578:
    // 0x363578: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x363578u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_36357c:
    // 0x36357c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x36357cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_363580:
    // 0x363580: 0x27a80120  addiu       $t0, $sp, 0x120
    ctx->pc = 0x363580u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_363584:
    // 0x363584: 0x2529e350  addiu       $t1, $t1, -0x1CB0
    ctx->pc = 0x363584u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
label_363588:
    // 0x363588: 0xc04cff4  jal         func_133FD0
label_36358c:
    if (ctx->pc == 0x36358Cu) {
        ctx->pc = 0x36358Cu;
            // 0x36358c: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x363590u;
        goto label_363590;
    }
    ctx->pc = 0x363588u;
    SET_GPR_U32(ctx, 31, 0x363590u);
    ctx->pc = 0x36358Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x363588u;
            // 0x36358c: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363590u; }
        if (ctx->pc != 0x363590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x363590u; }
        if (ctx->pc != 0x363590u) { return; }
    }
    ctx->pc = 0x363590u;
label_363590:
    // 0x363590: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x363590u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_363594:
    // 0x363594: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x363594u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_363598:
    // 0x363598: 0x283182b  sltu        $v1, $s4, $v1
    ctx->pc = 0x363598u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_36359c:
    // 0x36359c: 0x1460ff76  bnez        $v1, . + 4 + (-0x8A << 2)
label_3635a0:
    if (ctx->pc == 0x3635A0u) {
        ctx->pc = 0x3635A0u;
            // 0x3635a0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x3635A4u;
        goto label_3635a4;
    }
    ctx->pc = 0x36359Cu;
    {
        const bool branch_taken_0x36359c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3635A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36359Cu;
            // 0x3635a0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36359c) {
            ctx->pc = 0x363378u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_363378;
        }
    }
    ctx->pc = 0x3635A4u;
label_3635a4:
    // 0x3635a4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3635a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3635a8:
    // 0x3635a8: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x3635a8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_3635ac:
    // 0x3635ac: 0x19200008  blez        $t1, . + 4 + (0x8 << 2)
label_3635b0:
    if (ctx->pc == 0x3635B0u) {
        ctx->pc = 0x3635B0u;
            // 0x3635b0: 0x8fc40000  lw          $a0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->pc = 0x3635B4u;
        goto label_3635b4;
    }
    ctx->pc = 0x3635ACu;
    {
        const bool branch_taken_0x3635ac = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x3635B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3635ACu;
            // 0x3635b0: 0x8fc40000  lw          $a0, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3635ac) {
            ctx->pc = 0x3635D0u;
            goto label_3635d0;
        }
    }
    ctx->pc = 0x3635B4u;
label_3635b4:
    // 0x3635b4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3635b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3635b8:
    // 0x3635b8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3635b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3635bc:
    // 0x3635bc: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x3635bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_3635c0:
    // 0x3635c0: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x3635c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_3635c4:
    // 0x3635c4: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x3635c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_3635c8:
    // 0x3635c8: 0xc055754  jal         func_155D50
label_3635cc:
    if (ctx->pc == 0x3635CCu) {
        ctx->pc = 0x3635CCu;
            // 0x3635cc: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x3635D0u;
        goto label_3635d0;
    }
    ctx->pc = 0x3635C8u;
    SET_GPR_U32(ctx, 31, 0x3635D0u);
    ctx->pc = 0x3635CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3635C8u;
            // 0x3635cc: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155D50u;
    if (runtime->hasFunction(0x155D50u)) {
        auto targetFn = runtime->lookupFunction(0x155D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3635D0u; }
        if (ctx->pc != 0x3635D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155D50_0x155d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3635D0u; }
        if (ctx->pc != 0x3635D0u) { return; }
    }
    ctx->pc = 0x3635D0u;
label_3635d0:
    // 0x3635d0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x3635d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_3635d4:
    // 0x3635d4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3635d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3635d8:
    // 0x3635d8: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x3635d8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3635dc:
    // 0x3635dc: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x3635dcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3635e0:
    // 0x3635e0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3635e0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3635e4:
    // 0x3635e4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3635e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3635e8:
    // 0x3635e8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3635e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3635ec:
    // 0x3635ec: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3635ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3635f0:
    // 0x3635f0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3635f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3635f4:
    // 0x3635f4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3635f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3635f8:
    // 0x3635f8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3635f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3635fc:
    // 0x3635fc: 0x3e00008  jr          $ra
label_363600:
    if (ctx->pc == 0x363600u) {
        ctx->pc = 0x363600u;
            // 0x363600: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x363604u;
        goto label_363604;
    }
    ctx->pc = 0x3635FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x363600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3635FCu;
            // 0x363600: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x363604u;
label_363604:
    // 0x363604: 0x0  nop
    ctx->pc = 0x363604u;
    // NOP
label_363608:
    // 0x363608: 0x0  nop
    ctx->pc = 0x363608u;
    // NOP
label_36360c:
    // 0x36360c: 0x0  nop
    ctx->pc = 0x36360cu;
    // NOP
}
