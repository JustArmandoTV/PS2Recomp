#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00351010
// Address: 0x351010 - 0x351a60
void sub_00351010_0x351010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00351010_0x351010");
#endif

    switch (ctx->pc) {
        case 0x351010u: goto label_351010;
        case 0x351014u: goto label_351014;
        case 0x351018u: goto label_351018;
        case 0x35101cu: goto label_35101c;
        case 0x351020u: goto label_351020;
        case 0x351024u: goto label_351024;
        case 0x351028u: goto label_351028;
        case 0x35102cu: goto label_35102c;
        case 0x351030u: goto label_351030;
        case 0x351034u: goto label_351034;
        case 0x351038u: goto label_351038;
        case 0x35103cu: goto label_35103c;
        case 0x351040u: goto label_351040;
        case 0x351044u: goto label_351044;
        case 0x351048u: goto label_351048;
        case 0x35104cu: goto label_35104c;
        case 0x351050u: goto label_351050;
        case 0x351054u: goto label_351054;
        case 0x351058u: goto label_351058;
        case 0x35105cu: goto label_35105c;
        case 0x351060u: goto label_351060;
        case 0x351064u: goto label_351064;
        case 0x351068u: goto label_351068;
        case 0x35106cu: goto label_35106c;
        case 0x351070u: goto label_351070;
        case 0x351074u: goto label_351074;
        case 0x351078u: goto label_351078;
        case 0x35107cu: goto label_35107c;
        case 0x351080u: goto label_351080;
        case 0x351084u: goto label_351084;
        case 0x351088u: goto label_351088;
        case 0x35108cu: goto label_35108c;
        case 0x351090u: goto label_351090;
        case 0x351094u: goto label_351094;
        case 0x351098u: goto label_351098;
        case 0x35109cu: goto label_35109c;
        case 0x3510a0u: goto label_3510a0;
        case 0x3510a4u: goto label_3510a4;
        case 0x3510a8u: goto label_3510a8;
        case 0x3510acu: goto label_3510ac;
        case 0x3510b0u: goto label_3510b0;
        case 0x3510b4u: goto label_3510b4;
        case 0x3510b8u: goto label_3510b8;
        case 0x3510bcu: goto label_3510bc;
        case 0x3510c0u: goto label_3510c0;
        case 0x3510c4u: goto label_3510c4;
        case 0x3510c8u: goto label_3510c8;
        case 0x3510ccu: goto label_3510cc;
        case 0x3510d0u: goto label_3510d0;
        case 0x3510d4u: goto label_3510d4;
        case 0x3510d8u: goto label_3510d8;
        case 0x3510dcu: goto label_3510dc;
        case 0x3510e0u: goto label_3510e0;
        case 0x3510e4u: goto label_3510e4;
        case 0x3510e8u: goto label_3510e8;
        case 0x3510ecu: goto label_3510ec;
        case 0x3510f0u: goto label_3510f0;
        case 0x3510f4u: goto label_3510f4;
        case 0x3510f8u: goto label_3510f8;
        case 0x3510fcu: goto label_3510fc;
        case 0x351100u: goto label_351100;
        case 0x351104u: goto label_351104;
        case 0x351108u: goto label_351108;
        case 0x35110cu: goto label_35110c;
        case 0x351110u: goto label_351110;
        case 0x351114u: goto label_351114;
        case 0x351118u: goto label_351118;
        case 0x35111cu: goto label_35111c;
        case 0x351120u: goto label_351120;
        case 0x351124u: goto label_351124;
        case 0x351128u: goto label_351128;
        case 0x35112cu: goto label_35112c;
        case 0x351130u: goto label_351130;
        case 0x351134u: goto label_351134;
        case 0x351138u: goto label_351138;
        case 0x35113cu: goto label_35113c;
        case 0x351140u: goto label_351140;
        case 0x351144u: goto label_351144;
        case 0x351148u: goto label_351148;
        case 0x35114cu: goto label_35114c;
        case 0x351150u: goto label_351150;
        case 0x351154u: goto label_351154;
        case 0x351158u: goto label_351158;
        case 0x35115cu: goto label_35115c;
        case 0x351160u: goto label_351160;
        case 0x351164u: goto label_351164;
        case 0x351168u: goto label_351168;
        case 0x35116cu: goto label_35116c;
        case 0x351170u: goto label_351170;
        case 0x351174u: goto label_351174;
        case 0x351178u: goto label_351178;
        case 0x35117cu: goto label_35117c;
        case 0x351180u: goto label_351180;
        case 0x351184u: goto label_351184;
        case 0x351188u: goto label_351188;
        case 0x35118cu: goto label_35118c;
        case 0x351190u: goto label_351190;
        case 0x351194u: goto label_351194;
        case 0x351198u: goto label_351198;
        case 0x35119cu: goto label_35119c;
        case 0x3511a0u: goto label_3511a0;
        case 0x3511a4u: goto label_3511a4;
        case 0x3511a8u: goto label_3511a8;
        case 0x3511acu: goto label_3511ac;
        case 0x3511b0u: goto label_3511b0;
        case 0x3511b4u: goto label_3511b4;
        case 0x3511b8u: goto label_3511b8;
        case 0x3511bcu: goto label_3511bc;
        case 0x3511c0u: goto label_3511c0;
        case 0x3511c4u: goto label_3511c4;
        case 0x3511c8u: goto label_3511c8;
        case 0x3511ccu: goto label_3511cc;
        case 0x3511d0u: goto label_3511d0;
        case 0x3511d4u: goto label_3511d4;
        case 0x3511d8u: goto label_3511d8;
        case 0x3511dcu: goto label_3511dc;
        case 0x3511e0u: goto label_3511e0;
        case 0x3511e4u: goto label_3511e4;
        case 0x3511e8u: goto label_3511e8;
        case 0x3511ecu: goto label_3511ec;
        case 0x3511f0u: goto label_3511f0;
        case 0x3511f4u: goto label_3511f4;
        case 0x3511f8u: goto label_3511f8;
        case 0x3511fcu: goto label_3511fc;
        case 0x351200u: goto label_351200;
        case 0x351204u: goto label_351204;
        case 0x351208u: goto label_351208;
        case 0x35120cu: goto label_35120c;
        case 0x351210u: goto label_351210;
        case 0x351214u: goto label_351214;
        case 0x351218u: goto label_351218;
        case 0x35121cu: goto label_35121c;
        case 0x351220u: goto label_351220;
        case 0x351224u: goto label_351224;
        case 0x351228u: goto label_351228;
        case 0x35122cu: goto label_35122c;
        case 0x351230u: goto label_351230;
        case 0x351234u: goto label_351234;
        case 0x351238u: goto label_351238;
        case 0x35123cu: goto label_35123c;
        case 0x351240u: goto label_351240;
        case 0x351244u: goto label_351244;
        case 0x351248u: goto label_351248;
        case 0x35124cu: goto label_35124c;
        case 0x351250u: goto label_351250;
        case 0x351254u: goto label_351254;
        case 0x351258u: goto label_351258;
        case 0x35125cu: goto label_35125c;
        case 0x351260u: goto label_351260;
        case 0x351264u: goto label_351264;
        case 0x351268u: goto label_351268;
        case 0x35126cu: goto label_35126c;
        case 0x351270u: goto label_351270;
        case 0x351274u: goto label_351274;
        case 0x351278u: goto label_351278;
        case 0x35127cu: goto label_35127c;
        case 0x351280u: goto label_351280;
        case 0x351284u: goto label_351284;
        case 0x351288u: goto label_351288;
        case 0x35128cu: goto label_35128c;
        case 0x351290u: goto label_351290;
        case 0x351294u: goto label_351294;
        case 0x351298u: goto label_351298;
        case 0x35129cu: goto label_35129c;
        case 0x3512a0u: goto label_3512a0;
        case 0x3512a4u: goto label_3512a4;
        case 0x3512a8u: goto label_3512a8;
        case 0x3512acu: goto label_3512ac;
        case 0x3512b0u: goto label_3512b0;
        case 0x3512b4u: goto label_3512b4;
        case 0x3512b8u: goto label_3512b8;
        case 0x3512bcu: goto label_3512bc;
        case 0x3512c0u: goto label_3512c0;
        case 0x3512c4u: goto label_3512c4;
        case 0x3512c8u: goto label_3512c8;
        case 0x3512ccu: goto label_3512cc;
        case 0x3512d0u: goto label_3512d0;
        case 0x3512d4u: goto label_3512d4;
        case 0x3512d8u: goto label_3512d8;
        case 0x3512dcu: goto label_3512dc;
        case 0x3512e0u: goto label_3512e0;
        case 0x3512e4u: goto label_3512e4;
        case 0x3512e8u: goto label_3512e8;
        case 0x3512ecu: goto label_3512ec;
        case 0x3512f0u: goto label_3512f0;
        case 0x3512f4u: goto label_3512f4;
        case 0x3512f8u: goto label_3512f8;
        case 0x3512fcu: goto label_3512fc;
        case 0x351300u: goto label_351300;
        case 0x351304u: goto label_351304;
        case 0x351308u: goto label_351308;
        case 0x35130cu: goto label_35130c;
        case 0x351310u: goto label_351310;
        case 0x351314u: goto label_351314;
        case 0x351318u: goto label_351318;
        case 0x35131cu: goto label_35131c;
        case 0x351320u: goto label_351320;
        case 0x351324u: goto label_351324;
        case 0x351328u: goto label_351328;
        case 0x35132cu: goto label_35132c;
        case 0x351330u: goto label_351330;
        case 0x351334u: goto label_351334;
        case 0x351338u: goto label_351338;
        case 0x35133cu: goto label_35133c;
        case 0x351340u: goto label_351340;
        case 0x351344u: goto label_351344;
        case 0x351348u: goto label_351348;
        case 0x35134cu: goto label_35134c;
        case 0x351350u: goto label_351350;
        case 0x351354u: goto label_351354;
        case 0x351358u: goto label_351358;
        case 0x35135cu: goto label_35135c;
        case 0x351360u: goto label_351360;
        case 0x351364u: goto label_351364;
        case 0x351368u: goto label_351368;
        case 0x35136cu: goto label_35136c;
        case 0x351370u: goto label_351370;
        case 0x351374u: goto label_351374;
        case 0x351378u: goto label_351378;
        case 0x35137cu: goto label_35137c;
        case 0x351380u: goto label_351380;
        case 0x351384u: goto label_351384;
        case 0x351388u: goto label_351388;
        case 0x35138cu: goto label_35138c;
        case 0x351390u: goto label_351390;
        case 0x351394u: goto label_351394;
        case 0x351398u: goto label_351398;
        case 0x35139cu: goto label_35139c;
        case 0x3513a0u: goto label_3513a0;
        case 0x3513a4u: goto label_3513a4;
        case 0x3513a8u: goto label_3513a8;
        case 0x3513acu: goto label_3513ac;
        case 0x3513b0u: goto label_3513b0;
        case 0x3513b4u: goto label_3513b4;
        case 0x3513b8u: goto label_3513b8;
        case 0x3513bcu: goto label_3513bc;
        case 0x3513c0u: goto label_3513c0;
        case 0x3513c4u: goto label_3513c4;
        case 0x3513c8u: goto label_3513c8;
        case 0x3513ccu: goto label_3513cc;
        case 0x3513d0u: goto label_3513d0;
        case 0x3513d4u: goto label_3513d4;
        case 0x3513d8u: goto label_3513d8;
        case 0x3513dcu: goto label_3513dc;
        case 0x3513e0u: goto label_3513e0;
        case 0x3513e4u: goto label_3513e4;
        case 0x3513e8u: goto label_3513e8;
        case 0x3513ecu: goto label_3513ec;
        case 0x3513f0u: goto label_3513f0;
        case 0x3513f4u: goto label_3513f4;
        case 0x3513f8u: goto label_3513f8;
        case 0x3513fcu: goto label_3513fc;
        case 0x351400u: goto label_351400;
        case 0x351404u: goto label_351404;
        case 0x351408u: goto label_351408;
        case 0x35140cu: goto label_35140c;
        case 0x351410u: goto label_351410;
        case 0x351414u: goto label_351414;
        case 0x351418u: goto label_351418;
        case 0x35141cu: goto label_35141c;
        case 0x351420u: goto label_351420;
        case 0x351424u: goto label_351424;
        case 0x351428u: goto label_351428;
        case 0x35142cu: goto label_35142c;
        case 0x351430u: goto label_351430;
        case 0x351434u: goto label_351434;
        case 0x351438u: goto label_351438;
        case 0x35143cu: goto label_35143c;
        case 0x351440u: goto label_351440;
        case 0x351444u: goto label_351444;
        case 0x351448u: goto label_351448;
        case 0x35144cu: goto label_35144c;
        case 0x351450u: goto label_351450;
        case 0x351454u: goto label_351454;
        case 0x351458u: goto label_351458;
        case 0x35145cu: goto label_35145c;
        case 0x351460u: goto label_351460;
        case 0x351464u: goto label_351464;
        case 0x351468u: goto label_351468;
        case 0x35146cu: goto label_35146c;
        case 0x351470u: goto label_351470;
        case 0x351474u: goto label_351474;
        case 0x351478u: goto label_351478;
        case 0x35147cu: goto label_35147c;
        case 0x351480u: goto label_351480;
        case 0x351484u: goto label_351484;
        case 0x351488u: goto label_351488;
        case 0x35148cu: goto label_35148c;
        case 0x351490u: goto label_351490;
        case 0x351494u: goto label_351494;
        case 0x351498u: goto label_351498;
        case 0x35149cu: goto label_35149c;
        case 0x3514a0u: goto label_3514a0;
        case 0x3514a4u: goto label_3514a4;
        case 0x3514a8u: goto label_3514a8;
        case 0x3514acu: goto label_3514ac;
        case 0x3514b0u: goto label_3514b0;
        case 0x3514b4u: goto label_3514b4;
        case 0x3514b8u: goto label_3514b8;
        case 0x3514bcu: goto label_3514bc;
        case 0x3514c0u: goto label_3514c0;
        case 0x3514c4u: goto label_3514c4;
        case 0x3514c8u: goto label_3514c8;
        case 0x3514ccu: goto label_3514cc;
        case 0x3514d0u: goto label_3514d0;
        case 0x3514d4u: goto label_3514d4;
        case 0x3514d8u: goto label_3514d8;
        case 0x3514dcu: goto label_3514dc;
        case 0x3514e0u: goto label_3514e0;
        case 0x3514e4u: goto label_3514e4;
        case 0x3514e8u: goto label_3514e8;
        case 0x3514ecu: goto label_3514ec;
        case 0x3514f0u: goto label_3514f0;
        case 0x3514f4u: goto label_3514f4;
        case 0x3514f8u: goto label_3514f8;
        case 0x3514fcu: goto label_3514fc;
        case 0x351500u: goto label_351500;
        case 0x351504u: goto label_351504;
        case 0x351508u: goto label_351508;
        case 0x35150cu: goto label_35150c;
        case 0x351510u: goto label_351510;
        case 0x351514u: goto label_351514;
        case 0x351518u: goto label_351518;
        case 0x35151cu: goto label_35151c;
        case 0x351520u: goto label_351520;
        case 0x351524u: goto label_351524;
        case 0x351528u: goto label_351528;
        case 0x35152cu: goto label_35152c;
        case 0x351530u: goto label_351530;
        case 0x351534u: goto label_351534;
        case 0x351538u: goto label_351538;
        case 0x35153cu: goto label_35153c;
        case 0x351540u: goto label_351540;
        case 0x351544u: goto label_351544;
        case 0x351548u: goto label_351548;
        case 0x35154cu: goto label_35154c;
        case 0x351550u: goto label_351550;
        case 0x351554u: goto label_351554;
        case 0x351558u: goto label_351558;
        case 0x35155cu: goto label_35155c;
        case 0x351560u: goto label_351560;
        case 0x351564u: goto label_351564;
        case 0x351568u: goto label_351568;
        case 0x35156cu: goto label_35156c;
        case 0x351570u: goto label_351570;
        case 0x351574u: goto label_351574;
        case 0x351578u: goto label_351578;
        case 0x35157cu: goto label_35157c;
        case 0x351580u: goto label_351580;
        case 0x351584u: goto label_351584;
        case 0x351588u: goto label_351588;
        case 0x35158cu: goto label_35158c;
        case 0x351590u: goto label_351590;
        case 0x351594u: goto label_351594;
        case 0x351598u: goto label_351598;
        case 0x35159cu: goto label_35159c;
        case 0x3515a0u: goto label_3515a0;
        case 0x3515a4u: goto label_3515a4;
        case 0x3515a8u: goto label_3515a8;
        case 0x3515acu: goto label_3515ac;
        case 0x3515b0u: goto label_3515b0;
        case 0x3515b4u: goto label_3515b4;
        case 0x3515b8u: goto label_3515b8;
        case 0x3515bcu: goto label_3515bc;
        case 0x3515c0u: goto label_3515c0;
        case 0x3515c4u: goto label_3515c4;
        case 0x3515c8u: goto label_3515c8;
        case 0x3515ccu: goto label_3515cc;
        case 0x3515d0u: goto label_3515d0;
        case 0x3515d4u: goto label_3515d4;
        case 0x3515d8u: goto label_3515d8;
        case 0x3515dcu: goto label_3515dc;
        case 0x3515e0u: goto label_3515e0;
        case 0x3515e4u: goto label_3515e4;
        case 0x3515e8u: goto label_3515e8;
        case 0x3515ecu: goto label_3515ec;
        case 0x3515f0u: goto label_3515f0;
        case 0x3515f4u: goto label_3515f4;
        case 0x3515f8u: goto label_3515f8;
        case 0x3515fcu: goto label_3515fc;
        case 0x351600u: goto label_351600;
        case 0x351604u: goto label_351604;
        case 0x351608u: goto label_351608;
        case 0x35160cu: goto label_35160c;
        case 0x351610u: goto label_351610;
        case 0x351614u: goto label_351614;
        case 0x351618u: goto label_351618;
        case 0x35161cu: goto label_35161c;
        case 0x351620u: goto label_351620;
        case 0x351624u: goto label_351624;
        case 0x351628u: goto label_351628;
        case 0x35162cu: goto label_35162c;
        case 0x351630u: goto label_351630;
        case 0x351634u: goto label_351634;
        case 0x351638u: goto label_351638;
        case 0x35163cu: goto label_35163c;
        case 0x351640u: goto label_351640;
        case 0x351644u: goto label_351644;
        case 0x351648u: goto label_351648;
        case 0x35164cu: goto label_35164c;
        case 0x351650u: goto label_351650;
        case 0x351654u: goto label_351654;
        case 0x351658u: goto label_351658;
        case 0x35165cu: goto label_35165c;
        case 0x351660u: goto label_351660;
        case 0x351664u: goto label_351664;
        case 0x351668u: goto label_351668;
        case 0x35166cu: goto label_35166c;
        case 0x351670u: goto label_351670;
        case 0x351674u: goto label_351674;
        case 0x351678u: goto label_351678;
        case 0x35167cu: goto label_35167c;
        case 0x351680u: goto label_351680;
        case 0x351684u: goto label_351684;
        case 0x351688u: goto label_351688;
        case 0x35168cu: goto label_35168c;
        case 0x351690u: goto label_351690;
        case 0x351694u: goto label_351694;
        case 0x351698u: goto label_351698;
        case 0x35169cu: goto label_35169c;
        case 0x3516a0u: goto label_3516a0;
        case 0x3516a4u: goto label_3516a4;
        case 0x3516a8u: goto label_3516a8;
        case 0x3516acu: goto label_3516ac;
        case 0x3516b0u: goto label_3516b0;
        case 0x3516b4u: goto label_3516b4;
        case 0x3516b8u: goto label_3516b8;
        case 0x3516bcu: goto label_3516bc;
        case 0x3516c0u: goto label_3516c0;
        case 0x3516c4u: goto label_3516c4;
        case 0x3516c8u: goto label_3516c8;
        case 0x3516ccu: goto label_3516cc;
        case 0x3516d0u: goto label_3516d0;
        case 0x3516d4u: goto label_3516d4;
        case 0x3516d8u: goto label_3516d8;
        case 0x3516dcu: goto label_3516dc;
        case 0x3516e0u: goto label_3516e0;
        case 0x3516e4u: goto label_3516e4;
        case 0x3516e8u: goto label_3516e8;
        case 0x3516ecu: goto label_3516ec;
        case 0x3516f0u: goto label_3516f0;
        case 0x3516f4u: goto label_3516f4;
        case 0x3516f8u: goto label_3516f8;
        case 0x3516fcu: goto label_3516fc;
        case 0x351700u: goto label_351700;
        case 0x351704u: goto label_351704;
        case 0x351708u: goto label_351708;
        case 0x35170cu: goto label_35170c;
        case 0x351710u: goto label_351710;
        case 0x351714u: goto label_351714;
        case 0x351718u: goto label_351718;
        case 0x35171cu: goto label_35171c;
        case 0x351720u: goto label_351720;
        case 0x351724u: goto label_351724;
        case 0x351728u: goto label_351728;
        case 0x35172cu: goto label_35172c;
        case 0x351730u: goto label_351730;
        case 0x351734u: goto label_351734;
        case 0x351738u: goto label_351738;
        case 0x35173cu: goto label_35173c;
        case 0x351740u: goto label_351740;
        case 0x351744u: goto label_351744;
        case 0x351748u: goto label_351748;
        case 0x35174cu: goto label_35174c;
        case 0x351750u: goto label_351750;
        case 0x351754u: goto label_351754;
        case 0x351758u: goto label_351758;
        case 0x35175cu: goto label_35175c;
        case 0x351760u: goto label_351760;
        case 0x351764u: goto label_351764;
        case 0x351768u: goto label_351768;
        case 0x35176cu: goto label_35176c;
        case 0x351770u: goto label_351770;
        case 0x351774u: goto label_351774;
        case 0x351778u: goto label_351778;
        case 0x35177cu: goto label_35177c;
        case 0x351780u: goto label_351780;
        case 0x351784u: goto label_351784;
        case 0x351788u: goto label_351788;
        case 0x35178cu: goto label_35178c;
        case 0x351790u: goto label_351790;
        case 0x351794u: goto label_351794;
        case 0x351798u: goto label_351798;
        case 0x35179cu: goto label_35179c;
        case 0x3517a0u: goto label_3517a0;
        case 0x3517a4u: goto label_3517a4;
        case 0x3517a8u: goto label_3517a8;
        case 0x3517acu: goto label_3517ac;
        case 0x3517b0u: goto label_3517b0;
        case 0x3517b4u: goto label_3517b4;
        case 0x3517b8u: goto label_3517b8;
        case 0x3517bcu: goto label_3517bc;
        case 0x3517c0u: goto label_3517c0;
        case 0x3517c4u: goto label_3517c4;
        case 0x3517c8u: goto label_3517c8;
        case 0x3517ccu: goto label_3517cc;
        case 0x3517d0u: goto label_3517d0;
        case 0x3517d4u: goto label_3517d4;
        case 0x3517d8u: goto label_3517d8;
        case 0x3517dcu: goto label_3517dc;
        case 0x3517e0u: goto label_3517e0;
        case 0x3517e4u: goto label_3517e4;
        case 0x3517e8u: goto label_3517e8;
        case 0x3517ecu: goto label_3517ec;
        case 0x3517f0u: goto label_3517f0;
        case 0x3517f4u: goto label_3517f4;
        case 0x3517f8u: goto label_3517f8;
        case 0x3517fcu: goto label_3517fc;
        case 0x351800u: goto label_351800;
        case 0x351804u: goto label_351804;
        case 0x351808u: goto label_351808;
        case 0x35180cu: goto label_35180c;
        case 0x351810u: goto label_351810;
        case 0x351814u: goto label_351814;
        case 0x351818u: goto label_351818;
        case 0x35181cu: goto label_35181c;
        case 0x351820u: goto label_351820;
        case 0x351824u: goto label_351824;
        case 0x351828u: goto label_351828;
        case 0x35182cu: goto label_35182c;
        case 0x351830u: goto label_351830;
        case 0x351834u: goto label_351834;
        case 0x351838u: goto label_351838;
        case 0x35183cu: goto label_35183c;
        case 0x351840u: goto label_351840;
        case 0x351844u: goto label_351844;
        case 0x351848u: goto label_351848;
        case 0x35184cu: goto label_35184c;
        case 0x351850u: goto label_351850;
        case 0x351854u: goto label_351854;
        case 0x351858u: goto label_351858;
        case 0x35185cu: goto label_35185c;
        case 0x351860u: goto label_351860;
        case 0x351864u: goto label_351864;
        case 0x351868u: goto label_351868;
        case 0x35186cu: goto label_35186c;
        case 0x351870u: goto label_351870;
        case 0x351874u: goto label_351874;
        case 0x351878u: goto label_351878;
        case 0x35187cu: goto label_35187c;
        case 0x351880u: goto label_351880;
        case 0x351884u: goto label_351884;
        case 0x351888u: goto label_351888;
        case 0x35188cu: goto label_35188c;
        case 0x351890u: goto label_351890;
        case 0x351894u: goto label_351894;
        case 0x351898u: goto label_351898;
        case 0x35189cu: goto label_35189c;
        case 0x3518a0u: goto label_3518a0;
        case 0x3518a4u: goto label_3518a4;
        case 0x3518a8u: goto label_3518a8;
        case 0x3518acu: goto label_3518ac;
        case 0x3518b0u: goto label_3518b0;
        case 0x3518b4u: goto label_3518b4;
        case 0x3518b8u: goto label_3518b8;
        case 0x3518bcu: goto label_3518bc;
        case 0x3518c0u: goto label_3518c0;
        case 0x3518c4u: goto label_3518c4;
        case 0x3518c8u: goto label_3518c8;
        case 0x3518ccu: goto label_3518cc;
        case 0x3518d0u: goto label_3518d0;
        case 0x3518d4u: goto label_3518d4;
        case 0x3518d8u: goto label_3518d8;
        case 0x3518dcu: goto label_3518dc;
        case 0x3518e0u: goto label_3518e0;
        case 0x3518e4u: goto label_3518e4;
        case 0x3518e8u: goto label_3518e8;
        case 0x3518ecu: goto label_3518ec;
        case 0x3518f0u: goto label_3518f0;
        case 0x3518f4u: goto label_3518f4;
        case 0x3518f8u: goto label_3518f8;
        case 0x3518fcu: goto label_3518fc;
        case 0x351900u: goto label_351900;
        case 0x351904u: goto label_351904;
        case 0x351908u: goto label_351908;
        case 0x35190cu: goto label_35190c;
        case 0x351910u: goto label_351910;
        case 0x351914u: goto label_351914;
        case 0x351918u: goto label_351918;
        case 0x35191cu: goto label_35191c;
        case 0x351920u: goto label_351920;
        case 0x351924u: goto label_351924;
        case 0x351928u: goto label_351928;
        case 0x35192cu: goto label_35192c;
        case 0x351930u: goto label_351930;
        case 0x351934u: goto label_351934;
        case 0x351938u: goto label_351938;
        case 0x35193cu: goto label_35193c;
        case 0x351940u: goto label_351940;
        case 0x351944u: goto label_351944;
        case 0x351948u: goto label_351948;
        case 0x35194cu: goto label_35194c;
        case 0x351950u: goto label_351950;
        case 0x351954u: goto label_351954;
        case 0x351958u: goto label_351958;
        case 0x35195cu: goto label_35195c;
        case 0x351960u: goto label_351960;
        case 0x351964u: goto label_351964;
        case 0x351968u: goto label_351968;
        case 0x35196cu: goto label_35196c;
        case 0x351970u: goto label_351970;
        case 0x351974u: goto label_351974;
        case 0x351978u: goto label_351978;
        case 0x35197cu: goto label_35197c;
        case 0x351980u: goto label_351980;
        case 0x351984u: goto label_351984;
        case 0x351988u: goto label_351988;
        case 0x35198cu: goto label_35198c;
        case 0x351990u: goto label_351990;
        case 0x351994u: goto label_351994;
        case 0x351998u: goto label_351998;
        case 0x35199cu: goto label_35199c;
        case 0x3519a0u: goto label_3519a0;
        case 0x3519a4u: goto label_3519a4;
        case 0x3519a8u: goto label_3519a8;
        case 0x3519acu: goto label_3519ac;
        case 0x3519b0u: goto label_3519b0;
        case 0x3519b4u: goto label_3519b4;
        case 0x3519b8u: goto label_3519b8;
        case 0x3519bcu: goto label_3519bc;
        case 0x3519c0u: goto label_3519c0;
        case 0x3519c4u: goto label_3519c4;
        case 0x3519c8u: goto label_3519c8;
        case 0x3519ccu: goto label_3519cc;
        case 0x3519d0u: goto label_3519d0;
        case 0x3519d4u: goto label_3519d4;
        case 0x3519d8u: goto label_3519d8;
        case 0x3519dcu: goto label_3519dc;
        case 0x3519e0u: goto label_3519e0;
        case 0x3519e4u: goto label_3519e4;
        case 0x3519e8u: goto label_3519e8;
        case 0x3519ecu: goto label_3519ec;
        case 0x3519f0u: goto label_3519f0;
        case 0x3519f4u: goto label_3519f4;
        case 0x3519f8u: goto label_3519f8;
        case 0x3519fcu: goto label_3519fc;
        case 0x351a00u: goto label_351a00;
        case 0x351a04u: goto label_351a04;
        case 0x351a08u: goto label_351a08;
        case 0x351a0cu: goto label_351a0c;
        case 0x351a10u: goto label_351a10;
        case 0x351a14u: goto label_351a14;
        case 0x351a18u: goto label_351a18;
        case 0x351a1cu: goto label_351a1c;
        case 0x351a20u: goto label_351a20;
        case 0x351a24u: goto label_351a24;
        case 0x351a28u: goto label_351a28;
        case 0x351a2cu: goto label_351a2c;
        case 0x351a30u: goto label_351a30;
        case 0x351a34u: goto label_351a34;
        case 0x351a38u: goto label_351a38;
        case 0x351a3cu: goto label_351a3c;
        case 0x351a40u: goto label_351a40;
        case 0x351a44u: goto label_351a44;
        case 0x351a48u: goto label_351a48;
        case 0x351a4cu: goto label_351a4c;
        case 0x351a50u: goto label_351a50;
        case 0x351a54u: goto label_351a54;
        case 0x351a58u: goto label_351a58;
        case 0x351a5cu: goto label_351a5c;
        default: break;
    }

    ctx->pc = 0x351010u;

