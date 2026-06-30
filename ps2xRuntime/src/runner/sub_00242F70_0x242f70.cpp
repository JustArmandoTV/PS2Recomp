#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00242F70
// Address: 0x242f70 - 0x2442c0
void sub_00242F70_0x242f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242F70_0x242f70");
#endif

    switch (ctx->pc) {
        case 0x242f70u: goto label_242f70;
        case 0x242f74u: goto label_242f74;
        case 0x242f78u: goto label_242f78;
        case 0x242f7cu: goto label_242f7c;
        case 0x242f80u: goto label_242f80;
        case 0x242f84u: goto label_242f84;
        case 0x242f88u: goto label_242f88;
        case 0x242f8cu: goto label_242f8c;
        case 0x242f90u: goto label_242f90;
        case 0x242f94u: goto label_242f94;
        case 0x242f98u: goto label_242f98;
        case 0x242f9cu: goto label_242f9c;
        case 0x242fa0u: goto label_242fa0;
        case 0x242fa4u: goto label_242fa4;
        case 0x242fa8u: goto label_242fa8;
        case 0x242facu: goto label_242fac;
        case 0x242fb0u: goto label_242fb0;
        case 0x242fb4u: goto label_242fb4;
        case 0x242fb8u: goto label_242fb8;
        case 0x242fbcu: goto label_242fbc;
        case 0x242fc0u: goto label_242fc0;
        case 0x242fc4u: goto label_242fc4;
        case 0x242fc8u: goto label_242fc8;
        case 0x242fccu: goto label_242fcc;
        case 0x242fd0u: goto label_242fd0;
        case 0x242fd4u: goto label_242fd4;
        case 0x242fd8u: goto label_242fd8;
        case 0x242fdcu: goto label_242fdc;
        case 0x242fe0u: goto label_242fe0;
        case 0x242fe4u: goto label_242fe4;
        case 0x242fe8u: goto label_242fe8;
        case 0x242fecu: goto label_242fec;
        case 0x242ff0u: goto label_242ff0;
        case 0x242ff4u: goto label_242ff4;
        case 0x242ff8u: goto label_242ff8;
        case 0x242ffcu: goto label_242ffc;
        case 0x243000u: goto label_243000;
        case 0x243004u: goto label_243004;
        case 0x243008u: goto label_243008;
        case 0x24300cu: goto label_24300c;
        case 0x243010u: goto label_243010;
        case 0x243014u: goto label_243014;
        case 0x243018u: goto label_243018;
        case 0x24301cu: goto label_24301c;
        case 0x243020u: goto label_243020;
        case 0x243024u: goto label_243024;
        case 0x243028u: goto label_243028;
        case 0x24302cu: goto label_24302c;
        case 0x243030u: goto label_243030;
        case 0x243034u: goto label_243034;
        case 0x243038u: goto label_243038;
        case 0x24303cu: goto label_24303c;
        case 0x243040u: goto label_243040;
        case 0x243044u: goto label_243044;
        case 0x243048u: goto label_243048;
        case 0x24304cu: goto label_24304c;
        case 0x243050u: goto label_243050;
        case 0x243054u: goto label_243054;
        case 0x243058u: goto label_243058;
        case 0x24305cu: goto label_24305c;
        case 0x243060u: goto label_243060;
        case 0x243064u: goto label_243064;
        case 0x243068u: goto label_243068;
        case 0x24306cu: goto label_24306c;
        case 0x243070u: goto label_243070;
        case 0x243074u: goto label_243074;
        case 0x243078u: goto label_243078;
        case 0x24307cu: goto label_24307c;
        case 0x243080u: goto label_243080;
        case 0x243084u: goto label_243084;
        case 0x243088u: goto label_243088;
        case 0x24308cu: goto label_24308c;
        case 0x243090u: goto label_243090;
        case 0x243094u: goto label_243094;
        case 0x243098u: goto label_243098;
        case 0x24309cu: goto label_24309c;
        case 0x2430a0u: goto label_2430a0;
        case 0x2430a4u: goto label_2430a4;
        case 0x2430a8u: goto label_2430a8;
        case 0x2430acu: goto label_2430ac;
        case 0x2430b0u: goto label_2430b0;
        case 0x2430b4u: goto label_2430b4;
        case 0x2430b8u: goto label_2430b8;
        case 0x2430bcu: goto label_2430bc;
        case 0x2430c0u: goto label_2430c0;
        case 0x2430c4u: goto label_2430c4;
        case 0x2430c8u: goto label_2430c8;
        case 0x2430ccu: goto label_2430cc;
        case 0x2430d0u: goto label_2430d0;
        case 0x2430d4u: goto label_2430d4;
        case 0x2430d8u: goto label_2430d8;
        case 0x2430dcu: goto label_2430dc;
        case 0x2430e0u: goto label_2430e0;
        case 0x2430e4u: goto label_2430e4;
        case 0x2430e8u: goto label_2430e8;
        case 0x2430ecu: goto label_2430ec;
        case 0x2430f0u: goto label_2430f0;
        case 0x2430f4u: goto label_2430f4;
        case 0x2430f8u: goto label_2430f8;
        case 0x2430fcu: goto label_2430fc;
        case 0x243100u: goto label_243100;
        case 0x243104u: goto label_243104;
        case 0x243108u: goto label_243108;
        case 0x24310cu: goto label_24310c;
        case 0x243110u: goto label_243110;
        case 0x243114u: goto label_243114;
        case 0x243118u: goto label_243118;
        case 0x24311cu: goto label_24311c;
        case 0x243120u: goto label_243120;
        case 0x243124u: goto label_243124;
        case 0x243128u: goto label_243128;
        case 0x24312cu: goto label_24312c;
        case 0x243130u: goto label_243130;
        case 0x243134u: goto label_243134;
        case 0x243138u: goto label_243138;
        case 0x24313cu: goto label_24313c;
        case 0x243140u: goto label_243140;
        case 0x243144u: goto label_243144;
        case 0x243148u: goto label_243148;
        case 0x24314cu: goto label_24314c;
        case 0x243150u: goto label_243150;
        case 0x243154u: goto label_243154;
        case 0x243158u: goto label_243158;
        case 0x24315cu: goto label_24315c;
        case 0x243160u: goto label_243160;
        case 0x243164u: goto label_243164;
        case 0x243168u: goto label_243168;
        case 0x24316cu: goto label_24316c;
        case 0x243170u: goto label_243170;
        case 0x243174u: goto label_243174;
        case 0x243178u: goto label_243178;
        case 0x24317cu: goto label_24317c;
        case 0x243180u: goto label_243180;
        case 0x243184u: goto label_243184;
        case 0x243188u: goto label_243188;
        case 0x24318cu: goto label_24318c;
        case 0x243190u: goto label_243190;
        case 0x243194u: goto label_243194;
        case 0x243198u: goto label_243198;
        case 0x24319cu: goto label_24319c;
        case 0x2431a0u: goto label_2431a0;
        case 0x2431a4u: goto label_2431a4;
        case 0x2431a8u: goto label_2431a8;
        case 0x2431acu: goto label_2431ac;
        case 0x2431b0u: goto label_2431b0;
        case 0x2431b4u: goto label_2431b4;
        case 0x2431b8u: goto label_2431b8;
        case 0x2431bcu: goto label_2431bc;
        case 0x2431c0u: goto label_2431c0;
        case 0x2431c4u: goto label_2431c4;
        case 0x2431c8u: goto label_2431c8;
        case 0x2431ccu: goto label_2431cc;
        case 0x2431d0u: goto label_2431d0;
        case 0x2431d4u: goto label_2431d4;
        case 0x2431d8u: goto label_2431d8;
        case 0x2431dcu: goto label_2431dc;
        case 0x2431e0u: goto label_2431e0;
        case 0x2431e4u: goto label_2431e4;
        case 0x2431e8u: goto label_2431e8;
        case 0x2431ecu: goto label_2431ec;
        case 0x2431f0u: goto label_2431f0;
        case 0x2431f4u: goto label_2431f4;
        case 0x2431f8u: goto label_2431f8;
        case 0x2431fcu: goto label_2431fc;
        case 0x243200u: goto label_243200;
        case 0x243204u: goto label_243204;
        case 0x243208u: goto label_243208;
        case 0x24320cu: goto label_24320c;
        case 0x243210u: goto label_243210;
        case 0x243214u: goto label_243214;
        case 0x243218u: goto label_243218;
        case 0x24321cu: goto label_24321c;
        case 0x243220u: goto label_243220;
        case 0x243224u: goto label_243224;
        case 0x243228u: goto label_243228;
        case 0x24322cu: goto label_24322c;
        case 0x243230u: goto label_243230;
        case 0x243234u: goto label_243234;
        case 0x243238u: goto label_243238;
        case 0x24323cu: goto label_24323c;
        case 0x243240u: goto label_243240;
        case 0x243244u: goto label_243244;
        case 0x243248u: goto label_243248;
        case 0x24324cu: goto label_24324c;
        case 0x243250u: goto label_243250;
        case 0x243254u: goto label_243254;
        case 0x243258u: goto label_243258;
        case 0x24325cu: goto label_24325c;
        case 0x243260u: goto label_243260;
        case 0x243264u: goto label_243264;
        case 0x243268u: goto label_243268;
        case 0x24326cu: goto label_24326c;
        case 0x243270u: goto label_243270;
        case 0x243274u: goto label_243274;
        case 0x243278u: goto label_243278;
        case 0x24327cu: goto label_24327c;
        case 0x243280u: goto label_243280;
        case 0x243284u: goto label_243284;
        case 0x243288u: goto label_243288;
        case 0x24328cu: goto label_24328c;
        case 0x243290u: goto label_243290;
        case 0x243294u: goto label_243294;
        case 0x243298u: goto label_243298;
        case 0x24329cu: goto label_24329c;
        case 0x2432a0u: goto label_2432a0;
        case 0x2432a4u: goto label_2432a4;
        case 0x2432a8u: goto label_2432a8;
        case 0x2432acu: goto label_2432ac;
        case 0x2432b0u: goto label_2432b0;
        case 0x2432b4u: goto label_2432b4;
        case 0x2432b8u: goto label_2432b8;
        case 0x2432bcu: goto label_2432bc;
        case 0x2432c0u: goto label_2432c0;
        case 0x2432c4u: goto label_2432c4;
        case 0x2432c8u: goto label_2432c8;
        case 0x2432ccu: goto label_2432cc;
        case 0x2432d0u: goto label_2432d0;
        case 0x2432d4u: goto label_2432d4;
        case 0x2432d8u: goto label_2432d8;
        case 0x2432dcu: goto label_2432dc;
        case 0x2432e0u: goto label_2432e0;
        case 0x2432e4u: goto label_2432e4;
        case 0x2432e8u: goto label_2432e8;
        case 0x2432ecu: goto label_2432ec;
        case 0x2432f0u: goto label_2432f0;
        case 0x2432f4u: goto label_2432f4;
        case 0x2432f8u: goto label_2432f8;
        case 0x2432fcu: goto label_2432fc;
        case 0x243300u: goto label_243300;
        case 0x243304u: goto label_243304;
        case 0x243308u: goto label_243308;
        case 0x24330cu: goto label_24330c;
        case 0x243310u: goto label_243310;
        case 0x243314u: goto label_243314;
        case 0x243318u: goto label_243318;
        case 0x24331cu: goto label_24331c;
        case 0x243320u: goto label_243320;
        case 0x243324u: goto label_243324;
        case 0x243328u: goto label_243328;
        case 0x24332cu: goto label_24332c;
        case 0x243330u: goto label_243330;
        case 0x243334u: goto label_243334;
        case 0x243338u: goto label_243338;
        case 0x24333cu: goto label_24333c;
        case 0x243340u: goto label_243340;
        case 0x243344u: goto label_243344;
        case 0x243348u: goto label_243348;
        case 0x24334cu: goto label_24334c;
        case 0x243350u: goto label_243350;
        case 0x243354u: goto label_243354;
        case 0x243358u: goto label_243358;
        case 0x24335cu: goto label_24335c;
        case 0x243360u: goto label_243360;
        case 0x243364u: goto label_243364;
        case 0x243368u: goto label_243368;
        case 0x24336cu: goto label_24336c;
        case 0x243370u: goto label_243370;
        case 0x243374u: goto label_243374;
        case 0x243378u: goto label_243378;
        case 0x24337cu: goto label_24337c;
        case 0x243380u: goto label_243380;
        case 0x243384u: goto label_243384;
        case 0x243388u: goto label_243388;
        case 0x24338cu: goto label_24338c;
        case 0x243390u: goto label_243390;
        case 0x243394u: goto label_243394;
        case 0x243398u: goto label_243398;
        case 0x24339cu: goto label_24339c;
        case 0x2433a0u: goto label_2433a0;
        case 0x2433a4u: goto label_2433a4;
        case 0x2433a8u: goto label_2433a8;
        case 0x2433acu: goto label_2433ac;
        case 0x2433b0u: goto label_2433b0;
        case 0x2433b4u: goto label_2433b4;
        case 0x2433b8u: goto label_2433b8;
        case 0x2433bcu: goto label_2433bc;
        case 0x2433c0u: goto label_2433c0;
        case 0x2433c4u: goto label_2433c4;
        case 0x2433c8u: goto label_2433c8;
        case 0x2433ccu: goto label_2433cc;
        case 0x2433d0u: goto label_2433d0;
        case 0x2433d4u: goto label_2433d4;
        case 0x2433d8u: goto label_2433d8;
        case 0x2433dcu: goto label_2433dc;
        case 0x2433e0u: goto label_2433e0;
        case 0x2433e4u: goto label_2433e4;
        case 0x2433e8u: goto label_2433e8;
        case 0x2433ecu: goto label_2433ec;
        case 0x2433f0u: goto label_2433f0;
        case 0x2433f4u: goto label_2433f4;
        case 0x2433f8u: goto label_2433f8;
        case 0x2433fcu: goto label_2433fc;
        case 0x243400u: goto label_243400;
        case 0x243404u: goto label_243404;
        case 0x243408u: goto label_243408;
        case 0x24340cu: goto label_24340c;
        case 0x243410u: goto label_243410;
        case 0x243414u: goto label_243414;
        case 0x243418u: goto label_243418;
        case 0x24341cu: goto label_24341c;
        case 0x243420u: goto label_243420;
        case 0x243424u: goto label_243424;
        case 0x243428u: goto label_243428;
        case 0x24342cu: goto label_24342c;
        case 0x243430u: goto label_243430;
        case 0x243434u: goto label_243434;
        case 0x243438u: goto label_243438;
        case 0x24343cu: goto label_24343c;
        case 0x243440u: goto label_243440;
        case 0x243444u: goto label_243444;
        case 0x243448u: goto label_243448;
        case 0x24344cu: goto label_24344c;
        case 0x243450u: goto label_243450;
        case 0x243454u: goto label_243454;
        case 0x243458u: goto label_243458;
        case 0x24345cu: goto label_24345c;
        case 0x243460u: goto label_243460;
        case 0x243464u: goto label_243464;
        case 0x243468u: goto label_243468;
        case 0x24346cu: goto label_24346c;
        case 0x243470u: goto label_243470;
        case 0x243474u: goto label_243474;
        case 0x243478u: goto label_243478;
        case 0x24347cu: goto label_24347c;
        case 0x243480u: goto label_243480;
        case 0x243484u: goto label_243484;
        case 0x243488u: goto label_243488;
        case 0x24348cu: goto label_24348c;
        case 0x243490u: goto label_243490;
        case 0x243494u: goto label_243494;
        case 0x243498u: goto label_243498;
        case 0x24349cu: goto label_24349c;
        case 0x2434a0u: goto label_2434a0;
        case 0x2434a4u: goto label_2434a4;
        case 0x2434a8u: goto label_2434a8;
        case 0x2434acu: goto label_2434ac;
        case 0x2434b0u: goto label_2434b0;
        case 0x2434b4u: goto label_2434b4;
        case 0x2434b8u: goto label_2434b8;
        case 0x2434bcu: goto label_2434bc;
        case 0x2434c0u: goto label_2434c0;
        case 0x2434c4u: goto label_2434c4;
        case 0x2434c8u: goto label_2434c8;
        case 0x2434ccu: goto label_2434cc;
        case 0x2434d0u: goto label_2434d0;
        case 0x2434d4u: goto label_2434d4;
        case 0x2434d8u: goto label_2434d8;
        case 0x2434dcu: goto label_2434dc;
        case 0x2434e0u: goto label_2434e0;
        case 0x2434e4u: goto label_2434e4;
        case 0x2434e8u: goto label_2434e8;
        case 0x2434ecu: goto label_2434ec;
        case 0x2434f0u: goto label_2434f0;
        case 0x2434f4u: goto label_2434f4;
        case 0x2434f8u: goto label_2434f8;
        case 0x2434fcu: goto label_2434fc;
        case 0x243500u: goto label_243500;
        case 0x243504u: goto label_243504;
        case 0x243508u: goto label_243508;
        case 0x24350cu: goto label_24350c;
        case 0x243510u: goto label_243510;
        case 0x243514u: goto label_243514;
        case 0x243518u: goto label_243518;
        case 0x24351cu: goto label_24351c;
        case 0x243520u: goto label_243520;
        case 0x243524u: goto label_243524;
        case 0x243528u: goto label_243528;
        case 0x24352cu: goto label_24352c;
        case 0x243530u: goto label_243530;
        case 0x243534u: goto label_243534;
        case 0x243538u: goto label_243538;
        case 0x24353cu: goto label_24353c;
        case 0x243540u: goto label_243540;
        case 0x243544u: goto label_243544;
        case 0x243548u: goto label_243548;
        case 0x24354cu: goto label_24354c;
        case 0x243550u: goto label_243550;
        case 0x243554u: goto label_243554;
        case 0x243558u: goto label_243558;
        case 0x24355cu: goto label_24355c;
        case 0x243560u: goto label_243560;
        case 0x243564u: goto label_243564;
        case 0x243568u: goto label_243568;
        case 0x24356cu: goto label_24356c;
        case 0x243570u: goto label_243570;
        case 0x243574u: goto label_243574;
        case 0x243578u: goto label_243578;
        case 0x24357cu: goto label_24357c;
        case 0x243580u: goto label_243580;
        case 0x243584u: goto label_243584;
        case 0x243588u: goto label_243588;
        case 0x24358cu: goto label_24358c;
        case 0x243590u: goto label_243590;
        case 0x243594u: goto label_243594;
        case 0x243598u: goto label_243598;
        case 0x24359cu: goto label_24359c;
        case 0x2435a0u: goto label_2435a0;
        case 0x2435a4u: goto label_2435a4;
        case 0x2435a8u: goto label_2435a8;
        case 0x2435acu: goto label_2435ac;
        case 0x2435b0u: goto label_2435b0;
        case 0x2435b4u: goto label_2435b4;
        case 0x2435b8u: goto label_2435b8;
        case 0x2435bcu: goto label_2435bc;
        case 0x2435c0u: goto label_2435c0;
        case 0x2435c4u: goto label_2435c4;
        case 0x2435c8u: goto label_2435c8;
        case 0x2435ccu: goto label_2435cc;
        case 0x2435d0u: goto label_2435d0;
        case 0x2435d4u: goto label_2435d4;
        case 0x2435d8u: goto label_2435d8;
        case 0x2435dcu: goto label_2435dc;
        case 0x2435e0u: goto label_2435e0;
        case 0x2435e4u: goto label_2435e4;
        case 0x2435e8u: goto label_2435e8;
        case 0x2435ecu: goto label_2435ec;
        case 0x2435f0u: goto label_2435f0;
        case 0x2435f4u: goto label_2435f4;
        case 0x2435f8u: goto label_2435f8;
        case 0x2435fcu: goto label_2435fc;
        case 0x243600u: goto label_243600;
        case 0x243604u: goto label_243604;
        case 0x243608u: goto label_243608;
        case 0x24360cu: goto label_24360c;
        case 0x243610u: goto label_243610;
        case 0x243614u: goto label_243614;
        case 0x243618u: goto label_243618;
        case 0x24361cu: goto label_24361c;
        case 0x243620u: goto label_243620;
        case 0x243624u: goto label_243624;
        case 0x243628u: goto label_243628;
        case 0x24362cu: goto label_24362c;
        case 0x243630u: goto label_243630;
        case 0x243634u: goto label_243634;
        case 0x243638u: goto label_243638;
        case 0x24363cu: goto label_24363c;
        case 0x243640u: goto label_243640;
        case 0x243644u: goto label_243644;
        case 0x243648u: goto label_243648;
        case 0x24364cu: goto label_24364c;
        case 0x243650u: goto label_243650;
        case 0x243654u: goto label_243654;
        case 0x243658u: goto label_243658;
        case 0x24365cu: goto label_24365c;
        case 0x243660u: goto label_243660;
        case 0x243664u: goto label_243664;
        case 0x243668u: goto label_243668;
        case 0x24366cu: goto label_24366c;
        case 0x243670u: goto label_243670;
        case 0x243674u: goto label_243674;
        case 0x243678u: goto label_243678;
        case 0x24367cu: goto label_24367c;
        case 0x243680u: goto label_243680;
        case 0x243684u: goto label_243684;
        case 0x243688u: goto label_243688;
        case 0x24368cu: goto label_24368c;
        case 0x243690u: goto label_243690;
        case 0x243694u: goto label_243694;
        case 0x243698u: goto label_243698;
        case 0x24369cu: goto label_24369c;
        case 0x2436a0u: goto label_2436a0;
        case 0x2436a4u: goto label_2436a4;
        case 0x2436a8u: goto label_2436a8;
        case 0x2436acu: goto label_2436ac;
        case 0x2436b0u: goto label_2436b0;
        case 0x2436b4u: goto label_2436b4;
        case 0x2436b8u: goto label_2436b8;
        case 0x2436bcu: goto label_2436bc;
        case 0x2436c0u: goto label_2436c0;
        case 0x2436c4u: goto label_2436c4;
        case 0x2436c8u: goto label_2436c8;
        case 0x2436ccu: goto label_2436cc;
        case 0x2436d0u: goto label_2436d0;
        case 0x2436d4u: goto label_2436d4;
        case 0x2436d8u: goto label_2436d8;
        case 0x2436dcu: goto label_2436dc;
        case 0x2436e0u: goto label_2436e0;
        case 0x2436e4u: goto label_2436e4;
        case 0x2436e8u: goto label_2436e8;
        case 0x2436ecu: goto label_2436ec;
        case 0x2436f0u: goto label_2436f0;
        case 0x2436f4u: goto label_2436f4;
        case 0x2436f8u: goto label_2436f8;
        case 0x2436fcu: goto label_2436fc;
        case 0x243700u: goto label_243700;
        case 0x243704u: goto label_243704;
        case 0x243708u: goto label_243708;
        case 0x24370cu: goto label_24370c;
        case 0x243710u: goto label_243710;
        case 0x243714u: goto label_243714;
        case 0x243718u: goto label_243718;
        case 0x24371cu: goto label_24371c;
        case 0x243720u: goto label_243720;
        case 0x243724u: goto label_243724;
        case 0x243728u: goto label_243728;
        case 0x24372cu: goto label_24372c;
        case 0x243730u: goto label_243730;
        case 0x243734u: goto label_243734;
        case 0x243738u: goto label_243738;
        case 0x24373cu: goto label_24373c;
        case 0x243740u: goto label_243740;
        case 0x243744u: goto label_243744;
        case 0x243748u: goto label_243748;
        case 0x24374cu: goto label_24374c;
        case 0x243750u: goto label_243750;
        case 0x243754u: goto label_243754;
        case 0x243758u: goto label_243758;
        case 0x24375cu: goto label_24375c;
        case 0x243760u: goto label_243760;
        case 0x243764u: goto label_243764;
        case 0x243768u: goto label_243768;
        case 0x24376cu: goto label_24376c;
        case 0x243770u: goto label_243770;
        case 0x243774u: goto label_243774;
        case 0x243778u: goto label_243778;
        case 0x24377cu: goto label_24377c;
        case 0x243780u: goto label_243780;
        case 0x243784u: goto label_243784;
        case 0x243788u: goto label_243788;
        case 0x24378cu: goto label_24378c;
        case 0x243790u: goto label_243790;
        case 0x243794u: goto label_243794;
        case 0x243798u: goto label_243798;
        case 0x24379cu: goto label_24379c;
        case 0x2437a0u: goto label_2437a0;
        case 0x2437a4u: goto label_2437a4;
        case 0x2437a8u: goto label_2437a8;
        case 0x2437acu: goto label_2437ac;
        case 0x2437b0u: goto label_2437b0;
        case 0x2437b4u: goto label_2437b4;
        case 0x2437b8u: goto label_2437b8;
        case 0x2437bcu: goto label_2437bc;
        case 0x2437c0u: goto label_2437c0;
        case 0x2437c4u: goto label_2437c4;
        case 0x2437c8u: goto label_2437c8;
        case 0x2437ccu: goto label_2437cc;
        case 0x2437d0u: goto label_2437d0;
        case 0x2437d4u: goto label_2437d4;
        case 0x2437d8u: goto label_2437d8;
        case 0x2437dcu: goto label_2437dc;
        case 0x2437e0u: goto label_2437e0;
        case 0x2437e4u: goto label_2437e4;
        case 0x2437e8u: goto label_2437e8;
        case 0x2437ecu: goto label_2437ec;
        case 0x2437f0u: goto label_2437f0;
        case 0x2437f4u: goto label_2437f4;
        case 0x2437f8u: goto label_2437f8;
        case 0x2437fcu: goto label_2437fc;
        case 0x243800u: goto label_243800;
        case 0x243804u: goto label_243804;
        case 0x243808u: goto label_243808;
        case 0x24380cu: goto label_24380c;
        case 0x243810u: goto label_243810;
        case 0x243814u: goto label_243814;
        case 0x243818u: goto label_243818;
        case 0x24381cu: goto label_24381c;
        case 0x243820u: goto label_243820;
        case 0x243824u: goto label_243824;
        case 0x243828u: goto label_243828;
        case 0x24382cu: goto label_24382c;
        case 0x243830u: goto label_243830;
        case 0x243834u: goto label_243834;
        case 0x243838u: goto label_243838;
        case 0x24383cu: goto label_24383c;
        case 0x243840u: goto label_243840;
        case 0x243844u: goto label_243844;
        case 0x243848u: goto label_243848;
        case 0x24384cu: goto label_24384c;
        case 0x243850u: goto label_243850;
        case 0x243854u: goto label_243854;
        case 0x243858u: goto label_243858;
        case 0x24385cu: goto label_24385c;
        case 0x243860u: goto label_243860;
        case 0x243864u: goto label_243864;
        case 0x243868u: goto label_243868;
        case 0x24386cu: goto label_24386c;
        case 0x243870u: goto label_243870;
        case 0x243874u: goto label_243874;
        case 0x243878u: goto label_243878;
        case 0x24387cu: goto label_24387c;
        case 0x243880u: goto label_243880;
        case 0x243884u: goto label_243884;
        case 0x243888u: goto label_243888;
        case 0x24388cu: goto label_24388c;
        case 0x243890u: goto label_243890;
        case 0x243894u: goto label_243894;
        case 0x243898u: goto label_243898;
        case 0x24389cu: goto label_24389c;
        case 0x2438a0u: goto label_2438a0;
        case 0x2438a4u: goto label_2438a4;
        case 0x2438a8u: goto label_2438a8;
        case 0x2438acu: goto label_2438ac;
        case 0x2438b0u: goto label_2438b0;
        case 0x2438b4u: goto label_2438b4;
        case 0x2438b8u: goto label_2438b8;
        case 0x2438bcu: goto label_2438bc;
        case 0x2438c0u: goto label_2438c0;
        case 0x2438c4u: goto label_2438c4;
        case 0x2438c8u: goto label_2438c8;
        case 0x2438ccu: goto label_2438cc;
        case 0x2438d0u: goto label_2438d0;
        case 0x2438d4u: goto label_2438d4;
        case 0x2438d8u: goto label_2438d8;
        case 0x2438dcu: goto label_2438dc;
        case 0x2438e0u: goto label_2438e0;
        case 0x2438e4u: goto label_2438e4;
        case 0x2438e8u: goto label_2438e8;
        case 0x2438ecu: goto label_2438ec;
        case 0x2438f0u: goto label_2438f0;
        case 0x2438f4u: goto label_2438f4;
        case 0x2438f8u: goto label_2438f8;
        case 0x2438fcu: goto label_2438fc;
        case 0x243900u: goto label_243900;
        case 0x243904u: goto label_243904;
        case 0x243908u: goto label_243908;
        case 0x24390cu: goto label_24390c;
        case 0x243910u: goto label_243910;
        case 0x243914u: goto label_243914;
        case 0x243918u: goto label_243918;
        case 0x24391cu: goto label_24391c;
        case 0x243920u: goto label_243920;
        case 0x243924u: goto label_243924;
        case 0x243928u: goto label_243928;
        case 0x24392cu: goto label_24392c;
        case 0x243930u: goto label_243930;
        case 0x243934u: goto label_243934;
        case 0x243938u: goto label_243938;
        case 0x24393cu: goto label_24393c;
        case 0x243940u: goto label_243940;
        case 0x243944u: goto label_243944;
        case 0x243948u: goto label_243948;
        case 0x24394cu: goto label_24394c;
        case 0x243950u: goto label_243950;
        case 0x243954u: goto label_243954;
        case 0x243958u: goto label_243958;
        case 0x24395cu: goto label_24395c;
        case 0x243960u: goto label_243960;
        case 0x243964u: goto label_243964;
        case 0x243968u: goto label_243968;
        case 0x24396cu: goto label_24396c;
        case 0x243970u: goto label_243970;
        case 0x243974u: goto label_243974;
        case 0x243978u: goto label_243978;
        case 0x24397cu: goto label_24397c;
        case 0x243980u: goto label_243980;
        case 0x243984u: goto label_243984;
        case 0x243988u: goto label_243988;
        case 0x24398cu: goto label_24398c;
        case 0x243990u: goto label_243990;
        case 0x243994u: goto label_243994;
        case 0x243998u: goto label_243998;
        case 0x24399cu: goto label_24399c;
        case 0x2439a0u: goto label_2439a0;
        case 0x2439a4u: goto label_2439a4;
        case 0x2439a8u: goto label_2439a8;
        case 0x2439acu: goto label_2439ac;
        case 0x2439b0u: goto label_2439b0;
        case 0x2439b4u: goto label_2439b4;
        case 0x2439b8u: goto label_2439b8;
        case 0x2439bcu: goto label_2439bc;
        case 0x2439c0u: goto label_2439c0;
        case 0x2439c4u: goto label_2439c4;
        case 0x2439c8u: goto label_2439c8;
        case 0x2439ccu: goto label_2439cc;
        case 0x2439d0u: goto label_2439d0;
        case 0x2439d4u: goto label_2439d4;
        case 0x2439d8u: goto label_2439d8;
        case 0x2439dcu: goto label_2439dc;
        case 0x2439e0u: goto label_2439e0;
        case 0x2439e4u: goto label_2439e4;
        case 0x2439e8u: goto label_2439e8;
        case 0x2439ecu: goto label_2439ec;
        case 0x2439f0u: goto label_2439f0;
        case 0x2439f4u: goto label_2439f4;
        case 0x2439f8u: goto label_2439f8;
        case 0x2439fcu: goto label_2439fc;
        case 0x243a00u: goto label_243a00;
        case 0x243a04u: goto label_243a04;
        case 0x243a08u: goto label_243a08;
        case 0x243a0cu: goto label_243a0c;
        case 0x243a10u: goto label_243a10;
        case 0x243a14u: goto label_243a14;
        case 0x243a18u: goto label_243a18;
        case 0x243a1cu: goto label_243a1c;
        case 0x243a20u: goto label_243a20;
        case 0x243a24u: goto label_243a24;
        case 0x243a28u: goto label_243a28;
        case 0x243a2cu: goto label_243a2c;
        case 0x243a30u: goto label_243a30;
        case 0x243a34u: goto label_243a34;
        case 0x243a38u: goto label_243a38;
        case 0x243a3cu: goto label_243a3c;
        case 0x243a40u: goto label_243a40;
        case 0x243a44u: goto label_243a44;
        case 0x243a48u: goto label_243a48;
        case 0x243a4cu: goto label_243a4c;
        case 0x243a50u: goto label_243a50;
        case 0x243a54u: goto label_243a54;
        case 0x243a58u: goto label_243a58;
        case 0x243a5cu: goto label_243a5c;
        case 0x243a60u: goto label_243a60;
        case 0x243a64u: goto label_243a64;
        case 0x243a68u: goto label_243a68;
        case 0x243a6cu: goto label_243a6c;
        case 0x243a70u: goto label_243a70;
        case 0x243a74u: goto label_243a74;
        case 0x243a78u: goto label_243a78;
        case 0x243a7cu: goto label_243a7c;
        case 0x243a80u: goto label_243a80;
        case 0x243a84u: goto label_243a84;
        case 0x243a88u: goto label_243a88;
        case 0x243a8cu: goto label_243a8c;
        case 0x243a90u: goto label_243a90;
        case 0x243a94u: goto label_243a94;
        case 0x243a98u: goto label_243a98;
        case 0x243a9cu: goto label_243a9c;
        case 0x243aa0u: goto label_243aa0;
        case 0x243aa4u: goto label_243aa4;
        case 0x243aa8u: goto label_243aa8;
        case 0x243aacu: goto label_243aac;
        case 0x243ab0u: goto label_243ab0;
        case 0x243ab4u: goto label_243ab4;
        case 0x243ab8u: goto label_243ab8;
        case 0x243abcu: goto label_243abc;
        case 0x243ac0u: goto label_243ac0;
        case 0x243ac4u: goto label_243ac4;
        case 0x243ac8u: goto label_243ac8;
        case 0x243accu: goto label_243acc;
        case 0x243ad0u: goto label_243ad0;
        case 0x243ad4u: goto label_243ad4;
        case 0x243ad8u: goto label_243ad8;
        case 0x243adcu: goto label_243adc;
        case 0x243ae0u: goto label_243ae0;
        case 0x243ae4u: goto label_243ae4;
        case 0x243ae8u: goto label_243ae8;
        case 0x243aecu: goto label_243aec;
        case 0x243af0u: goto label_243af0;
        case 0x243af4u: goto label_243af4;
        case 0x243af8u: goto label_243af8;
        case 0x243afcu: goto label_243afc;
        case 0x243b00u: goto label_243b00;
        case 0x243b04u: goto label_243b04;
        case 0x243b08u: goto label_243b08;
        case 0x243b0cu: goto label_243b0c;
        case 0x243b10u: goto label_243b10;
        case 0x243b14u: goto label_243b14;
        case 0x243b18u: goto label_243b18;
        case 0x243b1cu: goto label_243b1c;
        case 0x243b20u: goto label_243b20;
        case 0x243b24u: goto label_243b24;
        case 0x243b28u: goto label_243b28;
        case 0x243b2cu: goto label_243b2c;
        case 0x243b30u: goto label_243b30;
        case 0x243b34u: goto label_243b34;
        case 0x243b38u: goto label_243b38;
        case 0x243b3cu: goto label_243b3c;
        case 0x243b40u: goto label_243b40;
        case 0x243b44u: goto label_243b44;
        case 0x243b48u: goto label_243b48;
        case 0x243b4cu: goto label_243b4c;
        case 0x243b50u: goto label_243b50;
        case 0x243b54u: goto label_243b54;
        case 0x243b58u: goto label_243b58;
        case 0x243b5cu: goto label_243b5c;
        case 0x243b60u: goto label_243b60;
        case 0x243b64u: goto label_243b64;
        case 0x243b68u: goto label_243b68;
        case 0x243b6cu: goto label_243b6c;
        case 0x243b70u: goto label_243b70;
        case 0x243b74u: goto label_243b74;
        case 0x243b78u: goto label_243b78;
        case 0x243b7cu: goto label_243b7c;
        case 0x243b80u: goto label_243b80;
        case 0x243b84u: goto label_243b84;
        case 0x243b88u: goto label_243b88;
        case 0x243b8cu: goto label_243b8c;
        case 0x243b90u: goto label_243b90;
        case 0x243b94u: goto label_243b94;
        case 0x243b98u: goto label_243b98;
        case 0x243b9cu: goto label_243b9c;
        case 0x243ba0u: goto label_243ba0;
        case 0x243ba4u: goto label_243ba4;
        case 0x243ba8u: goto label_243ba8;
        case 0x243bacu: goto label_243bac;
        case 0x243bb0u: goto label_243bb0;
        case 0x243bb4u: goto label_243bb4;
        case 0x243bb8u: goto label_243bb8;
        case 0x243bbcu: goto label_243bbc;
        case 0x243bc0u: goto label_243bc0;
        case 0x243bc4u: goto label_243bc4;
        case 0x243bc8u: goto label_243bc8;
        case 0x243bccu: goto label_243bcc;
        case 0x243bd0u: goto label_243bd0;
        case 0x243bd4u: goto label_243bd4;
        case 0x243bd8u: goto label_243bd8;
        case 0x243bdcu: goto label_243bdc;
        case 0x243be0u: goto label_243be0;
        case 0x243be4u: goto label_243be4;
        case 0x243be8u: goto label_243be8;
        case 0x243becu: goto label_243bec;
        case 0x243bf0u: goto label_243bf0;
        case 0x243bf4u: goto label_243bf4;
        case 0x243bf8u: goto label_243bf8;
        case 0x243bfcu: goto label_243bfc;
        case 0x243c00u: goto label_243c00;
        case 0x243c04u: goto label_243c04;
        case 0x243c08u: goto label_243c08;
        case 0x243c0cu: goto label_243c0c;
        case 0x243c10u: goto label_243c10;
        case 0x243c14u: goto label_243c14;
        case 0x243c18u: goto label_243c18;
        case 0x243c1cu: goto label_243c1c;
        case 0x243c20u: goto label_243c20;
        case 0x243c24u: goto label_243c24;
        case 0x243c28u: goto label_243c28;
        case 0x243c2cu: goto label_243c2c;
        case 0x243c30u: goto label_243c30;
        case 0x243c34u: goto label_243c34;
        case 0x243c38u: goto label_243c38;
        case 0x243c3cu: goto label_243c3c;
        case 0x243c40u: goto label_243c40;
        case 0x243c44u: goto label_243c44;
        case 0x243c48u: goto label_243c48;
        case 0x243c4cu: goto label_243c4c;
        case 0x243c50u: goto label_243c50;
        case 0x243c54u: goto label_243c54;
        case 0x243c58u: goto label_243c58;
        case 0x243c5cu: goto label_243c5c;
        case 0x243c60u: goto label_243c60;
        case 0x243c64u: goto label_243c64;
        case 0x243c68u: goto label_243c68;
        case 0x243c6cu: goto label_243c6c;
        case 0x243c70u: goto label_243c70;
        case 0x243c74u: goto label_243c74;
        case 0x243c78u: goto label_243c78;
        case 0x243c7cu: goto label_243c7c;
        case 0x243c80u: goto label_243c80;
        case 0x243c84u: goto label_243c84;
        case 0x243c88u: goto label_243c88;
        case 0x243c8cu: goto label_243c8c;
        case 0x243c90u: goto label_243c90;
        case 0x243c94u: goto label_243c94;
        case 0x243c98u: goto label_243c98;
        case 0x243c9cu: goto label_243c9c;
        case 0x243ca0u: goto label_243ca0;
        case 0x243ca4u: goto label_243ca4;
        case 0x243ca8u: goto label_243ca8;
        case 0x243cacu: goto label_243cac;
        case 0x243cb0u: goto label_243cb0;
        case 0x243cb4u: goto label_243cb4;
        case 0x243cb8u: goto label_243cb8;
        case 0x243cbcu: goto label_243cbc;
        case 0x243cc0u: goto label_243cc0;
        case 0x243cc4u: goto label_243cc4;
        case 0x243cc8u: goto label_243cc8;
        case 0x243cccu: goto label_243ccc;
        case 0x243cd0u: goto label_243cd0;
        case 0x243cd4u: goto label_243cd4;
        case 0x243cd8u: goto label_243cd8;
        case 0x243cdcu: goto label_243cdc;
        case 0x243ce0u: goto label_243ce0;
        case 0x243ce4u: goto label_243ce4;
        case 0x243ce8u: goto label_243ce8;
        case 0x243cecu: goto label_243cec;
        case 0x243cf0u: goto label_243cf0;
        case 0x243cf4u: goto label_243cf4;
        case 0x243cf8u: goto label_243cf8;
        case 0x243cfcu: goto label_243cfc;
        case 0x243d00u: goto label_243d00;
        case 0x243d04u: goto label_243d04;
        case 0x243d08u: goto label_243d08;
        case 0x243d0cu: goto label_243d0c;
        case 0x243d10u: goto label_243d10;
        case 0x243d14u: goto label_243d14;
        case 0x243d18u: goto label_243d18;
        case 0x243d1cu: goto label_243d1c;
        case 0x243d20u: goto label_243d20;
        case 0x243d24u: goto label_243d24;
        case 0x243d28u: goto label_243d28;
        case 0x243d2cu: goto label_243d2c;
        case 0x243d30u: goto label_243d30;
        case 0x243d34u: goto label_243d34;
        case 0x243d38u: goto label_243d38;
        case 0x243d3cu: goto label_243d3c;
        case 0x243d40u: goto label_243d40;
        case 0x243d44u: goto label_243d44;
        case 0x243d48u: goto label_243d48;
        case 0x243d4cu: goto label_243d4c;
        case 0x243d50u: goto label_243d50;
        case 0x243d54u: goto label_243d54;
        case 0x243d58u: goto label_243d58;
        case 0x243d5cu: goto label_243d5c;
        case 0x243d60u: goto label_243d60;
        case 0x243d64u: goto label_243d64;
        case 0x243d68u: goto label_243d68;
        case 0x243d6cu: goto label_243d6c;
        case 0x243d70u: goto label_243d70;
        case 0x243d74u: goto label_243d74;
        case 0x243d78u: goto label_243d78;
        case 0x243d7cu: goto label_243d7c;
        case 0x243d80u: goto label_243d80;
        case 0x243d84u: goto label_243d84;
        case 0x243d88u: goto label_243d88;
        case 0x243d8cu: goto label_243d8c;
        case 0x243d90u: goto label_243d90;
        case 0x243d94u: goto label_243d94;
        case 0x243d98u: goto label_243d98;
        case 0x243d9cu: goto label_243d9c;
        case 0x243da0u: goto label_243da0;
        case 0x243da4u: goto label_243da4;
        case 0x243da8u: goto label_243da8;
        case 0x243dacu: goto label_243dac;
        case 0x243db0u: goto label_243db0;
        case 0x243db4u: goto label_243db4;
        case 0x243db8u: goto label_243db8;
        case 0x243dbcu: goto label_243dbc;
        case 0x243dc0u: goto label_243dc0;
        case 0x243dc4u: goto label_243dc4;
        case 0x243dc8u: goto label_243dc8;
        case 0x243dccu: goto label_243dcc;
        case 0x243dd0u: goto label_243dd0;
        case 0x243dd4u: goto label_243dd4;
        case 0x243dd8u: goto label_243dd8;
        case 0x243ddcu: goto label_243ddc;
        case 0x243de0u: goto label_243de0;
        case 0x243de4u: goto label_243de4;
        case 0x243de8u: goto label_243de8;
        case 0x243decu: goto label_243dec;
        case 0x243df0u: goto label_243df0;
        case 0x243df4u: goto label_243df4;
        case 0x243df8u: goto label_243df8;
        case 0x243dfcu: goto label_243dfc;
        case 0x243e00u: goto label_243e00;
        case 0x243e04u: goto label_243e04;
        case 0x243e08u: goto label_243e08;
        case 0x243e0cu: goto label_243e0c;
        case 0x243e10u: goto label_243e10;
        case 0x243e14u: goto label_243e14;
        case 0x243e18u: goto label_243e18;
        case 0x243e1cu: goto label_243e1c;
        case 0x243e20u: goto label_243e20;
        case 0x243e24u: goto label_243e24;
        case 0x243e28u: goto label_243e28;
        case 0x243e2cu: goto label_243e2c;
        case 0x243e30u: goto label_243e30;
        case 0x243e34u: goto label_243e34;
        case 0x243e38u: goto label_243e38;
        case 0x243e3cu: goto label_243e3c;
        case 0x243e40u: goto label_243e40;
        case 0x243e44u: goto label_243e44;
        case 0x243e48u: goto label_243e48;
        case 0x243e4cu: goto label_243e4c;
        case 0x243e50u: goto label_243e50;
        case 0x243e54u: goto label_243e54;
        case 0x243e58u: goto label_243e58;
        case 0x243e5cu: goto label_243e5c;
        case 0x243e60u: goto label_243e60;
        case 0x243e64u: goto label_243e64;
        case 0x243e68u: goto label_243e68;
        case 0x243e6cu: goto label_243e6c;
        case 0x243e70u: goto label_243e70;
        case 0x243e74u: goto label_243e74;
        case 0x243e78u: goto label_243e78;
        case 0x243e7cu: goto label_243e7c;
        case 0x243e80u: goto label_243e80;
        case 0x243e84u: goto label_243e84;
        case 0x243e88u: goto label_243e88;
        case 0x243e8cu: goto label_243e8c;
        case 0x243e90u: goto label_243e90;
        case 0x243e94u: goto label_243e94;
        case 0x243e98u: goto label_243e98;
        case 0x243e9cu: goto label_243e9c;
        case 0x243ea0u: goto label_243ea0;
        case 0x243ea4u: goto label_243ea4;
        case 0x243ea8u: goto label_243ea8;
        case 0x243eacu: goto label_243eac;
        case 0x243eb0u: goto label_243eb0;
        case 0x243eb4u: goto label_243eb4;
        case 0x243eb8u: goto label_243eb8;
        case 0x243ebcu: goto label_243ebc;
        case 0x243ec0u: goto label_243ec0;
        case 0x243ec4u: goto label_243ec4;
        case 0x243ec8u: goto label_243ec8;
        case 0x243eccu: goto label_243ecc;
        case 0x243ed0u: goto label_243ed0;
        case 0x243ed4u: goto label_243ed4;
        case 0x243ed8u: goto label_243ed8;
        case 0x243edcu: goto label_243edc;
        case 0x243ee0u: goto label_243ee0;
        case 0x243ee4u: goto label_243ee4;
        case 0x243ee8u: goto label_243ee8;
        case 0x243eecu: goto label_243eec;
        case 0x243ef0u: goto label_243ef0;
        case 0x243ef4u: goto label_243ef4;
        case 0x243ef8u: goto label_243ef8;
        case 0x243efcu: goto label_243efc;
        case 0x243f00u: goto label_243f00;
        case 0x243f04u: goto label_243f04;
        case 0x243f08u: goto label_243f08;
        case 0x243f0cu: goto label_243f0c;
        case 0x243f10u: goto label_243f10;
        case 0x243f14u: goto label_243f14;
        case 0x243f18u: goto label_243f18;
        case 0x243f1cu: goto label_243f1c;
        case 0x243f20u: goto label_243f20;
        case 0x243f24u: goto label_243f24;
        case 0x243f28u: goto label_243f28;
        case 0x243f2cu: goto label_243f2c;
        case 0x243f30u: goto label_243f30;
        case 0x243f34u: goto label_243f34;
        case 0x243f38u: goto label_243f38;
        case 0x243f3cu: goto label_243f3c;
        case 0x243f40u: goto label_243f40;
        case 0x243f44u: goto label_243f44;
        case 0x243f48u: goto label_243f48;
        case 0x243f4cu: goto label_243f4c;
        case 0x243f50u: goto label_243f50;
        case 0x243f54u: goto label_243f54;
        case 0x243f58u: goto label_243f58;
        case 0x243f5cu: goto label_243f5c;
        case 0x243f60u: goto label_243f60;
        case 0x243f64u: goto label_243f64;
        case 0x243f68u: goto label_243f68;
        case 0x243f6cu: goto label_243f6c;
        case 0x243f70u: goto label_243f70;
        case 0x243f74u: goto label_243f74;
        case 0x243f78u: goto label_243f78;
        case 0x243f7cu: goto label_243f7c;
        case 0x243f80u: goto label_243f80;
        case 0x243f84u: goto label_243f84;
        case 0x243f88u: goto label_243f88;
        case 0x243f8cu: goto label_243f8c;
        case 0x243f90u: goto label_243f90;
        case 0x243f94u: goto label_243f94;
        case 0x243f98u: goto label_243f98;
        case 0x243f9cu: goto label_243f9c;
        case 0x243fa0u: goto label_243fa0;
        case 0x243fa4u: goto label_243fa4;
        case 0x243fa8u: goto label_243fa8;
        case 0x243facu: goto label_243fac;
        case 0x243fb0u: goto label_243fb0;
        case 0x243fb4u: goto label_243fb4;
        case 0x243fb8u: goto label_243fb8;
        case 0x243fbcu: goto label_243fbc;
        case 0x243fc0u: goto label_243fc0;
        case 0x243fc4u: goto label_243fc4;
        case 0x243fc8u: goto label_243fc8;
        case 0x243fccu: goto label_243fcc;
        case 0x243fd0u: goto label_243fd0;
        case 0x243fd4u: goto label_243fd4;
        case 0x243fd8u: goto label_243fd8;
        case 0x243fdcu: goto label_243fdc;
        case 0x243fe0u: goto label_243fe0;
        case 0x243fe4u: goto label_243fe4;
        case 0x243fe8u: goto label_243fe8;
        case 0x243fecu: goto label_243fec;
        case 0x243ff0u: goto label_243ff0;
        case 0x243ff4u: goto label_243ff4;
        case 0x243ff8u: goto label_243ff8;
        case 0x243ffcu: goto label_243ffc;
        case 0x244000u: goto label_244000;
        case 0x244004u: goto label_244004;
        case 0x244008u: goto label_244008;
        case 0x24400cu: goto label_24400c;
        case 0x244010u: goto label_244010;
        case 0x244014u: goto label_244014;
        case 0x244018u: goto label_244018;
        case 0x24401cu: goto label_24401c;
        case 0x244020u: goto label_244020;
        case 0x244024u: goto label_244024;
        case 0x244028u: goto label_244028;
        case 0x24402cu: goto label_24402c;
        case 0x244030u: goto label_244030;
        case 0x244034u: goto label_244034;
        case 0x244038u: goto label_244038;
        case 0x24403cu: goto label_24403c;
        case 0x244040u: goto label_244040;
        case 0x244044u: goto label_244044;
        case 0x244048u: goto label_244048;
        case 0x24404cu: goto label_24404c;
        case 0x244050u: goto label_244050;
        case 0x244054u: goto label_244054;
        case 0x244058u: goto label_244058;
        case 0x24405cu: goto label_24405c;
        case 0x244060u: goto label_244060;
        case 0x244064u: goto label_244064;
        case 0x244068u: goto label_244068;
        case 0x24406cu: goto label_24406c;
        case 0x244070u: goto label_244070;
        case 0x244074u: goto label_244074;
        case 0x244078u: goto label_244078;
        case 0x24407cu: goto label_24407c;
        case 0x244080u: goto label_244080;
        case 0x244084u: goto label_244084;
        case 0x244088u: goto label_244088;
        case 0x24408cu: goto label_24408c;
        case 0x244090u: goto label_244090;
        case 0x244094u: goto label_244094;
        case 0x244098u: goto label_244098;
        case 0x24409cu: goto label_24409c;
        case 0x2440a0u: goto label_2440a0;
        case 0x2440a4u: goto label_2440a4;
        case 0x2440a8u: goto label_2440a8;
        case 0x2440acu: goto label_2440ac;
        case 0x2440b0u: goto label_2440b0;
        case 0x2440b4u: goto label_2440b4;
        case 0x2440b8u: goto label_2440b8;
        case 0x2440bcu: goto label_2440bc;
        case 0x2440c0u: goto label_2440c0;
        case 0x2440c4u: goto label_2440c4;
        case 0x2440c8u: goto label_2440c8;
        case 0x2440ccu: goto label_2440cc;
        case 0x2440d0u: goto label_2440d0;
        case 0x2440d4u: goto label_2440d4;
        case 0x2440d8u: goto label_2440d8;
        case 0x2440dcu: goto label_2440dc;
        case 0x2440e0u: goto label_2440e0;
        case 0x2440e4u: goto label_2440e4;
        case 0x2440e8u: goto label_2440e8;
        case 0x2440ecu: goto label_2440ec;
        case 0x2440f0u: goto label_2440f0;
        case 0x2440f4u: goto label_2440f4;
        case 0x2440f8u: goto label_2440f8;
        case 0x2440fcu: goto label_2440fc;
        case 0x244100u: goto label_244100;
        case 0x244104u: goto label_244104;
        case 0x244108u: goto label_244108;
        case 0x24410cu: goto label_24410c;
        case 0x244110u: goto label_244110;
        case 0x244114u: goto label_244114;
        case 0x244118u: goto label_244118;
        case 0x24411cu: goto label_24411c;
        case 0x244120u: goto label_244120;
        case 0x244124u: goto label_244124;
        case 0x244128u: goto label_244128;
        case 0x24412cu: goto label_24412c;
        case 0x244130u: goto label_244130;
        case 0x244134u: goto label_244134;
        case 0x244138u: goto label_244138;
        case 0x24413cu: goto label_24413c;
        case 0x244140u: goto label_244140;
        case 0x244144u: goto label_244144;
        case 0x244148u: goto label_244148;
        case 0x24414cu: goto label_24414c;
        case 0x244150u: goto label_244150;
        case 0x244154u: goto label_244154;
        case 0x244158u: goto label_244158;
        case 0x24415cu: goto label_24415c;
        case 0x244160u: goto label_244160;
        case 0x244164u: goto label_244164;
        case 0x244168u: goto label_244168;
        case 0x24416cu: goto label_24416c;
        case 0x244170u: goto label_244170;
        case 0x244174u: goto label_244174;
        case 0x244178u: goto label_244178;
        case 0x24417cu: goto label_24417c;
        case 0x244180u: goto label_244180;
        case 0x244184u: goto label_244184;
        case 0x244188u: goto label_244188;
        case 0x24418cu: goto label_24418c;
        case 0x244190u: goto label_244190;
        case 0x244194u: goto label_244194;
        case 0x244198u: goto label_244198;
        case 0x24419cu: goto label_24419c;
        case 0x2441a0u: goto label_2441a0;
        case 0x2441a4u: goto label_2441a4;
        case 0x2441a8u: goto label_2441a8;
        case 0x2441acu: goto label_2441ac;
        case 0x2441b0u: goto label_2441b0;
        case 0x2441b4u: goto label_2441b4;
        case 0x2441b8u: goto label_2441b8;
        case 0x2441bcu: goto label_2441bc;
        case 0x2441c0u: goto label_2441c0;
        case 0x2441c4u: goto label_2441c4;
        case 0x2441c8u: goto label_2441c8;
        case 0x2441ccu: goto label_2441cc;
        case 0x2441d0u: goto label_2441d0;
        case 0x2441d4u: goto label_2441d4;
        case 0x2441d8u: goto label_2441d8;
        case 0x2441dcu: goto label_2441dc;
        case 0x2441e0u: goto label_2441e0;
        case 0x2441e4u: goto label_2441e4;
        case 0x2441e8u: goto label_2441e8;
        case 0x2441ecu: goto label_2441ec;
        case 0x2441f0u: goto label_2441f0;
        case 0x2441f4u: goto label_2441f4;
        case 0x2441f8u: goto label_2441f8;
        case 0x2441fcu: goto label_2441fc;
        case 0x244200u: goto label_244200;
        case 0x244204u: goto label_244204;
        case 0x244208u: goto label_244208;
        case 0x24420cu: goto label_24420c;
        case 0x244210u: goto label_244210;
        case 0x244214u: goto label_244214;
        case 0x244218u: goto label_244218;
        case 0x24421cu: goto label_24421c;
        case 0x244220u: goto label_244220;
        case 0x244224u: goto label_244224;
        case 0x244228u: goto label_244228;
        case 0x24422cu: goto label_24422c;
        case 0x244230u: goto label_244230;
        case 0x244234u: goto label_244234;
        case 0x244238u: goto label_244238;
        case 0x24423cu: goto label_24423c;
        case 0x244240u: goto label_244240;
        case 0x244244u: goto label_244244;
        case 0x244248u: goto label_244248;
        case 0x24424cu: goto label_24424c;
        case 0x244250u: goto label_244250;
        case 0x244254u: goto label_244254;
        case 0x244258u: goto label_244258;
        case 0x24425cu: goto label_24425c;
        case 0x244260u: goto label_244260;
        case 0x244264u: goto label_244264;
        case 0x244268u: goto label_244268;
        case 0x24426cu: goto label_24426c;
        case 0x244270u: goto label_244270;
        case 0x244274u: goto label_244274;
        case 0x244278u: goto label_244278;
        case 0x24427cu: goto label_24427c;
        case 0x244280u: goto label_244280;
        case 0x244284u: goto label_244284;
        case 0x244288u: goto label_244288;
        case 0x24428cu: goto label_24428c;
        case 0x244290u: goto label_244290;
        case 0x244294u: goto label_244294;
        case 0x244298u: goto label_244298;
        case 0x24429cu: goto label_24429c;
        case 0x2442a0u: goto label_2442a0;
        case 0x2442a4u: goto label_2442a4;
        case 0x2442a8u: goto label_2442a8;
        case 0x2442acu: goto label_2442ac;
        case 0x2442b0u: goto label_2442b0;
        case 0x2442b4u: goto label_2442b4;
        case 0x2442b8u: goto label_2442b8;
        case 0x2442bcu: goto label_2442bc;
        default: break;
    }

    ctx->pc = 0x242f70u;

