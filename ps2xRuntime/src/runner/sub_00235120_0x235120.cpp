#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00235120
// Address: 0x235120 - 0x235950
void sub_00235120_0x235120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235120_0x235120");
#endif

    switch (ctx->pc) {
        case 0x235120u: goto label_235120;
        case 0x235124u: goto label_235124;
        case 0x235128u: goto label_235128;
        case 0x23512cu: goto label_23512c;
        case 0x235130u: goto label_235130;
        case 0x235134u: goto label_235134;
        case 0x235138u: goto label_235138;
        case 0x23513cu: goto label_23513c;
        case 0x235140u: goto label_235140;
        case 0x235144u: goto label_235144;
        case 0x235148u: goto label_235148;
        case 0x23514cu: goto label_23514c;
        case 0x235150u: goto label_235150;
        case 0x235154u: goto label_235154;
        case 0x235158u: goto label_235158;
        case 0x23515cu: goto label_23515c;
        case 0x235160u: goto label_235160;
        case 0x235164u: goto label_235164;
        case 0x235168u: goto label_235168;
        case 0x23516cu: goto label_23516c;
        case 0x235170u: goto label_235170;
        case 0x235174u: goto label_235174;
        case 0x235178u: goto label_235178;
        case 0x23517cu: goto label_23517c;
        case 0x235180u: goto label_235180;
        case 0x235184u: goto label_235184;
        case 0x235188u: goto label_235188;
        case 0x23518cu: goto label_23518c;
        case 0x235190u: goto label_235190;
        case 0x235194u: goto label_235194;
        case 0x235198u: goto label_235198;
        case 0x23519cu: goto label_23519c;
        case 0x2351a0u: goto label_2351a0;
        case 0x2351a4u: goto label_2351a4;
        case 0x2351a8u: goto label_2351a8;
        case 0x2351acu: goto label_2351ac;
        case 0x2351b0u: goto label_2351b0;
        case 0x2351b4u: goto label_2351b4;
        case 0x2351b8u: goto label_2351b8;
        case 0x2351bcu: goto label_2351bc;
        case 0x2351c0u: goto label_2351c0;
        case 0x2351c4u: goto label_2351c4;
        case 0x2351c8u: goto label_2351c8;
        case 0x2351ccu: goto label_2351cc;
        case 0x2351d0u: goto label_2351d0;
        case 0x2351d4u: goto label_2351d4;
        case 0x2351d8u: goto label_2351d8;
        case 0x2351dcu: goto label_2351dc;
        case 0x2351e0u: goto label_2351e0;
        case 0x2351e4u: goto label_2351e4;
        case 0x2351e8u: goto label_2351e8;
        case 0x2351ecu: goto label_2351ec;
        case 0x2351f0u: goto label_2351f0;
        case 0x2351f4u: goto label_2351f4;
        case 0x2351f8u: goto label_2351f8;
        case 0x2351fcu: goto label_2351fc;
        case 0x235200u: goto label_235200;
        case 0x235204u: goto label_235204;
        case 0x235208u: goto label_235208;
        case 0x23520cu: goto label_23520c;
        case 0x235210u: goto label_235210;
        case 0x235214u: goto label_235214;
        case 0x235218u: goto label_235218;
        case 0x23521cu: goto label_23521c;
        case 0x235220u: goto label_235220;
        case 0x235224u: goto label_235224;
        case 0x235228u: goto label_235228;
        case 0x23522cu: goto label_23522c;
        case 0x235230u: goto label_235230;
        case 0x235234u: goto label_235234;
        case 0x235238u: goto label_235238;
        case 0x23523cu: goto label_23523c;
        case 0x235240u: goto label_235240;
        case 0x235244u: goto label_235244;
        case 0x235248u: goto label_235248;
        case 0x23524cu: goto label_23524c;
        case 0x235250u: goto label_235250;
        case 0x235254u: goto label_235254;
        case 0x235258u: goto label_235258;
        case 0x23525cu: goto label_23525c;
        case 0x235260u: goto label_235260;
        case 0x235264u: goto label_235264;
        case 0x235268u: goto label_235268;
        case 0x23526cu: goto label_23526c;
        case 0x235270u: goto label_235270;
        case 0x235274u: goto label_235274;
        case 0x235278u: goto label_235278;
        case 0x23527cu: goto label_23527c;
        case 0x235280u: goto label_235280;
        case 0x235284u: goto label_235284;
        case 0x235288u: goto label_235288;
        case 0x23528cu: goto label_23528c;
        case 0x235290u: goto label_235290;
        case 0x235294u: goto label_235294;
        case 0x235298u: goto label_235298;
        case 0x23529cu: goto label_23529c;
        case 0x2352a0u: goto label_2352a0;
        case 0x2352a4u: goto label_2352a4;
        case 0x2352a8u: goto label_2352a8;
        case 0x2352acu: goto label_2352ac;
        case 0x2352b0u: goto label_2352b0;
        case 0x2352b4u: goto label_2352b4;
        case 0x2352b8u: goto label_2352b8;
        case 0x2352bcu: goto label_2352bc;
        case 0x2352c0u: goto label_2352c0;
        case 0x2352c4u: goto label_2352c4;
        case 0x2352c8u: goto label_2352c8;
        case 0x2352ccu: goto label_2352cc;
        case 0x2352d0u: goto label_2352d0;
        case 0x2352d4u: goto label_2352d4;
        case 0x2352d8u: goto label_2352d8;
        case 0x2352dcu: goto label_2352dc;
        case 0x2352e0u: goto label_2352e0;
        case 0x2352e4u: goto label_2352e4;
        case 0x2352e8u: goto label_2352e8;
        case 0x2352ecu: goto label_2352ec;
        case 0x2352f0u: goto label_2352f0;
        case 0x2352f4u: goto label_2352f4;
        case 0x2352f8u: goto label_2352f8;
        case 0x2352fcu: goto label_2352fc;
        case 0x235300u: goto label_235300;
        case 0x235304u: goto label_235304;
        case 0x235308u: goto label_235308;
        case 0x23530cu: goto label_23530c;
        case 0x235310u: goto label_235310;
        case 0x235314u: goto label_235314;
        case 0x235318u: goto label_235318;
        case 0x23531cu: goto label_23531c;
        case 0x235320u: goto label_235320;
        case 0x235324u: goto label_235324;
        case 0x235328u: goto label_235328;
        case 0x23532cu: goto label_23532c;
        case 0x235330u: goto label_235330;
        case 0x235334u: goto label_235334;
        case 0x235338u: goto label_235338;
        case 0x23533cu: goto label_23533c;
        case 0x235340u: goto label_235340;
        case 0x235344u: goto label_235344;
        case 0x235348u: goto label_235348;
        case 0x23534cu: goto label_23534c;
        case 0x235350u: goto label_235350;
        case 0x235354u: goto label_235354;
        case 0x235358u: goto label_235358;
        case 0x23535cu: goto label_23535c;
        case 0x235360u: goto label_235360;
        case 0x235364u: goto label_235364;
        case 0x235368u: goto label_235368;
        case 0x23536cu: goto label_23536c;
        case 0x235370u: goto label_235370;
        case 0x235374u: goto label_235374;
        case 0x235378u: goto label_235378;
        case 0x23537cu: goto label_23537c;
        case 0x235380u: goto label_235380;
        case 0x235384u: goto label_235384;
        case 0x235388u: goto label_235388;
        case 0x23538cu: goto label_23538c;
        case 0x235390u: goto label_235390;
        case 0x235394u: goto label_235394;
        case 0x235398u: goto label_235398;
        case 0x23539cu: goto label_23539c;
        case 0x2353a0u: goto label_2353a0;
        case 0x2353a4u: goto label_2353a4;
        case 0x2353a8u: goto label_2353a8;
        case 0x2353acu: goto label_2353ac;
        case 0x2353b0u: goto label_2353b0;
        case 0x2353b4u: goto label_2353b4;
        case 0x2353b8u: goto label_2353b8;
        case 0x2353bcu: goto label_2353bc;
        case 0x2353c0u: goto label_2353c0;
        case 0x2353c4u: goto label_2353c4;
        case 0x2353c8u: goto label_2353c8;
        case 0x2353ccu: goto label_2353cc;
        case 0x2353d0u: goto label_2353d0;
        case 0x2353d4u: goto label_2353d4;
        case 0x2353d8u: goto label_2353d8;
        case 0x2353dcu: goto label_2353dc;
        case 0x2353e0u: goto label_2353e0;
        case 0x2353e4u: goto label_2353e4;
        case 0x2353e8u: goto label_2353e8;
        case 0x2353ecu: goto label_2353ec;
        case 0x2353f0u: goto label_2353f0;
        case 0x2353f4u: goto label_2353f4;
        case 0x2353f8u: goto label_2353f8;
        case 0x2353fcu: goto label_2353fc;
        case 0x235400u: goto label_235400;
        case 0x235404u: goto label_235404;
        case 0x235408u: goto label_235408;
        case 0x23540cu: goto label_23540c;
        case 0x235410u: goto label_235410;
        case 0x235414u: goto label_235414;
        case 0x235418u: goto label_235418;
        case 0x23541cu: goto label_23541c;
        case 0x235420u: goto label_235420;
        case 0x235424u: goto label_235424;
        case 0x235428u: goto label_235428;
        case 0x23542cu: goto label_23542c;
        case 0x235430u: goto label_235430;
        case 0x235434u: goto label_235434;
        case 0x235438u: goto label_235438;
        case 0x23543cu: goto label_23543c;
        case 0x235440u: goto label_235440;
        case 0x235444u: goto label_235444;
        case 0x235448u: goto label_235448;
        case 0x23544cu: goto label_23544c;
        case 0x235450u: goto label_235450;
        case 0x235454u: goto label_235454;
        case 0x235458u: goto label_235458;
        case 0x23545cu: goto label_23545c;
        case 0x235460u: goto label_235460;
        case 0x235464u: goto label_235464;
        case 0x235468u: goto label_235468;
        case 0x23546cu: goto label_23546c;
        case 0x235470u: goto label_235470;
        case 0x235474u: goto label_235474;
        case 0x235478u: goto label_235478;
        case 0x23547cu: goto label_23547c;
        case 0x235480u: goto label_235480;
        case 0x235484u: goto label_235484;
        case 0x235488u: goto label_235488;
        case 0x23548cu: goto label_23548c;
        case 0x235490u: goto label_235490;
        case 0x235494u: goto label_235494;
        case 0x235498u: goto label_235498;
        case 0x23549cu: goto label_23549c;
        case 0x2354a0u: goto label_2354a0;
        case 0x2354a4u: goto label_2354a4;
        case 0x2354a8u: goto label_2354a8;
        case 0x2354acu: goto label_2354ac;
        case 0x2354b0u: goto label_2354b0;
        case 0x2354b4u: goto label_2354b4;
        case 0x2354b8u: goto label_2354b8;
        case 0x2354bcu: goto label_2354bc;
        case 0x2354c0u: goto label_2354c0;
        case 0x2354c4u: goto label_2354c4;
        case 0x2354c8u: goto label_2354c8;
        case 0x2354ccu: goto label_2354cc;
        case 0x2354d0u: goto label_2354d0;
        case 0x2354d4u: goto label_2354d4;
        case 0x2354d8u: goto label_2354d8;
        case 0x2354dcu: goto label_2354dc;
        case 0x2354e0u: goto label_2354e0;
        case 0x2354e4u: goto label_2354e4;
        case 0x2354e8u: goto label_2354e8;
        case 0x2354ecu: goto label_2354ec;
        case 0x2354f0u: goto label_2354f0;
        case 0x2354f4u: goto label_2354f4;
        case 0x2354f8u: goto label_2354f8;
        case 0x2354fcu: goto label_2354fc;
        case 0x235500u: goto label_235500;
        case 0x235504u: goto label_235504;
        case 0x235508u: goto label_235508;
        case 0x23550cu: goto label_23550c;
        case 0x235510u: goto label_235510;
        case 0x235514u: goto label_235514;
        case 0x235518u: goto label_235518;
        case 0x23551cu: goto label_23551c;
        case 0x235520u: goto label_235520;
        case 0x235524u: goto label_235524;
        case 0x235528u: goto label_235528;
        case 0x23552cu: goto label_23552c;
        case 0x235530u: goto label_235530;
        case 0x235534u: goto label_235534;
        case 0x235538u: goto label_235538;
        case 0x23553cu: goto label_23553c;
        case 0x235540u: goto label_235540;
        case 0x235544u: goto label_235544;
        case 0x235548u: goto label_235548;
        case 0x23554cu: goto label_23554c;
        case 0x235550u: goto label_235550;
        case 0x235554u: goto label_235554;
        case 0x235558u: goto label_235558;
        case 0x23555cu: goto label_23555c;
        case 0x235560u: goto label_235560;
        case 0x235564u: goto label_235564;
        case 0x235568u: goto label_235568;
        case 0x23556cu: goto label_23556c;
        case 0x235570u: goto label_235570;
        case 0x235574u: goto label_235574;
        case 0x235578u: goto label_235578;
        case 0x23557cu: goto label_23557c;
        case 0x235580u: goto label_235580;
        case 0x235584u: goto label_235584;
        case 0x235588u: goto label_235588;
        case 0x23558cu: goto label_23558c;
        case 0x235590u: goto label_235590;
        case 0x235594u: goto label_235594;
        case 0x235598u: goto label_235598;
        case 0x23559cu: goto label_23559c;
        case 0x2355a0u: goto label_2355a0;
        case 0x2355a4u: goto label_2355a4;
        case 0x2355a8u: goto label_2355a8;
        case 0x2355acu: goto label_2355ac;
        case 0x2355b0u: goto label_2355b0;
        case 0x2355b4u: goto label_2355b4;
        case 0x2355b8u: goto label_2355b8;
        case 0x2355bcu: goto label_2355bc;
        case 0x2355c0u: goto label_2355c0;
        case 0x2355c4u: goto label_2355c4;
        case 0x2355c8u: goto label_2355c8;
        case 0x2355ccu: goto label_2355cc;
        case 0x2355d0u: goto label_2355d0;
        case 0x2355d4u: goto label_2355d4;
        case 0x2355d8u: goto label_2355d8;
        case 0x2355dcu: goto label_2355dc;
        case 0x2355e0u: goto label_2355e0;
        case 0x2355e4u: goto label_2355e4;
        case 0x2355e8u: goto label_2355e8;
        case 0x2355ecu: goto label_2355ec;
        case 0x2355f0u: goto label_2355f0;
        case 0x2355f4u: goto label_2355f4;
        case 0x2355f8u: goto label_2355f8;
        case 0x2355fcu: goto label_2355fc;
        case 0x235600u: goto label_235600;
        case 0x235604u: goto label_235604;
        case 0x235608u: goto label_235608;
        case 0x23560cu: goto label_23560c;
        case 0x235610u: goto label_235610;
        case 0x235614u: goto label_235614;
        case 0x235618u: goto label_235618;
        case 0x23561cu: goto label_23561c;
        case 0x235620u: goto label_235620;
        case 0x235624u: goto label_235624;
        case 0x235628u: goto label_235628;
        case 0x23562cu: goto label_23562c;
        case 0x235630u: goto label_235630;
        case 0x235634u: goto label_235634;
        case 0x235638u: goto label_235638;
        case 0x23563cu: goto label_23563c;
        case 0x235640u: goto label_235640;
        case 0x235644u: goto label_235644;
        case 0x235648u: goto label_235648;
        case 0x23564cu: goto label_23564c;
        case 0x235650u: goto label_235650;
        case 0x235654u: goto label_235654;
        case 0x235658u: goto label_235658;
        case 0x23565cu: goto label_23565c;
        case 0x235660u: goto label_235660;
        case 0x235664u: goto label_235664;
        case 0x235668u: goto label_235668;
        case 0x23566cu: goto label_23566c;
        case 0x235670u: goto label_235670;
        case 0x235674u: goto label_235674;
        case 0x235678u: goto label_235678;
        case 0x23567cu: goto label_23567c;
        case 0x235680u: goto label_235680;
        case 0x235684u: goto label_235684;
        case 0x235688u: goto label_235688;
        case 0x23568cu: goto label_23568c;
        case 0x235690u: goto label_235690;
        case 0x235694u: goto label_235694;
        case 0x235698u: goto label_235698;
        case 0x23569cu: goto label_23569c;
        case 0x2356a0u: goto label_2356a0;
        case 0x2356a4u: goto label_2356a4;
        case 0x2356a8u: goto label_2356a8;
        case 0x2356acu: goto label_2356ac;
        case 0x2356b0u: goto label_2356b0;
        case 0x2356b4u: goto label_2356b4;
        case 0x2356b8u: goto label_2356b8;
        case 0x2356bcu: goto label_2356bc;
        case 0x2356c0u: goto label_2356c0;
        case 0x2356c4u: goto label_2356c4;
        case 0x2356c8u: goto label_2356c8;
        case 0x2356ccu: goto label_2356cc;
        case 0x2356d0u: goto label_2356d0;
        case 0x2356d4u: goto label_2356d4;
        case 0x2356d8u: goto label_2356d8;
        case 0x2356dcu: goto label_2356dc;
        case 0x2356e0u: goto label_2356e0;
        case 0x2356e4u: goto label_2356e4;
        case 0x2356e8u: goto label_2356e8;
        case 0x2356ecu: goto label_2356ec;
        case 0x2356f0u: goto label_2356f0;
        case 0x2356f4u: goto label_2356f4;
        case 0x2356f8u: goto label_2356f8;
        case 0x2356fcu: goto label_2356fc;
        case 0x235700u: goto label_235700;
        case 0x235704u: goto label_235704;
        case 0x235708u: goto label_235708;
        case 0x23570cu: goto label_23570c;
        case 0x235710u: goto label_235710;
        case 0x235714u: goto label_235714;
        case 0x235718u: goto label_235718;
        case 0x23571cu: goto label_23571c;
        case 0x235720u: goto label_235720;
        case 0x235724u: goto label_235724;
        case 0x235728u: goto label_235728;
        case 0x23572cu: goto label_23572c;
        case 0x235730u: goto label_235730;
        case 0x235734u: goto label_235734;
        case 0x235738u: goto label_235738;
        case 0x23573cu: goto label_23573c;
        case 0x235740u: goto label_235740;
        case 0x235744u: goto label_235744;
        case 0x235748u: goto label_235748;
        case 0x23574cu: goto label_23574c;
        case 0x235750u: goto label_235750;
        case 0x235754u: goto label_235754;
        case 0x235758u: goto label_235758;
        case 0x23575cu: goto label_23575c;
        case 0x235760u: goto label_235760;
        case 0x235764u: goto label_235764;
        case 0x235768u: goto label_235768;
        case 0x23576cu: goto label_23576c;
        case 0x235770u: goto label_235770;
        case 0x235774u: goto label_235774;
        case 0x235778u: goto label_235778;
        case 0x23577cu: goto label_23577c;
        case 0x235780u: goto label_235780;
        case 0x235784u: goto label_235784;
        case 0x235788u: goto label_235788;
        case 0x23578cu: goto label_23578c;
        case 0x235790u: goto label_235790;
        case 0x235794u: goto label_235794;
        case 0x235798u: goto label_235798;
        case 0x23579cu: goto label_23579c;
        case 0x2357a0u: goto label_2357a0;
        case 0x2357a4u: goto label_2357a4;
        case 0x2357a8u: goto label_2357a8;
        case 0x2357acu: goto label_2357ac;
        case 0x2357b0u: goto label_2357b0;
        case 0x2357b4u: goto label_2357b4;
        case 0x2357b8u: goto label_2357b8;
        case 0x2357bcu: goto label_2357bc;
        case 0x2357c0u: goto label_2357c0;
        case 0x2357c4u: goto label_2357c4;
        case 0x2357c8u: goto label_2357c8;
        case 0x2357ccu: goto label_2357cc;
        case 0x2357d0u: goto label_2357d0;
        case 0x2357d4u: goto label_2357d4;
        case 0x2357d8u: goto label_2357d8;
        case 0x2357dcu: goto label_2357dc;
        case 0x2357e0u: goto label_2357e0;
        case 0x2357e4u: goto label_2357e4;
        case 0x2357e8u: goto label_2357e8;
        case 0x2357ecu: goto label_2357ec;
        case 0x2357f0u: goto label_2357f0;
        case 0x2357f4u: goto label_2357f4;
        case 0x2357f8u: goto label_2357f8;
        case 0x2357fcu: goto label_2357fc;
        case 0x235800u: goto label_235800;
        case 0x235804u: goto label_235804;
        case 0x235808u: goto label_235808;
        case 0x23580cu: goto label_23580c;
        case 0x235810u: goto label_235810;
        case 0x235814u: goto label_235814;
        case 0x235818u: goto label_235818;
        case 0x23581cu: goto label_23581c;
        case 0x235820u: goto label_235820;
        case 0x235824u: goto label_235824;
        case 0x235828u: goto label_235828;
        case 0x23582cu: goto label_23582c;
        case 0x235830u: goto label_235830;
        case 0x235834u: goto label_235834;
        case 0x235838u: goto label_235838;
        case 0x23583cu: goto label_23583c;
        case 0x235840u: goto label_235840;
        case 0x235844u: goto label_235844;
        case 0x235848u: goto label_235848;
        case 0x23584cu: goto label_23584c;
        case 0x235850u: goto label_235850;
        case 0x235854u: goto label_235854;
        case 0x235858u: goto label_235858;
        case 0x23585cu: goto label_23585c;
        case 0x235860u: goto label_235860;
        case 0x235864u: goto label_235864;
        case 0x235868u: goto label_235868;
        case 0x23586cu: goto label_23586c;
        case 0x235870u: goto label_235870;
        case 0x235874u: goto label_235874;
        case 0x235878u: goto label_235878;
        case 0x23587cu: goto label_23587c;
        case 0x235880u: goto label_235880;
        case 0x235884u: goto label_235884;
        case 0x235888u: goto label_235888;
        case 0x23588cu: goto label_23588c;
        case 0x235890u: goto label_235890;
        case 0x235894u: goto label_235894;
        case 0x235898u: goto label_235898;
        case 0x23589cu: goto label_23589c;
        case 0x2358a0u: goto label_2358a0;
        case 0x2358a4u: goto label_2358a4;
        case 0x2358a8u: goto label_2358a8;
        case 0x2358acu: goto label_2358ac;
        case 0x2358b0u: goto label_2358b0;
        case 0x2358b4u: goto label_2358b4;
        case 0x2358b8u: goto label_2358b8;
        case 0x2358bcu: goto label_2358bc;
        case 0x2358c0u: goto label_2358c0;
        case 0x2358c4u: goto label_2358c4;
        case 0x2358c8u: goto label_2358c8;
        case 0x2358ccu: goto label_2358cc;
        case 0x2358d0u: goto label_2358d0;
        case 0x2358d4u: goto label_2358d4;
        case 0x2358d8u: goto label_2358d8;
        case 0x2358dcu: goto label_2358dc;
        case 0x2358e0u: goto label_2358e0;
        case 0x2358e4u: goto label_2358e4;
        case 0x2358e8u: goto label_2358e8;
        case 0x2358ecu: goto label_2358ec;
        case 0x2358f0u: goto label_2358f0;
        case 0x2358f4u: goto label_2358f4;
        case 0x2358f8u: goto label_2358f8;
        case 0x2358fcu: goto label_2358fc;
        case 0x235900u: goto label_235900;
        case 0x235904u: goto label_235904;
        case 0x235908u: goto label_235908;
        case 0x23590cu: goto label_23590c;
        case 0x235910u: goto label_235910;
        case 0x235914u: goto label_235914;
        case 0x235918u: goto label_235918;
        case 0x23591cu: goto label_23591c;
        case 0x235920u: goto label_235920;
        case 0x235924u: goto label_235924;
        case 0x235928u: goto label_235928;
        case 0x23592cu: goto label_23592c;
        case 0x235930u: goto label_235930;
        case 0x235934u: goto label_235934;
        case 0x235938u: goto label_235938;
        case 0x23593cu: goto label_23593c;
        case 0x235940u: goto label_235940;
        case 0x235944u: goto label_235944;
        case 0x235948u: goto label_235948;
        case 0x23594cu: goto label_23594c;
        default: break;
    }

    ctx->pc = 0x235120u;