label_351010:
    // 0x351010: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x351010u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_351014:
    // 0x351014: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x351014u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
label_351018:
    // 0x351018: 0x8c67e3c0  lw          $a3, -0x1C40($v1)
    ctx->pc = 0x351018u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_35101c:
    // 0x35101c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x35101cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_351020:
    // 0x351020: 0x76080  sll         $t4, $a3, 2
    ctx->pc = 0x351020u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_351024:
    // 0x351024: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x351024u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_351028:
    // 0x351028: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x351028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_35102c:
    // 0x35102c: 0x8c68e360  lw          $t0, -0x1CA0($v1)
    ctx->pc = 0x35102cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_351030:
    // 0x351030: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x351030u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_351034:
    // 0x351034: 0x8c67e3b0  lw          $a3, -0x1C50($v1)
    ctx->pc = 0x351034u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_351038:
    // 0x351038: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x351038u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
label_35103c:
    // 0x35103c: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x35103cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_351040:
    // 0x351040: 0x1035821  addu        $t3, $t0, $v1
    ctx->pc = 0x351040u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_351044:
    // 0x351044: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x351044u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_351048:
    // 0x351048: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x351048u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
label_35104c:
    // 0x35104c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x35104cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_351050:
    // 0x351050: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x351050u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
label_351054:
    // 0x351054: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x351054u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_351058:
    // 0x351058: 0x8d4be3d8  lw          $t3, -0x1C28($t2)
    ctx->pc = 0x351058u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
label_35105c:
    // 0x35105c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x35105cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_351060:
    // 0x351060: 0x8d29e3b8  lw          $t1, -0x1C48($t1)
    ctx->pc = 0x351060u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960056)));
label_351064:
    // 0x351064: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x351064u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_351068:
    // 0x351068: 0x8c6ae378  lw          $t2, -0x1C88($v1)
    ctx->pc = 0x351068u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_35106c:
    // 0x35106c: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x35106cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_351070:
    // 0x351070: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x351070u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_351074:
    // 0x351074: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x351074u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_351078:
    // 0x351078: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x351078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_35107c:
    // 0x35107c: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x35107cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
label_351080:
    // 0x351080: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x351080u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
label_351084:
    // 0x351084: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x351084u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_351088:
    // 0x351088: 0x8d06e3d8  lw          $a2, -0x1C28($t0)
    ctx->pc = 0x351088u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_35108c:
    // 0x35108c: 0x8ca4e3c0  lw          $a0, -0x1C40($a1)
    ctx->pc = 0x35108cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
label_351090:
    // 0x351090: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x351090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_351094:
    // 0x351094: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x351094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_351098:
    // 0x351098: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x351098u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