label_242f70:
    // 0x242f70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x242f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_242f74:
    // 0x242f74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x242f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_242f78:
    // 0x242f78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x242f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_242f7c:
    // 0x242f7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x242f7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_242f80:
    // 0x242f80: 0xa3a0004c  sb          $zero, 0x4C($sp)
    ctx->pc = 0x242f80u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 0));
label_242f84:
    // 0x242f84: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x242f84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_242f88:
    // 0x242f88: 0xa3a0004d  sb          $zero, 0x4D($sp)
    ctx->pc = 0x242f88u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 77), (uint8_t)GPR_U32(ctx, 0));
label_242f8c:
    // 0x242f8c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x242f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_242f90:
    // 0x242f90: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x242f90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_242f94:
    // 0x242f94: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x242f94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_242f98:
    // 0x242f98: 0xc090bc0  jal         func_242F00
label_242f9c:
    if (ctx->pc == 0x242F9Cu) {
        ctx->pc = 0x242F9Cu;
            // 0x242f9c: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
        ctx->pc = 0x242FA0u;
        goto label_242fa0;
    }
    ctx->pc = 0x242F98u;
    SET_GPR_U32(ctx, 31, 0x242FA0u);
    ctx->pc = 0x242F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242F98u;
            // 0x242f9c: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242F00u;
    if (runtime->hasFunction(0x242F00u)) {
        auto targetFn = runtime->lookupFunction(0x242F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242FA0u; }
        if (ctx->pc != 0x242FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00242F00_0x242f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242FA0u; }
        if (ctx->pc != 0x242FA0u) { return; }
    }
    ctx->pc = 0x242FA0u;