label_235120:
    // 0x235120: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x235120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_235124:
    // 0x235124: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x235124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_235128:
    // 0x235128: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x235128u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_23512c:
    // 0x23512c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x23512cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_235130:
    // 0x235130: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x235130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_235134:
    // 0x235134: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x235134u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_235138:
    // 0x235138: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x235138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23513c:
    // 0x23513c: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x23513cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_235140:
    // 0x235140: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x235140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_235144:
    // 0x235144: 0x2442f120  addiu       $v0, $v0, -0xEE0
    ctx->pc = 0x235144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963488));
label_235148:
    // 0x235148: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x235148u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_23514c:
    // 0x23514c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x23514cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_235150:
    // 0x235150: 0x2442f100  addiu       $v0, $v0, -0xF00
    ctx->pc = 0x235150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963456));
label_235154:
    // 0x235154: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x235154u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_235158:
    // 0x235158: 0x3c024204  lui         $v0, 0x4204
    ctx->pc = 0x235158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16900 << 16));
label_23515c:
    // 0x23515c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x23515cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_235160:
    // 0x235160: 0x3c02427c  lui         $v0, 0x427C
    ctx->pc = 0x235160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17020 << 16));
label_235164:
    // 0x235164: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x235164u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_235168:
    // 0x235168: 0x3e00008  jr          $ra
