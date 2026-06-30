#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00316F30
// Address: 0x316f30 - 0x317b40
void sub_00316F30_0x316f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00316F30_0x316f30");
#endif

    switch (ctx->pc) {
        case 0x316f30u: goto label_316f30;
        case 0x316f34u: goto label_316f34;
        case 0x316f38u: goto label_316f38;
        case 0x316f3cu: goto label_316f3c;
        case 0x316f40u: goto label_316f40;
        case 0x316f44u: goto label_316f44;
        case 0x316f48u: goto label_316f48;
        case 0x316f4cu: goto label_316f4c;
        case 0x316f50u: goto label_316f50;
        case 0x316f54u: goto label_316f54;
        case 0x316f58u: goto label_316f58;
        case 0x316f5cu: goto label_316f5c;
        case 0x316f60u: goto label_316f60;
        case 0x316f64u: goto label_316f64;
        case 0x316f68u: goto label_316f68;
        case 0x316f6cu: goto label_316f6c;
        case 0x316f70u: goto label_316f70;
        case 0x316f74u: goto label_316f74;
        case 0x316f78u: goto label_316f78;
        case 0x316f7cu: goto label_316f7c;
        case 0x316f80u: goto label_316f80;
        case 0x316f84u: goto label_316f84;
        case 0x316f88u: goto label_316f88;
        case 0x316f8cu: goto label_316f8c;
        case 0x316f90u: goto label_316f90;
        case 0x316f94u: goto label_316f94;
        case 0x316f98u: goto label_316f98;
        case 0x316f9cu: goto label_316f9c;
        case 0x316fa0u: goto label_316fa0;
        case 0x316fa4u: goto label_316fa4;
        case 0x316fa8u: goto label_316fa8;
        case 0x316facu: goto label_316fac;
        case 0x316fb0u: goto label_316fb0;
        case 0x316fb4u: goto label_316fb4;
        case 0x316fb8u: goto label_316fb8;
        case 0x316fbcu: goto label_316fbc;
        case 0x316fc0u: goto label_316fc0;
        case 0x316fc4u: goto label_316fc4;
        case 0x316fc8u: goto label_316fc8;
        case 0x316fccu: goto label_316fcc;
        case 0x316fd0u: goto label_316fd0;
        case 0x316fd4u: goto label_316fd4;
        case 0x316fd8u: goto label_316fd8;
        case 0x316fdcu: goto label_316fdc;
        case 0x316fe0u: goto label_316fe0;
        case 0x316fe4u: goto label_316fe4;
        case 0x316fe8u: goto label_316fe8;
        case 0x316fecu: goto label_316fec;
        case 0x316ff0u: goto label_316ff0;
        case 0x316ff4u: goto label_316ff4;
        case 0x316ff8u: goto label_316ff8;
        case 0x316ffcu: goto label_316ffc;
        case 0x317000u: goto label_317000;
        case 0x317004u: goto label_317004;
        case 0x317008u: goto label_317008;
        case 0x31700cu: goto label_31700c;
        case 0x317010u: goto label_317010;
        case 0x317014u: goto label_317014;
        case 0x317018u: goto label_317018;
        case 0x31701cu: goto label_31701c;
        case 0x317020u: goto label_317020;
        case 0x317024u: goto label_317024;
        case 0x317028u: goto label_317028;
        case 0x31702cu: goto label_31702c;
        case 0x317030u: goto label_317030;
        case 0x317034u: goto label_317034;
        case 0x317038u: goto label_317038;
        case 0x31703cu: goto label_31703c;
        case 0x317040u: goto label_317040;
        case 0x317044u: goto label_317044;
        case 0x317048u: goto label_317048;
        case 0x31704cu: goto label_31704c;
        case 0x317050u: goto label_317050;
        case 0x317054u: goto label_317054;
        case 0x317058u: goto label_317058;
        case 0x31705cu: goto label_31705c;
        case 0x317060u: goto label_317060;
        case 0x317064u: goto label_317064;
        case 0x317068u: goto label_317068;
        case 0x31706cu: goto label_31706c;
        case 0x317070u: goto label_317070;
        case 0x317074u: goto label_317074;
        case 0x317078u: goto label_317078;
        case 0x31707cu: goto label_31707c;
        case 0x317080u: goto label_317080;
        case 0x317084u: goto label_317084;
        case 0x317088u: goto label_317088;
        case 0x31708cu: goto label_31708c;
        case 0x317090u: goto label_317090;
        case 0x317094u: goto label_317094;
        case 0x317098u: goto label_317098;
        case 0x31709cu: goto label_31709c;
        case 0x3170a0u: goto label_3170a0;
        case 0x3170a4u: goto label_3170a4;
        case 0x3170a8u: goto label_3170a8;
        case 0x3170acu: goto label_3170ac;
        case 0x3170b0u: goto label_3170b0;
        case 0x3170b4u: goto label_3170b4;
        case 0x3170b8u: goto label_3170b8;
        case 0x3170bcu: goto label_3170bc;
        case 0x3170c0u: goto label_3170c0;
        case 0x3170c4u: goto label_3170c4;
        case 0x3170c8u: goto label_3170c8;
        case 0x3170ccu: goto label_3170cc;
        case 0x3170d0u: goto label_3170d0;
        case 0x3170d4u: goto label_3170d4;
        case 0x3170d8u: goto label_3170d8;
        case 0x3170dcu: goto label_3170dc;
        case 0x3170e0u: goto label_3170e0;
        case 0x3170e4u: goto label_3170e4;
        case 0x3170e8u: goto label_3170e8;
        case 0x3170ecu: goto label_3170ec;
        case 0x3170f0u: goto label_3170f0;
        case 0x3170f4u: goto label_3170f4;
        case 0x3170f8u: goto label_3170f8;
        case 0x3170fcu: goto label_3170fc;
        case 0x317100u: goto label_317100;
        case 0x317104u: goto label_317104;
        case 0x317108u: goto label_317108;
        case 0x31710cu: goto label_31710c;
        case 0x317110u: goto label_317110;
        case 0x317114u: goto label_317114;
        case 0x317118u: goto label_317118;
        case 0x31711cu: goto label_31711c;
        case 0x317120u: goto label_317120;
        case 0x317124u: goto label_317124;
        case 0x317128u: goto label_317128;
        case 0x31712cu: goto label_31712c;
        case 0x317130u: goto label_317130;
        case 0x317134u: goto label_317134;
        case 0x317138u: goto label_317138;
        case 0x31713cu: goto label_31713c;
        case 0x317140u: goto label_317140;
        case 0x317144u: goto label_317144;
        case 0x317148u: goto label_317148;
        case 0x31714cu: goto label_31714c;
        case 0x317150u: goto label_317150;
        case 0x317154u: goto label_317154;
        case 0x317158u: goto label_317158;
        case 0x31715cu: goto label_31715c;
        case 0x317160u: goto label_317160;
        case 0x317164u: goto label_317164;
        case 0x317168u: goto label_317168;
        case 0x31716cu: goto label_31716c;
        case 0x317170u: goto label_317170;
        case 0x317174u: goto label_317174;
        case 0x317178u: goto label_317178;
        case 0x31717cu: goto label_31717c;
        case 0x317180u: goto label_317180;
        case 0x317184u: goto label_317184;
        case 0x317188u: goto label_317188;
        case 0x31718cu: goto label_31718c;
        case 0x317190u: goto label_317190;
        case 0x317194u: goto label_317194;
        case 0x317198u: goto label_317198;
        case 0x31719cu: goto label_31719c;
        case 0x3171a0u: goto label_3171a0;
        case 0x3171a4u: goto label_3171a4;
        case 0x3171a8u: goto label_3171a8;
        case 0x3171acu: goto label_3171ac;
        case 0x3171b0u: goto label_3171b0;
        case 0x3171b4u: goto label_3171b4;
        case 0x3171b8u: goto label_3171b8;
        case 0x3171bcu: goto label_3171bc;
        case 0x3171c0u: goto label_3171c0;
        case 0x3171c4u: goto label_3171c4;
        case 0x3171c8u: goto label_3171c8;
        case 0x3171ccu: goto label_3171cc;
        case 0x3171d0u: goto label_3171d0;
        case 0x3171d4u: goto label_3171d4;
        case 0x3171d8u: goto label_3171d8;
        case 0x3171dcu: goto label_3171dc;
        case 0x3171e0u: goto label_3171e0;
        case 0x3171e4u: goto label_3171e4;
        case 0x3171e8u: goto label_3171e8;
        case 0x3171ecu: goto label_3171ec;
        case 0x3171f0u: goto label_3171f0;
        case 0x3171f4u: goto label_3171f4;
        case 0x3171f8u: goto label_3171f8;
        case 0x3171fcu: goto label_3171fc;
        case 0x317200u: goto label_317200;
        case 0x317204u: goto label_317204;
        case 0x317208u: goto label_317208;
        case 0x31720cu: goto label_31720c;
        case 0x317210u: goto label_317210;
        case 0x317214u: goto label_317214;
        case 0x317218u: goto label_317218;
        case 0x31721cu: goto label_31721c;
        case 0x317220u: goto label_317220;
        case 0x317224u: goto label_317224;
        case 0x317228u: goto label_317228;
        case 0x31722cu: goto label_31722c;
        case 0x317230u: goto label_317230;
        case 0x317234u: goto label_317234;
        case 0x317238u: goto label_317238;
        case 0x31723cu: goto label_31723c;
        case 0x317240u: goto label_317240;
        case 0x317244u: goto label_317244;
        case 0x317248u: goto label_317248;
        case 0x31724cu: goto label_31724c;
        case 0x317250u: goto label_317250;
        case 0x317254u: goto label_317254;
        case 0x317258u: goto label_317258;
        case 0x31725cu: goto label_31725c;
        case 0x317260u: goto label_317260;
        case 0x317264u: goto label_317264;
        case 0x317268u: goto label_317268;
        case 0x31726cu: goto label_31726c;
        case 0x317270u: goto label_317270;
        case 0x317274u: goto label_317274;
        case 0x317278u: goto label_317278;
        case 0x31727cu: goto label_31727c;
        case 0x317280u: goto label_317280;
        case 0x317284u: goto label_317284;
        case 0x317288u: goto label_317288;
        case 0x31728cu: goto label_31728c;
        case 0x317290u: goto label_317290;
        case 0x317294u: goto label_317294;
        case 0x317298u: goto label_317298;
        case 0x31729cu: goto label_31729c;
        case 0x3172a0u: goto label_3172a0;
        case 0x3172a4u: goto label_3172a4;
        case 0x3172a8u: goto label_3172a8;
        case 0x3172acu: goto label_3172ac;
        case 0x3172b0u: goto label_3172b0;
        case 0x3172b4u: goto label_3172b4;
        case 0x3172b8u: goto label_3172b8;
        case 0x3172bcu: goto label_3172bc;
        case 0x3172c0u: goto label_3172c0;
        case 0x3172c4u: goto label_3172c4;
        case 0x3172c8u: goto label_3172c8;
        case 0x3172ccu: goto label_3172cc;
        case 0x3172d0u: goto label_3172d0;
        case 0x3172d4u: goto label_3172d4;
        case 0x3172d8u: goto label_3172d8;
        case 0x3172dcu: goto label_3172dc;
        case 0x3172e0u: goto label_3172e0;
        case 0x3172e4u: goto label_3172e4;
        case 0x3172e8u: goto label_3172e8;
        case 0x3172ecu: goto label_3172ec;
        case 0x3172f0u: goto label_3172f0;
        case 0x3172f4u: goto label_3172f4;
        case 0x3172f8u: goto label_3172f8;
        case 0x3172fcu: goto label_3172fc;
        case 0x317300u: goto label_317300;
        case 0x317304u: goto label_317304;
        case 0x317308u: goto label_317308;
        case 0x31730cu: goto label_31730c;
        case 0x317310u: goto label_317310;
        case 0x317314u: goto label_317314;
        case 0x317318u: goto label_317318;
        case 0x31731cu: goto label_31731c;
        case 0x317320u: goto label_317320;
        case 0x317324u: goto label_317324;
        case 0x317328u: goto label_317328;
        case 0x31732cu: goto label_31732c;
        case 0x317330u: goto label_317330;
        case 0x317334u: goto label_317334;
        case 0x317338u: goto label_317338;
        case 0x31733cu: goto label_31733c;
        case 0x317340u: goto label_317340;
        case 0x317344u: goto label_317344;
        case 0x317348u: goto label_317348;
        case 0x31734cu: goto label_31734c;
        case 0x317350u: goto label_317350;
        case 0x317354u: goto label_317354;
        case 0x317358u: goto label_317358;
        case 0x31735cu: goto label_31735c;
        case 0x317360u: goto label_317360;
        case 0x317364u: goto label_317364;
        case 0x317368u: goto label_317368;
        case 0x31736cu: goto label_31736c;
        case 0x317370u: goto label_317370;
        case 0x317374u: goto label_317374;
        case 0x317378u: goto label_317378;
        case 0x31737cu: goto label_31737c;
        case 0x317380u: goto label_317380;
        case 0x317384u: goto label_317384;
        case 0x317388u: goto label_317388;
        case 0x31738cu: goto label_31738c;
        case 0x317390u: goto label_317390;
        case 0x317394u: goto label_317394;
        case 0x317398u: goto label_317398;
        case 0x31739cu: goto label_31739c;
        case 0x3173a0u: goto label_3173a0;
        case 0x3173a4u: goto label_3173a4;
        case 0x3173a8u: goto label_3173a8;
        case 0x3173acu: goto label_3173ac;
        case 0x3173b0u: goto label_3173b0;
        case 0x3173b4u: goto label_3173b4;
        case 0x3173b8u: goto label_3173b8;
        case 0x3173bcu: goto label_3173bc;
        case 0x3173c0u: goto label_3173c0;
        case 0x3173c4u: goto label_3173c4;
        case 0x3173c8u: goto label_3173c8;
        case 0x3173ccu: goto label_3173cc;
        case 0x3173d0u: goto label_3173d0;
        case 0x3173d4u: goto label_3173d4;
        case 0x3173d8u: goto label_3173d8;
        case 0x3173dcu: goto label_3173dc;
        case 0x3173e0u: goto label_3173e0;
        case 0x3173e4u: goto label_3173e4;
        case 0x3173e8u: goto label_3173e8;
        case 0x3173ecu: goto label_3173ec;
        case 0x3173f0u: goto label_3173f0;
        case 0x3173f4u: goto label_3173f4;
        case 0x3173f8u: goto label_3173f8;
        case 0x3173fcu: goto label_3173fc;
        case 0x317400u: goto label_317400;
        case 0x317404u: goto label_317404;
        case 0x317408u: goto label_317408;
        case 0x31740cu: goto label_31740c;
        case 0x317410u: goto label_317410;
        case 0x317414u: goto label_317414;
        case 0x317418u: goto label_317418;
        case 0x31741cu: goto label_31741c;
        case 0x317420u: goto label_317420;
        case 0x317424u: goto label_317424;
        case 0x317428u: goto label_317428;
        case 0x31742cu: goto label_31742c;
        case 0x317430u: goto label_317430;
        case 0x317434u: goto label_317434;
        case 0x317438u: goto label_317438;
        case 0x31743cu: goto label_31743c;
        case 0x317440u: goto label_317440;
        case 0x317444u: goto label_317444;
        case 0x317448u: goto label_317448;
        case 0x31744cu: goto label_31744c;
        case 0x317450u: goto label_317450;
        case 0x317454u: goto label_317454;
        case 0x317458u: goto label_317458;
        case 0x31745cu: goto label_31745c;
        case 0x317460u: goto label_317460;
        case 0x317464u: goto label_317464;
        case 0x317468u: goto label_317468;
        case 0x31746cu: goto label_31746c;
        case 0x317470u: goto label_317470;
        case 0x317474u: goto label_317474;
        case 0x317478u: goto label_317478;
        case 0x31747cu: goto label_31747c;
        case 0x317480u: goto label_317480;
        case 0x317484u: goto label_317484;
        case 0x317488u: goto label_317488;
        case 0x31748cu: goto label_31748c;
        case 0x317490u: goto label_317490;
        case 0x317494u: goto label_317494;
        case 0x317498u: goto label_317498;
        case 0x31749cu: goto label_31749c;
        case 0x3174a0u: goto label_3174a0;
        case 0x3174a4u: goto label_3174a4;
        case 0x3174a8u: goto label_3174a8;
        case 0x3174acu: goto label_3174ac;
        case 0x3174b0u: goto label_3174b0;
        case 0x3174b4u: goto label_3174b4;
        case 0x3174b8u: goto label_3174b8;
        case 0x3174bcu: goto label_3174bc;
        case 0x3174c0u: goto label_3174c0;
        case 0x3174c4u: goto label_3174c4;
        case 0x3174c8u: goto label_3174c8;
        case 0x3174ccu: goto label_3174cc;
        case 0x3174d0u: goto label_3174d0;
        case 0x3174d4u: goto label_3174d4;
        case 0x3174d8u: goto label_3174d8;
        case 0x3174dcu: goto label_3174dc;
        case 0x3174e0u: goto label_3174e0;
        case 0x3174e4u: goto label_3174e4;
        case 0x3174e8u: goto label_3174e8;
        case 0x3174ecu: goto label_3174ec;
        case 0x3174f0u: goto label_3174f0;
        case 0x3174f4u: goto label_3174f4;
        case 0x3174f8u: goto label_3174f8;
        case 0x3174fcu: goto label_3174fc;
        case 0x317500u: goto label_317500;
        case 0x317504u: goto label_317504;
        case 0x317508u: goto label_317508;
        case 0x31750cu: goto label_31750c;
        case 0x317510u: goto label_317510;
        case 0x317514u: goto label_317514;
        case 0x317518u: goto label_317518;
        case 0x31751cu: goto label_31751c;
        case 0x317520u: goto label_317520;
        case 0x317524u: goto label_317524;
        case 0x317528u: goto label_317528;
        case 0x31752cu: goto label_31752c;
        case 0x317530u: goto label_317530;
        case 0x317534u: goto label_317534;
        case 0x317538u: goto label_317538;
        case 0x31753cu: goto label_31753c;
        case 0x317540u: goto label_317540;
        case 0x317544u: goto label_317544;
        case 0x317548u: goto label_317548;
        case 0x31754cu: goto label_31754c;
        case 0x317550u: goto label_317550;
        case 0x317554u: goto label_317554;
        case 0x317558u: goto label_317558;
        case 0x31755cu: goto label_31755c;
        case 0x317560u: goto label_317560;
        case 0x317564u: goto label_317564;
        case 0x317568u: goto label_317568;
        case 0x31756cu: goto label_31756c;
        case 0x317570u: goto label_317570;
        case 0x317574u: goto label_317574;
        case 0x317578u: goto label_317578;
        case 0x31757cu: goto label_31757c;
        case 0x317580u: goto label_317580;
        case 0x317584u: goto label_317584;
        case 0x317588u: goto label_317588;
        case 0x31758cu: goto label_31758c;
        case 0x317590u: goto label_317590;
        case 0x317594u: goto label_317594;
        case 0x317598u: goto label_317598;
        case 0x31759cu: goto label_31759c;
        case 0x3175a0u: goto label_3175a0;
        case 0x3175a4u: goto label_3175a4;
        case 0x3175a8u: goto label_3175a8;
        case 0x3175acu: goto label_3175ac;
        case 0x3175b0u: goto label_3175b0;
        case 0x3175b4u: goto label_3175b4;
        case 0x3175b8u: goto label_3175b8;
        case 0x3175bcu: goto label_3175bc;
        case 0x3175c0u: goto label_3175c0;
        case 0x3175c4u: goto label_3175c4;
        case 0x3175c8u: goto label_3175c8;
        case 0x3175ccu: goto label_3175cc;
        case 0x3175d0u: goto label_3175d0;
        case 0x3175d4u: goto label_3175d4;
        case 0x3175d8u: goto label_3175d8;
        case 0x3175dcu: goto label_3175dc;
        case 0x3175e0u: goto label_3175e0;
        case 0x3175e4u: goto label_3175e4;
        case 0x3175e8u: goto label_3175e8;
        case 0x3175ecu: goto label_3175ec;
        case 0x3175f0u: goto label_3175f0;
        case 0x3175f4u: goto label_3175f4;
        case 0x3175f8u: goto label_3175f8;
        case 0x3175fcu: goto label_3175fc;
        case 0x317600u: goto label_317600;
        case 0x317604u: goto label_317604;
        case 0x317608u: goto label_317608;
        case 0x31760cu: goto label_31760c;
        case 0x317610u: goto label_317610;
        case 0x317614u: goto label_317614;
        case 0x317618u: goto label_317618;
        case 0x31761cu: goto label_31761c;
        case 0x317620u: goto label_317620;
        case 0x317624u: goto label_317624;
        case 0x317628u: goto label_317628;
        case 0x31762cu: goto label_31762c;
        case 0x317630u: goto label_317630;
        case 0x317634u: goto label_317634;
        case 0x317638u: goto label_317638;
        case 0x31763cu: goto label_31763c;
        case 0x317640u: goto label_317640;
        case 0x317644u: goto label_317644;
        case 0x317648u: goto label_317648;
        case 0x31764cu: goto label_31764c;
        case 0x317650u: goto label_317650;
        case 0x317654u: goto label_317654;
        case 0x317658u: goto label_317658;
        case 0x31765cu: goto label_31765c;
        case 0x317660u: goto label_317660;
        case 0x317664u: goto label_317664;
        case 0x317668u: goto label_317668;
        case 0x31766cu: goto label_31766c;
        case 0x317670u: goto label_317670;
        case 0x317674u: goto label_317674;
        case 0x317678u: goto label_317678;
        case 0x31767cu: goto label_31767c;
        case 0x317680u: goto label_317680;
        case 0x317684u: goto label_317684;
        case 0x317688u: goto label_317688;
        case 0x31768cu: goto label_31768c;
        case 0x317690u: goto label_317690;
        case 0x317694u: goto label_317694;
        case 0x317698u: goto label_317698;
        case 0x31769cu: goto label_31769c;
        case 0x3176a0u: goto label_3176a0;
        case 0x3176a4u: goto label_3176a4;
        case 0x3176a8u: goto label_3176a8;
        case 0x3176acu: goto label_3176ac;
        case 0x3176b0u: goto label_3176b0;
        case 0x3176b4u: goto label_3176b4;
        case 0x3176b8u: goto label_3176b8;
        case 0x3176bcu: goto label_3176bc;
        case 0x3176c0u: goto label_3176c0;
        case 0x3176c4u: goto label_3176c4;
        case 0x3176c8u: goto label_3176c8;
        case 0x3176ccu: goto label_3176cc;
        case 0x3176d0u: goto label_3176d0;
        case 0x3176d4u: goto label_3176d4;
        case 0x3176d8u: goto label_3176d8;
        case 0x3176dcu: goto label_3176dc;
        case 0x3176e0u: goto label_3176e0;
        case 0x3176e4u: goto label_3176e4;
        case 0x3176e8u: goto label_3176e8;
        case 0x3176ecu: goto label_3176ec;
        case 0x3176f0u: goto label_3176f0;
        case 0x3176f4u: goto label_3176f4;
        case 0x3176f8u: goto label_3176f8;
        case 0x3176fcu: goto label_3176fc;
        case 0x317700u: goto label_317700;
        case 0x317704u: goto label_317704;
        case 0x317708u: goto label_317708;
        case 0x31770cu: goto label_31770c;
        case 0x317710u: goto label_317710;
        case 0x317714u: goto label_317714;
        case 0x317718u: goto label_317718;
        case 0x31771cu: goto label_31771c;
        case 0x317720u: goto label_317720;
        case 0x317724u: goto label_317724;
        case 0x317728u: goto label_317728;
        case 0x31772cu: goto label_31772c;
        case 0x317730u: goto label_317730;
        case 0x317734u: goto label_317734;
        case 0x317738u: goto label_317738;
        case 0x31773cu: goto label_31773c;
        case 0x317740u: goto label_317740;
        case 0x317744u: goto label_317744;
        case 0x317748u: goto label_317748;
        case 0x31774cu: goto label_31774c;
        case 0x317750u: goto label_317750;
        case 0x317754u: goto label_317754;
        case 0x317758u: goto label_317758;
        case 0x31775cu: goto label_31775c;
        case 0x317760u: goto label_317760;
        case 0x317764u: goto label_317764;
        case 0x317768u: goto label_317768;
        case 0x31776cu: goto label_31776c;
        case 0x317770u: goto label_317770;
        case 0x317774u: goto label_317774;
        case 0x317778u: goto label_317778;
        case 0x31777cu: goto label_31777c;
        case 0x317780u: goto label_317780;
        case 0x317784u: goto label_317784;
        case 0x317788u: goto label_317788;
        case 0x31778cu: goto label_31778c;
        case 0x317790u: goto label_317790;
        case 0x317794u: goto label_317794;
        case 0x317798u: goto label_317798;
        case 0x31779cu: goto label_31779c;
        case 0x3177a0u: goto label_3177a0;
        case 0x3177a4u: goto label_3177a4;
        case 0x3177a8u: goto label_3177a8;
        case 0x3177acu: goto label_3177ac;
        case 0x3177b0u: goto label_3177b0;
        case 0x3177b4u: goto label_3177b4;
        case 0x3177b8u: goto label_3177b8;
        case 0x3177bcu: goto label_3177bc;
        case 0x3177c0u: goto label_3177c0;
        case 0x3177c4u: goto label_3177c4;
        case 0x3177c8u: goto label_3177c8;
        case 0x3177ccu: goto label_3177cc;
        case 0x3177d0u: goto label_3177d0;
        case 0x3177d4u: goto label_3177d4;
        case 0x3177d8u: goto label_3177d8;
        case 0x3177dcu: goto label_3177dc;
        case 0x3177e0u: goto label_3177e0;
        case 0x3177e4u: goto label_3177e4;
        case 0x3177e8u: goto label_3177e8;
        case 0x3177ecu: goto label_3177ec;
        case 0x3177f0u: goto label_3177f0;
        case 0x3177f4u: goto label_3177f4;
        case 0x3177f8u: goto label_3177f8;
        case 0x3177fcu: goto label_3177fc;
        case 0x317800u: goto label_317800;
        case 0x317804u: goto label_317804;
        case 0x317808u: goto label_317808;
        case 0x31780cu: goto label_31780c;
        case 0x317810u: goto label_317810;
        case 0x317814u: goto label_317814;
        case 0x317818u: goto label_317818;
        case 0x31781cu: goto label_31781c;
        case 0x317820u: goto label_317820;
        case 0x317824u: goto label_317824;
        case 0x317828u: goto label_317828;
        case 0x31782cu: goto label_31782c;
        case 0x317830u: goto label_317830;
        case 0x317834u: goto label_317834;
        case 0x317838u: goto label_317838;
        case 0x31783cu: goto label_31783c;
        case 0x317840u: goto label_317840;
        case 0x317844u: goto label_317844;
        case 0x317848u: goto label_317848;
        case 0x31784cu: goto label_31784c;
        case 0x317850u: goto label_317850;
        case 0x317854u: goto label_317854;
        case 0x317858u: goto label_317858;
        case 0x31785cu: goto label_31785c;
        case 0x317860u: goto label_317860;
        case 0x317864u: goto label_317864;
        case 0x317868u: goto label_317868;
        case 0x31786cu: goto label_31786c;
        case 0x317870u: goto label_317870;
        case 0x317874u: goto label_317874;
        case 0x317878u: goto label_317878;
        case 0x31787cu: goto label_31787c;
        case 0x317880u: goto label_317880;
        case 0x317884u: goto label_317884;
        case 0x317888u: goto label_317888;
        case 0x31788cu: goto label_31788c;
        case 0x317890u: goto label_317890;
        case 0x317894u: goto label_317894;
        case 0x317898u: goto label_317898;
        case 0x31789cu: goto label_31789c;
        case 0x3178a0u: goto label_3178a0;
        case 0x3178a4u: goto label_3178a4;
        case 0x3178a8u: goto label_3178a8;
        case 0x3178acu: goto label_3178ac;
        case 0x3178b0u: goto label_3178b0;
        case 0x3178b4u: goto label_3178b4;
        case 0x3178b8u: goto label_3178b8;
        case 0x3178bcu: goto label_3178bc;
        case 0x3178c0u: goto label_3178c0;
        case 0x3178c4u: goto label_3178c4;
        case 0x3178c8u: goto label_3178c8;
        case 0x3178ccu: goto label_3178cc;
        case 0x3178d0u: goto label_3178d0;
        case 0x3178d4u: goto label_3178d4;
        case 0x3178d8u: goto label_3178d8;
        case 0x3178dcu: goto label_3178dc;
        case 0x3178e0u: goto label_3178e0;
        case 0x3178e4u: goto label_3178e4;
        case 0x3178e8u: goto label_3178e8;
        case 0x3178ecu: goto label_3178ec;
        case 0x3178f0u: goto label_3178f0;
        case 0x3178f4u: goto label_3178f4;
        case 0x3178f8u: goto label_3178f8;
        case 0x3178fcu: goto label_3178fc;
        case 0x317900u: goto label_317900;
        case 0x317904u: goto label_317904;
        case 0x317908u: goto label_317908;
        case 0x31790cu: goto label_31790c;
        case 0x317910u: goto label_317910;
        case 0x317914u: goto label_317914;
        case 0x317918u: goto label_317918;
        case 0x31791cu: goto label_31791c;
        case 0x317920u: goto label_317920;
        case 0x317924u: goto label_317924;
        case 0x317928u: goto label_317928;
        case 0x31792cu: goto label_31792c;
        case 0x317930u: goto label_317930;
        case 0x317934u: goto label_317934;
        case 0x317938u: goto label_317938;
        case 0x31793cu: goto label_31793c;
        case 0x317940u: goto label_317940;
        case 0x317944u: goto label_317944;
        case 0x317948u: goto label_317948;
        case 0x31794cu: goto label_31794c;
        case 0x317950u: goto label_317950;
        case 0x317954u: goto label_317954;
        case 0x317958u: goto label_317958;
        case 0x31795cu: goto label_31795c;
        case 0x317960u: goto label_317960;
        case 0x317964u: goto label_317964;
        case 0x317968u: goto label_317968;
        case 0x31796cu: goto label_31796c;
        case 0x317970u: goto label_317970;
        case 0x317974u: goto label_317974;
        case 0x317978u: goto label_317978;
        case 0x31797cu: goto label_31797c;
        case 0x317980u: goto label_317980;
        case 0x317984u: goto label_317984;
        case 0x317988u: goto label_317988;
        case 0x31798cu: goto label_31798c;
        case 0x317990u: goto label_317990;
        case 0x317994u: goto label_317994;
        case 0x317998u: goto label_317998;
        case 0x31799cu: goto label_31799c;
        case 0x3179a0u: goto label_3179a0;
        case 0x3179a4u: goto label_3179a4;
        case 0x3179a8u: goto label_3179a8;
        case 0x3179acu: goto label_3179ac;
        case 0x3179b0u: goto label_3179b0;
        case 0x3179b4u: goto label_3179b4;
        case 0x3179b8u: goto label_3179b8;
        case 0x3179bcu: goto label_3179bc;
        case 0x3179c0u: goto label_3179c0;
        case 0x3179c4u: goto label_3179c4;
        case 0x3179c8u: goto label_3179c8;
        case 0x3179ccu: goto label_3179cc;
        case 0x3179d0u: goto label_3179d0;
        case 0x3179d4u: goto label_3179d4;
        case 0x3179d8u: goto label_3179d8;
        case 0x3179dcu: goto label_3179dc;
        case 0x3179e0u: goto label_3179e0;
        case 0x3179e4u: goto label_3179e4;
        case 0x3179e8u: goto label_3179e8;
        case 0x3179ecu: goto label_3179ec;
        case 0x3179f0u: goto label_3179f0;
        case 0x3179f4u: goto label_3179f4;
        case 0x3179f8u: goto label_3179f8;
        case 0x3179fcu: goto label_3179fc;
        case 0x317a00u: goto label_317a00;
        case 0x317a04u: goto label_317a04;
        case 0x317a08u: goto label_317a08;
        case 0x317a0cu: goto label_317a0c;
        case 0x317a10u: goto label_317a10;
        case 0x317a14u: goto label_317a14;
        case 0x317a18u: goto label_317a18;
        case 0x317a1cu: goto label_317a1c;
        case 0x317a20u: goto label_317a20;
        case 0x317a24u: goto label_317a24;
        case 0x317a28u: goto label_317a28;
        case 0x317a2cu: goto label_317a2c;
        case 0x317a30u: goto label_317a30;
        case 0x317a34u: goto label_317a34;
        case 0x317a38u: goto label_317a38;
        case 0x317a3cu: goto label_317a3c;
        case 0x317a40u: goto label_317a40;
        case 0x317a44u: goto label_317a44;
        case 0x317a48u: goto label_317a48;
        case 0x317a4cu: goto label_317a4c;
        case 0x317a50u: goto label_317a50;
        case 0x317a54u: goto label_317a54;
        case 0x317a58u: goto label_317a58;
        case 0x317a5cu: goto label_317a5c;
        case 0x317a60u: goto label_317a60;
        case 0x317a64u: goto label_317a64;
        case 0x317a68u: goto label_317a68;
        case 0x317a6cu: goto label_317a6c;
        case 0x317a70u: goto label_317a70;
        case 0x317a74u: goto label_317a74;
        case 0x317a78u: goto label_317a78;
        case 0x317a7cu: goto label_317a7c;
        case 0x317a80u: goto label_317a80;
        case 0x317a84u: goto label_317a84;
        case 0x317a88u: goto label_317a88;
        case 0x317a8cu: goto label_317a8c;
        case 0x317a90u: goto label_317a90;
        case 0x317a94u: goto label_317a94;
        case 0x317a98u: goto label_317a98;
        case 0x317a9cu: goto label_317a9c;
        case 0x317aa0u: goto label_317aa0;
        case 0x317aa4u: goto label_317aa4;
        case 0x317aa8u: goto label_317aa8;
        case 0x317aacu: goto label_317aac;
        case 0x317ab0u: goto label_317ab0;
        case 0x317ab4u: goto label_317ab4;
        case 0x317ab8u: goto label_317ab8;
        case 0x317abcu: goto label_317abc;
        case 0x317ac0u: goto label_317ac0;
        case 0x317ac4u: goto label_317ac4;
        case 0x317ac8u: goto label_317ac8;
        case 0x317accu: goto label_317acc;
        case 0x317ad0u: goto label_317ad0;
        case 0x317ad4u: goto label_317ad4;
        case 0x317ad8u: goto label_317ad8;
        case 0x317adcu: goto label_317adc;
        case 0x317ae0u: goto label_317ae0;
        case 0x317ae4u: goto label_317ae4;
        case 0x317ae8u: goto label_317ae8;
        case 0x317aecu: goto label_317aec;
        case 0x317af0u: goto label_317af0;
        case 0x317af4u: goto label_317af4;
        case 0x317af8u: goto label_317af8;
        case 0x317afcu: goto label_317afc;
        case 0x317b00u: goto label_317b00;
        case 0x317b04u: goto label_317b04;
        case 0x317b08u: goto label_317b08;
        case 0x317b0cu: goto label_317b0c;
        case 0x317b10u: goto label_317b10;
        case 0x317b14u: goto label_317b14;
        case 0x317b18u: goto label_317b18;
        case 0x317b1cu: goto label_317b1c;
        case 0x317b20u: goto label_317b20;
        case 0x317b24u: goto label_317b24;
        case 0x317b28u: goto label_317b28;
        case 0x317b2cu: goto label_317b2c;
        case 0x317b30u: goto label_317b30;
        case 0x317b34u: goto label_317b34;
        case 0x317b38u: goto label_317b38;
        case 0x317b3cu: goto label_317b3c;
        default: break;
    }

    ctx->pc = 0x316f30u;