label_242fa0:
    // 0x242fa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x242fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_242fa4:
    // 0x242fa4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x242fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_242fa8:
    // 0x242fa8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x242fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_242fac:
    // 0x242fac: 0xc07ffd4  jal         func_1FFF50
label_242fb0:
    if (ctx->pc == 0x242FB0u) {
        ctx->pc = 0x242FB0u;
            // 0x242fb0: 0x24070015  addiu       $a3, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->pc = 0x242FB4u;
        goto label_242fb4;
    }
    ctx->pc = 0x242FACu;
    SET_GPR_U32(ctx, 31, 0x242FB4u);
    ctx->pc = 0x242FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242FACu;
            // 0x242fb0: 0x24070015  addiu       $a3, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFF50u;
    if (runtime->hasFunction(0x1FFF50u)) {
        auto targetFn = runtime->lookupFunction(0x1FFF50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242FB4u; }
        if (ctx->pc != 0x242FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FFF50_0x1fff50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242FB4u; }
        if (ctx->pc != 0x242FB4u) { return; }
    }
    ctx->pc = 0x242FB4u;
label_242fb4:
    // 0x242fb4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x242fb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_242fb8:
    // 0x242fb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x242fb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_242fbc:
    // 0x242fbc: 0x3e00008  jr          $ra
label_242fc0:
    if (ctx->pc == 0x242FC0u) {
        ctx->pc = 0x242FC0u;
            // 0x242fc0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x242FC4u;
        goto label_242fc4;
    }
    ctx->pc = 0x242FBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242FBCu;
            // 0x242fc0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x242FC4u;
label_242fc4:
    // 0x242fc4: 0x0  nop
    ctx->pc = 0x242fc4u;
    // NOP
label_242fc8:
    // 0x242fc8: 0x0  nop
    ctx->pc = 0x242fc8u;
    // NOP
label_242fcc:
    // 0x242fcc: 0x0  nop
    ctx->pc = 0x242fccu;
    // NOP
label_242fd0:
    // 0x242fd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x242fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_242fd4:
    // 0x242fd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x242fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_242fd8:
    // 0x242fd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x242fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_242fdc:
    // 0x242fdc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x242fdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_242fe0:
    // 0x242fe0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_242fe4:
    if (ctx->pc == 0x242FE4u) {
        ctx->pc = 0x242FE8u;
        goto label_242fe8;
    }
    ctx->pc = 0x242FE0u;
    {
        const bool branch_taken_0x242fe0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x242fe0) {
            ctx->pc = 0x242FF8u;
            goto label_242ff8;
        }
    }
    ctx->pc = 0x242FE8u;
label_242fe8:
    // 0x242fe8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x242fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_242fec:
    // 0x242fec: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x242fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_242ff0:
    // 0x242ff0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x242ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_242ff4:
    // 0x242ff4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x242ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_242ff8:
    // 0x242ff8: 0xc0917e8  jal         func_245FA0
label_242ffc:
    if (ctx->pc == 0x242FFCu) {
        ctx->pc = 0x242FFCu;
            // 0x242ffc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x243000u;
        goto label_243000;
    }
    ctx->pc = 0x242FF8u;
    SET_GPR_U32(ctx, 31, 0x243000u);
    ctx->pc = 0x242FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242FF8u;
            // 0x242ffc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x245FA0u;
    if (runtime->hasFunction(0x245FA0u)) {
        auto targetFn = runtime->lookupFunction(0x245FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243000u; }
        if (ctx->pc != 0x243000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00245FA0_0x245fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243000u; }
        if (ctx->pc != 0x243000u) { return; }
    }
    ctx->pc = 0x243000u;
label_243000:
    // 0x243000: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x243000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_243004:
    // 0x243004: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x243004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_243008:
    // 0x243008: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x243008u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_24300c:
    // 0x24300c: 0x3e00008  jr          $ra
label_243010:
    if (ctx->pc == 0x243010u) {
        ctx->pc = 0x243010u;
            // 0x243010: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x243014u;
        goto label_243014;
    }
    ctx->pc = 0x24300Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24300Cu;
            // 0x243010: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x243014u;
label_243014:
    // 0x243014: 0x0  nop
    ctx->pc = 0x243014u;
    // NOP
label_243018:
    // 0x243018: 0x0  nop
    ctx->pc = 0x243018u;
    // NOP
label_24301c:
    // 0x24301c: 0x0  nop
    ctx->pc = 0x24301cu;
    // NOP
label_243020:
    // 0x243020: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x243020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_243024:
    // 0x243024: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x243024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_243028:
    // 0x243028: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x243028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_24302c:
    // 0x24302c: 0xc091680  jal         func_245A00
label_243030:
    if (ctx->pc == 0x243030u) {
        ctx->pc = 0x243030u;
            // 0x243030: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x243034u;
        goto label_243034;
    }
    ctx->pc = 0x24302Cu;
    SET_GPR_U32(ctx, 31, 0x243034u);
    ctx->pc = 0x243030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24302Cu;
            // 0x243030: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x245A00u;
    if (runtime->hasFunction(0x245A00u)) {
        auto targetFn = runtime->lookupFunction(0x245A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243034u; }
        if (ctx->pc != 0x243034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00245A00_0x245a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243034u; }
        if (ctx->pc != 0x243034u) { return; }
    }
    ctx->pc = 0x243034u;
label_243034:
    // 0x243034: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x243034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_243038:
    // 0x243038: 0x3e00008  jr          $ra
label_24303c:
    if (ctx->pc == 0x24303Cu) {
        ctx->pc = 0x24303Cu;
            // 0x24303c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x243040u;
        goto label_243040;
    }
    ctx->pc = 0x243038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24303Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243038u;
            // 0x24303c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x243040u;
label_243040:
    // 0x243040: 0x27bdfcf0  addiu       $sp, $sp, -0x310
    ctx->pc = 0x243040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966512));
label_243044:
    // 0x243044: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x243044u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_243048:
    // 0x243048: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x243048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_24304c:
    // 0x24304c: 0x24a5ea60  addiu       $a1, $a1, -0x15A0
    ctx->pc = 0x24304cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
label_243050:
    // 0x243050: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x243050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_243054:
    // 0x243054: 0x27a3030c  addiu       $v1, $sp, 0x30C
    ctx->pc = 0x243054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 780));
label_243058:
    // 0x243058: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x243058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_24305c:
    // 0x24305c: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x24305cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_243060:
    // 0x243060: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x243060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_243064:
    // 0x243064: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x243064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_243068:
    // 0x243068: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x243068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_24306c:
    // 0x24306c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x24306cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_243070:
    // 0x243070: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x243070u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_243074:
    // 0x243074: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x243074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_243078:
    // 0x243078: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x243078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_24307c:
    // 0x24307c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x24307cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_243080:
    // 0x243080: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x243080u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_243084:
    // 0x243084: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x243084u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_243088:
    // 0x243088: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x243088u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_24308c:
    // 0x24308c: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x24308cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_243090:
    // 0x243090: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x243090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_243094:
    // 0x243094: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x243094u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_243098:
    // 0x243098: 0xa3a2030c  sb          $v0, 0x30C($sp)
    ctx->pc = 0x243098u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 780), (uint8_t)GPR_U32(ctx, 2));
label_24309c:
    // 0x24309c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x24309cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2430a0:
    // 0x2430a0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_2430a4:
    if (ctx->pc == 0x2430A4u) {
        ctx->pc = 0x2430A4u;
            // 0x2430a4: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2430A8u;
        goto label_2430a8;
    }
    ctx->pc = 0x2430A0u;
    {
        const bool branch_taken_0x2430a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2430A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2430A0u;
            // 0x2430a4: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2430a0) {
            ctx->pc = 0x2430E0u;
            goto label_2430e0;
        }
    }
    ctx->pc = 0x2430A8u;
label_2430a8:
    // 0x2430a8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x2430a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2430ac:
    // 0x2430ac: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2430acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_2430b0:
    // 0x2430b0: 0x2463ce90  addiu       $v1, $v1, -0x3170
    ctx->pc = 0x2430b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954640));
label_2430b4:
    // 0x2430b4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2430b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2430b8:
    // 0x2430b8: 0x2442cea0  addiu       $v0, $v0, -0x3160
    ctx->pc = 0x2430b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954656));
label_2430bc:
    // 0x2430bc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2430bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2430c0:
    // 0x2430c0: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x2430c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_2430c4:
    // 0x2430c4: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2430c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_2430c8:
    // 0x2430c8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2430c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_2430cc:
    // 0x2430cc: 0x4003c803  .word       0x4003C803                   # mfc0        $v1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2430ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_2430d0:
    // 0x2430d0: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x2430d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_2430d4:
    // 0x2430d4: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x2430d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_2430d8:
    // 0x2430d8: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x2430d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_2430dc:
    // 0x2430dc: 0x0  nop
    ctx->pc = 0x2430dcu;
    // NOP
label_2430e0:
    // 0x2430e0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2430e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2430e4:
    // 0x2430e4: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x2430e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_2430e8:
    // 0x2430e8: 0xafa20260  sw          $v0, 0x260($sp)
    ctx->pc = 0x2430e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 2));
label_2430ec:
    // 0x2430ec: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x2430ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2430f0:
    // 0x2430f0: 0xafa20264  sw          $v0, 0x264($sp)
    ctx->pc = 0x2430f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
label_2430f4:
    // 0x2430f4: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x2430f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_2430f8:
    // 0x2430f8: 0xafa2026c  sw          $v0, 0x26C($sp)
    ctx->pc = 0x2430f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 2));
label_2430fc:
    // 0x2430fc: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x2430fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_243100:
    // 0x243100: 0xafa20268  sw          $v0, 0x268($sp)
    ctx->pc = 0x243100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 2));
label_243104:
    // 0x243104: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x243104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_243108:
    // 0x243108: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x243108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_24310c:
    // 0x24310c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x24310cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_243110:
    // 0x243110: 0x8ca50008  lw          $a1, 0x8($a1)
    ctx->pc = 0x243110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_243114:
    // 0x243114: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x243114u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_243118:
    // 0x243118: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x243118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24311c:
    // 0x24311c: 0xc4a20040  lwc1        $f2, 0x40($a1)
    ctx->pc = 0x24311cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_243120:
    // 0x243120: 0xc4a10050  lwc1        $f1, 0x50($a1)
    ctx->pc = 0x243120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243124:
    // 0x243124: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x243124u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_243128:
    // 0x243128: 0xe7a10210  swc1        $f1, 0x210($sp)
    ctx->pc = 0x243128u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
label_24312c:
    // 0x24312c: 0xc4a20044  lwc1        $f2, 0x44($a1)
    ctx->pc = 0x24312cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_243130:
    // 0x243130: 0xc4a10054  lwc1        $f1, 0x54($a1)
    ctx->pc = 0x243130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243134:
    // 0x243134: 0xc7a80210  lwc1        $f8, 0x210($sp)
    ctx->pc = 0x243134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_243138:
    // 0x243138: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x243138u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_24313c:
    // 0x24313c: 0xe7a10214  swc1        $f1, 0x214($sp)
    ctx->pc = 0x24313cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 532), bits); }
label_243140:
    // 0x243140: 0xc4a20048  lwc1        $f2, 0x48($a1)
    ctx->pc = 0x243140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_243144:
    // 0x243144: 0xc4a10058  lwc1        $f1, 0x58($a1)
    ctx->pc = 0x243144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243148:
    // 0x243148: 0xc7a70214  lwc1        $f7, 0x214($sp)
    ctx->pc = 0x243148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_24314c:
    // 0x24314c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x24314cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_243150:
    // 0x243150: 0xe7a10218  swc1        $f1, 0x218($sp)
    ctx->pc = 0x243150u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 536), bits); }
label_243154:
    // 0x243154: 0xc4a2004c  lwc1        $f2, 0x4C($a1)
    ctx->pc = 0x243154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_243158:
    // 0x243158: 0xc4a1005c  lwc1        $f1, 0x5C($a1)
    ctx->pc = 0x243158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24315c:
    // 0x24315c: 0xc7a60218  lwc1        $f6, 0x218($sp)
    ctx->pc = 0x24315cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_243160:
    // 0x243160: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x243160u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_243164:
    // 0x243164: 0xe7a1021c  swc1        $f1, 0x21C($sp)
    ctx->pc = 0x243164u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 540), bits); }
label_243168:
    // 0x243168: 0xc4c20050  lwc1        $f2, 0x50($a2)
    ctx->pc = 0x243168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_24316c:
    // 0x24316c: 0xc4c10040  lwc1        $f1, 0x40($a2)
    ctx->pc = 0x24316cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243170:
    // 0x243170: 0xc7a4021c  lwc1        $f4, 0x21C($sp)
    ctx->pc = 0x243170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_243174:
    // 0x243174: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x243174u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_243178:
    // 0x243178: 0xe7a10200  swc1        $f1, 0x200($sp)
    ctx->pc = 0x243178u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
label_24317c:
    // 0x24317c: 0xc4c30054  lwc1        $f3, 0x54($a2)
    ctx->pc = 0x24317cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_243180:
    // 0x243180: 0xc4c10044  lwc1        $f1, 0x44($a2)
    ctx->pc = 0x243180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243184:
    // 0x243184: 0xc7a20200  lwc1        $f2, 0x200($sp)
    ctx->pc = 0x243184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_243188:
    // 0x243188: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x243188u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_24318c:
    // 0x24318c: 0xe7a10204  swc1        $f1, 0x204($sp)
    ctx->pc = 0x24318cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 516), bits); }
label_243190:
    // 0x243190: 0xc4c30058  lwc1        $f3, 0x58($a2)
    ctx->pc = 0x243190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_243194:
    // 0x243194: 0xc4c10048  lwc1        $f1, 0x48($a2)
    ctx->pc = 0x243194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243198:
    // 0x243198: 0xc7a50204  lwc1        $f5, 0x204($sp)
    ctx->pc = 0x243198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_24319c:
    // 0x24319c: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x24319cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_2431a0:
    // 0x2431a0: 0xe7a10208  swc1        $f1, 0x208($sp)
    ctx->pc = 0x2431a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
label_2431a4:
    // 0x2431a4: 0xc4c9005c  lwc1        $f9, 0x5C($a2)
    ctx->pc = 0x2431a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_2431a8:
    // 0x2431a8: 0xc4c1004c  lwc1        $f1, 0x4C($a2)
    ctx->pc = 0x2431a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2431ac:
    // 0x2431ac: 0xc7a30208  lwc1        $f3, 0x208($sp)
    ctx->pc = 0x2431acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2431b0:
    // 0x2431b0: 0x46014841  sub.s       $f1, $f9, $f1
    ctx->pc = 0x2431b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[9], ctx->f[1]);
label_2431b4:
    // 0x2431b4: 0xe7a1020c  swc1        $f1, 0x20C($sp)
    ctx->pc = 0x2431b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 524), bits); }
label_2431b8:
    // 0x2431b8: 0xc4aa005c  lwc1        $f10, 0x5C($a1)
    ctx->pc = 0x2431b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_2431bc:
    // 0x2431bc: 0xc4c9005c  lwc1        $f9, 0x5C($a2)
    ctx->pc = 0x2431bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_2431c0:
    // 0x2431c0: 0xc7a1020c  lwc1        $f1, 0x20C($sp)
    ctx->pc = 0x2431c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 524)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2431c4:
    // 0x2431c4: 0x460a0282  mul.s       $f10, $f0, $f10
    ctx->pc = 0x2431c4u;
    ctx->f[10] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
label_2431c8:
    // 0x2431c8: 0x46090242  mul.s       $f9, $f0, $f9
    ctx->pc = 0x2431c8u;
    ctx->f[9] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
label_2431cc:
    // 0x2431cc: 0x46085002  mul.s       $f0, $f10, $f8
    ctx->pc = 0x2431ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[8]);
label_2431d0:
    // 0x2431d0: 0xe7a002c0  swc1        $f0, 0x2C0($sp)
    ctx->pc = 0x2431d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 704), bits); }
label_2431d4:
    // 0x2431d4: 0x46075002  mul.s       $f0, $f10, $f7
    ctx->pc = 0x2431d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[7]);
label_2431d8:
    // 0x2431d8: 0xe7a002c4  swc1        $f0, 0x2C4($sp)
    ctx->pc = 0x2431d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 708), bits); }
label_2431dc:
    // 0x2431dc: 0x46065002  mul.s       $f0, $f10, $f6
    ctx->pc = 0x2431dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[6]);
label_2431e0:
    // 0x2431e0: 0xe7a002c8  swc1        $f0, 0x2C8($sp)
    ctx->pc = 0x2431e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 712), bits); }
label_2431e4:
    // 0x2431e4: 0x46045002  mul.s       $f0, $f10, $f4
    ctx->pc = 0x2431e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[4]);
label_2431e8:
    // 0x2431e8: 0xe7a002cc  swc1        $f0, 0x2CC($sp)
    ctx->pc = 0x2431e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 716), bits); }
label_2431ec:
    // 0x2431ec: 0x46024802  mul.s       $f0, $f9, $f2
    ctx->pc = 0x2431ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
label_2431f0:
    // 0x2431f0: 0xc7a702c0  lwc1        $f7, 0x2C0($sp)
    ctx->pc = 0x2431f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_2431f4:
    // 0x2431f4: 0xc7a602c4  lwc1        $f6, 0x2C4($sp)
    ctx->pc = 0x2431f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2431f8:
    // 0x2431f8: 0xc7a402c8  lwc1        $f4, 0x2C8($sp)
    ctx->pc = 0x2431f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2431fc:
    // 0x2431fc: 0xc7a202cc  lwc1        $f2, 0x2CC($sp)
    ctx->pc = 0x2431fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_243200:
    // 0x243200: 0x46003800  add.s       $f0, $f7, $f0
    ctx->pc = 0x243200u;
    ctx->f[0] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
label_243204:
    // 0x243204: 0xe7a002c0  swc1        $f0, 0x2C0($sp)
    ctx->pc = 0x243204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 704), bits); }
label_243208:
    // 0x243208: 0x46054802  mul.s       $f0, $f9, $f5
    ctx->pc = 0x243208u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[5]);
label_24320c:
    // 0x24320c: 0x46003000  add.s       $f0, $f6, $f0
    ctx->pc = 0x24320cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
label_243210:
    // 0x243210: 0xe7a002c4  swc1        $f0, 0x2C4($sp)
    ctx->pc = 0x243210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 708), bits); }
label_243214:
    // 0x243214: 0x46034802  mul.s       $f0, $f9, $f3
    ctx->pc = 0x243214u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[3]);
label_243218:
    // 0x243218: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x243218u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_24321c:
    // 0x24321c: 0xe7a002c8  swc1        $f0, 0x2C8($sp)
    ctx->pc = 0x24321cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 712), bits); }
label_243220:
    // 0x243220: 0x46014802  mul.s       $f0, $f9, $f1
    ctx->pc = 0x243220u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
label_243224:
    // 0x243224: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x243224u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_243228:
    // 0x243228: 0xe7a002cc  swc1        $f0, 0x2CC($sp)
    ctx->pc = 0x243228u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 716), bits); }
label_24322c:
    // 0x24322c: 0xc4a3009c  lwc1        $f3, 0x9C($a1)
    ctx->pc = 0x24322cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_243230:
    // 0x243230: 0xc4c1009c  lwc1        $f1, 0x9C($a2)
    ctx->pc = 0x243230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243234:
    // 0x243234: 0xc4a200a0  lwc1        $f2, 0xA0($a1)
    ctx->pc = 0x243234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_243238:
    // 0x243238: 0xc4c000a0  lwc1        $f0, 0xA0($a2)
    ctx->pc = 0x243238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24323c:
    // 0x24323c: 0x460350c2  mul.s       $f3, $f10, $f3
    ctx->pc = 0x24323cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[10], ctx->f[3]);
label_243240:
    // 0x243240: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x243240u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
label_243244:
    // 0x243244: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x243244u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_243248:
    // 0x243248: 0x4601001c  madd.s      $f0, $f0, $f1
    ctx->pc = 0x243248u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[1]));
label_24324c:
    // 0x24324c: 0xc0a45a0  jal         func_291680
label_243250:
    if (ctx->pc == 0x243250u) {
        ctx->pc = 0x243250u;
            // 0x243250: 0xe7a002cc  swc1        $f0, 0x2CC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 716), bits); }
        ctx->pc = 0x243254u;
        goto label_243254;
    }
    ctx->pc = 0x24324Cu;
    SET_GPR_U32(ctx, 31, 0x243254u);
    ctx->pc = 0x243250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24324Cu;
            // 0x243250: 0xe7a002cc  swc1        $f0, 0x2CC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 716), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x291680u;
    if (runtime->hasFunction(0x291680u)) {
        auto targetFn = runtime->lookupFunction(0x291680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243254u; }
        if (ctx->pc != 0x243254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00291680_0x291680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243254u; }
        if (ctx->pc != 0x243254u) { return; }
    }
    ctx->pc = 0x243254u;
label_243254:
    // 0x243254: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x243254u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_243258:
    // 0x243258: 0x24050810  addiu       $a1, $zero, 0x810
    ctx->pc = 0x243258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2064));
label_24325c:
    // 0x24325c: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x24325cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_243260:
    // 0x243260: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x243260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_243264:
    // 0x243264: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x243264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_243268:
    // 0x243268: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x243268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_24326c:
    // 0x24326c: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x24326cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_243270:
    // 0x243270: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_243274:
    if (ctx->pc == 0x243274u) {
        ctx->pc = 0x243278u;
        goto label_243278;
    }
    ctx->pc = 0x243270u;
    {
        const bool branch_taken_0x243270 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x243270) {
            ctx->pc = 0x243280u;
            goto label_243280;
        }
    }
    ctx->pc = 0x243278u;
label_243278:
    // 0x243278: 0x10000005  b           . + 4 + (0x5 << 2)
label_24327c:
    if (ctx->pc == 0x24327Cu) {
        ctx->pc = 0x24327Cu;
            // 0x24327c: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x243280u;
        goto label_243280;
    }
    ctx->pc = 0x243278u;
    {
        const bool branch_taken_0x243278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24327Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243278u;
            // 0x24327c: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243278) {
            ctx->pc = 0x243290u;
            goto label_243290;
        }
    }
    ctx->pc = 0x243280u;
label_243280:
    // 0x243280: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x243280u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_243284:
    // 0x243284: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x243284u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_243288:
    // 0x243288: 0x320f809  jalr        $t9
label_24328c:
    if (ctx->pc == 0x24328Cu) {
        ctx->pc = 0x243290u;
        goto label_243290;
    }
    ctx->pc = 0x243288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x243290u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x243290u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x243290u; }
            if (ctx->pc != 0x243290u) { return; }
        }
        }
    }
    ctx->pc = 0x243290u;
label_243290:
    // 0x243290: 0xafa202d0  sw          $v0, 0x2D0($sp)
    ctx->pc = 0x243290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 720), GPR_U32(ctx, 2));
label_243294:
    // 0x243294: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x243294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_243298:
    // 0x243298: 0x27a50270  addiu       $a1, $sp, 0x270
    ctx->pc = 0x243298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_24329c:
    // 0x24329c: 0xc0a4544  jal         func_291510
label_2432a0:
    if (ctx->pc == 0x2432A0u) {
        ctx->pc = 0x2432A0u;
            // 0x2432a0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2432A4u;
        goto label_2432a4;
    }
    ctx->pc = 0x24329Cu;
    SET_GPR_U32(ctx, 31, 0x2432A4u);
    ctx->pc = 0x2432A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24329Cu;
            // 0x2432a0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291510u;
    if (runtime->hasFunction(0x291510u)) {
        auto targetFn = runtime->lookupFunction(0x291510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2432A4u; }
        if (ctx->pc != 0x2432A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00291510_0x291510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2432A4u; }
        if (ctx->pc != 0x2432A4u) { return; }
    }
    ctx->pc = 0x2432A4u;
