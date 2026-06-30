#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00394E00
// Address: 0x394e00 - 0x3961d0
void sub_00394E00_0x394e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00394E00_0x394e00");
#endif

    switch (ctx->pc) {
        case 0x394e00u: goto label_394e00;
        case 0x394e04u: goto label_394e04;
        case 0x394e08u: goto label_394e08;
        case 0x394e0cu: goto label_394e0c;
        case 0x394e10u: goto label_394e10;
        case 0x394e14u: goto label_394e14;
        case 0x394e18u: goto label_394e18;
        case 0x394e1cu: goto label_394e1c;
        case 0x394e20u: goto label_394e20;
        case 0x394e24u: goto label_394e24;
        case 0x394e28u: goto label_394e28;
        case 0x394e2cu: goto label_394e2c;
        case 0x394e30u: goto label_394e30;
        case 0x394e34u: goto label_394e34;
        case 0x394e38u: goto label_394e38;
        case 0x394e3cu: goto label_394e3c;
        case 0x394e40u: goto label_394e40;
        case 0x394e44u: goto label_394e44;
        case 0x394e48u: goto label_394e48;
        case 0x394e4cu: goto label_394e4c;
        case 0x394e50u: goto label_394e50;
        case 0x394e54u: goto label_394e54;
        case 0x394e58u: goto label_394e58;
        case 0x394e5cu: goto label_394e5c;
        case 0x394e60u: goto label_394e60;
        case 0x394e64u: goto label_394e64;
        case 0x394e68u: goto label_394e68;
        case 0x394e6cu: goto label_394e6c;
        case 0x394e70u: goto label_394e70;
        case 0x394e74u: goto label_394e74;
        case 0x394e78u: goto label_394e78;
        case 0x394e7cu: goto label_394e7c;
        case 0x394e80u: goto label_394e80;
        case 0x394e84u: goto label_394e84;
        case 0x394e88u: goto label_394e88;
        case 0x394e8cu: goto label_394e8c;
        case 0x394e90u: goto label_394e90;
        case 0x394e94u: goto label_394e94;
        case 0x394e98u: goto label_394e98;
        case 0x394e9cu: goto label_394e9c;
        case 0x394ea0u: goto label_394ea0;
        case 0x394ea4u: goto label_394ea4;
        case 0x394ea8u: goto label_394ea8;
        case 0x394eacu: goto label_394eac;
        case 0x394eb0u: goto label_394eb0;
        case 0x394eb4u: goto label_394eb4;
        case 0x394eb8u: goto label_394eb8;
        case 0x394ebcu: goto label_394ebc;
        case 0x394ec0u: goto label_394ec0;
        case 0x394ec4u: goto label_394ec4;
        case 0x394ec8u: goto label_394ec8;
        case 0x394eccu: goto label_394ecc;
        case 0x394ed0u: goto label_394ed0;
        case 0x394ed4u: goto label_394ed4;
        case 0x394ed8u: goto label_394ed8;
        case 0x394edcu: goto label_394edc;
        case 0x394ee0u: goto label_394ee0;
        case 0x394ee4u: goto label_394ee4;
        case 0x394ee8u: goto label_394ee8;
        case 0x394eecu: goto label_394eec;
        case 0x394ef0u: goto label_394ef0;
        case 0x394ef4u: goto label_394ef4;
        case 0x394ef8u: goto label_394ef8;
        case 0x394efcu: goto label_394efc;
        case 0x394f00u: goto label_394f00;
        case 0x394f04u: goto label_394f04;
        case 0x394f08u: goto label_394f08;
        case 0x394f0cu: goto label_394f0c;
        case 0x394f10u: goto label_394f10;
        case 0x394f14u: goto label_394f14;
        case 0x394f18u: goto label_394f18;
        case 0x394f1cu: goto label_394f1c;
        case 0x394f20u: goto label_394f20;
        case 0x394f24u: goto label_394f24;
        case 0x394f28u: goto label_394f28;
        case 0x394f2cu: goto label_394f2c;
        case 0x394f30u: goto label_394f30;
        case 0x394f34u: goto label_394f34;
        case 0x394f38u: goto label_394f38;
        case 0x394f3cu: goto label_394f3c;
        case 0x394f40u: goto label_394f40;
        case 0x394f44u: goto label_394f44;
        case 0x394f48u: goto label_394f48;
        case 0x394f4cu: goto label_394f4c;
        case 0x394f50u: goto label_394f50;
        case 0x394f54u: goto label_394f54;
        case 0x394f58u: goto label_394f58;
        case 0x394f5cu: goto label_394f5c;
        case 0x394f60u: goto label_394f60;
        case 0x394f64u: goto label_394f64;
        case 0x394f68u: goto label_394f68;
        case 0x394f6cu: goto label_394f6c;
        case 0x394f70u: goto label_394f70;
        case 0x394f74u: goto label_394f74;
        case 0x394f78u: goto label_394f78;
        case 0x394f7cu: goto label_394f7c;
        case 0x394f80u: goto label_394f80;
        case 0x394f84u: goto label_394f84;
        case 0x394f88u: goto label_394f88;
        case 0x394f8cu: goto label_394f8c;
        case 0x394f90u: goto label_394f90;
        case 0x394f94u: goto label_394f94;
        case 0x394f98u: goto label_394f98;
        case 0x394f9cu: goto label_394f9c;
        case 0x394fa0u: goto label_394fa0;
        case 0x394fa4u: goto label_394fa4;
        case 0x394fa8u: goto label_394fa8;
        case 0x394facu: goto label_394fac;
        case 0x394fb0u: goto label_394fb0;
        case 0x394fb4u: goto label_394fb4;
        case 0x394fb8u: goto label_394fb8;
        case 0x394fbcu: goto label_394fbc;
        case 0x394fc0u: goto label_394fc0;
        case 0x394fc4u: goto label_394fc4;
        case 0x394fc8u: goto label_394fc8;
        case 0x394fccu: goto label_394fcc;
        case 0x394fd0u: goto label_394fd0;
        case 0x394fd4u: goto label_394fd4;
        case 0x394fd8u: goto label_394fd8;
        case 0x394fdcu: goto label_394fdc;
        case 0x394fe0u: goto label_394fe0;
        case 0x394fe4u: goto label_394fe4;
        case 0x394fe8u: goto label_394fe8;
        case 0x394fecu: goto label_394fec;
        case 0x394ff0u: goto label_394ff0;
        case 0x394ff4u: goto label_394ff4;
        case 0x394ff8u: goto label_394ff8;
        case 0x394ffcu: goto label_394ffc;
        case 0x395000u: goto label_395000;
        case 0x395004u: goto label_395004;
        case 0x395008u: goto label_395008;
        case 0x39500cu: goto label_39500c;
        case 0x395010u: goto label_395010;
        case 0x395014u: goto label_395014;
        case 0x395018u: goto label_395018;
        case 0x39501cu: goto label_39501c;
        case 0x395020u: goto label_395020;
        case 0x395024u: goto label_395024;
        case 0x395028u: goto label_395028;
        case 0x39502cu: goto label_39502c;
        case 0x395030u: goto label_395030;
        case 0x395034u: goto label_395034;
        case 0x395038u: goto label_395038;
        case 0x39503cu: goto label_39503c;
        case 0x395040u: goto label_395040;
        case 0x395044u: goto label_395044;
        case 0x395048u: goto label_395048;
        case 0x39504cu: goto label_39504c;
        case 0x395050u: goto label_395050;
        case 0x395054u: goto label_395054;
        case 0x395058u: goto label_395058;
        case 0x39505cu: goto label_39505c;
        case 0x395060u: goto label_395060;
        case 0x395064u: goto label_395064;
        case 0x395068u: goto label_395068;
        case 0x39506cu: goto label_39506c;
        case 0x395070u: goto label_395070;
        case 0x395074u: goto label_395074;
        case 0x395078u: goto label_395078;
        case 0x39507cu: goto label_39507c;
        case 0x395080u: goto label_395080;
        case 0x395084u: goto label_395084;
        case 0x395088u: goto label_395088;
        case 0x39508cu: goto label_39508c;
        case 0x395090u: goto label_395090;
        case 0x395094u: goto label_395094;
        case 0x395098u: goto label_395098;
        case 0x39509cu: goto label_39509c;
        case 0x3950a0u: goto label_3950a0;
        case 0x3950a4u: goto label_3950a4;
        case 0x3950a8u: goto label_3950a8;
        case 0x3950acu: goto label_3950ac;
        case 0x3950b0u: goto label_3950b0;
        case 0x3950b4u: goto label_3950b4;
        case 0x3950b8u: goto label_3950b8;
        case 0x3950bcu: goto label_3950bc;
        case 0x3950c0u: goto label_3950c0;
        case 0x3950c4u: goto label_3950c4;
        case 0x3950c8u: goto label_3950c8;
        case 0x3950ccu: goto label_3950cc;
        case 0x3950d0u: goto label_3950d0;
        case 0x3950d4u: goto label_3950d4;
        case 0x3950d8u: goto label_3950d8;
        case 0x3950dcu: goto label_3950dc;
        case 0x3950e0u: goto label_3950e0;
        case 0x3950e4u: goto label_3950e4;
        case 0x3950e8u: goto label_3950e8;
        case 0x3950ecu: goto label_3950ec;
        case 0x3950f0u: goto label_3950f0;
        case 0x3950f4u: goto label_3950f4;
        case 0x3950f8u: goto label_3950f8;
        case 0x3950fcu: goto label_3950fc;
        case 0x395100u: goto label_395100;
        case 0x395104u: goto label_395104;
        case 0x395108u: goto label_395108;
        case 0x39510cu: goto label_39510c;
        case 0x395110u: goto label_395110;
        case 0x395114u: goto label_395114;
        case 0x395118u: goto label_395118;
        case 0x39511cu: goto label_39511c;
        case 0x395120u: goto label_395120;
        case 0x395124u: goto label_395124;
        case 0x395128u: goto label_395128;
        case 0x39512cu: goto label_39512c;
        case 0x395130u: goto label_395130;
        case 0x395134u: goto label_395134;
        case 0x395138u: goto label_395138;
        case 0x39513cu: goto label_39513c;
        case 0x395140u: goto label_395140;
        case 0x395144u: goto label_395144;
        case 0x395148u: goto label_395148;
        case 0x39514cu: goto label_39514c;
        case 0x395150u: goto label_395150;
        case 0x395154u: goto label_395154;
        case 0x395158u: goto label_395158;
        case 0x39515cu: goto label_39515c;
        case 0x395160u: goto label_395160;
        case 0x395164u: goto label_395164;
        case 0x395168u: goto label_395168;
        case 0x39516cu: goto label_39516c;
        case 0x395170u: goto label_395170;
        case 0x395174u: goto label_395174;
        case 0x395178u: goto label_395178;
        case 0x39517cu: goto label_39517c;
        case 0x395180u: goto label_395180;
        case 0x395184u: goto label_395184;
        case 0x395188u: goto label_395188;
        case 0x39518cu: goto label_39518c;
        case 0x395190u: goto label_395190;
        case 0x395194u: goto label_395194;
        case 0x395198u: goto label_395198;
        case 0x39519cu: goto label_39519c;
        case 0x3951a0u: goto label_3951a0;
        case 0x3951a4u: goto label_3951a4;
        case 0x3951a8u: goto label_3951a8;
        case 0x3951acu: goto label_3951ac;
        case 0x3951b0u: goto label_3951b0;
        case 0x3951b4u: goto label_3951b4;
        case 0x3951b8u: goto label_3951b8;
        case 0x3951bcu: goto label_3951bc;
        case 0x3951c0u: goto label_3951c0;
        case 0x3951c4u: goto label_3951c4;
        case 0x3951c8u: goto label_3951c8;
        case 0x3951ccu: goto label_3951cc;
        case 0x3951d0u: goto label_3951d0;
        case 0x3951d4u: goto label_3951d4;
        case 0x3951d8u: goto label_3951d8;
        case 0x3951dcu: goto label_3951dc;
        case 0x3951e0u: goto label_3951e0;
        case 0x3951e4u: goto label_3951e4;
        case 0x3951e8u: goto label_3951e8;
        case 0x3951ecu: goto label_3951ec;
        case 0x3951f0u: goto label_3951f0;
        case 0x3951f4u: goto label_3951f4;
        case 0x3951f8u: goto label_3951f8;
        case 0x3951fcu: goto label_3951fc;
        case 0x395200u: goto label_395200;
        case 0x395204u: goto label_395204;
        case 0x395208u: goto label_395208;
        case 0x39520cu: goto label_39520c;
        case 0x395210u: goto label_395210;
        case 0x395214u: goto label_395214;
        case 0x395218u: goto label_395218;
        case 0x39521cu: goto label_39521c;
        case 0x395220u: goto label_395220;
        case 0x395224u: goto label_395224;
        case 0x395228u: goto label_395228;
        case 0x39522cu: goto label_39522c;
        case 0x395230u: goto label_395230;
        case 0x395234u: goto label_395234;
        case 0x395238u: goto label_395238;
        case 0x39523cu: goto label_39523c;
        case 0x395240u: goto label_395240;
        case 0x395244u: goto label_395244;
        case 0x395248u: goto label_395248;
        case 0x39524cu: goto label_39524c;
        case 0x395250u: goto label_395250;
        case 0x395254u: goto label_395254;
        case 0x395258u: goto label_395258;
        case 0x39525cu: goto label_39525c;
        case 0x395260u: goto label_395260;
        case 0x395264u: goto label_395264;
        case 0x395268u: goto label_395268;
        case 0x39526cu: goto label_39526c;
        case 0x395270u: goto label_395270;
        case 0x395274u: goto label_395274;
        case 0x395278u: goto label_395278;
        case 0x39527cu: goto label_39527c;
        case 0x395280u: goto label_395280;
        case 0x395284u: goto label_395284;
        case 0x395288u: goto label_395288;
        case 0x39528cu: goto label_39528c;
        case 0x395290u: goto label_395290;
        case 0x395294u: goto label_395294;
        case 0x395298u: goto label_395298;
        case 0x39529cu: goto label_39529c;
        case 0x3952a0u: goto label_3952a0;
        case 0x3952a4u: goto label_3952a4;
        case 0x3952a8u: goto label_3952a8;
        case 0x3952acu: goto label_3952ac;
        case 0x3952b0u: goto label_3952b0;
        case 0x3952b4u: goto label_3952b4;
        case 0x3952b8u: goto label_3952b8;
        case 0x3952bcu: goto label_3952bc;
        case 0x3952c0u: goto label_3952c0;
        case 0x3952c4u: goto label_3952c4;
        case 0x3952c8u: goto label_3952c8;
        case 0x3952ccu: goto label_3952cc;
        case 0x3952d0u: goto label_3952d0;
        case 0x3952d4u: goto label_3952d4;
        case 0x3952d8u: goto label_3952d8;
        case 0x3952dcu: goto label_3952dc;
        case 0x3952e0u: goto label_3952e0;
        case 0x3952e4u: goto label_3952e4;
        case 0x3952e8u: goto label_3952e8;
        case 0x3952ecu: goto label_3952ec;
        case 0x3952f0u: goto label_3952f0;
        case 0x3952f4u: goto label_3952f4;
        case 0x3952f8u: goto label_3952f8;
        case 0x3952fcu: goto label_3952fc;
        case 0x395300u: goto label_395300;
        case 0x395304u: goto label_395304;
        case 0x395308u: goto label_395308;
        case 0x39530cu: goto label_39530c;
        case 0x395310u: goto label_395310;
        case 0x395314u: goto label_395314;
        case 0x395318u: goto label_395318;
        case 0x39531cu: goto label_39531c;
        case 0x395320u: goto label_395320;
        case 0x395324u: goto label_395324;
        case 0x395328u: goto label_395328;
        case 0x39532cu: goto label_39532c;
        case 0x395330u: goto label_395330;
        case 0x395334u: goto label_395334;
        case 0x395338u: goto label_395338;
        case 0x39533cu: goto label_39533c;
        case 0x395340u: goto label_395340;
        case 0x395344u: goto label_395344;
        case 0x395348u: goto label_395348;
        case 0x39534cu: goto label_39534c;
        case 0x395350u: goto label_395350;
        case 0x395354u: goto label_395354;
        case 0x395358u: goto label_395358;
        case 0x39535cu: goto label_39535c;
        case 0x395360u: goto label_395360;
        case 0x395364u: goto label_395364;
        case 0x395368u: goto label_395368;
        case 0x39536cu: goto label_39536c;
        case 0x395370u: goto label_395370;
        case 0x395374u: goto label_395374;
        case 0x395378u: goto label_395378;
        case 0x39537cu: goto label_39537c;
        case 0x395380u: goto label_395380;
        case 0x395384u: goto label_395384;
        case 0x395388u: goto label_395388;
        case 0x39538cu: goto label_39538c;
        case 0x395390u: goto label_395390;
        case 0x395394u: goto label_395394;
        case 0x395398u: goto label_395398;
        case 0x39539cu: goto label_39539c;
        case 0x3953a0u: goto label_3953a0;
        case 0x3953a4u: goto label_3953a4;
        case 0x3953a8u: goto label_3953a8;
        case 0x3953acu: goto label_3953ac;
        case 0x3953b0u: goto label_3953b0;
        case 0x3953b4u: goto label_3953b4;
        case 0x3953b8u: goto label_3953b8;
        case 0x3953bcu: goto label_3953bc;
        case 0x3953c0u: goto label_3953c0;
        case 0x3953c4u: goto label_3953c4;
        case 0x3953c8u: goto label_3953c8;
        case 0x3953ccu: goto label_3953cc;
        case 0x3953d0u: goto label_3953d0;
        case 0x3953d4u: goto label_3953d4;
        case 0x3953d8u: goto label_3953d8;
        case 0x3953dcu: goto label_3953dc;
        case 0x3953e0u: goto label_3953e0;
        case 0x3953e4u: goto label_3953e4;
        case 0x3953e8u: goto label_3953e8;
        case 0x3953ecu: goto label_3953ec;
        case 0x3953f0u: goto label_3953f0;
        case 0x3953f4u: goto label_3953f4;
        case 0x3953f8u: goto label_3953f8;
        case 0x3953fcu: goto label_3953fc;
        case 0x395400u: goto label_395400;
        case 0x395404u: goto label_395404;
        case 0x395408u: goto label_395408;
        case 0x39540cu: goto label_39540c;
        case 0x395410u: goto label_395410;
        case 0x395414u: goto label_395414;
        case 0x395418u: goto label_395418;
        case 0x39541cu: goto label_39541c;
        case 0x395420u: goto label_395420;
        case 0x395424u: goto label_395424;
        case 0x395428u: goto label_395428;
        case 0x39542cu: goto label_39542c;
        case 0x395430u: goto label_395430;
        case 0x395434u: goto label_395434;
        case 0x395438u: goto label_395438;
        case 0x39543cu: goto label_39543c;
        case 0x395440u: goto label_395440;
        case 0x395444u: goto label_395444;
        case 0x395448u: goto label_395448;
        case 0x39544cu: goto label_39544c;
        case 0x395450u: goto label_395450;
        case 0x395454u: goto label_395454;
        case 0x395458u: goto label_395458;
        case 0x39545cu: goto label_39545c;
        case 0x395460u: goto label_395460;
        case 0x395464u: goto label_395464;
        case 0x395468u: goto label_395468;
        case 0x39546cu: goto label_39546c;
        case 0x395470u: goto label_395470;
        case 0x395474u: goto label_395474;
        case 0x395478u: goto label_395478;
        case 0x39547cu: goto label_39547c;
        case 0x395480u: goto label_395480;
        case 0x395484u: goto label_395484;
        case 0x395488u: goto label_395488;
        case 0x39548cu: goto label_39548c;
        case 0x395490u: goto label_395490;
        case 0x395494u: goto label_395494;
        case 0x395498u: goto label_395498;
        case 0x39549cu: goto label_39549c;
        case 0x3954a0u: goto label_3954a0;
        case 0x3954a4u: goto label_3954a4;
        case 0x3954a8u: goto label_3954a8;
        case 0x3954acu: goto label_3954ac;
        case 0x3954b0u: goto label_3954b0;
        case 0x3954b4u: goto label_3954b4;
        case 0x3954b8u: goto label_3954b8;
        case 0x3954bcu: goto label_3954bc;
        case 0x3954c0u: goto label_3954c0;
        case 0x3954c4u: goto label_3954c4;
        case 0x3954c8u: goto label_3954c8;
        case 0x3954ccu: goto label_3954cc;
        case 0x3954d0u: goto label_3954d0;
        case 0x3954d4u: goto label_3954d4;
        case 0x3954d8u: goto label_3954d8;
        case 0x3954dcu: goto label_3954dc;
        case 0x3954e0u: goto label_3954e0;
        case 0x3954e4u: goto label_3954e4;
        case 0x3954e8u: goto label_3954e8;
        case 0x3954ecu: goto label_3954ec;
        case 0x3954f0u: goto label_3954f0;
        case 0x3954f4u: goto label_3954f4;
        case 0x3954f8u: goto label_3954f8;
        case 0x3954fcu: goto label_3954fc;
        case 0x395500u: goto label_395500;
        case 0x395504u: goto label_395504;
        case 0x395508u: goto label_395508;
        case 0x39550cu: goto label_39550c;
        case 0x395510u: goto label_395510;
        case 0x395514u: goto label_395514;
        case 0x395518u: goto label_395518;
        case 0x39551cu: goto label_39551c;
        case 0x395520u: goto label_395520;
        case 0x395524u: goto label_395524;
        case 0x395528u: goto label_395528;
        case 0x39552cu: goto label_39552c;
        case 0x395530u: goto label_395530;
        case 0x395534u: goto label_395534;
        case 0x395538u: goto label_395538;
        case 0x39553cu: goto label_39553c;
        case 0x395540u: goto label_395540;
        case 0x395544u: goto label_395544;
        case 0x395548u: goto label_395548;
        case 0x39554cu: goto label_39554c;
        case 0x395550u: goto label_395550;
        case 0x395554u: goto label_395554;
        case 0x395558u: goto label_395558;
        case 0x39555cu: goto label_39555c;
        case 0x395560u: goto label_395560;
        case 0x395564u: goto label_395564;
        case 0x395568u: goto label_395568;
        case 0x39556cu: goto label_39556c;
        case 0x395570u: goto label_395570;
        case 0x395574u: goto label_395574;
        case 0x395578u: goto label_395578;
        case 0x39557cu: goto label_39557c;
        case 0x395580u: goto label_395580;
        case 0x395584u: goto label_395584;
        case 0x395588u: goto label_395588;
        case 0x39558cu: goto label_39558c;
        case 0x395590u: goto label_395590;
        case 0x395594u: goto label_395594;
        case 0x395598u: goto label_395598;
        case 0x39559cu: goto label_39559c;
        case 0x3955a0u: goto label_3955a0;
        case 0x3955a4u: goto label_3955a4;
        case 0x3955a8u: goto label_3955a8;
        case 0x3955acu: goto label_3955ac;
        case 0x3955b0u: goto label_3955b0;
        case 0x3955b4u: goto label_3955b4;
        case 0x3955b8u: goto label_3955b8;
        case 0x3955bcu: goto label_3955bc;
        case 0x3955c0u: goto label_3955c0;
        case 0x3955c4u: goto label_3955c4;
        case 0x3955c8u: goto label_3955c8;
        case 0x3955ccu: goto label_3955cc;
        case 0x3955d0u: goto label_3955d0;
        case 0x3955d4u: goto label_3955d4;
        case 0x3955d8u: goto label_3955d8;
        case 0x3955dcu: goto label_3955dc;
        case 0x3955e0u: goto label_3955e0;
        case 0x3955e4u: goto label_3955e4;
        case 0x3955e8u: goto label_3955e8;
        case 0x3955ecu: goto label_3955ec;
        case 0x3955f0u: goto label_3955f0;
        case 0x3955f4u: goto label_3955f4;
        case 0x3955f8u: goto label_3955f8;
        case 0x3955fcu: goto label_3955fc;
        case 0x395600u: goto label_395600;
        case 0x395604u: goto label_395604;
        case 0x395608u: goto label_395608;
        case 0x39560cu: goto label_39560c;
        case 0x395610u: goto label_395610;
        case 0x395614u: goto label_395614;
        case 0x395618u: goto label_395618;
        case 0x39561cu: goto label_39561c;
        case 0x395620u: goto label_395620;
        case 0x395624u: goto label_395624;
        case 0x395628u: goto label_395628;
        case 0x39562cu: goto label_39562c;
        case 0x395630u: goto label_395630;
        case 0x395634u: goto label_395634;
        case 0x395638u: goto label_395638;
        case 0x39563cu: goto label_39563c;
        case 0x395640u: goto label_395640;
        case 0x395644u: goto label_395644;
        case 0x395648u: goto label_395648;
        case 0x39564cu: goto label_39564c;
        case 0x395650u: goto label_395650;
        case 0x395654u: goto label_395654;
        case 0x395658u: goto label_395658;
        case 0x39565cu: goto label_39565c;
        case 0x395660u: goto label_395660;
        case 0x395664u: goto label_395664;
        case 0x395668u: goto label_395668;
        case 0x39566cu: goto label_39566c;
        case 0x395670u: goto label_395670;
        case 0x395674u: goto label_395674;
        case 0x395678u: goto label_395678;
        case 0x39567cu: goto label_39567c;
        case 0x395680u: goto label_395680;
        case 0x395684u: goto label_395684;
        case 0x395688u: goto label_395688;
        case 0x39568cu: goto label_39568c;
        case 0x395690u: goto label_395690;
        case 0x395694u: goto label_395694;
        case 0x395698u: goto label_395698;
        case 0x39569cu: goto label_39569c;
        case 0x3956a0u: goto label_3956a0;
        case 0x3956a4u: goto label_3956a4;
        case 0x3956a8u: goto label_3956a8;
        case 0x3956acu: goto label_3956ac;
        case 0x3956b0u: goto label_3956b0;
        case 0x3956b4u: goto label_3956b4;
        case 0x3956b8u: goto label_3956b8;
        case 0x3956bcu: goto label_3956bc;
        case 0x3956c0u: goto label_3956c0;
        case 0x3956c4u: goto label_3956c4;
        case 0x3956c8u: goto label_3956c8;
        case 0x3956ccu: goto label_3956cc;
        case 0x3956d0u: goto label_3956d0;
        case 0x3956d4u: goto label_3956d4;
        case 0x3956d8u: goto label_3956d8;
        case 0x3956dcu: goto label_3956dc;
        case 0x3956e0u: goto label_3956e0;
        case 0x3956e4u: goto label_3956e4;
        case 0x3956e8u: goto label_3956e8;
        case 0x3956ecu: goto label_3956ec;
        case 0x3956f0u: goto label_3956f0;
        case 0x3956f4u: goto label_3956f4;
        case 0x3956f8u: goto label_3956f8;
        case 0x3956fcu: goto label_3956fc;
        case 0x395700u: goto label_395700;
        case 0x395704u: goto label_395704;
        case 0x395708u: goto label_395708;
        case 0x39570cu: goto label_39570c;
        case 0x395710u: goto label_395710;
        case 0x395714u: goto label_395714;
        case 0x395718u: goto label_395718;
        case 0x39571cu: goto label_39571c;
        case 0x395720u: goto label_395720;
        case 0x395724u: goto label_395724;
        case 0x395728u: goto label_395728;
        case 0x39572cu: goto label_39572c;
        case 0x395730u: goto label_395730;
        case 0x395734u: goto label_395734;
        case 0x395738u: goto label_395738;
        case 0x39573cu: goto label_39573c;
        case 0x395740u: goto label_395740;
        case 0x395744u: goto label_395744;
        case 0x395748u: goto label_395748;
        case 0x39574cu: goto label_39574c;
        case 0x395750u: goto label_395750;
        case 0x395754u: goto label_395754;
        case 0x395758u: goto label_395758;
        case 0x39575cu: goto label_39575c;
        case 0x395760u: goto label_395760;
        case 0x395764u: goto label_395764;
        case 0x395768u: goto label_395768;
        case 0x39576cu: goto label_39576c;
        case 0x395770u: goto label_395770;
        case 0x395774u: goto label_395774;
        case 0x395778u: goto label_395778;
        case 0x39577cu: goto label_39577c;
        case 0x395780u: goto label_395780;
        case 0x395784u: goto label_395784;
        case 0x395788u: goto label_395788;
        case 0x39578cu: goto label_39578c;
        case 0x395790u: goto label_395790;
        case 0x395794u: goto label_395794;
        case 0x395798u: goto label_395798;
        case 0x39579cu: goto label_39579c;
        case 0x3957a0u: goto label_3957a0;
        case 0x3957a4u: goto label_3957a4;
        case 0x3957a8u: goto label_3957a8;
        case 0x3957acu: goto label_3957ac;
        case 0x3957b0u: goto label_3957b0;
        case 0x3957b4u: goto label_3957b4;
        case 0x3957b8u: goto label_3957b8;
        case 0x3957bcu: goto label_3957bc;
        case 0x3957c0u: goto label_3957c0;
        case 0x3957c4u: goto label_3957c4;
        case 0x3957c8u: goto label_3957c8;
        case 0x3957ccu: goto label_3957cc;
        case 0x3957d0u: goto label_3957d0;
        case 0x3957d4u: goto label_3957d4;
        case 0x3957d8u: goto label_3957d8;
        case 0x3957dcu: goto label_3957dc;
        case 0x3957e0u: goto label_3957e0;
        case 0x3957e4u: goto label_3957e4;
        case 0x3957e8u: goto label_3957e8;
        case 0x3957ecu: goto label_3957ec;
        case 0x3957f0u: goto label_3957f0;
        case 0x3957f4u: goto label_3957f4;
        case 0x3957f8u: goto label_3957f8;
        case 0x3957fcu: goto label_3957fc;
        case 0x395800u: goto label_395800;
        case 0x395804u: goto label_395804;
        case 0x395808u: goto label_395808;
        case 0x39580cu: goto label_39580c;
        case 0x395810u: goto label_395810;
        case 0x395814u: goto label_395814;
        case 0x395818u: goto label_395818;
        case 0x39581cu: goto label_39581c;
        case 0x395820u: goto label_395820;
        case 0x395824u: goto label_395824;
        case 0x395828u: goto label_395828;
        case 0x39582cu: goto label_39582c;
        case 0x395830u: goto label_395830;
        case 0x395834u: goto label_395834;
        case 0x395838u: goto label_395838;
        case 0x39583cu: goto label_39583c;
        case 0x395840u: goto label_395840;
        case 0x395844u: goto label_395844;
        case 0x395848u: goto label_395848;
        case 0x39584cu: goto label_39584c;
        case 0x395850u: goto label_395850;
        case 0x395854u: goto label_395854;
        case 0x395858u: goto label_395858;
        case 0x39585cu: goto label_39585c;
        case 0x395860u: goto label_395860;
        case 0x395864u: goto label_395864;
        case 0x395868u: goto label_395868;
        case 0x39586cu: goto label_39586c;
        case 0x395870u: goto label_395870;
        case 0x395874u: goto label_395874;
        case 0x395878u: goto label_395878;
        case 0x39587cu: goto label_39587c;
        case 0x395880u: goto label_395880;
        case 0x395884u: goto label_395884;
        case 0x395888u: goto label_395888;
        case 0x39588cu: goto label_39588c;
        case 0x395890u: goto label_395890;
        case 0x395894u: goto label_395894;
        case 0x395898u: goto label_395898;
        case 0x39589cu: goto label_39589c;
        case 0x3958a0u: goto label_3958a0;
        case 0x3958a4u: goto label_3958a4;
        case 0x3958a8u: goto label_3958a8;
        case 0x3958acu: goto label_3958ac;
        case 0x3958b0u: goto label_3958b0;
        case 0x3958b4u: goto label_3958b4;
        case 0x3958b8u: goto label_3958b8;
        case 0x3958bcu: goto label_3958bc;
        case 0x3958c0u: goto label_3958c0;
        case 0x3958c4u: goto label_3958c4;
        case 0x3958c8u: goto label_3958c8;
        case 0x3958ccu: goto label_3958cc;
        case 0x3958d0u: goto label_3958d0;
        case 0x3958d4u: goto label_3958d4;
        case 0x3958d8u: goto label_3958d8;
        case 0x3958dcu: goto label_3958dc;
        case 0x3958e0u: goto label_3958e0;
        case 0x3958e4u: goto label_3958e4;
        case 0x3958e8u: goto label_3958e8;
        case 0x3958ecu: goto label_3958ec;
        case 0x3958f0u: goto label_3958f0;
        case 0x3958f4u: goto label_3958f4;
        case 0x3958f8u: goto label_3958f8;
        case 0x3958fcu: goto label_3958fc;
        case 0x395900u: goto label_395900;
        case 0x395904u: goto label_395904;
        case 0x395908u: goto label_395908;
        case 0x39590cu: goto label_39590c;
        case 0x395910u: goto label_395910;
        case 0x395914u: goto label_395914;
        case 0x395918u: goto label_395918;
        case 0x39591cu: goto label_39591c;
        case 0x395920u: goto label_395920;
        case 0x395924u: goto label_395924;
        case 0x395928u: goto label_395928;
        case 0x39592cu: goto label_39592c;
        case 0x395930u: goto label_395930;
        case 0x395934u: goto label_395934;
        case 0x395938u: goto label_395938;
        case 0x39593cu: goto label_39593c;
        case 0x395940u: goto label_395940;
        case 0x395944u: goto label_395944;
        case 0x395948u: goto label_395948;
        case 0x39594cu: goto label_39594c;
        case 0x395950u: goto label_395950;
        case 0x395954u: goto label_395954;
        case 0x395958u: goto label_395958;
        case 0x39595cu: goto label_39595c;
        case 0x395960u: goto label_395960;
        case 0x395964u: goto label_395964;
        case 0x395968u: goto label_395968;
        case 0x39596cu: goto label_39596c;
        case 0x395970u: goto label_395970;
        case 0x395974u: goto label_395974;
        case 0x395978u: goto label_395978;
        case 0x39597cu: goto label_39597c;
        case 0x395980u: goto label_395980;
        case 0x395984u: goto label_395984;
        case 0x395988u: goto label_395988;
        case 0x39598cu: goto label_39598c;
        case 0x395990u: goto label_395990;
        case 0x395994u: goto label_395994;
        case 0x395998u: goto label_395998;
        case 0x39599cu: goto label_39599c;
        case 0x3959a0u: goto label_3959a0;
        case 0x3959a4u: goto label_3959a4;
        case 0x3959a8u: goto label_3959a8;
        case 0x3959acu: goto label_3959ac;
        case 0x3959b0u: goto label_3959b0;
        case 0x3959b4u: goto label_3959b4;
        case 0x3959b8u: goto label_3959b8;
        case 0x3959bcu: goto label_3959bc;
        case 0x3959c0u: goto label_3959c0;
        case 0x3959c4u: goto label_3959c4;
        case 0x3959c8u: goto label_3959c8;
        case 0x3959ccu: goto label_3959cc;
        case 0x3959d0u: goto label_3959d0;
        case 0x3959d4u: goto label_3959d4;
        case 0x3959d8u: goto label_3959d8;
        case 0x3959dcu: goto label_3959dc;
        case 0x3959e0u: goto label_3959e0;
        case 0x3959e4u: goto label_3959e4;
        case 0x3959e8u: goto label_3959e8;
        case 0x3959ecu: goto label_3959ec;
        case 0x3959f0u: goto label_3959f0;
        case 0x3959f4u: goto label_3959f4;
        case 0x3959f8u: goto label_3959f8;
        case 0x3959fcu: goto label_3959fc;
        case 0x395a00u: goto label_395a00;
        case 0x395a04u: goto label_395a04;
        case 0x395a08u: goto label_395a08;
        case 0x395a0cu: goto label_395a0c;
        case 0x395a10u: goto label_395a10;
        case 0x395a14u: goto label_395a14;
        case 0x395a18u: goto label_395a18;
        case 0x395a1cu: goto label_395a1c;
        case 0x395a20u: goto label_395a20;
        case 0x395a24u: goto label_395a24;
        case 0x395a28u: goto label_395a28;
        case 0x395a2cu: goto label_395a2c;
        case 0x395a30u: goto label_395a30;
        case 0x395a34u: goto label_395a34;
        case 0x395a38u: goto label_395a38;
        case 0x395a3cu: goto label_395a3c;
        case 0x395a40u: goto label_395a40;
        case 0x395a44u: goto label_395a44;
        case 0x395a48u: goto label_395a48;
        case 0x395a4cu: goto label_395a4c;
        case 0x395a50u: goto label_395a50;
        case 0x395a54u: goto label_395a54;
        case 0x395a58u: goto label_395a58;
        case 0x395a5cu: goto label_395a5c;
        case 0x395a60u: goto label_395a60;
        case 0x395a64u: goto label_395a64;
        case 0x395a68u: goto label_395a68;
        case 0x395a6cu: goto label_395a6c;
        case 0x395a70u: goto label_395a70;
        case 0x395a74u: goto label_395a74;
        case 0x395a78u: goto label_395a78;
        case 0x395a7cu: goto label_395a7c;
        case 0x395a80u: goto label_395a80;
        case 0x395a84u: goto label_395a84;
        case 0x395a88u: goto label_395a88;
        case 0x395a8cu: goto label_395a8c;
        case 0x395a90u: goto label_395a90;
        case 0x395a94u: goto label_395a94;
        case 0x395a98u: goto label_395a98;
        case 0x395a9cu: goto label_395a9c;
        case 0x395aa0u: goto label_395aa0;
        case 0x395aa4u: goto label_395aa4;
        case 0x395aa8u: goto label_395aa8;
        case 0x395aacu: goto label_395aac;
        case 0x395ab0u: goto label_395ab0;
        case 0x395ab4u: goto label_395ab4;
        case 0x395ab8u: goto label_395ab8;
        case 0x395abcu: goto label_395abc;
        case 0x395ac0u: goto label_395ac0;
        case 0x395ac4u: goto label_395ac4;
        case 0x395ac8u: goto label_395ac8;
        case 0x395accu: goto label_395acc;
        case 0x395ad0u: goto label_395ad0;
        case 0x395ad4u: goto label_395ad4;
        case 0x395ad8u: goto label_395ad8;
        case 0x395adcu: goto label_395adc;
        case 0x395ae0u: goto label_395ae0;
        case 0x395ae4u: goto label_395ae4;
        case 0x395ae8u: goto label_395ae8;
        case 0x395aecu: goto label_395aec;
        case 0x395af0u: goto label_395af0;
        case 0x395af4u: goto label_395af4;
        case 0x395af8u: goto label_395af8;
        case 0x395afcu: goto label_395afc;
        case 0x395b00u: goto label_395b00;
        case 0x395b04u: goto label_395b04;
        case 0x395b08u: goto label_395b08;
        case 0x395b0cu: goto label_395b0c;
        case 0x395b10u: goto label_395b10;
        case 0x395b14u: goto label_395b14;
        case 0x395b18u: goto label_395b18;
        case 0x395b1cu: goto label_395b1c;
        case 0x395b20u: goto label_395b20;
        case 0x395b24u: goto label_395b24;
        case 0x395b28u: goto label_395b28;
        case 0x395b2cu: goto label_395b2c;
        case 0x395b30u: goto label_395b30;
        case 0x395b34u: goto label_395b34;
        case 0x395b38u: goto label_395b38;
        case 0x395b3cu: goto label_395b3c;
        case 0x395b40u: goto label_395b40;
        case 0x395b44u: goto label_395b44;
        case 0x395b48u: goto label_395b48;
        case 0x395b4cu: goto label_395b4c;
        case 0x395b50u: goto label_395b50;
        case 0x395b54u: goto label_395b54;
        case 0x395b58u: goto label_395b58;
        case 0x395b5cu: goto label_395b5c;
        case 0x395b60u: goto label_395b60;
        case 0x395b64u: goto label_395b64;
        case 0x395b68u: goto label_395b68;
        case 0x395b6cu: goto label_395b6c;
        case 0x395b70u: goto label_395b70;
        case 0x395b74u: goto label_395b74;
        case 0x395b78u: goto label_395b78;
        case 0x395b7cu: goto label_395b7c;
        case 0x395b80u: goto label_395b80;
        case 0x395b84u: goto label_395b84;
        case 0x395b88u: goto label_395b88;
        case 0x395b8cu: goto label_395b8c;
        case 0x395b90u: goto label_395b90;
        case 0x395b94u: goto label_395b94;
        case 0x395b98u: goto label_395b98;
        case 0x395b9cu: goto label_395b9c;
        case 0x395ba0u: goto label_395ba0;
        case 0x395ba4u: goto label_395ba4;
        case 0x395ba8u: goto label_395ba8;
        case 0x395bacu: goto label_395bac;
        case 0x395bb0u: goto label_395bb0;
        case 0x395bb4u: goto label_395bb4;
        case 0x395bb8u: goto label_395bb8;
        case 0x395bbcu: goto label_395bbc;
        case 0x395bc0u: goto label_395bc0;
        case 0x395bc4u: goto label_395bc4;
        case 0x395bc8u: goto label_395bc8;
        case 0x395bccu: goto label_395bcc;
        case 0x395bd0u: goto label_395bd0;
        case 0x395bd4u: goto label_395bd4;
        case 0x395bd8u: goto label_395bd8;
        case 0x395bdcu: goto label_395bdc;
        case 0x395be0u: goto label_395be0;
        case 0x395be4u: goto label_395be4;
        case 0x395be8u: goto label_395be8;
        case 0x395becu: goto label_395bec;
        case 0x395bf0u: goto label_395bf0;
        case 0x395bf4u: goto label_395bf4;
        case 0x395bf8u: goto label_395bf8;
        case 0x395bfcu: goto label_395bfc;
        case 0x395c00u: goto label_395c00;
        case 0x395c04u: goto label_395c04;
        case 0x395c08u: goto label_395c08;
        case 0x395c0cu: goto label_395c0c;
        case 0x395c10u: goto label_395c10;
        case 0x395c14u: goto label_395c14;
        case 0x395c18u: goto label_395c18;
        case 0x395c1cu: goto label_395c1c;
        case 0x395c20u: goto label_395c20;
        case 0x395c24u: goto label_395c24;
        case 0x395c28u: goto label_395c28;
        case 0x395c2cu: goto label_395c2c;
        case 0x395c30u: goto label_395c30;
        case 0x395c34u: goto label_395c34;
        case 0x395c38u: goto label_395c38;
        case 0x395c3cu: goto label_395c3c;
        case 0x395c40u: goto label_395c40;
        case 0x395c44u: goto label_395c44;
        case 0x395c48u: goto label_395c48;
        case 0x395c4cu: goto label_395c4c;
        case 0x395c50u: goto label_395c50;
        case 0x395c54u: goto label_395c54;
        case 0x395c58u: goto label_395c58;
        case 0x395c5cu: goto label_395c5c;
        case 0x395c60u: goto label_395c60;
        case 0x395c64u: goto label_395c64;
        case 0x395c68u: goto label_395c68;
        case 0x395c6cu: goto label_395c6c;
        case 0x395c70u: goto label_395c70;
        case 0x395c74u: goto label_395c74;
        case 0x395c78u: goto label_395c78;
        case 0x395c7cu: goto label_395c7c;
        case 0x395c80u: goto label_395c80;
        case 0x395c84u: goto label_395c84;
        case 0x395c88u: goto label_395c88;
        case 0x395c8cu: goto label_395c8c;
        case 0x395c90u: goto label_395c90;
        case 0x395c94u: goto label_395c94;
        case 0x395c98u: goto label_395c98;
        case 0x395c9cu: goto label_395c9c;
        case 0x395ca0u: goto label_395ca0;
        case 0x395ca4u: goto label_395ca4;
        case 0x395ca8u: goto label_395ca8;
        case 0x395cacu: goto label_395cac;
        case 0x395cb0u: goto label_395cb0;
        case 0x395cb4u: goto label_395cb4;
        case 0x395cb8u: goto label_395cb8;
        case 0x395cbcu: goto label_395cbc;
        case 0x395cc0u: goto label_395cc0;
        case 0x395cc4u: goto label_395cc4;
        case 0x395cc8u: goto label_395cc8;
        case 0x395cccu: goto label_395ccc;
        case 0x395cd0u: goto label_395cd0;
        case 0x395cd4u: goto label_395cd4;
        case 0x395cd8u: goto label_395cd8;
        case 0x395cdcu: goto label_395cdc;
        case 0x395ce0u: goto label_395ce0;
        case 0x395ce4u: goto label_395ce4;
        case 0x395ce8u: goto label_395ce8;
        case 0x395cecu: goto label_395cec;
        case 0x395cf0u: goto label_395cf0;
        case 0x395cf4u: goto label_395cf4;
        case 0x395cf8u: goto label_395cf8;
        case 0x395cfcu: goto label_395cfc;
        case 0x395d00u: goto label_395d00;
        case 0x395d04u: goto label_395d04;
        case 0x395d08u: goto label_395d08;
        case 0x395d0cu: goto label_395d0c;
        case 0x395d10u: goto label_395d10;
        case 0x395d14u: goto label_395d14;
        case 0x395d18u: goto label_395d18;
        case 0x395d1cu: goto label_395d1c;
        case 0x395d20u: goto label_395d20;
        case 0x395d24u: goto label_395d24;
        case 0x395d28u: goto label_395d28;
        case 0x395d2cu: goto label_395d2c;
        case 0x395d30u: goto label_395d30;
        case 0x395d34u: goto label_395d34;
        case 0x395d38u: goto label_395d38;
        case 0x395d3cu: goto label_395d3c;
        case 0x395d40u: goto label_395d40;
        case 0x395d44u: goto label_395d44;
        case 0x395d48u: goto label_395d48;
        case 0x395d4cu: goto label_395d4c;
        case 0x395d50u: goto label_395d50;
        case 0x395d54u: goto label_395d54;
        case 0x395d58u: goto label_395d58;
        case 0x395d5cu: goto label_395d5c;
        case 0x395d60u: goto label_395d60;
        case 0x395d64u: goto label_395d64;
        case 0x395d68u: goto label_395d68;
        case 0x395d6cu: goto label_395d6c;
        case 0x395d70u: goto label_395d70;
        case 0x395d74u: goto label_395d74;
        case 0x395d78u: goto label_395d78;
        case 0x395d7cu: goto label_395d7c;
        case 0x395d80u: goto label_395d80;
        case 0x395d84u: goto label_395d84;
        case 0x395d88u: goto label_395d88;
        case 0x395d8cu: goto label_395d8c;
        case 0x395d90u: goto label_395d90;
        case 0x395d94u: goto label_395d94;
        case 0x395d98u: goto label_395d98;
        case 0x395d9cu: goto label_395d9c;
        case 0x395da0u: goto label_395da0;
        case 0x395da4u: goto label_395da4;
        case 0x395da8u: goto label_395da8;
        case 0x395dacu: goto label_395dac;
        case 0x395db0u: goto label_395db0;
        case 0x395db4u: goto label_395db4;
        case 0x395db8u: goto label_395db8;
        case 0x395dbcu: goto label_395dbc;
        case 0x395dc0u: goto label_395dc0;
        case 0x395dc4u: goto label_395dc4;
        case 0x395dc8u: goto label_395dc8;
        case 0x395dccu: goto label_395dcc;
        case 0x395dd0u: goto label_395dd0;
        case 0x395dd4u: goto label_395dd4;
        case 0x395dd8u: goto label_395dd8;
        case 0x395ddcu: goto label_395ddc;
        case 0x395de0u: goto label_395de0;
        case 0x395de4u: goto label_395de4;
        case 0x395de8u: goto label_395de8;
        case 0x395decu: goto label_395dec;
        case 0x395df0u: goto label_395df0;
        case 0x395df4u: goto label_395df4;
        case 0x395df8u: goto label_395df8;
        case 0x395dfcu: goto label_395dfc;
        case 0x395e00u: goto label_395e00;
        case 0x395e04u: goto label_395e04;
        case 0x395e08u: goto label_395e08;
        case 0x395e0cu: goto label_395e0c;
        case 0x395e10u: goto label_395e10;
        case 0x395e14u: goto label_395e14;
        case 0x395e18u: goto label_395e18;
        case 0x395e1cu: goto label_395e1c;
        case 0x395e20u: goto label_395e20;
        case 0x395e24u: goto label_395e24;
        case 0x395e28u: goto label_395e28;
        case 0x395e2cu: goto label_395e2c;
        case 0x395e30u: goto label_395e30;
        case 0x395e34u: goto label_395e34;
        case 0x395e38u: goto label_395e38;
        case 0x395e3cu: goto label_395e3c;
        case 0x395e40u: goto label_395e40;
        case 0x395e44u: goto label_395e44;
        case 0x395e48u: goto label_395e48;
        case 0x395e4cu: goto label_395e4c;
        case 0x395e50u: goto label_395e50;
        case 0x395e54u: goto label_395e54;
        case 0x395e58u: goto label_395e58;
        case 0x395e5cu: goto label_395e5c;
        case 0x395e60u: goto label_395e60;
        case 0x395e64u: goto label_395e64;
        case 0x395e68u: goto label_395e68;
        case 0x395e6cu: goto label_395e6c;
        case 0x395e70u: goto label_395e70;
        case 0x395e74u: goto label_395e74;
        case 0x395e78u: goto label_395e78;
        case 0x395e7cu: goto label_395e7c;
        case 0x395e80u: goto label_395e80;
        case 0x395e84u: goto label_395e84;
        case 0x395e88u: goto label_395e88;
        case 0x395e8cu: goto label_395e8c;
        case 0x395e90u: goto label_395e90;
        case 0x395e94u: goto label_395e94;
        case 0x395e98u: goto label_395e98;
        case 0x395e9cu: goto label_395e9c;
        case 0x395ea0u: goto label_395ea0;
        case 0x395ea4u: goto label_395ea4;
        case 0x395ea8u: goto label_395ea8;
        case 0x395eacu: goto label_395eac;
        case 0x395eb0u: goto label_395eb0;
        case 0x395eb4u: goto label_395eb4;
        case 0x395eb8u: goto label_395eb8;
        case 0x395ebcu: goto label_395ebc;
        case 0x395ec0u: goto label_395ec0;
        case 0x395ec4u: goto label_395ec4;
        case 0x395ec8u: goto label_395ec8;
        case 0x395eccu: goto label_395ecc;
        case 0x395ed0u: goto label_395ed0;
        case 0x395ed4u: goto label_395ed4;
        case 0x395ed8u: goto label_395ed8;
        case 0x395edcu: goto label_395edc;
        case 0x395ee0u: goto label_395ee0;
        case 0x395ee4u: goto label_395ee4;
        case 0x395ee8u: goto label_395ee8;
        case 0x395eecu: goto label_395eec;
        case 0x395ef0u: goto label_395ef0;
        case 0x395ef4u: goto label_395ef4;
        case 0x395ef8u: goto label_395ef8;
        case 0x395efcu: goto label_395efc;
        case 0x395f00u: goto label_395f00;
        case 0x395f04u: goto label_395f04;
        case 0x395f08u: goto label_395f08;
        case 0x395f0cu: goto label_395f0c;
        case 0x395f10u: goto label_395f10;
        case 0x395f14u: goto label_395f14;
        case 0x395f18u: goto label_395f18;
        case 0x395f1cu: goto label_395f1c;
        case 0x395f20u: goto label_395f20;
        case 0x395f24u: goto label_395f24;
        case 0x395f28u: goto label_395f28;
        case 0x395f2cu: goto label_395f2c;
        case 0x395f30u: goto label_395f30;
        case 0x395f34u: goto label_395f34;
        case 0x395f38u: goto label_395f38;
        case 0x395f3cu: goto label_395f3c;
        case 0x395f40u: goto label_395f40;
        case 0x395f44u: goto label_395f44;
        case 0x395f48u: goto label_395f48;
        case 0x395f4cu: goto label_395f4c;
        case 0x395f50u: goto label_395f50;
        case 0x395f54u: goto label_395f54;
        case 0x395f58u: goto label_395f58;
        case 0x395f5cu: goto label_395f5c;
        case 0x395f60u: goto label_395f60;
        case 0x395f64u: goto label_395f64;
        case 0x395f68u: goto label_395f68;
        case 0x395f6cu: goto label_395f6c;
        case 0x395f70u: goto label_395f70;
        case 0x395f74u: goto label_395f74;
        case 0x395f78u: goto label_395f78;
        case 0x395f7cu: goto label_395f7c;
        case 0x395f80u: goto label_395f80;
        case 0x395f84u: goto label_395f84;
        case 0x395f88u: goto label_395f88;
        case 0x395f8cu: goto label_395f8c;
        case 0x395f90u: goto label_395f90;
        case 0x395f94u: goto label_395f94;
        case 0x395f98u: goto label_395f98;
        case 0x395f9cu: goto label_395f9c;
        case 0x395fa0u: goto label_395fa0;
        case 0x395fa4u: goto label_395fa4;
        case 0x395fa8u: goto label_395fa8;
        case 0x395facu: goto label_395fac;
        case 0x395fb0u: goto label_395fb0;
        case 0x395fb4u: goto label_395fb4;
        case 0x395fb8u: goto label_395fb8;
        case 0x395fbcu: goto label_395fbc;
        case 0x395fc0u: goto label_395fc0;
        case 0x395fc4u: goto label_395fc4;
        case 0x395fc8u: goto label_395fc8;
        case 0x395fccu: goto label_395fcc;
        case 0x395fd0u: goto label_395fd0;
        case 0x395fd4u: goto label_395fd4;
        case 0x395fd8u: goto label_395fd8;
        case 0x395fdcu: goto label_395fdc;
        case 0x395fe0u: goto label_395fe0;
        case 0x395fe4u: goto label_395fe4;
        case 0x395fe8u: goto label_395fe8;
        case 0x395fecu: goto label_395fec;
        case 0x395ff0u: goto label_395ff0;
        case 0x395ff4u: goto label_395ff4;
        case 0x395ff8u: goto label_395ff8;
        case 0x395ffcu: goto label_395ffc;
        case 0x396000u: goto label_396000;
        case 0x396004u: goto label_396004;
        case 0x396008u: goto label_396008;
        case 0x39600cu: goto label_39600c;
        case 0x396010u: goto label_396010;
        case 0x396014u: goto label_396014;
        case 0x396018u: goto label_396018;
        case 0x39601cu: goto label_39601c;
        case 0x396020u: goto label_396020;
        case 0x396024u: goto label_396024;
        case 0x396028u: goto label_396028;
        case 0x39602cu: goto label_39602c;
        case 0x396030u: goto label_396030;
        case 0x396034u: goto label_396034;
        case 0x396038u: goto label_396038;
        case 0x39603cu: goto label_39603c;
        case 0x396040u: goto label_396040;
        case 0x396044u: goto label_396044;
        case 0x396048u: goto label_396048;
        case 0x39604cu: goto label_39604c;
        case 0x396050u: goto label_396050;
        case 0x396054u: goto label_396054;
        case 0x396058u: goto label_396058;
        case 0x39605cu: goto label_39605c;
        case 0x396060u: goto label_396060;
        case 0x396064u: goto label_396064;
        case 0x396068u: goto label_396068;
        case 0x39606cu: goto label_39606c;
        case 0x396070u: goto label_396070;
        case 0x396074u: goto label_396074;
        case 0x396078u: goto label_396078;
        case 0x39607cu: goto label_39607c;
        case 0x396080u: goto label_396080;
        case 0x396084u: goto label_396084;
        case 0x396088u: goto label_396088;
        case 0x39608cu: goto label_39608c;
        case 0x396090u: goto label_396090;
        case 0x396094u: goto label_396094;
        case 0x396098u: goto label_396098;
        case 0x39609cu: goto label_39609c;
        case 0x3960a0u: goto label_3960a0;
        case 0x3960a4u: goto label_3960a4;
        case 0x3960a8u: goto label_3960a8;
        case 0x3960acu: goto label_3960ac;
        case 0x3960b0u: goto label_3960b0;
        case 0x3960b4u: goto label_3960b4;
        case 0x3960b8u: goto label_3960b8;
        case 0x3960bcu: goto label_3960bc;
        case 0x3960c0u: goto label_3960c0;
        case 0x3960c4u: goto label_3960c4;
        case 0x3960c8u: goto label_3960c8;
        case 0x3960ccu: goto label_3960cc;
        case 0x3960d0u: goto label_3960d0;
        case 0x3960d4u: goto label_3960d4;
        case 0x3960d8u: goto label_3960d8;
        case 0x3960dcu: goto label_3960dc;
        case 0x3960e0u: goto label_3960e0;
        case 0x3960e4u: goto label_3960e4;
        case 0x3960e8u: goto label_3960e8;
        case 0x3960ecu: goto label_3960ec;
        case 0x3960f0u: goto label_3960f0;
        case 0x3960f4u: goto label_3960f4;
        case 0x3960f8u: goto label_3960f8;
        case 0x3960fcu: goto label_3960fc;
        case 0x396100u: goto label_396100;
        case 0x396104u: goto label_396104;
        case 0x396108u: goto label_396108;
        case 0x39610cu: goto label_39610c;
        case 0x396110u: goto label_396110;
        case 0x396114u: goto label_396114;
        case 0x396118u: goto label_396118;
        case 0x39611cu: goto label_39611c;
        case 0x396120u: goto label_396120;
        case 0x396124u: goto label_396124;
        case 0x396128u: goto label_396128;
        case 0x39612cu: goto label_39612c;
        case 0x396130u: goto label_396130;
        case 0x396134u: goto label_396134;
        case 0x396138u: goto label_396138;
        case 0x39613cu: goto label_39613c;
        case 0x396140u: goto label_396140;
        case 0x396144u: goto label_396144;
        case 0x396148u: goto label_396148;
        case 0x39614cu: goto label_39614c;
        case 0x396150u: goto label_396150;
        case 0x396154u: goto label_396154;
        case 0x396158u: goto label_396158;
        case 0x39615cu: goto label_39615c;
        case 0x396160u: goto label_396160;
        case 0x396164u: goto label_396164;
        case 0x396168u: goto label_396168;
        case 0x39616cu: goto label_39616c;
        case 0x396170u: goto label_396170;
        case 0x396174u: goto label_396174;
        case 0x396178u: goto label_396178;
        case 0x39617cu: goto label_39617c;
        case 0x396180u: goto label_396180;
        case 0x396184u: goto label_396184;
        case 0x396188u: goto label_396188;
        case 0x39618cu: goto label_39618c;
        case 0x396190u: goto label_396190;
        case 0x396194u: goto label_396194;
        case 0x396198u: goto label_396198;
        case 0x39619cu: goto label_39619c;
        case 0x3961a0u: goto label_3961a0;
        case 0x3961a4u: goto label_3961a4;
        case 0x3961a8u: goto label_3961a8;
        case 0x3961acu: goto label_3961ac;
        case 0x3961b0u: goto label_3961b0;
        case 0x3961b4u: goto label_3961b4;
        case 0x3961b8u: goto label_3961b8;
        case 0x3961bcu: goto label_3961bc;
        case 0x3961c0u: goto label_3961c0;
        case 0x3961c4u: goto label_3961c4;
        case 0x3961c8u: goto label_3961c8;
        case 0x3961ccu: goto label_3961cc;
        default: break;
    }

    ctx->pc = 0x394e00u;