label_316f30:
    // 0x316f30: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x316f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_316f34:
    // 0x316f34: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x316f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_316f38:
    // 0x316f38: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x316f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_316f3c:
    // 0x316f3c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x316f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_316f40:
    // 0x316f40: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x316f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_316f44:
    // 0x316f44: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x316f44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_316f48:
    // 0x316f48: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x316f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_316f4c:
    // 0x316f4c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x316f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_316f50:
    // 0x316f50: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x316f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_316f54:
    // 0x316f54: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x316f54u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_316f58:
    // 0x316f58: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x316f58u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_316f5c:
    // 0x316f5c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x316f5cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_316f60:
    // 0x316f60: 0x8ca20da0  lw          $v0, 0xDA0($a1)
    ctx->pc = 0x316f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3488)));
label_316f64:
    // 0x316f64: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x316f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_316f68:
    // 0x316f68: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_316f6c:
    if (ctx->pc == 0x316F6Cu) {
        ctx->pc = 0x316F6Cu;
            // 0x316f6c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x316F70u;
        goto label_316f70;
    }
    ctx->pc = 0x316F68u;
    {
        const bool branch_taken_0x316f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x316F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316F68u;
            // 0x316f6c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316f68) {
            ctx->pc = 0x316F78u;
            goto label_316f78;
        }
    }
    ctx->pc = 0x316F70u;