label_2432a4:
    // 0x2432a4: 0x8e960004  lw          $s6, 0x4($s4)
    ctx->pc = 0x2432a4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2432a8:
    // 0x2432a8: 0xc7a502c0  lwc1        $f5, 0x2C0($sp)
    ctx->pc = 0x2432a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2432ac:
    // 0x2432ac: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x2432acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2432b0:
    // 0x2432b0: 0xc7a402c4  lwc1        $f4, 0x2C4($sp)
    ctx->pc = 0x2432b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2432b4:
    // 0x2432b4: 0xc7a302c8  lwc1        $f3, 0x2C8($sp)
    ctx->pc = 0x2432b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2432b8:
    // 0x2432b8: 0x8e920008  lw          $s2, 0x8($s4)
    ctx->pc = 0x2432b8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_2432bc:
    // 0x2432bc: 0x8fb702d0  lw          $s7, 0x2D0($sp)
    ctx->pc = 0x2432bcu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
label_2432c0:
    // 0x2432c0: 0x27a201d0  addiu       $v0, $sp, 0x1D0
    ctx->pc = 0x2432c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_2432c4:
    // 0x2432c4: 0x8ed00008  lw          $s0, 0x8($s6)
    ctx->pc = 0x2432c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_2432c8:
    // 0x2432c8: 0x8c710008  lw          $s1, 0x8($v1)
    ctx->pc = 0x2432c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2432cc:
    // 0x2432cc: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x2432ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2432d0:
    // 0x2432d0: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2432d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2432d4:
    // 0x2432d4: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2432d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2432d8:
    // 0x2432d8: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2432d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_2432dc:
    // 0x2432dc: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x2432dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_2432e0:
    // 0x2432e0: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x2432e0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_2432e4:
    // 0x2432e4: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x2432e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_2432e8:
    // 0x2432e8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2432e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2432ec:
    // 0x2432ec: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x2432ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2432f0:
    // 0x2432f0: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x2432f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2432f4:
    // 0x2432f4: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x2432f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2432f8:
    // 0x2432f8: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x2432f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_2432fc:
    // 0x2432fc: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x2432fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_243300:
    // 0x243300: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x243300u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_243304:
    // 0x243304: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x243304u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_243308:
    // 0x243308: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x243308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_24330c:
    // 0x24330c: 0xc6020020  lwc1        $f2, 0x20($s0)
    ctx->pc = 0x24330cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_243310:
    // 0x243310: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x243310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243314:
    // 0x243314: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x243314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243318:
    // 0x243318: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x243318u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_24331c:
    // 0x24331c: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x24331cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_243320:
    // 0x243320: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x243320u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_243324:
    // 0x243324: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x243324u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_243328:
    // 0x243328: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x243328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_24332c:
    // 0x24332c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x24332cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_243330:
    // 0x243330: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x243330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_243334:
    // 0x243334: 0x80420010  lb          $v0, 0x10($v0)
    ctx->pc = 0x243334u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
label_243338:
    // 0x243338: 0x1040016b  beqz        $v0, . + 4 + (0x16B << 2)
label_24333c:
    if (ctx->pc == 0x24333Cu) {
        ctx->pc = 0x243340u;
        goto label_243340;
    }
    ctx->pc = 0x243338u;
    {
        const bool branch_taken_0x243338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x243338) {
            ctx->pc = 0x2438E8u;
            goto label_2438e8;
        }
    }
    ctx->pc = 0x243340u;
label_243340:
    // 0x243340: 0xc623009c  lwc1        $f3, 0x9C($s1)
    ctx->pc = 0x243340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_243344:
    // 0x243344: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x243344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_243348:
    // 0x243348: 0xc604009c  lwc1        $f4, 0x9C($s0)
    ctx->pc = 0x243348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_24334c:
    // 0x24334c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x24334cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_243350:
    // 0x243350: 0xc62200a0  lwc1        $f2, 0xA0($s1)
    ctx->pc = 0x243350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_243354:
    // 0x243354: 0x27a50220  addiu       $a1, $sp, 0x220
    ctx->pc = 0x243354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_243358:
    // 0x243358: 0xc60100a0  lwc1        $f1, 0xA0($s0)
    ctx->pc = 0x243358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24335c:
    // 0x24335c: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x24335cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_243360:
    // 0x243360: 0xc6450004  lwc1        $f5, 0x4($s2)
    ctx->pc = 0x243360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_243364:
    // 0x243364: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x243364u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_243368:
    // 0x243368: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x243368u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24336c:
    // 0x24336c: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x24336cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_243370:
    // 0x243370: 0x460310c2  mul.s       $f3, $f2, $f3
    ctx->pc = 0x243370u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_243374:
    // 0x243374: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x243374u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_243378:
    // 0x243378: 0x46042082  mul.s       $f2, $f4, $f4
    ctx->pc = 0x243378u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
label_24337c:
    // 0x24337c: 0x46020d02  mul.s       $f20, $f1, $f2
    ctx->pc = 0x24337cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_243380:
    // 0x243380: 0x46141818  adda.s      $f3, $f20
    ctx->pc = 0x243380u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[20]);
label_243384:
    // 0x243384: 0x320f809  jalr        $t9
label_243388:
    if (ctx->pc == 0x243388u) {
        ctx->pc = 0x243388u;
            // 0x243388: 0x4605031c  madd.s      $f12, $f0, $f5 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[5]));
        ctx->pc = 0x24338Cu;
        goto label_24338c;
    }
    ctx->pc = 0x243384u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x24338Cu);
        ctx->pc = 0x243388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243384u;
            // 0x243388: 0x4605031c  madd.s      $f12, $f0, $f5 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[5]));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x24338Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x24338Cu; }
            if (ctx->pc != 0x24338Cu) { return; }
        }
        }
    }
    ctx->pc = 0x24338Cu;
label_24338c:
    // 0x24338c: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x24338cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_243390:
    // 0x243390: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x243390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_243394:
    // 0x243394: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x243394u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_243398:
    // 0x243398: 0xc62100a0  lwc1        $f1, 0xA0($s1)
    ctx->pc = 0x243398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24339c:
    // 0x24339c: 0x27a201b0  addiu       $v0, $sp, 0x1B0
    ctx->pc = 0x24339cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_2433a0:
    // 0x2433a0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2433a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_2433a4:
    // 0x2433a4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2433a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2433a8:
    // 0x2433a8: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x2433a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_2433ac:
    // 0x2433ac: 0xe7a001a0  swc1        $f0, 0x1A0($sp)
    ctx->pc = 0x2433acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_2433b0:
    // 0x2433b0: 0xe7a001a4  swc1        $f0, 0x1A4($sp)
    ctx->pc = 0x2433b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
label_2433b4:
    // 0x2433b4: 0xe7a001a8  swc1        $f0, 0x1A8($sp)
    ctx->pc = 0x2433b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
label_2433b8:
    // 0x2433b8: 0xe7a001ac  swc1        $f0, 0x1AC($sp)
    ctx->pc = 0x2433b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 428), bits); }
label_2433bc:
    // 0x2433bc: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x2433bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_2433c0:
    // 0x2433c0: 0xc6280050  lwc1        $f8, 0x50($s1)
    ctx->pc = 0x2433c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_2433c4:
    // 0x2433c4: 0xc6260054  lwc1        $f6, 0x54($s1)
    ctx->pc = 0x2433c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2433c8:
    // 0x2433c8: 0xc6240058  lwc1        $f4, 0x58($s1)
    ctx->pc = 0x2433c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2433cc:
    // 0x2433cc: 0xc4670030  lwc1        $f7, 0x30($v1)
    ctx->pc = 0x2433ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_2433d0:
    // 0x2433d0: 0xc4650034  lwc1        $f5, 0x34($v1)
    ctx->pc = 0x2433d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2433d4:
    // 0x2433d4: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2433d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2433d8:
    // 0x2433d8: 0xc4630038  lwc1        $f3, 0x38($v1)
    ctx->pc = 0x2433d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2433dc:
    // 0x2433dc: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2433dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2433e0:
    // 0x2433e0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2433e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2433e4:
    // 0x2433e4: 0x460741c1  sub.s       $f7, $f8, $f7
    ctx->pc = 0x2433e4u;
    ctx->f[7] = FPU_SUB_S(ctx->f[8], ctx->f[7]);
label_2433e8:
    // 0x2433e8: 0x46053141  sub.s       $f5, $f6, $f5
    ctx->pc = 0x2433e8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
label_2433ec:
    // 0x2433ec: 0x46023882  mul.s       $f2, $f7, $f2
    ctx->pc = 0x2433ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
label_2433f0:
    // 0x2433f0: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x2433f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
label_2433f4:
    // 0x2433f4: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x2433f4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_2433f8:
    // 0x2433f8: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x2433f8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_2433fc:
    // 0x2433fc: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x2433fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_243400:
    // 0x243400: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x243400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_243404:
    // 0x243404: 0xc4620010  lwc1        $f2, 0x10($v1)
    ctx->pc = 0x243404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_243408:
    // 0x243408: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x243408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24340c:
    // 0x24340c: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x24340cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243410:
    // 0x243410: 0x46023882  mul.s       $f2, $f7, $f2
    ctx->pc = 0x243410u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
label_243414:
    // 0x243414: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x243414u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
label_243418:
    // 0x243418: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x243418u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_24341c:
    // 0x24341c: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x24341cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_243420:
    // 0x243420: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x243420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_243424:
    // 0x243424: 0xc4620020  lwc1        $f2, 0x20($v1)
    ctx->pc = 0x243424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_243428:
    // 0x243428: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x243428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24342c:
    // 0x24342c: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x24342cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243430:
    // 0x243430: 0x46023882  mul.s       $f2, $f7, $f2
    ctx->pc = 0x243430u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
label_243434:
    // 0x243434: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x243434u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
label_243438:
    // 0x243438: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x243438u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_24343c:
    // 0x24343c: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x24343cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_243440:
    // 0x243440: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x243440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_243444:
    // 0x243444: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x243444u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_243448:
    // 0x243448: 0xc7a801b0  lwc1        $f8, 0x1B0($sp)
    ctx->pc = 0x243448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_24344c:
    // 0x24344c: 0xc7a001a0  lwc1        $f0, 0x1A0($sp)
    ctx->pc = 0x24344cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243450:
    // 0x243450: 0xc7a701b4  lwc1        $f7, 0x1B4($sp)
    ctx->pc = 0x243450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_243454:
    // 0x243454: 0xc7a101a4  lwc1        $f1, 0x1A4($sp)
    ctx->pc = 0x243454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243458:
    // 0x243458: 0xc7a601b8  lwc1        $f6, 0x1B8($sp)
    ctx->pc = 0x243458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_24345c:
    // 0x24345c: 0xc7a501a8  lwc1        $f5, 0x1A8($sp)
    ctx->pc = 0x24345cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_243460:
    // 0x243460: 0xc7a401bc  lwc1        $f4, 0x1BC($sp)
    ctx->pc = 0x243460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_243464:
    // 0x243464: 0x46004080  add.s       $f2, $f8, $f0
    ctx->pc = 0x243464u;
    ctx->f[2] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
label_243468:
    // 0x243468: 0xe7a20190  swc1        $f2, 0x190($sp)
    ctx->pc = 0x243468u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
label_24346c:
    // 0x24346c: 0x46013880  add.s       $f2, $f7, $f1
    ctx->pc = 0x24346cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[7], ctx->f[1]);
label_243470:
    // 0x243470: 0x46013841  sub.s       $f1, $f7, $f1
    ctx->pc = 0x243470u;
    ctx->f[1] = FPU_SUB_S(ctx->f[7], ctx->f[1]);
label_243474:
    // 0x243474: 0x46004001  sub.s       $f0, $f8, $f0
    ctx->pc = 0x243474u;
    ctx->f[0] = FPU_SUB_S(ctx->f[8], ctx->f[0]);
label_243478:
    // 0x243478: 0xe7a20194  swc1        $f2, 0x194($sp)
    ctx->pc = 0x243478u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 404), bits); }
label_24347c:
    // 0x24347c: 0xe7a10184  swc1        $f1, 0x184($sp)
    ctx->pc = 0x24347cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
label_243480:
    // 0x243480: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x243480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_243484:
    // 0x243484: 0x46053080  add.s       $f2, $f6, $f5
    ctx->pc = 0x243484u;
    ctx->f[2] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
label_243488:
    // 0x243488: 0x46053041  sub.s       $f1, $f6, $f5
    ctx->pc = 0x243488u;
    ctx->f[1] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
label_24348c:
    // 0x24348c: 0xc7a301ac  lwc1        $f3, 0x1AC($sp)
    ctx->pc = 0x24348cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_243490:
    // 0x243490: 0xe7a20198  swc1        $f2, 0x198($sp)
    ctx->pc = 0x243490u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
label_243494:
    // 0x243494: 0xe7a10188  swc1        $f1, 0x188($sp)
    ctx->pc = 0x243494u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_243498:
    // 0x243498: 0xc7a901e0  lwc1        $f9, 0x1E0($sp)
    ctx->pc = 0x243498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_24349c:
    // 0x24349c: 0xc7a00180  lwc1        $f0, 0x180($sp)
    ctx->pc = 0x24349cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2434a0:
    // 0x2434a0: 0x46032080  add.s       $f2, $f4, $f3
    ctx->pc = 0x2434a0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
label_2434a4:
    // 0x2434a4: 0x46032041  sub.s       $f1, $f4, $f3
    ctx->pc = 0x2434a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_2434a8:
    // 0x2434a8: 0x46004836  c.le.s      $f9, $f0
    ctx->pc = 0x2434a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[9], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2434ac:
    // 0x2434ac: 0xe7a2019c  swc1        $f2, 0x19C($sp)
    ctx->pc = 0x2434acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 412), bits); }
label_2434b0:
    // 0x2434b0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_2434b4:
    if (ctx->pc == 0x2434B4u) {
        ctx->pc = 0x2434B4u;
            // 0x2434b4: 0xe7a1018c  swc1        $f1, 0x18C($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
        ctx->pc = 0x2434B8u;
        goto label_2434b8;
    }
    ctx->pc = 0x2434B0u;
    {
        const bool branch_taken_0x2434b0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2434B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2434B0u;
            // 0x2434b4: 0xe7a1018c  swc1        $f1, 0x18C($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2434b0) {
            ctx->pc = 0x2434C0u;
            goto label_2434c0;
        }
    }
    ctx->pc = 0x2434B8u;
label_2434b8:
    // 0x2434b8: 0x10000003  b           . + 4 + (0x3 << 2)
label_2434bc:
    if (ctx->pc == 0x2434BCu) {
        ctx->pc = 0x2434C0u;
        goto label_2434c0;
    }
    ctx->pc = 0x2434B8u;
    {
        const bool branch_taken_0x2434b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2434b8) {
            ctx->pc = 0x2434C8u;
            goto label_2434c8;
        }
    }
    ctx->pc = 0x2434C0u;
label_2434c0:
    // 0x2434c0: 0x46000246  mov.s       $f9, $f0
    ctx->pc = 0x2434c0u;
    ctx->f[9] = FPU_MOV_S(ctx->f[0]);
label_2434c4:
    // 0x2434c4: 0x0  nop
    ctx->pc = 0x2434c4u;
    // NOP
label_2434c8:
    // 0x2434c8: 0xc7a101e4  lwc1        $f1, 0x1E4($sp)
    ctx->pc = 0x2434c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2434cc:
    // 0x2434cc: 0xc7a00184  lwc1        $f0, 0x184($sp)
    ctx->pc = 0x2434ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2434d0:
    // 0x2434d0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2434d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2434d4:
    // 0x2434d4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_2434d8:
    if (ctx->pc == 0x2434D8u) {
        ctx->pc = 0x2434D8u;
            // 0x2434d8: 0xe7a901e0  swc1        $f9, 0x1E0($sp) (Delay Slot)
        { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
        ctx->pc = 0x2434DCu;
        goto label_2434dc;
    }
    ctx->pc = 0x2434D4u;
    {
        const bool branch_taken_0x2434d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2434D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2434D4u;
            // 0x2434d8: 0xe7a901e0  swc1        $f9, 0x1E0($sp) (Delay Slot)
        { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2434d4) {
            ctx->pc = 0x2434E8u;
            goto label_2434e8;
        }
    }
    ctx->pc = 0x2434DCu;
label_2434dc:
    // 0x2434dc: 0x10000004  b           . + 4 + (0x4 << 2)
label_2434e0:
    if (ctx->pc == 0x2434E0u) {
        ctx->pc = 0x2434E4u;
        goto label_2434e4;
    }
    ctx->pc = 0x2434DCu;
    {
        const bool branch_taken_0x2434dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2434dc) {
            ctx->pc = 0x2434F0u;
            goto label_2434f0;
        }
    }
    ctx->pc = 0x2434E4u;
label_2434e4:
    // 0x2434e4: 0x0  nop
    ctx->pc = 0x2434e4u;
    // NOP
label_2434e8:
    // 0x2434e8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2434e8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2434ec:
    // 0x2434ec: 0x0  nop
    ctx->pc = 0x2434ecu;
    // NOP
label_2434f0:
    // 0x2434f0: 0xe7a101e4  swc1        $f1, 0x1E4($sp)
    ctx->pc = 0x2434f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 484), bits); }
label_2434f4:
    // 0x2434f4: 0xc7a101e8  lwc1        $f1, 0x1E8($sp)
    ctx->pc = 0x2434f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2434f8:
    // 0x2434f8: 0xc7a00188  lwc1        $f0, 0x188($sp)
    ctx->pc = 0x2434f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2434fc:
    // 0x2434fc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2434fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243500:
    // 0x243500: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_243504:
    if (ctx->pc == 0x243504u) {
        ctx->pc = 0x243508u;
        goto label_243508;
    }
    ctx->pc = 0x243500u;
    {
        const bool branch_taken_0x243500 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x243500) {
            ctx->pc = 0x243510u;
            goto label_243510;
        }
    }
    ctx->pc = 0x243508u;
label_243508:
    // 0x243508: 0x10000003  b           . + 4 + (0x3 << 2)
label_24350c:
    if (ctx->pc == 0x24350Cu) {
        ctx->pc = 0x243510u;
        goto label_243510;
    }
    ctx->pc = 0x243508u;
    {
        const bool branch_taken_0x243508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243508) {
            ctx->pc = 0x243518u;
            goto label_243518;
        }
    }
    ctx->pc = 0x243510u;
label_243510:
    // 0x243510: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x243510u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_243514:
    // 0x243514: 0x0  nop
    ctx->pc = 0x243514u;
    // NOP
label_243518:
    // 0x243518: 0xe7a101e8  swc1        $f1, 0x1E8($sp)
    ctx->pc = 0x243518u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
label_24351c:
    // 0x24351c: 0xc7a101ec  lwc1        $f1, 0x1EC($sp)
    ctx->pc = 0x24351cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243520:
    // 0x243520: 0xc7a0018c  lwc1        $f0, 0x18C($sp)
    ctx->pc = 0x243520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243524:
    // 0x243524: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x243524u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243528:
    // 0x243528: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_24352c:
    if (ctx->pc == 0x24352Cu) {
        ctx->pc = 0x243530u;
        goto label_243530;
    }
    ctx->pc = 0x243528u;
    {
        const bool branch_taken_0x243528 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x243528) {
            ctx->pc = 0x243538u;
            goto label_243538;
        }
    }
    ctx->pc = 0x243530u;
label_243530:
    // 0x243530: 0x10000003  b           . + 4 + (0x3 << 2)
label_243534:
    if (ctx->pc == 0x243534u) {
        ctx->pc = 0x243538u;
        goto label_243538;
    }
    ctx->pc = 0x243530u;
    {
        const bool branch_taken_0x243530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243530) {
            ctx->pc = 0x243540u;
            goto label_243540;
        }
    }
    ctx->pc = 0x243538u;
label_243538:
    // 0x243538: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x243538u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_24353c:
    // 0x24353c: 0x0  nop
    ctx->pc = 0x24353cu;
    // NOP
label_243540:
    // 0x243540: 0xe7a101ec  swc1        $f1, 0x1EC($sp)
    ctx->pc = 0x243540u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 492), bits); }
label_243544:
    // 0x243544: 0xc7a101f0  lwc1        $f1, 0x1F0($sp)
    ctx->pc = 0x243544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243548:
    // 0x243548: 0xc7a00190  lwc1        $f0, 0x190($sp)
    ctx->pc = 0x243548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24354c:
    // 0x24354c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24354cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243550:
    // 0x243550: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_243554:
    if (ctx->pc == 0x243554u) {
        ctx->pc = 0x243558u;
        goto label_243558;
    }
    ctx->pc = 0x243550u;
    {
        const bool branch_taken_0x243550 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x243550) {
            ctx->pc = 0x243560u;
            goto label_243560;
        }
    }
    ctx->pc = 0x243558u;
label_243558:
    // 0x243558: 0x10000003  b           . + 4 + (0x3 << 2)
label_24355c:
    if (ctx->pc == 0x24355Cu) {
        ctx->pc = 0x243560u;
        goto label_243560;
    }
    ctx->pc = 0x243558u;
    {
        const bool branch_taken_0x243558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243558) {
            ctx->pc = 0x243568u;
            goto label_243568;
        }
    }
    ctx->pc = 0x243560u;
label_243560:
    // 0x243560: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x243560u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_243564:
    // 0x243564: 0x0  nop
    ctx->pc = 0x243564u;
    // NOP
label_243568:
    // 0x243568: 0xe7a101f0  swc1        $f1, 0x1F0($sp)
    ctx->pc = 0x243568u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
label_24356c:
    // 0x24356c: 0xc7a101f4  lwc1        $f1, 0x1F4($sp)
    ctx->pc = 0x24356cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243570:
    // 0x243570: 0xc7a00194  lwc1        $f0, 0x194($sp)
    ctx->pc = 0x243570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243574:
    // 0x243574: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x243574u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243578:
    // 0x243578: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_24357c:
    if (ctx->pc == 0x24357Cu) {
        ctx->pc = 0x243580u;
        goto label_243580;
    }
    ctx->pc = 0x243578u;
    {
        const bool branch_taken_0x243578 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x243578) {
            ctx->pc = 0x243588u;
            goto label_243588;
        }
    }
    ctx->pc = 0x243580u;
label_243580:
    // 0x243580: 0x10000003  b           . + 4 + (0x3 << 2)
label_243584:
    if (ctx->pc == 0x243584u) {
        ctx->pc = 0x243588u;
        goto label_243588;
    }
    ctx->pc = 0x243580u;
    {
        const bool branch_taken_0x243580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243580) {
            ctx->pc = 0x243590u;
            goto label_243590;
        }
    }
    ctx->pc = 0x243588u;
label_243588:
    // 0x243588: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x243588u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_24358c:
    // 0x24358c: 0x0  nop
    ctx->pc = 0x24358cu;
    // NOP
label_243590:
    // 0x243590: 0xe7a101f4  swc1        $f1, 0x1F4($sp)
    ctx->pc = 0x243590u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 500), bits); }
label_243594:
    // 0x243594: 0xc7a101f8  lwc1        $f1, 0x1F8($sp)
    ctx->pc = 0x243594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243598:
    // 0x243598: 0xc7a00198  lwc1        $f0, 0x198($sp)
    ctx->pc = 0x243598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24359c:
    // 0x24359c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24359cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2435a0:
    // 0x2435a0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2435a4:
    if (ctx->pc == 0x2435A4u) {
        ctx->pc = 0x2435A8u;
        goto label_2435a8;
    }
    ctx->pc = 0x2435A0u;
    {
        const bool branch_taken_0x2435a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2435a0) {
            ctx->pc = 0x2435B0u;
            goto label_2435b0;
        }
    }
    ctx->pc = 0x2435A8u;
label_2435a8:
    // 0x2435a8: 0x10000003  b           . + 4 + (0x3 << 2)
label_2435ac:
    if (ctx->pc == 0x2435ACu) {
        ctx->pc = 0x2435B0u;
        goto label_2435b0;
    }
    ctx->pc = 0x2435A8u;
    {
        const bool branch_taken_0x2435a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2435a8) {
            ctx->pc = 0x2435B8u;
            goto label_2435b8;
        }
    }
    ctx->pc = 0x2435B0u;
label_2435b0:
    // 0x2435b0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2435b0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2435b4:
    // 0x2435b4: 0x0  nop
    ctx->pc = 0x2435b4u;
    // NOP
label_2435b8:
    // 0x2435b8: 0xe7a101f8  swc1        $f1, 0x1F8($sp)
    ctx->pc = 0x2435b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
label_2435bc:
    // 0x2435bc: 0xc7a101fc  lwc1        $f1, 0x1FC($sp)
    ctx->pc = 0x2435bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2435c0:
    // 0x2435c0: 0xc7a0019c  lwc1        $f0, 0x19C($sp)
    ctx->pc = 0x2435c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2435c4:
    // 0x2435c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2435c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2435c8:
    // 0x2435c8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2435cc:
    if (ctx->pc == 0x2435CCu) {
        ctx->pc = 0x2435D0u;
        goto label_2435d0;
    }
    ctx->pc = 0x2435C8u;
    {
        const bool branch_taken_0x2435c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2435c8) {
            ctx->pc = 0x2435D8u;
            goto label_2435d8;
        }
    }
    ctx->pc = 0x2435D0u;
label_2435d0:
    // 0x2435d0: 0x10000003  b           . + 4 + (0x3 << 2)
label_2435d4:
    if (ctx->pc == 0x2435D4u) {
        ctx->pc = 0x2435D8u;
        goto label_2435d8;
    }
    ctx->pc = 0x2435D0u;
    {
        const bool branch_taken_0x2435d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2435d0) {
            ctx->pc = 0x2435E0u;
            goto label_2435e0;
        }
    }
    ctx->pc = 0x2435D8u;
label_2435d8:
    // 0x2435d8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2435d8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2435dc:
    // 0x2435dc: 0x0  nop
    ctx->pc = 0x2435dcu;
    // NOP
label_2435e0:
    // 0x2435e0: 0xc7a601f0  lwc1        $f6, 0x1F0($sp)
    ctx->pc = 0x2435e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2435e4:
    // 0x2435e4: 0xc7a001e0  lwc1        $f0, 0x1E0($sp)
    ctx->pc = 0x2435e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2435e8:
    // 0x2435e8: 0xe7a101fc  swc1        $f1, 0x1FC($sp)
    ctx->pc = 0x2435e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 508), bits); }
label_2435ec:
    // 0x2435ec: 0xc7a501f4  lwc1        $f5, 0x1F4($sp)
    ctx->pc = 0x2435ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2435f0:
    // 0x2435f0: 0xc7a401e4  lwc1        $f4, 0x1E4($sp)
    ctx->pc = 0x2435f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2435f4:
    // 0x2435f4: 0xc7a301f8  lwc1        $f3, 0x1F8($sp)
    ctx->pc = 0x2435f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2435f8:
    // 0x2435f8: 0xc7a201e8  lwc1        $f2, 0x1E8($sp)
    ctx->pc = 0x2435f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2435fc:
    // 0x2435fc: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x2435fcu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
label_243600:
    // 0x243600: 0xc7a101fc  lwc1        $f1, 0x1FC($sp)
    ctx->pc = 0x243600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243604:
    // 0x243604: 0xc7a001ec  lwc1        $f0, 0x1EC($sp)
    ctx->pc = 0x243604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243608:
    // 0x243608: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x243608u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
label_24360c:
    // 0x24360c: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x24360cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_243610:
    // 0x243610: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x243610u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_243614:
    // 0x243614: 0xe7a601c0  swc1        $f6, 0x1C0($sp)
    ctx->pc = 0x243614u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
label_243618:
    // 0x243618: 0xe7a401c4  swc1        $f4, 0x1C4($sp)
    ctx->pc = 0x243618u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
label_24361c:
    // 0x24361c: 0xe7a201c8  swc1        $f2, 0x1C8($sp)
    ctx->pc = 0x24361cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
label_243620:
    // 0x243620: 0xe7a001cc  swc1        $f0, 0x1CC($sp)
    ctx->pc = 0x243620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 460), bits); }