label_394e00:
    // 0x394e00: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x394e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_394e04:
    // 0x394e04: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x394e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_394e08:
    // 0x394e08: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x394e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_394e0c:
    // 0x394e0c: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x394e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_394e10:
    // 0x394e10: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x394e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_394e14:
    // 0x394e14: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x394e14u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_394e18:
    // 0x394e18: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x394e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_394e1c:
    // 0x394e1c: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x394e1cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_394e20:
    // 0x394e20: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x394e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_394e24:
    // 0x394e24: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x394e24u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_394e28:
    // 0x394e28: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x394e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_394e2c:
    // 0x394e2c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x394e2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_394e30:
    // 0x394e30: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x394e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_394e34:
    // 0x394e34: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x394e34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_394e38:
    // 0x394e38: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x394e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_394e3c:
    // 0x394e3c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x394e3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_394e40:
    // 0x394e40: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x394e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_394e44:
    // 0x394e44: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x394e44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_394e48:
    // 0x394e48: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x394e48u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_394e4c:
    // 0x394e4c: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x394e4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_394e50:
    // 0x394e50: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x394e50u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_394e54:
    // 0x394e54: 0x3445ae60  ori         $a1, $v0, 0xAE60
    ctx->pc = 0x394e54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44640);
label_394e58:
    // 0x394e58: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x394e58u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_394e5c:
    // 0x394e5c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x394e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_394e60:
    // 0x394e60: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x394e60u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_394e64:
    // 0x394e64: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x394e64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_394e68:
    // 0x394e68: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x394e68u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_394e6c:
    // 0x394e6c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x394e6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_394e70:
    // 0x394e70: 0x46006646  mov.s       $f25, $f12
    ctx->pc = 0x394e70u;
    ctx->f[25] = FPU_MOV_S(ctx->f[12]);