label_316f70:
    // 0x316f70: 0x100001e7  b           . + 4 + (0x1E7 << 2)
label_316f74:
    if (ctx->pc == 0x316F74u) {
        ctx->pc = 0x316F74u;
            // 0x316f74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x316F78u;
        goto label_316f78;
    }
    ctx->pc = 0x316F70u;
    {
        const bool branch_taken_0x316f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316F70u;
            // 0x316f74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316f70) {
            ctx->pc = 0x317710u;
            goto label_317710;
        }
    }
    ctx->pc = 0x316F78u;
label_316f78:
    // 0x316f78: 0x8e920008  lw          $s2, 0x8($s4)
    ctx->pc = 0x316f78u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_316f7c:
    // 0x316f7c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x316f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_316f80:
    // 0x316f80: 0x96670c7e  lhu         $a3, 0xC7E($s3)
    ctx->pc = 0x316f80u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 3198)));
label_316f84:
    // 0x316f84: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x316f84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_316f88:
    // 0x316f88: 0x8c510e80  lw          $s1, 0xE80($v0)
    ctx->pc = 0x316f88u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_316f8c:
    // 0x316f8c: 0x26700c6c  addiu       $s0, $s3, 0xC6C
    ctx->pc = 0x316f8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 3180));
label_316f90:
    // 0x316f90: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x316f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_316f94:
    // 0x316f94: 0x73980  sll         $a3, $a3, 6
    ctx->pc = 0x316f94u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
label_316f98:
    // 0x316f98: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x316f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_316f9c:
    // 0x316f9c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x316f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_316fa0:
    // 0x316fa0: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x316fa0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_316fa4:
    // 0x316fa4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x316fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_316fa8:
    // 0x316fa8: 0xc0c5f94  jal         func_317E50
label_316fac:
    if (ctx->pc == 0x316FACu) {
        ctx->pc = 0x316FACu;
            // 0x316fac: 0x43a821  addu        $s5, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x316FB0u;
        goto label_316fb0;
    }
    ctx->pc = 0x316FA8u;
    SET_GPR_U32(ctx, 31, 0x316FB0u);
    ctx->pc = 0x316FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316FA8u;
            // 0x316fac: 0x43a821  addu        $s5, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x317E50u;
    if (runtime->hasFunction(0x317E50u)) {
        auto targetFn = runtime->lookupFunction(0x317E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316FB0u; }
        if (ctx->pc != 0x316FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00317E50_0x317e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316FB0u; }
        if (ctx->pc != 0x316FB0u) { return; }
    }
    ctx->pc = 0x316FB0u;
label_316fb0:
    // 0x316fb0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x316fb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_316fb4:
    // 0x316fb4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x316fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_316fb8:
    // 0x316fb8: 0xc04cc90  jal         func_133240
label_316fbc:
    if (ctx->pc == 0x316FBCu) {
        ctx->pc = 0x316FBCu;
            // 0x316fbc: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x316FC0u;
        goto label_316fc0;
    }
    ctx->pc = 0x316FB8u;
    SET_GPR_U32(ctx, 31, 0x316FC0u);
    ctx->pc = 0x316FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316FB8u;
            // 0x316fbc: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316FC0u; }
        if (ctx->pc != 0x316FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316FC0u; }
        if (ctx->pc != 0x316FC0u) { return; }
    }
    ctx->pc = 0x316FC0u;
label_316fc0:
    // 0x316fc0: 0xc04cc2c  jal         func_1330B0
label_316fc4:
    if (ctx->pc == 0x316FC4u) {
        ctx->pc = 0x316FC4u;
            // 0x316fc4: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x316FC8u;
        goto label_316fc8;
    }
    ctx->pc = 0x316FC0u;
    SET_GPR_U32(ctx, 31, 0x316FC8u);
    ctx->pc = 0x316FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x316FC0u;
            // 0x316fc4: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330B0u;
    if (runtime->hasFunction(0x1330B0u)) {
        auto targetFn = runtime->lookupFunction(0x1330B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316FC8u; }
        if (ctx->pc != 0x316FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330B0_0x1330b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x316FC8u; }
        if (ctx->pc != 0x316FC8u) { return; }
    }
    ctx->pc = 0x316FC8u;
label_316fc8:
    // 0x316fc8: 0x0  nop
    ctx->pc = 0x316fc8u;
    // NOP
label_316fcc:
    // 0x316fcc: 0x0  nop
    ctx->pc = 0x316fccu;
    // NOP
label_316fd0:
    // 0x316fd0: 0x46000044  c1          0x44
    ctx->pc = 0x316fd0u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_316fd4:
    // 0x316fd4: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x316fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_316fd8:
    // 0x316fd8: 0x96050012  lhu         $a1, 0x12($s0)
    ctx->pc = 0x316fd8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_316fdc:
    // 0x316fdc: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x316fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_316fe0:
    // 0x316fe0: 0x8e230968  lw          $v1, 0x968($s1)
    ctx->pc = 0x316fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2408)));
label_316fe4:
    // 0x316fe4: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x316fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_316fe8:
    // 0x316fe8: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x316fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_316fec:
    // 0x316fec: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x316fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_316ff0:
    // 0x316ff0: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x316ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_316ff4:
    // 0x316ff4: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_316ff8:
    if (ctx->pc == 0x316FF8u) {
        ctx->pc = 0x316FF8u;
            // 0x316ff8: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x316FFCu;
        goto label_316ffc;
    }
    ctx->pc = 0x316FF4u;
    {
        const bool branch_taken_0x316ff4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x316FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x316FF4u;
            // 0x316ff8: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x316ff4) {
            ctx->pc = 0x317020u;
            goto label_317020;
        }
    }
    ctx->pc = 0x316FFCu;
label_316ffc:
    // 0x316ffc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x316ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_317000:
    // 0x317000: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_317004:
    if (ctx->pc == 0x317004u) {
        ctx->pc = 0x317008u;
        goto label_317008;
    }
    ctx->pc = 0x317000u;
    {
        const bool branch_taken_0x317000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x317000) {
            ctx->pc = 0x317010u;
            goto label_317010;
        }
    }
    ctx->pc = 0x317008u;
label_317008:
    // 0x317008: 0x10000009  b           . + 4 + (0x9 << 2)
label_31700c:
    if (ctx->pc == 0x31700Cu) {
        ctx->pc = 0x31700Cu;
            // 0x31700c: 0xc6420018  lwc1        $f2, 0x18($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x317010u;
        goto label_317010;
    }
    ctx->pc = 0x317008u;
    {
        const bool branch_taken_0x317008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31700Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317008u;
            // 0x31700c: 0xc6420018  lwc1        $f2, 0x18($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x317008) {
            ctx->pc = 0x317030u;
            goto label_317030;
        }
    }
    ctx->pc = 0x317010u;
label_317010:
    // 0x317010: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x317010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_317014:
    // 0x317014: 0xc4408b50  lwc1        $f0, -0x74B0($v0)
    ctx->pc = 0x317014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294937424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_317018:
    // 0x317018: 0x10000004  b           . + 4 + (0x4 << 2)
label_31701c:
    if (ctx->pc == 0x31701Cu) {
        ctx->pc = 0x31701Cu;
            // 0x31701c: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x317020u;
        goto label_317020;
    }
    ctx->pc = 0x317018u;
    {
        const bool branch_taken_0x317018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31701Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317018u;
            // 0x31701c: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x317018) {
            ctx->pc = 0x31702Cu;
            goto label_31702c;
        }
    }
    ctx->pc = 0x317020u;
label_317020:
    // 0x317020: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x317020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_317024:
    // 0x317024: 0xc4408b58  lwc1        $f0, -0x74A8($v0)
    ctx->pc = 0x317024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294937432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_317028:
    // 0x317028: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x317028u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_31702c:
    // 0x31702c: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x31702cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_317030:
    // 0x317030: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x317030u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317034:
    // 0x317034: 0x0  nop
    ctx->pc = 0x317034u;
    // NOP
label_317038:
    // 0x317038: 0x46011541  sub.s       $f21, $f2, $f1
    ctx->pc = 0x317038u;
    ctx->f[21] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_31703c:
    // 0x31703c: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x31703cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_317040:
    // 0x317040: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_317044:
    if (ctx->pc == 0x317044u) {
        ctx->pc = 0x317044u;
            // 0x317044: 0x8e630d78  lw          $v1, 0xD78($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3448)));
        ctx->pc = 0x317048u;
        goto label_317048;
    }
    ctx->pc = 0x317040u;
    {
        const bool branch_taken_0x317040 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x317040) {
            ctx->pc = 0x317044u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x317040u;
            // 0x317044: 0x8e630d78  lw          $v1, 0xD78($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3448)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x317050u;
            goto label_317050;
        }
    }
    ctx->pc = 0x317048u;
label_317048:
    // 0x317048: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x317048u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_31704c:
    // 0x31704c: 0x8e630d78  lw          $v1, 0xD78($s3)
    ctx->pc = 0x31704cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3448)));
label_317050:
    // 0x317050: 0x8e22078c  lw          $v0, 0x78C($s1)
    ctx->pc = 0x317050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1932)));
label_317054:
    // 0x317054: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x317054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_317058:
    // 0x317058: 0x439023  subu        $s2, $v0, $v1
    ctx->pc = 0x317058u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_31705c:
    // 0x31705c: 0x5a400009  blezl       $s2, . + 4 + (0x9 << 2)
label_317060:
    if (ctx->pc == 0x317060u) {
        ctx->pc = 0x317060u;
            // 0x317060: 0x8e700d60  lw          $s0, 0xD60($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3424)));
        ctx->pc = 0x317064u;
        goto label_317064;
    }
    ctx->pc = 0x31705Cu;
    {
        const bool branch_taken_0x31705c = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x31705c) {
            ctx->pc = 0x317060u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31705Cu;
            // 0x317060: 0x8e700d60  lw          $s0, 0xD60($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3424)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x317084u;
            goto label_317084;
        }
    }
    ctx->pc = 0x317064u;
label_317064:
    // 0x317064: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x317064u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317068:
    // 0x317068: 0x0  nop
    ctx->pc = 0x317068u;
    // NOP
label_31706c:
    // 0x31706c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x31706cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_317070:
    // 0x317070: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x317070u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317074:
    // 0x317074: 0x0  nop
    ctx->pc = 0x317074u;
    // NOP
label_317078:
    // 0x317078: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x317078u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_31707c:
    // 0x31707c: 0x4601155c  madd.s      $f21, $f2, $f1
    ctx->pc = 0x31707cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_317080:
    // 0x317080: 0x8e700d60  lw          $s0, 0xD60($s3)
    ctx->pc = 0x317080u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3424)));
label_317084:
    // 0x317084: 0xc049820  jal         func_126080
label_317088:
    if (ctx->pc == 0x317088u) {
        ctx->pc = 0x317088u;
            // 0x317088: 0x8e0400bc  lw          $a0, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->pc = 0x31708Cu;
        goto label_31708c;
    }
    ctx->pc = 0x317084u;
    SET_GPR_U32(ctx, 31, 0x31708Cu);
    ctx->pc = 0x317088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317084u;
            // 0x317088: 0x8e0400bc  lw          $a0, 0xBC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x126080u;
    if (runtime->hasFunction(0x126080u)) {
        auto targetFn = runtime->lookupFunction(0x126080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31708Cu; }
        if (ctx->pc != 0x31708Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126080_0x126080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31708Cu; }
        if (ctx->pc != 0x31708Cu) { return; }
    }
    ctx->pc = 0x31708Cu;
label_31708c:
    // 0x31708c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x31708cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_317090:
    // 0x317090: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x317090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_317094:
    // 0x317094: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x317094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_317098:
    // 0x317098: 0x38440005  xori        $a0, $v0, 0x5
    ctx->pc = 0x317098u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
label_31709c:
    // 0x31709c: 0x38430006  xori        $v1, $v0, 0x6
    ctx->pc = 0x31709cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
label_3170a0:
    // 0x3170a0: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x3170a0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3170a4:
    // 0x3170a4: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x3170a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3170a8:
    // 0x3170a8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3170a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3170ac:
    // 0x3170ac: 0x38430009  xori        $v1, $v0, 0x9
    ctx->pc = 0x3170acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)9);
label_3170b0:
    // 0x3170b0: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x3170b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3170b4:
    // 0x3170b4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3170b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_3170b8:
    // 0x3170b8: 0x50600019  beql        $v1, $zero, . + 4 + (0x19 << 2)
label_3170bc:
    if (ctx->pc == 0x3170BCu) {
        ctx->pc = 0x3170BCu;
            // 0x3170bc: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x3170C0u;
        goto label_3170c0;
    }
    ctx->pc = 0x3170B8u;
    {
        const bool branch_taken_0x3170b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3170b8) {
            ctx->pc = 0x3170BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3170B8u;
            // 0x3170bc: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x317120u;
            goto label_317120;
        }
    }
    ctx->pc = 0x3170C0u;
label_3170c0:
    // 0x3170c0: 0x8e260968  lw          $a2, 0x968($s1)
    ctx->pc = 0x3170c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2408)));
label_3170c4:
    // 0x3170c4: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x3170c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_3170c8:
    // 0x3170c8: 0x9203009a  lbu         $v1, 0x9A($s0)
    ctx->pc = 0x3170c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 154)));
label_3170cc:
    // 0x3170cc: 0x2484d6b8  addiu       $a0, $a0, -0x2948
    ctx->pc = 0x3170ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956728));
label_3170d0:
    // 0x3170d0: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x3170d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_3170d4:
    // 0x3170d4: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x3170d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_3170d8:
    // 0x3170d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3170d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3170dc:
    // 0x3170dc: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x3170dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_3170e0:
    // 0x3170e0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3170e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3170e4:
    // 0x3170e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3170e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3170e8:
    // 0x3170e8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3170e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3170ec:
    // 0x3170ec: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_3170f0:
    if (ctx->pc == 0x3170F0u) {
        ctx->pc = 0x3170F0u;
            // 0x3170f0: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x3170F4u;
        goto label_3170f4;
    }
    ctx->pc = 0x3170ECu;
    {
        const bool branch_taken_0x3170ec = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x3170ec) {
            ctx->pc = 0x3170F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3170ECu;
            // 0x3170f0: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x317100u;
            goto label_317100;
        }
    }
    ctx->pc = 0x3170F4u;
label_3170f4:
    // 0x3170f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3170f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3170f8:
    // 0x3170f8: 0x10000007  b           . + 4 + (0x7 << 2)