label_243624:
    // 0x243624: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x243624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243628:
    // 0x243628: 0x44805000  mtc1        $zero, $f10
    ctx->pc = 0x243628u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
label_24362c:
    // 0x24362c: 0x0  nop
    ctx->pc = 0x24362cu;
    // NOP
label_243630:
    // 0x243630: 0x460a0036  c.le.s      $f0, $f10
    ctx->pc = 0x243630u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243634:
    // 0x243634: 0x45010038  bc1t        . + 4 + (0x38 << 2)
label_243638:
    if (ctx->pc == 0x243638u) {
        ctx->pc = 0x243638u;
            // 0x243638: 0x26020090  addiu       $v0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->pc = 0x24363Cu;
        goto label_24363c;
    }
    ctx->pc = 0x243634u;
    {
        const bool branch_taken_0x243634 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x243638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243634u;
            // 0x243638: 0x26020090  addiu       $v0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243634) {
            ctx->pc = 0x243718u;
            goto label_243718;
        }
    }
    ctx->pc = 0x24363Cu;
label_24363c:
    // 0x24363c: 0xc7a101b0  lwc1        $f1, 0x1B0($sp)
    ctx->pc = 0x24363cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243640:
    // 0x243640: 0xc6000080  lwc1        $f0, 0x80($s0)
    ctx->pc = 0x243640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243644:
    // 0x243644: 0xc7a601b4  lwc1        $f6, 0x1B4($sp)
    ctx->pc = 0x243644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_243648:
    // 0x243648: 0xc7a401b8  lwc1        $f4, 0x1B8($sp)
    ctx->pc = 0x243648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_24364c:
    // 0x24364c: 0xc7a201bc  lwc1        $f2, 0x1BC($sp)
    ctx->pc = 0x24364cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_243650:
    // 0x243650: 0xc7a701d0  lwc1        $f7, 0x1D0($sp)
    ctx->pc = 0x243650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_243654:
    // 0x243654: 0xc7a501d4  lwc1        $f5, 0x1D4($sp)
    ctx->pc = 0x243654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_243658:
    // 0x243658: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x243658u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_24365c:
    // 0x24365c: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x24365cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_243660:
    // 0x243660: 0xc6080084  lwc1        $f8, 0x84($s0)
    ctx->pc = 0x243660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_243664:
    // 0x243664: 0xc7a00170  lwc1        $f0, 0x170($sp)
    ctx->pc = 0x243664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243668:
    // 0x243668: 0xc7a301d8  lwc1        $f3, 0x1D8($sp)
    ctx->pc = 0x243668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_24366c:
    // 0x24366c: 0xc7a101dc  lwc1        $f1, 0x1DC($sp)
    ctx->pc = 0x24366cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243670:
    // 0x243670: 0x46083181  sub.s       $f6, $f6, $f8
    ctx->pc = 0x243670u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[8]);
label_243674:
    // 0x243674: 0xe7a60174  swc1        $f6, 0x174($sp)
    ctx->pc = 0x243674u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
label_243678:
    // 0x243678: 0xc6060088  lwc1        $f6, 0x88($s0)
    ctx->pc = 0x243678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_24367c:
    // 0x24367c: 0xc7a90174  lwc1        $f9, 0x174($sp)
    ctx->pc = 0x24367cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_243680:
    // 0x243680: 0x46062101  sub.s       $f4, $f4, $f6
    ctx->pc = 0x243680u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[6]);
label_243684:
    // 0x243684: 0xe7a40178  swc1        $f4, 0x178($sp)
    ctx->pc = 0x243684u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_243688:
    // 0x243688: 0xc604008c  lwc1        $f4, 0x8C($s0)
    ctx->pc = 0x243688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_24368c:
    // 0x24368c: 0xc7a60178  lwc1        $f6, 0x178($sp)
    ctx->pc = 0x24368cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_243690:
    // 0x243690: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x243690u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_243694:
    // 0x243694: 0xe7a2017c  swc1        $f2, 0x17C($sp)
    ctx->pc = 0x243694u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
label_243698:
    // 0x243698: 0xc4480008  lwc1        $f8, 0x8($v0)
    ctx->pc = 0x243698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_24369c:
    // 0x24369c: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x24369cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2436a0:
    // 0x2436a0: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x2436a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2436a4:
    // 0x2436a4: 0x4608481a  mula.s      $f9, $f8
    ctx->pc = 0x2436a4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[9], ctx->f[8]);
label_2436a8:
    // 0x2436a8: 0x460432dd  msub.s      $f11, $f6, $f4
    ctx->pc = 0x2436a8u;
    ctx->f[11] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[4]));
label_2436ac:
    // 0x2436ac: 0x4602301a  mula.s      $f6, $f2
    ctx->pc = 0x2436acu;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_2436b0:
    // 0x2436b0: 0x4608019d  msub.s      $f6, $f0, $f8
    ctx->pc = 0x2436b0u;
    ctx->f[6] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[8]));
label_2436b4:
    // 0x2436b4: 0x4604001a  mula.s      $f0, $f4
    ctx->pc = 0x2436b4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_2436b8:
    // 0x2436b8: 0x4602481d  msub.s      $f0, $f9, $f2
    ctx->pc = 0x2436b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[9], ctx->f[2]));
label_2436bc:
    // 0x2436bc: 0xe7a60164  swc1        $f6, 0x164($sp)
    ctx->pc = 0x2436bcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
label_2436c0:
    // 0x2436c0: 0xe7ab0160  swc1        $f11, 0x160($sp)
    ctx->pc = 0x2436c0u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_2436c4:
    // 0x2436c4: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x2436c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_2436c8:
    // 0x2436c8: 0xe7aa016c  swc1        $f10, 0x16C($sp)
    ctx->pc = 0x2436c8u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
label_2436cc:
    // 0x2436cc: 0xc609005c  lwc1        $f9, 0x5C($s0)
    ctx->pc = 0x2436ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_2436d0:
    // 0x2436d0: 0xc6480028  lwc1        $f8, 0x28($s2)
    ctx->pc = 0x2436d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_2436d4:
    // 0x2436d4: 0xc7a60160  lwc1        $f6, 0x160($sp)
    ctx->pc = 0x2436d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2436d8:
    // 0x2436d8: 0xc7a40164  lwc1        $f4, 0x164($sp)
    ctx->pc = 0x2436d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2436dc:
    // 0x2436dc: 0xc7a20168  lwc1        $f2, 0x168($sp)
    ctx->pc = 0x2436dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2436e0:
    // 0x2436e0: 0xc7a0016c  lwc1        $f0, 0x16C($sp)
    ctx->pc = 0x2436e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2436e4:
    // 0x2436e4: 0x46094202  mul.s       $f8, $f8, $f9
    ctx->pc = 0x2436e4u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[9]);
label_2436e8:
    // 0x2436e8: 0x46064182  mul.s       $f6, $f8, $f6
    ctx->pc = 0x2436e8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[8], ctx->f[6]);
label_2436ec:
    // 0x2436ec: 0x46044102  mul.s       $f4, $f8, $f4
    ctx->pc = 0x2436ecu;
    ctx->f[4] = FPU_MUL_S(ctx->f[8], ctx->f[4]);
label_2436f0:
    // 0x2436f0: 0x46024082  mul.s       $f2, $f8, $f2
    ctx->pc = 0x2436f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
label_2436f4:
    // 0x2436f4: 0x46004002  mul.s       $f0, $f8, $f0
    ctx->pc = 0x2436f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
label_2436f8:
    // 0x2436f8: 0x46063980  add.s       $f6, $f7, $f6
    ctx->pc = 0x2436f8u;
    ctx->f[6] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
label_2436fc:
    // 0x2436fc: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x2436fcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
label_243700:
    // 0x243700: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x243700u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_243704:
    // 0x243704: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x243704u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_243708:
    // 0x243708: 0xe7a601d0  swc1        $f6, 0x1D0($sp)
    ctx->pc = 0x243708u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
label_24370c:
    // 0x24370c: 0xe7a401d4  swc1        $f4, 0x1D4($sp)
    ctx->pc = 0x24370cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 468), bits); }
label_243710:
    // 0x243710: 0xe7a201d8  swc1        $f2, 0x1D8($sp)
    ctx->pc = 0x243710u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
label_243714:
    // 0x243714: 0xe7a001dc  swc1        $f0, 0x1DC($sp)
    ctx->pc = 0x243714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 476), bits); }
label_243718:
    // 0x243718: 0xafa0015c  sw          $zero, 0x15C($sp)
    ctx->pc = 0x243718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 0));
label_24371c:
    // 0x24371c: 0xc7a001d0  lwc1        $f0, 0x1D0($sp)
    ctx->pc = 0x24371cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243720:
    // 0x243720: 0xafa00158  sw          $zero, 0x158($sp)
    ctx->pc = 0x243720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 0));
label_243724:
    // 0x243724: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x243724u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_243728:
    // 0x243728: 0xafa00154  sw          $zero, 0x154($sp)
    ctx->pc = 0x243728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 0));
label_24372c:
    // 0x24372c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24372cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243730:
    // 0x243730: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_243734:
    if (ctx->pc == 0x243734u) {
        ctx->pc = 0x243734u;
            // 0x243734: 0xafa00150  sw          $zero, 0x150($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
        ctx->pc = 0x243738u;
        goto label_243738;
    }
    ctx->pc = 0x243730u;
    {
        const bool branch_taken_0x243730 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x243734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243730u;
            // 0x243734: 0xafa00150  sw          $zero, 0x150($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243730) {
            ctx->pc = 0x243740u;
            goto label_243740;
        }
    }
    ctx->pc = 0x243738u;
label_243738:
    // 0x243738: 0x10000003  b           . + 4 + (0x3 << 2)
label_24373c:
    if (ctx->pc == 0x24373Cu) {
        ctx->pc = 0x243740u;
        goto label_243740;
    }
    ctx->pc = 0x243738u;
    {
        const bool branch_taken_0x243738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243738) {
            ctx->pc = 0x243748u;
            goto label_243748;
        }
    }
    ctx->pc = 0x243740u;
label_243740:
    // 0x243740: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x243740u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_243744:
    // 0x243744: 0x0  nop
    ctx->pc = 0x243744u;
    // NOP
label_243748:
    // 0x243748: 0xe7a10140  swc1        $f1, 0x140($sp)
    ctx->pc = 0x243748u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_24374c:
    // 0x24374c: 0xc7a10154  lwc1        $f1, 0x154($sp)
    ctx->pc = 0x24374cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243750:
    // 0x243750: 0xc7a001d4  lwc1        $f0, 0x1D4($sp)
    ctx->pc = 0x243750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243754:
    // 0x243754: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x243754u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243758:
    // 0x243758: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_24375c:
    if (ctx->pc == 0x24375Cu) {
        ctx->pc = 0x243760u;
        goto label_243760;
    }
    ctx->pc = 0x243758u;
    {
        const bool branch_taken_0x243758 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x243758) {
            ctx->pc = 0x243768u;
            goto label_243768;
        }
    }
    ctx->pc = 0x243760u;
label_243760:
    // 0x243760: 0x10000003  b           . + 4 + (0x3 << 2)
label_243764:
    if (ctx->pc == 0x243764u) {
        ctx->pc = 0x243768u;
        goto label_243768;
    }
    ctx->pc = 0x243760u;
    {
        const bool branch_taken_0x243760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243760) {
            ctx->pc = 0x243770u;
            goto label_243770;
        }
    }
    ctx->pc = 0x243768u;
label_243768:
    // 0x243768: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x243768u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_24376c:
    // 0x24376c: 0x0  nop
    ctx->pc = 0x24376cu;
    // NOP
label_243770:
    // 0x243770: 0xe7a10144  swc1        $f1, 0x144($sp)
    ctx->pc = 0x243770u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_243774:
    // 0x243774: 0xc7a10158  lwc1        $f1, 0x158($sp)
    ctx->pc = 0x243774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243778:
    // 0x243778: 0xc7a001d8  lwc1        $f0, 0x1D8($sp)
    ctx->pc = 0x243778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24377c:
    // 0x24377c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x24377cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243780:
    // 0x243780: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_243784:
    if (ctx->pc == 0x243784u) {
        ctx->pc = 0x243788u;
        goto label_243788;
    }
    ctx->pc = 0x243780u;
    {
        const bool branch_taken_0x243780 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x243780) {
            ctx->pc = 0x243790u;
            goto label_243790;
        }
    }
    ctx->pc = 0x243788u;
label_243788:
    // 0x243788: 0x10000003  b           . + 4 + (0x3 << 2)
label_24378c:
    if (ctx->pc == 0x24378Cu) {
        ctx->pc = 0x243790u;
        goto label_243790;
    }
    ctx->pc = 0x243788u;
    {
        const bool branch_taken_0x243788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243788) {
            ctx->pc = 0x243798u;
            goto label_243798;
        }
    }
    ctx->pc = 0x243790u;
label_243790:
    // 0x243790: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x243790u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_243794:
    // 0x243794: 0x0  nop
    ctx->pc = 0x243794u;
    // NOP
label_243798:
    // 0x243798: 0xe7a10148  swc1        $f1, 0x148($sp)
    ctx->pc = 0x243798u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_24379c:
    // 0x24379c: 0xc7a1015c  lwc1        $f1, 0x15C($sp)
    ctx->pc = 0x24379cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2437a0:
    // 0x2437a0: 0xc7a001dc  lwc1        $f0, 0x1DC($sp)
    ctx->pc = 0x2437a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2437a4:
    // 0x2437a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2437a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2437a8:
    // 0x2437a8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2437ac:
    if (ctx->pc == 0x2437ACu) {
        ctx->pc = 0x2437B0u;
        goto label_2437b0;
    }
    ctx->pc = 0x2437A8u;
    {
        const bool branch_taken_0x2437a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2437a8) {
            ctx->pc = 0x2437B8u;
            goto label_2437b8;
        }
    }
    ctx->pc = 0x2437B0u;
label_2437b0:
    // 0x2437b0: 0x10000003  b           . + 4 + (0x3 << 2)
label_2437b4:
    if (ctx->pc == 0x2437B4u) {
        ctx->pc = 0x2437B8u;
        goto label_2437b8;
    }
    ctx->pc = 0x2437B0u;
    {
        const bool branch_taken_0x2437b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2437b0) {
            ctx->pc = 0x2437C0u;
            goto label_2437c0;
        }
    }
    ctx->pc = 0x2437B8u;
label_2437b8:
    // 0x2437b8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2437b8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2437bc:
    // 0x2437bc: 0x0  nop
    ctx->pc = 0x2437bcu;
    // NOP
label_2437c0:
    // 0x2437c0: 0xe7a1014c  swc1        $f1, 0x14C($sp)
    ctx->pc = 0x2437c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_2437c4:
    // 0x2437c4: 0xc7a10150  lwc1        $f1, 0x150($sp)
    ctx->pc = 0x2437c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2437c8:
    // 0x2437c8: 0xc7a001d0  lwc1        $f0, 0x1D0($sp)
    ctx->pc = 0x2437c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2437cc:
    // 0x2437cc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2437ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2437d0:
    // 0x2437d0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_2437d4:
    if (ctx->pc == 0x2437D4u) {
        ctx->pc = 0x2437D8u;
        goto label_2437d8;
    }
    ctx->pc = 0x2437D0u;
    {
        const bool branch_taken_0x2437d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2437d0) {
            ctx->pc = 0x2437E0u;
            goto label_2437e0;
        }
    }
    ctx->pc = 0x2437D8u;
label_2437d8:
    // 0x2437d8: 0x10000003  b           . + 4 + (0x3 << 2)
label_2437dc:
    if (ctx->pc == 0x2437DCu) {
        ctx->pc = 0x2437E0u;
        goto label_2437e0;
    }
    ctx->pc = 0x2437D8u;
    {
        const bool branch_taken_0x2437d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2437d8) {
            ctx->pc = 0x2437E8u;
            goto label_2437e8;
        }
    }
    ctx->pc = 0x2437E0u;
label_2437e0:
    // 0x2437e0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x2437e0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_2437e4:
    // 0x2437e4: 0x0  nop
    ctx->pc = 0x2437e4u;
    // NOP
label_2437e8:
    // 0x2437e8: 0xe7a10130  swc1        $f1, 0x130($sp)
    ctx->pc = 0x2437e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_2437ec:
    // 0x2437ec: 0xc7a10154  lwc1        $f1, 0x154($sp)
    ctx->pc = 0x2437ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2437f0:
    // 0x2437f0: 0xc7a001d4  lwc1        $f0, 0x1D4($sp)
    ctx->pc = 0x2437f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2437f4:
    // 0x2437f4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2437f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2437f8:
    // 0x2437f8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_2437fc:
    if (ctx->pc == 0x2437FCu) {
        ctx->pc = 0x243800u;
        goto label_243800;
    }
    ctx->pc = 0x2437F8u;
    {
        const bool branch_taken_0x2437f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2437f8) {
            ctx->pc = 0x243808u;
            goto label_243808;
        }
    }
    ctx->pc = 0x243800u;
label_243800:
    // 0x243800: 0x10000003  b           . + 4 + (0x3 << 2)
label_243804:
    if (ctx->pc == 0x243804u) {
        ctx->pc = 0x243808u;
        goto label_243808;
    }
    ctx->pc = 0x243800u;
    {
        const bool branch_taken_0x243800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243800) {
            ctx->pc = 0x243810u;
            goto label_243810;
        }
    }
    ctx->pc = 0x243808u;
label_243808:
    // 0x243808: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x243808u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_24380c:
    // 0x24380c: 0x0  nop
    ctx->pc = 0x24380cu;
    // NOP
label_243810:
    // 0x243810: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x243810u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_243814:
    // 0x243814: 0xc7a10158  lwc1        $f1, 0x158($sp)
    ctx->pc = 0x243814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243818:
    // 0x243818: 0xc7a001d8  lwc1        $f0, 0x1D8($sp)
    ctx->pc = 0x243818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24381c:
    // 0x24381c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x24381cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243820:
    // 0x243820: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_243824:
    if (ctx->pc == 0x243824u) {
        ctx->pc = 0x243828u;
        goto label_243828;
    }
    ctx->pc = 0x243820u;
    {
        const bool branch_taken_0x243820 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x243820) {
            ctx->pc = 0x243830u;
            goto label_243830;
        }
    }
    ctx->pc = 0x243828u;
label_243828:
    // 0x243828: 0x10000003  b           . + 4 + (0x3 << 2)
label_24382c:
    if (ctx->pc == 0x24382Cu) {
        ctx->pc = 0x243830u;
        goto label_243830;
    }
    ctx->pc = 0x243828u;
    {
        const bool branch_taken_0x243828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243828) {
            ctx->pc = 0x243838u;
            goto label_243838;
        }
    }
    ctx->pc = 0x243830u;
label_243830:
    // 0x243830: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x243830u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_243834:
    // 0x243834: 0x0  nop
    ctx->pc = 0x243834u;
    // NOP
label_243838:
    // 0x243838: 0xe7a10138  swc1        $f1, 0x138($sp)
    ctx->pc = 0x243838u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_24383c:
    // 0x24383c: 0xc7a1015c  lwc1        $f1, 0x15C($sp)
    ctx->pc = 0x24383cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243840:
    // 0x243840: 0xc7a001dc  lwc1        $f0, 0x1DC($sp)
    ctx->pc = 0x243840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243844:
    // 0x243844: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x243844u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243848:
    // 0x243848: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_24384c:
    if (ctx->pc == 0x24384Cu) {
        ctx->pc = 0x243850u;
        goto label_243850;
    }
    ctx->pc = 0x243848u;
    {
        const bool branch_taken_0x243848 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x243848) {
            ctx->pc = 0x243858u;
            goto label_243858;
        }
    }
    ctx->pc = 0x243850u;
label_243850:
    // 0x243850: 0x10000003  b           . + 4 + (0x3 << 2)
label_243854:
    if (ctx->pc == 0x243854u) {
        ctx->pc = 0x243858u;
        goto label_243858;
    }
    ctx->pc = 0x243850u;
    {
        const bool branch_taken_0x243850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243850) {
            ctx->pc = 0x243860u;
            goto label_243860;
        }
    }
    ctx->pc = 0x243858u;
label_243858:
    // 0x243858: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x243858u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_24385c:
    // 0x24385c: 0x0  nop
    ctx->pc = 0x24385cu;
    // NOP
label_243860:
    // 0x243860: 0xe7a1013c  swc1        $f1, 0x13C($sp)
    ctx->pc = 0x243860u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_243864:
    // 0x243864: 0xc7a501e0  lwc1        $f5, 0x1E0($sp)
    ctx->pc = 0x243864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_243868:
    // 0x243868: 0xc7a40140  lwc1        $f4, 0x140($sp)
    ctx->pc = 0x243868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_24386c:
    // 0x24386c: 0xc7a301e4  lwc1        $f3, 0x1E4($sp)
    ctx->pc = 0x24386cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_243870:
    // 0x243870: 0xc7a20144  lwc1        $f2, 0x144($sp)
    ctx->pc = 0x243870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_243874:
    // 0x243874: 0xc7a101e8  lwc1        $f1, 0x1E8($sp)
    ctx->pc = 0x243874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243878:
    // 0x243878: 0xc7a00148  lwc1        $f0, 0x148($sp)
    ctx->pc = 0x243878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24387c:
    // 0x24387c: 0xc7a901ec  lwc1        $f9, 0x1EC($sp)
    ctx->pc = 0x24387cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_243880:
    // 0x243880: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x243880u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
label_243884:
    // 0x243884: 0x46021ac0  add.s       $f11, $f3, $f2
    ctx->pc = 0x243884u;
    ctx->f[11] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_243888:
    // 0x243888: 0x46000a80  add.s       $f10, $f1, $f0
    ctx->pc = 0x243888u;
    ctx->f[10] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_24388c:
    // 0x24388c: 0xe7a401e0  swc1        $f4, 0x1E0($sp)
    ctx->pc = 0x24388cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
label_243890:
    // 0x243890: 0xc7a8014c  lwc1        $f8, 0x14C($sp)
    ctx->pc = 0x243890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_243894:
    // 0x243894: 0xc7a701f0  lwc1        $f7, 0x1F0($sp)
    ctx->pc = 0x243894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_243898:
    // 0x243898: 0xc7a60130  lwc1        $f6, 0x130($sp)
    ctx->pc = 0x243898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_24389c:
    // 0x24389c: 0xc7a501f4  lwc1        $f5, 0x1F4($sp)
    ctx->pc = 0x24389cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2438a0:
    // 0x2438a0: 0xc7a40134  lwc1        $f4, 0x134($sp)
    ctx->pc = 0x2438a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2438a4:
    // 0x2438a4: 0xc7a301f8  lwc1        $f3, 0x1F8($sp)
    ctx->pc = 0x2438a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2438a8:
    // 0x2438a8: 0xc7a20138  lwc1        $f2, 0x138($sp)
    ctx->pc = 0x2438a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2438ac:
    // 0x2438ac: 0x46084a00  add.s       $f8, $f9, $f8
    ctx->pc = 0x2438acu;
    ctx->f[8] = FPU_ADD_S(ctx->f[9], ctx->f[8]);
label_2438b0:
    // 0x2438b0: 0x46063980  add.s       $f6, $f7, $f6
    ctx->pc = 0x2438b0u;
    ctx->f[6] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
label_2438b4:
    // 0x2438b4: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x2438b4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
label_2438b8:
    // 0x2438b8: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x2438b8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_2438bc:
    // 0x2438bc: 0xc7a101fc  lwc1        $f1, 0x1FC($sp)
    ctx->pc = 0x2438bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2438c0:
    // 0x2438c0: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x2438c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2438c4:
    // 0x2438c4: 0xe7ab01e4  swc1        $f11, 0x1E4($sp)
    ctx->pc = 0x2438c4u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 484), bits); }
label_2438c8:
    // 0x2438c8: 0xe7aa01e8  swc1        $f10, 0x1E8($sp)
    ctx->pc = 0x2438c8u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
label_2438cc:
    // 0x2438cc: 0xe7a801ec  swc1        $f8, 0x1EC($sp)
    ctx->pc = 0x2438ccu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 492), bits); }
label_2438d0:
    // 0x2438d0: 0xe7a601f0  swc1        $f6, 0x1F0($sp)
    ctx->pc = 0x2438d0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
label_2438d4:
    // 0x2438d4: 0xe7a401f4  swc1        $f4, 0x1F4($sp)
    ctx->pc = 0x2438d4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 500), bits); }
label_2438d8:
    // 0x2438d8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2438d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2438dc:
    // 0x2438dc: 0xe7a201f8  swc1        $f2, 0x1F8($sp)
    ctx->pc = 0x2438dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
label_2438e0:
    // 0x2438e0: 0x1000001b  b           . + 4 + (0x1B << 2)
label_2438e4:
    if (ctx->pc == 0x2438E4u) {
        ctx->pc = 0x2438E4u;
            // 0x2438e4: 0xe7a001fc  swc1        $f0, 0x1FC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 508), bits); }
        ctx->pc = 0x2438E8u;
        goto label_2438e8;
    }
    ctx->pc = 0x2438E0u;
    {
        const bool branch_taken_0x2438e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2438E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2438E0u;
            // 0x2438e4: 0xe7a001fc  swc1        $f0, 0x1FC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 508), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2438e0) {
            ctx->pc = 0x243950u;
            goto label_243950;
        }
    }
    ctx->pc = 0x2438E8u;
label_2438e8:
    // 0x2438e8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2438e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2438ec:
    // 0x2438ec: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2438ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_2438f0:
    // 0x2438f0: 0x27a50220  addiu       $a1, $sp, 0x220
    ctx->pc = 0x2438f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_2438f4:
    // 0x2438f4: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x2438f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2438f8:
    // 0x2438f8: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x2438f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_2438fc:
    // 0x2438fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2438fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_243900:
    // 0x243900: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x243900u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_243904:
    // 0x243904: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x243904u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_243908:
    // 0x243908: 0x320f809  jalr        $t9
label_24390c:
    if (ctx->pc == 0x24390Cu) {
        ctx->pc = 0x24390Cu;
            // 0x24390c: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x243910u;
        goto label_243910;
    }
    ctx->pc = 0x243908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x243910u);
        ctx->pc = 0x24390Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243908u;
            // 0x24390c: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x243910u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x243910u; }
            if (ctx->pc != 0x243910u) { return; }
        }
        }
    }
    ctx->pc = 0x243910u;
label_243910:
    // 0x243910: 0xc7a601f0  lwc1        $f6, 0x1F0($sp)
    ctx->pc = 0x243910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_243914:
    // 0x243914: 0xc7a001e0  lwc1        $f0, 0x1E0($sp)
    ctx->pc = 0x243914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243918:
    // 0x243918: 0xc7a501f4  lwc1        $f5, 0x1F4($sp)
    ctx->pc = 0x243918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_24391c:
    // 0x24391c: 0xc7a401e4  lwc1        $f4, 0x1E4($sp)
    ctx->pc = 0x24391cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_243920:
    // 0x243920: 0xc7a301f8  lwc1        $f3, 0x1F8($sp)
    ctx->pc = 0x243920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_243924:
    // 0x243924: 0xc7a201e8  lwc1        $f2, 0x1E8($sp)
    ctx->pc = 0x243924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_243928:
    // 0x243928: 0xc7a101fc  lwc1        $f1, 0x1FC($sp)
    ctx->pc = 0x243928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24392c:
    // 0x24392c: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x24392cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
label_243930:
    // 0x243930: 0xc7a001ec  lwc1        $f0, 0x1EC($sp)
    ctx->pc = 0x243930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243934:
    // 0x243934: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x243934u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
label_243938:
    // 0x243938: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x243938u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_24393c:
    // 0x24393c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x24393cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_243940:
    // 0x243940: 0xe7a601c0  swc1        $f6, 0x1C0($sp)
    ctx->pc = 0x243940u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