label_35109c:
    // 0x35109c: 0x3e00008  jr          $ra
label_3510a0:
    if (ctx->pc == 0x3510A0u) {
        ctx->pc = 0x3510A0u;
            // 0x3510a0: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->pc = 0x3510A4u;
        goto label_3510a4;
    }
    ctx->pc = 0x35109Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3510A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35109Cu;
            // 0x3510a0: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3510A4u;
label_3510a4:
    // 0x3510a4: 0x0  nop
    ctx->pc = 0x3510a4u;
    // NOP
label_3510a8:
    // 0x3510a8: 0x0  nop
    ctx->pc = 0x3510a8u;
    // NOP
label_3510ac:
    // 0x3510ac: 0x0  nop
    ctx->pc = 0x3510acu;
    // NOP
label_3510b0:
    // 0x3510b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3510b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3510b4:
    // 0x3510b4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3510b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3510b8:
    // 0x3510b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3510b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3510bc:
    // 0x3510bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3510bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3510c0:
    // 0x3510c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3510c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3510c4:
    // 0x3510c4: 0x8c650e80  lw          $a1, 0xE80($v1)
    ctx->pc = 0x3510c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3510c8:
    // 0x3510c8: 0x9084001c  lbu         $a0, 0x1C($a0)
    ctx->pc = 0x3510c8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
label_3510cc:
    // 0x3510cc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3510ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3510d0:
    // 0x3510d0: 0x50830032  beql        $a0, $v1, . + 4 + (0x32 << 2)
label_3510d4:
    if (ctx->pc == 0x3510D4u) {
        ctx->pc = 0x3510D4u;
            // 0x3510d4: 0x8e0700a8  lw          $a3, 0xA8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
        ctx->pc = 0x3510D8u;
        goto label_3510d8;
    }
    ctx->pc = 0x3510D0u;
    {
        const bool branch_taken_0x3510d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3510d0) {
            ctx->pc = 0x3510D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3510D0u;
            // 0x3510d4: 0x8e0700a8  lw          $a3, 0xA8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35119Cu;
            goto label_35119c;
        }
    }
    ctx->pc = 0x3510D8u;
label_3510d8:
    // 0x3510d8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3510d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3510dc:
    // 0x3510dc: 0x5083002b  beql        $a0, $v1, . + 4 + (0x2B << 2)
label_3510e0:
    if (ctx->pc == 0x3510E0u) {
        ctx->pc = 0x3510E0u;
            // 0x3510e0: 0x8e19000c  lw          $t9, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x3510E4u;
        goto label_3510e4;
    }
    ctx->pc = 0x3510DCu;
    {
        const bool branch_taken_0x3510dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3510dc) {
            ctx->pc = 0x3510E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3510DCu;
            // 0x3510e0: 0x8e19000c  lw          $t9, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35118Cu;
            goto label_35118c;
        }
    }
    ctx->pc = 0x3510E4u;
label_3510e4:
    // 0x3510e4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3510e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3510e8:
    // 0x3510e8: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
label_3510ec:
    if (ctx->pc == 0x3510ECu) {
        ctx->pc = 0x3510ECu;
            // 0x3510ec: 0x8ca40cb4  lw          $a0, 0xCB4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3252)));
        ctx->pc = 0x3510F0u;
        goto label_3510f0;
    }
    ctx->pc = 0x3510E8u;
    {
        const bool branch_taken_0x3510e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3510e8) {
            ctx->pc = 0x3510ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3510E8u;
            // 0x3510ec: 0x8ca40cb4  lw          $a0, 0xCB4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3252)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3510F8u;
            goto label_3510f8;
        }
    }
    ctx->pc = 0x3510F0u;
label_3510f0:
    // 0x3510f0: 0x10000053  b           . + 4 + (0x53 << 2)
label_3510f4:
    if (ctx->pc == 0x3510F4u) {
        ctx->pc = 0x3510F4u;
            // 0x3510f4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x3510F8u;
        goto label_3510f8;
    }
    ctx->pc = 0x3510F0u;
    {
        const bool branch_taken_0x3510f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3510F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3510F0u;
            // 0x3510f4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3510f0) {
            ctx->pc = 0x351240u;
            goto label_351240;
        }
    }
    ctx->pc = 0x3510F8u;
label_3510f8:
    // 0x3510f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3510f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3510fc:
    // 0x3510fc: 0x1083004f  beq         $a0, $v1, . + 4 + (0x4F << 2)
label_351100:
    if (ctx->pc == 0x351100u) {
        ctx->pc = 0x351104u;
        goto label_351104;
    }
    ctx->pc = 0x3510FCu;
    {
        const bool branch_taken_0x3510fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3510fc) {
            ctx->pc = 0x35123Cu;
            goto label_35123c;
        }
    }
    ctx->pc = 0x351104u;
label_351104:
    // 0x351104: 0x8e040090  lw          $a0, 0x90($s0)
    ctx->pc = 0x351104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_351108:
    // 0x351108: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x351108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_35110c:
    // 0x35110c: 0x8c6316c0  lw          $v1, 0x16C0($v1)
    ctx->pc = 0x35110cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5824)));
label_351110:
    // 0x351110: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x351110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_351114:
    // 0x351114: 0x8ca5001c  lw          $a1, 0x1C($a1)
    ctx->pc = 0x351114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_351118:
    // 0x351118: 0x602027  not         $a0, $v1
    ctx->pc = 0x351118u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 0)));
label_35111c:
    // 0x35111c: 0x8ca30050  lw          $v1, 0x50($a1)
    ctx->pc = 0x35111cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
label_351120:
    // 0x351120: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x351120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_351124:
    // 0x351124: 0xaca30050  sw          $v1, 0x50($a1)
    ctx->pc = 0x351124u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 3));
label_351128:
    // 0x351128: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x351128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_35112c:
    // 0x35112c: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x35112cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_351130:
    // 0x351130: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x351130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_351134:
    // 0x351134: 0x24630056  addiu       $v1, $v1, 0x56
    ctx->pc = 0x351134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 86));
label_351138:
    // 0x351138: 0xae0300a4  sw          $v1, 0xA4($s0)
    ctx->pc = 0x351138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
label_35113c:
    // 0x35113c: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x35113cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_351140:
    // 0x351140: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x351140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_351144:
    // 0x351144: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x351144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_351148:
    // 0x351148: 0x2463005c  addiu       $v1, $v1, 0x5C
    ctx->pc = 0x351148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 92));
label_35114c:
    // 0x35114c: 0xae0300a8  sw          $v1, 0xA8($s0)
    ctx->pc = 0x35114cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 3));
label_351150:
    // 0x351150: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x351150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_351154:
    // 0x351154: 0x10800039  beqz        $a0, . + 4 + (0x39 << 2)
label_351158:
    if (ctx->pc == 0x351158u) {
        ctx->pc = 0x35115Cu;
        goto label_35115c;
    }
    ctx->pc = 0x351154u;
    {
        const bool branch_taken_0x351154 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x351154) {
            ctx->pc = 0x35123Cu;
            goto label_35123c;
        }
    }
    ctx->pc = 0x35115Cu;
label_35115c:
    // 0x35115c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35115cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_351160:
    // 0x351160: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x351160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_351164:
    // 0x351164: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x351164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_351168:
    // 0x351168: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x351168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_35116c:
    // 0x35116c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x35116cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_351170:
    // 0x351170: 0xac660060  sw          $a2, 0x60($v1)
    ctx->pc = 0x351170u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 6));
label_351174:
    // 0x351174: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x351174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_351178:
    // 0x351178: 0xc4182b  sltu        $v1, $a2, $a0
    ctx->pc = 0x351178u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_35117c:
    // 0x35117c: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_351180:
    if (ctx->pc == 0x351180u) {
        ctx->pc = 0x351180u;
            // 0x351180: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x351184u;
        goto label_351184;
    }
    ctx->pc = 0x35117Cu;
    {
        const bool branch_taken_0x35117c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x351180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35117Cu;
            // 0x351180: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35117c) {
            ctx->pc = 0x351164u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_351164;
        }
    }
    ctx->pc = 0x351184u;
label_351184:
    // 0x351184: 0x1000002d  b           . + 4 + (0x2D << 2)
label_351188:
    if (ctx->pc == 0x351188u) {
        ctx->pc = 0x35118Cu;
        goto label_35118c;
    }
    ctx->pc = 0x351184u;
    {
        const bool branch_taken_0x351184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x351184) {
            ctx->pc = 0x35123Cu;
            goto label_35123c;
        }
    }
    ctx->pc = 0x35118Cu;
label_35118c:
    // 0x35118c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x35118cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_351190:
    // 0x351190: 0x320f809  jalr        $t9
label_351194:
    if (ctx->pc == 0x351194u) {
        ctx->pc = 0x351194u;
            // 0x351194: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->pc = 0x351198u;
        goto label_351198;
    }
    ctx->pc = 0x351190u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x351198u);
        ctx->pc = 0x351194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x351190u;
            // 0x351194: 0x2604000c  addiu       $a0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x351198u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x351198u; }
            if (ctx->pc != 0x351198u) { return; }
        }
        }
    }
    ctx->pc = 0x351198u;
label_351198:
    // 0x351198: 0x8e0700a8  lw          $a3, 0xA8($s0)
    ctx->pc = 0x351198u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_35119c:
    // 0x35119c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x35119cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3511a0:
    // 0x3511a0: 0x8c668a08  lw          $a2, -0x75F8($v1)
    ctx->pc = 0x3511a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3511a4:
    // 0x3511a4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3511a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3511a8:
    // 0x3511a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3511a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3511ac:
    // 0x3511ac: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x3511acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3511b0:
    // 0x3511b0: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x3511b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
label_3511b4:
    // 0x3511b4: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x3511b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_3511b8:
    // 0x3511b8: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x3511b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
label_3511bc:
    // 0x3511bc: 0xc4c40018  lwc1        $f4, 0x18($a2)
    ctx->pc = 0x3511bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3511c0:
    // 0x3511c0: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x3511c0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3511c4:
    // 0x3511c4: 0x0  nop
    ctx->pc = 0x3511c4u;
    // NOP
label_3511c8:
    // 0x3511c8: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x3511c8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3511cc:
    // 0x3511cc: 0x4604185c  madd.s      $f1, $f3, $f4
    ctx->pc = 0x3511ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
label_3511d0:
    // 0x3511d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3511d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3511d4:
    // 0x3511d4: 0x0  nop
    ctx->pc = 0x3511d4u;
    // NOP
label_3511d8:
    // 0x3511d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3511d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3511dc:
    // 0x3511dc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_3511e0:
    if (ctx->pc == 0x3511E0u) {
        ctx->pc = 0x3511E0u;
            // 0x3511e0: 0xe4e10000  swc1        $f1, 0x0($a3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->pc = 0x3511E4u;
        goto label_3511e4;
    }
    ctx->pc = 0x3511DCu;
    {
        const bool branch_taken_0x3511dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3511E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3511DCu;
            // 0x3511e0: 0xe4e10000  swc1        $f1, 0x0($a3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3511dc) {
            ctx->pc = 0x3511E8u;
            goto label_3511e8;
        }
    }
    ctx->pc = 0x3511E4u;
label_3511e4:
    // 0x3511e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3511e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3511e8:
    // 0x3511e8: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
label_3511ec:
    if (ctx->pc == 0x3511ECu) {
        ctx->pc = 0x3511ECu;
            // 0x3511ec: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x3511F0u;
        goto label_3511f0;
    }
    ctx->pc = 0x3511E8u;
    {
        const bool branch_taken_0x3511e8 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x3511e8) {
            ctx->pc = 0x3511ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3511E8u;
            // 0x3511ec: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3511FCu;
            goto label_3511fc;
        }
    }
    ctx->pc = 0x3511F0u;
label_3511f0:
    // 0x3511f0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3511f0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3511f4:
    // 0x3511f4: 0x10000007  b           . + 4 + (0x7 << 2)
label_3511f8:
    if (ctx->pc == 0x3511F8u) {
        ctx->pc = 0x3511F8u;
            // 0x3511f8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3511FCu;
        goto label_3511fc;
    }
    ctx->pc = 0x3511F4u;
    {
        const bool branch_taken_0x3511f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3511F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3511F4u;
            // 0x3511f8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3511f4) {
            ctx->pc = 0x351214u;
            goto label_351214;
        }
    }
    ctx->pc = 0x3511FCu;
label_3511fc:
    // 0x3511fc: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x3511fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_351200:
    // 0x351200: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x351200u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_351204:
    // 0x351204: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x351204u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_351208:
    // 0x351208: 0x0  nop
    ctx->pc = 0x351208u;
    // NOP
label_35120c:
    // 0x35120c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x35120cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_351210:
    // 0x351210: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x351210u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_351214:
    // 0x351214: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x351214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_351218:
    // 0x351218: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x351218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_35121c:
    // 0x35121c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x35121cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_351220:
    // 0x351220: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x351220u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_351224:
    // 0x351224: 0x8c648a08  lw          $a0, -0x75F8($v1)
    ctx->pc = 0x351224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_351228:
    // 0x351228: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x351228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_35122c:
    // 0x35122c: 0x8e0300a4  lw          $v1, 0xA4($s0)
    ctx->pc = 0x35122cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_351230:
    // 0x351230: 0x42082  srl         $a0, $a0, 2
    ctx->pc = 0x351230u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
label_351234:
    // 0x351234: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x351234u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_351238:
    // 0x351238: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x351238u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
label_35123c:
    // 0x35123c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35123cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_351240:
    // 0x351240: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x351240u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_351244:
    // 0x351244: 0x3e00008  jr          $ra
label_351248:
    if (ctx->pc == 0x351248u) {
        ctx->pc = 0x351248u;
            // 0x351248: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x35124Cu;
        goto label_35124c;
    }
    ctx->pc = 0x351244u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x351248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x351244u;
            // 0x351248: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35124Cu;
label_35124c:
    // 0x35124c: 0x0  nop
    ctx->pc = 0x35124cu;
    // NOP
label_351250:
    // 0x351250: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x351250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_351254:
    // 0x351254: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x351254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_351258:
    // 0x351258: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x351258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_35125c:
    // 0x35125c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x35125cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_351260:
    // 0x351260: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x351260u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_351264:
    // 0x351264: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x351264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_351268:
    // 0x351268: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x351268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_35126c:
    // 0x35126c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35126cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_351270:
    // 0x351270: 0x9083004e  lbu         $v1, 0x4E($a0)
    ctx->pc = 0x351270u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 78)));
label_351274:
    // 0x351274: 0x10600123  beqz        $v1, . + 4 + (0x123 << 2)
label_351278:
    if (ctx->pc == 0x351278u) {
        ctx->pc = 0x351278u;
            // 0x351278: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35127Cu;
        goto label_35127c;
    }
    ctx->pc = 0x351274u;
    {
        const bool branch_taken_0x351274 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x351278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x351274u;
            // 0x351278: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351274) {
            ctx->pc = 0x351704u;
            goto label_351704;
        }
    }
    ctx->pc = 0x35127Cu;
label_35127c:
    // 0x35127c: 0xc0754b4  jal         func_1D52D0
label_351280:
    if (ctx->pc == 0x351280u) {
        ctx->pc = 0x351280u;
            // 0x351280: 0x26640440  addiu       $a0, $s3, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1088));
        ctx->pc = 0x351284u;
        goto label_351284;
    }
    ctx->pc = 0x35127Cu;
    SET_GPR_U32(ctx, 31, 0x351284u);
    ctx->pc = 0x351280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35127Cu;
            // 0x351280: 0x26640440  addiu       $a0, $s3, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351284u; }
        if (ctx->pc != 0x351284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351284u; }
        if (ctx->pc != 0x351284u) { return; }
    }
    ctx->pc = 0x351284u;
label_351284:
    // 0x351284: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x351284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_351288:
    // 0x351288: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x351288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_35128c:
    // 0x35128c: 0x5060011e  beql        $v1, $zero, . + 4 + (0x11E << 2)
label_351290:
    if (ctx->pc == 0x351290u) {
        ctx->pc = 0x351290u;
            // 0x351290: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x351294u;
        goto label_351294;
    }
    ctx->pc = 0x35128Cu;
    {
        const bool branch_taken_0x35128c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35128c) {
            ctx->pc = 0x351290u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35128Cu;
            // 0x351290: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x351708u;
            goto label_351708;
        }
    }
    ctx->pc = 0x351294u;
label_351294:
    // 0x351294: 0x8e640db0  lw          $a0, 0xDB0($s3)
    ctx->pc = 0x351294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3504)));