label_394e74:
    // 0x394e74: 0x46006e06  mov.s       $f24, $f13
    ctx->pc = 0x394e74u;
    ctx->f[24] = FPU_MOV_S(ctx->f[13]);
label_394e78:
    // 0x394e78: 0x460075c6  mov.s       $f23, $f14
    ctx->pc = 0x394e78u;
    ctx->f[23] = FPU_MOV_S(ctx->f[14]);
label_394e7c:
    // 0x394e7c: 0x46007d86  mov.s       $f22, $f15
    ctx->pc = 0x394e7cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[15]);
label_394e80:
    // 0x394e80: 0x46008546  mov.s       $f21, $f16
    ctx->pc = 0x394e80u;
    ctx->f[21] = FPU_MOV_S(ctx->f[16]);
label_394e84:
    // 0x394e84: 0xc10ca68  jal         func_4329A0
label_394e88:
    if (ctx->pc == 0x394E88u) {
        ctx->pc = 0x394E88u;
            // 0x394e88: 0x46008d06  mov.s       $f20, $f17 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[17]);
        ctx->pc = 0x394E8Cu;
        goto label_394e8c;
    }
    ctx->pc = 0x394E84u;
    SET_GPR_U32(ctx, 31, 0x394E8Cu);
    ctx->pc = 0x394E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x394E84u;
            // 0x394e88: 0x46008d06  mov.s       $f20, $f17 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[17]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x394E8Cu; }
        if (ctx->pc != 0x394E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x394E8Cu; }
        if (ctx->pc != 0x394E8Cu) { return; }
    }
    ctx->pc = 0x394E8Cu;
label_394e8c:
    // 0x394e8c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x394e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_394e90:
    // 0x394e90: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x394e90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_394e94:
    // 0x394e94: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x394e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_394e98:
    // 0x394e98: 0x24638050  addiu       $v1, $v1, -0x7FB0
    ctx->pc = 0x394e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934608));
label_394e9c:
    // 0x394e9c: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x394e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_394ea0:
    // 0x394ea0: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x394ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_394ea4:
    // 0x394ea4: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x394ea4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_394ea8:
    // 0x394ea8: 0xaea00058  sw          $zero, 0x58($s5)
    ctx->pc = 0x394ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 88), GPR_U32(ctx, 0));
label_394eac:
    // 0x394eac: 0xaeb4005c  sw          $s4, 0x5C($s5)
    ctx->pc = 0x394eacu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 92), GPR_U32(ctx, 20));
label_394eb0:
    // 0x394eb0: 0xaeb30060  sw          $s3, 0x60($s5)
    ctx->pc = 0x394eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 96), GPR_U32(ctx, 19));
label_394eb4:
    // 0x394eb4: 0xe6b90064  swc1        $f25, 0x64($s5)
    ctx->pc = 0x394eb4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 100), bits); }
label_394eb8:
    // 0x394eb8: 0xe6b80068  swc1        $f24, 0x68($s5)
    ctx->pc = 0x394eb8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 104), bits); }
label_394ebc:
    // 0x394ebc: 0xe6b7006c  swc1        $f23, 0x6C($s5)
    ctx->pc = 0x394ebcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 108), bits); }
label_394ec0:
    // 0x394ec0: 0xe6b60070  swc1        $f22, 0x70($s5)
    ctx->pc = 0x394ec0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 112), bits); }
label_394ec4:
    // 0x394ec4: 0xaeb20074  sw          $s2, 0x74($s5)
    ctx->pc = 0x394ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 116), GPR_U32(ctx, 18));
label_394ec8:
    // 0x394ec8: 0xaeb10078  sw          $s1, 0x78($s5)
    ctx->pc = 0x394ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 120), GPR_U32(ctx, 17));
label_394ecc:
    // 0x394ecc: 0xaeb0007c  sw          $s0, 0x7C($s5)
    ctx->pc = 0x394eccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 124), GPR_U32(ctx, 16));
label_394ed0:
    // 0x394ed0: 0xaeb60080  sw          $s6, 0x80($s5)
    ctx->pc = 0x394ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 128), GPR_U32(ctx, 22));
label_394ed4:
    // 0x394ed4: 0xaeb70084  sw          $s7, 0x84($s5)
    ctx->pc = 0x394ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 132), GPR_U32(ctx, 23));
label_394ed8:
    // 0x394ed8: 0xe6b50088  swc1        $f21, 0x88($s5)
    ctx->pc = 0x394ed8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 136), bits); }
label_394edc:
    // 0x394edc: 0xe6b4008c  swc1        $f20, 0x8C($s5)
    ctx->pc = 0x394edcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 140), bits); }
label_394ee0:
    // 0x394ee0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x394ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_394ee4:
    // 0x394ee4: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x394ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_394ee8:
    // 0x394ee8: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x394ee8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_394eec:
    // 0x394eec: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x394eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_394ef0:
    // 0x394ef0: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x394ef0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_394ef4:
    // 0x394ef4: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x394ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_394ef8:
    // 0x394ef8: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x394ef8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_394efc:
    // 0x394efc: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x394efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_394f00:
    // 0x394f00: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x394f00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_394f04:
    // 0x394f04: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x394f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_394f08:
    // 0x394f08: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x394f08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_394f0c:
    // 0x394f0c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x394f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_394f10:
    // 0x394f10: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x394f10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_394f14:
    // 0x394f14: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x394f14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_394f18:
    // 0x394f18: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x394f18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_394f1c:
    // 0x394f1c: 0x3e00008  jr          $ra
label_394f20:
    if (ctx->pc == 0x394F20u) {
        ctx->pc = 0x394F20u;
            // 0x394f20: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x394F24u;
        goto label_394f24;
    }
    ctx->pc = 0x394F1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x394F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x394F1Cu;
            // 0x394f20: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x394F24u;
label_394f24:
    // 0x394f24: 0x0  nop
    ctx->pc = 0x394f24u;
    // NOP
label_394f28:
    // 0x394f28: 0x0  nop
    ctx->pc = 0x394f28u;
    // NOP
label_394f2c:
    // 0x394f2c: 0x0  nop
    ctx->pc = 0x394f2cu;
    // NOP
label_394f30:
    // 0x394f30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x394f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_394f34:
    // 0x394f34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x394f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_394f38:
    // 0x394f38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x394f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_394f3c:
    // 0x394f3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x394f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_394f40:
    // 0x394f40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x394f40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_394f44:
    // 0x394f44: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
label_394f48:
    if (ctx->pc == 0x394F48u) {
        ctx->pc = 0x394F48u;
            // 0x394f48: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x394F4Cu;
        goto label_394f4c;
    }
    ctx->pc = 0x394F44u;
    {
        const bool branch_taken_0x394f44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x394F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x394F44u;
            // 0x394f48: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394f44) {
            ctx->pc = 0x394FA8u;
            goto label_394fa8;
        }
    }
    ctx->pc = 0x394F4Cu;
label_394f4c:
    // 0x394f4c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x394f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_394f50:
    // 0x394f50: 0x24428080  addiu       $v0, $v0, -0x7F80
    ctx->pc = 0x394f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934656));
label_394f54:
    // 0x394f54: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_394f58:
    if (ctx->pc == 0x394F58u) {
        ctx->pc = 0x394F58u;
            // 0x394f58: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x394F5Cu;
        goto label_394f5c;
    }
    ctx->pc = 0x394F54u;
    {
        const bool branch_taken_0x394f54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x394F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x394F54u;
            // 0x394f58: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394f54) {
            ctx->pc = 0x394F90u;
            goto label_394f90;
        }
    }
    ctx->pc = 0x394F5Cu;
label_394f5c:
    // 0x394f5c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x394f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_394f60:
    // 0x394f60: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x394f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_394f64:
    // 0x394f64: 0xc0d37dc  jal         func_34DF70
label_394f68:
    if (ctx->pc == 0x394F68u) {
        ctx->pc = 0x394F68u;
            // 0x394f68: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x394F6Cu;
        goto label_394f6c;
    }
    ctx->pc = 0x394F64u;
    SET_GPR_U32(ctx, 31, 0x394F6Cu);
    ctx->pc = 0x394F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x394F64u;
            // 0x394f68: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x394F6Cu; }
        if (ctx->pc != 0x394F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x394F6Cu; }
        if (ctx->pc != 0x394F6Cu) { return; }
    }
    ctx->pc = 0x394F6Cu;
label_394f6c:
    // 0x394f6c: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
label_394f70:
    if (ctx->pc == 0x394F70u) {
        ctx->pc = 0x394F70u;
            // 0x394f70: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x394F74u;
        goto label_394f74;
    }
    ctx->pc = 0x394F6Cu;
    {
        const bool branch_taken_0x394f6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x394f6c) {
            ctx->pc = 0x394F70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x394F6Cu;
            // 0x394f70: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x394F94u;
            goto label_394f94;
        }
    }
    ctx->pc = 0x394F74u;
label_394f74:
    // 0x394f74: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x394f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_394f78:
    // 0x394f78: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x394f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_394f7c:
    // 0x394f7c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_394f80:
    if (ctx->pc == 0x394F80u) {
        ctx->pc = 0x394F80u;
            // 0x394f80: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x394F84u;
        goto label_394f84;
    }
    ctx->pc = 0x394F7Cu;
    {
        const bool branch_taken_0x394f7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x394F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x394F7Cu;
            // 0x394f80: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394f7c) {
            ctx->pc = 0x394F90u;
            goto label_394f90;
        }
    }
    ctx->pc = 0x394F84u;
label_394f84:
    // 0x394f84: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x394f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_394f88:
    // 0x394f88: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x394f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_394f8c:
    // 0x394f8c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x394f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_394f90:
    // 0x394f90: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x394f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_394f94:
    // 0x394f94: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x394f94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_394f98:
    // 0x394f98: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_394f9c:
    if (ctx->pc == 0x394F9Cu) {
        ctx->pc = 0x394F9Cu;
            // 0x394f9c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x394FA0u;
        goto label_394fa0;
    }
    ctx->pc = 0x394F98u;
    {
        const bool branch_taken_0x394f98 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x394f98) {
            ctx->pc = 0x394F9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x394F98u;
            // 0x394f9c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x394FACu;
            goto label_394fac;
        }
    }
    ctx->pc = 0x394FA0u;
label_394fa0:
    // 0x394fa0: 0xc0400a8  jal         func_1002A0
label_394fa4:
    if (ctx->pc == 0x394FA4u) {
        ctx->pc = 0x394FA4u;
            // 0x394fa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x394FA8u;
        goto label_394fa8;
    }
    ctx->pc = 0x394FA0u;
    SET_GPR_U32(ctx, 31, 0x394FA8u);
    ctx->pc = 0x394FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x394FA0u;
            // 0x394fa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x394FA8u; }
        if (ctx->pc != 0x394FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x394FA8u; }
        if (ctx->pc != 0x394FA8u) { return; }
    }
    ctx->pc = 0x394FA8u;
label_394fa8:
    // 0x394fa8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x394fa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_394fac:
    // 0x394fac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x394facu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_394fb0:
    // 0x394fb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x394fb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_394fb4:
    // 0x394fb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x394fb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_394fb8:
    // 0x394fb8: 0x3e00008  jr          $ra
label_394fbc:
    if (ctx->pc == 0x394FBCu) {
        ctx->pc = 0x394FBCu;
            // 0x394fbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x394FC0u;
        goto label_394fc0;
    }
    ctx->pc = 0x394FB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x394FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x394FB8u;
            // 0x394fbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x394FC0u;
label_394fc0:
    // 0x394fc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x394fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_394fc4:
    // 0x394fc4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x394fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_394fc8:
    // 0x394fc8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x394fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_394fcc:
    // 0x394fcc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x394fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_394fd0:
    // 0x394fd0: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x394fd0u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_394fd4:
    // 0x394fd4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x394fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_394fd8:
    // 0x394fd8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x394fd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_394fdc:
    // 0x394fdc: 0x8ca30e38  lw          $v1, 0xE38($a1)
    ctx->pc = 0x394fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3640)));
label_394fe0:
    // 0x394fe0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x394fe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_394fe4:
    // 0x394fe4: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_394fe8:
    if (ctx->pc == 0x394FE8u) {
        ctx->pc = 0x394FE8u;
            // 0x394fe8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x394FECu;
        goto label_394fec;
    }
    ctx->pc = 0x394FE4u;
    {
        const bool branch_taken_0x394fe4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x394FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x394FE4u;
            // 0x394fe8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394fe4) {
            ctx->pc = 0x394FFCu;
            goto label_394ffc;
        }
    }
    ctx->pc = 0x394FECu;
label_394fec:
    // 0x394fec: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x394fecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_394ff0:
    // 0x394ff0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_394ff4:
    if (ctx->pc == 0x394FF4u) {
        ctx->pc = 0x394FF8u;
        goto label_394ff8;
    }
    ctx->pc = 0x394FF0u;
    {
        const bool branch_taken_0x394ff0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x394ff0) {
            ctx->pc = 0x394FFCu;
            goto label_394ffc;
        }
    }
    ctx->pc = 0x394FF8u;
label_394ff8:
    // 0x394ff8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x394ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_394ffc:
    // 0x394ffc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_395000:
    if (ctx->pc == 0x395000u) {
        ctx->pc = 0x395004u;
        goto label_395004;
    }
    ctx->pc = 0x394FFCu;
    {
        const bool branch_taken_0x394ffc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x394ffc) {
            ctx->pc = 0x395018u;
            goto label_395018;
        }
    }
    ctx->pc = 0x395004u;
label_395004:
    // 0x395004: 0xc075eb4  jal         func_1D7AD0
label_395008:
    if (ctx->pc == 0x395008u) {
        ctx->pc = 0x395008u;
            // 0x395008: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39500Cu;
        goto label_39500c;
    }
    ctx->pc = 0x395004u;
    SET_GPR_U32(ctx, 31, 0x39500Cu);
    ctx->pc = 0x395008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x395004u;
            // 0x395008: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39500Cu; }
        if (ctx->pc != 0x39500Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39500Cu; }
        if (ctx->pc != 0x39500Cu) { return; }
    }
    ctx->pc = 0x39500Cu;
label_39500c:
    // 0x39500c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_395010:
    if (ctx->pc == 0x395010u) {
        ctx->pc = 0x395014u;
        goto label_395014;
    }
    ctx->pc = 0x39500Cu;
    {
        const bool branch_taken_0x39500c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39500c) {
            ctx->pc = 0x395018u;
            goto label_395018;
        }
    }
    ctx->pc = 0x395014u;
label_395014:
    // 0x395014: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x395014u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_395018:
    // 0x395018: 0x52400121  beql        $s2, $zero, . + 4 + (0x121 << 2)
label_39501c:
    if (ctx->pc == 0x39501Cu) {
        ctx->pc = 0x39501Cu;
            // 0x39501c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x395020u;
        goto label_395020;
    }
    ctx->pc = 0x395018u;
    {
        const bool branch_taken_0x395018 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x395018) {
            ctx->pc = 0x39501Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x395018u;
            // 0x39501c: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3954A0u;
            goto label_3954a0;
        }
    }
    ctx->pc = 0x395020u;
label_395020:
    // 0x395020: 0x8e270048  lw          $a3, 0x48($s1)
    ctx->pc = 0x395020u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_395024:
    // 0x395024: 0x90e30004  lbu         $v1, 0x4($a3)
    ctx->pc = 0x395024u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
label_395028:
    // 0x395028: 0x1060011c  beqz        $v1, . + 4 + (0x11C << 2)
label_39502c:
    if (ctx->pc == 0x39502Cu) {
        ctx->pc = 0x395030u;
        goto label_395030;
    }
    ctx->pc = 0x395028u;
    {
        const bool branch_taken_0x395028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x395028) {
            ctx->pc = 0x39549Cu;
            goto label_39549c;
        }
    }
    ctx->pc = 0x395030u;
label_395030:
    // 0x395030: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x395030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_395034:
    // 0x395034: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x395034u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
label_395038:
    // 0x395038: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x395038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_39503c:
    // 0x39503c: 0x8c86d120  lw          $a2, -0x2EE0($a0)
    ctx->pc = 0x39503cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294955296)));
label_395040:
    // 0x395040: 0x8e090db0  lw          $t1, 0xDB0($s0)
    ctx->pc = 0x395040u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
label_395044:
    // 0x395044: 0x24040021  addiu       $a0, $zero, 0x21
    ctx->pc = 0x395044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_395048:
    // 0x395048: 0x15240002  bne         $t1, $a0, . + 4 + (0x2 << 2)
label_39504c:
    if (ctx->pc == 0x39504Cu) {
        ctx->pc = 0x39504Cu;
            // 0x39504c: 0x8065007a  lb          $a1, 0x7A($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 122)));
        ctx->pc = 0x395050u;
        goto label_395050;
    }
    ctx->pc = 0x395048u;
    {
        const bool branch_taken_0x395048 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 4));
        ctx->pc = 0x39504Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x395048u;
            // 0x39504c: 0x8065007a  lb          $a1, 0x7A($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 122)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395048) {
            ctx->pc = 0x395054u;
            goto label_395054;
        }
    }
    ctx->pc = 0x395050u;
label_395050:
    // 0x395050: 0x24090011  addiu       $t1, $zero, 0x11
    ctx->pc = 0x395050u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_395054:
    // 0x395054: 0x90e30005  lbu         $v1, 0x5($a3)
    ctx->pc = 0x395054u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
label_395058:
    // 0x395058: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_39505c:
    if (ctx->pc == 0x39505Cu) {
        ctx->pc = 0x39505Cu;
            // 0x39505c: 0x8e240048  lw          $a0, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->pc = 0x395060u;
        goto label_395060;
    }
    ctx->pc = 0x395058u;
    {
        const bool branch_taken_0x395058 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x395058) {
            ctx->pc = 0x39505Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x395058u;
            // 0x39505c: 0x8e240048  lw          $a0, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3950B4u;
            goto label_3950b4;
        }
    }
    ctx->pc = 0x395060u;
label_395060:
    // 0x395060: 0x8e040e34  lw          $a0, 0xE34($s0)
    ctx->pc = 0x395060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_395064:
    // 0x395064: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x395064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_395068:
    // 0x395068: 0x1483010c  bne         $a0, $v1, . + 4 + (0x10C << 2)
label_39506c:
    if (ctx->pc == 0x39506Cu) {
        ctx->pc = 0x395070u;
        goto label_395070;
    }
    ctx->pc = 0x395068u;
    {
        const bool branch_taken_0x395068 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x395068) {
            ctx->pc = 0x39549Cu;
            goto label_39549c;
        }
    }
    ctx->pc = 0x395070u;
label_395070:
    // 0x395070: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x395070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_395074:
    // 0x395074: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x395074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_395078:
    // 0x395078: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x395078u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_39507c:
    // 0x39507c: 0x2c610012  sltiu       $at, $v1, 0x12
    ctx->pc = 0x39507cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
label_395080:
    // 0x395080: 0x14200106  bnez        $at, . + 4 + (0x106 << 2)
label_395084:
    if (ctx->pc == 0x395084u) {
        ctx->pc = 0x395088u;
        goto label_395088;
    }
    ctx->pc = 0x395080u;
    {
        const bool branch_taken_0x395080 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x395080) {
            ctx->pc = 0x39549Cu;
            goto label_39549c;
        }
    }
    ctx->pc = 0x395088u;
label_395088:
    // 0x395088: 0x8ce4003c  lw          $a0, 0x3C($a3)
    ctx->pc = 0x395088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
label_39508c:
    // 0x39508c: 0x8e031220  lw          $v1, 0x1220($s0)
    ctx->pc = 0x39508cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4640)));
label_395090:
    // 0x395090: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
label_395094:
    if (ctx->pc == 0x395094u) {
        ctx->pc = 0x395098u;
        goto label_395098;
    }
    ctx->pc = 0x395090u;
    {
        const bool branch_taken_0x395090 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x395090) {
            ctx->pc = 0x3950B0u;
            goto label_3950b0;
        }
    }
    ctx->pc = 0x395098u;
label_395098:
    // 0x395098: 0x8ce30038  lw          $v1, 0x38($a3)
    ctx->pc = 0x395098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
label_39509c:
    // 0x39509c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x39509cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_3950a0:
    // 0x3950a0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_3950a4:
    if (ctx->pc == 0x3950A4u) {
        ctx->pc = 0x3950A8u;
        goto label_3950a8;
    }
    ctx->pc = 0x3950A0u;
    {
        const bool branch_taken_0x3950a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3950a0) {
            ctx->pc = 0x3950B0u;
            goto label_3950b0;
        }
    }
    ctx->pc = 0x3950A8u;
label_3950a8:
    // 0x3950a8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3950a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3950ac:
    // 0x3950ac: 0xae031220  sw          $v1, 0x1220($s0)
    ctx->pc = 0x3950acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4640), GPR_U32(ctx, 3));
label_3950b0:
    // 0x3950b0: 0x8e240048  lw          $a0, 0x48($s1)
    ctx->pc = 0x3950b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_3950b4:
    // 0x3950b4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3950b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3950b8:
    // 0x3950b8: 0x1283804  sllv        $a3, $t0, $t1
    ctx->pc = 0x3950b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 9) & 0x1F));
label_3950bc:
    // 0x3950bc: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x3950bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_3950c0:
    // 0x3950c0: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x3950c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
label_3950c4:
    // 0x3950c4: 0x106000f5  beqz        $v1, . + 4 + (0xF5 << 2)
label_3950c8:
    if (ctx->pc == 0x3950C8u) {
        ctx->pc = 0x3950CCu;
        goto label_3950cc;
    }
    ctx->pc = 0x3950C4u;
    {
        const bool branch_taken_0x3950c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3950c4) {
            ctx->pc = 0x39549Cu;
            goto label_39549c;
        }
    }
    ctx->pc = 0x3950CCu;
label_3950cc:
    // 0x3950cc: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x3950ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_3950d0:
    // 0x3950d0: 0x30671c00  andi        $a3, $v1, 0x1C00
    ctx->pc = 0x3950d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7168);
label_3950d4:
    // 0x3950d4: 0x50e0001e  beql        $a3, $zero, . + 4 + (0x1E << 2)
label_3950d8:
    if (ctx->pc == 0x3950D8u) {
        ctx->pc = 0x3950D8u;
            // 0x3950d8: 0x30652000  andi        $a1, $v1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
        ctx->pc = 0x3950DCu;
        goto label_3950dc;
    }
    ctx->pc = 0x3950D4u;
    {
        const bool branch_taken_0x3950d4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x3950d4) {
            ctx->pc = 0x3950D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3950D4u;
            // 0x3950d8: 0x30652000  andi        $a1, $v1, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
            ctx->pc = 0x395150u;
            goto label_395150;
        }
    }
    ctx->pc = 0x3950DCu;
label_3950dc:
    // 0x3950dc: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x3950dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3950e0:
    // 0x3950e0: 0x50a70016  beql        $a1, $a3, . + 4 + (0x16 << 2)
label_3950e4:
    if (ctx->pc == 0x3950E4u) {
        ctx->pc = 0x3950E4u;
            // 0x3950e4: 0x30651000  andi        $a1, $v1, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
        ctx->pc = 0x3950E8u;
        goto label_3950e8;
    }
    ctx->pc = 0x3950E0u;
    {
        const bool branch_taken_0x3950e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x3950e0) {
            ctx->pc = 0x3950E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3950E0u;
            // 0x3950e4: 0x30651000  andi        $a1, $v1, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
            ctx->pc = 0x39513Cu;
            goto label_39513c;
        }
    }
    ctx->pc = 0x3950E8u;
label_3950e8:
    // 0x3950e8: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x3950e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3950ec:
    // 0x3950ec: 0x10a70012  beq         $a1, $a3, . + 4 + (0x12 << 2)
label_3950f0:
    if (ctx->pc == 0x3950F0u) {
        ctx->pc = 0x3950F4u;
        goto label_3950f4;
    }
    ctx->pc = 0x3950ECu;
    {
        const bool branch_taken_0x3950ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x3950ec) {
            ctx->pc = 0x395138u;
            goto label_395138;
        }
    }
    ctx->pc = 0x3950F4u;
label_3950f4:
    // 0x3950f4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x3950f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3950f8:
    // 0x3950f8: 0x50a7000b  beql        $a1, $a3, . + 4 + (0xB << 2)
label_3950fc:
    if (ctx->pc == 0x3950FCu) {
        ctx->pc = 0x3950FCu;
            // 0x3950fc: 0x30650800  andi        $a1, $v1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
        ctx->pc = 0x395100u;
        goto label_395100;
    }
    ctx->pc = 0x3950F8u;
    {
        const bool branch_taken_0x3950f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        if (branch_taken_0x3950f8) {
            ctx->pc = 0x3950FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3950F8u;
            // 0x3950fc: 0x30650800  andi        $a1, $v1, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
            ctx->pc = 0x395128u;
            goto label_395128;
        }
    }
    ctx->pc = 0x395100u;
label_395100:
    // 0x395100: 0x50a80004  beql        $a1, $t0, . + 4 + (0x4 << 2)
label_395104:
    if (ctx->pc == 0x395104u) {
        ctx->pc = 0x395104u;
            // 0x395104: 0x30650400  andi        $a1, $v1, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
        ctx->pc = 0x395108u;
        goto label_395108;
    }
    ctx->pc = 0x395100u;
    {
        const bool branch_taken_0x395100 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 8));
        if (branch_taken_0x395100) {
            ctx->pc = 0x395104u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x395100u;
            // 0x395104: 0x30650400  andi        $a1, $v1, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
            ctx->pc = 0x395114u;
            goto label_395114;
        }
    }
    ctx->pc = 0x395108u;
label_395108:
    // 0x395108: 0x10000028  b           . + 4 + (0x28 << 2)
label_39510c:
    if (ctx->pc == 0x39510Cu) {
        ctx->pc = 0x39510Cu;
            // 0x39510c: 0x30630002  andi        $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->pc = 0x395110u;
        goto label_395110;
    }
    ctx->pc = 0x395108u;
    {
        const bool branch_taken_0x395108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39510Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x395108u;
            // 0x39510c: 0x30630002  andi        $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x395108) {
            ctx->pc = 0x3951ACu;
            goto label_3951ac;
        }
    }
    ctx->pc = 0x395110u;
label_395110:
    // 0x395110: 0x30650400  andi        $a1, $v1, 0x400
    ctx->pc = 0x395110u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_395114:
    // 0x395114: 0x14a00024  bnez        $a1, . + 4 + (0x24 << 2)
label_395118:
    if (ctx->pc == 0x395118u) {
        ctx->pc = 0x39511Cu;
        goto label_39511c;
    }
    ctx->pc = 0x395114u;
    {
        const bool branch_taken_0x395114 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x395114) {
            ctx->pc = 0x3951A8u;
            goto label_3951a8;
        }
    }
    ctx->pc = 0x39511Cu;
label_39511c:
    // 0x39511c: 0x100000df  b           . + 4 + (0xDF << 2)
label_395120:
    if (ctx->pc == 0x395120u) {
        ctx->pc = 0x395124u;
        goto label_395124;
    }
    ctx->pc = 0x39511Cu;
    {
        const bool branch_taken_0x39511c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39511c) {
            ctx->pc = 0x39549Cu;
            goto label_39549c;
        }
    }
    ctx->pc = 0x395124u;
label_395124:
    // 0x395124: 0x30650800  andi        $a1, $v1, 0x800
    ctx->pc = 0x395124u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
label_395128:
    // 0x395128: 0x14a0001f  bnez        $a1, . + 4 + (0x1F << 2)
label_39512c:
    if (ctx->pc == 0x39512Cu) {
        ctx->pc = 0x395130u;
        goto label_395130;
    }
    ctx->pc = 0x395128u;
    {
        const bool branch_taken_0x395128 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x395128) {
            ctx->pc = 0x3951A8u;
            goto label_3951a8;
        }
    }
    ctx->pc = 0x395130u;
label_395130:
    // 0x395130: 0x100000da  b           . + 4 + (0xDA << 2)
label_395134:
    if (ctx->pc == 0x395134u) {
        ctx->pc = 0x395138u;
        goto label_395138;
    }
    ctx->pc = 0x395130u;
    {
        const bool branch_taken_0x395130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x395130) {
            ctx->pc = 0x39549Cu;
            goto label_39549c;
        }
    }
    ctx->pc = 0x395138u;
label_395138:
    // 0x395138: 0x30651000  andi        $a1, $v1, 0x1000
    ctx->pc = 0x395138u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