label_23516c:
    if (ctx->pc == 0x23516Cu) {
        ctx->pc = 0x23516Cu;
            // 0x23516c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x235170u;
        goto label_235170;
    }
    ctx->pc = 0x235168u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23516Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235168u;
            // 0x23516c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x235170u;
label_235170:
    // 0x235170: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x235170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_235174:
    // 0x235174: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x235174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_235178:
    // 0x235178: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x235178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_23517c:
    // 0x23517c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23517cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_235180:
    // 0x235180: 0x52000017  beql        $s0, $zero, . + 4 + (0x17 << 2)
label_235184:
    if (ctx->pc == 0x235184u) {
        ctx->pc = 0x235184u;
            // 0x235184: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x235188u;
        goto label_235188;
    }
    ctx->pc = 0x235180u;
    {
        const bool branch_taken_0x235180 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x235180) {
            ctx->pc = 0x235184u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x235180u;
            // 0x235184: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2351E0u;
            goto label_2351e0;
        }
    }
    ctx->pc = 0x235188u;
label_235188:
    // 0x235188: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x235188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_23518c:
    // 0x23518c: 0x2442f120  addiu       $v0, $v0, -0xEE0
    ctx->pc = 0x23518cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963488));
label_235190:
    // 0x235190: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_235194:
    if (ctx->pc == 0x235194u) {
        ctx->pc = 0x235194u;
            // 0x235194: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x235198u;
        goto label_235198;
    }
    ctx->pc = 0x235190u;
    {
        const bool branch_taken_0x235190 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x235194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235190u;
            // 0x235194: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235190) {
            ctx->pc = 0x2351B4u;
            goto label_2351b4;
        }
    }
    ctx->pc = 0x235198u;
label_235198:
    // 0x235198: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x235198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_23519c:
    // 0x23519c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x23519cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_2351a0:
    // 0x2351a0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_2351a4:
    if (ctx->pc == 0x2351A4u) {
        ctx->pc = 0x2351A4u;
            // 0x2351a4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2351A8u;
        goto label_2351a8;
    }
    ctx->pc = 0x2351A0u;
    {
        const bool branch_taken_0x2351a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2351A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2351A0u;
            // 0x2351a4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2351a0) {
            ctx->pc = 0x2351B4u;
            goto label_2351b4;
        }
    }
    ctx->pc = 0x2351A8u;
label_2351a8:
    // 0x2351a8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2351a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2351ac:
    // 0x2351ac: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x2351acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_2351b0:
    // 0x2351b0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2351b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2351b4:
    // 0x2351b4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2351b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_2351b8:
    // 0x2351b8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2351b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2351bc:
    // 0x2351bc: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_2351c0:
    if (ctx->pc == 0x2351C0u) {
        ctx->pc = 0x2351C4u;
        goto label_2351c4;
    }
    ctx->pc = 0x2351BCu;
    {
        const bool branch_taken_0x2351bc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2351bc) {
            ctx->pc = 0x2351DCu;
            goto label_2351dc;
        }
    }
    ctx->pc = 0x2351C4u;
label_2351c4:
    // 0x2351c4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2351c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2351c8:
    // 0x2351c8: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x2351c8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_2351cc:
    // 0x2351cc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2351ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_2351d0:
    // 0x2351d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2351d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2351d4:
    // 0x2351d4: 0xc0a7ab4  jal         func_29EAD0
label_2351d8:
    if (ctx->pc == 0x2351D8u) {
        ctx->pc = 0x2351D8u;
            // 0x2351d8: 0x24070013  addiu       $a3, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->pc = 0x2351DCu;
        goto label_2351dc;
    }
    ctx->pc = 0x2351D4u;
    SET_GPR_U32(ctx, 31, 0x2351DCu);
    ctx->pc = 0x2351D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2351D4u;
            // 0x2351d8: 0x24070013  addiu       $a3, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2351DCu; }
        if (ctx->pc != 0x2351DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2351DCu; }
        if (ctx->pc != 0x2351DCu) { return; }
    }
    ctx->pc = 0x2351DCu;
label_2351dc:
    // 0x2351dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2351dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2351e0:
    // 0x2351e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2351e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2351e4:
    // 0x2351e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2351e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2351e8:
    // 0x2351e8: 0x3e00008  jr          $ra
label_2351ec:
    if (ctx->pc == 0x2351ECu) {
        ctx->pc = 0x2351ECu;
            // 0x2351ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2351F0u;
        goto label_2351f0;
    }
    ctx->pc = 0x2351E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2351ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2351E8u;
            // 0x2351ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2351F0u;
label_2351f0:
    // 0x2351f0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x2351f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2351f4:
    // 0x2351f4: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2351f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2351f8:
    // 0x2351f8: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x2351f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_2351fc:
    // 0x2351fc: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2351fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_235200:
    // 0x235200: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x235200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_235204:
    // 0x235204: 0x3e00008  jr          $ra
label_235208:
    if (ctx->pc == 0x235208u) {
        ctx->pc = 0x235208u;
            // 0x235208: 0xe4600014  swc1        $f0, 0x14($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
        ctx->pc = 0x23520Cu;
        goto label_23520c;
    }
    ctx->pc = 0x235204u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235204u;
            // 0x235208: 0xe4600014  swc1        $f0, 0x14($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23520Cu;
label_23520c:
    // 0x23520c: 0x0  nop
    ctx->pc = 0x23520cu;
    // NOP