label_351298:
    // 0x351298: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x351298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_35129c:
    // 0x35129c: 0x10830119  beq         $a0, $v1, . + 4 + (0x119 << 2)
label_3512a0:
    if (ctx->pc == 0x3512A0u) {
        ctx->pc = 0x3512A4u;
        goto label_3512a4;
    }
    ctx->pc = 0x35129Cu;
    {
        const bool branch_taken_0x35129c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x35129c) {
            ctx->pc = 0x351704u;
            goto label_351704;
        }
    }
    ctx->pc = 0x3512A4u;
label_3512a4:
    // 0x3512a4: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x3512a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_3512a8:
    // 0x3512a8: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_3512ac:
    if (ctx->pc == 0x3512ACu) {
        ctx->pc = 0x3512B0u;
        goto label_3512b0;
    }
    ctx->pc = 0x3512A8u;
    {
        const bool branch_taken_0x3512a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3512a8) {
            ctx->pc = 0x3512C0u;
            goto label_3512c0;
        }
    }
    ctx->pc = 0x3512B0u;
label_3512b0:
    // 0x3512b0: 0x8e840060  lw          $a0, 0x60($s4)
    ctx->pc = 0x3512b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
label_3512b4:
    // 0x3512b4: 0x86630c68  lh          $v1, 0xC68($s3)
    ctx->pc = 0x3512b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 3176)));
label_3512b8:
    // 0x3512b8: 0x10830112  beq         $a0, $v1, . + 4 + (0x112 << 2)
label_3512bc:
    if (ctx->pc == 0x3512BCu) {
        ctx->pc = 0x3512C0u;
        goto label_3512c0;
    }
    ctx->pc = 0x3512B8u;
    {
        const bool branch_taken_0x3512b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3512b8) {
            ctx->pc = 0x351704u;
            goto label_351704;
        }
    }
    ctx->pc = 0x3512C0u;
label_3512c0:
    // 0x3512c0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3512c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3512c4:
    // 0x3512c4: 0x8c52e370  lw          $s2, -0x1C90($v0)
    ctx->pc = 0x3512c4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_3512c8:
    // 0x3512c8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3512c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3512cc:
    // 0x3512cc: 0x8c423da0  lw          $v0, 0x3DA0($v0)
    ctx->pc = 0x3512ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15776)));
label_3512d0:
    // 0x3512d0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3512d4:
    if (ctx->pc == 0x3512D4u) {
        ctx->pc = 0x3512D4u;
            // 0x3512d4: 0x26700c50  addiu       $s0, $s3, 0xC50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 3152));
        ctx->pc = 0x3512D8u;
        goto label_3512d8;
    }
    ctx->pc = 0x3512D0u;
    {
        const bool branch_taken_0x3512d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3512D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3512D0u;
            // 0x3512d4: 0x26700c50  addiu       $s0, $s3, 0xC50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 3152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3512d0) {
            ctx->pc = 0x3512F4u;
            goto label_3512f4;
        }
    }
    ctx->pc = 0x3512D8u;
label_3512d8:
    // 0x3512d8: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x3512d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_3512dc:
    // 0x3512dc: 0x3c044334  lui         $a0, 0x4334
    ctx->pc = 0x3512dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17204 << 16));
label_3512e0:
    // 0x3512e0: 0x8e620d98  lw          $v0, 0xD98($s3)
    ctx->pc = 0x3512e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3480)));
label_3512e4:
    // 0x3512e4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3512e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3512e8:
    // 0x3512e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3512e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3512ec:
    // 0x3512ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3512ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3512f0:
    // 0x3512f0: 0xac440298  sw          $a0, 0x298($v0)
    ctx->pc = 0x3512f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 664), GPR_U32(ctx, 4));
label_3512f4:
    // 0x3512f4: 0x8e630db0  lw          $v1, 0xDB0($s3)
    ctx->pc = 0x3512f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3504)));
label_3512f8:
    // 0x3512f8: 0x28620017  slti        $v0, $v1, 0x17
    ctx->pc = 0x3512f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)23) ? 1 : 0);
label_3512fc:
    // 0x3512fc: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_351300:
    if (ctx->pc == 0x351300u) {
        ctx->pc = 0x351300u;
            // 0x351300: 0x8e83006c  lw          $v1, 0x6C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
        ctx->pc = 0x351304u;
        goto label_351304;
    }
    ctx->pc = 0x3512FCu;
    {
        const bool branch_taken_0x3512fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3512fc) {
            ctx->pc = 0x351300u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3512FCu;
            // 0x351300: 0x8e83006c  lw          $v1, 0x6C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x351338u;
            goto label_351338;
        }
    }
    ctx->pc = 0x351304u;
label_351304:
    // 0x351304: 0x2861001a  slti        $at, $v1, 0x1A
    ctx->pc = 0x351304u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)26) ? 1 : 0);
label_351308:
    // 0x351308: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_35130c:
    if (ctx->pc == 0x35130Cu) {
        ctx->pc = 0x351310u;
        goto label_351310;
    }
    ctx->pc = 0x351308u;
    {
        const bool branch_taken_0x351308 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x351308) {
            ctx->pc = 0x351334u;
            goto label_351334;
        }
    }
    ctx->pc = 0x351310u;
label_351310:
    // 0x351310: 0x8e620a68  lw          $v0, 0xA68($s3)
    ctx->pc = 0x351310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2664)));
label_351314:
    // 0x351314: 0x26630a50  addiu       $v1, $s3, 0xA50
    ctx->pc = 0x351314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 2640));
label_351318:
    // 0x351318: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x351318u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_35131c:
    // 0x35131c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35131cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_351320:
    // 0x351320: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x351320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_351324:
    // 0x351324: 0x8c990014  lw          $t9, 0x14($a0)
    ctx->pc = 0x351324u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_351328:
    // 0x351328: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x351328u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_35132c:
    // 0x35132c: 0x320f809  jalr        $t9
label_351330:
    if (ctx->pc == 0x351330u) {
        ctx->pc = 0x351334u;
        goto label_351334;
    }
    ctx->pc = 0x35132Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x351334u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x351334u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x351334u; }
            if (ctx->pc != 0x351334u) { return; }
        }
        }
    }
    ctx->pc = 0x351334u;
label_351334:
    // 0x351334: 0x8e83006c  lw          $v1, 0x6C($s4)
    ctx->pc = 0x351334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_351338:
    // 0x351338: 0x4620017  bltzl       $v1, . + 4 + (0x17 << 2)
label_35133c:
    if (ctx->pc == 0x35133Cu) {
        ctx->pc = 0x35133Cu;
            // 0x35133c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->pc = 0x351340u;
        goto label_351340;
    }
    ctx->pc = 0x351338u;
    {
        const bool branch_taken_0x351338 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x351338) {
            ctx->pc = 0x35133Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x351338u;
            // 0x35133c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
            ctx->pc = 0x351398u;
            goto label_351398;
        }
    }
    ctx->pc = 0x351340u;
label_351340:
    // 0x351340: 0xa3a3007f  sb          $v1, 0x7F($sp)
    ctx->pc = 0x351340u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 127), (uint8_t)GPR_U32(ctx, 3));
label_351344:
    // 0x351344: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x351344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_351348:
    // 0x351348: 0x8c430c78  lw          $v1, 0xC78($v0)
    ctx->pc = 0x351348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
label_35134c:
    // 0x35134c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x35134cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_351350:
    // 0x351350: 0x266405f0  addiu       $a0, $s3, 0x5F0
    ctx->pc = 0x351350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1520));
label_351354:
    // 0x351354: 0x266602c0  addiu       $a2, $s3, 0x2C0
    ctx->pc = 0x351354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
label_351358:
    // 0x351358: 0x26670820  addiu       $a3, $s3, 0x820
    ctx->pc = 0x351358u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 2080));
label_35135c:
    // 0x35135c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x35135cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_351360:
    // 0x351360: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x351360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_351364:
    // 0x351364: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x351364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_351368:
    // 0x351368: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x351368u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_35136c:
    // 0x35136c: 0x27a9007f  addiu       $t1, $sp, 0x7F
    ctx->pc = 0x35136cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 127));
label_351370:
    // 0x351370: 0xc0b8704  jal         func_2E1C10
label_351374:
    if (ctx->pc == 0x351374u) {
        ctx->pc = 0x351374u;
            // 0x351374: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x351378u;
        goto label_351378;
    }
    ctx->pc = 0x351370u;
    SET_GPR_U32(ctx, 31, 0x351378u);
    ctx->pc = 0x351374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x351370u;
            // 0x351374: 0x140582d  daddu       $t3, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1C10u;
    if (runtime->hasFunction(0x2E1C10u)) {
        auto targetFn = runtime->lookupFunction(0x2E1C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351378u; }
        if (ctx->pc != 0x351378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E1C10_0x2e1c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351378u; }
        if (ctx->pc != 0x351378u) { return; }
    }
    ctx->pc = 0x351378u;
label_351378:
    // 0x351378: 0x96620646  lhu         $v0, 0x646($s3)
    ctx->pc = 0x351378u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 1606)));
label_35137c:
    // 0x35137c: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_351380:
    if (ctx->pc == 0x351380u) {
        ctx->pc = 0x351380u;
            // 0x351380: 0x8e620e0c  lw          $v0, 0xE0C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3596)));
        ctx->pc = 0x351384u;
        goto label_351384;
    }
    ctx->pc = 0x35137Cu;
    {
        const bool branch_taken_0x35137c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35137c) {
            ctx->pc = 0x351380u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35137Cu;
            // 0x351380: 0x8e620e0c  lw          $v0, 0xE0C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3596)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3513B4u;
            goto label_3513b4;
        }
    }
    ctx->pc = 0x351384u;
label_351384:
    // 0x351384: 0x26640580  addiu       $a0, $s3, 0x580
    ctx->pc = 0x351384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1408));
label_351388:
    // 0x351388: 0xc0ab808  jal         func_2AE020
label_35138c:
    if (ctx->pc == 0x35138Cu) {
        ctx->pc = 0x35138Cu;
            // 0x35138c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x351390u;
        goto label_351390;
    }
    ctx->pc = 0x351388u;
    SET_GPR_U32(ctx, 31, 0x351390u);
    ctx->pc = 0x35138Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x351388u;
            // 0x35138c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE020u;
    if (runtime->hasFunction(0x2AE020u)) {
        auto targetFn = runtime->lookupFunction(0x2AE020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351390u; }
        if (ctx->pc != 0x351390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE020_0x2ae020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351390u; }
        if (ctx->pc != 0x351390u) { return; }
    }
    ctx->pc = 0x351390u;
label_351390:
    // 0x351390: 0x10000007  b           . + 4 + (0x7 << 2)
label_351394:
    if (ctx->pc == 0x351394u) {
        ctx->pc = 0x351398u;
        goto label_351398;
    }
    ctx->pc = 0x351390u;
    {
        const bool branch_taken_0x351390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x351390) {
            ctx->pc = 0x3513B0u;
            goto label_3513b0;
        }
    }
    ctx->pc = 0x351398u;
label_351398:
    // 0x351398: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_35139c:
    if (ctx->pc == 0x35139Cu) {
        ctx->pc = 0x3513A0u;
        goto label_3513a0;
    }
    ctx->pc = 0x351398u;
    {
        const bool branch_taken_0x351398 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x351398) {
            ctx->pc = 0x3513B0u;
            goto label_3513b0;
        }
    }
    ctx->pc = 0x3513A0u;
label_3513a0:
    // 0x3513a0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3513a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_3513a4:
    // 0x3513a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3513a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3513a8:
    // 0x3513a8: 0xc0ab5f0  jal         func_2AD7C0
label_3513ac:
    if (ctx->pc == 0x3513ACu) {
        ctx->pc = 0x3513ACu;
            // 0x3513ac: 0x26640580  addiu       $a0, $s3, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1408));
        ctx->pc = 0x3513B0u;
        goto label_3513b0;
    }
    ctx->pc = 0x3513A8u;
    SET_GPR_U32(ctx, 31, 0x3513B0u);
    ctx->pc = 0x3513ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3513A8u;
            // 0x3513ac: 0x26640580  addiu       $a0, $s3, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AD7C0u;
    if (runtime->hasFunction(0x2AD7C0u)) {
        auto targetFn = runtime->lookupFunction(0x2AD7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3513B0u; }
        if (ctx->pc != 0x3513B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AD7C0_0x2ad7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3513B0u; }
        if (ctx->pc != 0x3513B0u) { return; }
    }
    ctx->pc = 0x3513B0u;
label_3513b0:
    // 0x3513b0: 0x8e620e0c  lw          $v0, 0xE0C($s3)
    ctx->pc = 0x3513b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3596)));
label_3513b4:
    // 0x3513b4: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x3513b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_3513b8:
    // 0x3513b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3513b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3513bc:
    // 0x3513bc: 0xae620e0c  sw          $v0, 0xE0C($s3)
    ctx->pc = 0x3513bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3596), GPR_U32(ctx, 2));
label_3513c0:
    // 0x3513c0: 0x8e620db0  lw          $v0, 0xDB0($s3)
    ctx->pc = 0x3513c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3504)));
label_3513c4:
    // 0x3513c4: 0x50450009  beql        $v0, $a1, . + 4 + (0x9 << 2)
label_3513c8:
    if (ctx->pc == 0x3513C8u) {
        ctx->pc = 0x3513C8u;
            // 0x3513c8: 0x8e620e30  lw          $v0, 0xE30($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3632)));
        ctx->pc = 0x3513CCu;
        goto label_3513cc;
    }
    ctx->pc = 0x3513C4u;
    {
        const bool branch_taken_0x3513c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x3513c4) {
            ctx->pc = 0x3513C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3513C4u;
            // 0x3513c8: 0x8e620e30  lw          $v0, 0xE30($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3632)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3513ECu;
            goto label_3513ec;
        }
    }
    ctx->pc = 0x3513CCu;
label_3513cc:
    // 0x3513cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3513ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3513d0:
    // 0x3513d0: 0xa6620c6a  sh          $v0, 0xC6A($s3)
    ctx->pc = 0x3513d0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 3178), (uint16_t)GPR_U32(ctx, 2));
label_3513d4:
    // 0x3513d4: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x3513d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3513d8:
    // 0x3513d8: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x3513d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_3513dc:
    // 0x3513dc: 0x320f809  jalr        $t9
label_3513e0:
    if (ctx->pc == 0x3513E0u) {
        ctx->pc = 0x3513E0u;
            // 0x3513e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3513E4u;
        goto label_3513e4;
    }
    ctx->pc = 0x3513DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3513E4u);
        ctx->pc = 0x3513E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3513DCu;
            // 0x3513e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3513E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3513E4u; }
            if (ctx->pc != 0x3513E4u) { return; }
        }
        }
    }
    ctx->pc = 0x3513E4u;
label_3513e4:
    // 0x3513e4: 0x10000015  b           . + 4 + (0x15 << 2)
label_3513e8:
    if (ctx->pc == 0x3513E8u) {
        ctx->pc = 0x3513E8u;
            // 0x3513e8: 0x8e820070  lw          $v0, 0x70($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
        ctx->pc = 0x3513ECu;
        goto label_3513ec;
    }
    ctx->pc = 0x3513E4u;
    {
        const bool branch_taken_0x3513e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3513E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3513E4u;
            // 0x3513e8: 0x8e820070  lw          $v0, 0x70($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3513e4) {
            ctx->pc = 0x35143Cu;
            goto label_35143c;
        }
    }
    ctx->pc = 0x3513ECu;
label_3513ec:
    // 0x3513ec: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x3513ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_3513f0:
    // 0x3513f0: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_3513f4:
    if (ctx->pc == 0x3513F4u) {
        ctx->pc = 0x3513F4u;
            // 0x3513f4: 0x8e620d74  lw          $v0, 0xD74($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3444)));
        ctx->pc = 0x3513F8u;
        goto label_3513f8;
    }
    ctx->pc = 0x3513F0u;
    {
        const bool branch_taken_0x3513f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3513f0) {
            ctx->pc = 0x3513F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3513F0u;
            // 0x3513f4: 0x8e620d74  lw          $v0, 0xD74($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3444)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x351420u;
            goto label_351420;
        }
    }
    ctx->pc = 0x3513F8u;
label_3513f8:
    // 0x3513f8: 0x3c034094  lui         $v1, 0x4094
    ctx->pc = 0x3513f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16532 << 16));
label_3513fc:
    // 0x3513fc: 0x3c02bab6  lui         $v0, 0xBAB6
    ctx->pc = 0x3513fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47798 << 16));
label_351400:
    // 0x351400: 0xae630de0  sw          $v1, 0xDE0($s3)
    ctx->pc = 0x351400u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3552), GPR_U32(ctx, 3));