label_3170fc:
    if (ctx->pc == 0x3170FCu) {
        ctx->pc = 0x3170FCu;
            // 0x3170fc: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x317100u;
        goto label_317100;
    }
    ctx->pc = 0x3170F8u;
    {
        const bool branch_taken_0x3170f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3170FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3170F8u;
            // 0x3170fc: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3170f8) {
            ctx->pc = 0x317118u;
            goto label_317118;
        }
    }
    ctx->pc = 0x317100u;
label_317100:
    // 0x317100: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x317100u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_317104:
    // 0x317104: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x317104u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_317108:
    // 0x317108: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x317108u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31710c:
    // 0x31710c: 0x0  nop
    ctx->pc = 0x31710cu;
    // NOP
label_317110:
    // 0x317110: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x317110u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_317114:
    // 0x317114: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x317114u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
label_317118:
    // 0x317118: 0x10000042  b           . + 4 + (0x42 << 2)
label_31711c:
    if (ctx->pc == 0x31711Cu) {
        ctx->pc = 0x31711Cu;
            // 0x31711c: 0x96050146  lhu         $a1, 0x146($s0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 326)));
        ctx->pc = 0x317120u;
        goto label_317120;
    }
    ctx->pc = 0x317118u;
    {
        const bool branch_taken_0x317118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31711Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317118u;
            // 0x31711c: 0x96050146  lhu         $a1, 0x146($s0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 326)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317118) {
            ctx->pc = 0x317224u;
            goto label_317224;
        }
    }
    ctx->pc = 0x317120u;
label_317120:
    // 0x317120: 0x54430019  bnel        $v0, $v1, . + 4 + (0x19 << 2)
label_317124:
    if (ctx->pc == 0x317124u) {
        ctx->pc = 0x317124u;
            // 0x317124: 0x8e0400e0  lw          $a0, 0xE0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
        ctx->pc = 0x317128u;
        goto label_317128;
    }
    ctx->pc = 0x317120u;
    {
        const bool branch_taken_0x317120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x317120) {
            ctx->pc = 0x317124u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x317120u;
            // 0x317124: 0x8e0400e0  lw          $a0, 0xE0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x317188u;
            goto label_317188;
        }
    }
    ctx->pc = 0x317128u;
label_317128:
    // 0x317128: 0x8e260968  lw          $a2, 0x968($s1)
    ctx->pc = 0x317128u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2408)));
label_31712c:
    // 0x31712c: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x31712cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_317130:
    // 0x317130: 0x9203009a  lbu         $v1, 0x9A($s0)
    ctx->pc = 0x317130u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 154)));
label_317134:
    // 0x317134: 0x2484de38  addiu       $a0, $a0, -0x21C8
    ctx->pc = 0x317134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958648));
label_317138:
    // 0x317138: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x317138u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_31713c:
    // 0x31713c: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x31713cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_317140:
    // 0x317140: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x317140u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_317144:
    // 0x317144: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x317144u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_317148:
    // 0x317148: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x317148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_31714c:
    // 0x31714c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31714cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_317150:
    // 0x317150: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x317150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_317154:
    // 0x317154: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_317158:
    if (ctx->pc == 0x317158u) {
        ctx->pc = 0x317158u;
            // 0x317158: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x31715Cu;
        goto label_31715c;
    }
    ctx->pc = 0x317154u;
    {
        const bool branch_taken_0x317154 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x317154) {
            ctx->pc = 0x317158u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x317154u;
            // 0x317158: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x317168u;
            goto label_317168;
        }
    }
    ctx->pc = 0x31715Cu;
label_31715c:
    // 0x31715c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31715cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317160:
    // 0x317160: 0x10000007  b           . + 4 + (0x7 << 2)
label_317164:
    if (ctx->pc == 0x317164u) {
        ctx->pc = 0x317164u;
            // 0x317164: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x317168u;
        goto label_317168;
    }
    ctx->pc = 0x317160u;
    {
        const bool branch_taken_0x317160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317160u;
            // 0x317164: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x317160) {
            ctx->pc = 0x317180u;
            goto label_317180;
        }
    }
    ctx->pc = 0x317168u;
label_317168:
    // 0x317168: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x317168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_31716c:
    // 0x31716c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x31716cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_317170:
    // 0x317170: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x317170u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317174:
    // 0x317174: 0x0  nop
    ctx->pc = 0x317174u;
    // NOP
label_317178:
    // 0x317178: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x317178u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_31717c:
    // 0x31717c: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x31717cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
label_317180:
    // 0x317180: 0x10000027  b           . + 4 + (0x27 << 2)
label_317184:
    if (ctx->pc == 0x317184u) {
        ctx->pc = 0x317188u;
        goto label_317188;
    }
    ctx->pc = 0x317180u;
    {
        const bool branch_taken_0x317180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x317180) {
            ctx->pc = 0x317220u;
            goto label_317220;
        }
    }
    ctx->pc = 0x317188u;
label_317188:
    // 0x317188: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x317188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_31718c:
    // 0x31718c: 0x54830019  bnel        $a0, $v1, . + 4 + (0x19 << 2)
label_317190:
    if (ctx->pc == 0x317190u) {
        ctx->pc = 0x317190u;
            // 0x317190: 0x8e0300d8  lw          $v1, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->pc = 0x317194u;
        goto label_317194;
    }
    ctx->pc = 0x31718Cu;
    {
        const bool branch_taken_0x31718c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x31718c) {
            ctx->pc = 0x317190u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31718Cu;
            // 0x317190: 0x8e0300d8  lw          $v1, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3171F4u;
            goto label_3171f4;
        }
    }
    ctx->pc = 0x317194u;
label_317194:
    // 0x317194: 0x8e260968  lw          $a2, 0x968($s1)
    ctx->pc = 0x317194u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2408)));
label_317198:
    // 0x317198: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x317198u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_31719c:
    // 0x31719c: 0x9203009a  lbu         $v1, 0x9A($s0)
    ctx->pc = 0x31719cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 154)));
label_3171a0:
    // 0x3171a0: 0x2484da78  addiu       $a0, $a0, -0x2588
    ctx->pc = 0x3171a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957688));
label_3171a4:
    // 0x3171a4: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x3171a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_3171a8:
    // 0x3171a8: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x3171a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_3171ac:
    // 0x3171ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3171acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3171b0:
    // 0x3171b0: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x3171b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_3171b4:
    // 0x3171b4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x3171b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3171b8:
    // 0x3171b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3171b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3171bc:
    // 0x3171bc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3171bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3171c0:
    // 0x3171c0: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_3171c4:
    if (ctx->pc == 0x3171C4u) {
        ctx->pc = 0x3171C4u;
            // 0x3171c4: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x3171C8u;
        goto label_3171c8;
    }
    ctx->pc = 0x3171C0u;
    {
        const bool branch_taken_0x3171c0 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x3171c0) {
            ctx->pc = 0x3171C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3171C0u;
            // 0x3171c4: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3171D4u;
            goto label_3171d4;
        }
    }
    ctx->pc = 0x3171C8u;
label_3171c8:
    // 0x3171c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3171c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3171cc:
    // 0x3171cc: 0x10000007  b           . + 4 + (0x7 << 2)
label_3171d0:
    if (ctx->pc == 0x3171D0u) {
        ctx->pc = 0x3171D0u;
            // 0x3171d0: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3171D4u;
        goto label_3171d4;
    }
    ctx->pc = 0x3171CCu;
    {
        const bool branch_taken_0x3171cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3171D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3171CCu;
            // 0x3171d0: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3171cc) {
            ctx->pc = 0x3171ECu;
            goto label_3171ec;
        }
    }
    ctx->pc = 0x3171D4u;
label_3171d4:
    // 0x3171d4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3171d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3171d8:
    // 0x3171d8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3171d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3171dc:
    // 0x3171dc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3171dcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3171e0:
    // 0x3171e0: 0x0  nop
    ctx->pc = 0x3171e0u;
    // NOP
label_3171e4:
    // 0x3171e4: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x3171e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_3171e8:
    // 0x3171e8: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x3171e8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
label_3171ec:
    // 0x3171ec: 0x1000000c  b           . + 4 + (0xC << 2)
label_3171f0:
    if (ctx->pc == 0x3171F0u) {
        ctx->pc = 0x3171F4u;
        goto label_3171f4;
    }
    ctx->pc = 0x3171ECu;
    {
        const bool branch_taken_0x3171ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3171ec) {
            ctx->pc = 0x317220u;
            goto label_317220;
        }
    }
    ctx->pc = 0x3171F4u;
label_3171f4:
    // 0x3171f4: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_3171f8:
    if (ctx->pc == 0x3171F8u) {
        ctx->pc = 0x3171F8u;
            // 0x3171f8: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x3171FCu;
        goto label_3171fc;
    }
    ctx->pc = 0x3171F4u;
    {
        const bool branch_taken_0x3171f4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x3171f4) {
            ctx->pc = 0x3171F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3171F4u;
            // 0x3171f8: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x317208u;
            goto label_317208;
        }
    }
    ctx->pc = 0x3171FCu;
label_3171fc:
    // 0x3171fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3171fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317200:
    // 0x317200: 0x10000007  b           . + 4 + (0x7 << 2)
label_317204:
    if (ctx->pc == 0x317204u) {
        ctx->pc = 0x317204u;
            // 0x317204: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x317208u;
        goto label_317208;
    }
    ctx->pc = 0x317200u;
    {
        const bool branch_taken_0x317200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317200u;
            // 0x317204: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x317200) {
            ctx->pc = 0x317220u;
            goto label_317220;
        }
    }
    ctx->pc = 0x317208u;
label_317208:
    // 0x317208: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x317208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_31720c:
    // 0x31720c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x31720cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_317210:
    // 0x317210: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x317210u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317214:
    // 0x317214: 0x0  nop
    ctx->pc = 0x317214u;
    // NOP
label_317218:
    // 0x317218: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x317218u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_31721c:
    // 0x31721c: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x31721cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
label_317220:
    // 0x317220: 0x96050146  lhu         $a1, 0x146($s0)
    ctx->pc = 0x317220u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 326)));
label_317224:
    // 0x317224: 0x3c031062  lui         $v1, 0x1062
    ctx->pc = 0x317224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4194 << 16));
label_317228:
    // 0x317228: 0x34634dd3  ori         $v1, $v1, 0x4DD3
    ctx->pc = 0x317228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)19923);
label_31722c:
    // 0x31722c: 0x92060144  lbu         $a2, 0x144($s0)
    ctx->pc = 0x31722cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 324)));
label_317230:
    // 0x317230: 0x92070145  lbu         $a3, 0x145($s0)
    ctx->pc = 0x317230u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 325)));
label_317234:
    // 0x317234: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x317234u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_317238:
    // 0x317238: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x317238u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_31723c:
    // 0x31723c: 0x863023  subu        $a2, $a0, $a2
    ctx->pc = 0x31723cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_317240:
    // 0x317240: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x317240u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_317244:
    // 0x317244: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x317244u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_317248:
    // 0x317248: 0xe32821  addu        $a1, $a3, $v1
    ctx->pc = 0x317248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_31724c:
    // 0x31724c: 0x1810  mfhi        $v1
    ctx->pc = 0x31724cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_317250:
    // 0x317250: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x317250u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
label_317254:
    // 0x317254: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x317254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_317258:
    // 0x317258: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x317258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_31725c:
    // 0x31725c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x31725cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_317260:
    // 0x317260: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x317260u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_317264:
    // 0x317264: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x317264u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_317268:
    // 0x317268: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x317268u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31726c:
    // 0x31726c: 0x0  nop
    ctx->pc = 0x31726cu;
    // NOP
label_317270:
    // 0x317270: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x317270u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_317274:
    // 0x317274: 0x1a4000a2  blez        $s2, . + 4 + (0xA2 << 2)
label_317278:
    if (ctx->pc == 0x317278u) {
        ctx->pc = 0x317278u;
            // 0x317278: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x31727Cu;
        goto label_31727c;
    }
    ctx->pc = 0x317274u;
    {
        const bool branch_taken_0x317274 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x317278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317274u;
            // 0x317278: 0x4600a501  sub.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x317274) {
            ctx->pc = 0x317500u;
            goto label_317500;
        }
    }
    ctx->pc = 0x31727Cu;
label_31727c:
    // 0x31727c: 0x38440005  xori        $a0, $v0, 0x5
    ctx->pc = 0x31727cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
label_317280:
    // 0x317280: 0x38430006  xori        $v1, $v0, 0x6
    ctx->pc = 0x317280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
label_317284:
    // 0x317284: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x317284u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_317288:
    // 0x317288: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x317288u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_31728c:
    // 0x31728c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x31728cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_317290:
    // 0x317290: 0x38430009  xori        $v1, $v0, 0x9
    ctx->pc = 0x317290u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)9);
label_317294:
    // 0x317294: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x317294u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_317298:
    // 0x317298: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x317298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_31729c:
    // 0x31729c: 0x5060001f  beql        $v1, $zero, . + 4 + (0x1F << 2)
label_3172a0:
    if (ctx->pc == 0x3172A0u) {
        ctx->pc = 0x3172A0u;
            // 0x3172a0: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x3172A4u;
        goto label_3172a4;
    }
    ctx->pc = 0x31729Cu;
    {
        const bool branch_taken_0x31729c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x31729c) {
            ctx->pc = 0x3172A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31729Cu;
            // 0x3172a0: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31731Cu;
            goto label_31731c;
        }
    }
    ctx->pc = 0x3172A4u;
label_3172a4:
    // 0x3172a4: 0x8e250968  lw          $a1, 0x968($s1)
    ctx->pc = 0x3172a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2408)));
label_3172a8:
    // 0x3172a8: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x3172a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_3172ac:
    // 0x3172ac: 0x9202009a  lbu         $v0, 0x9A($s0)
    ctx->pc = 0x3172acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 154)));
label_3172b0:
    // 0x3172b0: 0x2463d6b8  addiu       $v1, $v1, -0x2948
    ctx->pc = 0x3172b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956728));
label_3172b4:
    // 0x3172b4: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x3172b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_3172b8:
    // 0x3172b8: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x3172b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3172bc:
    // 0x3172bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3172bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3172c0:
    // 0x3172c0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x3172c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_3172c4:
    // 0x3172c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3172c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3172c8:
    // 0x3172c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3172c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3172cc:
    // 0x3172cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3172ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3172d0:
    // 0x3172d0: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_3172d4:
    if (ctx->pc == 0x3172D4u) {
        ctx->pc = 0x3172D4u;
            // 0x3172d4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x3172D8u;
        goto label_3172d8;
    }
    ctx->pc = 0x3172D0u;
    {
        const bool branch_taken_0x3172d0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3172d0) {
            ctx->pc = 0x3172D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3172D0u;
            // 0x3172d4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3172E4u;
            goto label_3172e4;
        }
    }
    ctx->pc = 0x3172D8u;
label_3172d8:
    // 0x3172d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3172d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3172dc:
    // 0x3172dc: 0x10000007  b           . + 4 + (0x7 << 2)
label_3172e0:
    if (ctx->pc == 0x3172E0u) {
        ctx->pc = 0x3172E0u;
            // 0x3172e0: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3172E4u;
        goto label_3172e4;
    }
    ctx->pc = 0x3172DCu;
    {
        const bool branch_taken_0x3172dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3172E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3172DCu;
            // 0x3172e0: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3172dc) {
            ctx->pc = 0x3172FCu;
            goto label_3172fc;
        }
    }
    ctx->pc = 0x3172E4u;
label_3172e4:
    // 0x3172e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3172e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3172e8:
    // 0x3172e8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3172e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3172ec:
    // 0x3172ec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3172ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3172f0:
    // 0x3172f0: 0x0  nop
    ctx->pc = 0x3172f0u;
    // NOP
label_3172f4:
    // 0x3172f4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3172f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3172f8:
    // 0x3172f8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3172f8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3172fc:
    // 0x3172fc: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x3172fcu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317300:
    // 0x317300: 0x0  nop
    ctx->pc = 0x317300u;
    // NOP
label_317304:
    // 0x317304: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x317304u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_317308:
    // 0x317308: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x317308u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31730c:
    // 0x31730c: 0x0  nop
    ctx->pc = 0x31730cu;
    // NOP
label_317310:
    // 0x317310: 0x46140018  adda.s      $f0, $f20
    ctx->pc = 0x317310u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_317314:
    // 0x317314: 0x1000006d  b           . + 4 + (0x6D << 2)
label_317318:
    if (ctx->pc == 0x317318u) {
        ctx->pc = 0x317318u;
            // 0x317318: 0x46020d1c  madd.s      $f20, $f1, $f2 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
        ctx->pc = 0x31731Cu;
        goto label_31731c;
    }
    ctx->pc = 0x317314u;
    {
        const bool branch_taken_0x317314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317314u;
            // 0x317318: 0x46020d1c  madd.s      $f20, $f1, $f2 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317314) {
            ctx->pc = 0x3174CCu;
            goto label_3174cc;
        }
    }
    ctx->pc = 0x31731Cu;
label_31731c:
    // 0x31731c: 0x54430038  bnel        $v0, $v1, . + 4 + (0x38 << 2)