label_235210:
    // 0x235210: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x235210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_235214:
    // 0x235214: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x235214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_235218:
    // 0x235218: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x235218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_23521c:
    // 0x23521c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x23521cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_235220:
    // 0x235220: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x235220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_235224:
    // 0x235224: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x235224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_235228:
    // 0x235228: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x235228u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23522c:
    // 0x23522c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x23522cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_235230:
    // 0x235230: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x235230u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_235234:
    // 0x235234: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x235234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_235238:
    // 0x235238: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x235238u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23523c:
    // 0x23523c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x23523cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_235240:
    // 0x235240: 0x24a5ea60  addiu       $a1, $a1, -0x15A0
    ctx->pc = 0x235240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
label_235244:
    // 0x235244: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x235244u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_235248:
    // 0x235248: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x235248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_23524c:
    // 0x23524c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x23524cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_235250:
    // 0x235250: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x235250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_235254:
    // 0x235254: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x235254u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_235258:
    // 0x235258: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_23525c:
    if (ctx->pc == 0x23525Cu) {
        ctx->pc = 0x23525Cu;
            // 0x23525c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x235260u;
        goto label_235260;
    }
    ctx->pc = 0x235258u;
    {
        const bool branch_taken_0x235258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23525Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235258u;
            // 0x23525c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235258) {
            ctx->pc = 0x235294u;
            goto label_235294;
        }
    }
    ctx->pc = 0x235260u;
label_235260:
    // 0x235260: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x235260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_235264:
    // 0x235264: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x235264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_235268:
    // 0x235268: 0x2463cbf0  addiu       $v1, $v1, -0x3410
    ctx->pc = 0x235268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953968));
label_23526c:
    // 0x23526c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x23526cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_235270:
    // 0x235270: 0x2442cc00  addiu       $v0, $v0, -0x3400
    ctx->pc = 0x235270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953984));
label_235274:
    // 0x235274: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x235274u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_235278:
    // 0x235278: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x235278u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_23527c:
    // 0x23527c: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x23527cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_235280:
    // 0x235280: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x235280u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_235284:
    // 0x235284: 0x4003c803  .word       0x4003C803                   # mfc0        $v1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x235284u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_235288:
    // 0x235288: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x235288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_23528c:
    // 0x23528c: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x23528cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
label_235290:
    // 0x235290: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x235290u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_235294:
    // 0x235294: 0xc090144  jal         func_240510
label_235298:
    if (ctx->pc == 0x235298u) {
        ctx->pc = 0x235298u;
            // 0x235298: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23529Cu;
        goto label_23529c;
    }
    ctx->pc = 0x235294u;
    SET_GPR_U32(ctx, 31, 0x23529Cu);
    ctx->pc = 0x235298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235294u;
            // 0x235298: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x240510u;
    if (runtime->hasFunction(0x240510u)) {
        auto targetFn = runtime->lookupFunction(0x240510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23529Cu; }
        if (ctx->pc != 0x23529Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00240510_0x240510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23529Cu; }
        if (ctx->pc != 0x23529Cu) { return; }
    }
    ctx->pc = 0x23529Cu;
label_23529c:
    // 0x23529c: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x23529cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2352a0:
    // 0x2352a0: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x2352a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2352a4:
    // 0x2352a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2352a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2352a8:
    // 0x2352a8: 0x4503006e  bc1tl       . + 4 + (0x6E << 2)
label_2352ac:
    if (ctx->pc == 0x2352ACu) {
        ctx->pc = 0x2352ACu;
            // 0x2352ac: 0x828300d2  lb          $v1, 0xD2($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 210)));
        ctx->pc = 0x2352B0u;
        goto label_2352b0;
    }
    ctx->pc = 0x2352A8u;
    {
        const bool branch_taken_0x2352a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2352a8) {
            ctx->pc = 0x2352ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2352A8u;
            // 0x2352ac: 0x828300d2  lb          $v1, 0xD2($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 210)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x235464u;
            goto label_235464;
        }
    }
    ctx->pc = 0x2352B0u;
label_2352b0:
    // 0x2352b0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2352b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2352b4:
    // 0x2352b4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2352b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2352b8:
    // 0x2352b8: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x2352b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_2352bc:
    // 0x2352bc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2352bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2352c0:
    // 0x2352c0: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x2352c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_2352c4:
    // 0x2352c4: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2352c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2352c8:
    // 0x2352c8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2352cc:
    if (ctx->pc == 0x2352CCu) {
        ctx->pc = 0x2352CCu;
            // 0x2352cc: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x2352D0u;
        goto label_2352d0;
    }
    ctx->pc = 0x2352C8u;
    {
        const bool branch_taken_0x2352c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2352CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2352C8u;
            // 0x2352cc: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2352c8) {
            ctx->pc = 0x2352F8u;
            goto label_2352f8;
        }
    }
    ctx->pc = 0x2352D0u;
label_2352d0:
    // 0x2352d0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2352d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2352d4:
    // 0x2352d4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2352d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2352d8:
    // 0x2352d8: 0x2442cc08  addiu       $v0, $v0, -0x33F8
    ctx->pc = 0x2352d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953992));
label_2352dc:
    // 0x2352dc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2352dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2352e0:
    // 0x2352e0: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2352e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_2352e4:
    // 0x2352e4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2352e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_2352e8:
    // 0x2352e8: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2352e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_2352ec:
    // 0x2352ec: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x2352ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_2352f0:
    // 0x2352f0: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x2352f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_2352f4:
    // 0x2352f4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2352f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_2352f8:
    // 0x2352f8: 0xc6630004  lwc1        $f3, 0x4($s3)
    ctx->pc = 0x2352f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2352fc:
    // 0x2352fc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2352fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_235300:
    // 0x235300: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x235300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_235304:
    // 0x235304: 0x269201a0  addiu       $s2, $s4, 0x1A0
    ctx->pc = 0x235304u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 416));
label_235308:
    // 0x235308: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x235308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_23530c:
    // 0x23530c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x23530cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_235310:
    // 0x235310: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x235310u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_235314:
    // 0x235314: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x235314u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[3];
label_235318:
    // 0x235318: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x235318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_23531c:
    // 0x23531c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23531cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_235320:
    // 0x235320: 0xe68201a0  swc1        $f2, 0x1A0($s4)
    ctx->pc = 0x235320u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 416), bits); }
label_235324:
    // 0x235324: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x235324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_235328:
    // 0x235328: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x235328u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_23532c:
    // 0x23532c: 0xe68201a4  swc1        $f2, 0x1A4($s4)
    ctx->pc = 0x23532cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 420), bits); }
label_235330:
    // 0x235330: 0xe68301a8  swc1        $f3, 0x1A8($s4)
    ctx->pc = 0x235330u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 424), bits); }
label_235334:
    // 0x235334: 0xe68101ac  swc1        $f1, 0x1AC($s4)
    ctx->pc = 0x235334u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 428), bits); }
label_235338:
    // 0x235338: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x235338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_23533c:
    // 0x23533c: 0xc68301a0  lwc1        $f3, 0x1A0($s4)
    ctx->pc = 0x23533cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_235340:
    // 0x235340: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x235340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_235344:
    // 0x235344: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x235344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_235348:
    // 0x235348: 0x46021d01  sub.s       $f20, $f3, $f2
    ctx->pc = 0x235348u;
    ctx->f[20] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_23534c:
    // 0x23534c: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x23534cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
label_235350:
    // 0x235350: 0xe4410010  swc1        $f1, 0x10($v0)
    ctx->pc = 0x235350u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_235354:
    // 0x235354: 0xc68101a0  lwc1        $f1, 0x1A0($s4)
    ctx->pc = 0x235354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_235358:
    // 0x235358: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x235358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_23535c:
    // 0x23535c: 0xe4410014  swc1        $f1, 0x14($v0)
    ctx->pc = 0x23535cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_235360:
    // 0x235360: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x235360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_235364:
    // 0x235364: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x235364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_235368:
    // 0x235368: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x235368u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23536c:
    // 0x23536c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_235370:
    if (ctx->pc == 0x235370u) {
        ctx->pc = 0x235370u;
            // 0x235370: 0x2462001c  addiu       $v0, $v1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
        ctx->pc = 0x235374u;
        goto label_235374;
    }
    ctx->pc = 0x23536Cu;
    {
        const bool branch_taken_0x23536c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x235370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23536Cu;
            // 0x235370: 0x2462001c  addiu       $v0, $v1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23536c) {
            ctx->pc = 0x23537Cu;
            goto label_23537c;
        }
    }
    ctx->pc = 0x235374u;
label_235374:
    // 0x235374: 0x4601a000  add.s       $f0, $f20, $f1
    ctx->pc = 0x235374u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_235378:
    // 0x235378: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x235378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_23537c:
    // 0x23537c: 0x8e82002c  lw          $v0, 0x2C($s4)
    ctx->pc = 0x23537cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_235380:
    // 0x235380: 0x26950028  addiu       $s5, $s4, 0x28
    ctx->pc = 0x235380u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
label_235384:
    // 0x235384: 0x18400020  blez        $v0, . + 4 + (0x20 << 2)
label_235388:
    if (ctx->pc == 0x235388u) {
        ctx->pc = 0x235388u;
            // 0x235388: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23538Cu;
        goto label_23538c;
    }
    ctx->pc = 0x235384u;
    {
        const bool branch_taken_0x235384 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x235388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235384u;
            // 0x235388: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235384) {
            ctx->pc = 0x235408u;
            goto label_235408;
        }
    }
    ctx->pc = 0x23538Cu;
label_23538c:
    // 0x23538c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x23538cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_235390:
    // 0x235390: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x235390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_235394:
    // 0x235394: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x235394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_235398:
    // 0x235398: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x235398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23539c:
    // 0x23539c: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x23539cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_2353a0:
    // 0x2353a0: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
label_2353a4:
    if (ctx->pc == 0x2353A4u) {
        ctx->pc = 0x2353A4u;
            // 0x2353a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2353A8u;
        goto label_2353a8;
    }
    ctx->pc = 0x2353A0u;
    {
        const bool branch_taken_0x2353a0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2353A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2353A0u;
            // 0x2353a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2353a0) {
            ctx->pc = 0x2353E0u;
            goto label_2353e0;
        }
    }
    ctx->pc = 0x2353A8u;
label_2353a8:
    // 0x2353a8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2353a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2353ac:
    // 0x2353ac: 0x0  nop
    ctx->pc = 0x2353acu;
    // NOP