label_39513c:
    // 0x39513c: 0x14a0001a  bnez        $a1, . + 4 + (0x1A << 2)
label_395140:
    if (ctx->pc == 0x395140u) {
        ctx->pc = 0x395144u;
        goto label_395144;
    }
    ctx->pc = 0x39513Cu;
    {
        const bool branch_taken_0x39513c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x39513c) {
            ctx->pc = 0x3951A8u;
            goto label_3951a8;
        }
    }
    ctx->pc = 0x395144u;
label_395144:
    // 0x395144: 0x100000d5  b           . + 4 + (0xD5 << 2)
label_395148:
    if (ctx->pc == 0x395148u) {
        ctx->pc = 0x39514Cu;
        goto label_39514c;
    }
    ctx->pc = 0x395144u;
    {
        const bool branch_taken_0x395144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x395144) {
            ctx->pc = 0x39549Cu;
            goto label_39549c;
        }
    }
    ctx->pc = 0x39514Cu;
label_39514c:
    // 0x39514c: 0x30652000  andi        $a1, $v1, 0x2000
    ctx->pc = 0x39514cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
label_395150:
    // 0x395150: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
label_395154:
    if (ctx->pc == 0x395154u) {
        ctx->pc = 0x395158u;
        goto label_395158;
    }
    ctx->pc = 0x395150u;
    {
        const bool branch_taken_0x395150 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x395150) {
            ctx->pc = 0x3951A8u;
            goto label_3951a8;
        }
    }
    ctx->pc = 0x395158u;
label_395158:
    // 0x395158: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x395158u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
label_39515c:
    // 0x39515c: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x39515cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_395160:
    // 0x395160: 0x8ca589d0  lw          $a1, -0x7630($a1)
    ctx->pc = 0x395160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294937040)));
label_395164:
    // 0x395164: 0x8ca50084  lw          $a1, 0x84($a1)
    ctx->pc = 0x395164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 132)));
label_395168:
    // 0x395168: 0x14a700cc  bne         $a1, $a3, . + 4 + (0xCC << 2)
label_39516c:
    if (ctx->pc == 0x39516Cu) {
        ctx->pc = 0x395170u;
        goto label_395170;
    }
    ctx->pc = 0x395168u;
    {
        const bool branch_taken_0x395168 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        if (branch_taken_0x395168) {
            ctx->pc = 0x39549Cu;
            goto label_39549c;
        }
    }
    ctx->pc = 0x395170u;
label_395170:
    // 0x395170: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x395170u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_395174:
    // 0x395174: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x395174u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_395178:
    // 0x395178: 0x8ca50e80  lw          $a1, 0xE80($a1)
    ctx->pc = 0x395178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3712)));
label_39517c:
    // 0x39517c: 0x90a50ce4  lbu         $a1, 0xCE4($a1)
    ctx->pc = 0x39517cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3300)));
label_395180:
    // 0x395180: 0x14a700c6  bne         $a1, $a3, . + 4 + (0xC6 << 2)
label_395184:
    if (ctx->pc == 0x395184u) {
        ctx->pc = 0x395188u;
        goto label_395188;
    }
    ctx->pc = 0x395180u;
    {
        const bool branch_taken_0x395180 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        if (branch_taken_0x395180) {
            ctx->pc = 0x39549Cu;
            goto label_39549c;
        }
    }
    ctx->pc = 0x395188u;
label_395188:
    // 0x395188: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x395188u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_39518c:
    // 0x39518c: 0x8ca50e84  lw          $a1, 0xE84($a1)
    ctx->pc = 0x39518cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3716)));
label_395190:
    // 0x395190: 0x8ca50d6c  lw          $a1, 0xD6C($a1)
    ctx->pc = 0x395190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3436)));
label_395194:
    // 0x395194: 0x8ca50014  lw          $a1, 0x14($a1)
    ctx->pc = 0x395194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_395198:
    // 0x395198: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_39519c:
    if (ctx->pc == 0x39519Cu) {
        ctx->pc = 0x3951A0u;
        goto label_3951a0;
    }
    ctx->pc = 0x395198u;
    {
        const bool branch_taken_0x395198 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x395198) {
            ctx->pc = 0x3951A8u;
            goto label_3951a8;
        }
    }
    ctx->pc = 0x3951A0u;
label_3951a0:
    // 0x3951a0: 0x100000be  b           . + 4 + (0xBE << 2)
label_3951a4:
    if (ctx->pc == 0x3951A4u) {
        ctx->pc = 0x3951A8u;
        goto label_3951a8;
    }
    ctx->pc = 0x3951A0u;
    {
        const bool branch_taken_0x3951a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3951a0) {
            ctx->pc = 0x39549Cu;
            goto label_39549c;
        }
    }
    ctx->pc = 0x3951A8u;
label_3951a8:
    // 0x3951a8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x3951a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_3951ac:
    // 0x3951ac: 0x106000bb  beqz        $v1, . + 4 + (0xBB << 2)
label_3951b0:
    if (ctx->pc == 0x3951B0u) {
        ctx->pc = 0x3951B4u;
        goto label_3951b4;
    }
    ctx->pc = 0x3951ACu;
    {
        const bool branch_taken_0x3951ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3951ac) {
            ctx->pc = 0x39549Cu;
            goto label_39549c;
        }
    }
    ctx->pc = 0x3951B4u;
label_3951b4:
    // 0x3951b4: 0x8c830030  lw          $v1, 0x30($a0)
    ctx->pc = 0x3951b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_3951b8:
    // 0x3951b8: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x3951b8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_3951bc:
    // 0x3951bc: 0x102000b7  beqz        $at, . + 4 + (0xB7 << 2)
label_3951c0:
    if (ctx->pc == 0x3951C0u) {
        ctx->pc = 0x3951C4u;
        goto label_3951c4;
    }
    ctx->pc = 0x3951BCu;
    {
        const bool branch_taken_0x3951bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3951bc) {
            ctx->pc = 0x39549Cu;
            goto label_39549c;
        }
    }
    ctx->pc = 0x3951C4u;
label_3951c4:
    // 0x3951c4: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x3951c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_3951c8:
    // 0x3951c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3951c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3951cc:
    // 0x3951cc: 0x24a56d40  addiu       $a1, $a1, 0x6D40
    ctx->pc = 0x3951ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27968));
label_3951d0:
    // 0x3951d0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3951d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3951d4:
    // 0x3951d4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3951d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3951d8:
    // 0x3951d8: 0x600008  jr          $v1
label_3951dc:
    if (ctx->pc == 0x3951DCu) {
        ctx->pc = 0x3951E0u;
        goto label_3951e0;
    }
    ctx->pc = 0x3951D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3951E0u: goto label_3951e0;
            case 0x3952B8u: goto label_3952b8;
            case 0x39534Cu: goto label_39534c;
            case 0x3953A8u: goto label_3953a8;
            case 0x395404u: goto label_395404;
            case 0x395460u: goto label_395460;
            case 0x39549Cu: goto label_39549c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x3951E0u;
label_3951e0:
    // 0x3951e0: 0x820511aa  lb          $a1, 0x11AA($s0)
    ctx->pc = 0x3951e0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
label_3951e4:
    // 0x3951e4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3951e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3951e8:
    // 0x3951e8: 0x8cc60010  lw          $a2, 0x10($a2)
    ctx->pc = 0x3951e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_3951ec:
    // 0x3951ec: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3951ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3951f0:
    // 0x3951f0: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3951f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3951f4:
    // 0x3951f4: 0x53880  sll         $a3, $a1, 2
    ctx->pc = 0x3951f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3951f8:
    // 0x3951f8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x3951f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_3951fc:
    // 0x3951fc: 0x8c456480  lw          $a1, 0x6480($v0)
    ctx->pc = 0x3951fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25728)));
label_395200:
    // 0x395200: 0x8cd00000  lw          $s0, 0x0($a2)
    ctx->pc = 0x395200u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_395204:
    // 0x395204: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x395204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_395208:
    // 0x395208: 0x8c660968  lw          $a2, 0x968($v1)
    ctx->pc = 0x395208u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2408)));
label_39520c:
    // 0x39520c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x39520cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_395210:
    // 0x395210: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x395210u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_395214:
    // 0x395214: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x395214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_395218:
    // 0x395218: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x395218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_39521c:
    // 0x39521c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x39521cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_395220:
    // 0x395220: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x395220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_395224:
    // 0x395224: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x395224u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_395228:
    // 0x395228: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x395228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_39522c:
    // 0x39522c: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x39522cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_395230:
    // 0x395230: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x395230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_395234:
    // 0x395234: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x395234u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_395238:
    // 0x395238: 0x320f809  jalr        $t9
label_39523c:
    if (ctx->pc == 0x39523Cu) {
        ctx->pc = 0x39523Cu;
            // 0x39523c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x395240u;
        goto label_395240;
    }
    ctx->pc = 0x395238u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x395240u);
        ctx->pc = 0x39523Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x395238u;
            // 0x39523c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x395240u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x395240u; }
            if (ctx->pc != 0x395240u) { return; }
        }
        }
    }
    ctx->pc = 0x395240u;
label_395240:
    // 0x395240: 0xa0400565  sb          $zero, 0x565($v0)
    ctx->pc = 0x395240u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1381), (uint8_t)GPR_U32(ctx, 0));
label_395244:
    // 0x395244: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x395244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_395248:
    // 0x395248: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_39524c:
    if (ctx->pc == 0x39524Cu) {
        ctx->pc = 0x39524Cu;
            // 0x39524c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x395250u;
        goto label_395250;
    }
    ctx->pc = 0x395248u;
    {
        const bool branch_taken_0x395248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x395248) {
            ctx->pc = 0x39524Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x395248u;
            // 0x39524c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x395288u;
            goto label_395288;
        }
    }
    ctx->pc = 0x395250u;
label_395250:
    // 0x395250: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x395250u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_395254:
    // 0x395254: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x395254u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_395258:
    // 0x395258: 0x320f809  jalr        $t9
label_39525c:
    if (ctx->pc == 0x39525Cu) {
        ctx->pc = 0x39525Cu;
            // 0x39525c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x395260u;
        goto label_395260;
    }
    ctx->pc = 0x395258u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x395260u);
        ctx->pc = 0x39525Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x395258u;
            // 0x39525c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x395260u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x395260u; }
            if (ctx->pc != 0x395260u) { return; }
        }
        }
    }
    ctx->pc = 0x395260u;
label_395260:
    // 0x395260: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x395260u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_395264:
    // 0x395264: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x395264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_395268:
    // 0x395268: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x395268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_39526c:
    // 0x39526c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x39526cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_395270:
    // 0x395270: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x395270u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_395274:
    // 0x395274: 0x320f809  jalr        $t9
label_395278:
    if (ctx->pc == 0x395278u) {
        ctx->pc = 0x395278u;
            // 0x395278: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39527Cu;
        goto label_39527c;
    }
    ctx->pc = 0x395274u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39527Cu);
        ctx->pc = 0x395278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x395274u;
            // 0x395278: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39527Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39527Cu; }
            if (ctx->pc != 0x39527Cu) { return; }
        }
        }
    }
    ctx->pc = 0x39527Cu;
label_39527c:
    // 0x39527c: 0x10000087  b           . + 4 + (0x87 << 2)
label_395280:
    if (ctx->pc == 0x395280u) {
        ctx->pc = 0x395284u;
        goto label_395284;
    }
    ctx->pc = 0x39527Cu;
    {
        const bool branch_taken_0x39527c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39527c) {
            ctx->pc = 0x39549Cu;
            goto label_39549c;
        }
    }
    ctx->pc = 0x395284u;
label_395284:
    // 0x395284: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x395284u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_395288:
    // 0x395288: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x395288u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_39528c:
    // 0x39528c: 0x320f809  jalr        $t9
label_395290:
    if (ctx->pc == 0x395290u) {
        ctx->pc = 0x395290u;
            // 0x395290: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x395294u;
        goto label_395294;
    }
    ctx->pc = 0x39528Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x395294u);
        ctx->pc = 0x395290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39528Cu;
            // 0x395290: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x395294u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x395294u; }
            if (ctx->pc != 0x395294u) { return; }
        }
        }
    }
    ctx->pc = 0x395294u;
label_395294:
    // 0x395294: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x395294u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_395298:
    // 0x395298: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x395298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39529c:
    // 0x39529c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x39529cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_3952a0:
    // 0x3952a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3952a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3952a4:
    // 0x3952a4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3952a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3952a8:
    // 0x3952a8: 0x320f809  jalr        $t9
label_3952ac:
    if (ctx->pc == 0x3952ACu) {
        ctx->pc = 0x3952ACu;
            // 0x3952ac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3952B0u;
        goto label_3952b0;
    }
    ctx->pc = 0x3952A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3952B0u);
        ctx->pc = 0x3952ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3952A8u;
            // 0x3952ac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3952B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3952B0u; }
            if (ctx->pc != 0x3952B0u) { return; }
        }
        }
    }
    ctx->pc = 0x3952B0u;
label_3952b0:
    // 0x3952b0: 0x1000007a  b           . + 4 + (0x7A << 2)
label_3952b4:
    if (ctx->pc == 0x3952B4u) {
        ctx->pc = 0x3952B8u;
        goto label_3952b8;
    }
    ctx->pc = 0x3952B0u;
    {
        const bool branch_taken_0x3952b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3952b0) {
            ctx->pc = 0x39549Cu;
            goto label_39549c;
        }
    }
    ctx->pc = 0x3952B8u;
label_3952b8:
    // 0x3952b8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3952b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3952bc:
    // 0x3952bc: 0x820411aa  lb          $a0, 0x11AA($s0)
    ctx->pc = 0x3952bcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
label_3952c0:
    // 0x3952c0: 0x8c43e400  lw          $v1, -0x1C00($v0)
    ctx->pc = 0x3952c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960128)));
label_3952c4:
    // 0x3952c4: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x3952c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_3952c8:
    // 0x3952c8: 0x82082b  sltu        $at, $a0, $v0
    ctx->pc = 0x3952c8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3952cc:
    // 0x3952cc: 0x54200004  bnel        $at, $zero, . + 4 + (0x4 << 2)
label_3952d0:
    if (ctx->pc == 0x3952D0u) {
        ctx->pc = 0x3952D0u;
            // 0x3952d0: 0x8c620060  lw          $v0, 0x60($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
        ctx->pc = 0x3952D4u;
        goto label_3952d4;
    }
    ctx->pc = 0x3952CCu;
    {
        const bool branch_taken_0x3952cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3952cc) {
            ctx->pc = 0x3952D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3952CCu;
            // 0x3952d0: 0x8c620060  lw          $v0, 0x60($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3952E0u;
            goto label_3952e0;
        }
    }
    ctx->pc = 0x3952D4u;
label_3952d4:
    // 0x3952d4: 0x10000005  b           . + 4 + (0x5 << 2)
label_3952d8:
    if (ctx->pc == 0x3952D8u) {
        ctx->pc = 0x3952D8u;
            // 0x3952d8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3952DCu;
        goto label_3952dc;
    }
    ctx->pc = 0x3952D4u;
    {
        const bool branch_taken_0x3952d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3952D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3952D4u;
            // 0x3952d8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3952d4) {
            ctx->pc = 0x3952ECu;
            goto label_3952ec;
        }
    }
    ctx->pc = 0x3952DCu;
label_3952dc:
    // 0x3952dc: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x3952dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_3952e0:
    // 0x3952e0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3952e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3952e4:
    // 0x3952e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3952e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3952e8:
    // 0x3952e8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x3952e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3952ec:
    // 0x3952ec: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x3952ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_3952f0:
    // 0x3952f0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3952f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3952f4:
    // 0x3952f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3952f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3952f8:
    // 0x3952f8: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x3952f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3952fc:
    // 0x3952fc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x3952fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_395300:
    // 0x395300: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x395300u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_395304:
    // 0x395304: 0x320f809  jalr        $t9
label_395308:
    if (ctx->pc == 0x395308u) {
        ctx->pc = 0x395308u;
            // 0x395308: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39530Cu;
        goto label_39530c;
    }
    ctx->pc = 0x395304u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39530Cu);
        ctx->pc = 0x395308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x395304u;
            // 0x395308: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39530Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39530Cu; }
            if (ctx->pc != 0x39530Cu) { return; }
        }
        }
    }
    ctx->pc = 0x39530Cu;
label_39530c:
    // 0x39530c: 0xa0400565  sb          $zero, 0x565($v0)
    ctx->pc = 0x39530cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1381), (uint8_t)GPR_U32(ctx, 0));
label_395310:
    // 0x395310: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x395310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_395314:
    // 0x395314: 0xae020590  sw          $v0, 0x590($s0)
    ctx->pc = 0x395314u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1424), GPR_U32(ctx, 2));
label_395318:
    // 0x395318: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x395318u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_39531c:
    // 0x39531c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x39531cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_395320:
    // 0x395320: 0x320f809  jalr        $t9
label_395324:
    if (ctx->pc == 0x395324u) {
        ctx->pc = 0x395324u;
            // 0x395324: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x395328u;
        goto label_395328;
    }
    ctx->pc = 0x395320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x395328u);
        ctx->pc = 0x395324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x395320u;
            // 0x395324: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x395328u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x395328u; }
            if (ctx->pc != 0x395328u) { return; }
        }
        }
    }
    ctx->pc = 0x395328u;
label_395328:
    // 0x395328: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x395328u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_39532c:
    // 0x39532c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x39532cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_395330:
    // 0x395330: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x395330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
label_395334:
    // 0x395334: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x395334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_395338:
    // 0x395338: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x395338u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_39533c:
    // 0x39533c: 0x320f809  jalr        $t9
label_395340:
    if (ctx->pc == 0x395340u) {
        ctx->pc = 0x395340u;
            // 0x395340: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x395344u;
        goto label_395344;
    }
    ctx->pc = 0x39533Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x395344u);
        ctx->pc = 0x395340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39533Cu;
            // 0x395340: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x395344u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x395344u; }
            if (ctx->pc != 0x395344u) { return; }
        }
        }
    }
    ctx->pc = 0x395344u;
label_395344:
    // 0x395344: 0x10000055  b           . + 4 + (0x55 << 2)
label_395348:
    if (ctx->pc == 0x395348u) {
        ctx->pc = 0x39534Cu;
        goto label_39534c;
    }
    ctx->pc = 0x395344u;
    {
        const bool branch_taken_0x395344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x395344) {
            ctx->pc = 0x39549Cu;
            goto label_39549c;
        }
    }
    ctx->pc = 0x39534Cu;
label_39534c:
    // 0x39534c: 0x820311aa  lb          $v1, 0x11AA($s0)
    ctx->pc = 0x39534cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
label_395350:
    // 0x395350: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x395350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_395354:
    // 0x395354: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x395354u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_395358:
    // 0x395358: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x395358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_39535c:
    // 0x39535c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x39535cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_395360:
    // 0x395360: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x395360u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_395364:
    // 0x395364: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x395364u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_395368:
    // 0x395368: 0x320f809  jalr        $t9
label_39536c:
    if (ctx->pc == 0x39536Cu) {
        ctx->pc = 0x39536Cu;
            // 0x39536c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x395370u;
        goto label_395370;
    }
    ctx->pc = 0x395368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x395370u);
        ctx->pc = 0x39536Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x395368u;
            // 0x39536c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x395370u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x395370u; }
            if (ctx->pc != 0x395370u) { return; }
        }
        }
    }
    ctx->pc = 0x395370u;
label_395370:
    // 0x395370: 0xa0400565  sb          $zero, 0x565($v0)
    ctx->pc = 0x395370u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1381), (uint8_t)GPR_U32(ctx, 0));
label_395374:
    // 0x395374: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x395374u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_395378:
    // 0x395378: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x395378u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_39537c:
    // 0x39537c: 0x320f809  jalr        $t9
label_395380:
    if (ctx->pc == 0x395380u) {
        ctx->pc = 0x395380u;
            // 0x395380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x395384u;
        goto label_395384;
    }
    ctx->pc = 0x39537Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x395384u);
        ctx->pc = 0x395380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39537Cu;
            // 0x395380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x395384u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x395384u; }
            if (ctx->pc != 0x395384u) { return; }
        }
        }
    }
    ctx->pc = 0x395384u;
label_395384:
    // 0x395384: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x395384u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_395388:
    // 0x395388: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x395388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39538c:
    // 0x39538c: 0x2405003a  addiu       $a1, $zero, 0x3A
    ctx->pc = 0x39538cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_395390:
    // 0x395390: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x395390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_395394:
    // 0x395394: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x395394u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_395398:
    // 0x395398: 0x320f809  jalr        $t9
label_39539c:
    if (ctx->pc == 0x39539Cu) {
        ctx->pc = 0x39539Cu;
            // 0x39539c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3953A0u;
        goto label_3953a0;
    }
    ctx->pc = 0x395398u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3953A0u);
        ctx->pc = 0x39539Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x395398u;
            // 0x39539c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3953A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3953A0u; }
            if (ctx->pc != 0x3953A0u) { return; }
        }
        }
    }
    ctx->pc = 0x3953A0u;
label_3953a0:
    // 0x3953a0: 0x1000003e  b           . + 4 + (0x3E << 2)
label_3953a4:
    if (ctx->pc == 0x3953A4u) {
        ctx->pc = 0x3953A8u;
        goto label_3953a8;
    }
    ctx->pc = 0x3953A0u;
    {
        const bool branch_taken_0x3953a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3953a0) {
            ctx->pc = 0x39549Cu;
            goto label_39549c;
        }
    }
    ctx->pc = 0x3953A8u;
label_3953a8:
    // 0x3953a8: 0x820311aa  lb          $v1, 0x11AA($s0)
    ctx->pc = 0x3953a8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
label_3953ac:
    // 0x3953ac: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x3953acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_3953b0:
    // 0x3953b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3953b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3953b4:
    // 0x3953b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3953b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3953b8:
    // 0x3953b8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x3953b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3953bc:
    // 0x3953bc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3953bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3953c0:
    // 0x3953c0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3953c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3953c4:
    // 0x3953c4: 0x320f809  jalr        $t9
label_3953c8:
    if (ctx->pc == 0x3953C8u) {
        ctx->pc = 0x3953C8u;
            // 0x3953c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3953CCu;
        goto label_3953cc;
    }
    ctx->pc = 0x3953C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3953CCu);
        ctx->pc = 0x3953C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3953C4u;
            // 0x3953c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3953CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3953CCu; }
            if (ctx->pc != 0x3953CCu) { return; }
        }
        }
    }
    ctx->pc = 0x3953CCu;
label_3953cc:
    // 0x3953cc: 0xa0400565  sb          $zero, 0x565($v0)
    ctx->pc = 0x3953ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1381), (uint8_t)GPR_U32(ctx, 0));
label_3953d0:
    // 0x3953d0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3953d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3953d4:
    // 0x3953d4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3953d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3953d8:
    // 0x3953d8: 0x320f809  jalr        $t9
label_3953dc:
    if (ctx->pc == 0x3953DCu) {
        ctx->pc = 0x3953DCu;
            // 0x3953dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3953E0u;
        goto label_3953e0;
    }
    ctx->pc = 0x3953D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3953E0u);
        ctx->pc = 0x3953DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3953D8u;
            // 0x3953dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3953E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3953E0u; }
            if (ctx->pc != 0x3953E0u) { return; }
        }
        }
    }
    ctx->pc = 0x3953E0u;
label_3953e0:
    // 0x3953e0: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x3953e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3953e4:
    // 0x3953e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3953e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3953e8:
    // 0x3953e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3953e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3953ec:
    // 0x3953ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3953ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3953f0:
    // 0x3953f0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3953f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3953f4:
    // 0x3953f4: 0x320f809  jalr        $t9
label_3953f8:
    if (ctx->pc == 0x3953F8u) {
        ctx->pc = 0x3953F8u;
            // 0x3953f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3953FCu;
        goto label_3953fc;
    }
    ctx->pc = 0x3953F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3953FCu);
        ctx->pc = 0x3953F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3953F4u;
            // 0x3953f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3953FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3953FCu; }
            if (ctx->pc != 0x3953FCu) { return; }
        }
        }
    }
    ctx->pc = 0x3953FCu;
label_3953fc:
    // 0x3953fc: 0x10000027  b           . + 4 + (0x27 << 2)
label_395400:
    if (ctx->pc == 0x395400u) {
        ctx->pc = 0x395404u;
        goto label_395404;
    }
    ctx->pc = 0x3953FCu;
    {
        const bool branch_taken_0x3953fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3953fc) {
            ctx->pc = 0x39549Cu;
            goto label_39549c;
        }
    }
    ctx->pc = 0x395404u;
label_395404:
    // 0x395404: 0x820311aa  lb          $v1, 0x11AA($s0)
    ctx->pc = 0x395404u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
label_395408:
    // 0x395408: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x395408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_39540c:
    // 0x39540c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x39540cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_395410:
    // 0x395410: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x395410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_395414:
    // 0x395414: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x395414u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_395418:
    // 0x395418: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x395418u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39541c:
    // 0x39541c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x39541cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_395420:
    // 0x395420: 0x320f809  jalr        $t9
label_395424:
    if (ctx->pc == 0x395424u) {
        ctx->pc = 0x395424u;
            // 0x395424: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x395428u;
        goto label_395428;
    }
    ctx->pc = 0x395420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x395428u);
        ctx->pc = 0x395424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x395420u;
            // 0x395424: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x395428u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x395428u; }
            if (ctx->pc != 0x395428u) { return; }
        }
        }
    }
    ctx->pc = 0x395428u;
label_395428:
    // 0x395428: 0xa0400565  sb          $zero, 0x565($v0)
    ctx->pc = 0x395428u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1381), (uint8_t)GPR_U32(ctx, 0));
label_39542c:
    // 0x39542c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x39542cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_395430:
    // 0x395430: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x395430u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_395434:
    // 0x395434: 0x320f809  jalr        $t9
label_395438:
    if (ctx->pc == 0x395438u) {
        ctx->pc = 0x395438u;
            // 0x395438: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39543Cu;
        goto label_39543c;
    }
    ctx->pc = 0x395434u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39543Cu);
        ctx->pc = 0x395438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x395434u;
            // 0x395438: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39543Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39543Cu; }
            if (ctx->pc != 0x39543Cu) { return; }
        }
        }
    }
    ctx->pc = 0x39543Cu;
label_39543c:
    // 0x39543c: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x39543cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_395440:
    // 0x395440: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x395440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_395444:
    // 0x395444: 0x24050039  addiu       $a1, $zero, 0x39
    ctx->pc = 0x395444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_395448:
    // 0x395448: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x395448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39544c:
    // 0x39544c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x39544cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_395450:
    // 0x395450: 0x320f809  jalr        $t9
label_395454:
    if (ctx->pc == 0x395454u) {
        ctx->pc = 0x395454u;
            // 0x395454: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x395458u;
        goto label_395458;
    }
    ctx->pc = 0x395450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x395458u);
        ctx->pc = 0x395454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x395450u;
            // 0x395454: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x395458u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x395458u; }
            if (ctx->pc != 0x395458u) { return; }
        }
        }
    }
    ctx->pc = 0x395458u;
label_395458:
    // 0x395458: 0x10000010  b           . + 4 + (0x10 << 2)
label_39545c:
    if (ctx->pc == 0x39545Cu) {
        ctx->pc = 0x395460u;
        goto label_395460;
    }
    ctx->pc = 0x395458u;
    {
        const bool branch_taken_0x395458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x395458) {
            ctx->pc = 0x39549Cu;
            goto label_39549c;
        }
    }
    ctx->pc = 0x395460u;
label_395460:
    // 0x395460: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x395460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_395464:
    // 0x395464: 0x820311aa  lb          $v1, 0x11AA($s0)
    ctx->pc = 0x395464u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
label_395468:
    // 0x395468: 0x8c44e400  lw          $a0, -0x1C00($v0)
    ctx->pc = 0x395468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960128)));
label_39546c:
    // 0x39546c: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x39546cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_395470:
    // 0x395470: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x395470u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_395474:
    // 0x395474: 0x54200004  bnel        $at, $zero, . + 4 + (0x4 << 2)
label_395478:
    if (ctx->pc == 0x395478u) {
        ctx->pc = 0x395478u;
            // 0x395478: 0x8c820060  lw          $v0, 0x60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
        ctx->pc = 0x39547Cu;
        goto label_39547c;
    }
    ctx->pc = 0x395474u;
    {
        const bool branch_taken_0x395474 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x395474) {
            ctx->pc = 0x395478u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x395474u;
            // 0x395478: 0x8c820060  lw          $v0, 0x60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x395488u;
            goto label_395488;
        }
    }
    ctx->pc = 0x39547Cu;
label_39547c:
    // 0x39547c: 0x10000005  b           . + 4 + (0x5 << 2)
label_395480:
    if (ctx->pc == 0x395480u) {
        ctx->pc = 0x395480u;
            // 0x395480: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x395484u;
        goto label_395484;
    }
    ctx->pc = 0x39547Cu;
    {
        const bool branch_taken_0x39547c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39547Cu;
            // 0x395480: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39547c) {
            ctx->pc = 0x395494u;
            goto label_395494;
        }
    }
    ctx->pc = 0x395484u;
label_395484:
    // 0x395484: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x395484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_395488:
    // 0x395488: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x395488u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_39548c:
    // 0x39548c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39548cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_395490:
    // 0x395490: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x395490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_395494:
    // 0x395494: 0xc0b76dc  jal         func_2DDB70
label_395498:
    if (ctx->pc == 0x395498u) {
        ctx->pc = 0x39549Cu;
        goto label_39549c;
    }
    ctx->pc = 0x395494u;
    SET_GPR_U32(ctx, 31, 0x39549Cu);
    ctx->pc = 0x2DDB70u;
    if (runtime->hasFunction(0x2DDB70u)) {
        auto targetFn = runtime->lookupFunction(0x2DDB70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39549Cu; }
        if (ctx->pc != 0x39549Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DDB70_0x2ddb70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39549Cu; }
        if (ctx->pc != 0x39549Cu) { return; }
    }
    ctx->pc = 0x39549Cu;