label_351404:
    // 0x351404: 0x34420b61  ori         $v0, $v0, 0xB61
    ctx->pc = 0x351404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2913);
label_351408:
    // 0x351408: 0xae620de8  sw          $v0, 0xDE8($s3)
    ctx->pc = 0x351408u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3560), GPR_U32(ctx, 2));
label_35140c:
    // 0x35140c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x35140cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_351410:
    // 0x351410: 0xae620db8  sw          $v0, 0xDB8($s3)
    ctx->pc = 0x351410u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3512), GPR_U32(ctx, 2));
label_351414:
    // 0x351414: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x351414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_351418:
    // 0x351418: 0xae620698  sw          $v0, 0x698($s3)
    ctx->pc = 0x351418u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1688), GPR_U32(ctx, 2));
label_35141c:
    // 0x35141c: 0x8e620d74  lw          $v0, 0xD74($s3)
    ctx->pc = 0x35141cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3444)));
label_351420:
    // 0x351420: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x351420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_351424:
    // 0x351424: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x351424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_351428:
    // 0x351428: 0xac4002b0  sw          $zero, 0x2B0($v0)
    ctx->pc = 0x351428u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 688), GPR_U32(ctx, 0));
label_35142c:
    // 0x35142c: 0xae600e1c  sw          $zero, 0xE1C($s3)
    ctx->pc = 0x35142cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3612), GPR_U32(ctx, 0));
label_351430:
    // 0x351430: 0xc07649c  jal         func_1D9270
label_351434:
    if (ctx->pc == 0x351434u) {
        ctx->pc = 0x351434u;
            // 0x351434: 0xae600e30  sw          $zero, 0xE30($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3632), GPR_U32(ctx, 0));
        ctx->pc = 0x351438u;
        goto label_351438;
    }
    ctx->pc = 0x351430u;
    SET_GPR_U32(ctx, 31, 0x351438u);
    ctx->pc = 0x351434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x351430u;
            // 0x351434: 0xae600e30  sw          $zero, 0xE30($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3632), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9270u;
    if (runtime->hasFunction(0x1D9270u)) {
        auto targetFn = runtime->lookupFunction(0x1D9270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351438u; }
        if (ctx->pc != 0x351438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9270_0x1d9270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351438u; }
        if (ctx->pc != 0x351438u) { return; }
    }
    ctx->pc = 0x351438u;
label_351438:
    // 0x351438: 0x8e820070  lw          $v0, 0x70($s4)
    ctx->pc = 0x351438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_35143c:
    // 0x35143c: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_351440:
    if (ctx->pc == 0x351440u) {
        ctx->pc = 0x351440u;
            // 0x351440: 0x8e630d60  lw          $v1, 0xD60($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3424)));
        ctx->pc = 0x351444u;
        goto label_351444;
    }
    ctx->pc = 0x35143Cu;
    {
        const bool branch_taken_0x35143c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35143c) {
            ctx->pc = 0x351440u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35143Cu;
            // 0x351440: 0x8e630d60  lw          $v1, 0xD60($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3424)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x351460u;
            goto label_351460;
        }
    }
    ctx->pc = 0x351444u;
label_351444:
    // 0x351444: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x351444u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_351448:
    // 0x351448: 0x0  nop
    ctx->pc = 0x351448u;
    // NOP
label_35144c:
    // 0x35144c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x35144cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_351450:
    // 0x351450: 0x8e620d60  lw          $v0, 0xD60($s3)
    ctx->pc = 0x351450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3424)));
label_351454:
    // 0x351454: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x351454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_351458:
    // 0x351458: 0x10000004  b           . + 4 + (0x4 << 2)
label_35145c:
    if (ctx->pc == 0x35145Cu) {
        ctx->pc = 0x35145Cu;
            // 0x35145c: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->pc = 0x351460u;
        goto label_351460;
    }
    ctx->pc = 0x351458u;
    {
        const bool branch_taken_0x351458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35145Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x351458u;
            // 0x35145c: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351458) {
            ctx->pc = 0x35146Cu;
            goto label_35146c;
        }
    }
    ctx->pc = 0x351460u;
label_351460:
    // 0x351460: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x351460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_351464:
    // 0x351464: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x351464u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_351468:
    // 0x351468: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x351468u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
label_35146c:
    // 0x35146c: 0x8e620e34  lw          $v0, 0xE34($s3)
    ctx->pc = 0x35146cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3636)));
label_351470:
    // 0x351470: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x351470u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_351474:
    // 0x351474: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_351478:
    if (ctx->pc == 0x351478u) {
        ctx->pc = 0x351478u;
            // 0x351478: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35147Cu;
        goto label_35147c;
    }
    ctx->pc = 0x351474u;
    {
        const bool branch_taken_0x351474 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x351478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x351474u;
            // 0x351478: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351474) {
            ctx->pc = 0x35148Cu;
            goto label_35148c;
        }
    }
    ctx->pc = 0x35147Cu;
label_35147c:
    // 0x35147c: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x35147cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_351480:
    // 0x351480: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_351484:
    if (ctx->pc == 0x351484u) {
        ctx->pc = 0x351488u;
        goto label_351488;
    }
    ctx->pc = 0x351480u;
    {
        const bool branch_taken_0x351480 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x351480) {
            ctx->pc = 0x35148Cu;
            goto label_35148c;
        }
    }
    ctx->pc = 0x351488u;
label_351488:
    // 0x351488: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x351488u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35148c:
    // 0x35148c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_351490:
    if (ctx->pc == 0x351490u) {
        ctx->pc = 0x351494u;
        goto label_351494;
    }
    ctx->pc = 0x35148Cu;
    {
        const bool branch_taken_0x35148c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35148c) {
            ctx->pc = 0x3514A8u;
            goto label_3514a8;
        }
    }
    ctx->pc = 0x351494u;
label_351494:
    // 0x351494: 0xc075eb4  jal         func_1D7AD0
label_351498:
    if (ctx->pc == 0x351498u) {
        ctx->pc = 0x351498u;
            // 0x351498: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35149Cu;
        goto label_35149c;
    }
    ctx->pc = 0x351494u;
    SET_GPR_U32(ctx, 31, 0x35149Cu);
    ctx->pc = 0x351498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x351494u;
            // 0x351498: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35149Cu; }
        if (ctx->pc != 0x35149Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35149Cu; }
        if (ctx->pc != 0x35149Cu) { return; }
    }
    ctx->pc = 0x35149Cu;
label_35149c:
    // 0x35149c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3514a0:
    if (ctx->pc == 0x3514A0u) {
        ctx->pc = 0x3514A4u;
        goto label_3514a4;
    }
    ctx->pc = 0x35149Cu;
    {
        const bool branch_taken_0x35149c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35149c) {
            ctx->pc = 0x3514A8u;
            goto label_3514a8;
        }
    }
    ctx->pc = 0x3514A4u;
label_3514a4:
    // 0x3514a4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3514a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3514a8:
    // 0x3514a8: 0x56200006  bnel        $s1, $zero, . + 4 + (0x6 << 2)
label_3514ac:
    if (ctx->pc == 0x3514ACu) {
        ctx->pc = 0x3514ACu;
            // 0x3514ac: 0x8e630e0c  lw          $v1, 0xE0C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3596)));
        ctx->pc = 0x3514B0u;
        goto label_3514b0;
    }
    ctx->pc = 0x3514A8u;
    {
        const bool branch_taken_0x3514a8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3514a8) {
            ctx->pc = 0x3514ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3514A8u;
            // 0x3514ac: 0x8e630e0c  lw          $v1, 0xE0C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3596)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3514C4u;
            goto label_3514c4;
        }
    }
    ctx->pc = 0x3514B0u;
label_3514b0:
    // 0x3514b0: 0x8e630e34  lw          $v1, 0xE34($s3)
    ctx->pc = 0x3514b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3636)));
label_3514b4:
    // 0x3514b4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3514b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3514b8:
    // 0x3514b8: 0x5462000f  bnel        $v1, $v0, . + 4 + (0xF << 2)
label_3514bc:
    if (ctx->pc == 0x3514BCu) {
        ctx->pc = 0x3514BCu;
            // 0x3514bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3514C0u;
        goto label_3514c0;
    }
    ctx->pc = 0x3514B8u;
    {
        const bool branch_taken_0x3514b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3514b8) {
            ctx->pc = 0x3514BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3514B8u;
            // 0x3514bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3514F8u;
            goto label_3514f8;
        }
    }
    ctx->pc = 0x3514C0u;
label_3514c0:
    // 0x3514c0: 0x8e630e0c  lw          $v1, 0xE0C($s3)
    ctx->pc = 0x3514c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3596)));
label_3514c4:
    // 0x3514c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3514c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3514c8:
    // 0x3514c8: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_3514cc:
    if (ctx->pc == 0x3514CCu) {
        ctx->pc = 0x3514D0u;
        goto label_3514d0;
    }
    ctx->pc = 0x3514C8u;
    {
        const bool branch_taken_0x3514c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3514c8) {
            ctx->pc = 0x3514F4u;
            goto label_3514f4;
        }
    }
    ctx->pc = 0x3514D0u;
label_3514d0:
    // 0x3514d0: 0xc040180  jal         func_100600
label_3514d4:
    if (ctx->pc == 0x3514D4u) {
        ctx->pc = 0x3514D4u;
            // 0x3514d4: 0x24040084  addiu       $a0, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->pc = 0x3514D8u;
        goto label_3514d8;
    }
    ctx->pc = 0x3514D0u;
    SET_GPR_U32(ctx, 31, 0x3514D8u);
    ctx->pc = 0x3514D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3514D0u;
            // 0x3514d4: 0x24040084  addiu       $a0, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3514D8u; }
        if (ctx->pc != 0x3514D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3514D8u; }
        if (ctx->pc != 0x3514D8u) { return; }
    }
    ctx->pc = 0x3514D8u;
label_3514d8:
    // 0x3514d8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3514dc:
    if (ctx->pc == 0x3514DCu) {
        ctx->pc = 0x3514E0u;
        goto label_3514e0;
    }
    ctx->pc = 0x3514D8u;
    {
        const bool branch_taken_0x3514d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3514d8) {
            ctx->pc = 0x3514F4u;
            goto label_3514f4;
        }
    }
    ctx->pc = 0x3514E0u;
label_3514e0:
    // 0x3514e0: 0x8e650d98  lw          $a1, 0xD98($s3)
    ctx->pc = 0x3514e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3480)));
label_3514e4:
    // 0x3514e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3514e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3514e8:
    // 0x3514e8: 0x8e660e0c  lw          $a2, 0xE0C($s3)
    ctx->pc = 0x3514e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3596)));
label_3514ec:
    // 0x3514ec: 0xc0f3e5c  jal         func_3CF970
label_3514f0:
    if (ctx->pc == 0x3514F0u) {
        ctx->pc = 0x3514F0u;
            // 0x3514f0: 0x26670e0c  addiu       $a3, $s3, 0xE0C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 3596));
        ctx->pc = 0x3514F4u;
        goto label_3514f4;
    }
    ctx->pc = 0x3514ECu;
    SET_GPR_U32(ctx, 31, 0x3514F4u);
    ctx->pc = 0x3514F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3514ECu;
            // 0x3514f0: 0x26670e0c  addiu       $a3, $s3, 0xE0C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 3596));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3CF970u;
    if (runtime->hasFunction(0x3CF970u)) {
        auto targetFn = runtime->lookupFunction(0x3CF970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3514F4u; }
        if (ctx->pc != 0x3514F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003CF970_0x3cf970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3514F4u; }
        if (ctx->pc != 0x3514F4u) { return; }
    }
    ctx->pc = 0x3514F4u;
label_3514f4:
    // 0x3514f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3514f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3514f8:
    // 0x3514f8: 0xc04f278  jal         func_13C9E0
label_3514fc:
    if (ctx->pc == 0x3514FCu) {
        ctx->pc = 0x3514FCu;
            // 0x3514fc: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->pc = 0x351500u;
        goto label_351500;
    }
    ctx->pc = 0x3514F8u;
    SET_GPR_U32(ctx, 31, 0x351500u);
    ctx->pc = 0x3514FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3514F8u;
            // 0x3514fc: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351500u; }
        if (ctx->pc != 0x351500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351500u; }
        if (ctx->pc != 0x351500u) { return; }
    }
    ctx->pc = 0x351500u;
label_351500:
    // 0x351500: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x351500u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
label_351504:
    // 0x351504: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x351504u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_351508:
    // 0x351508: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x351508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_35150c:
    // 0x35150c: 0xc04cca0  jal         func_133280
label_351510:
    if (ctx->pc == 0x351510u) {
        ctx->pc = 0x351510u;
            // 0x351510: 0x24c636b0  addiu       $a2, $a2, 0x36B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 14000));
        ctx->pc = 0x351514u;
        goto label_351514;
    }
    ctx->pc = 0x35150Cu;
    SET_GPR_U32(ctx, 31, 0x351514u);
    ctx->pc = 0x351510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35150Cu;
            // 0x351510: 0x24c636b0  addiu       $a2, $a2, 0x36B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 14000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351514u; }
        if (ctx->pc != 0x351514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351514u; }
        if (ctx->pc != 0x351514u) { return; }
    }
    ctx->pc = 0x351514u;
label_351514:
    // 0x351514: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x351514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_351518:
    // 0x351518: 0xc04cc44  jal         func_133110
label_35151c:
    if (ctx->pc == 0x35151Cu) {
        ctx->pc = 0x35151Cu;
            // 0x35151c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x351520u;
        goto label_351520;
    }
    ctx->pc = 0x351518u;
    SET_GPR_U32(ctx, 31, 0x351520u);
    ctx->pc = 0x35151Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x351518u;
            // 0x35151c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351520u; }
        if (ctx->pc != 0x351520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351520u; }
        if (ctx->pc != 0x351520u) { return; }
    }
    ctx->pc = 0x351520u;
label_351520:
    // 0x351520: 0x26640560  addiu       $a0, $s3, 0x560
    ctx->pc = 0x351520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1376));
label_351524:
    // 0x351524: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x351524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_351528:
    // 0x351528: 0xc075378  jal         func_1D4DE0
label_35152c:
    if (ctx->pc == 0x35152Cu) {
        ctx->pc = 0x35152Cu;
            // 0x35152c: 0x266608e0  addiu       $a2, $s3, 0x8E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 2272));
        ctx->pc = 0x351530u;
        goto label_351530;
    }
    ctx->pc = 0x351528u;
    SET_GPR_U32(ctx, 31, 0x351530u);
    ctx->pc = 0x35152Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x351528u;
            // 0x35152c: 0x266608e0  addiu       $a2, $s3, 0x8E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 2272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351530u; }
        if (ctx->pc != 0x351530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351530u; }
        if (ctx->pc != 0x351530u) { return; }
    }
    ctx->pc = 0x351530u;
label_351530:
    // 0x351530: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x351530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_351534:
    // 0x351534: 0x3c0238c9  lui         $v0, 0x38C9
    ctx->pc = 0x351534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14537 << 16));
label_351538:
    // 0x351538: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x351538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_35153c:
    // 0x35153c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x35153cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_351540:
    // 0x351540: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x351540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_351544:
    // 0x351544: 0x266505d0  addiu       $a1, $s3, 0x5D0
    ctx->pc = 0x351544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1488));
label_351548:
    // 0x351548: 0x46800920  cvt.s.w     $f4, $f1
    ctx->pc = 0x351548u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_35154c:
    // 0x35154c: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x35154cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_351550:
    // 0x351550: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x351550u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_351554:
    // 0x351554: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x351554u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_351558:
    // 0x351558: 0x0  nop
    ctx->pc = 0x351558u;
    // NOP
label_35155c:
    // 0x35155c: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x35155cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_351560:
    // 0x351560: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x351560u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_351564:
    // 0x351564: 0x4604181c  madd.s      $f0, $f3, $f4
    ctx->pc = 0x351564u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
label_351568:
    // 0x351568: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x351568u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_35156c:
    // 0x35156c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x35156cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_351570:
    // 0x351570: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x351570u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_351574:
    // 0x351574: 0xc04cc08  jal         func_133020
label_351578:
    if (ctx->pc == 0x351578u) {
        ctx->pc = 0x351578u;
            // 0x351578: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->pc = 0x35157Cu;
        goto label_35157c;
    }
    ctx->pc = 0x351574u;
    SET_GPR_U32(ctx, 31, 0x35157Cu);
    ctx->pc = 0x351578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x351574u;
            // 0x351578: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35157Cu; }
        if (ctx->pc != 0x35157Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35157Cu; }
        if (ctx->pc != 0x35157Cu) { return; }
    }
    ctx->pc = 0x35157Cu;