label_317320:
    if (ctx->pc == 0x317320u) {
        ctx->pc = 0x317320u;
            // 0x317320: 0x8e0300e0  lw          $v1, 0xE0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
        ctx->pc = 0x317324u;
        goto label_317324;
    }
    ctx->pc = 0x31731Cu;
    {
        const bool branch_taken_0x31731c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x31731c) {
            ctx->pc = 0x317320u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31731Cu;
            // 0x317320: 0x8e0300e0  lw          $v1, 0xE0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x317400u;
            goto label_317400;
        }
    }
    ctx->pc = 0x317324u;
label_317324:
    // 0x317324: 0x9203009a  lbu         $v1, 0x9A($s0)
    ctx->pc = 0x317324u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 154)));
label_317328:
    // 0x317328: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x317328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_31732c:
    // 0x31732c: 0x8e240968  lw          $a0, 0x968($s1)
    ctx->pc = 0x31732cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2408)));
label_317330:
    // 0x317330: 0x2442de38  addiu       $v0, $v0, -0x21C8
    ctx->pc = 0x317330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958648));
label_317334:
    // 0x317334: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x317334u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_317338:
    // 0x317338: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x317338u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_31733c:
    // 0x31733c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x31733cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_317340:
    // 0x317340: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x317340u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_317344:
    // 0x317344: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x317344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_317348:
    // 0x317348: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x317348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_31734c:
    // 0x31734c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x31734cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_317350:
    // 0x317350: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_317354:
    if (ctx->pc == 0x317354u) {
        ctx->pc = 0x317354u;
            // 0x317354: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x317358u;
        goto label_317358;
    }
    ctx->pc = 0x317350u;
    {
        const bool branch_taken_0x317350 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x317350) {
            ctx->pc = 0x317354u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x317350u;
            // 0x317354: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x317364u;
            goto label_317364;
        }
    }
    ctx->pc = 0x317358u;
label_317358:
    // 0x317358: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x317358u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31735c:
    // 0x31735c: 0x10000007  b           . + 4 + (0x7 << 2)
label_317360:
    if (ctx->pc == 0x317360u) {
        ctx->pc = 0x317360u;
            // 0x317360: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x317364u;
        goto label_317364;
    }
    ctx->pc = 0x31735Cu;
    {
        const bool branch_taken_0x31735c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31735Cu;
            // 0x317360: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31735c) {
            ctx->pc = 0x31737Cu;
            goto label_31737c;
        }
    }
    ctx->pc = 0x317364u;
label_317364:
    // 0x317364: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x317364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_317368:
    // 0x317368: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x317368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_31736c:
    // 0x31736c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31736cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317370:
    // 0x317370: 0x0  nop
    ctx->pc = 0x317370u;
    // NOP
label_317374:
    // 0x317374: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x317374u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_317378:
    // 0x317378: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x317378u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_31737c:
    // 0x31737c: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x31737cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317380:
    // 0x317380: 0x92230ce4  lbu         $v1, 0xCE4($s1)
    ctx->pc = 0x317380u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3300)));
label_317384:
    // 0x317384: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x317384u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_317388:
    // 0x317388: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x317388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_31738c:
    // 0x31738c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x31738cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_317390:
    // 0x317390: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_317394:
    if (ctx->pc == 0x317394u) {
        ctx->pc = 0x317394u;
            // 0x317394: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x317398u;
        goto label_317398;
    }
    ctx->pc = 0x317390u;
    {
        const bool branch_taken_0x317390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x317394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317390u;
            // 0x317394: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x317390) {
            ctx->pc = 0x3173A0u;
            goto label_3173a0;
        }
    }
    ctx->pc = 0x317398u;
label_317398:
    // 0x317398: 0x1000004c  b           . + 4 + (0x4C << 2)
label_31739c:
    if (ctx->pc == 0x31739Cu) {
        ctx->pc = 0x31739Cu;
            // 0x31739c: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x3173A0u;
        goto label_3173a0;
    }
    ctx->pc = 0x317398u;
    {
        const bool branch_taken_0x317398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31739Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317398u;
            // 0x31739c: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x317398) {
            ctx->pc = 0x3174CCu;
            goto label_3174cc;
        }
    }
    ctx->pc = 0x3173A0u;
label_3173a0:
    // 0x3173a0: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x3173a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_3173a4:
    // 0x3173a4: 0x2442e1f8  addiu       $v0, $v0, -0x1E08
    ctx->pc = 0x3173a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959608));
label_3173a8:
    // 0x3173a8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3173a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3173ac:
    // 0x3173ac: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3173acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3173b0:
    // 0x3173b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3173b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3173b4:
    // 0x3173b4: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_3173b8:
    if (ctx->pc == 0x3173B8u) {
        ctx->pc = 0x3173B8u;
            // 0x3173b8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x3173BCu;
        goto label_3173bc;
    }
    ctx->pc = 0x3173B4u;
    {
        const bool branch_taken_0x3173b4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3173b4) {
            ctx->pc = 0x3173B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3173B4u;
            // 0x3173b8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3173C8u;
            goto label_3173c8;
        }
    }
    ctx->pc = 0x3173BCu;
label_3173bc:
    // 0x3173bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3173bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3173c0:
    // 0x3173c0: 0x10000007  b           . + 4 + (0x7 << 2)
label_3173c4:
    if (ctx->pc == 0x3173C4u) {
        ctx->pc = 0x3173C4u;
            // 0x3173c4: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3173C8u;
        goto label_3173c8;
    }
    ctx->pc = 0x3173C0u;
    {
        const bool branch_taken_0x3173c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3173C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3173C0u;
            // 0x3173c4: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3173c0) {
            ctx->pc = 0x3173E0u;
            goto label_3173e0;
        }
    }
    ctx->pc = 0x3173C8u;
label_3173c8:
    // 0x3173c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3173c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3173cc:
    // 0x3173cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3173ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3173d0:
    // 0x3173d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3173d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3173d4:
    // 0x3173d4: 0x0  nop
    ctx->pc = 0x3173d4u;
    // NOP
label_3173d8:
    // 0x3173d8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3173d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3173dc:
    // 0x3173dc: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3173dcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3173e0:
    // 0x3173e0: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x3173e0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3173e4:
    // 0x3173e4: 0x0  nop
    ctx->pc = 0x3173e4u;
    // NOP
label_3173e8:
    // 0x3173e8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3173e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3173ec:
    // 0x3173ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3173ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3173f0:
    // 0x3173f0: 0x0  nop
    ctx->pc = 0x3173f0u;
    // NOP
label_3173f4:
    // 0x3173f4: 0x46140018  adda.s      $f0, $f20
    ctx->pc = 0x3173f4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_3173f8:
    // 0x3173f8: 0x10000034  b           . + 4 + (0x34 << 2)
label_3173fc:
    if (ctx->pc == 0x3173FCu) {
        ctx->pc = 0x3173FCu;
            // 0x3173fc: 0x46020d1c  madd.s      $f20, $f1, $f2 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
        ctx->pc = 0x317400u;
        goto label_317400;
    }
    ctx->pc = 0x3173F8u;
    {
        const bool branch_taken_0x3173f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3173FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3173F8u;
            // 0x3173fc: 0x46020d1c  madd.s      $f20, $f1, $f2 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3173f8) {
            ctx->pc = 0x3174CCu;
            goto label_3174cc;
        }
    }
    ctx->pc = 0x317400u;
label_317400:
    // 0x317400: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x317400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_317404:
    // 0x317404: 0x5462001f  bnel        $v1, $v0, . + 4 + (0x1F << 2)
label_317408:
    if (ctx->pc == 0x317408u) {
        ctx->pc = 0x317408u;
            // 0x317408: 0x8e0200d8  lw          $v0, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->pc = 0x31740Cu;
        goto label_31740c;
    }
    ctx->pc = 0x317404u;
    {
        const bool branch_taken_0x317404 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x317404) {
            ctx->pc = 0x317408u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x317404u;
            // 0x317408: 0x8e0200d8  lw          $v0, 0xD8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x317484u;
            goto label_317484;
        }
    }
    ctx->pc = 0x31740Cu;
label_31740c:
    // 0x31740c: 0x8e250968  lw          $a1, 0x968($s1)
    ctx->pc = 0x31740cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2408)));
label_317410:
    // 0x317410: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x317410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_317414:
    // 0x317414: 0x9202009a  lbu         $v0, 0x9A($s0)
    ctx->pc = 0x317414u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 154)));
label_317418:
    // 0x317418: 0x2463da78  addiu       $v1, $v1, -0x2588
    ctx->pc = 0x317418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957688));
label_31741c:
    // 0x31741c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x31741cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_317420:
    // 0x317420: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x317420u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_317424:
    // 0x317424: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x317424u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_317428:
    // 0x317428: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x317428u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_31742c:
    // 0x31742c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31742cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_317430:
    // 0x317430: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x317430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_317434:
    // 0x317434: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x317434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_317438:
    // 0x317438: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_31743c:
    if (ctx->pc == 0x31743Cu) {
        ctx->pc = 0x31743Cu;
            // 0x31743c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x317440u;
        goto label_317440;
    }
    ctx->pc = 0x317438u;
    {
        const bool branch_taken_0x317438 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x317438) {
            ctx->pc = 0x31743Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x317438u;
            // 0x31743c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31744Cu;
            goto label_31744c;
        }
    }
    ctx->pc = 0x317440u;
label_317440:
    // 0x317440: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x317440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317444:
    // 0x317444: 0x10000007  b           . + 4 + (0x7 << 2)
label_317448:
    if (ctx->pc == 0x317448u) {
        ctx->pc = 0x317448u;
            // 0x317448: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x31744Cu;
        goto label_31744c;
    }
    ctx->pc = 0x317444u;
    {
        const bool branch_taken_0x317444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317444u;
            // 0x317448: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x317444) {
            ctx->pc = 0x317464u;
            goto label_317464;
        }
    }
    ctx->pc = 0x31744Cu;
label_31744c:
    // 0x31744c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x31744cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_317450:
    // 0x317450: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x317450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_317454:
    // 0x317454: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x317454u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317458:
    // 0x317458: 0x0  nop
    ctx->pc = 0x317458u;
    // NOP
label_31745c:
    // 0x31745c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x31745cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_317460:
    // 0x317460: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x317460u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_317464:
    // 0x317464: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x317464u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317468:
    // 0x317468: 0x0  nop
    ctx->pc = 0x317468u;
    // NOP
label_31746c:
    // 0x31746c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x31746cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_317470:
    // 0x317470: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x317470u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317474:
    // 0x317474: 0x0  nop
    ctx->pc = 0x317474u;
    // NOP
label_317478:
    // 0x317478: 0x46140018  adda.s      $f0, $f20
    ctx->pc = 0x317478u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_31747c:
    // 0x31747c: 0x10000013  b           . + 4 + (0x13 << 2)
label_317480:
    if (ctx->pc == 0x317480u) {
        ctx->pc = 0x317480u;
            // 0x317480: 0x46020d1c  madd.s      $f20, $f1, $f2 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
        ctx->pc = 0x317484u;
        goto label_317484;
    }
    ctx->pc = 0x31747Cu;
    {
        const bool branch_taken_0x31747c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31747Cu;
            // 0x317480: 0x46020d1c  madd.s      $f20, $f1, $f2 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31747c) {
            ctx->pc = 0x3174CCu;
            goto label_3174cc;
        }
    }
    ctx->pc = 0x317484u;
label_317484:
    // 0x317484: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_317488:
    if (ctx->pc == 0x317488u) {
        ctx->pc = 0x317488u;
            // 0x317488: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x31748Cu;
        goto label_31748c;
    }
    ctx->pc = 0x317484u;
    {
        const bool branch_taken_0x317484 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x317484) {
            ctx->pc = 0x317488u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x317484u;
            // 0x317488: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x317498u;
            goto label_317498;
        }
    }
    ctx->pc = 0x31748Cu;
label_31748c:
    // 0x31748c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31748cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317490:
    // 0x317490: 0x10000007  b           . + 4 + (0x7 << 2)
label_317494:
    if (ctx->pc == 0x317494u) {
        ctx->pc = 0x317494u;
            // 0x317494: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x317498u;
        goto label_317498;
    }
    ctx->pc = 0x317490u;
    {
        const bool branch_taken_0x317490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317490u;
            // 0x317494: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x317490) {
            ctx->pc = 0x3174B0u;
            goto label_3174b0;
        }
    }
    ctx->pc = 0x317498u;
label_317498:
    // 0x317498: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x317498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_31749c:
    // 0x31749c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x31749cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3174a0:
    // 0x3174a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3174a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3174a4:
    // 0x3174a4: 0x0  nop
    ctx->pc = 0x3174a4u;
    // NOP
label_3174a8:
    // 0x3174a8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3174a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3174ac:
    // 0x3174ac: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3174acu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3174b0:
    // 0x3174b0: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x3174b0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3174b4:
    // 0x3174b4: 0x0  nop
    ctx->pc = 0x3174b4u;
    // NOP
label_3174b8:
    // 0x3174b8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3174b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3174bc:
    // 0x3174bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3174bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3174c0:
    // 0x3174c0: 0x0  nop
    ctx->pc = 0x3174c0u;
    // NOP
label_3174c4:
    // 0x3174c4: 0x46140018  adda.s      $f0, $f20
    ctx->pc = 0x3174c4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_3174c8:
    // 0x3174c8: 0x46020d1c  madd.s      $f20, $f1, $f2
    ctx->pc = 0x3174c8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
label_3174cc:
    // 0x3174cc: 0x8e230968  lw          $v1, 0x968($s1)
    ctx->pc = 0x3174ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2408)));
label_3174d0:
    // 0x3174d0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3174d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_3174d4:
    // 0x3174d4: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
label_3174d8:
    if (ctx->pc == 0x3174D8u) {
        ctx->pc = 0x3174D8u;
            // 0x3174d8: 0x9202009a  lbu         $v0, 0x9A($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 154)));
        ctx->pc = 0x3174DCu;
        goto label_3174dc;
    }
    ctx->pc = 0x3174D4u;
    {
        const bool branch_taken_0x3174d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3174d4) {
            ctx->pc = 0x3174D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3174D4u;
            // 0x3174d8: 0x9202009a  lbu         $v0, 0x9A($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 154)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x317504u;
            goto label_317504;
        }
    }
    ctx->pc = 0x3174DCu;
label_3174dc:
    // 0x3174dc: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x3174dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_3174e0:
    // 0x3174e0: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x3174e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3174e4:
    // 0x3174e4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x3174e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3174e8:
    // 0x3174e8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3174e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3174ec:
    // 0x3174ec: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3174ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3174f0:
    // 0x3174f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3174f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3174f4:
    // 0x3174f4: 0x0  nop
    ctx->pc = 0x3174f4u;
    // NOP
label_3174f8:
    // 0x3174f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3174f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3174fc:
    // 0x3174fc: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x3174fcu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_317500:
    // 0x317500: 0x9202009a  lbu         $v0, 0x9A($s0)
    ctx->pc = 0x317500u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 154)));
label_317504:
    // 0x317504: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_317508:
    if (ctx->pc == 0x317508u) {
        ctx->pc = 0x317508u;
            // 0x317508: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x31750Cu;
        goto label_31750c;
    }
    ctx->pc = 0x317504u;
    {
        const bool branch_taken_0x317504 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x317504) {
            ctx->pc = 0x317508u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x317504u;
            // 0x317508: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x317518u;
            goto label_317518;
        }
    }
    ctx->pc = 0x31750Cu;
label_31750c:
    // 0x31750c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31750cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317510:
    // 0x317510: 0x10000007  b           . + 4 + (0x7 << 2)
label_317514:
    if (ctx->pc == 0x317514u) {
        ctx->pc = 0x317514u;
            // 0x317514: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x317518u;
        goto label_317518;
    }
    ctx->pc = 0x317510u;
    {
        const bool branch_taken_0x317510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317510u;
            // 0x317514: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x317510) {
            ctx->pc = 0x317530u;
            goto label_317530;
        }
    }
    ctx->pc = 0x317518u;
label_317518:
    // 0x317518: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x317518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_31751c:
    // 0x31751c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x31751cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_317520:
    // 0x317520: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x317520u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317524:
    // 0x317524: 0x0  nop
    ctx->pc = 0x317524u;
    // NOP
label_317528:
    // 0x317528: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x317528u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_31752c:
    // 0x31752c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x31752cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_317530:
    // 0x317530: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x317530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
label_317534:
    // 0x317534: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x317534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_317538:
    // 0x317538: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x317538u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31753c:
    // 0x31753c: 0x8c44a2e0  lw          $a0, -0x5D20($v0)
    ctx->pc = 0x31753cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
label_317540:
    // 0x317540: 0xc074740  jal         func_1D1D00
label_317544:
    if (ctx->pc == 0x317544u) {
        ctx->pc = 0x317544u;
            // 0x317544: 0x46010582  mul.s       $f22, $f0, $f1 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x317548u;
        goto label_317548;
    }
    ctx->pc = 0x317540u;
    SET_GPR_U32(ctx, 31, 0x317548u);
    ctx->pc = 0x317544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317540u;
            // 0x317544: 0x46010582  mul.s       $f22, $f0, $f1 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317548u; }
        if (ctx->pc != 0x317548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317548u; }
        if (ctx->pc != 0x317548u) { return; }
    }
    ctx->pc = 0x317548u;