label_39549c:
    // 0x39549c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x39549cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3954a0:
    // 0x3954a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3954a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3954a4:
    // 0x3954a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3954a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3954a8:
    // 0x3954a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3954a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3954ac:
    // 0x3954ac: 0x3e00008  jr          $ra
label_3954b0:
    if (ctx->pc == 0x3954B0u) {
        ctx->pc = 0x3954B0u;
            // 0x3954b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3954B4u;
        goto label_3954b4;
    }
    ctx->pc = 0x3954ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3954B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3954ACu;
            // 0x3954b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3954B4u;
label_3954b4:
    // 0x3954b4: 0x0  nop
    ctx->pc = 0x3954b4u;
    // NOP
label_3954b8:
    // 0x3954b8: 0x0  nop
    ctx->pc = 0x3954b8u;
    // NOP
label_3954bc:
    // 0x3954bc: 0x0  nop
    ctx->pc = 0x3954bcu;
    // NOP
label_3954c0:
    // 0x3954c0: 0x3e00008  jr          $ra
label_3954c4:
    if (ctx->pc == 0x3954C4u) {
        ctx->pc = 0x3954C8u;
        goto label_3954c8;
    }
    ctx->pc = 0x3954C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3954C8u;
label_3954c8:
    // 0x3954c8: 0x0  nop
    ctx->pc = 0x3954c8u;
    // NOP
label_3954cc:
    // 0x3954cc: 0x0  nop
    ctx->pc = 0x3954ccu;
    // NOP
label_3954d0:
    // 0x3954d0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3954d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3954d4:
    // 0x3954d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3954d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3954d8:
    // 0x3954d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3954d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3954dc:
    // 0x3954dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3954dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3954e0:
    // 0x3954e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3954e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3954e4:
    // 0x3954e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3954e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3954e8:
    // 0x3954e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3954e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3954ec:
    // 0x3954ec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3954ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3954f0:
    // 0x3954f0: 0x8ca30e38  lw          $v1, 0xE38($a1)
    ctx->pc = 0x3954f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3640)));
label_3954f4:
    // 0x3954f4: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x3954f4u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3954f8:
    // 0x3954f8: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_3954fc:
    if (ctx->pc == 0x3954FCu) {
        ctx->pc = 0x3954FCu;
            // 0x3954fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x395500u;
        goto label_395500;
    }
    ctx->pc = 0x3954F8u;
    {
        const bool branch_taken_0x3954f8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3954FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3954F8u;
            // 0x3954fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3954f8) {
            ctx->pc = 0x395510u;
            goto label_395510;
        }
    }
    ctx->pc = 0x395500u;
label_395500:
    // 0x395500: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x395500u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_395504:
    // 0x395504: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_395508:
    if (ctx->pc == 0x395508u) {
        ctx->pc = 0x39550Cu;
        goto label_39550c;
    }
    ctx->pc = 0x395504u;
    {
        const bool branch_taken_0x395504 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x395504) {
            ctx->pc = 0x395510u;
            goto label_395510;
        }
    }
    ctx->pc = 0x39550Cu;
label_39550c:
    // 0x39550c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39550cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_395510:
    // 0x395510: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_395514:
    if (ctx->pc == 0x395514u) {
        ctx->pc = 0x395518u;
        goto label_395518;
    }
    ctx->pc = 0x395510u;
    {
        const bool branch_taken_0x395510 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x395510) {
            ctx->pc = 0x39552Cu;
            goto label_39552c;
        }
    }
    ctx->pc = 0x395518u;
label_395518:
    // 0x395518: 0xc075eb4  jal         func_1D7AD0
label_39551c:
    if (ctx->pc == 0x39551Cu) {
        ctx->pc = 0x39551Cu;
            // 0x39551c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x395520u;
        goto label_395520;
    }
    ctx->pc = 0x395518u;
    SET_GPR_U32(ctx, 31, 0x395520u);
    ctx->pc = 0x39551Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x395518u;
            // 0x39551c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x395520u; }
        if (ctx->pc != 0x395520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x395520u; }
        if (ctx->pc != 0x395520u) { return; }
    }
    ctx->pc = 0x395520u;
label_395520:
    // 0x395520: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_395524:
    if (ctx->pc == 0x395524u) {
        ctx->pc = 0x395528u;
        goto label_395528;
    }
    ctx->pc = 0x395520u;
    {
        const bool branch_taken_0x395520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x395520) {
            ctx->pc = 0x39552Cu;
            goto label_39552c;
        }
    }
    ctx->pc = 0x395528u;
label_395528:
    // 0x395528: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x395528u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39552c:
    // 0x39552c: 0x52000322  beql        $s0, $zero, . + 4 + (0x322 << 2)
label_395530:
    if (ctx->pc == 0x395530u) {
        ctx->pc = 0x395530u;
            // 0x395530: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x395534u;
        goto label_395534;
    }
    ctx->pc = 0x39552Cu;
    {
        const bool branch_taken_0x39552c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x39552c) {
            ctx->pc = 0x395530u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39552Cu;
            // 0x395530: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3961B8u;
            goto label_3961b8;
        }
    }
    ctx->pc = 0x395534u;
label_395534:
    // 0x395534: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x395534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_395538:
    // 0x395538: 0x822411aa  lb          $a0, 0x11AA($s1)
    ctx->pc = 0x395538u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4522)));
label_39553c:
    // 0x39553c: 0x8c66d120  lw          $a2, -0x2EE0($v1)
    ctx->pc = 0x39553cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_395540:
    // 0x395540: 0x43880  sll         $a3, $a0, 2
    ctx->pc = 0x395540u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_395544:
    // 0x395544: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x395544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_395548:
    // 0x395548: 0x8cc60010  lw          $a2, 0x10($a2)
    ctx->pc = 0x395548u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_39554c:
    // 0x39554c: 0x8c658a08  lw          $a1, -0x75F8($v1)
    ctx->pc = 0x39554cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_395550:
    // 0x395550: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x395550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_395554:
    // 0x395554: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x395554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_395558:
    // 0x395558: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x395558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39555c:
    // 0x39555c: 0x8cd00000  lw          $s0, 0x0($a2)
    ctx->pc = 0x39555cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_395560:
    // 0x395560: 0x14830314  bne         $a0, $v1, . + 4 + (0x314 << 2)
label_395564:
    if (ctx->pc == 0x395564u) {
        ctx->pc = 0x395564u;
            // 0x395564: 0x80a5007a  lb          $a1, 0x7A($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 122)));
        ctx->pc = 0x395568u;
        goto label_395568;
    }
    ctx->pc = 0x395560u;
    {
        const bool branch_taken_0x395560 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x395564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x395560u;
            // 0x395564: 0x80a5007a  lb          $a1, 0x7A($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 122)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395560) {
            ctx->pc = 0x3961B4u;
            goto label_3961b4;
        }
    }
    ctx->pc = 0x395568u;
label_395568:
    // 0x395568: 0x8e230db0  lw          $v1, 0xDB0($s1)
    ctx->pc = 0x395568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3504)));
label_39556c:
    // 0x39556c: 0x24040021  addiu       $a0, $zero, 0x21
    ctx->pc = 0x39556cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_395570:
    // 0x395570: 0x54640003  bnel        $v1, $a0, . + 4 + (0x3 << 2)
label_395574:
    if (ctx->pc == 0x395574u) {
        ctx->pc = 0x395574u;
            // 0x395574: 0x8e470048  lw          $a3, 0x48($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
        ctx->pc = 0x395578u;
        goto label_395578;
    }
    ctx->pc = 0x395570u;
    {
        const bool branch_taken_0x395570 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x395570) {
            ctx->pc = 0x395574u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x395570u;
            // 0x395574: 0x8e470048  lw          $a3, 0x48($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x395580u;
            goto label_395580;
        }
    }
    ctx->pc = 0x395578u;
label_395578:
    // 0x395578: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x395578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_39557c:
    // 0x39557c: 0x8e470048  lw          $a3, 0x48($s2)
    ctx->pc = 0x39557cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_395580:
    // 0x395580: 0x90e40005  lbu         $a0, 0x5($a3)
    ctx->pc = 0x395580u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
label_395584:
    // 0x395584: 0x50800016  beql        $a0, $zero, . + 4 + (0x16 << 2)
label_395588:
    if (ctx->pc == 0x395588u) {
        ctx->pc = 0x395588u;
            // 0x395588: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x39558Cu;
        goto label_39558c;
    }
    ctx->pc = 0x395584u;
    {
        const bool branch_taken_0x395584 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x395584) {
            ctx->pc = 0x395588u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x395584u;
            // 0x395588: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3955E0u;
            goto label_3955e0;
        }
    }
    ctx->pc = 0x39558Cu;
label_39558c:
    // 0x39558c: 0x8e260e34  lw          $a2, 0xE34($s1)
    ctx->pc = 0x39558cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_395590:
    // 0x395590: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x395590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_395594:
    // 0x395594: 0x14c40307  bne         $a2, $a0, . + 4 + (0x307 << 2)
label_395598:
    if (ctx->pc == 0x395598u) {
        ctx->pc = 0x39559Cu;
        goto label_39559c;
    }
    ctx->pc = 0x395594u;
    {
        const bool branch_taken_0x395594 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x395594) {
            ctx->pc = 0x3961B4u;
            goto label_3961b4;
        }
    }
    ctx->pc = 0x39559Cu;
label_39559c:
    // 0x39559c: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x39559cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_3955a0:
    // 0x3955a0: 0x8c840e80  lw          $a0, 0xE80($a0)
    ctx->pc = 0x3955a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3712)));
label_3955a4:
    // 0x3955a4: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x3955a4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3955a8:
    // 0x3955a8: 0x2c810012  sltiu       $at, $a0, 0x12
    ctx->pc = 0x3955a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
label_3955ac:
    // 0x3955ac: 0x14200301  bnez        $at, . + 4 + (0x301 << 2)
label_3955b0:
    if (ctx->pc == 0x3955B0u) {
        ctx->pc = 0x3955B4u;
        goto label_3955b4;
    }
    ctx->pc = 0x3955ACu;
    {
        const bool branch_taken_0x3955ac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3955ac) {
            ctx->pc = 0x3961B4u;
            goto label_3961b4;
        }
    }
    ctx->pc = 0x3955B4u;
label_3955b4:
    // 0x3955b4: 0x8ce60030  lw          $a2, 0x30($a3)
    ctx->pc = 0x3955b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
label_3955b8:
    // 0x3955b8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x3955b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3955bc:
    // 0x3955bc: 0x54c40005  bnel        $a2, $a0, . + 4 + (0x5 << 2)
label_3955c0:
    if (ctx->pc == 0x3955C0u) {
        ctx->pc = 0x3955C0u;
            // 0x3955c0: 0x8ce4003c  lw          $a0, 0x3C($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
        ctx->pc = 0x3955C4u;
        goto label_3955c4;
    }
    ctx->pc = 0x3955BCu;
    {
        const bool branch_taken_0x3955bc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        if (branch_taken_0x3955bc) {
            ctx->pc = 0x3955C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3955BCu;
            // 0x3955c0: 0x8ce4003c  lw          $a0, 0x3C($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3955D4u;
            goto label_3955d4;
        }
    }
    ctx->pc = 0x3955C4u;
label_3955c4:
    // 0x3955c4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3955c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3955c8:
    // 0x3955c8: 0x10000006  b           . + 4 + (0x6 << 2)
label_3955cc:
    if (ctx->pc == 0x3955CCu) {
        ctx->pc = 0x3955CCu;
            // 0x3955cc: 0xae241220  sw          $a0, 0x1220($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4640), GPR_U32(ctx, 4));
        ctx->pc = 0x3955D0u;
        goto label_3955d0;
    }
    ctx->pc = 0x3955C8u;
    {
        const bool branch_taken_0x3955c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3955CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3955C8u;
            // 0x3955cc: 0xae241220  sw          $a0, 0x1220($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4640), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3955c8) {
            ctx->pc = 0x3955E4u;
            goto label_3955e4;
        }
    }
    ctx->pc = 0x3955D0u;
label_3955d0:
    // 0x3955d0: 0x8ce4003c  lw          $a0, 0x3C($a3)
    ctx->pc = 0x3955d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 60)));
label_3955d4:
    // 0x3955d4: 0x10000003  b           . + 4 + (0x3 << 2)
label_3955d8:
    if (ctx->pc == 0x3955D8u) {
        ctx->pc = 0x3955D8u;
            // 0x3955d8: 0xae241220  sw          $a0, 0x1220($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4640), GPR_U32(ctx, 4));
        ctx->pc = 0x3955DCu;
        goto label_3955dc;
    }
    ctx->pc = 0x3955D4u;
    {
        const bool branch_taken_0x3955d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3955D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3955D4u;
            // 0x3955d8: 0xae241220  sw          $a0, 0x1220($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4640), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3955d4) {
            ctx->pc = 0x3955E4u;
            goto label_3955e4;
        }
    }
    ctx->pc = 0x3955DCu;
label_3955dc:
    // 0x3955dc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3955dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3955e0:
    // 0x3955e0: 0xae241220  sw          $a0, 0x1220($s1)
    ctx->pc = 0x3955e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4640), GPR_U32(ctx, 4));
label_3955e4:
    // 0x3955e4: 0x8e440048  lw          $a0, 0x48($s2)
    ctx->pc = 0x3955e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_3955e8:
    // 0x3955e8: 0x8c8a0038  lw          $t2, 0x38($a0)
    ctx->pc = 0x3955e8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_3955ec:
    // 0x3955ec: 0x31460001  andi        $a2, $t2, 0x1
    ctx->pc = 0x3955ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
label_3955f0:
    // 0x3955f0: 0x10c002f0  beqz        $a2, . + 4 + (0x2F0 << 2)
label_3955f4:
    if (ctx->pc == 0x3955F4u) {
        ctx->pc = 0x3955F8u;
        goto label_3955f8;
    }
    ctx->pc = 0x3955F0u;
    {
        const bool branch_taken_0x3955f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3955f0) {
            ctx->pc = 0x3961B4u;
            goto label_3961b4;
        }
    }
    ctx->pc = 0x3955F8u;
label_3955f8:
    // 0x3955f8: 0x3c0600af  lui         $a2, 0xAF
    ctx->pc = 0x3955f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)175 << 16));
label_3955fc:
    // 0x3955fc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3955fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_395600:
    // 0x395600: 0x8cc90e80  lw          $t1, 0xE80($a2)
    ctx->pc = 0x395600u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3712)));
label_395604:
    // 0x395604: 0x683804  sllv        $a3, $t0, $v1
    ctx->pc = 0x395604u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 3) & 0x1F));
label_395608:
    // 0x395608: 0x8c860040  lw          $a2, 0x40($a0)
    ctx->pc = 0x395608u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_39560c:
    // 0x39560c: 0xc73024  and         $a2, $a2, $a3
    ctx->pc = 0x39560cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
label_395610:
    // 0x395610: 0x10c002e8  beqz        $a2, . + 4 + (0x2E8 << 2)
label_395614:
    if (ctx->pc == 0x395614u) {
        ctx->pc = 0x395614u;
            // 0x395614: 0x8d230968  lw          $v1, 0x968($t1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 2408)));
        ctx->pc = 0x395618u;
        goto label_395618;
    }
    ctx->pc = 0x395610u;
    {
        const bool branch_taken_0x395610 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x395614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x395610u;
            // 0x395614: 0x8d230968  lw          $v1, 0x968($t1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 2408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395610) {
            ctx->pc = 0x3961B4u;
            goto label_3961b4;
        }
    }
    ctx->pc = 0x395618u;
label_395618:
    // 0x395618: 0x31461c00  andi        $a2, $t2, 0x1C00
    ctx->pc = 0x395618u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)7168);
label_39561c:
    // 0x39561c: 0x50c0001e  beql        $a2, $zero, . + 4 + (0x1E << 2)
label_395620:
    if (ctx->pc == 0x395620u) {
        ctx->pc = 0x395620u;
            // 0x395620: 0x31452000  andi        $a1, $t2, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)8192);
        ctx->pc = 0x395624u;
        goto label_395624;
    }
    ctx->pc = 0x39561Cu;
    {
        const bool branch_taken_0x39561c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x39561c) {
            ctx->pc = 0x395620u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39561Cu;
            // 0x395620: 0x31452000  andi        $a1, $t2, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
            ctx->pc = 0x395698u;
            goto label_395698;
        }
    }
    ctx->pc = 0x395624u;
label_395624:
    // 0x395624: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x395624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_395628:
    // 0x395628: 0x50a60016  beql        $a1, $a2, . + 4 + (0x16 << 2)
label_39562c:
    if (ctx->pc == 0x39562Cu) {
        ctx->pc = 0x39562Cu;
            // 0x39562c: 0x31451000  andi        $a1, $t2, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)4096);
        ctx->pc = 0x395630u;
        goto label_395630;
    }
    ctx->pc = 0x395628u;
    {
        const bool branch_taken_0x395628 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x395628) {
            ctx->pc = 0x39562Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x395628u;
            // 0x39562c: 0x31451000  andi        $a1, $t2, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
            ctx->pc = 0x395684u;
            goto label_395684;
        }
    }
    ctx->pc = 0x395630u;
label_395630:
    // 0x395630: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x395630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_395634:
    // 0x395634: 0x10a60012  beq         $a1, $a2, . + 4 + (0x12 << 2)
label_395638:
    if (ctx->pc == 0x395638u) {
        ctx->pc = 0x39563Cu;
        goto label_39563c;
    }
    ctx->pc = 0x395634u;
    {
        const bool branch_taken_0x395634 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x395634) {
            ctx->pc = 0x395680u;
            goto label_395680;
        }
    }
    ctx->pc = 0x39563Cu;
label_39563c:
    // 0x39563c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x39563cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_395640:
    // 0x395640: 0x50a6000b  beql        $a1, $a2, . + 4 + (0xB << 2)
label_395644:
    if (ctx->pc == 0x395644u) {
        ctx->pc = 0x395644u;
            // 0x395644: 0x31450800  andi        $a1, $t2, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)2048);
        ctx->pc = 0x395648u;
        goto label_395648;
    }
    ctx->pc = 0x395640u;
    {
        const bool branch_taken_0x395640 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x395640) {
            ctx->pc = 0x395644u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x395640u;
            // 0x395644: 0x31450800  andi        $a1, $t2, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
            ctx->pc = 0x395670u;
            goto label_395670;
        }
    }
    ctx->pc = 0x395648u;
label_395648:
    // 0x395648: 0x50a80004  beql        $a1, $t0, . + 4 + (0x4 << 2)
label_39564c:
    if (ctx->pc == 0x39564Cu) {
        ctx->pc = 0x39564Cu;
            // 0x39564c: 0x31450400  andi        $a1, $t2, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1024);
        ctx->pc = 0x395650u;
        goto label_395650;
    }
    ctx->pc = 0x395648u;
    {
        const bool branch_taken_0x395648 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 8));
        if (branch_taken_0x395648) {
            ctx->pc = 0x39564Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x395648u;
            // 0x39564c: 0x31450400  andi        $a1, $t2, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
            ctx->pc = 0x39565Cu;
            goto label_39565c;
        }
    }
    ctx->pc = 0x395650u;
label_395650:
    // 0x395650: 0x10000026  b           . + 4 + (0x26 << 2)
label_395654:
    if (ctx->pc == 0x395654u) {
        ctx->pc = 0x395654u;
            // 0x395654: 0x8c850030  lw          $a1, 0x30($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
        ctx->pc = 0x395658u;
        goto label_395658;
    }
    ctx->pc = 0x395650u;
    {
        const bool branch_taken_0x395650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x395650u;
            // 0x395654: 0x8c850030  lw          $a1, 0x30($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395650) {
            ctx->pc = 0x3956ECu;
            goto label_3956ec;
        }
    }
    ctx->pc = 0x395658u;
label_395658:
    // 0x395658: 0x31450400  andi        $a1, $t2, 0x400
    ctx->pc = 0x395658u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1024);
label_39565c:
    // 0x39565c: 0x14a00022  bnez        $a1, . + 4 + (0x22 << 2)
label_395660:
    if (ctx->pc == 0x395660u) {
        ctx->pc = 0x395664u;
        goto label_395664;
    }
    ctx->pc = 0x39565Cu;
    {
        const bool branch_taken_0x39565c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x39565c) {
            ctx->pc = 0x3956E8u;
            goto label_3956e8;
        }
    }
    ctx->pc = 0x395664u;
label_395664:
    // 0x395664: 0x100002d3  b           . + 4 + (0x2D3 << 2)
label_395668:
    if (ctx->pc == 0x395668u) {
        ctx->pc = 0x39566Cu;
        goto label_39566c;
    }
    ctx->pc = 0x395664u;
    {
        const bool branch_taken_0x395664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x395664) {
            ctx->pc = 0x3961B4u;
            goto label_3961b4;
        }
    }
    ctx->pc = 0x39566Cu;
label_39566c:
    // 0x39566c: 0x31450800  andi        $a1, $t2, 0x800
    ctx->pc = 0x39566cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)2048);
label_395670:
    // 0x395670: 0x14a0001d  bnez        $a1, . + 4 + (0x1D << 2)
label_395674:
    if (ctx->pc == 0x395674u) {
        ctx->pc = 0x395678u;
        goto label_395678;
    }
    ctx->pc = 0x395670u;
    {
        const bool branch_taken_0x395670 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x395670) {
            ctx->pc = 0x3956E8u;
            goto label_3956e8;
        }
    }
    ctx->pc = 0x395678u;
label_395678:
    // 0x395678: 0x100002ce  b           . + 4 + (0x2CE << 2)
label_39567c:
    if (ctx->pc == 0x39567Cu) {
        ctx->pc = 0x395680u;
        goto label_395680;
    }
    ctx->pc = 0x395678u;
    {
        const bool branch_taken_0x395678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x395678) {
            ctx->pc = 0x3961B4u;
            goto label_3961b4;
        }
    }
    ctx->pc = 0x395680u;
label_395680:
    // 0x395680: 0x31451000  andi        $a1, $t2, 0x1000
    ctx->pc = 0x395680u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)4096);
label_395684:
    // 0x395684: 0x14a00018  bnez        $a1, . + 4 + (0x18 << 2)
label_395688:
    if (ctx->pc == 0x395688u) {
        ctx->pc = 0x39568Cu;
        goto label_39568c;
    }
    ctx->pc = 0x395684u;
    {
        const bool branch_taken_0x395684 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x395684) {
            ctx->pc = 0x3956E8u;
            goto label_3956e8;
        }
    }
    ctx->pc = 0x39568Cu;
label_39568c:
    // 0x39568c: 0x100002c9  b           . + 4 + (0x2C9 << 2)
label_395690:
    if (ctx->pc == 0x395690u) {
        ctx->pc = 0x395694u;
        goto label_395694;
    }
    ctx->pc = 0x39568Cu;
    {
        const bool branch_taken_0x39568c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39568c) {
            ctx->pc = 0x3961B4u;
            goto label_3961b4;
        }
    }
    ctx->pc = 0x395694u;
label_395694:
    // 0x395694: 0x31452000  andi        $a1, $t2, 0x2000
    ctx->pc = 0x395694u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)8192);
label_395698:
    // 0x395698: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
label_39569c:
    if (ctx->pc == 0x39569Cu) {
        ctx->pc = 0x3956A0u;
        goto label_3956a0;
    }
    ctx->pc = 0x395698u;
    {
        const bool branch_taken_0x395698 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x395698) {
            ctx->pc = 0x3956E8u;
            goto label_3956e8;
        }
    }
    ctx->pc = 0x3956A0u;
label_3956a0:
    // 0x3956a0: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x3956a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
label_3956a4:
    // 0x3956a4: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x3956a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3956a8:
    // 0x3956a8: 0x8ca589d0  lw          $a1, -0x7630($a1)
    ctx->pc = 0x3956a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294937040)));
label_3956ac:
    // 0x3956ac: 0x8ca50084  lw          $a1, 0x84($a1)
    ctx->pc = 0x3956acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 132)));
label_3956b0:
    // 0x3956b0: 0x14a602c0  bne         $a1, $a2, . + 4 + (0x2C0 << 2)
label_3956b4:
    if (ctx->pc == 0x3956B4u) {
        ctx->pc = 0x3956B8u;
        goto label_3956b8;
    }
    ctx->pc = 0x3956B0u;
    {
        const bool branch_taken_0x3956b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x3956b0) {
            ctx->pc = 0x3961B4u;
            goto label_3961b4;
        }
    }
    ctx->pc = 0x3956B8u;
label_3956b8:
    // 0x3956b8: 0x91260ce4  lbu         $a2, 0xCE4($t1)
    ctx->pc = 0x3956b8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3300)));
label_3956bc:
    // 0x3956bc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3956bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3956c0:
    // 0x3956c0: 0x14c502bc  bne         $a2, $a1, . + 4 + (0x2BC << 2)
label_3956c4:
    if (ctx->pc == 0x3956C4u) {
        ctx->pc = 0x3956C8u;
        goto label_3956c8;
    }
    ctx->pc = 0x3956C0u;
    {
        const bool branch_taken_0x3956c0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x3956c0) {
            ctx->pc = 0x3961B4u;
            goto label_3961b4;
        }
    }
    ctx->pc = 0x3956C8u;
label_3956c8:
    // 0x3956c8: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x3956c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
label_3956cc:
    // 0x3956cc: 0x8ca50e84  lw          $a1, 0xE84($a1)
    ctx->pc = 0x3956ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3716)));
label_3956d0:
    // 0x3956d0: 0x8ca50d6c  lw          $a1, 0xD6C($a1)
    ctx->pc = 0x3956d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3436)));
label_3956d4:
    // 0x3956d4: 0x8ca50014  lw          $a1, 0x14($a1)
    ctx->pc = 0x3956d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_3956d8:
    // 0x3956d8: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_3956dc:
    if (ctx->pc == 0x3956DCu) {
        ctx->pc = 0x3956E0u;
        goto label_3956e0;
    }
    ctx->pc = 0x3956D8u;
    {
        const bool branch_taken_0x3956d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3956d8) {
            ctx->pc = 0x3956E8u;
            goto label_3956e8;
        }
    }
    ctx->pc = 0x3956E0u;
label_3956e0:
    // 0x3956e0: 0x100002b4  b           . + 4 + (0x2B4 << 2)
label_3956e4:
    if (ctx->pc == 0x3956E4u) {
        ctx->pc = 0x3956E8u;
        goto label_3956e8;
    }
    ctx->pc = 0x3956E0u;
    {
        const bool branch_taken_0x3956e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3956e0) {
            ctx->pc = 0x3961B4u;
            goto label_3961b4;
        }
    }
    ctx->pc = 0x3956E8u;
label_3956e8:
    // 0x3956e8: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x3956e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_3956ec:
    // 0x3956ec: 0x2ca10008  sltiu       $at, $a1, 0x8
    ctx->pc = 0x3956ecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_3956f0:
    // 0x3956f0: 0x102002b0  beqz        $at, . + 4 + (0x2B0 << 2)
label_3956f4:
    if (ctx->pc == 0x3956F4u) {
        ctx->pc = 0x3956F8u;
        goto label_3956f8;
    }
    ctx->pc = 0x3956F0u;
    {
        const bool branch_taken_0x3956f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3956f0) {
            ctx->pc = 0x3961B4u;
            goto label_3961b4;
        }
    }
    ctx->pc = 0x3956F8u;
label_3956f8:
    // 0x3956f8: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x3956f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
label_3956fc:
    // 0x3956fc: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3956fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_395700:
    // 0x395700: 0x24c66d60  addiu       $a2, $a2, 0x6D60
    ctx->pc = 0x395700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28000));
label_395704:
    // 0x395704: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x395704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_395708:
    // 0x395708: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x395708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_39570c:
    // 0x39570c: 0xa00008  jr          $a1
label_395710:
    if (ctx->pc == 0x395710u) {
        ctx->pc = 0x395714u;
        goto label_395714;
    }
    ctx->pc = 0x39570Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 5);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x395714u: goto label_395714;
            case 0x3959D0u: goto label_3959d0;
            case 0x395AACu: goto label_395aac;
            case 0x395B30u: goto label_395b30;
            case 0x395C68u: goto label_395c68;
            case 0x395DC4u: goto label_395dc4;
            case 0x395EE8u: goto label_395ee8;
            case 0x395FA4u: goto label_395fa4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x395714u;
label_395714:
    // 0x395714: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x395714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_395718:
    // 0x395718: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x395718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_39571c:
    // 0x39571c: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x39571cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_395720:
    // 0x395720: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x395720u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_395724:
    // 0x395724: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x395724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_395728:
    // 0x395728: 0x8c456480  lw          $a1, 0x6480($v0)
    ctx->pc = 0x395728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25728)));
label_39572c:
    // 0x39572c: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x39572cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_395730:
    // 0x395730: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x395730u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_395734:
    // 0x395734: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x395734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_395738:
    // 0x395738: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x395738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_39573c:
    // 0x39573c: 0x8c630074  lw          $v1, 0x74($v1)
    ctx->pc = 0x39573cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_395740:
    // 0x395740: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x395740u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_395744:
    // 0x395744: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x395744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_395748:
    // 0x395748: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x395748u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_39574c:
    // 0x39574c: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x39574cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_395750:
    // 0x395750: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x395750u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_395754:
    // 0x395754: 0x45020029  bc1fl       . + 4 + (0x29 << 2)
label_395758:
    if (ctx->pc == 0x395758u) {
        ctx->pc = 0x395758u;
            // 0x395758: 0xc6600000  lwc1        $f0, 0x0($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x39575Cu;
        goto label_39575c;
    }
    ctx->pc = 0x395754u;
    {
        const bool branch_taken_0x395754 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x395754) {
            ctx->pc = 0x395758u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x395754u;
            // 0x395758: 0xc6600000  lwc1        $f0, 0x0($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3957FCu;
            goto label_3957fc;
        }
    }
    ctx->pc = 0x39575Cu;