label_2353b0:
    // 0x2353b0: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x2353b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_2353b4:
    // 0x2353b4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2353b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2353b8:
    // 0x2353b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2353b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2353bc:
    // 0x2353bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2353bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2353c0:
    // 0x2353c0: 0xc44000fc  lwc1        $f0, 0xFC($v0)
    ctx->pc = 0x2353c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2353c4:
    // 0x2353c4: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2353c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_2353c8:
    // 0x2353c8: 0xe44000fc  swc1        $f0, 0xFC($v0)
    ctx->pc = 0x2353c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 252), bits); }
label_2353cc:
    // 0x2353cc: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x2353ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_2353d0:
    // 0x2353d0: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2353d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2353d4:
    // 0x2353d4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_2353d8:
    if (ctx->pc == 0x2353D8u) {
        ctx->pc = 0x2353D8u;
            // 0x2353d8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x2353DCu;
        goto label_2353dc;
    }
    ctx->pc = 0x2353D4u;
    {
        const bool branch_taken_0x2353d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2353D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2353D4u;
            // 0x2353d8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2353d4) {
            ctx->pc = 0x2353B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2353b0;
        }
    }
    ctx->pc = 0x2353DCu;
label_2353dc:
    // 0x2353dc: 0x0  nop
    ctx->pc = 0x2353dcu;
    // NOP
label_2353e0:
    // 0x2353e0: 0xc66c0004  lwc1        $f12, 0x4($s3)
    ctx->pc = 0x2353e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2353e4:
    // 0x2353e4: 0xc64d0004  lwc1        $f13, 0x4($s2)
    ctx->pc = 0x2353e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2353e8:
    // 0x2353e8: 0xc08e350  jal         func_238D40
label_2353ec:
    if (ctx->pc == 0x2353ECu) {
        ctx->pc = 0x2353ECu;
            // 0x2353ec: 0x8e85006c  lw          $a1, 0x6C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
        ctx->pc = 0x2353F0u;
        goto label_2353f0;
    }
    ctx->pc = 0x2353E8u;
    SET_GPR_U32(ctx, 31, 0x2353F0u);
    ctx->pc = 0x2353ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2353E8u;
            // 0x2353ec: 0x8e85006c  lw          $a1, 0x6C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238D40u;
    if (runtime->hasFunction(0x238D40u)) {
        auto targetFn = runtime->lookupFunction(0x238D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2353F0u; }
        if (ctx->pc != 0x2353F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238D40_0x238d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2353F0u; }
        if (ctx->pc != 0x2353F0u) { return; }
    }
    ctx->pc = 0x2353F0u;
label_2353f0:
    // 0x2353f0: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x2353f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2353f4:
    // 0x2353f4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2353f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2353f8:
    // 0x2353f8: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2353f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2353fc:
    // 0x2353fc: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
label_235400:
    if (ctx->pc == 0x235400u) {
        ctx->pc = 0x235400u;
            // 0x235400: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x235404u;
        goto label_235404;
    }
    ctx->pc = 0x2353FCu;
    {
        const bool branch_taken_0x2353fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2353FCu;
            // 0x235400: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2353fc) {
            ctx->pc = 0x235390u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_235390;
        }
    }
    ctx->pc = 0x235404u;
label_235404:
    // 0x235404: 0x0  nop
    ctx->pc = 0x235404u;
    // NOP
label_235408:
    // 0x235408: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x235408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_23540c:
    // 0x23540c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23540cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_235410:
    // 0x235410: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x235410u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_235414:
    // 0x235414: 0x320f809  jalr        $t9
label_235418:
    if (ctx->pc == 0x235418u) {
        ctx->pc = 0x235418u;
            // 0x235418: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x23541Cu;
        goto label_23541c;
    }
    ctx->pc = 0x235414u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23541Cu);
        ctx->pc = 0x235418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235414u;
            // 0x235418: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23541Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23541Cu; }
            if (ctx->pc != 0x23541Cu) { return; }
        }
        }
    }
    ctx->pc = 0x23541Cu;
label_23541c:
    // 0x23541c: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x23541cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_235420:
    // 0x235420: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x235420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_235424:
    // 0x235424: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x235424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_235428:
    // 0x235428: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x235428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_23542c:
    // 0x23542c: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x23542cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_235430:
    // 0x235430: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x235430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_235434:
    // 0x235434: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x235434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_235438:
    // 0x235438: 0xe660000c  swc1        $f0, 0xC($s3)
    ctx->pc = 0x235438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_23543c:
    // 0x23543c: 0x8e83006c  lw          $v1, 0x6C($s4)
    ctx->pc = 0x23543cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_235440:
    // 0x235440: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x235440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_235444:
    // 0x235444: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x235444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
label_235448:
    // 0x235448: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x235448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23544c:
    // 0x23544c: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x23544cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_235450:
    // 0x235450: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x235450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_235454:
    // 0x235454: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x235454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
label_235458:
    // 0x235458: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x235458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23545c:
    // 0x23545c: 0xe460002c  swc1        $f0, 0x2C($v1)
    ctx->pc = 0x23545cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
label_235460:
    // 0x235460: 0x828300d2  lb          $v1, 0xD2($s4)
    ctx->pc = 0x235460u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 210)));
label_235464:
    // 0x235464: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
label_235468:
    if (ctx->pc == 0x235468u) {
        ctx->pc = 0x23546Cu;
        goto label_23546c;
    }
    ctx->pc = 0x235464u;
    {
        const bool branch_taken_0x235464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x235464) {
            ctx->pc = 0x235518u;
            goto label_235518;
        }
    }
    ctx->pc = 0x23546Cu;
label_23546c:
    // 0x23546c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x23546cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_235470:
    // 0x235470: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x235470u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_235474:
    // 0x235474: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x235474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_235478:
    // 0x235478: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x235478u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_23547c:
    // 0x23547c: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x23547cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_235480:
    // 0x235480: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x235480u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_235484:
    // 0x235484: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_235488:
    if (ctx->pc == 0x235488u) {
        ctx->pc = 0x235488u;
            // 0x235488: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x23548Cu;
        goto label_23548c;
    }
    ctx->pc = 0x235484u;
    {
        const bool branch_taken_0x235484 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x235488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235484u;
            // 0x235488: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235484) {
            ctx->pc = 0x2354B4u;
            goto label_2354b4;
        }
    }
    ctx->pc = 0x23548Cu;
label_23548c:
    // 0x23548c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x23548cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_235490:
    // 0x235490: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x235490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_235494:
    // 0x235494: 0x2463cc20  addiu       $v1, $v1, -0x33E0
    ctx->pc = 0x235494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954016));
label_235498:
    // 0x235498: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x235498u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_23549c:
    // 0x23549c: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x23549cu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_2354a0:
    // 0x2354a0: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2354a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_2354a4:
    // 0x2354a4: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2354a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_2354a8:
    // 0x2354a8: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x2354a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_2354ac:
    // 0x2354ac: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x2354acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_2354b0:
    // 0x2354b0: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x2354b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_2354b4:
    // 0x2354b4: 0xae8000a4  sw          $zero, 0xA4($s4)
    ctx->pc = 0x2354b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 0));
label_2354b8:
    // 0x2354b8: 0x8e83002c  lw          $v1, 0x2C($s4)
    ctx->pc = 0x2354b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_2354bc:
    // 0x2354bc: 0x2472ffff  addiu       $s2, $v1, -0x1
    ctx->pc = 0x2354bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2354c0:
    // 0x2354c0: 0x6400015  bltz        $s2, . + 4 + (0x15 << 2)
label_2354c4:
    if (ctx->pc == 0x2354C4u) {
        ctx->pc = 0x2354C4u;
            // 0x2354c4: 0x26950028  addiu       $s5, $s4, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
        ctx->pc = 0x2354C8u;
        goto label_2354c8;
    }
    ctx->pc = 0x2354C0u;
    {
        const bool branch_taken_0x2354c0 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x2354C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2354C0u;
            // 0x2354c4: 0x26950028  addiu       $s5, $s4, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2354c0) {
            ctx->pc = 0x235518u;
            goto label_235518;
        }
    }
    ctx->pc = 0x2354C8u;
label_2354c8:
    // 0x2354c8: 0x128080  sll         $s0, $s2, 2
    ctx->pc = 0x2354c8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_2354cc:
    // 0x2354cc: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2354ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2354d0:
    // 0x2354d0: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x2354d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
label_2354d4:
    // 0x2354d4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2354d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2354d8:
    // 0x2354d8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2354d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2354dc:
    // 0x2354dc: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2354dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2354e0:
    // 0x2354e0: 0xc08b8c8  jal         func_22E320
label_2354e4:
    if (ctx->pc == 0x2354E4u) {
        ctx->pc = 0x2354E4u;
            // 0x2354e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2354E8u;
        goto label_2354e8;
    }
    ctx->pc = 0x2354E0u;
    SET_GPR_U32(ctx, 31, 0x2354E8u);
    ctx->pc = 0x2354E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2354E0u;
            // 0x2354e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E320u;
    if (runtime->hasFunction(0x22E320u)) {
        auto targetFn = runtime->lookupFunction(0x22E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2354E8u; }
        if (ctx->pc != 0x2354E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022E320_0x22e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2354E8u; }
        if (ctx->pc != 0x2354E8u) { return; }
    }
    ctx->pc = 0x2354E8u;
label_2354e8:
    // 0x2354e8: 0x27a3008c  addiu       $v1, $sp, 0x8C
    ctx->pc = 0x2354e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
label_2354ec:
    // 0x2354ec: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x2354ecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2354f0:
    // 0x2354f0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2354f4:
    if (ctx->pc == 0x2354F4u) {
        ctx->pc = 0x2354F8u;
        goto label_2354f8;
    }
    ctx->pc = 0x2354F0u;
    {
        const bool branch_taken_0x2354f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2354f0) {
            ctx->pc = 0x235508u;
            goto label_235508;
        }
    }
    ctx->pc = 0x2354F8u;
label_2354f8:
    // 0x2354f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2354f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2354fc:
    // 0x2354fc: 0xc0906d8  jal         func_241B60