label_35157c:
    // 0x35157c: 0xc0477fe  jal         func_11DFF8
label_351580:
    if (ctx->pc == 0x351580u) {
        ctx->pc = 0x351580u;
            // 0x351580: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x351584u;
        goto label_351584;
    }
    ctx->pc = 0x35157Cu;
    SET_GPR_U32(ctx, 31, 0x351584u);
    ctx->pc = 0x351580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35157Cu;
            // 0x351580: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DFF8u;
    if (runtime->hasFunction(0x11DFF8u)) {
        auto targetFn = runtime->lookupFunction(0x11DFF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351584u; }
        if (ctx->pc != 0x351584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DFF8_0x11dff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351584u; }
        if (ctx->pc != 0x351584u) { return; }
    }
    ctx->pc = 0x351584u;
label_351584:
    // 0x351584: 0x3c03bfc9  lui         $v1, 0xBFC9
    ctx->pc = 0x351584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49097 << 16));
label_351588:
    // 0x351588: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x351588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_35158c:
    // 0x35158c: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x35158cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_351590:
    // 0x351590: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x351590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_351594:
    // 0x351594: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x351594u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_351598:
    // 0x351598: 0x0  nop
    ctx->pc = 0x351598u;
    // NOP
label_35159c:
    // 0x35159c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x35159cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3515a0:
    // 0x3515a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3515a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3515a4:
    // 0x3515a4: 0x0  nop
    ctx->pc = 0x3515a4u;
    // NOP
label_3515a8:
    // 0x3515a8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3515a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3515ac:
    // 0x3515ac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3515acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3515b0:
    // 0x3515b0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3515b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3515b4:
    // 0x3515b4: 0x0  nop
    ctx->pc = 0x3515b4u;
    // NOP
label_3515b8:
    // 0x3515b8: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x3515b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_3515bc:
    // 0x3515bc: 0x8e620a74  lw          $v0, 0xA74($s3)
    ctx->pc = 0x3515bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2676)));
label_3515c0:
    // 0x3515c0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_3515c4:
    if (ctx->pc == 0x3515C4u) {
        ctx->pc = 0x3515C8u;
        goto label_3515c8;
    }
    ctx->pc = 0x3515C0u;
    {
        const bool branch_taken_0x3515c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3515c0) {
            ctx->pc = 0x3515D4u;
            goto label_3515d4;
        }
    }
    ctx->pc = 0x3515C8u;
label_3515c8:
    // 0x3515c8: 0xc6800068  lwc1        $f0, 0x68($s4)
    ctx->pc = 0x3515c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3515cc:
    // 0x3515cc: 0xe6600de4  swc1        $f0, 0xDE4($s3)
    ctx->pc = 0x3515ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3556), bits); }
label_3515d0:
    // 0x3515d0: 0xe6600e1c  swc1        $f0, 0xE1C($s3)
    ctx->pc = 0x3515d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3612), bits); }
label_3515d4:
    // 0x3515d4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3515d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3515d8:
    // 0x3515d8: 0x26640320  addiu       $a0, $s3, 0x320
    ctx->pc = 0x3515d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 800));
label_3515dc:
    // 0x3515dc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3515dcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3515e0:
    // 0x3515e0: 0xc04cbd8  jal         func_132F60
label_3515e4:
    if (ctx->pc == 0x3515E4u) {
        ctx->pc = 0x3515E4u;
            // 0x3515e4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3515E8u;
        goto label_3515e8;
    }
    ctx->pc = 0x3515E0u;
    SET_GPR_U32(ctx, 31, 0x3515E8u);
    ctx->pc = 0x3515E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3515E0u;
            // 0x3515e4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3515E8u; }
        if (ctx->pc != 0x3515E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3515E8u; }
        if (ctx->pc != 0x3515E8u) { return; }
    }
    ctx->pc = 0x3515E8u;
label_3515e8:
    // 0x3515e8: 0x8e830060  lw          $v1, 0x60($s4)
    ctx->pc = 0x3515e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
label_3515ec:
    // 0x3515ec: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x3515ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
label_3515f0:
    // 0x3515f0: 0x344501a9  ori         $a1, $v0, 0x1A9
    ctx->pc = 0x3515f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
label_3515f4:
    // 0x3515f4: 0xa6030018  sh          $v1, 0x18($s0)
    ctx->pc = 0x3515f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 3));
label_3515f8:
    // 0x3515f8: 0x8e700d60  lw          $s0, 0xD60($s3)
    ctx->pc = 0x3515f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3424)));
label_3515fc:
    // 0x3515fc: 0x8e190030  lw          $t9, 0x30($s0)
    ctx->pc = 0x3515fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_351600:
    // 0x351600: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x351600u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_351604:
    // 0x351604: 0x320f809  jalr        $t9
label_351608:
    if (ctx->pc == 0x351608u) {
        ctx->pc = 0x351608u;
            // 0x351608: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35160Cu;
        goto label_35160c;
    }
    ctx->pc = 0x351604u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35160Cu);
        ctx->pc = 0x351608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x351604u;
            // 0x351608: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x35160Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35160Cu; }
            if (ctx->pc != 0x35160Cu) { return; }
        }
        }
    }
    ctx->pc = 0x35160Cu;
label_35160c:
    // 0x35160c: 0x8e190030  lw          $t9, 0x30($s0)
    ctx->pc = 0x35160cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_351610:
    // 0x351610: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x351610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_351614:
    // 0x351614: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x351614u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_351618:
    // 0x351618: 0x320f809  jalr        $t9
label_35161c:
    if (ctx->pc == 0x35161Cu) {
        ctx->pc = 0x35161Cu;
            // 0x35161c: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x351620u;
        goto label_351620;
    }
    ctx->pc = 0x351618u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x351620u);
        ctx->pc = 0x35161Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x351618u;
            // 0x35161c: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x351620u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x351620u; }
            if (ctx->pc != 0x351620u) { return; }
        }
        }
    }
    ctx->pc = 0x351620u;
label_351620:
    // 0x351620: 0x8e630e34  lw          $v1, 0xE34($s3)
    ctx->pc = 0x351620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3636)));
label_351624:
    // 0x351624: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x351624u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_351628:
    // 0x351628: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_35162c:
    if (ctx->pc == 0x35162Cu) {
        ctx->pc = 0x35162Cu;
            // 0x35162c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x351630u;
        goto label_351630;
    }
    ctx->pc = 0x351628u;
    {
        const bool branch_taken_0x351628 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x35162Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x351628u;
            // 0x35162c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351628) {
            ctx->pc = 0x351640u;
            goto label_351640;
        }
    }
    ctx->pc = 0x351630u;
label_351630:
    // 0x351630: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x351630u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_351634:
    // 0x351634: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_351638:
    if (ctx->pc == 0x351638u) {
        ctx->pc = 0x35163Cu;
        goto label_35163c;
    }
    ctx->pc = 0x351634u;
    {
        const bool branch_taken_0x351634 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x351634) {
            ctx->pc = 0x351640u;
            goto label_351640;
        }
    }
    ctx->pc = 0x35163Cu;
label_35163c:
    // 0x35163c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35163cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_351640:
    // 0x351640: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_351644:
    if (ctx->pc == 0x351644u) {
        ctx->pc = 0x351648u;
        goto label_351648;
    }
    ctx->pc = 0x351640u;
    {
        const bool branch_taken_0x351640 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x351640) {
            ctx->pc = 0x35165Cu;
            goto label_35165c;
        }
    }
    ctx->pc = 0x351648u;
label_351648:
    // 0x351648: 0xc075eb4  jal         func_1D7AD0
label_35164c:
    if (ctx->pc == 0x35164Cu) {
        ctx->pc = 0x35164Cu;
            // 0x35164c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x351650u;
        goto label_351650;
    }
    ctx->pc = 0x351648u;
    SET_GPR_U32(ctx, 31, 0x351650u);
    ctx->pc = 0x35164Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x351648u;
            // 0x35164c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351650u; }
        if (ctx->pc != 0x351650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351650u; }
        if (ctx->pc != 0x351650u) { return; }
    }
    ctx->pc = 0x351650u;
label_351650:
    // 0x351650: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_351654:
    if (ctx->pc == 0x351654u) {
        ctx->pc = 0x351658u;
        goto label_351658;
    }
    ctx->pc = 0x351650u;
    {
        const bool branch_taken_0x351650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x351650) {
            ctx->pc = 0x35165Cu;
            goto label_35165c;
        }
    }
    ctx->pc = 0x351658u;
label_351658:
    // 0x351658: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x351658u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35165c:
    // 0x35165c: 0x12000029  beqz        $s0, . + 4 + (0x29 << 2)
label_351660:
    if (ctx->pc == 0x351660u) {
        ctx->pc = 0x351664u;
        goto label_351664;
    }
    ctx->pc = 0x35165Cu;
    {
        const bool branch_taken_0x35165c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x35165c) {
            ctx->pc = 0x351704u;
            goto label_351704;
        }
    }
    ctx->pc = 0x351664u;
label_351664:
    // 0x351664: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x351664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_351668:
    // 0x351668: 0x8e650d98  lw          $a1, 0xD98($s3)
    ctx->pc = 0x351668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3480)));
label_35166c:
    // 0x35166c: 0x90643db0  lbu         $a0, 0x3DB0($v1)
    ctx->pc = 0x35166cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 15792)));
label_351670:
    // 0x351670: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x351670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_351674:
    // 0x351674: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x351674u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
label_351678:
    // 0x351678: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x351678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_35167c:
    // 0x35167c: 0x1c600021  bgtz        $v1, . + 4 + (0x21 << 2)
label_351680:
    if (ctx->pc == 0x351680u) {
        ctx->pc = 0x351684u;
        goto label_351684;
    }
    ctx->pc = 0x35167Cu;
    {
        const bool branch_taken_0x35167c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x35167c) {
            ctx->pc = 0x351704u;
            goto label_351704;
        }
    }
    ctx->pc = 0x351684u;
label_351684:
    // 0x351684: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x351684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_351688:
    // 0x351688: 0x240400d0  addiu       $a0, $zero, 0xD0
    ctx->pc = 0x351688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_35168c:
    // 0x35168c: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x35168cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_351690:
    // 0x351690: 0x245102b8  addiu       $s1, $v0, 0x2B8
    ctx->pc = 0x351690u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 696));
label_351694:
    // 0x351694: 0x8c4202c0  lw          $v0, 0x2C0($v0)
    ctx->pc = 0x351694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 704)));
label_351698:
    // 0x351698: 0xc040180  jal         func_100600
label_35169c:
    if (ctx->pc == 0x35169Cu) {
        ctx->pc = 0x35169Cu;
            // 0x35169c: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x3516A0u;
        goto label_3516a0;
    }
    ctx->pc = 0x351698u;
    SET_GPR_U32(ctx, 31, 0x3516A0u);
    ctx->pc = 0x35169Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x351698u;
            // 0x35169c: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3516A0u; }
        if (ctx->pc != 0x3516A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3516A0u; }
        if (ctx->pc != 0x3516A0u) { return; }
    }
    ctx->pc = 0x3516A0u;
label_3516a0:
    // 0x3516a0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_3516a4:
    if (ctx->pc == 0x3516A4u) {
        ctx->pc = 0x3516A4u;
            // 0x3516a4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3516A8u;
        goto label_3516a8;
    }
    ctx->pc = 0x3516A0u;
    {
        const bool branch_taken_0x3516a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3516A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3516A0u;
            // 0x3516a4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3516a0) {
            ctx->pc = 0x351704u;
            goto label_351704;
        }
    }
    ctx->pc = 0x3516A8u;
label_3516a8:
    // 0x3516a8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3516a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3516ac:
    // 0x3516ac: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x3516acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_3516b0:
    // 0x3516b0: 0x8e710d98  lw          $s1, 0xD98($s3)
    ctx->pc = 0x3516b0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3480)));
label_3516b4:
    // 0x3516b4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3516b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3516b8:
    // 0x3516b8: 0x826911aa  lb          $t1, 0x11AA($s3)
    ctx->pc = 0x3516b8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4522)));
label_3516bc:
    // 0x3516bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3516bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3516c0:
    // 0x3516c0: 0x344594a8  ori         $a1, $v0, 0x94A8
    ctx->pc = 0x3516c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38056);
label_3516c4:
    // 0x3516c4: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x3516c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3516c8:
    // 0x3516c8: 0x24080821  addiu       $t0, $zero, 0x821
    ctx->pc = 0x3516c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2081));
label_3516cc:
    // 0x3516cc: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x3516ccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3516d0:
    // 0x3516d0: 0xc0b9404  jal         func_2E5010
label_3516d4:
    if (ctx->pc == 0x3516D4u) {
        ctx->pc = 0x3516D4u;
            // 0x3516d4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3516D8u;
        goto label_3516d8;
    }
    ctx->pc = 0x3516D0u;
    SET_GPR_U32(ctx, 31, 0x3516D8u);
    ctx->pc = 0x3516D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3516D0u;
            // 0x3516d4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5010u;
    if (runtime->hasFunction(0x2E5010u)) {
        auto targetFn = runtime->lookupFunction(0x2E5010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3516D8u; }
        if (ctx->pc != 0x3516D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5010_0x2e5010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3516D8u; }
        if (ctx->pc != 0x3516D8u) { return; }
    }
    ctx->pc = 0x3516D8u;
label_3516d8:
    // 0x3516d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3516d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3516dc:
    // 0x3516dc: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x3516dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_3516e0:
    // 0x3516e0: 0x2231804  sllv        $v1, $v1, $s1
    ctx->pc = 0x3516e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 17) & 0x1F));
label_3516e4:
    // 0x3516e4: 0x24844160  addiu       $a0, $a0, 0x4160
    ctx->pc = 0x3516e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16736));
label_3516e8:
    // 0x3516e8: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x3516e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3516ec:
    // 0x3516ec: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x3516ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_3516f0:
    // 0x3516f0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3516f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3516f4:
    // 0x3516f4: 0x90643db0  lbu         $a0, 0x3DB0($v1)
    ctx->pc = 0x3516f4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 15792)));
label_3516f8:
    // 0x3516f8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3516f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3516fc:
    // 0x3516fc: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x3516fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_351700:
    // 0x351700: 0xa0643db0  sb          $a0, 0x3DB0($v1)
    ctx->pc = 0x351700u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 15792), (uint8_t)GPR_U32(ctx, 4));
label_351704:
    // 0x351704: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x351704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_351708:
    // 0x351708: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x351708u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_35170c:
    // 0x35170c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x35170cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_351710:
    // 0x351710: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x351710u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_351714:
    // 0x351714: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x351714u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_351718:
    // 0x351718: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x351718u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35171c:
    // 0x35171c: 0x3e00008  jr          $ra
label_351720:
    if (ctx->pc == 0x351720u) {
        ctx->pc = 0x351720u;
            // 0x351720: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x351724u;
        goto label_351724;
    }
    ctx->pc = 0x35171Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x351720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35171Cu;
            // 0x351720: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x351724u;
label_351724:
    // 0x351724: 0x0  nop
    ctx->pc = 0x351724u;
    // NOP
label_351728:
    // 0x351728: 0x0  nop
    ctx->pc = 0x351728u;
    // NOP
label_35172c:
    // 0x35172c: 0x0  nop
    ctx->pc = 0x35172cu;
    // NOP
label_351730:
    // 0x351730: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x351730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_351734:
    // 0x351734: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x351734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_351738:
    // 0x351738: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x351738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_35173c:
    // 0x35173c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35173cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_351740:
    // 0x351740: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x351740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_351744:
    // 0x351744: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_351748:
    if (ctx->pc == 0x351748u) {
        ctx->pc = 0x351748u;
            // 0x351748: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x35174Cu;
        goto label_35174c;
    }
    ctx->pc = 0x351744u;
    {
        const bool branch_taken_0x351744 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x351744) {
            ctx->pc = 0x351748u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x351744u;
            // 0x351748: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35176Cu;
            goto label_35176c;
        }
    }
    ctx->pc = 0x35174Cu;
label_35174c:
    // 0x35174c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_351750:
    if (ctx->pc == 0x351750u) {
        ctx->pc = 0x351750u;
            // 0x351750: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x351754u;
        goto label_351754;
    }
    ctx->pc = 0x35174Cu;
    {
        const bool branch_taken_0x35174c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x35174c) {
            ctx->pc = 0x351750u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35174Cu;
            // 0x351750: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x351768u;
            goto label_351768;
        }
    }
    ctx->pc = 0x351754u;
label_351754:
    // 0x351754: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x351754u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_351758:
    // 0x351758: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x351758u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_35175c:
    // 0x35175c: 0x320f809  jalr        $t9