label_39575c:
    // 0x39575c: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x39575cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_395760:
    // 0x395760: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x395760u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_395764:
    // 0x395764: 0x45000024  bc1f        . + 4 + (0x24 << 2)
label_395768:
    if (ctx->pc == 0x395768u) {
        ctx->pc = 0x39576Cu;
        goto label_39576c;
    }
    ctx->pc = 0x395764u;
    {
        const bool branch_taken_0x395764 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x395764) {
            ctx->pc = 0x3957F8u;
            goto label_3957f8;
        }
    }
    ctx->pc = 0x39576Cu;
label_39576c:
    // 0x39576c: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x39576cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_395770:
    // 0x395770: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x395770u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_395774:
    // 0x395774: 0x45000020  bc1f        . + 4 + (0x20 << 2)
label_395778:
    if (ctx->pc == 0x395778u) {
        ctx->pc = 0x39577Cu;
        goto label_39577c;
    }
    ctx->pc = 0x395774u;
    {
        const bool branch_taken_0x395774 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x395774) {
            ctx->pc = 0x3957F8u;
            goto label_3957f8;
        }
    }
    ctx->pc = 0x39577Cu;
label_39577c:
    // 0x39577c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x39577cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_395780:
    // 0x395780: 0x822311aa  lb          $v1, 0x11AA($s1)
    ctx->pc = 0x395780u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4522)));
label_395784:
    // 0x395784: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x395784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_395788:
    // 0x395788: 0x3c060061  lui         $a2, 0x61
    ctx->pc = 0x395788u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)97 << 16));
label_39578c:
    // 0x39578c: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x39578cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_395790:
    // 0x395790: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x395790u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_395794:
    // 0x395794: 0x34880  sll         $t1, $v1, 2
    ctx->pc = 0x395794u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_395798:
    // 0x395798: 0x3c070010  lui         $a3, 0x10
    ctx->pc = 0x395798u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16 << 16));
label_39579c:
    // 0x39579c: 0x8c480010  lw          $t0, 0x10($v0)
    ctx->pc = 0x39579cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3957a0:
    // 0x3957a0: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x3957a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_3957a4:
    // 0x3957a4: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x3957a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_3957a8:
    // 0x3957a8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3957a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3957ac:
    // 0x3957ac: 0x8d080000  lw          $t0, 0x0($t0)
    ctx->pc = 0x3957acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_3957b0:
    // 0x3957b0: 0xc50001a4  lwc1        $f0, 0x1A4($t0)
    ctx->pc = 0x3957b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3957b4:
    // 0x3957b4: 0xe4c01f64  swc1        $f0, 0x1F64($a2)
    ctx->pc = 0x3957b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8036), bits); }
label_3957b8:
    // 0x3957b8: 0xc50001a8  lwc1        $f0, 0x1A8($t0)
    ctx->pc = 0x3957b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3957bc:
    // 0x3957bc: 0xe4a01f68  swc1        $f0, 0x1F68($a1)
    ctx->pc = 0x3957bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8040), bits); }
label_3957c0:
    // 0x3957c0: 0xc50001ac  lwc1        $f0, 0x1AC($t0)
    ctx->pc = 0x3957c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3957c4:
    // 0x3957c4: 0xe4801f6c  swc1        $f0, 0x1F6C($a0)
    ctx->pc = 0x3957c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8044), bits); }
label_3957c8:
    // 0x3957c8: 0xc50001d0  lwc1        $f0, 0x1D0($t0)
    ctx->pc = 0x3957c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3957cc:
    // 0x3957cc: 0xe62003b0  swc1        $f0, 0x3B0($s1)
    ctx->pc = 0x3957ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 944), bits); }
label_3957d0:
    // 0x3957d0: 0xc50001d4  lwc1        $f0, 0x1D4($t0)
    ctx->pc = 0x3957d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3957d4:
    // 0x3957d4: 0xe62003b4  swc1        $f0, 0x3B4($s1)
    ctx->pc = 0x3957d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 948), bits); }
label_3957d8:
    // 0x3957d8: 0xc50001d8  lwc1        $f0, 0x1D8($t0)
    ctx->pc = 0x3957d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3957dc:
    // 0x3957dc: 0xe62003b8  swc1        $f0, 0x3B8($s1)
    ctx->pc = 0x3957dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 952), bits); }
label_3957e0:
    // 0x3957e0: 0xc50001dc  lwc1        $f0, 0x1DC($t0)
    ctx->pc = 0x3957e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3957e4:
    // 0x3957e4: 0xe62003bc  swc1        $f0, 0x3BC($s1)
    ctx->pc = 0x3957e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 956), bits); }
label_3957e8:
    // 0x3957e8: 0x8c631f80  lw          $v1, 0x1F80($v1)
    ctx->pc = 0x3957e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8064)));
label_3957ec:
    // 0x3957ec: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x3957ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
label_3957f0:
    // 0x3957f0: 0x1000001e  b           . + 4 + (0x1E << 2)
label_3957f4:
    if (ctx->pc == 0x3957F4u) {
        ctx->pc = 0x3957F4u;
            // 0x3957f4: 0xac431f80  sw          $v1, 0x1F80($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8064), GPR_U32(ctx, 3));
        ctx->pc = 0x3957F8u;
        goto label_3957f8;
    }
    ctx->pc = 0x3957F0u;
    {
        const bool branch_taken_0x3957f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3957F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3957F0u;
            // 0x3957f4: 0xac431f80  sw          $v1, 0x1F80($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8064), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3957f0) {
            ctx->pc = 0x39586Cu;
            goto label_39586c;
        }
    }
    ctx->pc = 0x3957F8u;
label_3957f8:
    // 0x3957f8: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x3957f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3957fc:
    // 0x3957fc: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x3957fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_395800:
    // 0x395800: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x395800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_395804:
    // 0x395804: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x395804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_395808:
    // 0x395808: 0xe4a01f64  swc1        $f0, 0x1F64($a1)
    ctx->pc = 0x395808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8036), bits); }
label_39580c:
    // 0x39580c: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x39580cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_395810:
    // 0x395810: 0xe4601f68  swc1        $f0, 0x1F68($v1)
    ctx->pc = 0x395810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8040), bits); }
label_395814:
    // 0x395814: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x395814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_395818:
    // 0x395818: 0xe4401f6c  swc1        $f0, 0x1F6C($v0)
    ctx->pc = 0x395818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8044), bits); }
label_39581c:
    // 0x39581c: 0xc66c0028  lwc1        $f12, 0x28($s3)
    ctx->pc = 0x39581cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_395820:
    // 0x395820: 0xc66d002c  lwc1        $f13, 0x2C($s3)
    ctx->pc = 0x395820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_395824:
    // 0x395824: 0xc66e0030  lwc1        $f14, 0x30($s3)
    ctx->pc = 0x395824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_395828:
    // 0x395828: 0xc04cbd8  jal         func_132F60
label_39582c:
    if (ctx->pc == 0x39582Cu) {
        ctx->pc = 0x39582Cu;
            // 0x39582c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x395830u;
        goto label_395830;
    }
    ctx->pc = 0x395828u;
    SET_GPR_U32(ctx, 31, 0x395830u);
    ctx->pc = 0x39582Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x395828u;
            // 0x39582c: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x395830u; }
        if (ctx->pc != 0x395830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x395830u; }
        if (ctx->pc != 0x395830u) { return; }
    }
    ctx->pc = 0x395830u;
label_395830:
    // 0x395830: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x395830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_395834:
    // 0x395834: 0x3c04ffef  lui         $a0, 0xFFEF
    ctx->pc = 0x395834u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65519 << 16));
label_395838:
    // 0x395838: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x395838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_39583c:
    // 0x39583c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x39583cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_395840:
    // 0x395840: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x395840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_395844:
    // 0x395844: 0xe62003b0  swc1        $f0, 0x3B0($s1)
    ctx->pc = 0x395844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 944), bits); }
label_395848:
    // 0x395848: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x395848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39584c:
    // 0x39584c: 0xe62003b4  swc1        $f0, 0x3B4($s1)
    ctx->pc = 0x39584cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 948), bits); }
label_395850:
    // 0x395850: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x395850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_395854:
    // 0x395854: 0xe62003b8  swc1        $f0, 0x3B8($s1)
    ctx->pc = 0x395854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 952), bits); }
label_395858:
    // 0x395858: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x395858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_39585c:
    // 0x39585c: 0xe62003bc  swc1        $f0, 0x3BC($s1)
    ctx->pc = 0x39585cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 956), bits); }
label_395860:
    // 0x395860: 0x8c631f80  lw          $v1, 0x1F80($v1)
    ctx->pc = 0x395860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8064)));
label_395864:
    // 0x395864: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x395864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_395868:
    // 0x395868: 0xac431f80  sw          $v1, 0x1F80($v0)
    ctx->pc = 0x395868u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8064), GPR_U32(ctx, 3));
label_39586c:
    // 0x39586c: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x39586cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_395870:
    // 0x395870: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x395870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_395874:
    // 0x395874: 0xac431f8c  sw          $v1, 0x1F8C($v0)
    ctx->pc = 0x395874u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8076), GPR_U32(ctx, 3));
label_395878:
    // 0x395878: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x395878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_39587c:
    // 0x39587c: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x39587cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_395880:
    // 0x395880: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_395884:
    if (ctx->pc == 0x395884u) {
        ctx->pc = 0x395884u;
            // 0x395884: 0xc6600000  lwc1        $f0, 0x0($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x395888u;
        goto label_395888;
    }
    ctx->pc = 0x395880u;
    {
        const bool branch_taken_0x395880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x395880) {
            ctx->pc = 0x395884u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x395880u;
            // 0x395884: 0xc6600000  lwc1        $f0, 0x0($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3958B0u;
            goto label_3958b0;
        }
    }
    ctx->pc = 0x395888u;
label_395888:
    // 0x395888: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x395888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39588c:
    // 0x39588c: 0x0  nop
    ctx->pc = 0x39588cu;
    // NOP
label_395890:
    // 0x395890: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x395890u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_395894:
    // 0x395894: 0x3c023bb4  lui         $v0, 0x3BB4
    ctx->pc = 0x395894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15284 << 16));
label_395898:
    // 0x395898: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x395898u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_39589c:
    // 0x39589c: 0x0  nop
    ctx->pc = 0x39589cu;
    // NOP
label_3958a0:
    // 0x3958a0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3958a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3958a4:
    // 0x3958a4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3958a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3958a8:
    // 0x3958a8: 0xe4401f78  swc1        $f0, 0x1F78($v0)
    ctx->pc = 0x3958a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8056), bits); }
label_3958ac:
    // 0x3958ac: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x3958acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3958b0:
    // 0x3958b0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3958b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3958b4:
    // 0x3958b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3958b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3958b8:
    // 0x3958b8: 0x0  nop
    ctx->pc = 0x3958b8u;
    // NOP
label_3958bc:
    // 0x3958bc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x3958bcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3958c0:
    // 0x3958c0: 0x45020011  bc1fl       . + 4 + (0x11 << 2)
label_3958c4:
    if (ctx->pc == 0x3958C4u) {
        ctx->pc = 0x3958C4u;
            // 0x3958c4: 0x8e420048  lw          $v0, 0x48($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
        ctx->pc = 0x3958C8u;
        goto label_3958c8;
    }
    ctx->pc = 0x3958C0u;
    {
        const bool branch_taken_0x3958c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3958c0) {
            ctx->pc = 0x3958C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3958C0u;
            // 0x3958c4: 0x8e420048  lw          $v0, 0x48($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x395908u;
            goto label_395908;
        }
    }
    ctx->pc = 0x3958C8u;
label_3958c8:
    // 0x3958c8: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x3958c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3958cc:
    // 0x3958cc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x3958ccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3958d0:
    // 0x3958d0: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_3958d4:
    if (ctx->pc == 0x3958D4u) {
        ctx->pc = 0x3958D8u;
        goto label_3958d8;
    }
    ctx->pc = 0x3958D0u;
    {
        const bool branch_taken_0x3958d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3958d0) {
            ctx->pc = 0x395904u;
            goto label_395904;
        }
    }
    ctx->pc = 0x3958D8u;
label_3958d8:
    // 0x3958d8: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x3958d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3958dc:
    // 0x3958dc: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x3958dcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3958e0:
    // 0x3958e0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_3958e4:
    if (ctx->pc == 0x3958E4u) {
        ctx->pc = 0x3958E8u;
        goto label_3958e8;
    }
    ctx->pc = 0x3958E0u;
    {
        const bool branch_taken_0x3958e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3958e0) {
            ctx->pc = 0x395904u;
            goto label_395904;
        }
    }
    ctx->pc = 0x3958E8u;
label_3958e8:
    // 0x3958e8: 0xc6010194  lwc1        $f1, 0x194($s0)
    ctx->pc = 0x3958e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3958ec:
    // 0x3958ec: 0x3c023bb4  lui         $v0, 0x3BB4
    ctx->pc = 0x3958ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15284 << 16));
label_3958f0:
    // 0x3958f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3958f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3958f4:
    // 0x3958f4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3958f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3958f8:
    // 0x3958f8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3958f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3958fc:
    // 0x3958fc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3958fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_395900:
    // 0x395900: 0xe4401f78  swc1        $f0, 0x1F78($v0)
    ctx->pc = 0x395900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8056), bits); }
label_395904:
    // 0x395904: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x395904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_395908:
    // 0x395908: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x395908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_39590c:
    // 0x39590c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x39590cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_395910:
    // 0x395910: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_395914:
    if (ctx->pc == 0x395914u) {
        ctx->pc = 0x395914u;
            // 0x395914: 0x8e630020  lw          $v1, 0x20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
        ctx->pc = 0x395918u;
        goto label_395918;
    }
    ctx->pc = 0x395910u;
    {
        const bool branch_taken_0x395910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x395910) {
            ctx->pc = 0x395914u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x395910u;
            // 0x395914: 0x8e630020  lw          $v1, 0x20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39592Cu;
            goto label_39592c;
        }
    }
    ctx->pc = 0x395918u;
label_395918:
    // 0x395918: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x395918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_39591c:
    // 0x39591c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x39591cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_395920:
    // 0x395920: 0x10000004  b           . + 4 + (0x4 << 2)
label_395924:
    if (ctx->pc == 0x395924u) {
        ctx->pc = 0x395924u;
            // 0x395924: 0xac431f90  sw          $v1, 0x1F90($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8080), GPR_U32(ctx, 3));
        ctx->pc = 0x395928u;
        goto label_395928;
    }
    ctx->pc = 0x395920u;
    {
        const bool branch_taken_0x395920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x395920u;
            // 0x395924: 0xac431f90  sw          $v1, 0x1F90($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8080), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395920) {
            ctx->pc = 0x395934u;
            goto label_395934;
        }
    }
    ctx->pc = 0x395928u;
label_395928:
    // 0x395928: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x395928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_39592c:
    // 0x39592c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x39592cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_395930:
    // 0x395930: 0xac431f90  sw          $v1, 0x1F90($v0)
    ctx->pc = 0x395930u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8080), GPR_U32(ctx, 3));
label_395934:
    // 0x395934: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x395934u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_395938:
    // 0x395938: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x395938u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_39593c:
    // 0x39593c: 0x320f809  jalr        $t9
label_395940:
    if (ctx->pc == 0x395940u) {
        ctx->pc = 0x395940u;
            // 0x395940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x395944u;
        goto label_395944;
    }
    ctx->pc = 0x39593Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x395944u);
        ctx->pc = 0x395940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39593Cu;
            // 0x395940: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x395944u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x395944u; }
            if (ctx->pc != 0x395944u) { return; }
        }
        }
    }
    ctx->pc = 0x395944u;
label_395944:
    // 0x395944: 0xa0400565  sb          $zero, 0x565($v0)
    ctx->pc = 0x395944u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1381), (uint8_t)GPR_U32(ctx, 0));
label_395948:
    // 0x395948: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x395948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_39594c:
    // 0x39594c: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_395950:
    if (ctx->pc == 0x395950u) {
        ctx->pc = 0x395950u;
            // 0x395950: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x395954u;
        goto label_395954;
    }
    ctx->pc = 0x39594Cu;
    {
        const bool branch_taken_0x39594c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39594c) {
            ctx->pc = 0x395950u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39594Cu;
            // 0x395950: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39598Cu;
            goto label_39598c;
        }
    }
    ctx->pc = 0x395954u;
label_395954:
    // 0x395954: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x395954u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_395958:
    // 0x395958: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x395958u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_39595c:
    // 0x39595c: 0x320f809  jalr        $t9
label_395960:
    if (ctx->pc == 0x395960u) {
        ctx->pc = 0x395960u;
            // 0x395960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x395964u;
        goto label_395964;
    }
    ctx->pc = 0x39595Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x395964u);
        ctx->pc = 0x395960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39595Cu;
            // 0x395960: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x395964u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x395964u; }
            if (ctx->pc != 0x395964u) { return; }
        }
        }
    }
    ctx->pc = 0x395964u;
label_395964:
    // 0x395964: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x395964u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_395968:
    // 0x395968: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x395968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39596c:
    // 0x39596c: 0x24050031  addiu       $a1, $zero, 0x31
    ctx->pc = 0x39596cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_395970:
    // 0x395970: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x395970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_395974:
    // 0x395974: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x395974u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_395978:
    // 0x395978: 0x320f809  jalr        $t9
label_39597c:
    if (ctx->pc == 0x39597Cu) {
        ctx->pc = 0x39597Cu;
            // 0x39597c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x395980u;
        goto label_395980;
    }
    ctx->pc = 0x395978u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x395980u);
        ctx->pc = 0x39597Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x395978u;
            // 0x39597c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x395980u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x395980u; }
            if (ctx->pc != 0x395980u) { return; }
        }
        }
    }
    ctx->pc = 0x395980u;
label_395980:
    // 0x395980: 0x1000000d  b           . + 4 + (0xD << 2)
label_395984:
    if (ctx->pc == 0x395984u) {
        ctx->pc = 0x395984u;
            // 0x395984: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x395988u;
        goto label_395988;
    }
    ctx->pc = 0x395980u;
    {
        const bool branch_taken_0x395980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x395980u;
            // 0x395984: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395980) {
            ctx->pc = 0x3959B8u;
            goto label_3959b8;
        }
    }
    ctx->pc = 0x395988u;
label_395988:
    // 0x395988: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x395988u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39598c:
    // 0x39598c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x39598cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_395990:
    // 0x395990: 0x320f809  jalr        $t9
label_395994:
    if (ctx->pc == 0x395994u) {
        ctx->pc = 0x395994u;
            // 0x395994: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x395998u;
        goto label_395998;
    }
    ctx->pc = 0x395990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x395998u);
        ctx->pc = 0x395994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x395990u;
            // 0x395994: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x395998u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x395998u; }
            if (ctx->pc != 0x395998u) { return; }
        }
        }
    }
    ctx->pc = 0x395998u;
label_395998:
    // 0x395998: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x395998u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_39599c:
    // 0x39599c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x39599cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3959a0:
    // 0x3959a0: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x3959a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3959a4:
    // 0x3959a4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3959a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3959a8:
    // 0x3959a8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3959a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3959ac:
    // 0x3959ac: 0x320f809  jalr        $t9
label_3959b0:
    if (ctx->pc == 0x3959B0u) {
        ctx->pc = 0x3959B0u;
            // 0x3959b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3959B4u;
        goto label_3959b4;
    }
    ctx->pc = 0x3959ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3959B4u);
        ctx->pc = 0x3959B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3959ACu;
            // 0x3959b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3959B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3959B4u; }
            if (ctx->pc != 0x3959B4u) { return; }
        }
        }
    }
    ctx->pc = 0x3959B4u;
label_3959b4:
    // 0x3959b4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3959b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3959b8:
    // 0x3959b8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3959b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3959bc:
    // 0x3959bc: 0x320f809  jalr        $t9
label_3959c0:
    if (ctx->pc == 0x3959C0u) {
        ctx->pc = 0x3959C0u;
            // 0x3959c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3959C4u;
        goto label_3959c4;
    }
    ctx->pc = 0x3959BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3959C4u);
        ctx->pc = 0x3959C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3959BCu;
            // 0x3959c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3959C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3959C4u; }
            if (ctx->pc != 0x3959C4u) { return; }
        }
        }
    }
    ctx->pc = 0x3959C4u;
label_3959c4:
    // 0x3959c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3959c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3959c8:
    // 0x3959c8: 0x100001fa  b           . + 4 + (0x1FA << 2)
label_3959cc:
    if (ctx->pc == 0x3959CCu) {
        ctx->pc = 0x3959CCu;
            // 0x3959cc: 0xa0430565  sb          $v1, 0x565($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1381), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3959D0u;
        goto label_3959d0;
    }
    ctx->pc = 0x3959C8u;
    {
        const bool branch_taken_0x3959c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3959CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3959C8u;
            // 0x3959cc: 0xa0430565  sb          $v1, 0x565($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1381), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3959c8) {
            ctx->pc = 0x3961B4u;
            goto label_3961b4;
        }
    }
    ctx->pc = 0x3959D0u;
label_3959d0:
    // 0x3959d0: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x3959d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3959d4:
    // 0x3959d4: 0x8c84003c  lw          $a0, 0x3C($a0)
    ctx->pc = 0x3959d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_3959d8:
    // 0x3959d8: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x3959d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_3959dc:
    // 0x3959dc: 0x822311aa  lb          $v1, 0x11AA($s1)
    ctx->pc = 0x3959dcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4522)));
label_3959e0:
    // 0x3959e0: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x3959e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_3959e4:
    // 0x3959e4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3959e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3959e8:
    // 0x3959e8: 0x53880  sll         $a3, $a1, 2
    ctx->pc = 0x3959e8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3959ec:
    // 0x3959ec: 0x8c456480  lw          $a1, 0x6480($v0)
    ctx->pc = 0x3959ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25728)));
label_3959f0:
    // 0x3959f0: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x3959f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3959f4:
    // 0x3959f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3959f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3959f8:
    // 0x3959f8: 0x8c44e400  lw          $a0, -0x1C00($v0)
    ctx->pc = 0x3959f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960128)));
label_3959fc:
    // 0x3959fc: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x3959fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_395a00:
    // 0x395a00: 0x8c450074  lw          $a1, 0x74($v0)
    ctx->pc = 0x395a00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_395a04:
    // 0x395a04: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x395a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_395a08:
    // 0x395a08: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x395a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_395a0c:
    // 0x395a0c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x395a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_395a10:
    // 0x395a10: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x395a10u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_395a14:
    // 0x395a14: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_395a18:
    if (ctx->pc == 0x395A18u) {
        ctx->pc = 0x395A18u;
            // 0x395a18: 0x8ca50024  lw          $a1, 0x24($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
        ctx->pc = 0x395A1Cu;
        goto label_395a1c;
    }
    ctx->pc = 0x395A14u;
    {
        const bool branch_taken_0x395a14 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x395A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x395A14u;
            // 0x395a18: 0x8ca50024  lw          $a1, 0x24($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395a14) {
            ctx->pc = 0x395A24u;
            goto label_395a24;
        }
    }
    ctx->pc = 0x395A1Cu;
label_395a1c:
    // 0x395a1c: 0x10000005  b           . + 4 + (0x5 << 2)
label_395a20:
    if (ctx->pc == 0x395A20u) {
        ctx->pc = 0x395A20u;
            // 0x395a20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x395A24u;
        goto label_395a24;
    }
    ctx->pc = 0x395A1Cu;
    {
        const bool branch_taken_0x395a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x395A1Cu;
            // 0x395a20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395a1c) {
            ctx->pc = 0x395A34u;
            goto label_395a34;
        }
    }
    ctx->pc = 0x395A24u;
label_395a24:
    // 0x395a24: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x395a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_395a28:
    // 0x395a28: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x395a28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_395a2c:
    // 0x395a2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x395a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_395a30:
    // 0x395a30: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x395a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_395a34:
    // 0x395a34: 0xac450590  sw          $a1, 0x590($v0)
    ctx->pc = 0x395a34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1424), GPR_U32(ctx, 5));
label_395a38:
    // 0x395a38: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x395a38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_395a3c:
    // 0x395a3c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x395a3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_395a40:
    // 0x395a40: 0x320f809  jalr        $t9
label_395a44:
    if (ctx->pc == 0x395A44u) {
        ctx->pc = 0x395A44u;
            // 0x395a44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x395A48u;
        goto label_395a48;
    }
    ctx->pc = 0x395A40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x395A48u);
        ctx->pc = 0x395A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x395A40u;
            // 0x395a44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x395A48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x395A48u; }
            if (ctx->pc != 0x395A48u) { return; }
        }
        }
    }
    ctx->pc = 0x395A48u;
label_395a48:
    // 0x395a48: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x395a48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_395a4c:
    // 0x395a4c: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x395a4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_395a50:
    // 0x395a50: 0x8c670e80  lw          $a3, 0xE80($v1)
    ctx->pc = 0x395a50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_395a54:
    // 0x395a54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x395a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_395a58:
    // 0x395a58: 0x8e450048  lw          $a1, 0x48($s2)
    ctx->pc = 0x395a58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_395a5c:
    // 0x395a5c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x395a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_395a60:
    // 0x395a60: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x395a60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_395a64:
    // 0x395a64: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x395a64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_395a68:
    // 0x395a68: 0x8c686480  lw          $t0, 0x6480($v1)
    ctx->pc = 0x395a68u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 25728)));
label_395a6c:
    // 0x395a6c: 0x8ca3003c  lw          $v1, 0x3C($a1)
    ctx->pc = 0x395a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
label_395a70:
    // 0x395a70: 0x8ce50968  lw          $a1, 0x968($a3)
    ctx->pc = 0x395a70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2408)));
label_395a74:
    // 0x395a74: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x395a74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_395a78:
    // 0x395a78: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x395a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_395a7c:
    // 0x395a7c: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x395a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_395a80:
    // 0x395a80: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x395a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_395a84:
    // 0x395a84: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x395a84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_395a88:
    // 0x395a88: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x395a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_395a8c:
    // 0x395a8c: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x395a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_395a90:
    // 0x395a90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x395a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_395a94:
    // 0x395a94: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x395a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_395a98:
    // 0x395a98: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x395a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_395a9c:
    // 0x395a9c: 0x320f809  jalr        $t9
label_395aa0:
    if (ctx->pc == 0x395AA0u) {
        ctx->pc = 0x395AA0u;
            // 0x395aa0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x395AA4u;
        goto label_395aa4;
    }
    ctx->pc = 0x395A9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x395AA4u);
        ctx->pc = 0x395AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x395A9Cu;
            // 0x395aa0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x395AA4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x395AA4u; }
            if (ctx->pc != 0x395AA4u) { return; }
        }
        }
    }
    ctx->pc = 0x395AA4u;
label_395aa4:
    // 0x395aa4: 0x100001c3  b           . + 4 + (0x1C3 << 2)
label_395aa8:
    if (ctx->pc == 0x395AA8u) {
        ctx->pc = 0x395AACu;
        goto label_395aac;
    }
    ctx->pc = 0x395AA4u;
    {
        const bool branch_taken_0x395aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x395aa4) {
            ctx->pc = 0x3961B4u;
            goto label_3961b4;
        }
    }
    ctx->pc = 0x395AACu;
label_395aac:
    // 0x395aac: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x395aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_395ab0:
    // 0x395ab0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x395ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_395ab4:
    // 0x395ab4: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x395ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_395ab8:
    // 0x395ab8: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x395ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_395abc:
    // 0x395abc: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x395abcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_395ac0:
    // 0x395ac0: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x395ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_395ac4:
    // 0x395ac4: 0x8e230d98  lw          $v1, 0xD98($s1)
    ctx->pc = 0x395ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3480)));
label_395ac8:
    // 0x395ac8: 0x8c446480  lw          $a0, 0x6480($v0)
    ctx->pc = 0x395ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25728)));
label_395acc:
    // 0x395acc: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x395accu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_395ad0:
    // 0x395ad0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x395ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_395ad4:
    // 0x395ad4: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x395ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_395ad8:
    // 0x395ad8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x395ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_395adc:
    // 0x395adc: 0x8ca50074  lw          $a1, 0x74($a1)
    ctx->pc = 0x395adcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 116)));
label_395ae0:
    // 0x395ae0: 0x24423d34  addiu       $v0, $v0, 0x3D34
    ctx->pc = 0x395ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15668));
label_395ae4:
    // 0x395ae4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x395ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_395ae8:
    // 0x395ae8: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x395ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_395aec:
    // 0x395aec: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x395aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_395af0:
    // 0x395af0: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x395af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_395af4:
    // 0x395af4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x395af4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_395af8:
    // 0x395af8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x395af8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_395afc:
    // 0x395afc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x395afcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_395b00:
    // 0x395b00: 0x320f809  jalr        $t9
label_395b04:
    if (ctx->pc == 0x395B04u) {
        ctx->pc = 0x395B04u;
            // 0x395b04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x395B08u;
        goto label_395b08;
    }
    ctx->pc = 0x395B00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x395B08u);
        ctx->pc = 0x395B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x395B00u;
            // 0x395b04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x395B08u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x395B08u; }
            if (ctx->pc != 0x395B08u) { return; }
        }
        }
    }
    ctx->pc = 0x395B08u;
label_395b08:
    // 0x395b08: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x395b08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_395b0c:
    // 0x395b0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x395b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_395b10:
    // 0x395b10: 0x8e230d98  lw          $v1, 0xD98($s1)
    ctx->pc = 0x395b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3480)));
label_395b14:
    // 0x395b14: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x395b14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_395b18:
    // 0x395b18: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x395b18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_395b1c:
    // 0x395b1c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x395b1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_395b20:
    // 0x395b20: 0x320f809  jalr        $t9