label_235500:
    if (ctx->pc == 0x235500u) {
        ctx->pc = 0x235500u;
            // 0x235500: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x235504u;
        goto label_235504;
    }
    ctx->pc = 0x2354FCu;
    SET_GPR_U32(ctx, 31, 0x235504u);
    ctx->pc = 0x235500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2354FCu;
            // 0x235500: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x241B60u;
    if (runtime->hasFunction(0x241B60u)) {
        auto targetFn = runtime->lookupFunction(0x241B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235504u; }
        if (ctx->pc != 0x235504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00241B60_0x241b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235504u; }
        if (ctx->pc != 0x235504u) { return; }
    }
    ctx->pc = 0x235504u;
label_235504:
    // 0x235504: 0x0  nop
    ctx->pc = 0x235504u;
    // NOP
label_235508:
    // 0x235508: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x235508u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_23550c:
    // 0x23550c: 0x641ffef  bgez        $s2, . + 4 + (-0x11 << 2)
label_235510:
    if (ctx->pc == 0x235510u) {
        ctx->pc = 0x235510u;
            // 0x235510: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->pc = 0x235514u;
        goto label_235514;
    }
    ctx->pc = 0x23550Cu;
    {
        const bool branch_taken_0x23550c = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x235510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23550Cu;
            // 0x235510: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23550c) {
            ctx->pc = 0x2354CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2354cc;
        }
    }
    ctx->pc = 0x235514u;
label_235514:
    // 0x235514: 0x0  nop
    ctx->pc = 0x235514u;
    // NOP
label_235518:
    // 0x235518: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x235518u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_23551c:
    // 0x23551c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x23551cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_235520:
    // 0x235520: 0x8c84ea64  lw          $a0, -0x159C($a0)
    ctx->pc = 0x235520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961764)));
label_235524:
    // 0x235524: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x235524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_235528:
    // 0x235528: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x235528u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_23552c:
    // 0x23552c: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x23552cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_235530:
    // 0x235530: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_235534:
    if (ctx->pc == 0x235534u) {
        ctx->pc = 0x235534u;
            // 0x235534: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x235538u;
        goto label_235538;
    }
    ctx->pc = 0x235530u;
    {
        const bool branch_taken_0x235530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x235534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235530u;
            // 0x235534: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235530) {
            ctx->pc = 0x235560u;
            goto label_235560;
        }
    }
    ctx->pc = 0x235538u;
label_235538:
    // 0x235538: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x235538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_23553c:
    // 0x23553c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x23553cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_235540:
    // 0x235540: 0x2463cc30  addiu       $v1, $v1, -0x33D0
    ctx->pc = 0x235540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954032));
label_235544:
    // 0x235544: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x235544u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_235548:
    // 0x235548: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x235548u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_23554c:
    // 0x23554c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x23554cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_235550:
    // 0x235550: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x235550u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_235554:
    // 0x235554: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x235554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_235558:
    // 0x235558: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x235558u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_23555c:
    // 0x23555c: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x23555cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_235560:
    // 0x235560: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x235560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_235564:
    // 0x235564: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x235564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_235568:
    // 0x235568: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x235568u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_23556c:
    // 0x23556c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x23556cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_235570:
    // 0x235570: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x235570u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_235574:
    // 0x235574: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x235574u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_235578:
    // 0x235578: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x235578u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23557c:
    // 0x23557c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x23557cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_235580:
    // 0x235580: 0x3e00008  jr          $ra
label_235584:
    if (ctx->pc == 0x235584u) {
        ctx->pc = 0x235584u;
            // 0x235584: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x235588u;
        goto label_235588;
    }
    ctx->pc = 0x235580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235580u;
            // 0x235584: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x235588u;
label_235588:
    // 0x235588: 0x0  nop
    ctx->pc = 0x235588u;
    // NOP
label_23558c:
    // 0x23558c: 0x0  nop
    ctx->pc = 0x23558cu;
    // NOP
label_235590:
    // 0x235590: 0x3e00008  jr          $ra
label_235594:
    if (ctx->pc == 0x235594u) {
        ctx->pc = 0x235598u;
        goto label_235598;
    }
    ctx->pc = 0x235590u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x235598u;
label_235598:
    // 0x235598: 0x0  nop
    ctx->pc = 0x235598u;
    // NOP
label_23559c:
    // 0x23559c: 0x0  nop
    ctx->pc = 0x23559cu;
    // NOP
label_2355a0:
    // 0x2355a0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2355a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_2355a4:
    // 0x2355a4: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x2355a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_2355a8:
    // 0x2355a8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2355a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2355ac:
    // 0x2355ac: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2355acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2355b0:
    // 0x2355b0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2355b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_2355b4:
    // 0x2355b4: 0x24e7ea60  addiu       $a3, $a3, -0x15A0
    ctx->pc = 0x2355b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961760));
label_2355b8:
    // 0x2355b8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2355b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2355bc:
    // 0x2355bc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2355bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2355c0:
    // 0x2355c0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2355c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2355c4:
    // 0x2355c4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2355c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2355c8:
    // 0x2355c8: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x2355c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_2355cc:
    // 0x2355cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2355ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2355d0:
    // 0x2355d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2355d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2355d4:
    // 0x2355d4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2355d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2355d8:
    // 0x2355d8: 0x8ca5ea64  lw          $a1, -0x159C($a1)
    ctx->pc = 0x2355d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294961764)));
label_2355dc:
    // 0x2355dc: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x2355dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_2355e0:
    // 0x2355e0: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x2355e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2355e4:
    // 0x2355e4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_2355e8:
    if (ctx->pc == 0x2355E8u) {
        ctx->pc = 0x2355E8u;
            // 0x2355e8: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2355ECu;
        goto label_2355ec;
    }
    ctx->pc = 0x2355E4u;
    {
        const bool branch_taken_0x2355e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2355E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2355E4u;
            // 0x2355e8: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2355e4) {
            ctx->pc = 0x235620u;
            goto label_235620;
        }
    }
    ctx->pc = 0x2355ECu;
label_2355ec:
    // 0x2355ec: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x2355ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_2355f0:
    // 0x2355f0: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x2355f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_2355f4:
    // 0x2355f4: 0x24a5cbf0  addiu       $a1, $a1, -0x3410
    ctx->pc = 0x2355f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953968));
label_2355f8:
    // 0x2355f8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2355f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_2355fc:
    // 0x2355fc: 0x2463cc08  addiu       $v1, $v1, -0x33F8
    ctx->pc = 0x2355fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953992));
label_235600:
    // 0x235600: 0xacc50000  sw          $a1, 0x0($a2)
    ctx->pc = 0x235600u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
label_235604:
    // 0x235604: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x235604u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
label_235608:
    // 0x235608: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x235608u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_23560c:
    // 0x23560c: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x23560cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_235610:
    // 0x235610: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x235610u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_235614:
    // 0x235614: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x235614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_235618:
    // 0x235618: 0xacc50008  sw          $a1, 0x8($a2)
    ctx->pc = 0x235618u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 5));
label_23561c:
    // 0x23561c: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x23561cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
label_235620:
    // 0x235620: 0xc6630000  lwc1        $f3, 0x0($s3)
    ctx->pc = 0x235620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_235624:
    // 0x235624: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x235624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_235628:
    // 0x235628: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x235628u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23562c:
    // 0x23562c: 0x4503005b  bc1tl       . + 4 + (0x5B << 2)
label_235630:
    if (ctx->pc == 0x235630u) {
        ctx->pc = 0x235630u;
            // 0x235630: 0x828300d2  lb          $v1, 0xD2($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 210)));
        ctx->pc = 0x235634u;
        goto label_235634;
    }
    ctx->pc = 0x23562Cu;
    {
        const bool branch_taken_0x23562c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23562c) {
            ctx->pc = 0x235630u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23562Cu;
            // 0x235630: 0x828300d2  lb          $v1, 0xD2($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 210)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23579Cu;
            goto label_23579c;
        }
    }
    ctx->pc = 0x235634u;
label_235634:
    // 0x235634: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x235634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_235638:
    // 0x235638: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x235638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_23563c:
    // 0x23563c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23563cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_235640:
    // 0x235640: 0x269201a0  addiu       $s2, $s4, 0x1A0
    ctx->pc = 0x235640u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 416));
label_235644:
    // 0x235644: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x235644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_235648:
    // 0x235648: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x235648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_23564c:
    // 0x23564c: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x23564cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_235650:
    // 0x235650: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x235650u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
label_235654:
    // 0x235654: 0xe68101a0  swc1        $f1, 0x1A0($s4)
    ctx->pc = 0x235654u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 416), bits); }
label_235658:
    // 0x235658: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x235658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23565c:
    // 0x23565c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x23565cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_235660:
    // 0x235660: 0xe68101a4  swc1        $f1, 0x1A4($s4)
    ctx->pc = 0x235660u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 420), bits); }
label_235664:
    // 0x235664: 0xe68201a8  swc1        $f2, 0x1A8($s4)
    ctx->pc = 0x235664u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 424), bits); }
label_235668:
    // 0x235668: 0xe68001ac  swc1        $f0, 0x1AC($s4)
    ctx->pc = 0x235668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 428), bits); }
label_23566c:
    // 0x23566c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23566cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_235670:
    // 0x235670: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x235670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_235674:
    // 0x235674: 0xc68301a0  lwc1        $f3, 0x1A0($s4)
    ctx->pc = 0x235674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_235678:
    // 0x235678: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x235678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_23567c:
    // 0x23567c: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x23567cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_235680:
    // 0x235680: 0x46021d01  sub.s       $f20, $f3, $f2
    ctx->pc = 0x235680u;
    ctx->f[20] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_235684:
    // 0x235684: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x235684u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
label_235688:
    // 0x235688: 0xe4410010  swc1        $f1, 0x10($v0)
    ctx->pc = 0x235688u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_23568c:
    // 0x23568c: 0xc68101a0  lwc1        $f1, 0x1A0($s4)
    ctx->pc = 0x23568cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_235690:
    // 0x235690: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x235690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_235694:
    // 0x235694: 0xe4410014  swc1        $f1, 0x14($v0)
    ctx->pc = 0x235694u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_235698:
    // 0x235698: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x235698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_23569c:
    // 0x23569c: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x23569cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2356a0:
    // 0x2356a0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2356a0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2356a4:
    // 0x2356a4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_2356a8:
    if (ctx->pc == 0x2356A8u) {
        ctx->pc = 0x2356A8u;
            // 0x2356a8: 0x2462001c  addiu       $v0, $v1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
        ctx->pc = 0x2356ACu;
        goto label_2356ac;
    }
    ctx->pc = 0x2356A4u;
    {
        const bool branch_taken_0x2356a4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2356A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2356A4u;
            // 0x2356a8: 0x2462001c  addiu       $v0, $v1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2356a4) {
            ctx->pc = 0x2356B4u;
            goto label_2356b4;
        }
    }
    ctx->pc = 0x2356ACu;