label_243944:
    // 0x243944: 0xe7a401c4  swc1        $f4, 0x1C4($sp)
    ctx->pc = 0x243944u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
label_243948:
    // 0x243948: 0xe7a201c8  swc1        $f2, 0x1C8($sp)
    ctx->pc = 0x243948u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
label_24394c:
    // 0x24394c: 0xe7a001cc  swc1        $f0, 0x1CC($sp)
    ctx->pc = 0x24394cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 460), bits); }
label_243950:
    // 0x243950: 0x100001a9  b           . + 4 + (0x1A9 << 2)
label_243954:
    if (ctx->pc == 0x243954u) {
        ctx->pc = 0x243958u;
        goto label_243958;
    }
    ctx->pc = 0x243950u;
    {
        const bool branch_taken_0x243950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243950) {
            ctx->pc = 0x243FF8u;
            goto label_243ff8;
        }
    }
    ctx->pc = 0x243958u;
label_243958:
    // 0x243958: 0xc4010004  lwc1        $f1, 0x4($zero)
    ctx->pc = 0x243958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 0), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24395c:
    // 0x24395c: 0xc7a001e4  lwc1        $f0, 0x1E4($sp)
    ctx->pc = 0x24395cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243960:
    // 0x243960: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x243960u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243964:
    // 0x243964: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_243968:
    if (ctx->pc == 0x243968u) {
        ctx->pc = 0x243968u;
            // 0x243968: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x24396Cu;
        goto label_24396c;
    }
    ctx->pc = 0x243964u;
    {
        const bool branch_taken_0x243964 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x243968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243964u;
            // 0x243968: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243964) {
            ctx->pc = 0x243978u;
            goto label_243978;
        }
    }
    ctx->pc = 0x24396Cu;
label_24396c:
    // 0x24396c: 0x10000004  b           . + 4 + (0x4 << 2)
label_243970:
    if (ctx->pc == 0x243970u) {
        ctx->pc = 0x243974u;
        goto label_243974;
    }
    ctx->pc = 0x24396Cu;
    {
        const bool branch_taken_0x24396c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24396c) {
            ctx->pc = 0x243980u;
            goto label_243980;
        }
    }
    ctx->pc = 0x243974u;
label_243974:
    // 0x243974: 0x0  nop
    ctx->pc = 0x243974u;
    // NOP
label_243978:
    // 0x243978: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x243978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24397c:
    // 0x24397c: 0x0  nop
    ctx->pc = 0x24397cu;
    // NOP
label_243980:
    // 0x243980: 0xc4010000  lwc1        $f1, 0x0($zero)
    ctx->pc = 0x243980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 0), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243984:
    // 0x243984: 0xc7a001e0  lwc1        $f0, 0x1E0($sp)
    ctx->pc = 0x243984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243988:
    // 0x243988: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x243988u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24398c:
    // 0x24398c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_243990:
    if (ctx->pc == 0x243990u) {
        ctx->pc = 0x243990u;
            // 0x243990: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x243994u;
        goto label_243994;
    }
    ctx->pc = 0x24398Cu;
    {
        const bool branch_taken_0x24398c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x243990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24398Cu;
            // 0x243990: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24398c) {
            ctx->pc = 0x2439A0u;
            goto label_2439a0;
        }
    }
    ctx->pc = 0x243994u;
label_243994:
    // 0x243994: 0x10000004  b           . + 4 + (0x4 << 2)
label_243998:
    if (ctx->pc == 0x243998u) {
        ctx->pc = 0x24399Cu;
        goto label_24399c;
    }
    ctx->pc = 0x243994u;
    {
        const bool branch_taken_0x243994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243994) {
            ctx->pc = 0x2439A8u;
            goto label_2439a8;
        }
    }
    ctx->pc = 0x24399Cu;
label_24399c:
    // 0x24399c: 0x0  nop
    ctx->pc = 0x24399cu;
    // NOP
label_2439a0:
    // 0x2439a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2439a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2439a4:
    // 0x2439a4: 0x0  nop
    ctx->pc = 0x2439a4u;
    // NOP
label_2439a8:
    // 0x2439a8: 0xc4010008  lwc1        $f1, 0x8($zero)
    ctx->pc = 0x2439a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 0), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2439ac:
    // 0x2439ac: 0xc7a001e8  lwc1        $f0, 0x1E8($sp)
    ctx->pc = 0x2439acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2439b0:
    // 0x2439b0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2439b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2439b4:
    // 0x2439b4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_2439b8:
    if (ctx->pc == 0x2439B8u) {
        ctx->pc = 0x2439B8u;
            // 0x2439b8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2439BCu;
        goto label_2439bc;
    }
    ctx->pc = 0x2439B4u;
    {
        const bool branch_taken_0x2439b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2439B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2439B4u;
            // 0x2439b8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2439b4) {
            ctx->pc = 0x2439C8u;
            goto label_2439c8;
        }
    }
    ctx->pc = 0x2439BCu;
label_2439bc:
    // 0x2439bc: 0x10000004  b           . + 4 + (0x4 << 2)
label_2439c0:
    if (ctx->pc == 0x2439C0u) {
        ctx->pc = 0x2439C4u;
        goto label_2439c4;
    }
    ctx->pc = 0x2439BCu;
    {
        const bool branch_taken_0x2439bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2439bc) {
            ctx->pc = 0x2439D0u;
            goto label_2439d0;
        }
    }
    ctx->pc = 0x2439C4u;
label_2439c4:
    // 0x2439c4: 0x0  nop
    ctx->pc = 0x2439c4u;
    // NOP
label_2439c8:
    // 0x2439c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2439c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2439cc:
    // 0x2439cc: 0x0  nop
    ctx->pc = 0x2439ccu;
    // NOP
label_2439d0:
    // 0x2439d0: 0xc401000c  lwc1        $f1, 0xC($zero)
    ctx->pc = 0x2439d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 0), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2439d4:
    // 0x2439d4: 0xc7a001ec  lwc1        $f0, 0x1EC($sp)
    ctx->pc = 0x2439d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2439d8:
    // 0x2439d8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2439d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2439dc:
    // 0x2439dc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_2439e0:
    if (ctx->pc == 0x2439E0u) {
        ctx->pc = 0x2439E0u;
            // 0x2439e0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2439E4u;
        goto label_2439e4;
    }
    ctx->pc = 0x2439DCu;
    {
        const bool branch_taken_0x2439dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2439E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2439DCu;
            // 0x2439e0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2439dc) {
            ctx->pc = 0x2439F0u;
            goto label_2439f0;
        }
    }
    ctx->pc = 0x2439E4u;
label_2439e4:
    // 0x2439e4: 0x10000004  b           . + 4 + (0x4 << 2)
label_2439e8:
    if (ctx->pc == 0x2439E8u) {
        ctx->pc = 0x2439ECu;
        goto label_2439ec;
    }
    ctx->pc = 0x2439E4u;
    {
        const bool branch_taken_0x2439e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2439e4) {
            ctx->pc = 0x2439F8u;
            goto label_2439f8;
        }
    }
    ctx->pc = 0x2439ECu;
label_2439ec:
    // 0x2439ec: 0x0  nop
    ctx->pc = 0x2439ecu;
    // NOP
label_2439f0:
    // 0x2439f0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2439f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2439f4:
    // 0x2439f4: 0x0  nop
    ctx->pc = 0x2439f4u;
    // NOP
label_2439f8:
    // 0x2439f8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2439f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_2439fc:
    // 0x2439fc: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x2439fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_243a00:
    // 0x243a00: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x243a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_243a04:
    // 0x243a04: 0x27a402e8  addiu       $a0, $sp, 0x2E8
    ctx->pc = 0x243a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 744));
label_243a08:
    // 0x243a08: 0xafa202e8  sw          $v0, 0x2E8($sp)
    ctx->pc = 0x243a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 744), GPR_U32(ctx, 2));
label_243a0c:
    // 0x243a0c: 0x27a302f0  addiu       $v1, $sp, 0x2F0
    ctx->pc = 0x243a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
label_243a10:
    // 0x243a10: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x243a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243a14:
    // 0x243a14: 0x27a202fc  addiu       $v0, $sp, 0x2FC
    ctx->pc = 0x243a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 764));
label_243a18:
    // 0x243a18: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x243a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_243a1c:
    // 0x243a1c: 0x46000006  mov.s       $f0, $f0
    ctx->pc = 0x243a1cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[0]);
label_243a20:
    // 0x243a20: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x243a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_243a24:
    // 0x243a24: 0xc4010014  lwc1        $f1, 0x14($zero)
    ctx->pc = 0x243a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 0), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243a28:
    // 0x243a28: 0xc7a001f4  lwc1        $f0, 0x1F4($sp)
    ctx->pc = 0x243a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243a2c:
    // 0x243a2c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x243a2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243a30:
    // 0x243a30: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_243a34:
    if (ctx->pc == 0x243A34u) {
        ctx->pc = 0x243A38u;
        goto label_243a38;
    }
    ctx->pc = 0x243A30u;
    {
        const bool branch_taken_0x243a30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x243a30) {
            ctx->pc = 0x243A40u;
            goto label_243a40;
        }
    }
    ctx->pc = 0x243A38u;
label_243a38:
    // 0x243a38: 0x10000003  b           . + 4 + (0x3 << 2)
label_243a3c:
    if (ctx->pc == 0x243A3Cu) {
        ctx->pc = 0x243A3Cu;
            // 0x243a3c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x243A40u;
        goto label_243a40;
    }
    ctx->pc = 0x243A38u;
    {
        const bool branch_taken_0x243a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243A38u;
            // 0x243a3c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243a38) {
            ctx->pc = 0x243A48u;
            goto label_243a48;
        }
    }
    ctx->pc = 0x243A40u;
label_243a40:
    // 0x243a40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x243a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243a44:
    // 0x243a44: 0x0  nop
    ctx->pc = 0x243a44u;
    // NOP
label_243a48:
    // 0x243a48: 0xc4010010  lwc1        $f1, 0x10($zero)
    ctx->pc = 0x243a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 0), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243a4c:
    // 0x243a4c: 0xc7a001f0  lwc1        $f0, 0x1F0($sp)
    ctx->pc = 0x243a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243a50:
    // 0x243a50: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x243a50u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243a54:
    // 0x243a54: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_243a58:
    if (ctx->pc == 0x243A58u) {
        ctx->pc = 0x243A58u;
            // 0x243a58: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x243A5Cu;
        goto label_243a5c;
    }
    ctx->pc = 0x243A54u;
    {
        const bool branch_taken_0x243a54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x243A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243A54u;
            // 0x243a58: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243a54) {
            ctx->pc = 0x243A68u;
            goto label_243a68;
        }
    }
    ctx->pc = 0x243A5Cu;
label_243a5c:
    // 0x243a5c: 0x10000004  b           . + 4 + (0x4 << 2)
label_243a60:
    if (ctx->pc == 0x243A60u) {
        ctx->pc = 0x243A64u;
        goto label_243a64;
    }
    ctx->pc = 0x243A5Cu;
    {
        const bool branch_taken_0x243a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243a5c) {
            ctx->pc = 0x243A70u;
            goto label_243a70;
        }
    }
    ctx->pc = 0x243A64u;
label_243a64:
    // 0x243a64: 0x0  nop
    ctx->pc = 0x243a64u;
    // NOP
label_243a68:
    // 0x243a68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x243a68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243a6c:
    // 0x243a6c: 0x0  nop
    ctx->pc = 0x243a6cu;
    // NOP
label_243a70:
    // 0x243a70: 0xc4010018  lwc1        $f1, 0x18($zero)
    ctx->pc = 0x243a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 0), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243a74:
    // 0x243a74: 0xc7a001f8  lwc1        $f0, 0x1F8($sp)
    ctx->pc = 0x243a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243a78:
    // 0x243a78: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x243a78u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243a7c:
    // 0x243a7c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_243a80:
    if (ctx->pc == 0x243A80u) {
        ctx->pc = 0x243A80u;
            // 0x243a80: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x243A84u;
        goto label_243a84;
    }
    ctx->pc = 0x243A7Cu;
    {
        const bool branch_taken_0x243a7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x243A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243A7Cu;
            // 0x243a80: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243a7c) {
            ctx->pc = 0x243A90u;
            goto label_243a90;
        }
    }
    ctx->pc = 0x243A84u;
label_243a84:
    // 0x243a84: 0x10000004  b           . + 4 + (0x4 << 2)
label_243a88:
    if (ctx->pc == 0x243A88u) {
        ctx->pc = 0x243A8Cu;
        goto label_243a8c;
    }
    ctx->pc = 0x243A84u;
    {
        const bool branch_taken_0x243a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243a84) {
            ctx->pc = 0x243A98u;
            goto label_243a98;
        }
    }
    ctx->pc = 0x243A8Cu;
label_243a8c:
    // 0x243a8c: 0x0  nop
    ctx->pc = 0x243a8cu;
    // NOP
label_243a90:
    // 0x243a90: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x243a90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243a94:
    // 0x243a94: 0x0  nop
    ctx->pc = 0x243a94u;
    // NOP
label_243a98:
    // 0x243a98: 0xc401001c  lwc1        $f1, 0x1C($zero)
    ctx->pc = 0x243a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 0), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243a9c:
    // 0x243a9c: 0xc7a001fc  lwc1        $f0, 0x1FC($sp)
    ctx->pc = 0x243a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243aa0:
    // 0x243aa0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x243aa0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243aa4:
    // 0x243aa4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_243aa8:
    if (ctx->pc == 0x243AA8u) {
        ctx->pc = 0x243AA8u;
            // 0x243aa8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x243AACu;
        goto label_243aac;
    }
    ctx->pc = 0x243AA4u;
    {
        const bool branch_taken_0x243aa4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x243AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243AA4u;
            // 0x243aa8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243aa4) {
            ctx->pc = 0x243AB8u;
            goto label_243ab8;
        }
    }
    ctx->pc = 0x243AACu;
label_243aac:
    // 0x243aac: 0x10000004  b           . + 4 + (0x4 << 2)
label_243ab0:
    if (ctx->pc == 0x243AB0u) {
        ctx->pc = 0x243AB4u;
        goto label_243ab4;
    }
    ctx->pc = 0x243AACu;
    {
        const bool branch_taken_0x243aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243aac) {
            ctx->pc = 0x243AC0u;
            goto label_243ac0;
        }
    }
    ctx->pc = 0x243AB4u;
label_243ab4:
    // 0x243ab4: 0x0  nop
    ctx->pc = 0x243ab4u;
    // NOP
label_243ab8:
    // 0x243ab8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x243ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243abc:
    // 0x243abc: 0x0  nop
    ctx->pc = 0x243abcu;
    // NOP
label_243ac0:
    // 0x243ac0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x243ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_243ac4:
    // 0x243ac4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x243ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_243ac8:
    // 0x243ac8: 0x27a602ec  addiu       $a2, $sp, 0x2EC
    ctx->pc = 0x243ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 748));
label_243acc:
    // 0x243acc: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x243accu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_243ad0:
    // 0x243ad0: 0x27a202e4  addiu       $v0, $sp, 0x2E4
    ctx->pc = 0x243ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 740));
label_243ad4:
    // 0x243ad4: 0xafa302e4  sw          $v1, 0x2E4($sp)
    ctx->pc = 0x243ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 740), GPR_U32(ctx, 3));
label_243ad8:
    // 0x243ad8: 0x27a502f8  addiu       $a1, $sp, 0x2F8
    ctx->pc = 0x243ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 760));
label_243adc:
    // 0x243adc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x243adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243ae0:
    // 0x243ae0: 0x27a402dc  addiu       $a0, $sp, 0x2DC
    ctx->pc = 0x243ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 732));
label_243ae4:
    // 0x243ae4: 0x27a302fc  addiu       $v1, $sp, 0x2FC
    ctx->pc = 0x243ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 764));
label_243ae8:
    // 0x243ae8: 0x27a70300  addiu       $a3, $sp, 0x300
    ctx->pc = 0x243ae8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
label_243aec:
    // 0x243aec: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x243aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_243af0:
    // 0x243af0: 0x27a202e0  addiu       $v0, $sp, 0x2E0
    ctx->pc = 0x243af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_243af4:
    // 0x243af4: 0x46000006  mov.s       $f0, $f0
    ctx->pc = 0x243af4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[0]);
label_243af8:
    // 0x243af8: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x243af8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_243afc:
    // 0x243afc: 0x46000006  mov.s       $f0, $f0
    ctx->pc = 0x243afcu;
    ctx->f[0] = FPU_MOV_S(ctx->f[0]);
label_243b00:
    // 0x243b00: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x243b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_243b04:
    // 0x243b04: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x243b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243b08:
    // 0x243b08: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x243b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_243b0c:
    // 0x243b0c: 0x8fa302e0  lw          $v1, 0x2E0($sp)
    ctx->pc = 0x243b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
label_243b10:
    // 0x243b10: 0x8fa202dc  lw          $v0, 0x2DC($sp)
    ctx->pc = 0x243b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 732)));
label_243b14:
    // 0x243b14: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x243b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_243b18:
    // 0x243b18: 0xafa202f4  sw          $v0, 0x2F4($sp)
    ctx->pc = 0x243b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 756), GPR_U32(ctx, 2));
label_243b1c:
    // 0x243b1c: 0x8fa202f4  lw          $v0, 0x2F4($sp)
    ctx->pc = 0x243b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 756)));
label_243b20:
    // 0x243b20: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x243b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
label_243b24:
    // 0x243b24: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x243b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
label_243b28:
    // 0x243b28: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x243b28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_243b2c:
    // 0x243b2c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x243b2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_243b30:
    // 0x243b30: 0xa3a20300  sb          $v0, 0x300($sp)
    ctx->pc = 0x243b30u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 768), (uint8_t)GPR_U32(ctx, 2));
label_243b34:
    // 0x243b34: 0x80e20000  lb          $v0, 0x0($a3)
    ctx->pc = 0x243b34u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_243b38:
    // 0x243b38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_243b3c:
    if (ctx->pc == 0x243B3Cu) {
        ctx->pc = 0x243B3Cu;
            // 0x243b3c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x243B40u;
        goto label_243b40;
    }
    ctx->pc = 0x243B38u;
    {
        const bool branch_taken_0x243b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243B38u;
            // 0x243b3c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243b38) {
            ctx->pc = 0x243B48u;
            goto label_243b48;
        }
    }
    ctx->pc = 0x243B40u;
label_243b40:
    // 0x243b40: 0x1000013d  b           . + 4 + (0x13D << 2)
label_243b44:
    if (ctx->pc == 0x243B44u) {
        ctx->pc = 0x243B48u;
        goto label_243b48;
    }
    ctx->pc = 0x243B40u;
    {
        const bool branch_taken_0x243b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243b40) {
            ctx->pc = 0x244038u;
            goto label_244038;
        }
    }
    ctx->pc = 0x243B48u;
label_243b48:
    // 0x243b48: 0xafa0012c  sw          $zero, 0x12C($sp)
    ctx->pc = 0x243b48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 0));
label_243b4c:
    // 0x243b4c: 0xc7a001d0  lwc1        $f0, 0x1D0($sp)
    ctx->pc = 0x243b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243b50:
    // 0x243b50: 0xafa00128  sw          $zero, 0x128($sp)
    ctx->pc = 0x243b50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 0));
label_243b54:
    // 0x243b54: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x243b54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_243b58:
    // 0x243b58: 0xafa00124  sw          $zero, 0x124($sp)
    ctx->pc = 0x243b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 0));
label_243b5c:
    // 0x243b5c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x243b5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243b60:
    // 0x243b60: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_243b64:
    if (ctx->pc == 0x243B64u) {
        ctx->pc = 0x243B64u;
            // 0x243b64: 0xafa00120  sw          $zero, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
        ctx->pc = 0x243B68u;
        goto label_243b68;
    }
    ctx->pc = 0x243B60u;
    {
        const bool branch_taken_0x243b60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x243B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243B60u;
            // 0x243b64: 0xafa00120  sw          $zero, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243b60) {
            ctx->pc = 0x243B70u;
            goto label_243b70;
        }
    }
    ctx->pc = 0x243B68u;
label_243b68:
    // 0x243b68: 0x10000003  b           . + 4 + (0x3 << 2)
label_243b6c:
    if (ctx->pc == 0x243B6Cu) {
        ctx->pc = 0x243B70u;
        goto label_243b70;
    }
    ctx->pc = 0x243B68u;
    {
        const bool branch_taken_0x243b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243b68) {
            ctx->pc = 0x243B78u;
            goto label_243b78;
        }
    }
    ctx->pc = 0x243B70u;
label_243b70:
    // 0x243b70: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x243b70u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_243b74:
    // 0x243b74: 0x0  nop
    ctx->pc = 0x243b74u;
    // NOP
label_243b78:
    // 0x243b78: 0xe7a10110  swc1        $f1, 0x110($sp)
    ctx->pc = 0x243b78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_243b7c:
    // 0x243b7c: 0xc7a10124  lwc1        $f1, 0x124($sp)
    ctx->pc = 0x243b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243b80:
    // 0x243b80: 0xc7a001d4  lwc1        $f0, 0x1D4($sp)
    ctx->pc = 0x243b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243b84:
    // 0x243b84: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x243b84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243b88:
    // 0x243b88: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_243b8c:
    if (ctx->pc == 0x243B8Cu) {
        ctx->pc = 0x243B90u;
        goto label_243b90;
    }
    ctx->pc = 0x243B88u;
    {
        const bool branch_taken_0x243b88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x243b88) {
            ctx->pc = 0x243B98u;
            goto label_243b98;
        }
    }
    ctx->pc = 0x243B90u;
label_243b90:
    // 0x243b90: 0x10000003  b           . + 4 + (0x3 << 2)
label_243b94:
    if (ctx->pc == 0x243B94u) {
        ctx->pc = 0x243B98u;
        goto label_243b98;
    }
    ctx->pc = 0x243B90u;
    {
        const bool branch_taken_0x243b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243b90) {
            ctx->pc = 0x243BA0u;
            goto label_243ba0;
        }
    }
    ctx->pc = 0x243B98u;
label_243b98:
    // 0x243b98: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x243b98u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_243b9c:
    // 0x243b9c: 0x0  nop
    ctx->pc = 0x243b9cu;
    // NOP
label_243ba0:
    // 0x243ba0: 0xe7a10114  swc1        $f1, 0x114($sp)
    ctx->pc = 0x243ba0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_243ba4:
    // 0x243ba4: 0xc7a10128  lwc1        $f1, 0x128($sp)
    ctx->pc = 0x243ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243ba8:
    // 0x243ba8: 0xc7a001d8  lwc1        $f0, 0x1D8($sp)
    ctx->pc = 0x243ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243bac:
    // 0x243bac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x243bacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243bb0:
    // 0x243bb0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_243bb4:
    if (ctx->pc == 0x243BB4u) {
        ctx->pc = 0x243BB8u;
        goto label_243bb8;
    }
    ctx->pc = 0x243BB0u;
    {
        const bool branch_taken_0x243bb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x243bb0) {
            ctx->pc = 0x243BC0u;
            goto label_243bc0;
        }
    }
    ctx->pc = 0x243BB8u;
label_243bb8:
    // 0x243bb8: 0x10000003  b           . + 4 + (0x3 << 2)
label_243bbc:
    if (ctx->pc == 0x243BBCu) {
        ctx->pc = 0x243BC0u;
        goto label_243bc0;
    }
    ctx->pc = 0x243BB8u;
    {
        const bool branch_taken_0x243bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243bb8) {
            ctx->pc = 0x243BC8u;
            goto label_243bc8;
        }
    }
    ctx->pc = 0x243BC0u;
label_243bc0:
    // 0x243bc0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x243bc0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_243bc4:
    // 0x243bc4: 0x0  nop
    ctx->pc = 0x243bc4u;
    // NOP
label_243bc8:
    // 0x243bc8: 0xe7a10118  swc1        $f1, 0x118($sp)
    ctx->pc = 0x243bc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_243bcc:
    // 0x243bcc: 0xc7a1012c  lwc1        $f1, 0x12C($sp)
    ctx->pc = 0x243bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243bd0:
    // 0x243bd0: 0xc7a001dc  lwc1        $f0, 0x1DC($sp)
    ctx->pc = 0x243bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243bd4:
    // 0x243bd4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x243bd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243bd8:
    // 0x243bd8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_243bdc:
    if (ctx->pc == 0x243BDCu) {
        ctx->pc = 0x243BE0u;
        goto label_243be0;
    }
    ctx->pc = 0x243BD8u;
    {
        const bool branch_taken_0x243bd8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x243bd8) {
            ctx->pc = 0x243BE8u;
            goto label_243be8;
        }
    }
    ctx->pc = 0x243BE0u;
label_243be0:
    // 0x243be0: 0x10000003  b           . + 4 + (0x3 << 2)
label_243be4:
    if (ctx->pc == 0x243BE4u) {
        ctx->pc = 0x243BE8u;
        goto label_243be8;
    }
    ctx->pc = 0x243BE0u;
    {
        const bool branch_taken_0x243be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243be0) {
            ctx->pc = 0x243BF0u;
            goto label_243bf0;
        }
    }
    ctx->pc = 0x243BE8u;
label_243be8:
    // 0x243be8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x243be8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_243bec:
    // 0x243bec: 0x0  nop
    ctx->pc = 0x243becu;
    // NOP
label_243bf0:
    // 0x243bf0: 0xe7a1011c  swc1        $f1, 0x11C($sp)
    ctx->pc = 0x243bf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_243bf4:
    // 0x243bf4: 0xc7a10120  lwc1        $f1, 0x120($sp)
    ctx->pc = 0x243bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243bf8:
    // 0x243bf8: 0xc7a001d0  lwc1        $f0, 0x1D0($sp)
    ctx->pc = 0x243bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243bfc:
    // 0x243bfc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x243bfcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243c00:
    // 0x243c00: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_243c04:
    if (ctx->pc == 0x243C04u) {
        ctx->pc = 0x243C08u;
        goto label_243c08;
    }
    ctx->pc = 0x243C00u;
    {
        const bool branch_taken_0x243c00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x243c00) {
            ctx->pc = 0x243C10u;
            goto label_243c10;
        }
    }
    ctx->pc = 0x243C08u;
label_243c08:
    // 0x243c08: 0x10000003  b           . + 4 + (0x3 << 2)
label_243c0c:
    if (ctx->pc == 0x243C0Cu) {
        ctx->pc = 0x243C10u;
        goto label_243c10;
    }
    ctx->pc = 0x243C08u;
    {
        const bool branch_taken_0x243c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243c08) {
            ctx->pc = 0x243C18u;
            goto label_243c18;
        }
    }
    ctx->pc = 0x243C10u;
label_243c10:
    // 0x243c10: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x243c10u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_243c14:
    // 0x243c14: 0x0  nop
    ctx->pc = 0x243c14u;
    // NOP
label_243c18:
    // 0x243c18: 0xe7a10100  swc1        $f1, 0x100($sp)
    ctx->pc = 0x243c18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_243c1c:
    // 0x243c1c: 0xc7a10124  lwc1        $f1, 0x124($sp)
    ctx->pc = 0x243c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243c20:
    // 0x243c20: 0xc7a001d4  lwc1        $f0, 0x1D4($sp)
    ctx->pc = 0x243c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243c24:
    // 0x243c24: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x243c24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243c28:
    // 0x243c28: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_243c2c:
    if (ctx->pc == 0x243C2Cu) {
        ctx->pc = 0x243C30u;
        goto label_243c30;
    }
    ctx->pc = 0x243C28u;
    {
        const bool branch_taken_0x243c28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x243c28) {
            ctx->pc = 0x243C38u;
            goto label_243c38;
        }
    }
    ctx->pc = 0x243C30u;
label_243c30:
    // 0x243c30: 0x10000003  b           . + 4 + (0x3 << 2)