label_351760:
    if (ctx->pc == 0x351760u) {
        ctx->pc = 0x351760u;
            // 0x351760: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x351764u;
        goto label_351764;
    }
    ctx->pc = 0x35175Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x351764u);
        ctx->pc = 0x351760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35175Cu;
            // 0x351760: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x351764u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x351764u; }
            if (ctx->pc != 0x351764u) { return; }
        }
        }
    }
    ctx->pc = 0x351764u;
label_351764:
    // 0x351764: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x351764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_351768:
    // 0x351768: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x351768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_35176c:
    // 0x35176c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35176cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_351770:
    // 0x351770: 0x3e00008  jr          $ra
label_351774:
    if (ctx->pc == 0x351774u) {
        ctx->pc = 0x351774u;
            // 0x351774: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x351778u;
        goto label_351778;
    }
    ctx->pc = 0x351770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x351774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x351770u;
            // 0x351774: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x351778u;
label_351778:
    // 0x351778: 0x0  nop
    ctx->pc = 0x351778u;
    // NOP
label_35177c:
    // 0x35177c: 0x0  nop
    ctx->pc = 0x35177cu;
    // NOP
label_351780:
    // 0x351780: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x351780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_351784:
    // 0x351784: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x351784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
label_351788:
    // 0x351788: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x351788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_35178c:
    // 0x35178c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x35178cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_351790:
    // 0x351790: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x351790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_351794:
    // 0x351794: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x351794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
label_351798:
    // 0x351798: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x351798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_35179c:
    // 0x35179c: 0x3445f000  ori         $a1, $v0, 0xF000
    ctx->pc = 0x35179cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_3517a0:
    // 0x3517a0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3517a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3517a4:
    // 0x3517a4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3517a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3517a8:
    // 0x3517a8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3517a8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3517ac:
    // 0x3517ac: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3517acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3517b0:
    // 0x3517b0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3517b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3517b4:
    // 0x3517b4: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x3517b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3517b8:
    // 0x3517b8: 0xe4800064  swc1        $f0, 0x64($a0)
    ctx->pc = 0x3517b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 100), bits); }
label_3517bc:
    // 0x3517bc: 0xc4810034  lwc1        $f1, 0x34($a0)
    ctx->pc = 0x3517bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3517c0:
    // 0x3517c0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3517c0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3517c4:
    // 0x3517c4: 0x0  nop
    ctx->pc = 0x3517c4u;
    // NOP
label_3517c8:
    // 0x3517c8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3517c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_3517cc:
    // 0x3517cc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3517ccu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_3517d0:
    // 0x3517d0: 0xe4800068  swc1        $f0, 0x68($a0)
    ctx->pc = 0x3517d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 104), bits); }
label_3517d4:
    // 0x3517d4: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x3517d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3517d8:
    // 0x3517d8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3517d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3517dc:
    // 0x3517dc: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3517dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3517e0:
    // 0x3517e0: 0x0  nop
    ctx->pc = 0x3517e0u;
    // NOP
label_3517e4:
    // 0x3517e4: 0xac85006c  sw          $a1, 0x6C($a0)
    ctx->pc = 0x3517e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 5));
label_3517e8:
    // 0x3517e8: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3517e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3517ec:
    // 0x3517ec: 0x8c420968  lw          $v0, 0x968($v0)
    ctx->pc = 0x3517ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
label_3517f0:
    // 0x3517f0: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_3517f4:
    if (ctx->pc == 0x3517F4u) {
        ctx->pc = 0x3517F4u;
            // 0x3517f4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3517F8u;
        goto label_3517f8;
    }
    ctx->pc = 0x3517F0u;
    {
        const bool branch_taken_0x3517f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3517F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3517F0u;
            // 0x3517f4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3517f0) {
            ctx->pc = 0x351804u;
            goto label_351804;
        }
    }
    ctx->pc = 0x3517F8u;
label_3517f8:
    // 0x3517f8: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x3517f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3517fc:
    // 0x3517fc: 0x10000003  b           . + 4 + (0x3 << 2)
label_351800:
    if (ctx->pc == 0x351800u) {
        ctx->pc = 0x351800u;
            // 0x351800: 0xae220070  sw          $v0, 0x70($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
        ctx->pc = 0x351804u;
        goto label_351804;
    }
    ctx->pc = 0x3517FCu;
    {
        const bool branch_taken_0x3517fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3517FCu;
            // 0x351800: 0xae220070  sw          $v0, 0x70($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3517fc) {
            ctx->pc = 0x35180Cu;
            goto label_35180c;
        }
    }
    ctx->pc = 0x351804u;
label_351804:
    // 0x351804: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x351804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_351808:
    // 0x351808: 0xae220070  sw          $v0, 0x70($s1)
    ctx->pc = 0x351808u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
label_35180c:
    // 0x35180c: 0xc6200064  lwc1        $f0, 0x64($s1)
    ctx->pc = 0x35180cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_351810:
    // 0x351810: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x351810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_351814:
    // 0x351814: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x351814u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_351818:
    // 0x351818: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x351818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_35181c:
    // 0x35181c: 0x8c500e38  lw          $s0, 0xE38($v0)
    ctx->pc = 0x35181cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3640)));
label_351820:
    // 0x351820: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x351820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_351824:
    // 0x351824: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x351824u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_351828:
    // 0x351828: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x351828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
label_35182c:
    // 0x35182c: 0xafa000c4  sw          $zero, 0xC4($sp)
    ctx->pc = 0x35182cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
label_351830:
    // 0x351830: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x351830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_351834:
    // 0x351834: 0xc0d46b8  jal         func_351AE0
label_351838:
    if (ctx->pc == 0x351838u) {
        ctx->pc = 0x351838u;
            // 0x351838: 0xe7a000c0  swc1        $f0, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->pc = 0x35183Cu;
        goto label_35183c;
    }
    ctx->pc = 0x351834u;
    SET_GPR_U32(ctx, 31, 0x35183Cu);
    ctx->pc = 0x351838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x351834u;
            // 0x351838: 0xe7a000c0  swc1        $f0, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x351AE0u;
    if (runtime->hasFunction(0x351AE0u)) {
        auto targetFn = runtime->lookupFunction(0x351AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35183Cu; }
        if (ctx->pc != 0x35183Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00351AE0_0x351ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35183Cu; }
        if (ctx->pc != 0x35183Cu) { return; }
    }
    ctx->pc = 0x35183Cu;
label_35183c:
    // 0x35183c: 0x5440004e  bnel        $v0, $zero, . + 4 + (0x4E << 2)
label_351840:
    if (ctx->pc == 0x351840u) {
        ctx->pc = 0x351840u;
            // 0x351840: 0x8c52000c  lw          $s2, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->pc = 0x351844u;
        goto label_351844;
    }
    ctx->pc = 0x35183Cu;
    {
        const bool branch_taken_0x35183c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35183c) {
            ctx->pc = 0x351840u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35183Cu;
            // 0x351840: 0x8c52000c  lw          $s2, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x351978u;
            goto label_351978;
        }
    }
    ctx->pc = 0x351844u;
label_351844:
    // 0x351844: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x351844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_351848:
    // 0x351848: 0xc0d46b0  jal         func_351AC0
label_35184c:
    if (ctx->pc == 0x35184Cu) {
        ctx->pc = 0x35184Cu;
            // 0x35184c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x351850u;
        goto label_351850;
    }
    ctx->pc = 0x351848u;
    SET_GPR_U32(ctx, 31, 0x351850u);
    ctx->pc = 0x35184Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x351848u;
            // 0x35184c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x351AC0u;
    if (runtime->hasFunction(0x351AC0u)) {
        auto targetFn = runtime->lookupFunction(0x351AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351850u; }
        if (ctx->pc != 0x351850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00351AC0_0x351ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351850u; }
        if (ctx->pc != 0x351850u) { return; }
    }
    ctx->pc = 0x351850u;
label_351850:
    // 0x351850: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x351850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_351854:
    // 0x351854: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x351854u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_351858:
    // 0x351858: 0x0  nop
    ctx->pc = 0x351858u;
    // NOP
label_35185c:
    // 0x35185c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x35185cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_351860:
    // 0x351860: 0x4503001d  bc1tl       . + 4 + (0x1D << 2)
label_351864:
    if (ctx->pc == 0x351864u) {
        ctx->pc = 0x351864u;
            // 0x351864: 0xc7ac00c0  lwc1        $f12, 0xC0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x351868u;
        goto label_351868;
    }
    ctx->pc = 0x351860u;
    {
        const bool branch_taken_0x351860 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x351860) {
            ctx->pc = 0x351864u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x351860u;
            // 0x351864: 0xc7ac00c0  lwc1        $f12, 0xC0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3518D8u;
            goto label_3518d8;
        }
    }
    ctx->pc = 0x351868u;
label_351868:
    // 0x351868: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x351868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35186c:
    // 0x35186c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x35186cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_351870:
    // 0x351870: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
label_351874:
    if (ctx->pc == 0x351874u) {
        ctx->pc = 0x351874u;
            // 0x351874: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x351878u;
        goto label_351878;
    }
    ctx->pc = 0x351870u;
    {
        const bool branch_taken_0x351870 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x351870) {
            ctx->pc = 0x351874u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x351870u;
            // 0x351874: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35188Cu;
            goto label_35188c;
        }
    }
    ctx->pc = 0x351878u;
label_351878:
    // 0x351878: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x351878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_35187c:
    // 0x35187c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x35187cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_351880:
    // 0x351880: 0x45000014  bc1f        . + 4 + (0x14 << 2)
label_351884:
    if (ctx->pc == 0x351884u) {
        ctx->pc = 0x351888u;
        goto label_351888;
    }
    ctx->pc = 0x351880u;
    {
        const bool branch_taken_0x351880 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x351880) {
            ctx->pc = 0x3518D4u;
            goto label_3518d4;
        }
    }
    ctx->pc = 0x351888u;
label_351888:
    // 0x351888: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x351888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_35188c:
    // 0x35188c: 0xc0d46a0  jal         func_351A80
label_351890:
    if (ctx->pc == 0x351890u) {
        ctx->pc = 0x351894u;
        goto label_351894;
    }
    ctx->pc = 0x35188Cu;
    SET_GPR_U32(ctx, 31, 0x351894u);
    ctx->pc = 0x351A80u;
    if (runtime->hasFunction(0x351A80u)) {
        auto targetFn = runtime->lookupFunction(0x351A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351894u; }
        if (ctx->pc != 0x351894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00351A80_0x351a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351894u; }
        if (ctx->pc != 0x351894u) { return; }
    }
    ctx->pc = 0x351894u;
label_351894:
    // 0x351894: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x351894u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_351898:
    // 0x351898: 0x52400033  beql        $s2, $zero, . + 4 + (0x33 << 2)
label_35189c:
    if (ctx->pc == 0x35189Cu) {
        ctx->pc = 0x35189Cu;
            // 0x35189c: 0xafb2006c  sw          $s2, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 18));
        ctx->pc = 0x3518A0u;
        goto label_3518a0;
    }
    ctx->pc = 0x351898u;
    {
        const bool branch_taken_0x351898 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x351898) {
            ctx->pc = 0x35189Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x351898u;
            // 0x35189c: 0xafb2006c  sw          $s2, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x351968u;
            goto label_351968;
        }
    }
    ctx->pc = 0x3518A0u;
label_3518a0:
    // 0x3518a0: 0xc049514  jal         func_125450
label_3518a4:
    if (ctx->pc == 0x3518A4u) {
        ctx->pc = 0x3518A4u;
            // 0x3518a4: 0xc7ac00c0  lwc1        $f12, 0xC0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x3518A8u;
        goto label_3518a8;
    }
    ctx->pc = 0x3518A0u;
    SET_GPR_U32(ctx, 31, 0x3518A8u);
    ctx->pc = 0x3518A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3518A0u;
            // 0x3518a4: 0xc7ac00c0  lwc1        $f12, 0xC0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3518A8u; }
        if (ctx->pc != 0x3518A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3518A8u; }
        if (ctx->pc != 0x3518A8u) { return; }
    }
    ctx->pc = 0x3518A8u;
label_3518a8:
    // 0x3518a8: 0xc0474b6  jal         func_11D2D8
label_3518ac:
    if (ctx->pc == 0x3518ACu) {
        ctx->pc = 0x3518ACu;
            // 0x3518ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3518B0u;
        goto label_3518b0;
    }
    ctx->pc = 0x3518A8u;
    SET_GPR_U32(ctx, 31, 0x3518B0u);
    ctx->pc = 0x3518ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3518A8u;
            // 0x3518ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D2D8u;
    if (runtime->hasFunction(0x11D2D8u)) {
        auto targetFn = runtime->lookupFunction(0x11D2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3518B0u; }
        if (ctx->pc != 0x3518B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D2D8_0x11d2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3518B0u; }
        if (ctx->pc != 0x3518B0u) { return; }
    }
    ctx->pc = 0x3518B0u;
label_3518b0:
    // 0x3518b0: 0xc0497dc  jal         func_125F70
label_3518b4:
    if (ctx->pc == 0x3518B4u) {
        ctx->pc = 0x3518B4u;
            // 0x3518b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3518B8u;
        goto label_3518b8;
    }
    ctx->pc = 0x3518B0u;
    SET_GPR_U32(ctx, 31, 0x3518B8u);
    ctx->pc = 0x3518B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3518B0u;
            // 0x3518b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3518B8u; }
        if (ctx->pc != 0x3518B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3518B8u; }
        if (ctx->pc != 0x3518B8u) { return; }
    }
    ctx->pc = 0x3518B8u;
label_3518b8:
    // 0x3518b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3518b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3518bc:
    // 0x3518bc: 0xc0827ac  jal         func_209EB0
label_3518c0:
    if (ctx->pc == 0x3518C0u) {
        ctx->pc = 0x3518C0u;
            // 0x3518c0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x3518C4u;
        goto label_3518c4;
    }
    ctx->pc = 0x3518BCu;
    SET_GPR_U32(ctx, 31, 0x3518C4u);
    ctx->pc = 0x3518C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3518BCu;
            // 0x3518c0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3518C4u; }
        if (ctx->pc != 0x3518C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3518C4u; }
        if (ctx->pc != 0x3518C4u) { return; }
    }
    ctx->pc = 0x3518C4u;
label_3518c4:
    // 0x3518c4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3518c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3518c8:
    // 0x3518c8: 0xafb2006c  sw          $s2, 0x6C($sp)
    ctx->pc = 0x3518c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 18));
label_3518cc:
    // 0x3518cc: 0x10000026  b           . + 4 + (0x26 << 2)
label_3518d0:
    if (ctx->pc == 0x3518D0u) {
        ctx->pc = 0x3518D4u;
        goto label_3518d4;
    }
    ctx->pc = 0x3518CCu;
    {
        const bool branch_taken_0x3518cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3518cc) {
            ctx->pc = 0x351968u;
            goto label_351968;
        }
    }
    ctx->pc = 0x3518D4u;
label_3518d4:
    // 0x3518d4: 0xc7ac00c0  lwc1        $f12, 0xC0($sp)
    ctx->pc = 0x3518d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3518d8:
    // 0x3518d8: 0xc049514  jal         func_125450
label_3518dc:
    if (ctx->pc == 0x3518DCu) {
        ctx->pc = 0x3518E0u;
        goto label_3518e0;
    }
    ctx->pc = 0x3518D8u;
    SET_GPR_U32(ctx, 31, 0x3518E0u);
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3518E0u; }
        if (ctx->pc != 0x3518E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3518E0u; }
        if (ctx->pc != 0x3518E0u) { return; }
    }
    ctx->pc = 0x3518E0u;
label_3518e0:
    // 0x3518e0: 0xc0474b6  jal         func_11D2D8
label_3518e4:
    if (ctx->pc == 0x3518E4u) {
        ctx->pc = 0x3518E4u;
            // 0x3518e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3518E8u;
        goto label_3518e8;
    }
    ctx->pc = 0x3518E0u;
    SET_GPR_U32(ctx, 31, 0x3518E8u);
    ctx->pc = 0x3518E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3518E0u;
            // 0x3518e4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D2D8u;
    if (runtime->hasFunction(0x11D2D8u)) {
        auto targetFn = runtime->lookupFunction(0x11D2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3518E8u; }
        if (ctx->pc != 0x3518E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D2D8_0x11d2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3518E8u; }
        if (ctx->pc != 0x3518E8u) { return; }
    }
    ctx->pc = 0x3518E8u;
label_3518e8:
    // 0x3518e8: 0xc0497dc  jal         func_125F70