label_2356ac:
    // 0x2356ac: 0x4601a000  add.s       $f0, $f20, $f1
    ctx->pc = 0x2356acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_2356b0:
    // 0x2356b0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2356b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2356b4:
    // 0x2356b4: 0x8e82002c  lw          $v0, 0x2C($s4)
    ctx->pc = 0x2356b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_2356b8:
    // 0x2356b8: 0x26950028  addiu       $s5, $s4, 0x28
    ctx->pc = 0x2356b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
label_2356bc:
    // 0x2356bc: 0x18400020  blez        $v0, . + 4 + (0x20 << 2)
label_2356c0:
    if (ctx->pc == 0x2356C0u) {
        ctx->pc = 0x2356C0u;
            // 0x2356c0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2356C4u;
        goto label_2356c4;
    }
    ctx->pc = 0x2356BCu;
    {
        const bool branch_taken_0x2356bc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2356C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2356BCu;
            // 0x2356c0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2356bc) {
            ctx->pc = 0x235740u;
            goto label_235740;
        }
    }
    ctx->pc = 0x2356C4u;
label_2356c4:
    // 0x2356c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2356c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2356c8:
    // 0x2356c8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x2356c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_2356cc:
    // 0x2356cc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2356ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2356d0:
    // 0x2356d0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2356d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2356d4:
    // 0x2356d4: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x2356d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_2356d8:
    // 0x2356d8: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
label_2356dc:
    if (ctx->pc == 0x2356DCu) {
        ctx->pc = 0x2356DCu;
            // 0x2356dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2356E0u;
        goto label_2356e0;
    }
    ctx->pc = 0x2356D8u;
    {
        const bool branch_taken_0x2356d8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2356DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2356D8u;
            // 0x2356dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2356d8) {
            ctx->pc = 0x235718u;
            goto label_235718;
        }
    }
    ctx->pc = 0x2356E0u;
label_2356e0:
    // 0x2356e0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2356e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2356e4:
    // 0x2356e4: 0x0  nop
    ctx->pc = 0x2356e4u;
    // NOP
label_2356e8:
    // 0x2356e8: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x2356e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_2356ec:
    // 0x2356ec: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2356ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2356f0:
    // 0x2356f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2356f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2356f4:
    // 0x2356f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2356f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2356f8:
    // 0x2356f8: 0xc44000fc  lwc1        $f0, 0xFC($v0)
    ctx->pc = 0x2356f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2356fc:
    // 0x2356fc: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2356fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_235700:
    // 0x235700: 0xe44000fc  swc1        $f0, 0xFC($v0)
    ctx->pc = 0x235700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 252), bits); }
label_235704:
    // 0x235704: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x235704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_235708:
    // 0x235708: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x235708u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_23570c:
    // 0x23570c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_235710:
    if (ctx->pc == 0x235710u) {
        ctx->pc = 0x235710u;
            // 0x235710: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x235714u;
        goto label_235714;
    }
    ctx->pc = 0x23570Cu;
    {
        const bool branch_taken_0x23570c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23570Cu;
            // 0x235710: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23570c) {
            ctx->pc = 0x2356E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2356e8;
        }
    }
    ctx->pc = 0x235714u;
label_235714:
    // 0x235714: 0x0  nop
    ctx->pc = 0x235714u;
    // NOP
label_235718:
    // 0x235718: 0xc66c0004  lwc1        $f12, 0x4($s3)
    ctx->pc = 0x235718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_23571c:
    // 0x23571c: 0xc64d0004  lwc1        $f13, 0x4($s2)
    ctx->pc = 0x23571cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_235720:
    // 0x235720: 0xc08e350  jal         func_238D40
label_235724:
    if (ctx->pc == 0x235724u) {
        ctx->pc = 0x235724u;
            // 0x235724: 0x8e85006c  lw          $a1, 0x6C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
        ctx->pc = 0x235728u;
        goto label_235728;
    }
    ctx->pc = 0x235720u;
    SET_GPR_U32(ctx, 31, 0x235728u);
    ctx->pc = 0x235724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235720u;
            // 0x235724: 0x8e85006c  lw          $a1, 0x6C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238D40u;
    if (runtime->hasFunction(0x238D40u)) {
        auto targetFn = runtime->lookupFunction(0x238D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235728u; }
        if (ctx->pc != 0x235728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238D40_0x238d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235728u; }
        if (ctx->pc != 0x235728u) { return; }
    }
    ctx->pc = 0x235728u;
label_235728:
    // 0x235728: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x235728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_23572c:
    // 0x23572c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x23572cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_235730:
    // 0x235730: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x235730u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_235734:
    // 0x235734: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
label_235738:
    if (ctx->pc == 0x235738u) {
        ctx->pc = 0x235738u;
            // 0x235738: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x23573Cu;
        goto label_23573c;
    }
    ctx->pc = 0x235734u;
    {
        const bool branch_taken_0x235734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235734u;
            // 0x235738: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235734) {
            ctx->pc = 0x2356C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2356c8;
        }
    }
    ctx->pc = 0x23573Cu;
label_23573c:
    // 0x23573c: 0x0  nop
    ctx->pc = 0x23573cu;
    // NOP
label_235740:
    // 0x235740: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x235740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_235744:
    // 0x235744: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x235744u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_235748:
    // 0x235748: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x235748u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_23574c:
    // 0x23574c: 0x320f809  jalr        $t9
label_235750:
    if (ctx->pc == 0x235750u) {
        ctx->pc = 0x235750u;
            // 0x235750: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x235754u;
        goto label_235754;
    }
    ctx->pc = 0x23574Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x235754u);
        ctx->pc = 0x235750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23574Cu;
            // 0x235750: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x235754u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x235754u; }
            if (ctx->pc != 0x235754u) { return; }
        }
        }
    }
    ctx->pc = 0x235754u;
label_235754:
    // 0x235754: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x235754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_235758:
    // 0x235758: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x235758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_23575c:
    // 0x23575c: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x23575cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_235760:
    // 0x235760: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x235760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_235764:
    // 0x235764: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x235764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_235768:
    // 0x235768: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x235768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_23576c:
    // 0x23576c: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x23576cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_235770:
    // 0x235770: 0xe660000c  swc1        $f0, 0xC($s3)
    ctx->pc = 0x235770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_235774:
    // 0x235774: 0x8e83006c  lw          $v1, 0x6C($s4)
    ctx->pc = 0x235774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_235778:
    // 0x235778: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x235778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23577c:
    // 0x23577c: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x23577cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
label_235780:
    // 0x235780: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x235780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_235784:
    // 0x235784: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x235784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_235788:
    // 0x235788: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x235788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23578c:
    // 0x23578c: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x23578cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
label_235790:
    // 0x235790: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x235790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_235794:
    // 0x235794: 0xe460002c  swc1        $f0, 0x2C($v1)
    ctx->pc = 0x235794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
label_235798:
    // 0x235798: 0x828300d2  lb          $v1, 0xD2($s4)
    ctx->pc = 0x235798u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 210)));
label_23579c:
    // 0x23579c: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
label_2357a0:
    if (ctx->pc == 0x2357A0u) {
        ctx->pc = 0x2357A4u;
        goto label_2357a4;
    }
    ctx->pc = 0x23579Cu;
    {
        const bool branch_taken_0x23579c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23579c) {
            ctx->pc = 0x235850u;
            goto label_235850;
        }
    }
    ctx->pc = 0x2357A4u;
label_2357a4:
    // 0x2357a4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2357a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2357a8:
    // 0x2357a8: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x2357a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_2357ac:
    // 0x2357ac: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x2357acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_2357b0:
    // 0x2357b0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2357b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2357b4:
    // 0x2357b4: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x2357b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_2357b8:
    // 0x2357b8: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x2357b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2357bc:
    // 0x2357bc: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_2357c0:
    if (ctx->pc == 0x2357C0u) {
        ctx->pc = 0x2357C0u;
            // 0x2357c0: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x2357C4u;
        goto label_2357c4;
    }
    ctx->pc = 0x2357BCu;
    {
        const bool branch_taken_0x2357bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2357C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2357BCu;
            // 0x2357c0: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2357bc) {
            ctx->pc = 0x2357ECu;
            goto label_2357ec;
        }
    }
    ctx->pc = 0x2357C4u;
label_2357c4:
    // 0x2357c4: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x2357c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2357c8:
    // 0x2357c8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2357c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_2357cc:
    // 0x2357cc: 0x2463cc38  addiu       $v1, $v1, -0x33C8
    ctx->pc = 0x2357ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954040));
label_2357d0:
    // 0x2357d0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2357d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2357d4:
    // 0x2357d4: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2357d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_2357d8:
    // 0x2357d8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2357d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_2357dc:
    // 0x2357dc: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2357dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_2357e0:
    // 0x2357e0: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x2357e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_2357e4:
    // 0x2357e4: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x2357e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_2357e8:
    // 0x2357e8: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x2357e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_2357ec:
    // 0x2357ec: 0xae8000a4  sw          $zero, 0xA4($s4)
    ctx->pc = 0x2357ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 164), GPR_U32(ctx, 0));
label_2357f0:
    // 0x2357f0: 0x8e83002c  lw          $v1, 0x2C($s4)
    ctx->pc = 0x2357f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
label_2357f4:
    // 0x2357f4: 0x2472ffff  addiu       $s2, $v1, -0x1
    ctx->pc = 0x2357f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2357f8:
    // 0x2357f8: 0x6400015  bltz        $s2, . + 4 + (0x15 << 2)
label_2357fc:
    if (ctx->pc == 0x2357FCu) {
        ctx->pc = 0x2357FCu;
            // 0x2357fc: 0x26950028  addiu       $s5, $s4, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
        ctx->pc = 0x235800u;
        goto label_235800;
    }
    ctx->pc = 0x2357F8u;
    {
        const bool branch_taken_0x2357f8 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x2357FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2357F8u;
            // 0x2357fc: 0x26950028  addiu       $s5, $s4, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2357f8) {
            ctx->pc = 0x235850u;
            goto label_235850;
        }
    }
    ctx->pc = 0x235800u;