label_317548:
    // 0x317548: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_31754c:
    if (ctx->pc == 0x31754Cu) {
        ctx->pc = 0x31754Cu;
            // 0x31754c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x317550u;
        goto label_317550;
    }
    ctx->pc = 0x317548u;
    {
        const bool branch_taken_0x317548 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x317548) {
            ctx->pc = 0x31754Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x317548u;
            // 0x31754c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31755Cu;
            goto label_31755c;
        }
    }
    ctx->pc = 0x317550u;
label_317550:
    // 0x317550: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x317550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317554:
    // 0x317554: 0x10000007  b           . + 4 + (0x7 << 2)
label_317558:
    if (ctx->pc == 0x317558u) {
        ctx->pc = 0x317558u;
            // 0x317558: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x31755Cu;
        goto label_31755c;
    }
    ctx->pc = 0x317554u;
    {
        const bool branch_taken_0x317554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317554u;
            // 0x317558: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x317554) {
            ctx->pc = 0x317574u;
            goto label_317574;
        }
    }
    ctx->pc = 0x31755Cu;
label_31755c:
    // 0x31755c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x31755cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_317560:
    // 0x317560: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x317560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_317564:
    // 0x317564: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x317564u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317568:
    // 0x317568: 0x0  nop
    ctx->pc = 0x317568u;
    // NOP
label_31756c:
    // 0x31756c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x31756cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_317570:
    // 0x317570: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x317570u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_317574:
    // 0x317574: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x317574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_317578:
    // 0x317578: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x317578u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_31757c:
    // 0x31757c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31757cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317580:
    // 0x317580: 0x0  nop
    ctx->pc = 0x317580u;
    // NOP
label_317584:
    // 0x317584: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x317584u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_317588:
    // 0x317588: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x317588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
label_31758c:
    // 0x31758c: 0x3443b717  ori         $v1, $v0, 0xB717
    ctx->pc = 0x31758cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
label_317590:
    // 0x317590: 0x3c023f6d  lui         $v0, 0x3F6D
    ctx->pc = 0x317590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16237 << 16));
label_317594:
    // 0x317594: 0x3442097b  ori         $v0, $v0, 0x97B
    ctx->pc = 0x317594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_317598:
    // 0x317598: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x317598u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31759c:
    // 0x31759c: 0x0  nop
    ctx->pc = 0x31759cu;
    // NOP
label_3175a0:
    // 0x3175a0: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x3175a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_3175a4:
    // 0x3175a4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x3175a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3175a8:
    // 0x3175a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3175a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3175ac:
    // 0x3175ac: 0x0  nop
    ctx->pc = 0x3175acu;
    // NOP
label_3175b0:
    // 0x3175b0: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x3175b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
label_3175b4:
    // 0x3175b4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3175b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3175b8:
    // 0x3175b8: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x3175b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_3175bc:
    // 0x3175bc: 0x4600a843  div.s       $f1, $f21, $f0
    ctx->pc = 0x3175bcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[1] = ctx->f[21] / ctx->f[0];
label_3175c0:
    // 0x3175c0: 0x0  nop
    ctx->pc = 0x3175c0u;
    // NOP
label_3175c4:
    // 0x3175c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3175c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3175c8:
    // 0x3175c8: 0x0  nop
    ctx->pc = 0x3175c8u;
    // NOP
label_3175cc:
    // 0x3175cc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3175ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3175d0:
    // 0x3175d0: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
label_3175d4:
    if (ctx->pc == 0x3175D4u) {
        ctx->pc = 0x3175D4u;
            // 0x3175d4: 0x3c023eed  lui         $v0, 0x3EED (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16109 << 16));
        ctx->pc = 0x3175D8u;
        goto label_3175d8;
    }
    ctx->pc = 0x3175D0u;
    {
        const bool branch_taken_0x3175d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3175d0) {
            ctx->pc = 0x3175D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3175D0u;
            // 0x3175d4: 0x3c023eed  lui         $v0, 0x3EED (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16109 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3175E0u;
            goto label_3175e0;
        }
    }
    ctx->pc = 0x3175D8u;
label_3175d8:
    // 0x3175d8: 0x10000008  b           . + 4 + (0x8 << 2)
label_3175dc:
    if (ctx->pc == 0x3175DCu) {
        ctx->pc = 0x3175DCu;
            // 0x3175dc: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x3175E0u;
        goto label_3175e0;
    }
    ctx->pc = 0x3175D8u;
    {
        const bool branch_taken_0x3175d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3175DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3175D8u;
            // 0x3175dc: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3175d8) {
            ctx->pc = 0x3175FCu;
            goto label_3175fc;
        }
    }
    ctx->pc = 0x3175E0u;
label_3175e0:
    // 0x3175e0: 0x3442097b  ori         $v0, $v0, 0x97B
    ctx->pc = 0x3175e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_3175e4:
    // 0x3175e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3175e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3175e8:
    // 0x3175e8: 0x0  nop
    ctx->pc = 0x3175e8u;
    // NOP
label_3175ec:
    // 0x3175ec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3175ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3175f0:
    // 0x3175f0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_3175f4:
    if (ctx->pc == 0x3175F4u) {
        ctx->pc = 0x3175F8u;
        goto label_3175f8;
    }
    ctx->pc = 0x3175F0u;
    {
        const bool branch_taken_0x3175f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3175f0) {
            ctx->pc = 0x3175FCu;
            goto label_3175fc;
        }
    }
    ctx->pc = 0x3175F8u;
label_3175f8:
    // 0x3175f8: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x3175f8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_3175fc:
    // 0x3175fc: 0x0  nop
    ctx->pc = 0x3175fcu;
    // NOP
label_317600:
    // 0x317600: 0x0  nop
    ctx->pc = 0x317600u;
    // NOP
label_317604:
    // 0x317604: 0x4601a843  div.s       $f1, $f21, $f1
    ctx->pc = 0x317604u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[1] = ctx->f[21] / ctx->f[1];
label_317608:
    // 0x317608: 0x3c044270  lui         $a0, 0x4270
    ctx->pc = 0x317608u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17008 << 16));
label_31760c:
    // 0x31760c: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x31760cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
label_317610:
    // 0x317610: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x317610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_317614:
    // 0x317614: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x317614u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317618:
    // 0x317618: 0x0  nop
    ctx->pc = 0x317618u;
    // NOP
label_31761c:
    // 0x31761c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x31761cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_317620:
    // 0x317620: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x317620u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317624:
    // 0x317624: 0x0  nop
    ctx->pc = 0x317624u;
    // NOP
label_317628:
    // 0x317628: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x317628u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_31762c:
    // 0x31762c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x31762cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_317630:
    // 0x317630: 0x0  nop
    ctx->pc = 0x317630u;
    // NOP
label_317634:
    // 0x317634: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x317634u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_317638:
    // 0x317638: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_31763c:
    if (ctx->pc == 0x31763Cu) {
        ctx->pc = 0x31763Cu;
            // 0x31763c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x317640u;
        goto label_317640;
    }
    ctx->pc = 0x317638u;
    {
        const bool branch_taken_0x317638 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x317638) {
            ctx->pc = 0x31763Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x317638u;
            // 0x31763c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x317650u;
            goto label_317650;
        }
    }
    ctx->pc = 0x317640u;
label_317640:
    // 0x317640: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x317640u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_317644:
    // 0x317644: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x317644u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_317648:
    // 0x317648: 0x10000007  b           . + 4 + (0x7 << 2)
label_31764c:
    if (ctx->pc == 0x31764Cu) {
        ctx->pc = 0x31764Cu;
            // 0x31764c: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x317650u;
        goto label_317650;
    }
    ctx->pc = 0x317648u;
    {
        const bool branch_taken_0x317648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31764Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317648u;
            // 0x31764c: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317648) {
            ctx->pc = 0x317668u;
            goto label_317668;
        }
    }
    ctx->pc = 0x317650u;
label_317650:
    // 0x317650: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x317650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_317654:
    // 0x317654: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x317654u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_317658:
    // 0x317658: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x317658u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_31765c:
    // 0x31765c: 0x0  nop
    ctx->pc = 0x31765cu;
    // NOP
label_317660:
    // 0x317660: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x317660u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_317664:
    // 0x317664: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x317664u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_317668:
    // 0x317668: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x317668u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_31766c:
    // 0x31766c: 0x320f809  jalr        $t9
label_317670:
    if (ctx->pc == 0x317670u) {
        ctx->pc = 0x317670u;
            // 0x317670: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x317674u;
        goto label_317674;
    }
    ctx->pc = 0x31766Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x317674u);
        ctx->pc = 0x317670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31766Cu;
            // 0x317670: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x317674u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x317674u; }
            if (ctx->pc != 0x317674u) { return; }
        }
        }
    }
    ctx->pc = 0x317674u;
label_317674:
    // 0x317674: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x317674u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_317678:
    // 0x317678: 0x8e32077c  lw          $s2, 0x77C($s1)
    ctx->pc = 0x317678u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1916)));
label_31767c:
    // 0x31767c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x31767cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_317680:
    // 0x317680: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x317680u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_317684:
    // 0x317684: 0x8c44a2e0  lw          $a0, -0x5D20($v0)
    ctx->pc = 0x317684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
label_317688:
    // 0x317688: 0xc074740  jal         func_1D1D00
label_31768c:
    if (ctx->pc == 0x31768Cu) {
        ctx->pc = 0x31768Cu;
            // 0x31768c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x317690u;
        goto label_317690;
    }
    ctx->pc = 0x317688u;
    SET_GPR_U32(ctx, 31, 0x317690u);
    ctx->pc = 0x31768Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317688u;
            // 0x31768c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317690u; }
        if (ctx->pc != 0x317690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317690u; }
        if (ctx->pc != 0x317690u) { return; }
    }
    ctx->pc = 0x317690u;
label_317690:
    // 0x317690: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x317690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_317694:
    // 0x317694: 0x3c1300af  lui         $s3, 0xAF
    ctx->pc = 0x317694u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)175 << 16));
label_317698:
    // 0x317698: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x317698u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_31769c:
    // 0x31769c: 0x26730e80  addiu       $s3, $s3, 0xE80
    ctx->pc = 0x31769cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3712));
label_3176a0:
    // 0x3176a0: 0x0  nop
    ctx->pc = 0x3176a0u;
    // NOP
label_3176a4:
    // 0x3176a4: 0x8810  mfhi        $s1
    ctx->pc = 0x3176a4u;
    SET_GPR_U64(ctx, 17, ctx->hi);
label_3176a8:
    // 0x3176a8: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x3176a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3176ac:
    // 0x3176ac: 0x8c620da0  lw          $v0, 0xDA0($v1)
    ctx->pc = 0x3176acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3488)));
label_3176b0:
    // 0x3176b0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x3176b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_3176b4:
    // 0x3176b4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_3176b8:
    if (ctx->pc == 0x3176B8u) {
        ctx->pc = 0x3176BCu;
        goto label_3176bc;
    }
    ctx->pc = 0x3176B4u;
    {
        const bool branch_taken_0x3176b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3176b4) {
            ctx->pc = 0x3176F0u;
            goto label_3176f0;
        }
    }
    ctx->pc = 0x3176BCu;
label_3176bc:
    // 0x3176bc: 0x806211aa  lb          $v0, 0x11AA($v1)
    ctx->pc = 0x3176bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4522)));
label_3176c0:
    // 0x3176c0: 0x440000b  bltz        $v0, . + 4 + (0xB << 2)
label_3176c4:
    if (ctx->pc == 0x3176C4u) {
        ctx->pc = 0x3176C8u;
        goto label_3176c8;
    }
    ctx->pc = 0x3176C0u;
    {
        const bool branch_taken_0x3176c0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3176c0) {
            ctx->pc = 0x3176F0u;
            goto label_3176f0;
        }
    }
    ctx->pc = 0x3176C8u;
label_3176c8:
    // 0x3176c8: 0xc0ca6d8  jal         func_329B60
label_3176cc:
    if (ctx->pc == 0x3176CCu) {
        ctx->pc = 0x3176CCu;
            // 0x3176cc: 0x8c640d78  lw          $a0, 0xD78($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3448)));
        ctx->pc = 0x3176D0u;
        goto label_3176d0;
    }
    ctx->pc = 0x3176C8u;
    SET_GPR_U32(ctx, 31, 0x3176D0u);
    ctx->pc = 0x3176CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3176C8u;
            // 0x3176cc: 0x8c640d78  lw          $a0, 0xD78($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3448)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x329B60u;
    if (runtime->hasFunction(0x329B60u)) {
        auto targetFn = runtime->lookupFunction(0x329B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3176D0u; }
        if (ctx->pc != 0x3176D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00329B60_0x329b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3176D0u; }
        if (ctx->pc != 0x3176D0u) { return; }
    }
    ctx->pc = 0x3176D0u;
label_3176d0:
    // 0x3176d0: 0x50082b  sltu        $at, $v0, $s0
    ctx->pc = 0x3176d0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3176d4:
    // 0x3176d4: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
label_3176d8:
    if (ctx->pc == 0x3176D8u) {
        ctx->pc = 0x3176DCu;
        goto label_3176dc;
    }
    ctx->pc = 0x3176D4u;
    {
        const bool branch_taken_0x3176d4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3176d4) {
            ctx->pc = 0x3176F0u;
            goto label_3176f0;
        }
    }
    ctx->pc = 0x3176DCu;
label_3176dc:
    // 0x3176dc: 0x282082b  sltu        $at, $s4, $v0
    ctx->pc = 0x3176dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3176e0:
    // 0x3176e0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3176e4:
    if (ctx->pc == 0x3176E4u) {
        ctx->pc = 0x3176E8u;
        goto label_3176e8;
    }
    ctx->pc = 0x3176E0u;
    {
        const bool branch_taken_0x3176e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3176e0) {
            ctx->pc = 0x3176F0u;
            goto label_3176f0;
        }
    }
    ctx->pc = 0x3176E8u;
label_3176e8:
    // 0x3176e8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3176e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3176ec:
    // 0x3176ec: 0x0  nop
    ctx->pc = 0x3176ecu;
    // NOP
label_3176f0:
    // 0x3176f0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3176f0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_3176f4:
    // 0x3176f4: 0x2b2102b  sltu        $v0, $s5, $s2
    ctx->pc = 0x3176f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_3176f8:
    // 0x3176f8: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_3176fc:
    if (ctx->pc == 0x3176FCu) {
        ctx->pc = 0x3176FCu;
            // 0x3176fc: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x317700u;
        goto label_317700;
    }
    ctx->pc = 0x3176F8u;
    {
        const bool branch_taken_0x3176f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3176FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3176F8u;
            // 0x3176fc: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3176f8) {
            ctx->pc = 0x3176A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3176a8;
        }
    }
    ctx->pc = 0x317700u;
label_317700:
    // 0x317700: 0x52800003  beql        $s4, $zero, . + 4 + (0x3 << 2)
label_317704:
    if (ctx->pc == 0x317704u) {
        ctx->pc = 0x317704u;
            // 0x317704: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x317708u;
        goto label_317708;
    }
    ctx->pc = 0x317700u;
    {
        const bool branch_taken_0x317700 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x317700) {
            ctx->pc = 0x317704u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x317700u;
            // 0x317704: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x317710u;
            goto label_317710;
        }
    }
    ctx->pc = 0x317708u;
label_317708:
    // 0x317708: 0x2918021  addu        $s0, $s4, $s1
    ctx->pc = 0x317708u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_31770c:
    // 0x31770c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x31770cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_317710:
    // 0x317710: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x317710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_317714:
    // 0x317714: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x317714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_317718:
    // 0x317718: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x317718u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_31771c:
    // 0x31771c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x31771cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_317720:
    // 0x317720: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x317720u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_317724:
    // 0x317724: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x317724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_317728:
    // 0x317728: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x317728u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_31772c:
    // 0x31772c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x31772cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_317730:
    // 0x317730: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x317730u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_317734:
    // 0x317734: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x317734u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_317738:
    // 0x317738: 0x3e00008  jr          $ra
label_31773c:
    if (ctx->pc == 0x31773Cu) {
        ctx->pc = 0x31773Cu;
            // 0x31773c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x317740u;
        goto label_317740;
    }
    ctx->pc = 0x317738u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31773Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317738u;
            // 0x31773c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x317740u;
label_317740:
    // 0x317740: 0xc4810844  lwc1        $f1, 0x844($a0)
    ctx->pc = 0x317740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_317744:
    // 0x317744: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x317744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_317748:
    // 0x317748: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x317748u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31774c:
    // 0x31774c: 0x0  nop
    ctx->pc = 0x31774cu;
    // NOP
label_317750:
    // 0x317750: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x317750u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_317754:
    // 0x317754: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_317758:
    if (ctx->pc == 0x317758u) {
        ctx->pc = 0x317758u;
            // 0x317758: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x31775Cu;
        goto label_31775c;
    }
    ctx->pc = 0x317754u;
    {
        const bool branch_taken_0x317754 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x317754) {
            ctx->pc = 0x317758u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x317754u;
            // 0x317758: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x31776Cu;
            goto label_31776c;
        }
    }
    ctx->pc = 0x31775Cu;
label_31775c:
    // 0x31775c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31775cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_317760:
    // 0x317760: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x317760u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_317764:
    // 0x317764: 0x10000007  b           . + 4 + (0x7 << 2)