label_395b24:
    if (ctx->pc == 0x395B24u) {
        ctx->pc = 0x395B24u;
            // 0x395b24: 0x24650060  addiu       $a1, $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
        ctx->pc = 0x395B28u;
        goto label_395b28;
    }
    ctx->pc = 0x395B20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x395B28u);
        ctx->pc = 0x395B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x395B20u;
            // 0x395b24: 0x24650060  addiu       $a1, $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x395B28u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x395B28u; }
            if (ctx->pc != 0x395B28u) { return; }
        }
        }
    }
    ctx->pc = 0x395B28u;
label_395b28:
    // 0x395b28: 0x100001a2  b           . + 4 + (0x1A2 << 2)
label_395b2c:
    if (ctx->pc == 0x395B2Cu) {
        ctx->pc = 0x395B30u;
        goto label_395b30;
    }
    ctx->pc = 0x395B28u;
    {
        const bool branch_taken_0x395b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x395b28) {
            ctx->pc = 0x3961B4u;
            goto label_3961b4;
        }
    }
    ctx->pc = 0x395B30u;
label_395b30:
    // 0x395b30: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x395b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_395b34:
    // 0x395b34: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x395b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_395b38:
    // 0x395b38: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x395b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_395b3c:
    // 0x395b3c: 0x3c110061  lui         $s1, 0x61
    ctx->pc = 0x395b3cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)97 << 16));
label_395b40:
    // 0x395b40: 0x8c426480  lw          $v0, 0x6480($v0)
    ctx->pc = 0x395b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25728)));
label_395b44:
    // 0x395b44: 0x263136c0  addiu       $s1, $s1, 0x36C0
    ctx->pc = 0x395b44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 14016));
label_395b48:
    // 0x395b48: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x395b48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_395b4c:
    // 0x395b4c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x395b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_395b50:
    // 0x395b50: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x395b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_395b54:
    // 0x395b54: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x395b54u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_395b58:
    // 0x395b58: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x395b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_395b5c:
    // 0x395b5c: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x395b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_395b60:
    // 0x395b60: 0x8c420134  lw          $v0, 0x134($v0)
    ctx->pc = 0x395b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 308)));
label_395b64:
    // 0x395b64: 0x248436d0  addiu       $a0, $a0, 0x36D0
    ctx->pc = 0x395b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14032));
label_395b68:
    // 0x395b68: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x395b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_395b6c:
    // 0x395b6c: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x395b6cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_395b70:
    // 0x395b70: 0xc04cc04  jal         func_133010
label_395b74:
    if (ctx->pc == 0x395B74u) {
        ctx->pc = 0x395B74u;
            // 0x395b74: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x395B78u;
        goto label_395b78;
    }
    ctx->pc = 0x395B70u;
    SET_GPR_U32(ctx, 31, 0x395B78u);
    ctx->pc = 0x395B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x395B70u;
            // 0x395b74: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x395B78u; }
        if (ctx->pc != 0x395B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x395B78u; }
        if (ctx->pc != 0x395B78u) { return; }
    }
    ctx->pc = 0x395B78u;
label_395b78:
    // 0x395b78: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x395b78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_395b7c:
    // 0x395b7c: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x395b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_395b80:
    // 0x395b80: 0xc04cc04  jal         func_133010
label_395b84:
    if (ctx->pc == 0x395B84u) {
        ctx->pc = 0x395B84u;
            // 0x395b84: 0x248436e0  addiu       $a0, $a0, 0x36E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14048));
        ctx->pc = 0x395B88u;
        goto label_395b88;
    }
    ctx->pc = 0x395B80u;
    SET_GPR_U32(ctx, 31, 0x395B88u);
    ctx->pc = 0x395B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x395B80u;
            // 0x395b84: 0x248436e0  addiu       $a0, $a0, 0x36E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x395B88u; }
        if (ctx->pc != 0x395B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x395B88u; }
        if (ctx->pc != 0x395B88u) { return; }
    }
    ctx->pc = 0x395B88u;
label_395b88:
    // 0x395b88: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x395b88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_395b8c:
    // 0x395b8c: 0x26650020  addiu       $a1, $s3, 0x20
    ctx->pc = 0x395b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_395b90:
    // 0x395b90: 0xc04cc04  jal         func_133010
label_395b94:
    if (ctx->pc == 0x395B94u) {
        ctx->pc = 0x395B94u;
            // 0x395b94: 0x248436f0  addiu       $a0, $a0, 0x36F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14064));
        ctx->pc = 0x395B98u;
        goto label_395b98;
    }
    ctx->pc = 0x395B90u;
    SET_GPR_U32(ctx, 31, 0x395B98u);
    ctx->pc = 0x395B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x395B90u;
            // 0x395b94: 0x248436f0  addiu       $a0, $a0, 0x36F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x395B98u; }
        if (ctx->pc != 0x395B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x395B98u; }
        if (ctx->pc != 0x395B98u) { return; }
    }
    ctx->pc = 0x395B98u;
label_395b98:
    // 0x395b98: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x395b98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_395b9c:
    // 0x395b9c: 0x26650030  addiu       $a1, $s3, 0x30
    ctx->pc = 0x395b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
label_395ba0:
    // 0x395ba0: 0xc04cc04  jal         func_133010
label_395ba4:
    if (ctx->pc == 0x395BA4u) {
        ctx->pc = 0x395BA4u;
            // 0x395ba4: 0x24843700  addiu       $a0, $a0, 0x3700 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14080));
        ctx->pc = 0x395BA8u;
        goto label_395ba8;
    }
    ctx->pc = 0x395BA0u;
    SET_GPR_U32(ctx, 31, 0x395BA8u);
    ctx->pc = 0x395BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x395BA0u;
            // 0x395ba4: 0x24843700  addiu       $a0, $a0, 0x3700 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x395BA8u; }
        if (ctx->pc != 0x395BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x395BA8u; }
        if (ctx->pc != 0x395BA8u) { return; }
    }
    ctx->pc = 0x395BA8u;
label_395ba8:
    // 0x395ba8: 0xc6600040  lwc1        $f0, 0x40($s3)
    ctx->pc = 0x395ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_395bac:
    // 0x395bac: 0x3c060061  lui         $a2, 0x61
    ctx->pc = 0x395bacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)97 << 16));
label_395bb0:
    // 0x395bb0: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x395bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_395bb4:
    // 0x395bb4: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x395bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_395bb8:
    // 0x395bb8: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x395bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_395bbc:
    // 0x395bbc: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x395bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_395bc0:
    // 0x395bc0: 0xe4c03710  swc1        $f0, 0x3710($a2)
    ctx->pc = 0x395bc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 14096), bits); }
label_395bc4:
    // 0x395bc4: 0x8e660044  lw          $a2, 0x44($s3)
    ctx->pc = 0x395bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
label_395bc8:
    // 0x395bc8: 0xaca63718  sw          $a2, 0x3718($a1)
    ctx->pc = 0x395bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 14104), GPR_U32(ctx, 6));
label_395bcc:
    // 0x395bcc: 0x8e460048  lw          $a2, 0x48($s2)
    ctx->pc = 0x395bccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_395bd0:
    // 0x395bd0: 0x8cc5002c  lw          $a1, 0x2C($a2)
    ctx->pc = 0x395bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
label_395bd4:
    // 0x395bd4: 0xac853714  sw          $a1, 0x3714($a0)
    ctx->pc = 0x395bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 14100), GPR_U32(ctx, 5));
label_395bd8:
    // 0x395bd8: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x395bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_395bdc:
    // 0x395bdc: 0xac6436c4  sw          $a0, 0x36C4($v1)
    ctx->pc = 0x395bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 14020), GPR_U32(ctx, 4));
label_395be0:
    // 0x395be0: 0x8e430044  lw          $v1, 0x44($s2)
    ctx->pc = 0x395be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_395be4:
    // 0x395be4: 0xa44336c0  sh          $v1, 0x36C0($v0)
    ctx->pc = 0x395be4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14016), (uint16_t)GPR_U32(ctx, 3));
label_395be8:
    // 0x395be8: 0x8cc20038  lw          $v0, 0x38($a2)
    ctx->pc = 0x395be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
label_395bec:
    // 0x395bec: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x395becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_395bf0:
    // 0x395bf0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_395bf4:
    if (ctx->pc == 0x395BF4u) {
        ctx->pc = 0x395BF4u;
            // 0x395bf4: 0x8e620048  lw          $v0, 0x48($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
        ctx->pc = 0x395BF8u;
        goto label_395bf8;
    }
    ctx->pc = 0x395BF0u;
    {
        const bool branch_taken_0x395bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x395bf0) {
            ctx->pc = 0x395BF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x395BF0u;
            // 0x395bf4: 0x8e620048  lw          $v0, 0x48($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x395C08u;
            goto label_395c08;
        }
    }
    ctx->pc = 0x395BF8u;
label_395bf8:
    // 0x395bf8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x395bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_395bfc:
    // 0x395bfc: 0x10000003  b           . + 4 + (0x3 << 2)
label_395c00:
    if (ctx->pc == 0x395C00u) {
        ctx->pc = 0x395C00u;
            // 0x395c00: 0xae22005c  sw          $v0, 0x5C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
        ctx->pc = 0x395C04u;
        goto label_395c04;
    }
    ctx->pc = 0x395BFCu;
    {
        const bool branch_taken_0x395bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x395BFCu;
            // 0x395c00: 0xae22005c  sw          $v0, 0x5C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395bfc) {
            ctx->pc = 0x395C0Cu;
            goto label_395c0c;
        }
    }
    ctx->pc = 0x395C04u;
label_395c04:
    // 0x395c04: 0x8e620048  lw          $v0, 0x48($s3)
    ctx->pc = 0x395c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
label_395c08:
    // 0x395c08: 0xae22005c  sw          $v0, 0x5C($s1)
    ctx->pc = 0x395c08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
label_395c0c:
    // 0x395c0c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x395c0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_395c10:
    // 0x395c10: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x395c10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_395c14:
    // 0x395c14: 0x320f809  jalr        $t9
label_395c18:
    if (ctx->pc == 0x395C18u) {
        ctx->pc = 0x395C18u;
            // 0x395c18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x395C1Cu;
        goto label_395c1c;
    }
    ctx->pc = 0x395C14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x395C1Cu);
        ctx->pc = 0x395C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x395C14u;
            // 0x395c18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x395C1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x395C1Cu; }
            if (ctx->pc != 0x395C1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x395C1Cu;
label_395c1c:
    // 0x395c1c: 0xa0400565  sb          $zero, 0x565($v0)
    ctx->pc = 0x395c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1381), (uint8_t)GPR_U32(ctx, 0));
label_395c20:
    // 0x395c20: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x395c20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_395c24:
    // 0x395c24: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x395c24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_395c28:
    // 0x395c28: 0x320f809  jalr        $t9
label_395c2c:
    if (ctx->pc == 0x395C2Cu) {
        ctx->pc = 0x395C2Cu;
            // 0x395c2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x395C30u;
        goto label_395c30;
    }
    ctx->pc = 0x395C28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x395C30u);
        ctx->pc = 0x395C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x395C28u;
            // 0x395c2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x395C30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x395C30u; }
            if (ctx->pc != 0x395C30u) { return; }
        }
        }
    }
    ctx->pc = 0x395C30u;
label_395c30:
    // 0x395c30: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x395c30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_395c34:
    // 0x395c34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x395c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_395c38:
    // 0x395c38: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x395c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_395c3c:
    // 0x395c3c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x395c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_395c40:
    // 0x395c40: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x395c40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_395c44:
    // 0x395c44: 0x320f809  jalr        $t9
label_395c48:
    if (ctx->pc == 0x395C48u) {
        ctx->pc = 0x395C48u;
            // 0x395c48: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x395C4Cu;
        goto label_395c4c;
    }
    ctx->pc = 0x395C44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x395C4Cu);
        ctx->pc = 0x395C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x395C44u;
            // 0x395c48: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x395C4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x395C4Cu; }
            if (ctx->pc != 0x395C4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x395C4Cu;
label_395c4c:
    // 0x395c4c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x395c4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_395c50:
    // 0x395c50: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x395c50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_395c54:
    // 0x395c54: 0x320f809  jalr        $t9
label_395c58:
    if (ctx->pc == 0x395C58u) {
        ctx->pc = 0x395C58u;
            // 0x395c58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x395C5Cu;
        goto label_395c5c;
    }
    ctx->pc = 0x395C54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x395C5Cu);
        ctx->pc = 0x395C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x395C54u;
            // 0x395c58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x395C5Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x395C5Cu; }
            if (ctx->pc != 0x395C5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x395C5Cu;
label_395c5c:
    // 0x395c5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x395c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_395c60:
    // 0x395c60: 0x10000154  b           . + 4 + (0x154 << 2)
label_395c64:
    if (ctx->pc == 0x395C64u) {
        ctx->pc = 0x395C64u;
            // 0x395c64: 0xa0430565  sb          $v1, 0x565($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1381), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x395C68u;
        goto label_395c68;
    }
    ctx->pc = 0x395C60u;
    {
        const bool branch_taken_0x395c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x395C60u;
            // 0x395c64: 0xa0430565  sb          $v1, 0x565($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1381), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395c60) {
            ctx->pc = 0x3961B4u;
            goto label_3961b4;
        }
    }
    ctx->pc = 0x395C68u;
label_395c68:
    // 0x395c68: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x395c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_395c6c:
    // 0x395c6c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x395c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_395c70:
    // 0x395c70: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x395c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_395c74:
    // 0x395c74: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x395c74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_395c78:
    // 0x395c78: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x395c78u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_395c7c:
    // 0x395c7c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x395c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_395c80:
    // 0x395c80: 0x8c456480  lw          $a1, 0x6480($v0)
    ctx->pc = 0x395c80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25728)));
label_395c84:
    // 0x395c84: 0x43880  sll         $a3, $a0, 2
    ctx->pc = 0x395c84u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_395c88:
    // 0x395c88: 0x8e240d98  lw          $a0, 0xD98($s1)
    ctx->pc = 0x395c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3480)));
label_395c8c:
    // 0x395c8c: 0xa71821  addu        $v1, $a1, $a3
    ctx->pc = 0x395c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_395c90:
    // 0x395c90: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x395c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_395c94:
    // 0x395c94: 0x8c650074  lw          $a1, 0x74($v1)
    ctx->pc = 0x395c94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_395c98:
    // 0x395c98: 0x24423540  addiu       $v0, $v0, 0x3540
    ctx->pc = 0x395c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13632));
label_395c9c:
    // 0x395c9c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x395c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_395ca0:
    // 0x395ca0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x395ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_395ca4:
    // 0x395ca4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x395ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_395ca8:
    // 0x395ca8: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x395ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_395cac:
    // 0x395cac: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x395cacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_395cb0:
    // 0x395cb0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x395cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_395cb4:
    // 0x395cb4: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x395cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_395cb8:
    // 0x395cb8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_395cbc:
    if (ctx->pc == 0x395CBCu) {
        ctx->pc = 0x395CBCu;
            // 0x395cbc: 0x2413003d  addiu       $s3, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->pc = 0x395CC0u;
        goto label_395cc0;
    }
    ctx->pc = 0x395CB8u;
    {
        const bool branch_taken_0x395cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x395cb8) {
            ctx->pc = 0x395CBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x395CB8u;
            // 0x395cbc: 0x2413003d  addiu       $s3, $zero, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
        ctx->in_delay_slot = false;
            ctx->pc = 0x395CCCu;
            goto label_395ccc;
        }
    }
    ctx->pc = 0x395CC0u;
label_395cc0:
    // 0x395cc0: 0x10000002  b           . + 4 + (0x2 << 2)
label_395cc4:
    if (ctx->pc == 0x395CC4u) {
        ctx->pc = 0x395CC4u;
            // 0x395cc4: 0x2413003b  addiu       $s3, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->pc = 0x395CC8u;
        goto label_395cc8;
    }
    ctx->pc = 0x395CC0u;
    {
        const bool branch_taken_0x395cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x395CC0u;
            // 0x395cc4: 0x2413003b  addiu       $s3, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395cc0) {
            ctx->pc = 0x395CCCu;
            goto label_395ccc;
        }
    }
    ctx->pc = 0x395CC8u;
label_395cc8:
    // 0x395cc8: 0x2413003d  addiu       $s3, $zero, 0x3D
    ctx->pc = 0x395cc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
label_395ccc:
    // 0x395ccc: 0x262302c0  addiu       $v1, $s1, 0x2C0
    ctx->pc = 0x395cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
label_395cd0:
    // 0x395cd0: 0x26220890  addiu       $v0, $s1, 0x890
    ctx->pc = 0x395cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
label_395cd4:
    // 0x395cd4: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x395cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_395cd8:
    // 0x395cd8: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x395cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_395cdc:
    // 0x395cdc: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x395cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_395ce0:
    // 0x395ce0: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x395ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
label_395ce4:
    // 0x395ce4: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x395ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_395ce8:
    // 0x395ce8: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x395ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
label_395cec:
    // 0x395cec: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x395cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_395cf0:
    // 0x395cf0: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x395cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
label_395cf4:
    // 0x395cf4: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x395cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_395cf8:
    // 0x395cf8: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x395cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
label_395cfc:
    // 0x395cfc: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x395cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_395d00:
    // 0x395d00: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x395d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_395d04:
    // 0x395d04: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x395d04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
label_395d08:
    // 0x395d08: 0x8e420044  lw          $v0, 0x44($s2)
    ctx->pc = 0x395d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_395d0c:
    // 0x395d0c: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x395d0cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_395d10:
    // 0x395d10: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x395d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_395d14:
    // 0x395d14: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x395d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
label_395d18:
    // 0x395d18: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x395d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_395d1c:
    // 0x395d1c: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x395d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
label_395d20:
    // 0x395d20: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x395d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_395d24:
    // 0x395d24: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x395d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
label_395d28:
    // 0x395d28: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x395d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_395d2c:
    // 0x395d2c: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x395d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_395d30:
    // 0x395d30: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x395d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_395d34:
    // 0x395d34: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_395d38:
    if (ctx->pc == 0x395D38u) {
        ctx->pc = 0x395D38u;
            // 0x395d38: 0x8ca20020  lw          $v0, 0x20($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
        ctx->pc = 0x395D3Cu;
        goto label_395d3c;
    }
    ctx->pc = 0x395D34u;
    {
        const bool branch_taken_0x395d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x395d34) {
            ctx->pc = 0x395D38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x395D34u;
            // 0x395d38: 0x8ca20020  lw          $v0, 0x20($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x395D4Cu;
            goto label_395d4c;
        }
    }
    ctx->pc = 0x395D3Cu;
label_395d3c:
    // 0x395d3c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x395d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_395d40:
    // 0x395d40: 0x10000003  b           . + 4 + (0x3 << 2)
label_395d44:
    if (ctx->pc == 0x395D44u) {
        ctx->pc = 0x395D44u;
            // 0x395d44: 0xac820024  sw          $v0, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
        ctx->pc = 0x395D48u;
        goto label_395d48;
    }
    ctx->pc = 0x395D40u;
    {
        const bool branch_taken_0x395d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x395D40u;
            // 0x395d44: 0xac820024  sw          $v0, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395d40) {
            ctx->pc = 0x395D50u;
            goto label_395d50;
        }
    }
    ctx->pc = 0x395D48u;
label_395d48:
    // 0x395d48: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x395d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_395d4c:
    // 0x395d4c: 0xac820024  sw          $v0, 0x24($a0)
    ctx->pc = 0x395d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
label_395d50:
    // 0x395d50: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x395d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_395d54:
    // 0x395d54: 0x8e250d98  lw          $a1, 0xD98($s1)
    ctx->pc = 0x395d54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3480)));
label_395d58:
    // 0x395d58: 0x131900  sll         $v1, $s3, 4
    ctx->pc = 0x395d58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 4));
label_395d5c:
    // 0x395d5c: 0x24423734  addiu       $v0, $v0, 0x3734
    ctx->pc = 0x395d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14132));
label_395d60:
    // 0x395d60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x395d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_395d64:
    // 0x395d64: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x395d64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_395d68:
    // 0x395d68: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x395d68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_395d6c:
    // 0x395d6c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x395d6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_395d70:
    // 0x395d70: 0x320f809  jalr        $t9
label_395d74:
    if (ctx->pc == 0x395D74u) {
        ctx->pc = 0x395D74u;
            // 0x395d74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x395D78u;
        goto label_395d78;
    }
    ctx->pc = 0x395D70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x395D78u);
        ctx->pc = 0x395D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x395D70u;
            // 0x395d74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x395D78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x395D78u; }
            if (ctx->pc != 0x395D78u) { return; }
        }
        }
    }
    ctx->pc = 0x395D78u;
label_395d78:
    // 0x395d78: 0xa0400565  sb          $zero, 0x565($v0)
    ctx->pc = 0x395d78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1381), (uint8_t)GPR_U32(ctx, 0));
label_395d7c:
    // 0x395d7c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x395d7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_395d80:
    // 0x395d80: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x395d80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_395d84:
    // 0x395d84: 0x320f809  jalr        $t9
label_395d88:
    if (ctx->pc == 0x395D88u) {
        ctx->pc = 0x395D88u;
            // 0x395d88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x395D8Cu;
        goto label_395d8c;
    }
    ctx->pc = 0x395D84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x395D8Cu);
        ctx->pc = 0x395D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x395D84u;
            // 0x395d88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x395D8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x395D8Cu; }
            if (ctx->pc != 0x395D8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x395D8Cu;
label_395d8c:
    // 0x395d8c: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x395d8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_395d90:
    // 0x395d90: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x395d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_395d94:
    // 0x395d94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x395d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_395d98:
    // 0x395d98: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x395d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_395d9c:
    // 0x395d9c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x395d9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_395da0:
    // 0x395da0: 0x320f809  jalr        $t9
label_395da4:
    if (ctx->pc == 0x395DA4u) {
        ctx->pc = 0x395DA4u;
            // 0x395da4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x395DA8u;
        goto label_395da8;
    }
    ctx->pc = 0x395DA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x395DA8u);
        ctx->pc = 0x395DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x395DA0u;
            // 0x395da4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x395DA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x395DA8u; }
            if (ctx->pc != 0x395DA8u) { return; }
        }
        }
    }
    ctx->pc = 0x395DA8u;
label_395da8:
    // 0x395da8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x395da8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_395dac:
    // 0x395dac: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x395dacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_395db0:
    // 0x395db0: 0x320f809  jalr        $t9
label_395db4:
    if (ctx->pc == 0x395DB4u) {
        ctx->pc = 0x395DB4u;
            // 0x395db4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x395DB8u;
        goto label_395db8;
    }
    ctx->pc = 0x395DB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x395DB8u);
        ctx->pc = 0x395DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x395DB0u;
            // 0x395db4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x395DB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x395DB8u; }
            if (ctx->pc != 0x395DB8u) { return; }
        }
        }
    }
    ctx->pc = 0x395DB8u;
label_395db8:
    // 0x395db8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x395db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_395dbc:
    // 0x395dbc: 0x100000fd  b           . + 4 + (0xFD << 2)
label_395dc0:
    if (ctx->pc == 0x395DC0u) {
        ctx->pc = 0x395DC0u;
            // 0x395dc0: 0xa0430565  sb          $v1, 0x565($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1381), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x395DC4u;
        goto label_395dc4;
    }
    ctx->pc = 0x395DBCu;
    {
        const bool branch_taken_0x395dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x395DBCu;
            // 0x395dc0: 0xa0430565  sb          $v1, 0x565($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1381), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395dbc) {
            ctx->pc = 0x3961B4u;
            goto label_3961b4;
        }
    }
    ctx->pc = 0x395DC4u;
label_395dc4:
    // 0x395dc4: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x395dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_395dc8:
    // 0x395dc8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x395dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_395dcc:
    // 0x395dcc: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x395dccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_395dd0:
    // 0x395dd0: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x395dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_395dd4:
    // 0x395dd4: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x395dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_395dd8:
    // 0x395dd8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x395dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_395ddc:
    // 0x395ddc: 0x8c456480  lw          $a1, 0x6480($v0)
    ctx->pc = 0x395ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25728)));
label_395de0:
    // 0x395de0: 0x43880  sll         $a3, $a0, 2
    ctx->pc = 0x395de0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_395de4:
    // 0x395de4: 0x8e240d98  lw          $a0, 0xD98($s1)
    ctx->pc = 0x395de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3480)));
label_395de8:
    // 0x395de8: 0xa71821  addu        $v1, $a1, $a3
    ctx->pc = 0x395de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_395dec:
    // 0x395dec: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x395decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_395df0:
    // 0x395df0: 0x8c650074  lw          $a1, 0x74($v1)
    ctx->pc = 0x395df0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_395df4:
    // 0x395df4: 0x24423620  addiu       $v0, $v0, 0x3620
    ctx->pc = 0x395df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13856));
label_395df8:
    // 0x395df8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x395df8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_395dfc:
    // 0x395dfc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x395dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_395e00:
    // 0x395e00: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x395e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_395e04:
    // 0x395e04: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x395e04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_395e08:
    // 0x395e08: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x395e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_395e0c:
    // 0x395e0c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x395e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_395e10:
    // 0x395e10: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x395e10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_395e14:
    // 0x395e14: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x395e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_395e18:
    // 0x395e18: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x395e18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_395e1c:
    // 0x395e1c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x395e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_395e20:
    // 0x395e20: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x395e20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_395e24:
    // 0x395e24: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x395e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_395e28:
    // 0x395e28: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x395e28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_395e2c:
    // 0x395e2c: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x395e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_395e30:
    // 0x395e30: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x395e30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
label_395e34:
    // 0x395e34: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x395e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_395e38:
    // 0x395e38: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x395e38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_395e3c:
    // 0x395e3c: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x395e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
label_395e40:
    // 0x395e40: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x395e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_395e44:
    // 0x395e44: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x395e44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_395e48:
    // 0x395e48: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x395e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_395e4c:
    // 0x395e4c: 0x8e420044  lw          $v0, 0x44($s2)
    ctx->pc = 0x395e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_395e50:
    // 0x395e50: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x395e50u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_395e54:
    // 0x395e54: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x395e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_395e58:
    // 0x395e58: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x395e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_395e5c:
    // 0x395e5c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x395e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_395e60:
    // 0x395e60: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_395e64:
    if (ctx->pc == 0x395E64u) {
        ctx->pc = 0x395E64u;
            // 0x395e64: 0xc4800020  lwc1        $f0, 0x20($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x395E68u;
        goto label_395e68;
    }
    ctx->pc = 0x395E60u;
    {
        const bool branch_taken_0x395e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x395e60) {
            ctx->pc = 0x395E64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x395E60u;
            // 0x395e64: 0xc4800020  lwc1        $f0, 0x20($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x395E78u;
            goto label_395e78;
        }
    }
    ctx->pc = 0x395E68u;
label_395e68:
    // 0x395e68: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x395e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_395e6c:
    // 0x395e6c: 0x10000004  b           . + 4 + (0x4 << 2)
label_395e70:
    if (ctx->pc == 0x395E70u) {
        ctx->pc = 0x395E70u;
            // 0x395e70: 0xac620024  sw          $v0, 0x24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
        ctx->pc = 0x395E74u;
        goto label_395e74;
    }
    ctx->pc = 0x395E6Cu;
    {
        const bool branch_taken_0x395e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x395E6Cu;
            // 0x395e70: 0xac620024  sw          $v0, 0x24($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395e6c) {
            ctx->pc = 0x395E80u;
            goto label_395e80;
        }
    }
    ctx->pc = 0x395E74u;
label_395e74:
    // 0x395e74: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x395e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_395e78:
    // 0x395e78: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x395e78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_395e7c:
    // 0x395e7c: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x395e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_395e80:
    // 0x395e80: 0x8e230d98  lw          $v1, 0xD98($s1)
    ctx->pc = 0x395e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3480)));
label_395e84:
    // 0x395e84: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x395e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_395e88:
    // 0x395e88: 0xac433bf4  sw          $v1, 0x3BF4($v0)
    ctx->pc = 0x395e88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15348), GPR_U32(ctx, 3));
label_395e8c:
    // 0x395e8c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x395e8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_395e90:
    // 0x395e90: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x395e90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_395e94:
    // 0x395e94: 0x320f809  jalr        $t9
label_395e98:
    if (ctx->pc == 0x395E98u) {
        ctx->pc = 0x395E98u;
            // 0x395e98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x395E9Cu;
        goto label_395e9c;
    }
    ctx->pc = 0x395E94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x395E9Cu);
        ctx->pc = 0x395E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x395E94u;
            // 0x395e98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x395E9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x395E9Cu; }
            if (ctx->pc != 0x395E9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x395E9Cu;
label_395e9c:
    // 0x395e9c: 0xa0400565  sb          $zero, 0x565($v0)
    ctx->pc = 0x395e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1381), (uint8_t)GPR_U32(ctx, 0));
label_395ea0:
    // 0x395ea0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x395ea0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_395ea4:
    // 0x395ea4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x395ea4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_395ea8:
    // 0x395ea8: 0x320f809  jalr        $t9
label_395eac:
    if (ctx->pc == 0x395EACu) {
        ctx->pc = 0x395EACu;
            // 0x395eac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x395EB0u;
        goto label_395eb0;
    }
    ctx->pc = 0x395EA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x395EB0u);
        ctx->pc = 0x395EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x395EA8u;
            // 0x395eac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x395EB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x395EB0u; }
            if (ctx->pc != 0x395EB0u) { return; }
        }
        }
    }
    ctx->pc = 0x395EB0u;
label_395eb0:
    // 0x395eb0: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x395eb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_395eb4:
    // 0x395eb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x395eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_395eb8:
    // 0x395eb8: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x395eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_395ebc:
    // 0x395ebc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x395ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_395ec0:
    // 0x395ec0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x395ec0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_395ec4:
    // 0x395ec4: 0x320f809  jalr        $t9