label_3518ec:
    if (ctx->pc == 0x3518ECu) {
        ctx->pc = 0x3518ECu;
            // 0x3518ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3518F0u;
        goto label_3518f0;
    }
    ctx->pc = 0x3518E8u;
    SET_GPR_U32(ctx, 31, 0x3518F0u);
    ctx->pc = 0x3518ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3518E8u;
            // 0x3518ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3518F0u; }
        if (ctx->pc != 0x3518F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3518F0u; }
        if (ctx->pc != 0x3518F0u) { return; }
    }
    ctx->pc = 0x3518F0u;
label_3518f0:
    // 0x3518f0: 0xc7ac00c4  lwc1        $f12, 0xC4($sp)
    ctx->pc = 0x3518f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3518f4:
    // 0x3518f4: 0xc049514  jal         func_125450
label_3518f8:
    if (ctx->pc == 0x3518F8u) {
        ctx->pc = 0x3518F8u;
            // 0x3518f8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x3518FCu;
        goto label_3518fc;
    }
    ctx->pc = 0x3518F4u;
    SET_GPR_U32(ctx, 31, 0x3518FCu);
    ctx->pc = 0x3518F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3518F4u;
            // 0x3518f8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3518FCu; }
        if (ctx->pc != 0x3518FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3518FCu; }
        if (ctx->pc != 0x3518FCu) { return; }
    }
    ctx->pc = 0x3518FCu;
label_3518fc:
    // 0x3518fc: 0xc0474b6  jal         func_11D2D8
label_351900:
    if (ctx->pc == 0x351900u) {
        ctx->pc = 0x351900u;
            // 0x351900: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x351904u;
        goto label_351904;
    }
    ctx->pc = 0x3518FCu;
    SET_GPR_U32(ctx, 31, 0x351904u);
    ctx->pc = 0x351900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3518FCu;
            // 0x351900: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D2D8u;
    if (runtime->hasFunction(0x11D2D8u)) {
        auto targetFn = runtime->lookupFunction(0x11D2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351904u; }
        if (ctx->pc != 0x351904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D2D8_0x11d2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351904u; }
        if (ctx->pc != 0x351904u) { return; }
    }
    ctx->pc = 0x351904u;
label_351904:
    // 0x351904: 0xc0497dc  jal         func_125F70
label_351908:
    if (ctx->pc == 0x351908u) {
        ctx->pc = 0x351908u;
            // 0x351908: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35190Cu;
        goto label_35190c;
    }
    ctx->pc = 0x351904u;
    SET_GPR_U32(ctx, 31, 0x35190Cu);
    ctx->pc = 0x351908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x351904u;
            // 0x351908: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35190Cu; }
        if (ctx->pc != 0x35190Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35190Cu; }
        if (ctx->pc != 0x35190Cu) { return; }
    }
    ctx->pc = 0x35190Cu;
label_35190c:
    // 0x35190c: 0xc7ac00c8  lwc1        $f12, 0xC8($sp)
    ctx->pc = 0x35190cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_351910:
    // 0x351910: 0xc049514  jal         func_125450
label_351914:
    if (ctx->pc == 0x351914u) {
        ctx->pc = 0x351914u;
            // 0x351914: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x351918u;
        goto label_351918;
    }
    ctx->pc = 0x351910u;
    SET_GPR_U32(ctx, 31, 0x351918u);
    ctx->pc = 0x351914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x351910u;
            // 0x351914: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351918u; }
        if (ctx->pc != 0x351918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351918u; }
        if (ctx->pc != 0x351918u) { return; }
    }
    ctx->pc = 0x351918u;
label_351918:
    // 0x351918: 0xc0474b6  jal         func_11D2D8
label_35191c:
    if (ctx->pc == 0x35191Cu) {
        ctx->pc = 0x35191Cu;
            // 0x35191c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x351920u;
        goto label_351920;
    }
    ctx->pc = 0x351918u;
    SET_GPR_U32(ctx, 31, 0x351920u);
    ctx->pc = 0x35191Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x351918u;
            // 0x35191c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D2D8u;
    if (runtime->hasFunction(0x11D2D8u)) {
        auto targetFn = runtime->lookupFunction(0x11D2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351920u; }
        if (ctx->pc != 0x351920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D2D8_0x11d2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351920u; }
        if (ctx->pc != 0x351920u) { return; }
    }
    ctx->pc = 0x351920u;
label_351920:
    // 0x351920: 0xc0497dc  jal         func_125F70
label_351924:
    if (ctx->pc == 0x351924u) {
        ctx->pc = 0x351924u;
            // 0x351924: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x351928u;
        goto label_351928;
    }
    ctx->pc = 0x351920u;
    SET_GPR_U32(ctx, 31, 0x351928u);
    ctx->pc = 0x351924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x351920u;
            // 0x351924: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351928u; }
        if (ctx->pc != 0x351928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351928u; }
        if (ctx->pc != 0x351928u) { return; }
    }
    ctx->pc = 0x351928u;
label_351928:
    // 0x351928: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x351928u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_35192c:
    // 0x35192c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x35192cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_351930:
    // 0x351930: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x351930u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_351934:
    // 0x351934: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x351934u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_351938:
    // 0x351938: 0xc0b6df0  jal         func_2DB7C0
label_35193c:
    if (ctx->pc == 0x35193Cu) {
        ctx->pc = 0x35193Cu;
            // 0x35193c: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x351940u;
        goto label_351940;
    }
    ctx->pc = 0x351938u;
    SET_GPR_U32(ctx, 31, 0x351940u);
    ctx->pc = 0x35193Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x351938u;
            // 0x35193c: 0x46000386  mov.s       $f14, $f0 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7C0u;
    if (runtime->hasFunction(0x2DB7C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351940u; }
        if (ctx->pc != 0x351940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB7C0_0x2db7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351940u; }
        if (ctx->pc != 0x351940u) { return; }
    }
    ctx->pc = 0x351940u;
label_351940:
    // 0x351940: 0xc0d46a0  jal         func_351A80
label_351944:
    if (ctx->pc == 0x351944u) {
        ctx->pc = 0x351944u;
            // 0x351944: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x351948u;
        goto label_351948;
    }
    ctx->pc = 0x351940u;
    SET_GPR_U32(ctx, 31, 0x351948u);
    ctx->pc = 0x351944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x351940u;
            // 0x351944: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x351A80u;
    if (runtime->hasFunction(0x351A80u)) {
        auto targetFn = runtime->lookupFunction(0x351A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351948u; }
        if (ctx->pc != 0x351948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00351A80_0x351a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351948u; }
        if (ctx->pc != 0x351948u) { return; }
    }
    ctx->pc = 0x351948u;
label_351948:
    // 0x351948: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_35194c:
    if (ctx->pc == 0x35194Cu) {
        ctx->pc = 0x35194Cu;
            // 0x35194c: 0xafa2006c  sw          $v0, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
        ctx->pc = 0x351950u;
        goto label_351950;
    }
    ctx->pc = 0x351948u;
    {
        const bool branch_taken_0x351948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x351948) {
            ctx->pc = 0x35194Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x351948u;
            // 0x35194c: 0xafa2006c  sw          $v0, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x351968u;
            goto label_351968;
        }
    }
    ctx->pc = 0x351950u;
label_351950:
    // 0x351950: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x351950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_351954:
    // 0x351954: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x351954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_351958:
    // 0x351958: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x351958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_35195c:
    // 0x35195c: 0xc0804bc  jal         func_2012F0
label_351960:
    if (ctx->pc == 0x351960u) {
        ctx->pc = 0x351960u;
            // 0x351960: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x351964u;
        goto label_351964;
    }
    ctx->pc = 0x35195Cu;
    SET_GPR_U32(ctx, 31, 0x351964u);
    ctx->pc = 0x351960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35195Cu;
            // 0x351960: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351964u; }
        if (ctx->pc != 0x351964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351964u; }
        if (ctx->pc != 0x351964u) { return; }
    }
    ctx->pc = 0x351964u;
label_351964:
    // 0x351964: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x351964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
label_351968:
    // 0x351968: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x351968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35196c:
    // 0x35196c: 0xc0d4698  jal         func_351A60
label_351970:
    if (ctx->pc == 0x351970u) {
        ctx->pc = 0x351970u;
            // 0x351970: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x351974u;
        goto label_351974;
    }
    ctx->pc = 0x35196Cu;
    SET_GPR_U32(ctx, 31, 0x351974u);
    ctx->pc = 0x351970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35196Cu;
            // 0x351970: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x351A60u;
    if (runtime->hasFunction(0x351A60u)) {
        auto targetFn = runtime->lookupFunction(0x351A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351974u; }
        if (ctx->pc != 0x351974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00351A60_0x351a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351974u; }
        if (ctx->pc != 0x351974u) { return; }
    }
    ctx->pc = 0x351974u;
label_351974:
    // 0x351974: 0x8fb2006c  lw          $s2, 0x6C($sp)
    ctx->pc = 0x351974u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_351978:
    // 0x351978: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x351978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35197c:
    // 0x35197c: 0x24050150  addiu       $a1, $zero, 0x150
    ctx->pc = 0x35197cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_351980:
    // 0x351980: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x351980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_351984:
    // 0x351984: 0xc0a7a88  jal         func_29EA20
label_351988:
    if (ctx->pc == 0x351988u) {
        ctx->pc = 0x351988u;
            // 0x351988: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->pc = 0x35198Cu;
        goto label_35198c;
    }
    ctx->pc = 0x351984u;
    SET_GPR_U32(ctx, 31, 0x35198Cu);
    ctx->pc = 0x351988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x351984u;
            // 0x351988: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35198Cu; }
        if (ctx->pc != 0x35198Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35198Cu; }
        if (ctx->pc != 0x35198Cu) { return; }
    }
    ctx->pc = 0x35198Cu;
label_35198c:
    // 0x35198c: 0x24030150  addiu       $v1, $zero, 0x150
    ctx->pc = 0x35198cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_351990:
    // 0x351990: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x351990u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_351994:
    // 0x351994: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_351998:
    if (ctx->pc == 0x351998u) {
        ctx->pc = 0x351998u;
            // 0x351998: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x35199Cu;
        goto label_35199c;
    }
    ctx->pc = 0x351994u;
    {
        const bool branch_taken_0x351994 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x351998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x351994u;
            // 0x351998: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351994) {
            ctx->pc = 0x3519C8u;
            goto label_3519c8;
        }
    }
    ctx->pc = 0x35199Cu;
label_35199c:
    // 0x35199c: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x35199cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_3519a0:
    // 0x3519a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3519a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3519a4:
    // 0x3519a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3519a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3519a8:
    // 0x3519a8: 0x24c6d6e0  addiu       $a2, $a2, -0x2920
    ctx->pc = 0x3519a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956768));
label_3519ac:
    // 0x3519ac: 0xc08afe0  jal         func_22BF80
label_3519b0:
    if (ctx->pc == 0x3519B0u) {
        ctx->pc = 0x3519B0u;
            // 0x3519b0: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x3519B4u;
        goto label_3519b4;
    }
    ctx->pc = 0x3519ACu;
    SET_GPR_U32(ctx, 31, 0x3519B4u);
    ctx->pc = 0x3519B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3519ACu;
            // 0x3519b0: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BF80u;
    if (runtime->hasFunction(0x22BF80u)) {
        auto targetFn = runtime->lookupFunction(0x22BF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3519B4u; }
        if (ctx->pc != 0x3519B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BF80_0x22bf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3519B4u; }
        if (ctx->pc != 0x3519B4u) { return; }
    }
    ctx->pc = 0x3519B4u;
label_3519b4:
    // 0x3519b4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3519b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3519b8:
    // 0x3519b8: 0x244225d0  addiu       $v0, $v0, 0x25D0
    ctx->pc = 0x3519b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9680));
label_3519bc:
    // 0x3519bc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3519bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3519c0:
    // 0x3519c0: 0xae000140  sw          $zero, 0x140($s0)
    ctx->pc = 0x3519c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 0));
label_3519c4:
    // 0x3519c4: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x3519c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_3519c8:
    // 0x3519c8: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x3519c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_3519cc:
    // 0x3519cc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3519ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3519d0:
    // 0x3519d0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3519d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3519d4:
    // 0x3519d4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3519d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3519d8:
    // 0x3519d8: 0xc08c798  jal         func_231E60
label_3519dc:
    if (ctx->pc == 0x3519DCu) {
        ctx->pc = 0x3519DCu;
            // 0x3519dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3519E0u;
        goto label_3519e0;
    }
    ctx->pc = 0x3519D8u;
    SET_GPR_U32(ctx, 31, 0x3519E0u);
    ctx->pc = 0x3519DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3519D8u;
            // 0x3519dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231E60u;
    if (runtime->hasFunction(0x231E60u)) {
        auto targetFn = runtime->lookupFunction(0x231E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3519E0u; }
        if (ctx->pc != 0x3519E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231E60_0x231e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3519E0u; }
        if (ctx->pc != 0x3519E0u) { return; }
    }
    ctx->pc = 0x3519E0u;
label_3519e0:
    // 0x3519e0: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x3519e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3519e4:
    // 0x3519e4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x3519e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3519e8:
    // 0x3519e8: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x3519e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3519ec:
    // 0x3519ec: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x3519ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_3519f0:
    // 0x3519f0: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x3519f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3519f4:
    // 0x3519f4: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x3519f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3519f8:
    // 0x3519f8: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x3519f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_3519fc:
    // 0x3519fc: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x3519fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_351a00:
    // 0x351a00: 0xe7a200b8  swc1        $f2, 0xB8($sp)
    ctx->pc = 0x351a00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_351a04:
    // 0x351a04: 0xe7a300bc  swc1        $f3, 0xBC($sp)
    ctx->pc = 0x351a04u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_351a08:
    // 0x351a08: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x351a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_351a0c:
    // 0x351a0c: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x351a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_351a10:
    // 0x351a10: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x351a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_351a14:
    // 0x351a14: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x351a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_351a18:
    // 0x351a18: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x351a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
label_351a1c:
    // 0x351a1c: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x351a1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_351a20:
    // 0x351a20: 0xc0a3830  jal         func_28E0C0
label_351a24:
    if (ctx->pc == 0x351A24u) {
        ctx->pc = 0x351A24u;
            // 0x351a24: 0xe7a200a8  swc1        $f2, 0xA8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
        ctx->pc = 0x351A28u;
        goto label_351a28;
    }
    ctx->pc = 0x351A20u;
    SET_GPR_U32(ctx, 31, 0x351A28u);
    ctx->pc = 0x351A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x351A20u;
            // 0x351a24: 0xe7a200a8  swc1        $f2, 0xA8($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351A28u; }
        if (ctx->pc != 0x351A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351A28u; }
        if (ctx->pc != 0x351A28u) { return; }
    }
    ctx->pc = 0x351A28u;
label_351a28:
    // 0x351a28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x351a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_351a2c:
    // 0x351a2c: 0xc08af10  jal         func_22BC40
label_351a30:
    if (ctx->pc == 0x351A30u) {
        ctx->pc = 0x351A30u;
            // 0x351a30: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x351A34u;
        goto label_351a34;
    }
    ctx->pc = 0x351A2Cu;
    SET_GPR_U32(ctx, 31, 0x351A34u);
    ctx->pc = 0x351A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x351A2Cu;
            // 0x351a30: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BC40u;
    if (runtime->hasFunction(0x22BC40u)) {
        auto targetFn = runtime->lookupFunction(0x22BC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351A34u; }
        if (ctx->pc != 0x351A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BC40_0x22bc40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x351A34u; }
        if (ctx->pc != 0x351A34u) { return; }
    }
    ctx->pc = 0x351A34u;
label_351a34:
    // 0x351a34: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x351a34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_351a38:
    // 0x351a38: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x351a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_351a3c:
    // 0x351a3c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x351a3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_351a40:
    // 0x351a40: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x351a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_351a44:
    // 0x351a44: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x351a44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_351a48:
    // 0x351a48: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x351a48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_351a4c:
    // 0x351a4c: 0x3e00008  jr          $ra
label_351a50:
    if (ctx->pc == 0x351A50u) {
        ctx->pc = 0x351A50u;
            // 0x351a50: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x351A54u;
        goto label_351a54;
    }
    ctx->pc = 0x351A4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x351A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x351A4Cu;
            // 0x351a50: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x351A54u;
label_351a54:
    // 0x351a54: 0x0  nop
    ctx->pc = 0x351a54u;
    // NOP
label_351a58:
    // 0x351a58: 0x0  nop
    ctx->pc = 0x351a58u;
    // NOP
label_351a5c:
    // 0x351a5c: 0x0  nop
    ctx->pc = 0x351a5cu;
    // NOP
}