label_317768:
    if (ctx->pc == 0x317768u) {
        ctx->pc = 0x317768u;
            // 0x317768: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x31776Cu;
        goto label_31776c;
    }
    ctx->pc = 0x317764u;
    {
        const bool branch_taken_0x317764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317764u;
            // 0x317768: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317764) {
            ctx->pc = 0x317784u;
            goto label_317784;
        }
    }
    ctx->pc = 0x31776Cu;
label_31776c:
    // 0x31776c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x31776cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_317770:
    // 0x317770: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x317770u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_317774:
    // 0x317774: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x317774u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_317778:
    // 0x317778: 0x0  nop
    ctx->pc = 0x317778u;
    // NOP
label_31777c:
    // 0x31777c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x31777cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_317780:
    // 0x317780: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x317780u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_317784:
    // 0x317784: 0x8c850840  lw          $a1, 0x840($a0)
    ctx->pc = 0x317784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2112)));
label_317788:
    // 0x317788: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x317788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_31778c:
    // 0x31778c: 0x8c83083c  lw          $v1, 0x83C($a0)
    ctx->pc = 0x31778cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2108)));
label_317790:
    // 0x317790: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x317790u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_317794:
    // 0x317794: 0x3402ea60  ori         $v0, $zero, 0xEA60
    ctx->pc = 0x317794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
label_317798:
    // 0x317798: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x317798u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_31779c:
    // 0x31779c: 0x52140  sll         $a0, $a1, 5
    ctx->pc = 0x31779cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_3177a0:
    // 0x3177a0: 0x851823  subu        $v1, $a0, $a1
    ctx->pc = 0x3177a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_3177a4:
    // 0x3177a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3177a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3177a8:
    // 0x3177a8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3177a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3177ac:
    // 0x3177ac: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3177acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_3177b0:
    // 0x3177b0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x3177b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_3177b4:
    // 0x3177b4: 0x3e00008  jr          $ra
label_3177b8:
    if (ctx->pc == 0x3177B8u) {
        ctx->pc = 0x3177B8u;
            // 0x3177b8: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x3177BCu;
        goto label_3177bc;
    }
    ctx->pc = 0x3177B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3177B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3177B4u;
            // 0x3177b8: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3177BCu;
label_3177bc:
    // 0x3177bc: 0x0  nop
    ctx->pc = 0x3177bcu;
    // NOP
label_3177c0:
    // 0x3177c0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3177c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3177c4:
    // 0x3177c4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3177c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3177c8:
    // 0x3177c8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x3177c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_3177cc:
    // 0x3177cc: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3177ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_3177d0:
    // 0x3177d0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3177d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3177d4:
    // 0x3177d4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x3177d4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3177d8:
    // 0x3177d8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3177d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3177dc:
    // 0x3177dc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3177dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3177e0:
    // 0x3177e0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3177e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3177e4:
    // 0x3177e4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3177e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3177e8:
    // 0x3177e8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3177e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3177ec:
    // 0x3177ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3177ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3177f0:
    // 0x3177f0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3177f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3177f4:
    // 0x3177f4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3177f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3177f8:
    // 0x3177f8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3177f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3177fc:
    // 0x3177fc: 0x8c950008  lw          $s5, 0x8($a0)
    ctx->pc = 0x3177fcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_317800:
    // 0x317800: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x317800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_317804:
    // 0x317804: 0x8c530e80  lw          $s3, 0xE80($v0)
    ctx->pc = 0x317804u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_317808:
    // 0x317808: 0x26340c6c  addiu       $s4, $s1, 0xC6C
    ctx->pc = 0x317808u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 3180));
label_31780c:
    // 0x31780c: 0x94a30c7e  lhu         $v1, 0xC7E($a1)
    ctx->pc = 0x31780cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 3198)));
label_317810:
    // 0x317810: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x317810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_317814:
    // 0x317814: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x317814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_317818:
    // 0x317818: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x317818u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_31781c:
    // 0x31781c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31781cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_317820:
    // 0x317820: 0xc4540020  lwc1        $f20, 0x20($v0)
    ctx->pc = 0x317820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_317824:
    // 0x317824: 0xc04cc90  jal         func_133240
label_317828:
    if (ctx->pc == 0x317828u) {
        ctx->pc = 0x317828u;
            // 0x317828: 0x262502c0  addiu       $a1, $s1, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
        ctx->pc = 0x31782Cu;
        goto label_31782c;
    }
    ctx->pc = 0x317824u;
    SET_GPR_U32(ctx, 31, 0x31782Cu);
    ctx->pc = 0x317828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317824u;
            // 0x317828: 0x262502c0  addiu       $a1, $s1, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31782Cu; }
        if (ctx->pc != 0x31782Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31782Cu; }
        if (ctx->pc != 0x31782Cu) { return; }
    }
    ctx->pc = 0x31782Cu;
label_31782c:
    // 0x31782c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x31782cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_317830:
    // 0x317830: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x317830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
label_317834:
    // 0x317834: 0xc04cc44  jal         func_133110
label_317838:
    if (ctx->pc == 0x317838u) {
        ctx->pc = 0x317838u;
            // 0x317838: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31783Cu;
        goto label_31783c;
    }
    ctx->pc = 0x317834u;
    SET_GPR_U32(ctx, 31, 0x31783Cu);
    ctx->pc = 0x317838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317834u;
            // 0x317838: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31783Cu; }
        if (ctx->pc != 0x31783Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31783Cu; }
        if (ctx->pc != 0x31783Cu) { return; }
    }
    ctx->pc = 0x31783Cu;
label_31783c:
    // 0x31783c: 0x26440030  addiu       $a0, $s2, 0x30
    ctx->pc = 0x31783cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_317840:
    // 0x317840: 0xc04cc08  jal         func_133020
label_317844:
    if (ctx->pc == 0x317844u) {
        ctx->pc = 0x317844u;
            // 0x317844: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x317848u;
        goto label_317848;
    }
    ctx->pc = 0x317840u;
    SET_GPR_U32(ctx, 31, 0x317848u);
    ctx->pc = 0x317844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317840u;
            // 0x317844: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317848u; }
        if (ctx->pc != 0x317848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317848u; }
        if (ctx->pc != 0x317848u) { return; }
    }
    ctx->pc = 0x317848u;
label_317848:
    // 0x317848: 0x8e630968  lw          $v1, 0x968($s3)
    ctx->pc = 0x317848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2408)));
label_31784c:
    // 0x31784c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x31784cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_317850:
    // 0x317850: 0x10620036  beq         $v1, $v0, . + 4 + (0x36 << 2)
label_317854:
    if (ctx->pc == 0x317854u) {
        ctx->pc = 0x317858u;
        goto label_317858;
    }
    ctx->pc = 0x317850u;
    {
        const bool branch_taken_0x317850 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x317850) {
            ctx->pc = 0x31792Cu;
            goto label_31792c;
        }
    }
    ctx->pc = 0x317858u;
label_317858:
    // 0x317858: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x317858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_31785c:
    // 0x31785c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x31785cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_317860:
    // 0x317860: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x317860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_317864:
    // 0x317864: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x317864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_317868:
    // 0x317868: 0x10430030  beq         $v0, $v1, . + 4 + (0x30 << 2)
label_31786c:
    if (ctx->pc == 0x31786Cu) {
        ctx->pc = 0x317870u;
        goto label_317870;
    }
    ctx->pc = 0x317868u;
    {
        const bool branch_taken_0x317868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x317868) {
            ctx->pc = 0x31792Cu;
            goto label_31792c;
        }
    }
    ctx->pc = 0x317870u;
label_317870:
    // 0x317870: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x317870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_317874:
    // 0x317874: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x317874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_317878:
    // 0x317878: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x317878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_31787c:
    // 0x31787c: 0x28410008  slti        $at, $v0, 0x8
    ctx->pc = 0x31787cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_317880:
    // 0x317880: 0x1420002a  bnez        $at, . + 4 + (0x2A << 2)
label_317884:
    if (ctx->pc == 0x317884u) {
        ctx->pc = 0x317888u;
        goto label_317888;
    }
    ctx->pc = 0x317880u;
    {
        const bool branch_taken_0x317880 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x317880) {
            ctx->pc = 0x31792Cu;
            goto label_31792c;
        }
    }
    ctx->pc = 0x317888u;
label_317888:
    // 0x317888: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x317888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_31788c:
    // 0x31788c: 0xc6a10014  lwc1        $f1, 0x14($s5)
    ctx->pc = 0x31788cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_317890:
    // 0x317890: 0x96820012  lhu         $v0, 0x12($s4)
    ctx->pc = 0x317890u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 18)));
label_317894:
    // 0x317894: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x317894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_317898:
    // 0x317898: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x317898u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_31789c:
    // 0x31789c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x31789cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3178a0:
    // 0x3178a0: 0xc4420020  lwc1        $f2, 0x20($v0)
    ctx->pc = 0x3178a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3178a4:
    // 0x3178a4: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x3178a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3178a8:
    // 0x3178a8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_3178ac:
    if (ctx->pc == 0x3178ACu) {
        ctx->pc = 0x3178B0u;
        goto label_3178b0;
    }
    ctx->pc = 0x3178A8u;
    {
        const bool branch_taken_0x3178a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3178a8) {
            ctx->pc = 0x3178E0u;
            goto label_3178e0;
        }
    }
    ctx->pc = 0x3178B0u;
label_3178b0:
    // 0x3178b0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3178b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3178b4:
    // 0x3178b4: 0x0  nop
    ctx->pc = 0x3178b4u;
    // NOP
label_3178b8:
    // 0x3178b8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3178b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3178bc:
    // 0x3178bc: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
label_3178c0:
    if (ctx->pc == 0x3178C0u) {
        ctx->pc = 0x3178C4u;
        goto label_3178c4;
    }
    ctx->pc = 0x3178BCu;
    {
        const bool branch_taken_0x3178bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3178bc) {
            ctx->pc = 0x31792Cu;
            goto label_31792c;
        }
    }
    ctx->pc = 0x3178C4u;
label_3178c4:
    // 0x3178c4: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x3178c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_3178c8:
    // 0x3178c8: 0x8e220d78  lw          $v0, 0xD78($s1)
    ctx->pc = 0x3178c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3448)));
label_3178cc:
    // 0x3178cc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3178ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3178d0:
    // 0x3178d0: 0x0  nop
    ctx->pc = 0x3178d0u;
    // NOP
label_3178d4:
    // 0x3178d4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3178d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3178d8:
    // 0x3178d8: 0x10000014  b           . + 4 + (0x14 << 2)
label_3178dc:
    if (ctx->pc == 0x3178DCu) {
        ctx->pc = 0x3178DCu;
            // 0x3178dc: 0xac400040  sw          $zero, 0x40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
        ctx->pc = 0x3178E0u;
        goto label_3178e0;
    }
    ctx->pc = 0x3178D8u;
    {
        const bool branch_taken_0x3178d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3178DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3178D8u;
            // 0x3178dc: 0xac400040  sw          $zero, 0x40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3178d8) {
            ctx->pc = 0x31792Cu;
            goto label_31792c;
        }
    }
    ctx->pc = 0x3178E0u;
label_3178e0:
    // 0x3178e0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3178e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3178e4:
    // 0x3178e4: 0x0  nop
    ctx->pc = 0x3178e4u;
    // NOP
label_3178e8:
    // 0x3178e8: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x3178e8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3178ec:
    // 0x3178ec: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
label_3178f0:
    if (ctx->pc == 0x3178F0u) {
        ctx->pc = 0x3178F0u;
            // 0x3178f0: 0x8e220d78  lw          $v0, 0xD78($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3448)));
        ctx->pc = 0x3178F4u;
        goto label_3178f4;
    }
    ctx->pc = 0x3178ECu;
    {
        const bool branch_taken_0x3178ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3178ec) {
            ctx->pc = 0x3178F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3178ECu;
            // 0x3178f0: 0x8e220d78  lw          $v0, 0xD78($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3448)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x317928u;
            goto label_317928;
        }
    }
    ctx->pc = 0x3178F4u;
label_3178f4:
    // 0x3178f4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3178f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3178f8:
    // 0x3178f8: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
label_3178fc:
    if (ctx->pc == 0x3178FCu) {
        ctx->pc = 0x3178FCu;
            // 0x3178fc: 0x8e220d78  lw          $v0, 0xD78($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3448)));
        ctx->pc = 0x317900u;
        goto label_317900;
    }
    ctx->pc = 0x3178F8u;
    {
        const bool branch_taken_0x3178f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3178f8) {
            ctx->pc = 0x3178FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3178F8u;
            // 0x3178fc: 0x8e220d78  lw          $v0, 0xD78($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3448)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x317920u;
            goto label_317920;
        }
    }
    ctx->pc = 0x317900u;
label_317900:
    // 0x317900: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x317900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_317904:
    // 0x317904: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x317904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_317908:
    // 0x317908: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x317908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_31790c:
    // 0x31790c: 0x0  nop
    ctx->pc = 0x31790cu;
    // NOP
label_317910:
    // 0x317910: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x317910u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_317914:
    // 0x317914: 0x8e220d78  lw          $v0, 0xD78($s1)
    ctx->pc = 0x317914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3448)));
label_317918:
    // 0x317918: 0x10000004  b           . + 4 + (0x4 << 2)
label_31791c:
    if (ctx->pc == 0x31791Cu) {
        ctx->pc = 0x31791Cu;
            // 0x31791c: 0xac430040  sw          $v1, 0x40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
        ctx->pc = 0x317920u;
        goto label_317920;
    }
    ctx->pc = 0x317918u;
    {
        const bool branch_taken_0x317918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31791Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317918u;
            // 0x31791c: 0xac430040  sw          $v1, 0x40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317918) {
            ctx->pc = 0x31792Cu;
            goto label_31792c;
        }
    }
    ctx->pc = 0x317920u;
label_317920:
    // 0x317920: 0x10000002  b           . + 4 + (0x2 << 2)
label_317924:
    if (ctx->pc == 0x317924u) {
        ctx->pc = 0x317924u;
            // 0x317924: 0xac400040  sw          $zero, 0x40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
        ctx->pc = 0x317928u;
        goto label_317928;
    }
    ctx->pc = 0x317920u;
    {
        const bool branch_taken_0x317920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317920u;
            // 0x317924: 0xac400040  sw          $zero, 0x40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317920) {
            ctx->pc = 0x31792Cu;
            goto label_31792c;
        }
    }
    ctx->pc = 0x317928u;
label_317928:
    // 0x317928: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x317928u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_31792c:
    // 0x31792c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x31792cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_317930:
    // 0x317930: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x317930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_317934:
    // 0x317934: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x317934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_317938:
    // 0x317938: 0x8c440084  lw          $a0, 0x84($v0)
    ctx->pc = 0x317938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_31793c:
    // 0x31793c: 0x14830041  bne         $a0, $v1, . + 4 + (0x41 << 2)
label_317940:
    if (ctx->pc == 0x317940u) {
        ctx->pc = 0x317944u;
        goto label_317944;
    }
    ctx->pc = 0x31793Cu;
    {
        const bool branch_taken_0x31793c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x31793c) {
            ctx->pc = 0x317A44u;
            goto label_317a44;
        }
    }
    ctx->pc = 0x317944u;
label_317944:
    // 0x317944: 0x8e630968  lw          $v1, 0x968($s3)
    ctx->pc = 0x317944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2408)));
label_317948:
    // 0x317948: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x317948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_31794c:
    // 0x31794c: 0x1462003d  bne         $v1, $v0, . + 4 + (0x3D << 2)
label_317950:
    if (ctx->pc == 0x317950u) {
        ctx->pc = 0x317954u;
        goto label_317954;
    }
    ctx->pc = 0x31794Cu;
    {
        const bool branch_taken_0x31794c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x31794c) {
            ctx->pc = 0x317A44u;
            goto label_317a44;
        }
    }
    ctx->pc = 0x317954u;
label_317954:
    // 0x317954: 0x8e630cc4  lw          $v1, 0xCC4($s3)
    ctx->pc = 0x317954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3268)));
label_317958:
    // 0x317958: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x317958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31795c:
    // 0x31795c: 0x14620039  bne         $v1, $v0, . + 4 + (0x39 << 2)
label_317960:
    if (ctx->pc == 0x317960u) {
        ctx->pc = 0x317964u;
        goto label_317964;
    }
    ctx->pc = 0x31795Cu;
    {
        const bool branch_taken_0x31795c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x31795c) {
            ctx->pc = 0x317A44u;
            goto label_317a44;
        }
    }
    ctx->pc = 0x317964u;
label_317964:
    // 0x317964: 0x8e230e10  lw          $v1, 0xE10($s1)
    ctx->pc = 0x317964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3600)));
label_317968:
    // 0x317968: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x317968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_31796c:
    // 0x31796c: 0x14620035  bne         $v1, $v0, . + 4 + (0x35 << 2)
label_317970:
    if (ctx->pc == 0x317970u) {
        ctx->pc = 0x317974u;
        goto label_317974;
    }
    ctx->pc = 0x31796Cu;
    {
        const bool branch_taken_0x31796c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x31796c) {
            ctx->pc = 0x317A44u;
            goto label_317a44;
        }
    }
    ctx->pc = 0x317974u;