label_395ec8:
    if (ctx->pc == 0x395EC8u) {
        ctx->pc = 0x395EC8u;
            // 0x395ec8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x395ECCu;
        goto label_395ecc;
    }
    ctx->pc = 0x395EC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x395ECCu);
        ctx->pc = 0x395EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x395EC4u;
            // 0x395ec8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x395ECCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x395ECCu; }
            if (ctx->pc != 0x395ECCu) { return; }
        }
        }
    }
    ctx->pc = 0x395ECCu;
label_395ecc:
    // 0x395ecc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x395eccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_395ed0:
    // 0x395ed0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x395ed0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_395ed4:
    // 0x395ed4: 0x320f809  jalr        $t9
label_395ed8:
    if (ctx->pc == 0x395ED8u) {
        ctx->pc = 0x395ED8u;
            // 0x395ed8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x395EDCu;
        goto label_395edc;
    }
    ctx->pc = 0x395ED4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x395EDCu);
        ctx->pc = 0x395ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x395ED4u;
            // 0x395ed8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x395EDCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x395EDCu; }
            if (ctx->pc != 0x395EDCu) { return; }
        }
        }
    }
    ctx->pc = 0x395EDCu;
label_395edc:
    // 0x395edc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x395edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_395ee0:
    // 0x395ee0: 0x100000b4  b           . + 4 + (0xB4 << 2)
label_395ee4:
    if (ctx->pc == 0x395EE4u) {
        ctx->pc = 0x395EE4u;
            // 0x395ee4: 0xa0430565  sb          $v1, 0x565($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1381), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x395EE8u;
        goto label_395ee8;
    }
    ctx->pc = 0x395EE0u;
    {
        const bool branch_taken_0x395ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x395EE0u;
            // 0x395ee4: 0xa0430565  sb          $v1, 0x565($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1381), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395ee0) {
            ctx->pc = 0x3961B4u;
            goto label_3961b4;
        }
    }
    ctx->pc = 0x395EE8u;
label_395ee8:
    // 0x395ee8: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x395ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_395eec:
    // 0x395eec: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x395eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_395ef0:
    // 0x395ef0: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x395ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_395ef4:
    // 0x395ef4: 0x8c426480  lw          $v0, 0x6480($v0)
    ctx->pc = 0x395ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25728)));
label_395ef8:
    // 0x395ef8: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x395ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_395efc:
    // 0x395efc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x395efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_395f00:
    // 0x395f00: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x395f00u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_395f04:
    // 0x395f04: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x395f04u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_395f08:
    // 0x395f08: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x395f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_395f0c:
    // 0x395f0c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x395f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_395f10:
    // 0x395f10: 0x8c4201f4  lw          $v0, 0x1F4($v0)
    ctx->pc = 0x395f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 500)));
label_395f14:
    // 0x395f14: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x395f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_395f18:
    // 0x395f18: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x395f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_395f1c:
    // 0x395f1c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x395f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_395f20:
    // 0x395f20: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x395f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_395f24:
    // 0x395f24: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x395f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_395f28:
    // 0x395f28: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x395f28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_395f2c:
    // 0x395f2c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x395f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_395f30:
    // 0x395f30: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x395f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_395f34:
    // 0x395f34: 0x1c60fffa  bgtz        $v1, . + 4 + (-0x6 << 2)
label_395f38:
    if (ctx->pc == 0x395F38u) {
        ctx->pc = 0x395F3Cu;
        goto label_395f3c;
    }
    ctx->pc = 0x395F34u;
    {
        const bool branch_taken_0x395f34 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x395f34) {
            ctx->pc = 0x395F20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_395f20;
        }
    }
    ctx->pc = 0x395F3Cu;
label_395f3c:
    // 0x395f3c: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x395f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_395f40:
    // 0x395f40: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x395f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_395f44:
    // 0x395f44: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x395f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_395f48:
    // 0x395f48: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_395f4c:
    if (ctx->pc == 0x395F4Cu) {
        ctx->pc = 0x395F50u;
        goto label_395f50;
    }
    ctx->pc = 0x395F48u;
    {
        const bool branch_taken_0x395f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x395f48) {
            ctx->pc = 0x395F58u;
            goto label_395f58;
        }
    }
    ctx->pc = 0x395F50u;
label_395f50:
    // 0x395f50: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x395f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_395f54:
    // 0x395f54: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x395f54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
label_395f58:
    // 0x395f58: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x395f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_395f5c:
    // 0x395f5c: 0x822311aa  lb          $v1, 0x11AA($s1)
    ctx->pc = 0x395f5cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4522)));
label_395f60:
    // 0x395f60: 0x8c44e400  lw          $a0, -0x1C00($v0)
    ctx->pc = 0x395f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960128)));
label_395f64:
    // 0x395f64: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x395f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_395f68:
    // 0x395f68: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x395f68u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_395f6c:
    // 0x395f6c: 0x54200004  bnel        $at, $zero, . + 4 + (0x4 << 2)
label_395f70:
    if (ctx->pc == 0x395F70u) {
        ctx->pc = 0x395F70u;
            // 0x395f70: 0x8c820060  lw          $v0, 0x60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
        ctx->pc = 0x395F74u;
        goto label_395f74;
    }
    ctx->pc = 0x395F6Cu;
    {
        const bool branch_taken_0x395f6c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x395f6c) {
            ctx->pc = 0x395F70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x395F6Cu;
            // 0x395f70: 0x8c820060  lw          $v0, 0x60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x395F80u;
            goto label_395f80;
        }
    }
    ctx->pc = 0x395F74u;
label_395f74:
    // 0x395f74: 0x10000005  b           . + 4 + (0x5 << 2)
label_395f78:
    if (ctx->pc == 0x395F78u) {
        ctx->pc = 0x395F78u;
            // 0x395f78: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x395F7Cu;
        goto label_395f7c;
    }
    ctx->pc = 0x395F74u;
    {
        const bool branch_taken_0x395f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x395F74u;
            // 0x395f78: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395f74) {
            ctx->pc = 0x395F8Cu;
            goto label_395f8c;
        }
    }
    ctx->pc = 0x395F7Cu;
label_395f7c:
    // 0x395f7c: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x395f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_395f80:
    // 0x395f80: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x395f80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_395f84:
    // 0x395f84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x395f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_395f88:
    // 0x395f88: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x395f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_395f8c:
    // 0x395f8c: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x395f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_395f90:
    // 0x395f90: 0x8c46003c  lw          $a2, 0x3C($v0)
    ctx->pc = 0x395f90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_395f94:
    // 0x395f94: 0xc0b79e8  jal         func_2DE7A0
label_395f98:
    if (ctx->pc == 0x395F98u) {
        ctx->pc = 0x395F98u;
            // 0x395f98: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x395F9Cu;
        goto label_395f9c;
    }
    ctx->pc = 0x395F94u;
    SET_GPR_U32(ctx, 31, 0x395F9Cu);
    ctx->pc = 0x395F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x395F94u;
            // 0x395f98: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DE7A0u;
    if (runtime->hasFunction(0x2DE7A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DE7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x395F9Cu; }
        if (ctx->pc != 0x395F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DE7A0_0x2de7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x395F9Cu; }
        if (ctx->pc != 0x395F9Cu) { return; }
    }
    ctx->pc = 0x395F9Cu;
label_395f9c:
    // 0x395f9c: 0x10000085  b           . + 4 + (0x85 << 2)
label_395fa0:
    if (ctx->pc == 0x395FA0u) {
        ctx->pc = 0x395FA4u;
        goto label_395fa4;
    }
    ctx->pc = 0x395F9Cu;
    {
        const bool branch_taken_0x395f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x395f9c) {
            ctx->pc = 0x3961B4u;
            goto label_3961b4;
        }
    }
    ctx->pc = 0x395FA4u;
label_395fa4:
    // 0x395fa4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x395fa4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_395fa8:
    // 0x395fa8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x395fa8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_395fac:
    // 0x395fac: 0x320f809  jalr        $t9
label_395fb0:
    if (ctx->pc == 0x395FB0u) {
        ctx->pc = 0x395FB0u;
            // 0x395fb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x395FB4u;
        goto label_395fb4;
    }
    ctx->pc = 0x395FACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x395FB4u);
        ctx->pc = 0x395FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x395FACu;
            // 0x395fb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x395FB4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x395FB4u; }
            if (ctx->pc != 0x395FB4u) { return; }
        }
        }
    }
    ctx->pc = 0x395FB4u;
label_395fb4:
    // 0x395fb4: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x395fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_395fb8:
    // 0x395fb8: 0x1080007e  beqz        $a0, . + 4 + (0x7E << 2)
label_395fbc:
    if (ctx->pc == 0x395FBCu) {
        ctx->pc = 0x395FC0u;
        goto label_395fc0;
    }
    ctx->pc = 0x395FB8u;
    {
        const bool branch_taken_0x395fb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x395fb8) {
            ctx->pc = 0x3961B4u;
            goto label_3961b4;
        }
    }
    ctx->pc = 0x395FC0u;
label_395fc0:
    // 0x395fc0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x395fc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_395fc4:
    // 0x395fc4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x395fc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_395fc8:
    // 0x395fc8: 0x320f809  jalr        $t9
label_395fcc:
    if (ctx->pc == 0x395FCCu) {
        ctx->pc = 0x395FCCu;
            // 0x395fcc: 0x9493000c  lhu         $s3, 0xC($a0) (Delay Slot)
        SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->pc = 0x395FD0u;
        goto label_395fd0;
    }
    ctx->pc = 0x395FC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x395FD0u);
        ctx->pc = 0x395FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x395FC8u;
            // 0x395fcc: 0x9493000c  lhu         $s3, 0xC($a0) (Delay Slot)
        SET_GPR_U32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x395FD0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x395FD0u; }
            if (ctx->pc != 0x395FD0u) { return; }
        }
        }
    }
    ctx->pc = 0x395FD0u;
label_395fd0:
    // 0x395fd0: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x395fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_395fd4:
    // 0x395fd4: 0x50430059  beql        $v0, $v1, . + 4 + (0x59 << 2)
label_395fd8:
    if (ctx->pc == 0x395FD8u) {
        ctx->pc = 0x395FD8u;
            // 0x395fd8: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x395FDCu;
        goto label_395fdc;
    }
    ctx->pc = 0x395FD4u;
    {
        const bool branch_taken_0x395fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x395fd4) {
            ctx->pc = 0x395FD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x395FD4u;
            // 0x395fd8: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39613Cu;
            goto label_39613c;
        }
    }
    ctx->pc = 0x395FDCu;
label_395fdc:
    // 0x395fdc: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x395fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_395fe0:
    // 0x395fe0: 0x50430044  beql        $v0, $v1, . + 4 + (0x44 << 2)
label_395fe4:
    if (ctx->pc == 0x395FE4u) {
        ctx->pc = 0x395FE4u;
            // 0x395fe4: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x395FE8u;
        goto label_395fe8;
    }
    ctx->pc = 0x395FE0u;
    {
        const bool branch_taken_0x395fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x395fe0) {
            ctx->pc = 0x395FE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x395FE0u;
            // 0x395fe4: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3960F4u;
            goto label_3960f4;
        }
    }
    ctx->pc = 0x395FE8u;
label_395fe8:
    // 0x395fe8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x395fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_395fec:
    // 0x395fec: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
label_395ff0:
    if (ctx->pc == 0x395FF0u) {
        ctx->pc = 0x395FF0u;
            // 0x395ff0: 0x3263ffff  andi        $v1, $s3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
        ctx->pc = 0x395FF4u;
        goto label_395ff4;
    }
    ctx->pc = 0x395FECu;
    {
        const bool branch_taken_0x395fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x395fec) {
            ctx->pc = 0x395FF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x395FECu;
            // 0x395ff0: 0x3263ffff  andi        $v1, $s3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x396000u;
            goto label_396000;
        }
    }
    ctx->pc = 0x395FF4u;
label_395ff4:
    // 0x395ff4: 0x10000060  b           . + 4 + (0x60 << 2)
label_395ff8:
    if (ctx->pc == 0x395FF8u) {
        ctx->pc = 0x395FFCu;
        goto label_395ffc;
    }
    ctx->pc = 0x395FF4u;
    {
        const bool branch_taken_0x395ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x395ff4) {
            ctx->pc = 0x396178u;
            goto label_396178;
        }
    }
    ctx->pc = 0x395FFCu;
label_395ffc:
    // 0x395ffc: 0x3263ffff  andi        $v1, $s3, 0xFFFF
    ctx->pc = 0x395ffcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
label_396000:
    // 0x396000: 0x5060002a  beql        $v1, $zero, . + 4 + (0x2A << 2)
label_396004:
    if (ctx->pc == 0x396004u) {
        ctx->pc = 0x396004u;
            // 0x396004: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x396008u;
        goto label_396008;
    }
    ctx->pc = 0x396000u;
    {
        const bool branch_taken_0x396000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x396000) {
            ctx->pc = 0x396004u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x396000u;
            // 0x396004: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3960ACu;
            goto label_3960ac;
        }
    }
    ctx->pc = 0x396008u;
label_396008:
    // 0x396008: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x396008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_39600c:
    // 0x39600c: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
label_396010:
    if (ctx->pc == 0x396010u) {
        ctx->pc = 0x396010u;
            // 0x396010: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x396014u;
        goto label_396014;
    }
    ctx->pc = 0x39600Cu;
    {
        const bool branch_taken_0x39600c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x39600c) {
            ctx->pc = 0x396010u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39600Cu;
            // 0x396010: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x396020u;
            goto label_396020;
        }
    }
    ctx->pc = 0x396014u;
label_396014:
    // 0x396014: 0x10000058  b           . + 4 + (0x58 << 2)
label_396018:
    if (ctx->pc == 0x396018u) {
        ctx->pc = 0x39601Cu;
        goto label_39601c;
    }
    ctx->pc = 0x396014u;
    {
        const bool branch_taken_0x396014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x396014) {
            ctx->pc = 0x396178u;
            goto label_396178;
        }
    }
    ctx->pc = 0x39601Cu;
label_39601c:
    // 0x39601c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x39601cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_396020:
    // 0x396020: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x396020u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_396024:
    // 0x396024: 0x320f809  jalr        $t9
label_396028:
    if (ctx->pc == 0x396028u) {
        ctx->pc = 0x396028u;
            // 0x396028: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39602Cu;
        goto label_39602c;
    }
    ctx->pc = 0x396024u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39602Cu);
        ctx->pc = 0x396028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x396024u;
            // 0x396028: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39602Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39602Cu; }
            if (ctx->pc != 0x39602Cu) { return; }
        }
        }
    }
    ctx->pc = 0x39602Cu;
label_39602c:
    // 0x39602c: 0xa0400565  sb          $zero, 0x565($v0)
    ctx->pc = 0x39602cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1381), (uint8_t)GPR_U32(ctx, 0));
label_396030:
    // 0x396030: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x396030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
label_396034:
    // 0x396034: 0x90420005  lbu         $v0, 0x5($v0)
    ctx->pc = 0x396034u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
label_396038:
    // 0x396038: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_39603c:
    if (ctx->pc == 0x39603Cu) {
        ctx->pc = 0x39603Cu;
            // 0x39603c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x396040u;
        goto label_396040;
    }
    ctx->pc = 0x396038u;
    {
        const bool branch_taken_0x396038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x396038) {
            ctx->pc = 0x39603Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x396038u;
            // 0x39603c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x396078u;
            goto label_396078;
        }
    }
    ctx->pc = 0x396040u;
label_396040:
    // 0x396040: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x396040u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_396044:
    // 0x396044: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x396044u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_396048:
    // 0x396048: 0x320f809  jalr        $t9
label_39604c:
    if (ctx->pc == 0x39604Cu) {
        ctx->pc = 0x39604Cu;
            // 0x39604c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x396050u;
        goto label_396050;
    }
    ctx->pc = 0x396048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x396050u);
        ctx->pc = 0x39604Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x396048u;
            // 0x39604c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x396050u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x396050u; }
            if (ctx->pc != 0x396050u) { return; }
        }
        }
    }
    ctx->pc = 0x396050u;
label_396050:
    // 0x396050: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x396050u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_396054:
    // 0x396054: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x396054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_396058:
    // 0x396058: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x396058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_39605c:
    // 0x39605c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x39605cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_396060:
    // 0x396060: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x396060u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_396064:
    // 0x396064: 0x320f809  jalr        $t9
label_396068:
    if (ctx->pc == 0x396068u) {
        ctx->pc = 0x396068u;
            // 0x396068: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39606Cu;
        goto label_39606c;
    }
    ctx->pc = 0x396064u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39606Cu);
        ctx->pc = 0x396068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x396064u;
            // 0x396068: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39606Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39606Cu; }
            if (ctx->pc != 0x39606Cu) { return; }
        }
        }
    }
    ctx->pc = 0x39606Cu;
label_39606c:
    // 0x39606c: 0x10000042  b           . + 4 + (0x42 << 2)
label_396070:
    if (ctx->pc == 0x396070u) {
        ctx->pc = 0x396074u;
        goto label_396074;
    }
    ctx->pc = 0x39606Cu;
    {
        const bool branch_taken_0x39606c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39606c) {
            ctx->pc = 0x396178u;
            goto label_396178;
        }
    }
    ctx->pc = 0x396074u;
label_396074:
    // 0x396074: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x396074u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_396078:
    // 0x396078: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x396078u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_39607c:
    // 0x39607c: 0x320f809  jalr        $t9
label_396080:
    if (ctx->pc == 0x396080u) {
        ctx->pc = 0x396080u;
            // 0x396080: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x396084u;
        goto label_396084;
    }
    ctx->pc = 0x39607Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x396084u);
        ctx->pc = 0x396080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39607Cu;
            // 0x396080: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x396084u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x396084u; }
            if (ctx->pc != 0x396084u) { return; }
        }
        }
    }
    ctx->pc = 0x396084u;
label_396084:
    // 0x396084: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x396084u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_396088:
    // 0x396088: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x396088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39608c:
    // 0x39608c: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x39608cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_396090:
    // 0x396090: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x396090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_396094:
    // 0x396094: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x396094u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_396098:
    // 0x396098: 0x320f809  jalr        $t9
label_39609c:
    if (ctx->pc == 0x39609Cu) {
        ctx->pc = 0x39609Cu;
            // 0x39609c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3960A0u;
        goto label_3960a0;
    }
    ctx->pc = 0x396098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3960A0u);
        ctx->pc = 0x39609Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x396098u;
            // 0x39609c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3960A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3960A0u; }
            if (ctx->pc != 0x3960A0u) { return; }
        }
        }
    }
    ctx->pc = 0x3960A0u;
label_3960a0:
    // 0x3960a0: 0x10000035  b           . + 4 + (0x35 << 2)
label_3960a4:
    if (ctx->pc == 0x3960A4u) {
        ctx->pc = 0x3960A8u;
        goto label_3960a8;
    }
    ctx->pc = 0x3960A0u;
    {
        const bool branch_taken_0x3960a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3960a0) {
            ctx->pc = 0x396178u;
            goto label_396178;
        }
    }
    ctx->pc = 0x3960A8u;
label_3960a8:
    // 0x3960a8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3960a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3960ac:
    // 0x3960ac: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3960acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3960b0:
    // 0x3960b0: 0x320f809  jalr        $t9
label_3960b4:
    if (ctx->pc == 0x3960B4u) {
        ctx->pc = 0x3960B4u;
            // 0x3960b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3960B8u;
        goto label_3960b8;
    }
    ctx->pc = 0x3960B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3960B8u);
        ctx->pc = 0x3960B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3960B0u;
            // 0x3960b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3960B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3960B8u; }
            if (ctx->pc != 0x3960B8u) { return; }
        }
        }
    }
    ctx->pc = 0x3960B8u;
label_3960b8:
    // 0x3960b8: 0xa0400565  sb          $zero, 0x565($v0)
    ctx->pc = 0x3960b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1381), (uint8_t)GPR_U32(ctx, 0));
label_3960bc:
    // 0x3960bc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3960bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3960c0:
    // 0x3960c0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3960c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3960c4:
    // 0x3960c4: 0x320f809  jalr        $t9
label_3960c8:
    if (ctx->pc == 0x3960C8u) {
        ctx->pc = 0x3960C8u;
            // 0x3960c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3960CCu;
        goto label_3960cc;
    }
    ctx->pc = 0x3960C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3960CCu);
        ctx->pc = 0x3960C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3960C4u;
            // 0x3960c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3960CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3960CCu; }
            if (ctx->pc != 0x3960CCu) { return; }
        }
        }
    }
    ctx->pc = 0x3960CCu;
label_3960cc:
    // 0x3960cc: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x3960ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3960d0:
    // 0x3960d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3960d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3960d4:
    // 0x3960d4: 0x24050039  addiu       $a1, $zero, 0x39
    ctx->pc = 0x3960d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_3960d8:
    // 0x3960d8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3960d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3960dc:
    // 0x3960dc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3960dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3960e0:
    // 0x3960e0: 0x320f809  jalr        $t9
label_3960e4:
    if (ctx->pc == 0x3960E4u) {
        ctx->pc = 0x3960E4u;
            // 0x3960e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3960E8u;
        goto label_3960e8;
    }
    ctx->pc = 0x3960E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3960E8u);
        ctx->pc = 0x3960E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3960E0u;
            // 0x3960e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3960E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3960E8u; }
            if (ctx->pc != 0x3960E8u) { return; }
        }
        }
    }
    ctx->pc = 0x3960E8u;
label_3960e8:
    // 0x3960e8: 0x10000023  b           . + 4 + (0x23 << 2)
label_3960ec:
    if (ctx->pc == 0x3960ECu) {
        ctx->pc = 0x3960F0u;
        goto label_3960f0;
    }
    ctx->pc = 0x3960E8u;
    {
        const bool branch_taken_0x3960e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3960e8) {
            ctx->pc = 0x396178u;
            goto label_396178;
        }
    }
    ctx->pc = 0x3960F0u;
label_3960f0:
    // 0x3960f0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3960f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3960f4:
    // 0x3960f4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3960f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3960f8:
    // 0x3960f8: 0x320f809  jalr        $t9
label_3960fc:
    if (ctx->pc == 0x3960FCu) {
        ctx->pc = 0x3960FCu;
            // 0x3960fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x396100u;
        goto label_396100;
    }
    ctx->pc = 0x3960F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x396100u);
        ctx->pc = 0x3960FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3960F8u;
            // 0x3960fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x396100u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x396100u; }
            if (ctx->pc != 0x396100u) { return; }
        }
        }
    }
    ctx->pc = 0x396100u;
label_396100:
    // 0x396100: 0xa0400565  sb          $zero, 0x565($v0)
    ctx->pc = 0x396100u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1381), (uint8_t)GPR_U32(ctx, 0));
label_396104:
    // 0x396104: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x396104u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_396108:
    // 0x396108: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x396108u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_39610c:
    // 0x39610c: 0x320f809  jalr        $t9
label_396110:
    if (ctx->pc == 0x396110u) {
        ctx->pc = 0x396110u;
            // 0x396110: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x396114u;
        goto label_396114;
    }
    ctx->pc = 0x39610Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x396114u);
        ctx->pc = 0x396110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39610Cu;
            // 0x396110: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x396114u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x396114u; }
            if (ctx->pc != 0x396114u) { return; }
        }
        }
    }
    ctx->pc = 0x396114u;
label_396114:
    // 0x396114: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x396114u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_396118:
    // 0x396118: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x396118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39611c:
    // 0x39611c: 0x2405003a  addiu       $a1, $zero, 0x3A
    ctx->pc = 0x39611cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_396120:
    // 0x396120: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x396120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_396124:
    // 0x396124: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x396124u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_396128:
    // 0x396128: 0x320f809  jalr        $t9
label_39612c:
    if (ctx->pc == 0x39612Cu) {
        ctx->pc = 0x39612Cu;
            // 0x39612c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x396130u;
        goto label_396130;
    }
    ctx->pc = 0x396128u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x396130u);
        ctx->pc = 0x39612Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x396128u;
            // 0x39612c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x396130u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x396130u; }
            if (ctx->pc != 0x396130u) { return; }
        }
        }
    }
    ctx->pc = 0x396130u;
label_396130:
    // 0x396130: 0x10000011  b           . + 4 + (0x11 << 2)
label_396134:
    if (ctx->pc == 0x396134u) {
        ctx->pc = 0x396138u;
        goto label_396138;
    }
    ctx->pc = 0x396130u;
    {
        const bool branch_taken_0x396130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x396130) {
            ctx->pc = 0x396178u;
            goto label_396178;
        }
    }
    ctx->pc = 0x396138u;
label_396138:
    // 0x396138: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x396138u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39613c:
    // 0x39613c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x39613cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_396140:
    // 0x396140: 0x320f809  jalr        $t9
label_396144:
    if (ctx->pc == 0x396144u) {
        ctx->pc = 0x396144u;
            // 0x396144: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x396148u;
        goto label_396148;
    }
    ctx->pc = 0x396140u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x396148u);
        ctx->pc = 0x396144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x396140u;
            // 0x396144: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x396148u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x396148u; }
            if (ctx->pc != 0x396148u) { return; }
        }
        }
    }
    ctx->pc = 0x396148u;
label_396148:
    // 0x396148: 0xa0400565  sb          $zero, 0x565($v0)
    ctx->pc = 0x396148u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1381), (uint8_t)GPR_U32(ctx, 0));
label_39614c:
    // 0x39614c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x39614cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_396150:
    // 0x396150: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x396150u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_396154:
    // 0x396154: 0x320f809  jalr        $t9
label_396158:
    if (ctx->pc == 0x396158u) {
        ctx->pc = 0x396158u;
            // 0x396158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39615Cu;
        goto label_39615c;
    }
    ctx->pc = 0x396154u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39615Cu);
        ctx->pc = 0x396158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x396154u;
            // 0x396158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39615Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39615Cu; }
            if (ctx->pc != 0x39615Cu) { return; }
        }
        }
    }
    ctx->pc = 0x39615Cu;
label_39615c:
    // 0x39615c: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x39615cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_396160:
    // 0x396160: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x396160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_396164:
    // 0x396164: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x396164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_396168:
    // 0x396168: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x396168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39616c:
    // 0x39616c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x39616cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_396170:
    // 0x396170: 0x320f809  jalr        $t9
label_396174:
    if (ctx->pc == 0x396174u) {
        ctx->pc = 0x396174u;
            // 0x396174: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x396178u;
        goto label_396178;
    }
    ctx->pc = 0x396170u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x396178u);
        ctx->pc = 0x396174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x396170u;
            // 0x396174: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x396178u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x396178u; }
            if (ctx->pc != 0x396178u) { return; }
        }
        }
    }
    ctx->pc = 0x396178u;
label_396178:
    // 0x396178: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x396178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39617c:
    // 0x39617c: 0x822311aa  lb          $v1, 0x11AA($s1)
    ctx->pc = 0x39617cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4522)));
label_396180:
    // 0x396180: 0x8c44e400  lw          $a0, -0x1C00($v0)
    ctx->pc = 0x396180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960128)));
label_396184:
    // 0x396184: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x396184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_396188:
    // 0x396188: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x396188u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_39618c:
    // 0x39618c: 0x54200004  bnel        $at, $zero, . + 4 + (0x4 << 2)
label_396190:
    if (ctx->pc == 0x396190u) {
        ctx->pc = 0x396190u;
            // 0x396190: 0x8c820060  lw          $v0, 0x60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
        ctx->pc = 0x396194u;
        goto label_396194;
    }
    ctx->pc = 0x39618Cu;
    {
        const bool branch_taken_0x39618c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x39618c) {
            ctx->pc = 0x396190u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39618Cu;
            // 0x396190: 0x8c820060  lw          $v0, 0x60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3961A0u;
            goto label_3961a0;
        }
    }
    ctx->pc = 0x396194u;
label_396194:
    // 0x396194: 0x10000005  b           . + 4 + (0x5 << 2)
label_396198:
    if (ctx->pc == 0x396198u) {
        ctx->pc = 0x396198u;
            // 0x396198: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39619Cu;
        goto label_39619c;
    }
    ctx->pc = 0x396194u;
    {
        const bool branch_taken_0x396194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x396198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x396194u;
            // 0x396198: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396194) {
            ctx->pc = 0x3961ACu;
            goto label_3961ac;
        }
    }
    ctx->pc = 0x39619Cu;
label_39619c:
    // 0x39619c: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x39619cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_3961a0:
    // 0x3961a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3961a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3961a4:
    // 0x3961a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3961a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3961a8:
    // 0x3961a8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3961a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3961ac:
    // 0x3961ac: 0xc0b76dc  jal         func_2DDB70
label_3961b0:
    if (ctx->pc == 0x3961B0u) {
        ctx->pc = 0x3961B4u;
        goto label_3961b4;
    }
    ctx->pc = 0x3961ACu;
    SET_GPR_U32(ctx, 31, 0x3961B4u);
    ctx->pc = 0x2DDB70u;
    if (runtime->hasFunction(0x2DDB70u)) {
        auto targetFn = runtime->lookupFunction(0x2DDB70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3961B4u; }
        if (ctx->pc != 0x3961B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DDB70_0x2ddb70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3961B4u; }
        if (ctx->pc != 0x3961B4u) { return; }
    }
    ctx->pc = 0x3961B4u;
label_3961b4:
    // 0x3961b4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3961b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3961b8:
    // 0x3961b8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3961b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3961bc:
    // 0x3961bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3961bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3961c0:
    // 0x3961c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3961c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3961c4:
    // 0x3961c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3961c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3961c8:
    // 0x3961c8: 0x3e00008  jr          $ra
label_3961cc:
    if (ctx->pc == 0x3961CCu) {
        ctx->pc = 0x3961CCu;
            // 0x3961cc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x3961D0u;
        goto label_fallthrough_0x3961c8;
    }
    ctx->pc = 0x3961C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3961CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3961C8u;
            // 0x3961cc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3961c8:
    ctx->pc = 0x3961D0u;
}