label_243c34:
    if (ctx->pc == 0x243C34u) {
        ctx->pc = 0x243C38u;
        goto label_243c38;
    }
    ctx->pc = 0x243C30u;
    {
        const bool branch_taken_0x243c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243c30) {
            ctx->pc = 0x243C40u;
            goto label_243c40;
        }
    }
    ctx->pc = 0x243C38u;
label_243c38:
    // 0x243c38: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x243c38u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_243c3c:
    // 0x243c3c: 0x0  nop
    ctx->pc = 0x243c3cu;
    // NOP
label_243c40:
    // 0x243c40: 0xe7a10104  swc1        $f1, 0x104($sp)
    ctx->pc = 0x243c40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_243c44:
    // 0x243c44: 0xc7a10128  lwc1        $f1, 0x128($sp)
    ctx->pc = 0x243c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243c48:
    // 0x243c48: 0xc7a001d8  lwc1        $f0, 0x1D8($sp)
    ctx->pc = 0x243c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243c4c:
    // 0x243c4c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x243c4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243c50:
    // 0x243c50: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_243c54:
    if (ctx->pc == 0x243C54u) {
        ctx->pc = 0x243C58u;
        goto label_243c58;
    }
    ctx->pc = 0x243C50u;
    {
        const bool branch_taken_0x243c50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x243c50) {
            ctx->pc = 0x243C60u;
            goto label_243c60;
        }
    }
    ctx->pc = 0x243C58u;
label_243c58:
    // 0x243c58: 0x10000003  b           . + 4 + (0x3 << 2)
label_243c5c:
    if (ctx->pc == 0x243C5Cu) {
        ctx->pc = 0x243C60u;
        goto label_243c60;
    }
    ctx->pc = 0x243C58u;
    {
        const bool branch_taken_0x243c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243c58) {
            ctx->pc = 0x243C68u;
            goto label_243c68;
        }
    }
    ctx->pc = 0x243C60u;
label_243c60:
    // 0x243c60: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x243c60u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_243c64:
    // 0x243c64: 0x0  nop
    ctx->pc = 0x243c64u;
    // NOP
label_243c68:
    // 0x243c68: 0xe7a10108  swc1        $f1, 0x108($sp)
    ctx->pc = 0x243c68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_243c6c:
    // 0x243c6c: 0xc7a1012c  lwc1        $f1, 0x12C($sp)
    ctx->pc = 0x243c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243c70:
    // 0x243c70: 0xc7a001dc  lwc1        $f0, 0x1DC($sp)
    ctx->pc = 0x243c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243c74:
    // 0x243c74: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x243c74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243c78:
    // 0x243c78: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_243c7c:
    if (ctx->pc == 0x243C7Cu) {
        ctx->pc = 0x243C80u;
        goto label_243c80;
    }
    ctx->pc = 0x243C78u;
    {
        const bool branch_taken_0x243c78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x243c78) {
            ctx->pc = 0x243C88u;
            goto label_243c88;
        }
    }
    ctx->pc = 0x243C80u;
label_243c80:
    // 0x243c80: 0x10000003  b           . + 4 + (0x3 << 2)
label_243c84:
    if (ctx->pc == 0x243C84u) {
        ctx->pc = 0x243C88u;
        goto label_243c88;
    }
    ctx->pc = 0x243C80u;
    {
        const bool branch_taken_0x243c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243c80) {
            ctx->pc = 0x243C90u;
            goto label_243c90;
        }
    }
    ctx->pc = 0x243C88u;
label_243c88:
    // 0x243c88: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x243c88u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_243c8c:
    // 0x243c8c: 0x0  nop
    ctx->pc = 0x243c8cu;
    // NOP
label_243c90:
    // 0x243c90: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x243c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_243c94:
    // 0x243c94: 0xe7a1010c  swc1        $f1, 0x10C($sp)
    ctx->pc = 0x243c94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_243c98:
    // 0x243c98: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x243c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_243c9c:
    // 0x243c9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x243c9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_243ca0:
    // 0x243ca0: 0xc7a30100  lwc1        $f3, 0x100($sp)
    ctx->pc = 0x243ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_243ca4:
    // 0x243ca4: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x243ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_243ca8:
    // 0x243ca8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x243ca8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_243cac:
    // 0x243cac: 0xc7ab0108  lwc1        $f11, 0x108($sp)
    ctx->pc = 0x243cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_243cb0:
    // 0x243cb0: 0x46020142  mul.s       $f5, $f0, $f2
    ctx->pc = 0x243cb0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_243cb4:
    // 0x243cb4: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x243cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
label_243cb8:
    // 0x243cb8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x243cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_243cbc:
    // 0x243cbc: 0xc7a20104  lwc1        $f2, 0x104($sp)
    ctx->pc = 0x243cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_243cc0:
    // 0x243cc0: 0xc7aa010c  lwc1        $f10, 0x10C($sp)
    ctx->pc = 0x243cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_243cc4:
    // 0x243cc4: 0xc7a90110  lwc1        $f9, 0x110($sp)
    ctx->pc = 0x243cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_243cc8:
    // 0x243cc8: 0xc7a80114  lwc1        $f8, 0x114($sp)
    ctx->pc = 0x243cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_243ccc:
    // 0x243ccc: 0xc7a70118  lwc1        $f7, 0x118($sp)
    ctx->pc = 0x243cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_243cd0:
    // 0x243cd0: 0xe7a500f0  swc1        $f5, 0xF0($sp)
    ctx->pc = 0x243cd0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_243cd4:
    // 0x243cd4: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x243cd4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_243cd8:
    // 0x243cd8: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x243cd8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_243cdc:
    // 0x243cdc: 0x460b0ac2  mul.s       $f11, $f1, $f11
    ctx->pc = 0x243cdcu;
    ctx->f[11] = FPU_MUL_S(ctx->f[1], ctx->f[11]);
label_243ce0:
    // 0x243ce0: 0x460a0a82  mul.s       $f10, $f1, $f10
    ctx->pc = 0x243ce0u;
    ctx->f[10] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
label_243ce4:
    // 0x243ce4: 0x46090a42  mul.s       $f9, $f1, $f9
    ctx->pc = 0x243ce4u;
    ctx->f[9] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
label_243ce8:
    // 0x243ce8: 0x46080a02  mul.s       $f8, $f1, $f8
    ctx->pc = 0x243ce8u;
    ctx->f[8] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
label_243cec:
    // 0x243cec: 0x460709c2  mul.s       $f7, $f1, $f7
    ctx->pc = 0x243cecu;
    ctx->f[7] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
label_243cf0:
    // 0x243cf0: 0xc7a6011c  lwc1        $f6, 0x11C($sp)
    ctx->pc = 0x243cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_243cf4:
    // 0x243cf4: 0xe7a500f4  swc1        $f5, 0xF4($sp)
    ctx->pc = 0x243cf4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_243cf8:
    // 0x243cf8: 0xe7a500f8  swc1        $f5, 0xF8($sp)
    ctx->pc = 0x243cf8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_243cfc:
    // 0x243cfc: 0xe7a500fc  swc1        $f5, 0xFC($sp)
    ctx->pc = 0x243cfcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_243d00:
    // 0x243d00: 0xe7a300e0  swc1        $f3, 0xE0($sp)
    ctx->pc = 0x243d00u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_243d04:
    // 0x243d04: 0xe7a900d0  swc1        $f9, 0xD0($sp)
    ctx->pc = 0x243d04u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_243d08:
    // 0x243d08: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x243d08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
label_243d0c:
    // 0x243d0c: 0xc7a401e0  lwc1        $f4, 0x1E0($sp)
    ctx->pc = 0x243d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_243d10:
    // 0x243d10: 0xc7b600f0  lwc1        $f22, 0xF0($sp)
    ctx->pc = 0x243d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_243d14:
    // 0x243d14: 0xe7a200e4  swc1        $f2, 0xE4($sp)
    ctx->pc = 0x243d14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_243d18:
    // 0x243d18: 0xc7af01f0  lwc1        $f15, 0x1F0($sp)
    ctx->pc = 0x243d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_243d1c:
    // 0x243d1c: 0xc7a501c0  lwc1        $f5, 0x1C0($sp)
    ctx->pc = 0x243d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_243d20:
    // 0x243d20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x243d20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_243d24:
    // 0x243d24: 0xc7a301c8  lwc1        $f3, 0x1C8($sp)
    ctx->pc = 0x243d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_243d28:
    // 0x243d28: 0x46162081  sub.s       $f2, $f4, $f22
    ctx->pc = 0x243d28u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[22]);
label_243d2c:
    // 0x243d2c: 0xc7a401c4  lwc1        $f4, 0x1C4($sp)
    ctx->pc = 0x243d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_243d30:
    // 0x243d30: 0xe7a100dc  swc1        $f1, 0xDC($sp)
    ctx->pc = 0x243d30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_243d34:
    // 0x243d34: 0x46050042  mul.s       $f1, $f0, $f5
    ctx->pc = 0x243d34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_243d38:
    // 0x243d38: 0xe7a201e0  swc1        $f2, 0x1E0($sp)
    ctx->pc = 0x243d38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
label_243d3c:
    // 0x243d3c: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x243d3cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_243d40:
    // 0x243d40: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x243d40u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_243d44:
    // 0x243d44: 0xc7a201cc  lwc1        $f2, 0x1CC($sp)
    ctx->pc = 0x243d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_243d48:
    // 0x243d48: 0x46167bc0  add.s       $f15, $f15, $f22
    ctx->pc = 0x243d48u;
    ctx->f[15] = FPU_ADD_S(ctx->f[15], ctx->f[22]);
label_243d4c:
    // 0x243d4c: 0xe7a100c0  swc1        $f1, 0xC0($sp)
    ctx->pc = 0x243d4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_243d50:
    // 0x243d50: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x243d50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_243d54:
    // 0x243d54: 0xc7ae01f4  lwc1        $f14, 0x1F4($sp)
    ctx->pc = 0x243d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_243d58:
    // 0x243d58: 0xc7b400f4  lwc1        $f20, 0xF4($sp)
    ctx->pc = 0x243d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_243d5c:
    // 0x243d5c: 0xc7ad01f8  lwc1        $f13, 0x1F8($sp)
    ctx->pc = 0x243d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_243d60:
    // 0x243d60: 0xc7b200f8  lwc1        $f18, 0xF8($sp)
    ctx->pc = 0x243d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
label_243d64:
    // 0x243d64: 0xc7b501e4  lwc1        $f21, 0x1E4($sp)
    ctx->pc = 0x243d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_243d68:
    // 0x243d68: 0xe7af01f0  swc1        $f15, 0x1F0($sp)
    ctx->pc = 0x243d68u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
label_243d6c:
    // 0x243d6c: 0xc7b301e8  lwc1        $f19, 0x1E8($sp)
    ctx->pc = 0x243d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
label_243d70:
    // 0x243d70: 0x46147380  add.s       $f14, $f14, $f20
    ctx->pc = 0x243d70u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[20]);
label_243d74:
    // 0x243d74: 0x46126b40  add.s       $f13, $f13, $f18
    ctx->pc = 0x243d74u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[18]);
label_243d78:
    // 0x243d78: 0xe7ae01f4  swc1        $f14, 0x1F4($sp)
    ctx->pc = 0x243d78u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 500), bits); }
label_243d7c:
    // 0x243d7c: 0x4614abc1  sub.s       $f15, $f21, $f20
    ctx->pc = 0x243d7cu;
    ctx->f[15] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
label_243d80:
    // 0x243d80: 0x46129b81  sub.s       $f14, $f19, $f18
    ctx->pc = 0x243d80u;
    ctx->f[14] = FPU_SUB_S(ctx->f[19], ctx->f[18]);
label_243d84:
    // 0x243d84: 0xc7b101ec  lwc1        $f17, 0x1EC($sp)
    ctx->pc = 0x243d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
label_243d88:
    // 0x243d88: 0xc7ac01fc  lwc1        $f12, 0x1FC($sp)
    ctx->pc = 0x243d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_243d8c:
    // 0x243d8c: 0xc7b000fc  lwc1        $f16, 0xFC($sp)
    ctx->pc = 0x243d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_243d90:
    // 0x243d90: 0xe7ad01f8  swc1        $f13, 0x1F8($sp)
    ctx->pc = 0x243d90u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
label_243d94:
    // 0x243d94: 0xc7a900d0  lwc1        $f9, 0xD0($sp)
    ctx->pc = 0x243d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_243d98:
    // 0x243d98: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x243d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243d9c:
    // 0x243d9c: 0xe7af01e4  swc1        $f15, 0x1E4($sp)
    ctx->pc = 0x243d9cu;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 484), bits); }
label_243da0:
    // 0x243da0: 0xe7ae01e8  swc1        $f14, 0x1E8($sp)
    ctx->pc = 0x243da0u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
label_243da4:
    // 0x243da4: 0x46108b41  sub.s       $f13, $f17, $f16
    ctx->pc = 0x243da4u;
    ctx->f[13] = FPU_SUB_S(ctx->f[17], ctx->f[16]);
label_243da8:
    // 0x243da8: 0x46106300  add.s       $f12, $f12, $f16
    ctx->pc = 0x243da8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[16]);
label_243dac:
    // 0x243dac: 0x46014834  c.lt.s      $f9, $f1
    ctx->pc = 0x243dacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[9], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243db0:
    // 0x243db0: 0xe7ad01ec  swc1        $f13, 0x1EC($sp)
    ctx->pc = 0x243db0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 492), bits); }
label_243db4:
    // 0x243db4: 0xe7ac01fc  swc1        $f12, 0x1FC($sp)
    ctx->pc = 0x243db4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 508), bits); }
label_243db8:
    // 0x243db8: 0xe7ab00e8  swc1        $f11, 0xE8($sp)
    ctx->pc = 0x243db8u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_243dbc:
    // 0x243dbc: 0xe7aa00ec  swc1        $f10, 0xEC($sp)
    ctx->pc = 0x243dbcu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_243dc0:
    // 0x243dc0: 0xe7a800d4  swc1        $f8, 0xD4($sp)
    ctx->pc = 0x243dc0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_243dc4:
    // 0x243dc4: 0xe7a700d8  swc1        $f7, 0xD8($sp)
    ctx->pc = 0x243dc4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_243dc8:
    // 0x243dc8: 0xe7a400c4  swc1        $f4, 0xC4($sp)
    ctx->pc = 0x243dc8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_243dcc:
    // 0x243dcc: 0xe7a300c8  swc1        $f3, 0xC8($sp)
    ctx->pc = 0x243dccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_243dd0:
    // 0x243dd0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_243dd4:
    if (ctx->pc == 0x243DD4u) {
        ctx->pc = 0x243DD4u;
            // 0x243dd4: 0xe7a000cc  swc1        $f0, 0xCC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
        ctx->pc = 0x243DD8u;
        goto label_243dd8;
    }
    ctx->pc = 0x243DD0u;
    {
        const bool branch_taken_0x243dd0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x243DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243DD0u;
            // 0x243dd4: 0xe7a000cc  swc1        $f0, 0xCC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x243dd0) {
            ctx->pc = 0x243DE0u;
            goto label_243de0;
        }
    }
    ctx->pc = 0x243DD8u;
label_243dd8:
    // 0x243dd8: 0x10000003  b           . + 4 + (0x3 << 2)
label_243ddc:
    if (ctx->pc == 0x243DDCu) {
        ctx->pc = 0x243DE0u;
        goto label_243de0;
    }
    ctx->pc = 0x243DD8u;
    {
        const bool branch_taken_0x243dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243dd8) {
            ctx->pc = 0x243DE8u;
            goto label_243de8;
        }
    }
    ctx->pc = 0x243DE0u;
label_243de0:
    // 0x243de0: 0x46000a46  mov.s       $f9, $f1
    ctx->pc = 0x243de0u;
    ctx->f[9] = FPU_MOV_S(ctx->f[1]);
label_243de4:
    // 0x243de4: 0x0  nop
    ctx->pc = 0x243de4u;
    // NOP
label_243de8:
    // 0x243de8: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x243de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243dec:
    // 0x243dec: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x243decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243df0:
    // 0x243df0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x243df0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243df4:
    // 0x243df4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_243df8:
    if (ctx->pc == 0x243DF8u) {
        ctx->pc = 0x243DF8u;
            // 0x243df8: 0xe7a900d0  swc1        $f9, 0xD0($sp) (Delay Slot)
        { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
        ctx->pc = 0x243DFCu;
        goto label_243dfc;
    }
    ctx->pc = 0x243DF4u;
    {
        const bool branch_taken_0x243df4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x243DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243DF4u;
            // 0x243df8: 0xe7a900d0  swc1        $f9, 0xD0($sp) (Delay Slot)
        { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x243df4) {
            ctx->pc = 0x243E08u;
            goto label_243e08;
        }
    }
    ctx->pc = 0x243DFCu;
label_243dfc:
    // 0x243dfc: 0x10000004  b           . + 4 + (0x4 << 2)
label_243e00:
    if (ctx->pc == 0x243E00u) {
        ctx->pc = 0x243E04u;
        goto label_243e04;
    }
    ctx->pc = 0x243DFCu;
    {
        const bool branch_taken_0x243dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243dfc) {
            ctx->pc = 0x243E10u;
            goto label_243e10;
        }
    }
    ctx->pc = 0x243E04u;
label_243e04:
    // 0x243e04: 0x0  nop
    ctx->pc = 0x243e04u;
    // NOP
label_243e08:
    // 0x243e08: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x243e08u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_243e0c:
    // 0x243e0c: 0x0  nop
    ctx->pc = 0x243e0cu;
    // NOP
label_243e10:
    // 0x243e10: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x243e10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_243e14:
    // 0x243e14: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x243e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243e18:
    // 0x243e18: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x243e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243e1c:
    // 0x243e1c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x243e1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243e20:
    // 0x243e20: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_243e24:
    if (ctx->pc == 0x243E24u) {
        ctx->pc = 0x243E28u;
        goto label_243e28;
    }
    ctx->pc = 0x243E20u;
    {
        const bool branch_taken_0x243e20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x243e20) {
            ctx->pc = 0x243E30u;
            goto label_243e30;
        }
    }
    ctx->pc = 0x243E28u;
label_243e28:
    // 0x243e28: 0x10000003  b           . + 4 + (0x3 << 2)
label_243e2c:
    if (ctx->pc == 0x243E2Cu) {
        ctx->pc = 0x243E30u;
        goto label_243e30;
    }
    ctx->pc = 0x243E28u;
    {
        const bool branch_taken_0x243e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243e28) {
            ctx->pc = 0x243E38u;
            goto label_243e38;
        }
    }
    ctx->pc = 0x243E30u;
label_243e30:
    // 0x243e30: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x243e30u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_243e34:
    // 0x243e34: 0x0  nop
    ctx->pc = 0x243e34u;
    // NOP
label_243e38:
    // 0x243e38: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x243e38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_243e3c:
    // 0x243e3c: 0xc7a100dc  lwc1        $f1, 0xDC($sp)
    ctx->pc = 0x243e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243e40:
    // 0x243e40: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x243e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243e44:
    // 0x243e44: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x243e44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243e48:
    // 0x243e48: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_243e4c:
    if (ctx->pc == 0x243E4Cu) {
        ctx->pc = 0x243E50u;
        goto label_243e50;
    }
    ctx->pc = 0x243E48u;
    {
        const bool branch_taken_0x243e48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x243e48) {
            ctx->pc = 0x243E58u;
            goto label_243e58;
        }
    }
    ctx->pc = 0x243E50u;
label_243e50:
    // 0x243e50: 0x10000003  b           . + 4 + (0x3 << 2)
label_243e54:
    if (ctx->pc == 0x243E54u) {
        ctx->pc = 0x243E58u;
        goto label_243e58;
    }
    ctx->pc = 0x243E50u;
    {
        const bool branch_taken_0x243e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243e50) {
            ctx->pc = 0x243E60u;
            goto label_243e60;
        }
    }
    ctx->pc = 0x243E58u;
label_243e58:
    // 0x243e58: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x243e58u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_243e5c:
    // 0x243e5c: 0x0  nop
    ctx->pc = 0x243e5cu;
    // NOP
label_243e60:
    // 0x243e60: 0xc7a300c0  lwc1        $f3, 0xC0($sp)
    ctx->pc = 0x243e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_243e64:
    // 0x243e64: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x243e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243e68:
    // 0x243e68: 0xe7a100dc  swc1        $f1, 0xDC($sp)
    ctx->pc = 0x243e68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_243e6c:
    // 0x243e6c: 0xc7a200c4  lwc1        $f2, 0xC4($sp)
    ctx->pc = 0x243e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_243e70:
    // 0x243e70: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x243e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243e74:
    // 0x243e74: 0xc7a400e0  lwc1        $f4, 0xE0($sp)
    ctx->pc = 0x243e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_243e78:
    // 0x243e78: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x243e78u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
label_243e7c:
    // 0x243e7c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x243e7cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_243e80:
    // 0x243e80: 0xe7a300b0  swc1        $f3, 0xB0($sp)
    ctx->pc = 0x243e80u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_243e84:
    // 0x243e84: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x243e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_243e88:
    // 0x243e88: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x243e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243e8c:
    // 0x243e8c: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x243e8cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_243e90:
    // 0x243e90: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x243e90u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_243e94:
    // 0x243e94: 0xe7a200b4  swc1        $f2, 0xB4($sp)
    ctx->pc = 0x243e94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_243e98:
    // 0x243e98: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x243e98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243e9c:
    // 0x243e9c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_243ea0:
    if (ctx->pc == 0x243EA0u) {
        ctx->pc = 0x243EA0u;
            // 0x243ea0: 0xe7a100b8  swc1        $f1, 0xB8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
        ctx->pc = 0x243EA4u;
        goto label_243ea4;
    }
    ctx->pc = 0x243E9Cu;
    {
        const bool branch_taken_0x243e9c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x243EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243E9Cu;
            // 0x243ea0: 0xe7a100b8  swc1        $f1, 0xB8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x243e9c) {
            ctx->pc = 0x243EB0u;
            goto label_243eb0;
        }
    }
    ctx->pc = 0x243EA4u;
label_243ea4:
    // 0x243ea4: 0x10000004  b           . + 4 + (0x4 << 2)
label_243ea8:
    if (ctx->pc == 0x243EA8u) {
        ctx->pc = 0x243EACu;
        goto label_243eac;
    }
    ctx->pc = 0x243EA4u;
    {
        const bool branch_taken_0x243ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243ea4) {
            ctx->pc = 0x243EB8u;
            goto label_243eb8;
        }
    }
    ctx->pc = 0x243EACu;
label_243eac:
    // 0x243eac: 0x0  nop
    ctx->pc = 0x243eacu;
    // NOP
label_243eb0:
    // 0x243eb0: 0x46000106  mov.s       $f4, $f0
    ctx->pc = 0x243eb0u;
    ctx->f[4] = FPU_MOV_S(ctx->f[0]);
label_243eb4:
    // 0x243eb4: 0x0  nop
    ctx->pc = 0x243eb4u;
    // NOP
label_243eb8:
    // 0x243eb8: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x243eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243ebc:
    // 0x243ebc: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x243ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243ec0:
    // 0x243ec0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x243ec0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243ec4:
    // 0x243ec4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_243ec8:
    if (ctx->pc == 0x243EC8u) {
        ctx->pc = 0x243EC8u;
            // 0x243ec8: 0xe7a400e0  swc1        $f4, 0xE0($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
        ctx->pc = 0x243ECCu;
        goto label_243ecc;
    }
    ctx->pc = 0x243EC4u;
    {
        const bool branch_taken_0x243ec4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x243EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243EC4u;
            // 0x243ec8: 0xe7a400e0  swc1        $f4, 0xE0($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x243ec4) {
            ctx->pc = 0x243ED8u;
            goto label_243ed8;
        }
    }
    ctx->pc = 0x243ECCu;
label_243ecc:
    // 0x243ecc: 0x10000004  b           . + 4 + (0x4 << 2)
label_243ed0:
    if (ctx->pc == 0x243ED0u) {
        ctx->pc = 0x243ED4u;
        goto label_243ed4;
    }
    ctx->pc = 0x243ECCu;
    {
        const bool branch_taken_0x243ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243ecc) {
            ctx->pc = 0x243EE0u;
            goto label_243ee0;
        }
    }
    ctx->pc = 0x243ED4u;
label_243ed4:
    // 0x243ed4: 0x0  nop
    ctx->pc = 0x243ed4u;
    // NOP
label_243ed8:
    // 0x243ed8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x243ed8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_243edc:
    // 0x243edc: 0x0  nop
    ctx->pc = 0x243edcu;
    // NOP
label_243ee0:
    // 0x243ee0: 0xe7a100e4  swc1        $f1, 0xE4($sp)
    ctx->pc = 0x243ee0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_243ee4:
    // 0x243ee4: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x243ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243ee8:
    // 0x243ee8: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x243ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243eec:
    // 0x243eec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x243eecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243ef0:
    // 0x243ef0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_243ef4:
    if (ctx->pc == 0x243EF4u) {
        ctx->pc = 0x243EF8u;
        goto label_243ef8;
    }
    ctx->pc = 0x243EF0u;
    {
        const bool branch_taken_0x243ef0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x243ef0) {
            ctx->pc = 0x243F00u;
            goto label_243f00;
        }
    }
    ctx->pc = 0x243EF8u;
label_243ef8:
    // 0x243ef8: 0x10000003  b           . + 4 + (0x3 << 2)
label_243efc:
    if (ctx->pc == 0x243EFCu) {
        ctx->pc = 0x243F00u;
        goto label_243f00;
    }
    ctx->pc = 0x243EF8u;
    {
        const bool branch_taken_0x243ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243ef8) {
            ctx->pc = 0x243F08u;
            goto label_243f08;
        }
    }
    ctx->pc = 0x243F00u;
label_243f00:
    // 0x243f00: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x243f00u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_243f04:
    // 0x243f04: 0x0  nop
    ctx->pc = 0x243f04u;
    // NOP
label_243f08:
    // 0x243f08: 0xe7a100e8  swc1        $f1, 0xE8($sp)
    ctx->pc = 0x243f08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_243f0c:
    // 0x243f0c: 0xc7a100ec  lwc1        $f1, 0xEC($sp)
    ctx->pc = 0x243f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243f10:
    // 0x243f10: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x243f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243f14:
    // 0x243f14: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x243f14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243f18:
    // 0x243f18: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_243f1c:
    if (ctx->pc == 0x243F1Cu) {
        ctx->pc = 0x243F20u;
        goto label_243f20;
    }
    ctx->pc = 0x243F18u;
    {
        const bool branch_taken_0x243f18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x243f18) {
            ctx->pc = 0x243F28u;
            goto label_243f28;
        }
    }
    ctx->pc = 0x243F20u;
label_243f20:
    // 0x243f20: 0x10000003  b           . + 4 + (0x3 << 2)
label_243f24:
    if (ctx->pc == 0x243F24u) {
        ctx->pc = 0x243F28u;
        goto label_243f28;
    }
    ctx->pc = 0x243F20u;
    {
        const bool branch_taken_0x243f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243f20) {
            ctx->pc = 0x243F30u;
            goto label_243f30;
        }
    }
    ctx->pc = 0x243F28u;
label_243f28:
    // 0x243f28: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x243f28u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_243f2c:
    // 0x243f2c: 0x0  nop
    ctx->pc = 0x243f2cu;
    // NOP
label_243f30:
    // 0x243f30: 0xe7a100ec  swc1        $f1, 0xEC($sp)
    ctx->pc = 0x243f30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_243f34:
    // 0x243f34: 0xc7a501e0  lwc1        $f5, 0x1E0($sp)
    ctx->pc = 0x243f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_243f38:
    // 0x243f38: 0xc7a400e0  lwc1        $f4, 0xE0($sp)
    ctx->pc = 0x243f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_243f3c:
    // 0x243f3c: 0xc7a301e4  lwc1        $f3, 0x1E4($sp)
    ctx->pc = 0x243f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_243f40:
    // 0x243f40: 0xc7a200e4  lwc1        $f2, 0xE4($sp)
    ctx->pc = 0x243f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_243f44:
    // 0x243f44: 0xc7a101e8  lwc1        $f1, 0x1E8($sp)
    ctx->pc = 0x243f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243f48:
    // 0x243f48: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x243f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243f4c:
    // 0x243f4c: 0xc7aa01ec  lwc1        $f10, 0x1EC($sp)
    ctx->pc = 0x243f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_243f50:
    // 0x243f50: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x243f50u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