label_235800:
    // 0x235800: 0x128080  sll         $s0, $s2, 2
    ctx->pc = 0x235800u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_235804:
    // 0x235804: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x235804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_235808:
    // 0x235808: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x235808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
label_23580c:
    // 0x23580c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x23580cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_235810:
    // 0x235810: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x235810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_235814:
    // 0x235814: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x235814u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_235818:
    // 0x235818: 0xc08b8c8  jal         func_22E320
label_23581c:
    if (ctx->pc == 0x23581Cu) {
        ctx->pc = 0x23581Cu;
            // 0x23581c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x235820u;
        goto label_235820;
    }
    ctx->pc = 0x235818u;
    SET_GPR_U32(ctx, 31, 0x235820u);
    ctx->pc = 0x23581Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235818u;
            // 0x23581c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E320u;
    if (runtime->hasFunction(0x22E320u)) {
        auto targetFn = runtime->lookupFunction(0x22E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235820u; }
        if (ctx->pc != 0x235820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022E320_0x22e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x235820u; }
        if (ctx->pc != 0x235820u) { return; }
    }
    ctx->pc = 0x235820u;
label_235820:
    // 0x235820: 0x27a3008c  addiu       $v1, $sp, 0x8C
    ctx->pc = 0x235820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
label_235824:
    // 0x235824: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x235824u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_235828:
    // 0x235828: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_23582c:
    if (ctx->pc == 0x23582Cu) {
        ctx->pc = 0x235830u;
        goto label_235830;
    }
    ctx->pc = 0x235828u;
    {
        const bool branch_taken_0x235828 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x235828) {
            ctx->pc = 0x235840u;
            goto label_235840;
        }
    }
    ctx->pc = 0x235830u;
label_235830:
    // 0x235830: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x235830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_235834:
    // 0x235834: 0xc0906d8  jal         func_241B60
label_235838:
    if (ctx->pc == 0x235838u) {
        ctx->pc = 0x235838u;
            // 0x235838: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23583Cu;
        goto label_23583c;
    }
    ctx->pc = 0x235834u;
    SET_GPR_U32(ctx, 31, 0x23583Cu);
    ctx->pc = 0x235838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235834u;
            // 0x235838: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x241B60u;
    if (runtime->hasFunction(0x241B60u)) {
        auto targetFn = runtime->lookupFunction(0x241B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23583Cu; }
        if (ctx->pc != 0x23583Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00241B60_0x241b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23583Cu; }
        if (ctx->pc != 0x23583Cu) { return; }
    }
    ctx->pc = 0x23583Cu;
label_23583c:
    // 0x23583c: 0x0  nop
    ctx->pc = 0x23583cu;
    // NOP
label_235840:
    // 0x235840: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x235840u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_235844:
    // 0x235844: 0x641ffef  bgez        $s2, . + 4 + (-0x11 << 2)
label_235848:
    if (ctx->pc == 0x235848u) {
        ctx->pc = 0x235848u;
            // 0x235848: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->pc = 0x23584Cu;
        goto label_23584c;
    }
    ctx->pc = 0x235844u;
    {
        const bool branch_taken_0x235844 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x235848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235844u;
            // 0x235848: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235844) {
            ctx->pc = 0x235804u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_235804;
        }
    }
    ctx->pc = 0x23584Cu;
label_23584c:
    // 0x23584c: 0x0  nop
    ctx->pc = 0x23584cu;
    // NOP
label_235850:
    // 0x235850: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x235850u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_235854:
    // 0x235854: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x235854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_235858:
    // 0x235858: 0x8c84ea64  lw          $a0, -0x159C($a0)
    ctx->pc = 0x235858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961764)));
label_23585c:
    // 0x23585c: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x23585cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_235860:
    // 0x235860: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x235860u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_235864:
    // 0x235864: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x235864u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_235868:
    // 0x235868: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_23586c:
    if (ctx->pc == 0x23586Cu) {
        ctx->pc = 0x23586Cu;
            // 0x23586c: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x235870u;
        goto label_235870;
    }
    ctx->pc = 0x235868u;
    {
        const bool branch_taken_0x235868 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23586Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235868u;
            // 0x23586c: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235868) {
            ctx->pc = 0x235898u;
            goto label_235898;
        }
    }
    ctx->pc = 0x235870u;
label_235870:
    // 0x235870: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x235870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_235874:
    // 0x235874: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x235874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_235878:
    // 0x235878: 0x2463cc30  addiu       $v1, $v1, -0x33D0
    ctx->pc = 0x235878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954032));
label_23587c:
    // 0x23587c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x23587cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_235880:
    // 0x235880: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x235880u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_235884:
    // 0x235884: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x235884u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_235888:
    // 0x235888: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x235888u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_23588c:
    // 0x23588c: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x23588cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_235890:
    // 0x235890: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x235890u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_235894:
    // 0x235894: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x235894u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_235898:
    // 0x235898: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x235898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_23589c:
    // 0x23589c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x23589cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2358a0:
    // 0x2358a0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2358a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2358a4:
    // 0x2358a4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2358a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2358a8:
    // 0x2358a8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2358a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2358ac:
    // 0x2358ac: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2358acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2358b0:
    // 0x2358b0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2358b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2358b4:
    // 0x2358b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2358b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2358b8:
    // 0x2358b8: 0x3e00008  jr          $ra
label_2358bc:
    if (ctx->pc == 0x2358BCu) {
        ctx->pc = 0x2358BCu;
            // 0x2358bc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x2358C0u;
        goto label_2358c0;
    }
    ctx->pc = 0x2358B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2358BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2358B8u;
            // 0x2358bc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2358C0u;
label_2358c0:
    // 0x2358c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2358c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2358c4:
    // 0x2358c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2358c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2358c8:
    // 0x2358c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2358c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2358cc:
    // 0x2358cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2358ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2358d0:
    // 0x2358d0: 0x5200001b  beql        $s0, $zero, . + 4 + (0x1B << 2)
label_2358d4:
    if (ctx->pc == 0x2358D4u) {
        ctx->pc = 0x2358D4u;
            // 0x2358d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2358D8u;
        goto label_2358d8;
    }
    ctx->pc = 0x2358D0u;
    {
        const bool branch_taken_0x2358d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2358d0) {
            ctx->pc = 0x2358D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2358D0u;
            // 0x2358d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x235940u;
            goto label_235940;
        }
    }
    ctx->pc = 0x2358D8u;
label_2358d8:
    // 0x2358d8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2358d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2358dc:
    // 0x2358dc: 0x2442f100  addiu       $v0, $v0, -0xF00
    ctx->pc = 0x2358dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963456));
label_2358e0:
    // 0x2358e0: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_2358e4:
    if (ctx->pc == 0x2358E4u) {
        ctx->pc = 0x2358E4u;
            // 0x2358e4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2358E8u;
        goto label_2358e8;
    }
    ctx->pc = 0x2358E0u;
    {
        const bool branch_taken_0x2358e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2358E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2358E0u;
            // 0x2358e4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2358e0) {
            ctx->pc = 0x235914u;
            goto label_235914;
        }
    }
    ctx->pc = 0x2358E8u;
label_2358e8:
    // 0x2358e8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2358e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2358ec:
    // 0x2358ec: 0x2442f120  addiu       $v0, $v0, -0xEE0
    ctx->pc = 0x2358ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963488));
label_2358f0:
    // 0x2358f0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_2358f4:
    if (ctx->pc == 0x2358F4u) {
        ctx->pc = 0x2358F4u;
            // 0x2358f4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2358F8u;
        goto label_2358f8;
    }
    ctx->pc = 0x2358F0u;
    {
        const bool branch_taken_0x2358f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2358F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2358F0u;
            // 0x2358f4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2358f0) {
            ctx->pc = 0x235914u;
            goto label_235914;
        }
    }
    ctx->pc = 0x2358F8u;
label_2358f8:
    // 0x2358f8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2358f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2358fc:
    // 0x2358fc: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x2358fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_235900:
    // 0x235900: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_235904:
    if (ctx->pc == 0x235904u) {
        ctx->pc = 0x235904u;
            // 0x235904: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x235908u;
        goto label_235908;
    }
    ctx->pc = 0x235900u;
    {
        const bool branch_taken_0x235900 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x235904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235900u;
            // 0x235904: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235900) {
            ctx->pc = 0x235914u;
            goto label_235914;
        }
    }
    ctx->pc = 0x235908u;
label_235908:
    // 0x235908: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x235908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_23590c:
    // 0x23590c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x23590cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_235910:
    // 0x235910: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x235910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_235914:
    // 0x235914: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x235914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_235918:
    // 0x235918: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x235918u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_23591c:
    // 0x23591c: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_235920:
    if (ctx->pc == 0x235920u) {
        ctx->pc = 0x235924u;
        goto label_235924;
    }
    ctx->pc = 0x23591Cu;
    {
        const bool branch_taken_0x23591c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x23591c) {
            ctx->pc = 0x23593Cu;
            goto label_23593c;
        }
    }
    ctx->pc = 0x235924u;
label_235924:
    // 0x235924: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x235924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_235928:
    // 0x235928: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x235928u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_23592c:
    // 0x23592c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x23592cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_235930:
    // 0x235930: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x235930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_235934:
    // 0x235934: 0xc0a7ab4  jal         func_29EAD0
label_235938:
    if (ctx->pc == 0x235938u) {
        ctx->pc = 0x235938u;
            // 0x235938: 0x24070013  addiu       $a3, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->pc = 0x23593Cu;
        goto label_23593c;
    }
    ctx->pc = 0x235934u;
    SET_GPR_U32(ctx, 31, 0x23593Cu);
    ctx->pc = 0x235938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x235934u;
            // 0x235938: 0x24070013  addiu       $a3, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23593Cu; }
        if (ctx->pc != 0x23593Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23593Cu; }
        if (ctx->pc != 0x23593Cu) { return; }
    }
    ctx->pc = 0x23593Cu;
label_23593c:
    // 0x23593c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23593cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_235940:
    // 0x235940: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x235940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_235944:
    // 0x235944: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x235944u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_235948:
    // 0x235948: 0x3e00008  jr          $ra
label_23594c:
    if (ctx->pc == 0x23594Cu) {
        ctx->pc = 0x23594Cu;
            // 0x23594c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x235950u;
        goto label_fallthrough_0x235948;
    }
    ctx->pc = 0x235948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23594Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x235948u;
            // 0x23594c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x235948:
    ctx->pc = 0x235950u;
}