label_317974:
    // 0x317974: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x317974u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_317978:
    // 0x317978: 0x0  nop
    ctx->pc = 0x317978u;
    // NOP
label_31797c:
    // 0x31797c: 0x4601a036  c.le.s      $f20, $f1
    ctx->pc = 0x31797cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_317980:
    // 0x317980: 0x4503000b  bc1tl       . + 4 + (0xB << 2)
label_317984:
    if (ctx->pc == 0x317984u) {
        ctx->pc = 0x317984u;
            // 0x317984: 0xc6020000  lwc1        $f2, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x317988u;
        goto label_317988;
    }
    ctx->pc = 0x317980u;
    {
        const bool branch_taken_0x317980 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x317980) {
            ctx->pc = 0x317984u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x317980u;
            // 0x317984: 0xc6020000  lwc1        $f2, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3179B0u;
            goto label_3179b0;
        }
    }
    ctx->pc = 0x317988u;
label_317988:
    // 0x317988: 0xc6a20014  lwc1        $f2, 0x14($s5)
    ctx->pc = 0x317988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_31798c:
    // 0x31798c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x31798cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_317990:
    // 0x317990: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x317990u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_317994:
    // 0x317994: 0x8e230d78  lw          $v1, 0xD78($s1)
    ctx->pc = 0x317994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3448)));
label_317998:
    // 0x317998: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x317998u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_31799c:
    // 0x31799c: 0xc4620038  lwc1        $f2, 0x38($v1)
    ctx->pc = 0x31799cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3179a0:
    // 0x3179a0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x3179a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3179a4:
    // 0x3179a4: 0x45030056  bc1tl       . + 4 + (0x56 << 2)
label_3179a8:
    if (ctx->pc == 0x3179A8u) {
        ctx->pc = 0x3179A8u;
            // 0x3179a8: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->pc = 0x3179ACu;
        goto label_3179ac;
    }
    ctx->pc = 0x3179A4u;
    {
        const bool branch_taken_0x3179a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3179a4) {
            ctx->pc = 0x3179A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3179A4u;
            // 0x3179a8: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x317B00u;
            goto label_317b00;
        }
    }
    ctx->pc = 0x3179ACu;
label_3179ac:
    // 0x3179ac: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x3179acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3179b0:
    // 0x3179b0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3179b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3179b4:
    // 0x3179b4: 0x0  nop
    ctx->pc = 0x3179b4u;
    // NOP
label_3179b8:
    // 0x3179b8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x3179b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3179bc:
    // 0x3179bc: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
label_3179c0:
    if (ctx->pc == 0x3179C0u) {
        ctx->pc = 0x3179C0u;
            // 0x3179c0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x3179C4u;
        goto label_3179c4;
    }
    ctx->pc = 0x3179BCu;
    {
        const bool branch_taken_0x3179bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3179bc) {
            ctx->pc = 0x3179C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3179BCu;
            // 0x3179c0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3179DCu;
            goto label_3179dc;
        }
    }
    ctx->pc = 0x3179C4u;
label_3179c4:
    // 0x3179c4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3179c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3179c8:
    // 0x3179c8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_3179cc:
    if (ctx->pc == 0x3179CCu) {
        ctx->pc = 0x3179D0u;
        goto label_3179d0;
    }
    ctx->pc = 0x3179C8u;
    {
        const bool branch_taken_0x3179c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3179c8) {
            ctx->pc = 0x3179D8u;
            goto label_3179d8;
        }
    }
    ctx->pc = 0x3179D0u;
label_3179d0:
    // 0x3179d0: 0x1000004a  b           . + 4 + (0x4A << 2)
label_3179d4:
    if (ctx->pc == 0x3179D4u) {
        ctx->pc = 0x3179D4u;
            // 0x3179d4: 0x2416ffff  addiu       $s6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x3179D8u;
        goto label_3179d8;
    }
    ctx->pc = 0x3179D0u;
    {
        const bool branch_taken_0x3179d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3179D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3179D0u;
            // 0x3179d4: 0x2416ffff  addiu       $s6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3179d0) {
            ctx->pc = 0x317AFCu;
            goto label_317afc;
        }
    }
    ctx->pc = 0x3179D8u;
label_3179d8:
    // 0x3179d8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3179d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3179dc:
    // 0x3179dc: 0x1482000f  bne         $a0, $v0, . + 4 + (0xF << 2)
label_3179e0:
    if (ctx->pc == 0x3179E0u) {
        ctx->pc = 0x3179E4u;
        goto label_3179e4;
    }
    ctx->pc = 0x3179DCu;
    {
        const bool branch_taken_0x3179dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x3179dc) {
            ctx->pc = 0x317A1Cu;
            goto label_317a1c;
        }
    }
    ctx->pc = 0x3179E4u;
label_3179e4:
    // 0x3179e4: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x3179e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_3179e8:
    // 0x3179e8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3179e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_3179ec:
    // 0x3179ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3179ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3179f0:
    // 0x3179f0: 0x0  nop
    ctx->pc = 0x3179f0u;
    // NOP
label_3179f4:
    // 0x3179f4: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x3179f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3179f8:
    // 0x3179f8: 0x45000040  bc1f        . + 4 + (0x40 << 2)
label_3179fc:
    if (ctx->pc == 0x3179FCu) {
        ctx->pc = 0x317A00u;
        goto label_317a00;
    }
    ctx->pc = 0x3179F8u;
    {
        const bool branch_taken_0x3179f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3179f8) {
            ctx->pc = 0x317AFCu;
            goto label_317afc;
        }
    }
    ctx->pc = 0x317A00u;
label_317a00:
    // 0x317a00: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x317a00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_317a04:
    // 0x317a04: 0x0  nop
    ctx->pc = 0x317a04u;
    // NOP
label_317a08:
    // 0x317a08: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x317a08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_317a0c:
    // 0x317a0c: 0x4501003b  bc1t        . + 4 + (0x3B << 2)
label_317a10:
    if (ctx->pc == 0x317A10u) {
        ctx->pc = 0x317A14u;
        goto label_317a14;
    }
    ctx->pc = 0x317A0Cu;
    {
        const bool branch_taken_0x317a0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x317a0c) {
            ctx->pc = 0x317AFCu;
            goto label_317afc;
        }
    }
    ctx->pc = 0x317A14u;
label_317a14:
    // 0x317a14: 0x10000039  b           . + 4 + (0x39 << 2)
label_317a18:
    if (ctx->pc == 0x317A18u) {
        ctx->pc = 0x317A18u;
            // 0x317a18: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x317A1Cu;
        goto label_317a1c;
    }
    ctx->pc = 0x317A14u;
    {
        const bool branch_taken_0x317a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317A14u;
            // 0x317a18: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317a14) {
            ctx->pc = 0x317AFCu;
            goto label_317afc;
        }
    }
    ctx->pc = 0x317A1Cu;
label_317a1c:
    // 0x317a1c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x317a1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_317a20:
    // 0x317a20: 0x0  nop
    ctx->pc = 0x317a20u;
    // NOP
label_317a24:
    // 0x317a24: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x317a24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_317a28:
    // 0x317a28: 0x45000034  bc1f        . + 4 + (0x34 << 2)
label_317a2c:
    if (ctx->pc == 0x317A2Cu) {
        ctx->pc = 0x317A30u;
        goto label_317a30;
    }
    ctx->pc = 0x317A28u;
    {
        const bool branch_taken_0x317a28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x317a28) {
            ctx->pc = 0x317AFCu;
            goto label_317afc;
        }
    }
    ctx->pc = 0x317A30u;
label_317a30:
    // 0x317a30: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x317a30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_317a34:
    // 0x317a34: 0x45010031  bc1t        . + 4 + (0x31 << 2)
label_317a38:
    if (ctx->pc == 0x317A38u) {
        ctx->pc = 0x317A3Cu;
        goto label_317a3c;
    }
    ctx->pc = 0x317A34u;
    {
        const bool branch_taken_0x317a34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x317a34) {
            ctx->pc = 0x317AFCu;
            goto label_317afc;
        }
    }
    ctx->pc = 0x317A3Cu;
label_317a3c:
    // 0x317a3c: 0x1000002f  b           . + 4 + (0x2F << 2)
label_317a40:
    if (ctx->pc == 0x317A40u) {
        ctx->pc = 0x317A40u;
            // 0x317a40: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x317A44u;
        goto label_317a44;
    }
    ctx->pc = 0x317A3Cu;
    {
        const bool branch_taken_0x317a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317A3Cu;
            // 0x317a40: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317a3c) {
            ctx->pc = 0x317AFCu;
            goto label_317afc;
        }
    }
    ctx->pc = 0x317A44u;
label_317a44:
    // 0x317a44: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x317a44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_317a48:
    // 0x317a48: 0x0  nop
    ctx->pc = 0x317a48u;
    // NOP
label_317a4c:
    // 0x317a4c: 0x4601a036  c.le.s      $f20, $f1
    ctx->pc = 0x317a4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_317a50:
    // 0x317a50: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
label_317a54:
    if (ctx->pc == 0x317A54u) {
        ctx->pc = 0x317A54u;
            // 0x317a54: 0xc6020000  lwc1        $f2, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x317A58u;
        goto label_317a58;
    }
    ctx->pc = 0x317A50u;
    {
        const bool branch_taken_0x317a50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x317a50) {
            ctx->pc = 0x317A54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x317A50u;
            // 0x317a54: 0xc6020000  lwc1        $f2, 0x0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x317A6Cu;
            goto label_317a6c;
        }
    }
    ctx->pc = 0x317A58u;
label_317a58:
    // 0x317a58: 0xc6a10014  lwc1        $f1, 0x14($s5)
    ctx->pc = 0x317a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_317a5c:
    // 0x317a5c: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x317a5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_317a60:
    // 0x317a60: 0x45010026  bc1t        . + 4 + (0x26 << 2)
label_317a64:
    if (ctx->pc == 0x317A64u) {
        ctx->pc = 0x317A68u;
        goto label_317a68;
    }
    ctx->pc = 0x317A60u;
    {
        const bool branch_taken_0x317a60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x317a60) {
            ctx->pc = 0x317AFCu;
            goto label_317afc;
        }
    }
    ctx->pc = 0x317A68u;
label_317a68:
    // 0x317a68: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x317a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_317a6c:
    // 0x317a6c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x317a6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_317a70:
    // 0x317a70: 0x0  nop
    ctx->pc = 0x317a70u;
    // NOP
label_317a74:
    // 0x317a74: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x317a74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_317a78:
    // 0x317a78: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
label_317a7c:
    if (ctx->pc == 0x317A7Cu) {
        ctx->pc = 0x317A7Cu;
            // 0x317a7c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x317A80u;
        goto label_317a80;
    }
    ctx->pc = 0x317A78u;
    {
        const bool branch_taken_0x317a78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x317a78) {
            ctx->pc = 0x317A7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x317A78u;
            // 0x317a7c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x317A98u;
            goto label_317a98;
        }
    }
    ctx->pc = 0x317A80u;
label_317a80:
    // 0x317a80: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x317a80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_317a84:
    // 0x317a84: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_317a88:
    if (ctx->pc == 0x317A88u) {
        ctx->pc = 0x317A8Cu;
        goto label_317a8c;
    }
    ctx->pc = 0x317A84u;
    {
        const bool branch_taken_0x317a84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x317a84) {
            ctx->pc = 0x317A94u;
            goto label_317a94;
        }
    }
    ctx->pc = 0x317A8Cu;
label_317a8c:
    // 0x317a8c: 0x1000001b  b           . + 4 + (0x1B << 2)
label_317a90:
    if (ctx->pc == 0x317A90u) {
        ctx->pc = 0x317A90u;
            // 0x317a90: 0x2416ffff  addiu       $s6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x317A94u;
        goto label_317a94;
    }
    ctx->pc = 0x317A8Cu;
    {
        const bool branch_taken_0x317a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317A8Cu;
            // 0x317a90: 0x2416ffff  addiu       $s6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317a8c) {
            ctx->pc = 0x317AFCu;
            goto label_317afc;
        }
    }
    ctx->pc = 0x317A94u;
label_317a94:
    // 0x317a94: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x317a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_317a98:
    // 0x317a98: 0x1482000f  bne         $a0, $v0, . + 4 + (0xF << 2)
label_317a9c:
    if (ctx->pc == 0x317A9Cu) {
        ctx->pc = 0x317AA0u;
        goto label_317aa0;
    }
    ctx->pc = 0x317A98u;
    {
        const bool branch_taken_0x317a98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x317a98) {
            ctx->pc = 0x317AD8u;
            goto label_317ad8;
        }
    }
    ctx->pc = 0x317AA0u;
label_317aa0:
    // 0x317aa0: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x317aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_317aa4:
    // 0x317aa4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x317aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_317aa8:
    // 0x317aa8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x317aa8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_317aac:
    // 0x317aac: 0x0  nop
    ctx->pc = 0x317aacu;
    // NOP
label_317ab0:
    // 0x317ab0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x317ab0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_317ab4:
    // 0x317ab4: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_317ab8:
    if (ctx->pc == 0x317AB8u) {
        ctx->pc = 0x317ABCu;
        goto label_317abc;
    }
    ctx->pc = 0x317AB4u;
    {
        const bool branch_taken_0x317ab4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x317ab4) {
            ctx->pc = 0x317AFCu;
            goto label_317afc;
        }
    }
    ctx->pc = 0x317ABCu;
label_317abc:
    // 0x317abc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x317abcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_317ac0:
    // 0x317ac0: 0x0  nop
    ctx->pc = 0x317ac0u;
    // NOP
label_317ac4:
    // 0x317ac4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x317ac4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_317ac8:
    // 0x317ac8: 0x4501000c  bc1t        . + 4 + (0xC << 2)
label_317acc:
    if (ctx->pc == 0x317ACCu) {
        ctx->pc = 0x317AD0u;
        goto label_317ad0;
    }
    ctx->pc = 0x317AC8u;
    {
        const bool branch_taken_0x317ac8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x317ac8) {
            ctx->pc = 0x317AFCu;
            goto label_317afc;
        }
    }
    ctx->pc = 0x317AD0u;
label_317ad0:
    // 0x317ad0: 0x1000000a  b           . + 4 + (0xA << 2)
label_317ad4:
    if (ctx->pc == 0x317AD4u) {
        ctx->pc = 0x317AD4u;
            // 0x317ad4: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x317AD8u;
        goto label_317ad8;
    }
    ctx->pc = 0x317AD0u;
    {
        const bool branch_taken_0x317ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x317AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317AD0u;
            // 0x317ad4: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317ad0) {
            ctx->pc = 0x317AFCu;
            goto label_317afc;
        }
    }
    ctx->pc = 0x317AD8u;
label_317ad8:
    // 0x317ad8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x317ad8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_317adc:
    // 0x317adc: 0x0  nop
    ctx->pc = 0x317adcu;
    // NOP
label_317ae0:
    // 0x317ae0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x317ae0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_317ae4:
    // 0x317ae4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_317ae8:
    if (ctx->pc == 0x317AE8u) {
        ctx->pc = 0x317AECu;
        goto label_317aec;
    }
    ctx->pc = 0x317AE4u;
    {
        const bool branch_taken_0x317ae4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x317ae4) {
            ctx->pc = 0x317AFCu;
            goto label_317afc;
        }
    }
    ctx->pc = 0x317AECu;
label_317aec:
    // 0x317aec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x317aecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_317af0:
    // 0x317af0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_317af4:
    if (ctx->pc == 0x317AF4u) {
        ctx->pc = 0x317AF8u;
        goto label_317af8;
    }
    ctx->pc = 0x317AF0u;
    {
        const bool branch_taken_0x317af0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x317af0) {
            ctx->pc = 0x317AFCu;
            goto label_317afc;
        }
    }
    ctx->pc = 0x317AF8u;
label_317af8:
    // 0x317af8: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x317af8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_317afc:
    // 0x317afc: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x317afcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_317b00:
    // 0x317b00: 0x16163c  dsll32      $v0, $s6, 24
    ctx->pc = 0x317b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 24));
label_317b04:
    // 0x317b04: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x317b04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_317b08:
    // 0x317b08: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x317b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_317b0c:
    // 0x317b0c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x317b0cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_317b10:
    // 0x317b10: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x317b10u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_317b14:
    // 0x317b14: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x317b14u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_317b18:
    // 0x317b18: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x317b18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_317b1c:
    // 0x317b1c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x317b1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_317b20:
    // 0x317b20: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x317b20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_317b24:
    // 0x317b24: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x317b24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_317b28:
    // 0x317b28: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x317b28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_317b2c:
    // 0x317b2c: 0x3e00008  jr          $ra
label_317b30:
    if (ctx->pc == 0x317B30u) {
        ctx->pc = 0x317B30u;
            // 0x317b30: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x317B34u;
        goto label_317b34;
    }
    ctx->pc = 0x317B2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x317B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317B2Cu;
            // 0x317b30: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x317B34u;
label_317b34:
    // 0x317b34: 0x0  nop
    ctx->pc = 0x317b34u;
    // NOP
label_317b38:
    // 0x317b38: 0x0  nop
    ctx->pc = 0x317b38u;
    // NOP
label_317b3c:
    // 0x317b3c: 0x0  nop
    ctx->pc = 0x317b3cu;
    // NOP
}