label_243f54:
    // 0x243f54: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x243f54u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_243f58:
    // 0x243f58: 0x46000ac0  add.s       $f11, $f1, $f0
    ctx->pc = 0x243f58u;
    ctx->f[11] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_243f5c:
    // 0x243f5c: 0xe7a401e0  swc1        $f4, 0x1E0($sp)
    ctx->pc = 0x243f5cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
label_243f60:
    // 0x243f60: 0xe7a201e4  swc1        $f2, 0x1E4($sp)
    ctx->pc = 0x243f60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 484), bits); }
label_243f64:
    // 0x243f64: 0xc7a900ec  lwc1        $f9, 0xEC($sp)
    ctx->pc = 0x243f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_243f68:
    // 0x243f68: 0xc7a801f0  lwc1        $f8, 0x1F0($sp)
    ctx->pc = 0x243f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_243f6c:
    // 0x243f6c: 0xc7a700d0  lwc1        $f7, 0xD0($sp)
    ctx->pc = 0x243f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_243f70:
    // 0x243f70: 0xc7a601f4  lwc1        $f6, 0x1F4($sp)
    ctx->pc = 0x243f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_243f74:
    // 0x243f74: 0xc7a500d4  lwc1        $f5, 0xD4($sp)
    ctx->pc = 0x243f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_243f78:
    // 0x243f78: 0xc7a401f8  lwc1        $f4, 0x1F8($sp)
    ctx->pc = 0x243f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_243f7c:
    // 0x243f7c: 0xc7a300d8  lwc1        $f3, 0xD8($sp)
    ctx->pc = 0x243f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_243f80:
    // 0x243f80: 0x46095240  add.s       $f9, $f10, $f9
    ctx->pc = 0x243f80u;
    ctx->f[9] = FPU_ADD_S(ctx->f[10], ctx->f[9]);
label_243f84:
    // 0x243f84: 0x460741c0  add.s       $f7, $f8, $f7
    ctx->pc = 0x243f84u;
    ctx->f[7] = FPU_ADD_S(ctx->f[8], ctx->f[7]);
label_243f88:
    // 0x243f88: 0x46053140  add.s       $f5, $f6, $f5
    ctx->pc = 0x243f88u;
    ctx->f[5] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
label_243f8c:
    // 0x243f8c: 0x460320c0  add.s       $f3, $f4, $f3
    ctx->pc = 0x243f8cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
label_243f90:
    // 0x243f90: 0xc7a201fc  lwc1        $f2, 0x1FC($sp)
    ctx->pc = 0x243f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_243f94:
    // 0x243f94: 0xc7a100dc  lwc1        $f1, 0xDC($sp)
    ctx->pc = 0x243f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243f98:
    // 0x243f98: 0xc7a001e0  lwc1        $f0, 0x1E0($sp)
    ctx->pc = 0x243f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243f9c:
    // 0x243f9c: 0xe7ab01e8  swc1        $f11, 0x1E8($sp)
    ctx->pc = 0x243f9cu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
label_243fa0:
    // 0x243fa0: 0xe7a901ec  swc1        $f9, 0x1EC($sp)
    ctx->pc = 0x243fa0u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 492), bits); }
label_243fa4:
    // 0x243fa4: 0xe7a701f0  swc1        $f7, 0x1F0($sp)
    ctx->pc = 0x243fa4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
label_243fa8:
    // 0x243fa8: 0xe7a501f4  swc1        $f5, 0x1F4($sp)
    ctx->pc = 0x243fa8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 500), bits); }
label_243fac:
    // 0x243fac: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x243facu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_243fb0:
    // 0x243fb0: 0xe7a301f8  swc1        $f3, 0x1F8($sp)
    ctx->pc = 0x243fb0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
label_243fb4:
    // 0x243fb4: 0xe7a101fc  swc1        $f1, 0x1FC($sp)
    ctx->pc = 0x243fb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 508), bits); }
label_243fb8:
    // 0x243fb8: 0xe4000000  swc1        $f0, 0x0($zero)
    ctx->pc = 0x243fb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 0), 0), bits); }
label_243fbc:
    // 0x243fbc: 0xc7a001e4  lwc1        $f0, 0x1E4($sp)
    ctx->pc = 0x243fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243fc0:
    // 0x243fc0: 0xe4000004  swc1        $f0, 0x4($zero)
    ctx->pc = 0x243fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 0), 4), bits); }
label_243fc4:
    // 0x243fc4: 0xc7a001e8  lwc1        $f0, 0x1E8($sp)
    ctx->pc = 0x243fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243fc8:
    // 0x243fc8: 0xe4000008  swc1        $f0, 0x8($zero)
    ctx->pc = 0x243fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 0), 8), bits); }
label_243fcc:
    // 0x243fcc: 0xc7a001ec  lwc1        $f0, 0x1EC($sp)
    ctx->pc = 0x243fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243fd0:
    // 0x243fd0: 0xe400000c  swc1        $f0, 0xC($zero)
    ctx->pc = 0x243fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 0), 12), bits); }
label_243fd4:
    // 0x243fd4: 0xc7a001f0  lwc1        $f0, 0x1F0($sp)
    ctx->pc = 0x243fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243fd8:
    // 0x243fd8: 0xe4000010  swc1        $f0, 0x10($zero)
    ctx->pc = 0x243fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 0), 16), bits); }
label_243fdc:
    // 0x243fdc: 0xc7a001f4  lwc1        $f0, 0x1F4($sp)
    ctx->pc = 0x243fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243fe0:
    // 0x243fe0: 0xe4000014  swc1        $f0, 0x14($zero)
    ctx->pc = 0x243fe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 0), 20), bits); }
label_243fe4:
    // 0x243fe4: 0xc7a001f8  lwc1        $f0, 0x1F8($sp)
    ctx->pc = 0x243fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243fe8:
    // 0x243fe8: 0xe4000018  swc1        $f0, 0x18($zero)
    ctx->pc = 0x243fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 0), 24), bits); }
label_243fec:
    // 0x243fec: 0xc7a001fc  lwc1        $f0, 0x1FC($sp)
    ctx->pc = 0x243fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243ff0:
    // 0x243ff0: 0xe400001c  swc1        $f0, 0x1C($zero)
    ctx->pc = 0x243ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 0), 28), bits); }
label_243ff4:
    // 0x243ff4: 0x0  nop
    ctx->pc = 0x243ff4u;
    // NOP
label_243ff8:
    // 0x243ff8: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x243ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_243ffc:
    // 0x243ffc: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x243ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_244000:
    // 0x244000: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x244000u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_244004:
    // 0x244004: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x244004u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_244008:
    // 0x244008: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x244008u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_24400c:
    // 0x24400c: 0x320f809  jalr        $t9
label_244010:
    if (ctx->pc == 0x244010u) {
        ctx->pc = 0x244010u;
            // 0x244010: 0x240701ff  addiu       $a3, $zero, 0x1FF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
        ctx->pc = 0x244014u;
        goto label_244014;
    }
    ctx->pc = 0x24400Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x244014u);
        ctx->pc = 0x244010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24400Cu;
            // 0x244010: 0x240701ff  addiu       $a3, $zero, 0x1FF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x244014u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x244014u; }
            if (ctx->pc != 0x244014u) { return; }
        }
        }
    }
    ctx->pc = 0x244014u;
label_244014:
    // 0x244014: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x244014u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_244018:
    // 0x244018: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x244018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_24401c:
    // 0x24401c: 0xc07a348  jal         func_1E8D20
label_244020:
    if (ctx->pc == 0x244020u) {
        ctx->pc = 0x244020u;
            // 0x244020: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x244024u;
        goto label_244024;
    }
    ctx->pc = 0x24401Cu;
    SET_GPR_U32(ctx, 31, 0x244024u);
    ctx->pc = 0x244020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24401Cu;
            // 0x244020: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8D20u;
    if (runtime->hasFunction(0x1E8D20u)) {
        auto targetFn = runtime->lookupFunction(0x1E8D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244024u; }
        if (ctx->pc != 0x244024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E8D20_0x1e8d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244024u; }
        if (ctx->pc != 0x244024u) { return; }
    }
    ctx->pc = 0x244024u;
label_244024:
    // 0x244024: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x244024u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_244028:
    // 0x244028: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x244028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_24402c:
    // 0x24402c: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x24402cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_244030:
    // 0x244030: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x244030u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_244034:
    // 0x244034: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x244034u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_244038:
    // 0x244038: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x244038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_24403c:
    // 0x24403c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x24403cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_244040:
    // 0x244040: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x244040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_244044:
    // 0x244044: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x244044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_244048:
    // 0x244048: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_24404c:
    if (ctx->pc == 0x24404Cu) {
        ctx->pc = 0x244050u;
        goto label_244050;
    }
    ctx->pc = 0x244048u;
    {
        const bool branch_taken_0x244048 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x244048) {
            ctx->pc = 0x244058u;
            goto label_244058;
        }
    }
    ctx->pc = 0x244050u;
label_244050:
    // 0x244050: 0x10000007  b           . + 4 + (0x7 << 2)
label_244054:
    if (ctx->pc == 0x244054u) {
        ctx->pc = 0x244058u;
        goto label_244058;
    }
    ctx->pc = 0x244050u;
    {
        const bool branch_taken_0x244050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x244050) {
            ctx->pc = 0x244070u;
            goto label_244070;
        }
    }
    ctx->pc = 0x244058u;
label_244058:
    // 0x244058: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x244058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_24405c:
    // 0x24405c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_244060:
    if (ctx->pc == 0x244060u) {
        ctx->pc = 0x244064u;
        goto label_244064;
    }
    ctx->pc = 0x24405Cu;
    {
        const bool branch_taken_0x24405c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24405c) {
            ctx->pc = 0x244068u;
            goto label_244068;
        }
    }
    ctx->pc = 0x244064u;
label_244064:
    // 0x244064: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x244064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_244068:
    // 0x244068: 0x10000005  b           . + 4 + (0x5 << 2)
label_24406c:
    if (ctx->pc == 0x24406Cu) {
        ctx->pc = 0x244070u;
        goto label_244070;
    }
    ctx->pc = 0x244068u;
    {
        const bool branch_taken_0x244068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x244068) {
            ctx->pc = 0x244080u;
            goto label_244080;
        }
    }
    ctx->pc = 0x244070u;
label_244070:
    // 0x244070: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x244070u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_244074:
    // 0x244074: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x244074u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_244078:
    // 0x244078: 0x320f809  jalr        $t9
label_24407c:
    if (ctx->pc == 0x24407Cu) {
        ctx->pc = 0x244080u;
        goto label_244080;
    }
    ctx->pc = 0x244078u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x244080u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x244080u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x244080u; }
            if (ctx->pc != 0x244080u) { return; }
        }
        }
    }
    ctx->pc = 0x244080u;
label_244080:
    // 0x244080: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x244080u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
label_244084:
    // 0x244084: 0x24c6ea60  addiu       $a2, $a2, -0x15A0
    ctx->pc = 0x244084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
label_244088:
    // 0x244088: 0x27a40308  addiu       $a0, $sp, 0x308
    ctx->pc = 0x244088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 776));
label_24408c:
    // 0x24408c: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x24408cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_244090:
    // 0x244090: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x244090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_244094:
    // 0x244094: 0x65182b  sltu        $v1, $v1, $a1
    ctx->pc = 0x244094u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_244098:
    // 0x244098: 0xa3a30308  sb          $v1, 0x308($sp)
    ctx->pc = 0x244098u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 776), (uint8_t)GPR_U32(ctx, 3));
label_24409c:
    // 0x24409c: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x24409cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2440a0:
    // 0x2440a0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_2440a4:
    if (ctx->pc == 0x2440A4u) {
        ctx->pc = 0x2440A8u;
        goto label_2440a8;
    }
    ctx->pc = 0x2440A0u;
    {
        const bool branch_taken_0x2440a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2440a0) {
            ctx->pc = 0x2440D0u;
            goto label_2440d0;
        }
    }
    ctx->pc = 0x2440A8u;
label_2440a8:
    // 0x2440a8: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x2440a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_2440ac:
    // 0x2440ac: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2440acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_2440b0:
    // 0x2440b0: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x2440b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_2440b4:
    // 0x2440b4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2440b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_2440b8:
    // 0x2440b8: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2440b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_2440bc:
    // 0x2440bc: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x2440bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_2440c0:
    // 0x2440c0: 0x4004c803  .word       0x4004C803                   # mfc0        $a0, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2440c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ctx->cop0_perf);
label_2440c4:
    // 0x2440c4: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x2440c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_2440c8:
    // 0x2440c8: 0xaca40008  sw          $a0, 0x8($a1)
    ctx->pc = 0x2440c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 4));
label_2440cc:
    // 0x2440cc: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x2440ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_2440d0:
    // 0x2440d0: 0x1600000d  bnez        $s0, . + 4 + (0xD << 2)
label_2440d4:
    if (ctx->pc == 0x2440D4u) {
        ctx->pc = 0x2440D8u;
        goto label_2440d8;
    }
    ctx->pc = 0x2440D0u;
    {
        const bool branch_taken_0x2440d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2440d0) {
            ctx->pc = 0x244108u;
            goto label_244108;
        }
    }
    ctx->pc = 0x2440D8u;
label_2440d8:
    // 0x2440d8: 0x8e830054  lw          $v1, 0x54($s4)
    ctx->pc = 0x2440d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_2440dc:
    // 0x2440dc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2440dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2440e0:
    // 0x2440e0: 0x8fa802d0  lw          $t0, 0x2D0($sp)
    ctx->pc = 0x2440e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
label_2440e4:
    // 0x2440e4: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x2440e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2440e8:
    // 0x2440e8: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x2440e8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2440ec:
    // 0x2440ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2440ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2440f0:
    // 0x2440f0: 0x27a60260  addiu       $a2, $sp, 0x260
    ctx->pc = 0x2440f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_2440f4:
    // 0x2440f4: 0xc091cc4  jal         func_247310
label_2440f8:
    if (ctx->pc == 0x2440F8u) {
        ctx->pc = 0x2440F8u;
            // 0x2440f8: 0x2632821  addu        $a1, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->pc = 0x2440FCu;
        goto label_2440fc;
    }
    ctx->pc = 0x2440F4u;
    SET_GPR_U32(ctx, 31, 0x2440FCu);
    ctx->pc = 0x2440F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2440F4u;
            // 0x2440f8: 0x2632821  addu        $a1, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x247310u;
    if (runtime->hasFunction(0x247310u)) {
        auto targetFn = runtime->lookupFunction(0x247310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2440FCu; }
        if (ctx->pc != 0x2440FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00247310_0x247310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2440FCu; }
        if (ctx->pc != 0x2440FCu) { return; }
    }
    ctx->pc = 0x2440FCu;
label_2440fc:
    // 0x2440fc: 0x1000000c  b           . + 4 + (0xC << 2)
label_244100:
    if (ctx->pc == 0x244100u) {
        ctx->pc = 0x244104u;
        goto label_244104;
    }
    ctx->pc = 0x2440FCu;
    {
        const bool branch_taken_0x2440fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2440fc) {
            ctx->pc = 0x244130u;
            goto label_244130;
        }
    }
    ctx->pc = 0x244104u;
label_244104:
    // 0x244104: 0x0  nop
    ctx->pc = 0x244104u;
    // NOP
label_244108:
    // 0x244108: 0x8e830054  lw          $v1, 0x54($s4)
    ctx->pc = 0x244108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
label_24410c:
    // 0x24410c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x24410cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_244110:
    // 0x244110: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x244110u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_244114:
    // 0x244114: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x244114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_244118:
    // 0x244118: 0x27a60260  addiu       $a2, $sp, 0x260
    ctx->pc = 0x244118u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_24411c:
    // 0x24411c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x24411cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_244120:
    // 0x244120: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x244120u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_244124:
    // 0x244124: 0xc091cc4  jal         func_247310
label_244128:
    if (ctx->pc == 0x244128u) {
        ctx->pc = 0x244128u;
            // 0x244128: 0x2632821  addu        $a1, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->pc = 0x24412Cu;
        goto label_24412c;
    }
    ctx->pc = 0x244124u;
    SET_GPR_U32(ctx, 31, 0x24412Cu);
    ctx->pc = 0x244128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244124u;
            // 0x244128: 0x2632821  addu        $a1, $s3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x247310u;
    if (runtime->hasFunction(0x247310u)) {
        auto targetFn = runtime->lookupFunction(0x247310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24412Cu; }
        if (ctx->pc != 0x24412Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00247310_0x247310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24412Cu; }
        if (ctx->pc != 0x24412Cu) { return; }
    }
    ctx->pc = 0x24412Cu;
label_24412c:
    // 0x24412c: 0x0  nop
    ctx->pc = 0x24412cu;
    // NOP
label_244130:
    // 0x244130: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x244130u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_244134:
    // 0x244134: 0x24a5ea60  addiu       $a1, $a1, -0x15A0
    ctx->pc = 0x244134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
label_244138:
    // 0x244138: 0x27a30304  addiu       $v1, $sp, 0x304
    ctx->pc = 0x244138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 772));
label_24413c:
    // 0x24413c: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x24413cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_244140:
    // 0x244140: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x244140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_244144:
    // 0x244144: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x244144u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_244148:
    // 0x244148: 0xa3a20304  sb          $v0, 0x304($sp)
    ctx->pc = 0x244148u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 772), (uint8_t)GPR_U32(ctx, 2));
label_24414c:
    // 0x24414c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x24414cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_244150:
    // 0x244150: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_244154:
    if (ctx->pc == 0x244154u) {
        ctx->pc = 0x244158u;
        goto label_244158;
    }
    ctx->pc = 0x244150u;
    {
        const bool branch_taken_0x244150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x244150) {
            ctx->pc = 0x244180u;
            goto label_244180;
        }
    }
    ctx->pc = 0x244158u;
label_244158:
    // 0x244158: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x244158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_24415c:
    // 0x24415c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x24415cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_244160:
    // 0x244160: 0x2442cec0  addiu       $v0, $v0, -0x3140
    ctx->pc = 0x244160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954688));
label_244164:
    // 0x244164: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x244164u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_244168:
    // 0x244168: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x244168u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_24416c:
    // 0x24416c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x24416cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_244170:
    // 0x244170: 0x4003c803  .word       0x4003C803                   # mfc0        $v1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x244170u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_244174:
    // 0x244174: 0x2482000c  addiu       $v0, $a0, 0xC
    ctx->pc = 0x244174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_244178:
    // 0x244178: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x244178u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_24417c:
    // 0x24417c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x24417cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_244180:
    // 0x244180: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x244180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_244184:
    // 0x244184: 0x8fa502d0  lw          $a1, 0x2D0($sp)
    ctx->pc = 0x244184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
label_244188:
    // 0x244188: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x244188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_24418c:
    // 0x24418c: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x24418cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_244190:
    // 0x244190: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x244190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_244194:
    // 0x244194: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
label_244198:
    if (ctx->pc == 0x244198u) {
        ctx->pc = 0x244198u;
            // 0x244198: 0x26700010  addiu       $s0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x24419Cu;
        goto label_24419c;
    }
    ctx->pc = 0x244194u;
    {
        const bool branch_taken_0x244194 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x244198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244194u;
            // 0x244198: 0x26700010  addiu       $s0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244194) {
            ctx->pc = 0x2441B0u;
            goto label_2441b0;
        }
    }
    ctx->pc = 0x24419Cu;
label_24419c:
    // 0x24419c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x24419cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2441a0:
    // 0x2441a0: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2441a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2441a4:
    // 0x2441a4: 0x320f809  jalr        $t9
label_2441a8:
    if (ctx->pc == 0x2441A8u) {
        ctx->pc = 0x2441ACu;
        goto label_2441ac;
    }
    ctx->pc = 0x2441A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2441ACu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2441ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2441ACu; }
            if (ctx->pc != 0x2441ACu) { return; }
        }
        }
    }
    ctx->pc = 0x2441ACu;
label_2441ac:
    // 0x2441ac: 0x0  nop
    ctx->pc = 0x2441acu;
    // NOP
label_2441b0:
    // 0x2441b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2441b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2441b4:
    // 0x2441b4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2441b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2441b8:
    // 0x2441b8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2441b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2441bc:
    // 0x2441bc: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2441bcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2441c0:
    // 0x2441c0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2441c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2441c4:
    // 0x2441c4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2441c4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2441c8:
    // 0x2441c8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2441c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2441cc:
    // 0x2441cc: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2441ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2441d0:
    // 0x2441d0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2441d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2441d4:
    // 0x2441d4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2441d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2441d8:
    // 0x2441d8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2441d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2441dc:
    // 0x2441dc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2441dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2441e0:
    // 0x2441e0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2441e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2441e4:
    // 0x2441e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2441e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2441e8:
    // 0x2441e8: 0x3e00008  jr          $ra
label_2441ec:
    if (ctx->pc == 0x2441ECu) {
        ctx->pc = 0x2441ECu;
            // 0x2441ec: 0x27bd0310  addiu       $sp, $sp, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
        ctx->pc = 0x2441F0u;
        goto label_2441f0;
    }
    ctx->pc = 0x2441E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2441ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2441E8u;
            // 0x2441ec: 0x27bd0310  addiu       $sp, $sp, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2441F0u;
label_2441f0:
    // 0x2441f0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2441f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_2441f4:
    // 0x2441f4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2441f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2441f8:
    // 0x2441f8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2441f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2441fc:
    // 0x2441fc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2441fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_244200:
    // 0x244200: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x244200u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_244204:
    // 0x244204: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x244204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_244208:
    // 0x244208: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x244208u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_24420c:
    // 0x24420c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x24420cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_244210:
    // 0x244210: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x244210u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_244214:
    // 0x244214: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x244214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_244218:
    // 0x244218: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x244218u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_24421c:
    // 0x24421c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x24421cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_244220:
    // 0x244220: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x244220u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_244224:
    // 0x244224: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x244224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_244228:
    // 0x244228: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x244228u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24422c:
    // 0x24422c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x24422cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_244230:
    // 0x244230: 0x320f809  jalr        $t9
label_244234:
    if (ctx->pc == 0x244234u) {
        ctx->pc = 0x244234u;
            // 0x244234: 0x140802d  daddu       $s0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x244238u;
        goto label_244238;
    }
    ctx->pc = 0x244230u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x244238u);
        ctx->pc = 0x244234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244230u;
            // 0x244234: 0x140802d  daddu       $s0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x244238u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x244238u; }
            if (ctx->pc != 0x244238u) { return; }
        }
        }
    }
    ctx->pc = 0x244238u;
label_244238:
    // 0x244238: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x244238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_24423c:
    // 0x24423c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x24423cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_244240:
    // 0x244240: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x244240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_244244:
    // 0x244244: 0xafb40070  sw          $s4, 0x70($sp)
    ctx->pc = 0x244244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 20));
label_244248:
    // 0x244248: 0xafb30074  sw          $s3, 0x74($sp)
    ctx->pc = 0x244248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 19));
label_24424c:
    // 0x24424c: 0xafb2007c  sw          $s2, 0x7C($sp)
    ctx->pc = 0x24424cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 18));
label_244250:
    // 0x244250: 0xafb10080  sw          $s1, 0x80($sp)
    ctx->pc = 0x244250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 17));
label_244254:
    // 0x244254: 0xc091c60  jal         func_247180
label_244258:
    if (ctx->pc == 0x244258u) {
        ctx->pc = 0x244258u;
            // 0x244258: 0xafb00084  sw          $s0, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 16));
        ctx->pc = 0x24425Cu;
        goto label_24425c;
    }
    ctx->pc = 0x244254u;
    SET_GPR_U32(ctx, 31, 0x24425Cu);
    ctx->pc = 0x244258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244254u;
            // 0x244258: 0xafb00084  sw          $s0, 0x84($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x247180u;
    if (runtime->hasFunction(0x247180u)) {
        auto targetFn = runtime->lookupFunction(0x247180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24425Cu; }
        if (ctx->pc != 0x24425Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00247180_0x247180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24425Cu; }
        if (ctx->pc != 0x24425Cu) { return; }
    }
    ctx->pc = 0x24425Cu;
label_24425c:
    // 0x24425c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x24425cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_244260:
    // 0x244260: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x244260u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_244264:
    // 0x244264: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x244264u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_244268:
    // 0x244268: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x244268u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_24426c:
    // 0x24426c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24426cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_244270:
    // 0x244270: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x244270u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_244274:
    // 0x244274: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x244274u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_244278:
    // 0x244278: 0x3e00008  jr          $ra
label_24427c:
    if (ctx->pc == 0x24427Cu) {
        ctx->pc = 0x24427Cu;
            // 0x24427c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x244280u;
        goto label_244280;
    }
    ctx->pc = 0x244278u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24427Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244278u;
            // 0x24427c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x244280u;
label_244280:
    // 0x244280: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x244280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_244284:
    // 0x244284: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x244284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_244288:
    // 0x244288: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x244288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_24428c:
    // 0x24428c: 0xc091720  jal         func_245C80
label_244290:
    if (ctx->pc == 0x244290u) {
        ctx->pc = 0x244290u;
            // 0x244290: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x244294u;
        goto label_244294;
    }
    ctx->pc = 0x24428Cu;
    SET_GPR_U32(ctx, 31, 0x244294u);
    ctx->pc = 0x244290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24428Cu;
            // 0x244290: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x245C80u;
    if (runtime->hasFunction(0x245C80u)) {
        auto targetFn = runtime->lookupFunction(0x245C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244294u; }
        if (ctx->pc != 0x244294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00245C80_0x245c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244294u; }
        if (ctx->pc != 0x244294u) { return; }
    }
    ctx->pc = 0x244294u;
label_244294:
    // 0x244294: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x244294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_244298:
    // 0x244298: 0x3e00008  jr          $ra
label_24429c:
    if (ctx->pc == 0x24429Cu) {
        ctx->pc = 0x24429Cu;
            // 0x24429c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2442A0u;
        goto label_2442a0;
    }
    ctx->pc = 0x244298u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24429Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244298u;
            // 0x24429c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2442A0u;
label_2442a0:
    // 0x2442a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2442a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2442a4:
    // 0x2442a4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2442a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2442a8:
    // 0x2442a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2442a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2442ac:
    // 0x2442ac: 0xc091780  jal         func_245E00
label_2442b0:
    if (ctx->pc == 0x2442B0u) {
        ctx->pc = 0x2442B0u;
            // 0x2442b0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2442B4u;
        goto label_2442b4;
    }
    ctx->pc = 0x2442ACu;
    SET_GPR_U32(ctx, 31, 0x2442B4u);
    ctx->pc = 0x2442B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2442ACu;
            // 0x2442b0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x245E00u;
    if (runtime->hasFunction(0x245E00u)) {
        auto targetFn = runtime->lookupFunction(0x245E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2442B4u; }
        if (ctx->pc != 0x2442B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00245E00_0x245e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2442B4u; }
        if (ctx->pc != 0x2442B4u) { return; }
    }
    ctx->pc = 0x2442B4u;
label_2442b4:
    // 0x2442b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2442b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2442b8:
    // 0x2442b8: 0x3e00008  jr          $ra
label_2442bc:
    if (ctx->pc == 0x2442BCu) {
        ctx->pc = 0x2442BCu;
            // 0x2442bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2442C0u;
        goto label_fallthrough_0x2442b8;
    }
    ctx->pc = 0x2442B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2442BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2442B8u;
            // 0x2442bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2442b8:
    ctx->pc = 0x2442C0u;
}
