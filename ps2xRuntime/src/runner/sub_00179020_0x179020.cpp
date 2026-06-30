#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00179020
// Address: 0x179020 - 0x179b88
void sub_00179020_0x179020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00179020_0x179020");
#endif

    switch (ctx->pc) {
        case 0x179020u: goto label_179020;
        case 0x179024u: goto label_179024;
        case 0x179028u: goto label_179028;
        case 0x17902cu: goto label_17902c;
        case 0x179030u: goto label_179030;
        case 0x179034u: goto label_179034;
        case 0x179038u: goto label_179038;
        case 0x17903cu: goto label_17903c;
        case 0x179040u: goto label_179040;
        case 0x179044u: goto label_179044;
        case 0x179048u: goto label_179048;
        case 0x17904cu: goto label_17904c;
        case 0x179050u: goto label_179050;
        case 0x179054u: goto label_179054;
        case 0x179058u: goto label_179058;
        case 0x17905cu: goto label_17905c;
        case 0x179060u: goto label_179060;
        case 0x179064u: goto label_179064;
        case 0x179068u: goto label_179068;
        case 0x17906cu: goto label_17906c;
        case 0x179070u: goto label_179070;
        case 0x179074u: goto label_179074;
        case 0x179078u: goto label_179078;
        case 0x17907cu: goto label_17907c;
        case 0x179080u: goto label_179080;
        case 0x179084u: goto label_179084;
        case 0x179088u: goto label_179088;
        case 0x17908cu: goto label_17908c;
        case 0x179090u: goto label_179090;
        case 0x179094u: goto label_179094;
        case 0x179098u: goto label_179098;
        case 0x17909cu: goto label_17909c;
        case 0x1790a0u: goto label_1790a0;
        case 0x1790a4u: goto label_1790a4;
        case 0x1790a8u: goto label_1790a8;
        case 0x1790acu: goto label_1790ac;
        case 0x1790b0u: goto label_1790b0;
        case 0x1790b4u: goto label_1790b4;
        case 0x1790b8u: goto label_1790b8;
        case 0x1790bcu: goto label_1790bc;
        case 0x1790c0u: goto label_1790c0;
        case 0x1790c4u: goto label_1790c4;
        case 0x1790c8u: goto label_1790c8;
        case 0x1790ccu: goto label_1790cc;
        case 0x1790d0u: goto label_1790d0;
        case 0x1790d4u: goto label_1790d4;
        case 0x1790d8u: goto label_1790d8;
        case 0x1790dcu: goto label_1790dc;
        case 0x1790e0u: goto label_1790e0;
        case 0x1790e4u: goto label_1790e4;
        case 0x1790e8u: goto label_1790e8;
        case 0x1790ecu: goto label_1790ec;
        case 0x1790f0u: goto label_1790f0;
        case 0x1790f4u: goto label_1790f4;
        case 0x1790f8u: goto label_1790f8;
        case 0x1790fcu: goto label_1790fc;
        case 0x179100u: goto label_179100;
        case 0x179104u: goto label_179104;
        case 0x179108u: goto label_179108;
        case 0x17910cu: goto label_17910c;
        case 0x179110u: goto label_179110;
        case 0x179114u: goto label_179114;
        case 0x179118u: goto label_179118;
        case 0x17911cu: goto label_17911c;
        case 0x179120u: goto label_179120;
        case 0x179124u: goto label_179124;
        case 0x179128u: goto label_179128;
        case 0x17912cu: goto label_17912c;
        case 0x179130u: goto label_179130;
        case 0x179134u: goto label_179134;
        case 0x179138u: goto label_179138;
        case 0x17913cu: goto label_17913c;
        case 0x179140u: goto label_179140;
        case 0x179144u: goto label_179144;
        case 0x179148u: goto label_179148;
        case 0x17914cu: goto label_17914c;
        case 0x179150u: goto label_179150;
        case 0x179154u: goto label_179154;
        case 0x179158u: goto label_179158;
        case 0x17915cu: goto label_17915c;
        case 0x179160u: goto label_179160;
        case 0x179164u: goto label_179164;
        case 0x179168u: goto label_179168;
        case 0x17916cu: goto label_17916c;
        case 0x179170u: goto label_179170;
        case 0x179174u: goto label_179174;
        case 0x179178u: goto label_179178;
        case 0x17917cu: goto label_17917c;
        case 0x179180u: goto label_179180;
        case 0x179184u: goto label_179184;
        case 0x179188u: goto label_179188;
        case 0x17918cu: goto label_17918c;
        case 0x179190u: goto label_179190;
        case 0x179194u: goto label_179194;
        case 0x179198u: goto label_179198;
        case 0x17919cu: goto label_17919c;
        case 0x1791a0u: goto label_1791a0;
        case 0x1791a4u: goto label_1791a4;
        case 0x1791a8u: goto label_1791a8;
        case 0x1791acu: goto label_1791ac;
        case 0x1791b0u: goto label_1791b0;
        case 0x1791b4u: goto label_1791b4;
        case 0x1791b8u: goto label_1791b8;
        case 0x1791bcu: goto label_1791bc;
        case 0x1791c0u: goto label_1791c0;
        case 0x1791c4u: goto label_1791c4;
        case 0x1791c8u: goto label_1791c8;
        case 0x1791ccu: goto label_1791cc;
        case 0x1791d0u: goto label_1791d0;
        case 0x1791d4u: goto label_1791d4;
        case 0x1791d8u: goto label_1791d8;
        case 0x1791dcu: goto label_1791dc;
        case 0x1791e0u: goto label_1791e0;
        case 0x1791e4u: goto label_1791e4;
        case 0x1791e8u: goto label_1791e8;
        case 0x1791ecu: goto label_1791ec;
        case 0x1791f0u: goto label_1791f0;
        case 0x1791f4u: goto label_1791f4;
        case 0x1791f8u: goto label_1791f8;
        case 0x1791fcu: goto label_1791fc;
        case 0x179200u: goto label_179200;
        case 0x179204u: goto label_179204;
        case 0x179208u: goto label_179208;
        case 0x17920cu: goto label_17920c;
        case 0x179210u: goto label_179210;
        case 0x179214u: goto label_179214;
        case 0x179218u: goto label_179218;
        case 0x17921cu: goto label_17921c;
        case 0x179220u: goto label_179220;
        case 0x179224u: goto label_179224;
        case 0x179228u: goto label_179228;
        case 0x17922cu: goto label_17922c;
        case 0x179230u: goto label_179230;
        case 0x179234u: goto label_179234;
        case 0x179238u: goto label_179238;
        case 0x17923cu: goto label_17923c;
        case 0x179240u: goto label_179240;
        case 0x179244u: goto label_179244;
        case 0x179248u: goto label_179248;
        case 0x17924cu: goto label_17924c;
        case 0x179250u: goto label_179250;
        case 0x179254u: goto label_179254;
        case 0x179258u: goto label_179258;
        case 0x17925cu: goto label_17925c;
        case 0x179260u: goto label_179260;
        case 0x179264u: goto label_179264;
        case 0x179268u: goto label_179268;
        case 0x17926cu: goto label_17926c;
        case 0x179270u: goto label_179270;
        case 0x179274u: goto label_179274;
        case 0x179278u: goto label_179278;
        case 0x17927cu: goto label_17927c;
        case 0x179280u: goto label_179280;
        case 0x179284u: goto label_179284;
        case 0x179288u: goto label_179288;
        case 0x17928cu: goto label_17928c;
        case 0x179290u: goto label_179290;
        case 0x179294u: goto label_179294;
        case 0x179298u: goto label_179298;
        case 0x17929cu: goto label_17929c;
        case 0x1792a0u: goto label_1792a0;
        case 0x1792a4u: goto label_1792a4;
        case 0x1792a8u: goto label_1792a8;
        case 0x1792acu: goto label_1792ac;
        case 0x1792b0u: goto label_1792b0;
        case 0x1792b4u: goto label_1792b4;
        case 0x1792b8u: goto label_1792b8;
        case 0x1792bcu: goto label_1792bc;
        case 0x1792c0u: goto label_1792c0;
        case 0x1792c4u: goto label_1792c4;
        case 0x1792c8u: goto label_1792c8;
        case 0x1792ccu: goto label_1792cc;
        case 0x1792d0u: goto label_1792d0;
        case 0x1792d4u: goto label_1792d4;
        case 0x1792d8u: goto label_1792d8;
        case 0x1792dcu: goto label_1792dc;
        case 0x1792e0u: goto label_1792e0;
        case 0x1792e4u: goto label_1792e4;
        case 0x1792e8u: goto label_1792e8;
        case 0x1792ecu: goto label_1792ec;
        case 0x1792f0u: goto label_1792f0;
        case 0x1792f4u: goto label_1792f4;
        case 0x1792f8u: goto label_1792f8;
        case 0x1792fcu: goto label_1792fc;
        case 0x179300u: goto label_179300;
        case 0x179304u: goto label_179304;
        case 0x179308u: goto label_179308;
        case 0x17930cu: goto label_17930c;
        case 0x179310u: goto label_179310;
        case 0x179314u: goto label_179314;
        case 0x179318u: goto label_179318;
        case 0x17931cu: goto label_17931c;
        case 0x179320u: goto label_179320;
        case 0x179324u: goto label_179324;
        case 0x179328u: goto label_179328;
        case 0x17932cu: goto label_17932c;
        case 0x179330u: goto label_179330;
        case 0x179334u: goto label_179334;
        case 0x179338u: goto label_179338;
        case 0x17933cu: goto label_17933c;
        case 0x179340u: goto label_179340;
        case 0x179344u: goto label_179344;
        case 0x179348u: goto label_179348;
        case 0x17934cu: goto label_17934c;
        case 0x179350u: goto label_179350;
        case 0x179354u: goto label_179354;
        case 0x179358u: goto label_179358;
        case 0x17935cu: goto label_17935c;
        case 0x179360u: goto label_179360;
        case 0x179364u: goto label_179364;
        case 0x179368u: goto label_179368;
        case 0x17936cu: goto label_17936c;
        case 0x179370u: goto label_179370;
        case 0x179374u: goto label_179374;
        case 0x179378u: goto label_179378;
        case 0x17937cu: goto label_17937c;
        case 0x179380u: goto label_179380;
        case 0x179384u: goto label_179384;
        case 0x179388u: goto label_179388;
        case 0x17938cu: goto label_17938c;
        case 0x179390u: goto label_179390;
        case 0x179394u: goto label_179394;
        case 0x179398u: goto label_179398;
        case 0x17939cu: goto label_17939c;
        case 0x1793a0u: goto label_1793a0;
        case 0x1793a4u: goto label_1793a4;
        case 0x1793a8u: goto label_1793a8;
        case 0x1793acu: goto label_1793ac;
        case 0x1793b0u: goto label_1793b0;
        case 0x1793b4u: goto label_1793b4;
        case 0x1793b8u: goto label_1793b8;
        case 0x1793bcu: goto label_1793bc;
        case 0x1793c0u: goto label_1793c0;
        case 0x1793c4u: goto label_1793c4;
        case 0x1793c8u: goto label_1793c8;
        case 0x1793ccu: goto label_1793cc;
        case 0x1793d0u: goto label_1793d0;
        case 0x1793d4u: goto label_1793d4;
        case 0x1793d8u: goto label_1793d8;
        case 0x1793dcu: goto label_1793dc;
        case 0x1793e0u: goto label_1793e0;
        case 0x1793e4u: goto label_1793e4;
        case 0x1793e8u: goto label_1793e8;
        case 0x1793ecu: goto label_1793ec;
        case 0x1793f0u: goto label_1793f0;
        case 0x1793f4u: goto label_1793f4;
        case 0x1793f8u: goto label_1793f8;
        case 0x1793fcu: goto label_1793fc;
        case 0x179400u: goto label_179400;
        case 0x179404u: goto label_179404;
        case 0x179408u: goto label_179408;
        case 0x17940cu: goto label_17940c;
        case 0x179410u: goto label_179410;
        case 0x179414u: goto label_179414;
        case 0x179418u: goto label_179418;
        case 0x17941cu: goto label_17941c;
        case 0x179420u: goto label_179420;
        case 0x179424u: goto label_179424;
        case 0x179428u: goto label_179428;
        case 0x17942cu: goto label_17942c;
        case 0x179430u: goto label_179430;
        case 0x179434u: goto label_179434;
        case 0x179438u: goto label_179438;
        case 0x17943cu: goto label_17943c;
        case 0x179440u: goto label_179440;
        case 0x179444u: goto label_179444;
        case 0x179448u: goto label_179448;
        case 0x17944cu: goto label_17944c;
        case 0x179450u: goto label_179450;
        case 0x179454u: goto label_179454;
        case 0x179458u: goto label_179458;
        case 0x17945cu: goto label_17945c;
        case 0x179460u: goto label_179460;
        case 0x179464u: goto label_179464;
        case 0x179468u: goto label_179468;
        case 0x17946cu: goto label_17946c;
        case 0x179470u: goto label_179470;
        case 0x179474u: goto label_179474;
        case 0x179478u: goto label_179478;
        case 0x17947cu: goto label_17947c;
        case 0x179480u: goto label_179480;
        case 0x179484u: goto label_179484;
        case 0x179488u: goto label_179488;
        case 0x17948cu: goto label_17948c;
        case 0x179490u: goto label_179490;
        case 0x179494u: goto label_179494;
        case 0x179498u: goto label_179498;
        case 0x17949cu: goto label_17949c;
        case 0x1794a0u: goto label_1794a0;
        case 0x1794a4u: goto label_1794a4;
        case 0x1794a8u: goto label_1794a8;
        case 0x1794acu: goto label_1794ac;
        case 0x1794b0u: goto label_1794b0;
        case 0x1794b4u: goto label_1794b4;
        case 0x1794b8u: goto label_1794b8;
        case 0x1794bcu: goto label_1794bc;
        case 0x1794c0u: goto label_1794c0;
        case 0x1794c4u: goto label_1794c4;
        case 0x1794c8u: goto label_1794c8;
        case 0x1794ccu: goto label_1794cc;
        case 0x1794d0u: goto label_1794d0;
        case 0x1794d4u: goto label_1794d4;
        case 0x1794d8u: goto label_1794d8;
        case 0x1794dcu: goto label_1794dc;
        case 0x1794e0u: goto label_1794e0;
        case 0x1794e4u: goto label_1794e4;
        case 0x1794e8u: goto label_1794e8;
        case 0x1794ecu: goto label_1794ec;
        case 0x1794f0u: goto label_1794f0;
        case 0x1794f4u: goto label_1794f4;
        case 0x1794f8u: goto label_1794f8;
        case 0x1794fcu: goto label_1794fc;
        case 0x179500u: goto label_179500;
        case 0x179504u: goto label_179504;
        case 0x179508u: goto label_179508;
        case 0x17950cu: goto label_17950c;
        case 0x179510u: goto label_179510;
        case 0x179514u: goto label_179514;
        case 0x179518u: goto label_179518;
        case 0x17951cu: goto label_17951c;
        case 0x179520u: goto label_179520;
        case 0x179524u: goto label_179524;
        case 0x179528u: goto label_179528;
        case 0x17952cu: goto label_17952c;
        case 0x179530u: goto label_179530;
        case 0x179534u: goto label_179534;
        case 0x179538u: goto label_179538;
        case 0x17953cu: goto label_17953c;
        case 0x179540u: goto label_179540;
        case 0x179544u: goto label_179544;
        case 0x179548u: goto label_179548;
        case 0x17954cu: goto label_17954c;
        case 0x179550u: goto label_179550;
        case 0x179554u: goto label_179554;
        case 0x179558u: goto label_179558;
        case 0x17955cu: goto label_17955c;
        case 0x179560u: goto label_179560;
        case 0x179564u: goto label_179564;
        case 0x179568u: goto label_179568;
        case 0x17956cu: goto label_17956c;
        case 0x179570u: goto label_179570;
        case 0x179574u: goto label_179574;
        case 0x179578u: goto label_179578;
        case 0x17957cu: goto label_17957c;
        case 0x179580u: goto label_179580;
        case 0x179584u: goto label_179584;
        case 0x179588u: goto label_179588;
        case 0x17958cu: goto label_17958c;
        case 0x179590u: goto label_179590;
        case 0x179594u: goto label_179594;
        case 0x179598u: goto label_179598;
        case 0x17959cu: goto label_17959c;
        case 0x1795a0u: goto label_1795a0;
        case 0x1795a4u: goto label_1795a4;
        case 0x1795a8u: goto label_1795a8;
        case 0x1795acu: goto label_1795ac;
        case 0x1795b0u: goto label_1795b0;
        case 0x1795b4u: goto label_1795b4;
        case 0x1795b8u: goto label_1795b8;
        case 0x1795bcu: goto label_1795bc;
        case 0x1795c0u: goto label_1795c0;
        case 0x1795c4u: goto label_1795c4;
        case 0x1795c8u: goto label_1795c8;
        case 0x1795ccu: goto label_1795cc;
        case 0x1795d0u: goto label_1795d0;
        case 0x1795d4u: goto label_1795d4;
        case 0x1795d8u: goto label_1795d8;
        case 0x1795dcu: goto label_1795dc;
        case 0x1795e0u: goto label_1795e0;
        case 0x1795e4u: goto label_1795e4;
        case 0x1795e8u: goto label_1795e8;
        case 0x1795ecu: goto label_1795ec;
        case 0x1795f0u: goto label_1795f0;
        case 0x1795f4u: goto label_1795f4;
        case 0x1795f8u: goto label_1795f8;
        case 0x1795fcu: goto label_1795fc;
        case 0x179600u: goto label_179600;
        case 0x179604u: goto label_179604;
        case 0x179608u: goto label_179608;
        case 0x17960cu: goto label_17960c;
        case 0x179610u: goto label_179610;
        case 0x179614u: goto label_179614;
        case 0x179618u: goto label_179618;
        case 0x17961cu: goto label_17961c;
        case 0x179620u: goto label_179620;
        case 0x179624u: goto label_179624;
        case 0x179628u: goto label_179628;
        case 0x17962cu: goto label_17962c;
        case 0x179630u: goto label_179630;
        case 0x179634u: goto label_179634;
        case 0x179638u: goto label_179638;
        case 0x17963cu: goto label_17963c;
        case 0x179640u: goto label_179640;
        case 0x179644u: goto label_179644;
        case 0x179648u: goto label_179648;
        case 0x17964cu: goto label_17964c;
        case 0x179650u: goto label_179650;
        case 0x179654u: goto label_179654;
        case 0x179658u: goto label_179658;
        case 0x17965cu: goto label_17965c;
        case 0x179660u: goto label_179660;
        case 0x179664u: goto label_179664;
        case 0x179668u: goto label_179668;
        case 0x17966cu: goto label_17966c;
        case 0x179670u: goto label_179670;
        case 0x179674u: goto label_179674;
        case 0x179678u: goto label_179678;
        case 0x17967cu: goto label_17967c;
        case 0x179680u: goto label_179680;
        case 0x179684u: goto label_179684;
        case 0x179688u: goto label_179688;
        case 0x17968cu: goto label_17968c;
        case 0x179690u: goto label_179690;
        case 0x179694u: goto label_179694;
        case 0x179698u: goto label_179698;
        case 0x17969cu: goto label_17969c;
        case 0x1796a0u: goto label_1796a0;
        case 0x1796a4u: goto label_1796a4;
        case 0x1796a8u: goto label_1796a8;
        case 0x1796acu: goto label_1796ac;
        case 0x1796b0u: goto label_1796b0;
        case 0x1796b4u: goto label_1796b4;
        case 0x1796b8u: goto label_1796b8;
        case 0x1796bcu: goto label_1796bc;
        case 0x1796c0u: goto label_1796c0;
        case 0x1796c4u: goto label_1796c4;
        case 0x1796c8u: goto label_1796c8;
        case 0x1796ccu: goto label_1796cc;
        case 0x1796d0u: goto label_1796d0;
        case 0x1796d4u: goto label_1796d4;
        case 0x1796d8u: goto label_1796d8;
        case 0x1796dcu: goto label_1796dc;
        case 0x1796e0u: goto label_1796e0;
        case 0x1796e4u: goto label_1796e4;
        case 0x1796e8u: goto label_1796e8;
        case 0x1796ecu: goto label_1796ec;
        case 0x1796f0u: goto label_1796f0;
        case 0x1796f4u: goto label_1796f4;
        case 0x1796f8u: goto label_1796f8;
        case 0x1796fcu: goto label_1796fc;
        case 0x179700u: goto label_179700;
        case 0x179704u: goto label_179704;
        case 0x179708u: goto label_179708;
        case 0x17970cu: goto label_17970c;
        case 0x179710u: goto label_179710;
        case 0x179714u: goto label_179714;
        case 0x179718u: goto label_179718;
        case 0x17971cu: goto label_17971c;
        case 0x179720u: goto label_179720;
        case 0x179724u: goto label_179724;
        case 0x179728u: goto label_179728;
        case 0x17972cu: goto label_17972c;
        case 0x179730u: goto label_179730;
        case 0x179734u: goto label_179734;
        case 0x179738u: goto label_179738;
        case 0x17973cu: goto label_17973c;
        case 0x179740u: goto label_179740;
        case 0x179744u: goto label_179744;
        case 0x179748u: goto label_179748;
        case 0x17974cu: goto label_17974c;
        case 0x179750u: goto label_179750;
        case 0x179754u: goto label_179754;
        case 0x179758u: goto label_179758;
        case 0x17975cu: goto label_17975c;
        case 0x179760u: goto label_179760;
        case 0x179764u: goto label_179764;
        case 0x179768u: goto label_179768;
        case 0x17976cu: goto label_17976c;
        case 0x179770u: goto label_179770;
        case 0x179774u: goto label_179774;
        case 0x179778u: goto label_179778;
        case 0x17977cu: goto label_17977c;
        case 0x179780u: goto label_179780;
        case 0x179784u: goto label_179784;
        case 0x179788u: goto label_179788;
        case 0x17978cu: goto label_17978c;
        case 0x179790u: goto label_179790;
        case 0x179794u: goto label_179794;
        case 0x179798u: goto label_179798;
        case 0x17979cu: goto label_17979c;
        case 0x1797a0u: goto label_1797a0;
        case 0x1797a4u: goto label_1797a4;
        case 0x1797a8u: goto label_1797a8;
        case 0x1797acu: goto label_1797ac;
        case 0x1797b0u: goto label_1797b0;
        case 0x1797b4u: goto label_1797b4;
        case 0x1797b8u: goto label_1797b8;
        case 0x1797bcu: goto label_1797bc;
        case 0x1797c0u: goto label_1797c0;
        case 0x1797c4u: goto label_1797c4;
        case 0x1797c8u: goto label_1797c8;
        case 0x1797ccu: goto label_1797cc;
        case 0x1797d0u: goto label_1797d0;
        case 0x1797d4u: goto label_1797d4;
        case 0x1797d8u: goto label_1797d8;
        case 0x1797dcu: goto label_1797dc;
        case 0x1797e0u: goto label_1797e0;
        case 0x1797e4u: goto label_1797e4;
        case 0x1797e8u: goto label_1797e8;
        case 0x1797ecu: goto label_1797ec;
        case 0x1797f0u: goto label_1797f0;
        case 0x1797f4u: goto label_1797f4;
        case 0x1797f8u: goto label_1797f8;
        case 0x1797fcu: goto label_1797fc;
        case 0x179800u: goto label_179800;
        case 0x179804u: goto label_179804;
        case 0x179808u: goto label_179808;
        case 0x17980cu: goto label_17980c;
        case 0x179810u: goto label_179810;
        case 0x179814u: goto label_179814;
        case 0x179818u: goto label_179818;
        case 0x17981cu: goto label_17981c;
        case 0x179820u: goto label_179820;
        case 0x179824u: goto label_179824;
        case 0x179828u: goto label_179828;
        case 0x17982cu: goto label_17982c;
        case 0x179830u: goto label_179830;
        case 0x179834u: goto label_179834;
        case 0x179838u: goto label_179838;
        case 0x17983cu: goto label_17983c;
        case 0x179840u: goto label_179840;
        case 0x179844u: goto label_179844;
        case 0x179848u: goto label_179848;
        case 0x17984cu: goto label_17984c;
        case 0x179850u: goto label_179850;
        case 0x179854u: goto label_179854;
        case 0x179858u: goto label_179858;
        case 0x17985cu: goto label_17985c;
        case 0x179860u: goto label_179860;
        case 0x179864u: goto label_179864;
        case 0x179868u: goto label_179868;
        case 0x17986cu: goto label_17986c;
        case 0x179870u: goto label_179870;
        case 0x179874u: goto label_179874;
        case 0x179878u: goto label_179878;
        case 0x17987cu: goto label_17987c;
        case 0x179880u: goto label_179880;
        case 0x179884u: goto label_179884;
        case 0x179888u: goto label_179888;
        case 0x17988cu: goto label_17988c;
        case 0x179890u: goto label_179890;
        case 0x179894u: goto label_179894;
        case 0x179898u: goto label_179898;
        case 0x17989cu: goto label_17989c;
        case 0x1798a0u: goto label_1798a0;
        case 0x1798a4u: goto label_1798a4;
        case 0x1798a8u: goto label_1798a8;
        case 0x1798acu: goto label_1798ac;
        case 0x1798b0u: goto label_1798b0;
        case 0x1798b4u: goto label_1798b4;
        case 0x1798b8u: goto label_1798b8;
        case 0x1798bcu: goto label_1798bc;
        case 0x1798c0u: goto label_1798c0;
        case 0x1798c4u: goto label_1798c4;
        case 0x1798c8u: goto label_1798c8;
        case 0x1798ccu: goto label_1798cc;
        case 0x1798d0u: goto label_1798d0;
        case 0x1798d4u: goto label_1798d4;
        case 0x1798d8u: goto label_1798d8;
        case 0x1798dcu: goto label_1798dc;
        case 0x1798e0u: goto label_1798e0;
        case 0x1798e4u: goto label_1798e4;
        case 0x1798e8u: goto label_1798e8;
        case 0x1798ecu: goto label_1798ec;
        case 0x1798f0u: goto label_1798f0;
        case 0x1798f4u: goto label_1798f4;
        case 0x1798f8u: goto label_1798f8;
        case 0x1798fcu: goto label_1798fc;
        case 0x179900u: goto label_179900;
        case 0x179904u: goto label_179904;
        case 0x179908u: goto label_179908;
        case 0x17990cu: goto label_17990c;
        case 0x179910u: goto label_179910;
        case 0x179914u: goto label_179914;
        case 0x179918u: goto label_179918;
        case 0x17991cu: goto label_17991c;
        case 0x179920u: goto label_179920;
        case 0x179924u: goto label_179924;
        case 0x179928u: goto label_179928;
        case 0x17992cu: goto label_17992c;
        case 0x179930u: goto label_179930;
        case 0x179934u: goto label_179934;
        case 0x179938u: goto label_179938;
        case 0x17993cu: goto label_17993c;
        case 0x179940u: goto label_179940;
        case 0x179944u: goto label_179944;
        case 0x179948u: goto label_179948;
        case 0x17994cu: goto label_17994c;
        case 0x179950u: goto label_179950;
        case 0x179954u: goto label_179954;
        case 0x179958u: goto label_179958;
        case 0x17995cu: goto label_17995c;
        case 0x179960u: goto label_179960;
        case 0x179964u: goto label_179964;
        case 0x179968u: goto label_179968;
        case 0x17996cu: goto label_17996c;
        case 0x179970u: goto label_179970;
        case 0x179974u: goto label_179974;
        case 0x179978u: goto label_179978;
        case 0x17997cu: goto label_17997c;
        case 0x179980u: goto label_179980;
        case 0x179984u: goto label_179984;
        case 0x179988u: goto label_179988;
        case 0x17998cu: goto label_17998c;
        case 0x179990u: goto label_179990;
        case 0x179994u: goto label_179994;
        case 0x179998u: goto label_179998;
        case 0x17999cu: goto label_17999c;
        case 0x1799a0u: goto label_1799a0;
        case 0x1799a4u: goto label_1799a4;
        case 0x1799a8u: goto label_1799a8;
        case 0x1799acu: goto label_1799ac;
        case 0x1799b0u: goto label_1799b0;
        case 0x1799b4u: goto label_1799b4;
        case 0x1799b8u: goto label_1799b8;
        case 0x1799bcu: goto label_1799bc;
        case 0x1799c0u: goto label_1799c0;
        case 0x1799c4u: goto label_1799c4;
        case 0x1799c8u: goto label_1799c8;
        case 0x1799ccu: goto label_1799cc;
        case 0x1799d0u: goto label_1799d0;
        case 0x1799d4u: goto label_1799d4;
        case 0x1799d8u: goto label_1799d8;
        case 0x1799dcu: goto label_1799dc;
        case 0x1799e0u: goto label_1799e0;
        case 0x1799e4u: goto label_1799e4;
        case 0x1799e8u: goto label_1799e8;
        case 0x1799ecu: goto label_1799ec;
        case 0x1799f0u: goto label_1799f0;
        case 0x1799f4u: goto label_1799f4;
        case 0x1799f8u: goto label_1799f8;
        case 0x1799fcu: goto label_1799fc;
        case 0x179a00u: goto label_179a00;
        case 0x179a04u: goto label_179a04;
        case 0x179a08u: goto label_179a08;
        case 0x179a0cu: goto label_179a0c;
        case 0x179a10u: goto label_179a10;
        case 0x179a14u: goto label_179a14;
        case 0x179a18u: goto label_179a18;
        case 0x179a1cu: goto label_179a1c;
        case 0x179a20u: goto label_179a20;
        case 0x179a24u: goto label_179a24;
        case 0x179a28u: goto label_179a28;
        case 0x179a2cu: goto label_179a2c;
        case 0x179a30u: goto label_179a30;
        case 0x179a34u: goto label_179a34;
        case 0x179a38u: goto label_179a38;
        case 0x179a3cu: goto label_179a3c;
        case 0x179a40u: goto label_179a40;
        case 0x179a44u: goto label_179a44;
        case 0x179a48u: goto label_179a48;
        case 0x179a4cu: goto label_179a4c;
        case 0x179a50u: goto label_179a50;
        case 0x179a54u: goto label_179a54;
        case 0x179a58u: goto label_179a58;
        case 0x179a5cu: goto label_179a5c;
        case 0x179a60u: goto label_179a60;
        case 0x179a64u: goto label_179a64;
        case 0x179a68u: goto label_179a68;
        case 0x179a6cu: goto label_179a6c;
        case 0x179a70u: goto label_179a70;
        case 0x179a74u: goto label_179a74;
        case 0x179a78u: goto label_179a78;
        case 0x179a7cu: goto label_179a7c;
        case 0x179a80u: goto label_179a80;
        case 0x179a84u: goto label_179a84;
        case 0x179a88u: goto label_179a88;
        case 0x179a8cu: goto label_179a8c;
        case 0x179a90u: goto label_179a90;
        case 0x179a94u: goto label_179a94;
        case 0x179a98u: goto label_179a98;
        case 0x179a9cu: goto label_179a9c;
        case 0x179aa0u: goto label_179aa0;
        case 0x179aa4u: goto label_179aa4;
        case 0x179aa8u: goto label_179aa8;
        case 0x179aacu: goto label_179aac;
        case 0x179ab0u: goto label_179ab0;
        case 0x179ab4u: goto label_179ab4;
        case 0x179ab8u: goto label_179ab8;
        case 0x179abcu: goto label_179abc;
        case 0x179ac0u: goto label_179ac0;
        case 0x179ac4u: goto label_179ac4;
        case 0x179ac8u: goto label_179ac8;
        case 0x179accu: goto label_179acc;
        case 0x179ad0u: goto label_179ad0;
        case 0x179ad4u: goto label_179ad4;
        case 0x179ad8u: goto label_179ad8;
        case 0x179adcu: goto label_179adc;
        case 0x179ae0u: goto label_179ae0;
        case 0x179ae4u: goto label_179ae4;
        case 0x179ae8u: goto label_179ae8;
        case 0x179aecu: goto label_179aec;
        case 0x179af0u: goto label_179af0;
        case 0x179af4u: goto label_179af4;
        case 0x179af8u: goto label_179af8;
        case 0x179afcu: goto label_179afc;
        case 0x179b00u: goto label_179b00;
        case 0x179b04u: goto label_179b04;
        case 0x179b08u: goto label_179b08;
        case 0x179b0cu: goto label_179b0c;
        case 0x179b10u: goto label_179b10;
        case 0x179b14u: goto label_179b14;
        case 0x179b18u: goto label_179b18;
        case 0x179b1cu: goto label_179b1c;
        case 0x179b20u: goto label_179b20;
        case 0x179b24u: goto label_179b24;
        case 0x179b28u: goto label_179b28;
        case 0x179b2cu: goto label_179b2c;
        case 0x179b30u: goto label_179b30;
        case 0x179b34u: goto label_179b34;
        case 0x179b38u: goto label_179b38;
        case 0x179b3cu: goto label_179b3c;
        case 0x179b40u: goto label_179b40;
        case 0x179b44u: goto label_179b44;
        case 0x179b48u: goto label_179b48;
        case 0x179b4cu: goto label_179b4c;
        case 0x179b50u: goto label_179b50;
        case 0x179b54u: goto label_179b54;
        case 0x179b58u: goto label_179b58;
        case 0x179b5cu: goto label_179b5c;
        case 0x179b60u: goto label_179b60;
        case 0x179b64u: goto label_179b64;
        case 0x179b68u: goto label_179b68;
        case 0x179b6cu: goto label_179b6c;
        case 0x179b70u: goto label_179b70;
        case 0x179b74u: goto label_179b74;
        case 0x179b78u: goto label_179b78;
        case 0x179b7cu: goto label_179b7c;
        case 0x179b80u: goto label_179b80;
        case 0x179b84u: goto label_179b84;
        default: break;
    }

    ctx->pc = 0x179020u;

label_179020:
    // 0x179020: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x179020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
label_179024:
    // 0x179024: 0xffb00260  sd          $s0, 0x260($sp)
    ctx->pc = 0x179024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 16));
label_179028:
    // 0x179028: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x179028u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17902c:
    // 0x17902c: 0xffb10268  sd          $s1, 0x268($sp)
    ctx->pc = 0x17902cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 17));
label_179030:
    // 0x179030: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_179034:
    if (ctx->pc == 0x179034u) {
        ctx->pc = 0x179034u;
            // 0x179034: 0xffbf0270  sd          $ra, 0x270($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 31));
        ctx->pc = 0x179038u;
        goto label_179038;
    }
    ctx->pc = 0x179030u;
    {
        const bool branch_taken_0x179030 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x179034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179030u;
            // 0x179034: 0xffbf0270  sd          $ra, 0x270($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179030) {
            ctx->pc = 0x179048u;
            goto label_179048;
        }
    }
    ctx->pc = 0x179038u;
label_179038:
    // 0x179038: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x179038u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_17903c:
    // 0x17903c: 0x1000001f  b           . + 4 + (0x1F << 2)
label_179040:
    if (ctx->pc == 0x179040u) {
        ctx->pc = 0x179040u;
            // 0x179040: 0x24844e70  addiu       $a0, $a0, 0x4E70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20080));
        ctx->pc = 0x179044u;
        goto label_179044;
    }
    ctx->pc = 0x17903Cu;
    {
        const bool branch_taken_0x17903c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17903Cu;
            // 0x179040: 0x24844e70  addiu       $a0, $a0, 0x4E70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17903c) {
            ctx->pc = 0x1790BCu;
            goto label_1790bc;
        }
    }
    ctx->pc = 0x179044u;
label_179044:
    // 0x179044: 0x0  nop
    ctx->pc = 0x179044u;
    // NOP
label_179048:
    // 0x179048: 0x27b10130  addiu       $s1, $sp, 0x130
    ctx->pc = 0x179048u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_17904c:
    // 0x17904c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17904cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_179050:
    // 0x179050: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x179050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_179054:
    // 0x179054: 0xc05e2b4  jal         func_178AD0
label_179058:
    if (ctx->pc == 0x179058u) {
        ctx->pc = 0x179058u;
            // 0x179058: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17905Cu;
        goto label_17905c;
    }
    ctx->pc = 0x179054u;
    SET_GPR_U32(ctx, 31, 0x17905Cu);
    ctx->pc = 0x179058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179054u;
            // 0x179058: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178AD0u;
    if (runtime->hasFunction(0x178AD0u)) {
        auto targetFn = runtime->lookupFunction(0x178AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17905Cu; }
        if (ctx->pc != 0x17905Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178AD0_0x178ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17905Cu; }
        if (ctx->pc != 0x17905Cu) { return; }
    }
    ctx->pc = 0x17905Cu;
label_17905c:
    // 0x17905c: 0x83a20130  lb          $v0, 0x130($sp)
    ctx->pc = 0x17905cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 304)));
label_179060:
    // 0x179060: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_179064:
    if (ctx->pc == 0x179064u) {
        ctx->pc = 0x179064u;
            // 0x179064: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179068u;
        goto label_179068;
    }
    ctx->pc = 0x179060u;
    {
        const bool branch_taken_0x179060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x179064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179060u;
            // 0x179064: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179060) {
            ctx->pc = 0x179078u;
            goto label_179078;
        }
    }
    ctx->pc = 0x179068u;
label_179068:
    // 0x179068: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x179068u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_17906c:
    // 0x17906c: 0x10000013  b           . + 4 + (0x13 << 2)
label_179070:
    if (ctx->pc == 0x179070u) {
        ctx->pc = 0x179070u;
            // 0x179070: 0x24844e70  addiu       $a0, $a0, 0x4E70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20080));
        ctx->pc = 0x179074u;
        goto label_179074;
    }
    ctx->pc = 0x17906Cu;
    {
        const bool branch_taken_0x17906c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17906Cu;
            // 0x179070: 0x24844e70  addiu       $a0, $a0, 0x4E70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17906c) {
            ctx->pc = 0x1790BCu;
            goto label_1790bc;
        }
    }
    ctx->pc = 0x179074u;
label_179074:
    // 0x179074: 0x0  nop
    ctx->pc = 0x179074u;
    // NOP
label_179078:
    // 0x179078: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x179078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_17907c:
    // 0x17907c: 0xc05e222  jal         func_178888
label_179080:
    if (ctx->pc == 0x179080u) {
        ctx->pc = 0x179080u;
            // 0x179080: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179084u;
        goto label_179084;
    }
    ctx->pc = 0x17907Cu;
    SET_GPR_U32(ctx, 31, 0x179084u);
    ctx->pc = 0x179080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17907Cu;
            // 0x179080: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178888u;
    if (runtime->hasFunction(0x178888u)) {
        auto targetFn = runtime->lookupFunction(0x178888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179084u; }
        if (ctx->pc != 0x179084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178888_0x178888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179084u; }
        if (ctx->pc != 0x179084u) { return; }
    }
    ctx->pc = 0x179084u;
label_179084:
    // 0x179084: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x179084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_179088:
    // 0x179088: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
label_17908c:
    if (ctx->pc == 0x17908Cu) {
        ctx->pc = 0x17908Cu;
            // 0x17908c: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x179090u;
        goto label_179090;
    }
    ctx->pc = 0x179088u;
    {
        const bool branch_taken_0x179088 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x179088) {
            ctx->pc = 0x17908Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x179088u;
            // 0x17908c: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1790A0u;
            goto label_1790a0;
        }
    }
    ctx->pc = 0x179090u;
label_179090:
    // 0x179090: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x179090u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_179094:
    // 0x179094: 0xc05e0a6  jal         func_178298
label_179098:
    if (ctx->pc == 0x179098u) {
        ctx->pc = 0x179098u;
            // 0x179098: 0x24844ec0  addiu       $a0, $a0, 0x4EC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
        ctx->pc = 0x17909Cu;
        goto label_17909c;
    }
    ctx->pc = 0x179094u;
    SET_GPR_U32(ctx, 31, 0x17909Cu);
    ctx->pc = 0x179098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179094u;
            // 0x179098: 0x24844ec0  addiu       $a0, $a0, 0x4EC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17909Cu; }
        if (ctx->pc != 0x17909Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178298_0x178298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17909Cu; }
        if (ctx->pc != 0x17909Cu) { return; }
    }
    ctx->pc = 0x17909Cu;
label_17909c:
    // 0x17909c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x17909cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1790a0:
    // 0x1790a0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1790a4:
    if (ctx->pc == 0x1790A4u) {
        ctx->pc = 0x1790A4u;
            // 0x1790a4: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->pc = 0x1790A8u;
        goto label_1790a8;
    }
    ctx->pc = 0x1790A0u;
    {
        const bool branch_taken_0x1790a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1790a0) {
            ctx->pc = 0x1790A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1790A0u;
            // 0x1790a4: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1790B8u;
            goto label_1790b8;
        }
    }
    ctx->pc = 0x1790A8u;
label_1790a8:
    // 0x1790a8: 0x40f809  jalr        $v0
label_1790ac:
    if (ctx->pc == 0x1790ACu) {
        ctx->pc = 0x1790ACu;
            // 0x1790ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1790B0u;
        goto label_1790b0;
    }
    ctx->pc = 0x1790A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1790B0u);
        ctx->pc = 0x1790ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1790A8u;
            // 0x1790ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1790B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1790B0u; }
            if (ctx->pc != 0x1790B0u) { return; }
        }
        }
    }
    ctx->pc = 0x1790B0u;
label_1790b0:
    // 0x1790b0: 0x10000006  b           . + 4 + (0x6 << 2)
label_1790b4:
    if (ctx->pc == 0x1790B4u) {
        ctx->pc = 0x1790B4u;
            // 0x1790b4: 0xdfb00260  ld          $s0, 0x260($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->pc = 0x1790B8u;
        goto label_1790b8;
    }
    ctx->pc = 0x1790B0u;
    {
        const bool branch_taken_0x1790b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1790B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1790B0u;
            // 0x1790b4: 0xdfb00260  ld          $s0, 0x260($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1790b0) {
            ctx->pc = 0x1790CCu;
            goto label_1790cc;
        }
    }
    ctx->pc = 0x1790B8u;
label_1790b8:
    // 0x1790b8: 0x24844ee8  addiu       $a0, $a0, 0x4EE8
    ctx->pc = 0x1790b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20200));
label_1790bc:
    // 0x1790bc: 0xc05e0a6  jal         func_178298
label_1790c0:
    if (ctx->pc == 0x1790C0u) {
        ctx->pc = 0x1790C4u;
        goto label_1790c4;
    }
    ctx->pc = 0x1790BCu;
    SET_GPR_U32(ctx, 31, 0x1790C4u);
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1790C4u; }
        if (ctx->pc != 0x1790C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178298_0x178298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1790C4u; }
        if (ctx->pc != 0x1790C4u) { return; }
    }
    ctx->pc = 0x1790C4u;
label_1790c4:
    // 0x1790c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1790c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1790c8:
    // 0x1790c8: 0xdfb00260  ld          $s0, 0x260($sp)
    ctx->pc = 0x1790c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
label_1790cc:
    // 0x1790cc: 0xdfb10268  ld          $s1, 0x268($sp)
    ctx->pc = 0x1790ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 616)));
label_1790d0:
    // 0x1790d0: 0xdfbf0270  ld          $ra, 0x270($sp)
    ctx->pc = 0x1790d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 624)));
label_1790d4:
    // 0x1790d4: 0x3e00008  jr          $ra
label_1790d8:
    if (ctx->pc == 0x1790D8u) {
        ctx->pc = 0x1790D8u;
            // 0x1790d8: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->pc = 0x1790DCu;
        goto label_1790dc;
    }
    ctx->pc = 0x1790D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1790D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1790D4u;
            // 0x1790d8: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1790DCu;
label_1790dc:
    // 0x1790dc: 0x0  nop
    ctx->pc = 0x1790dcu;
    // NOP
label_1790e0:
    // 0x1790e0: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x1790e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
label_1790e4:
    // 0x1790e4: 0xffb00260  sd          $s0, 0x260($sp)
    ctx->pc = 0x1790e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 16));
label_1790e8:
    // 0x1790e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1790e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1790ec:
    // 0x1790ec: 0xffb20270  sd          $s2, 0x270($sp)
    ctx->pc = 0x1790ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 18));
label_1790f0:
    // 0x1790f0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1790f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1790f4:
    // 0x1790f4: 0xffb10268  sd          $s1, 0x268($sp)
    ctx->pc = 0x1790f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 17));
label_1790f8:
    // 0x1790f8: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_1790fc:
    if (ctx->pc == 0x1790FCu) {
        ctx->pc = 0x1790FCu;
            // 0x1790fc: 0xffbf0278  sd          $ra, 0x278($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 632), GPR_U64(ctx, 31));
        ctx->pc = 0x179100u;
        goto label_179100;
    }
    ctx->pc = 0x1790F8u;
    {
        const bool branch_taken_0x1790f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1790FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1790F8u;
            // 0x1790fc: 0xffbf0278  sd          $ra, 0x278($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 632), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1790f8) {
            ctx->pc = 0x179110u;
            goto label_179110;
        }
    }
    ctx->pc = 0x179100u;
label_179100:
    // 0x179100: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x179100u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_179104:
    // 0x179104: 0x10000020  b           . + 4 + (0x20 << 2)
label_179108:
    if (ctx->pc == 0x179108u) {
        ctx->pc = 0x179108u;
            // 0x179108: 0x24844f08  addiu       $a0, $a0, 0x4F08 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20232));
        ctx->pc = 0x17910Cu;
        goto label_17910c;
    }
    ctx->pc = 0x179104u;
    {
        const bool branch_taken_0x179104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179104u;
            // 0x179108: 0x24844f08  addiu       $a0, $a0, 0x4F08 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179104) {
            ctx->pc = 0x179188u;
            goto label_179188;
        }
    }
    ctx->pc = 0x17910Cu;
label_17910c:
    // 0x17910c: 0x0  nop
    ctx->pc = 0x17910cu;
    // NOP
label_179110:
    // 0x179110: 0x27b10130  addiu       $s1, $sp, 0x130
    ctx->pc = 0x179110u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_179114:
    // 0x179114: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x179114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_179118:
    // 0x179118: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x179118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17911c:
    // 0x17911c: 0xc05e2b4  jal         func_178AD0
label_179120:
    if (ctx->pc == 0x179120u) {
        ctx->pc = 0x179120u;
            // 0x179120: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179124u;
        goto label_179124;
    }
    ctx->pc = 0x17911Cu;
    SET_GPR_U32(ctx, 31, 0x179124u);
    ctx->pc = 0x179120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17911Cu;
            // 0x179120: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178AD0u;
    if (runtime->hasFunction(0x178AD0u)) {
        auto targetFn = runtime->lookupFunction(0x178AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179124u; }
        if (ctx->pc != 0x179124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178AD0_0x178ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179124u; }
        if (ctx->pc != 0x179124u) { return; }
    }
    ctx->pc = 0x179124u;
label_179124:
    // 0x179124: 0x83a20130  lb          $v0, 0x130($sp)
    ctx->pc = 0x179124u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 304)));
label_179128:
    // 0x179128: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_17912c:
    if (ctx->pc == 0x17912Cu) {
        ctx->pc = 0x17912Cu;
            // 0x17912c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179130u;
        goto label_179130;
    }
    ctx->pc = 0x179128u;
    {
        const bool branch_taken_0x179128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17912Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179128u;
            // 0x17912c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179128) {
            ctx->pc = 0x179140u;
            goto label_179140;
        }
    }
    ctx->pc = 0x179130u;
label_179130:
    // 0x179130: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x179130u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_179134:
    // 0x179134: 0x10000014  b           . + 4 + (0x14 << 2)
label_179138:
    if (ctx->pc == 0x179138u) {
        ctx->pc = 0x179138u;
            // 0x179138: 0x24844f08  addiu       $a0, $a0, 0x4F08 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20232));
        ctx->pc = 0x17913Cu;
        goto label_17913c;
    }
    ctx->pc = 0x179134u;
    {
        const bool branch_taken_0x179134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179134u;
            // 0x179138: 0x24844f08  addiu       $a0, $a0, 0x4F08 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179134) {
            ctx->pc = 0x179188u;
            goto label_179188;
        }
    }
    ctx->pc = 0x17913Cu;
label_17913c:
    // 0x17913c: 0x0  nop
    ctx->pc = 0x17913cu;
    // NOP
label_179140:
    // 0x179140: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x179140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_179144:
    // 0x179144: 0xc05e222  jal         func_178888
label_179148:
    if (ctx->pc == 0x179148u) {
        ctx->pc = 0x179148u;
            // 0x179148: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17914Cu;
        goto label_17914c;
    }
    ctx->pc = 0x179144u;
    SET_GPR_U32(ctx, 31, 0x17914Cu);
    ctx->pc = 0x179148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179144u;
            // 0x179148: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178888u;
    if (runtime->hasFunction(0x178888u)) {
        auto targetFn = runtime->lookupFunction(0x178888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17914Cu; }
        if (ctx->pc != 0x17914Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178888_0x178888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17914Cu; }
        if (ctx->pc != 0x17914Cu) { return; }
    }
    ctx->pc = 0x17914Cu;
label_17914c:
    // 0x17914c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17914cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_179150:
    // 0x179150: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
label_179154:
    if (ctx->pc == 0x179154u) {
        ctx->pc = 0x179154u;
            // 0x179154: 0x8e02005c  lw          $v0, 0x5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->pc = 0x179158u;
        goto label_179158;
    }
    ctx->pc = 0x179150u;
    {
        const bool branch_taken_0x179150 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x179150) {
            ctx->pc = 0x179154u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x179150u;
            // 0x179154: 0x8e02005c  lw          $v0, 0x5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x179168u;
            goto label_179168;
        }
    }
    ctx->pc = 0x179158u;
label_179158:
    // 0x179158: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x179158u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_17915c:
    // 0x17915c: 0xc05e0a6  jal         func_178298
label_179160:
    if (ctx->pc == 0x179160u) {
        ctx->pc = 0x179160u;
            // 0x179160: 0x24844f60  addiu       $a0, $a0, 0x4F60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20320));
        ctx->pc = 0x179164u;
        goto label_179164;
    }
    ctx->pc = 0x17915Cu;
    SET_GPR_U32(ctx, 31, 0x179164u);
    ctx->pc = 0x179160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17915Cu;
            // 0x179160: 0x24844f60  addiu       $a0, $a0, 0x4F60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179164u; }
        if (ctx->pc != 0x179164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178298_0x178298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179164u; }
        if (ctx->pc != 0x179164u) { return; }
    }
    ctx->pc = 0x179164u;
label_179164:
    // 0x179164: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x179164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_179168:
    // 0x179168: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_17916c:
    if (ctx->pc == 0x17916Cu) {
        ctx->pc = 0x17916Cu;
            // 0x17916c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179170u;
        goto label_179170;
    }
    ctx->pc = 0x179168u;
    {
        const bool branch_taken_0x179168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17916Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179168u;
            // 0x17916c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179168) {
            ctx->pc = 0x179180u;
            goto label_179180;
        }
    }
    ctx->pc = 0x179170u;
label_179170:
    // 0x179170: 0x40f809  jalr        $v0
label_179174:
    if (ctx->pc == 0x179174u) {
        ctx->pc = 0x179174u;
            // 0x179174: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179178u;
        goto label_179178;
    }
    ctx->pc = 0x179170u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x179178u);
        ctx->pc = 0x179174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179170u;
            // 0x179174: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x179178u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x179178u; }
            if (ctx->pc != 0x179178u) { return; }
        }
        }
    }
    ctx->pc = 0x179178u;
label_179178:
    // 0x179178: 0x10000007  b           . + 4 + (0x7 << 2)
label_17917c:
    if (ctx->pc == 0x17917Cu) {
        ctx->pc = 0x17917Cu;
            // 0x17917c: 0xdfb00260  ld          $s0, 0x260($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->pc = 0x179180u;
        goto label_179180;
    }
    ctx->pc = 0x179178u;
    {
        const bool branch_taken_0x179178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17917Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179178u;
            // 0x17917c: 0xdfb00260  ld          $s0, 0x260($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179178) {
            ctx->pc = 0x179198u;
            goto label_179198;
        }
    }
    ctx->pc = 0x179180u;
label_179180:
    // 0x179180: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x179180u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_179184:
    // 0x179184: 0x24844f88  addiu       $a0, $a0, 0x4F88
    ctx->pc = 0x179184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20360));
label_179188:
    // 0x179188: 0xc05e0a6  jal         func_178298
label_17918c:
    if (ctx->pc == 0x17918Cu) {
        ctx->pc = 0x179190u;
        goto label_179190;
    }
    ctx->pc = 0x179188u;
    SET_GPR_U32(ctx, 31, 0x179190u);
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179190u; }
        if (ctx->pc != 0x179190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178298_0x178298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179190u; }
        if (ctx->pc != 0x179190u) { return; }
    }
    ctx->pc = 0x179190u;
label_179190:
    // 0x179190: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x179190u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_179194:
    // 0x179194: 0xdfb00260  ld          $s0, 0x260($sp)
    ctx->pc = 0x179194u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
label_179198:
    // 0x179198: 0xdfb10268  ld          $s1, 0x268($sp)
    ctx->pc = 0x179198u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 616)));
label_17919c:
    // 0x17919c: 0xdfb20270  ld          $s2, 0x270($sp)
    ctx->pc = 0x17919cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 624)));
label_1791a0:
    // 0x1791a0: 0xdfbf0278  ld          $ra, 0x278($sp)
    ctx->pc = 0x1791a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 632)));
label_1791a4:
    // 0x1791a4: 0x3e00008  jr          $ra
label_1791a8:
    if (ctx->pc == 0x1791A8u) {
        ctx->pc = 0x1791A8u;
            // 0x1791a8: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->pc = 0x1791ACu;
        goto label_1791ac;
    }
    ctx->pc = 0x1791A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1791A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1791A4u;
            // 0x1791a8: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1791ACu;
label_1791ac:
    // 0x1791ac: 0x0  nop
    ctx->pc = 0x1791acu;
    // NOP
label_1791b0:
    // 0x1791b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1791b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1791b4:
    // 0x1791b4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_1791b8:
    if (ctx->pc == 0x1791B8u) {
        ctx->pc = 0x1791B8u;
            // 0x1791b8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1791BCu;
        goto label_1791bc;
    }
    ctx->pc = 0x1791B4u;
    {
        const bool branch_taken_0x1791b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1791B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1791B4u;
            // 0x1791b8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1791b4) {
            ctx->pc = 0x1791D0u;
            goto label_1791d0;
        }
    }
    ctx->pc = 0x1791BCu;
label_1791bc:
    // 0x1791bc: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1791bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_1791c0:
    // 0x1791c0: 0xc05e0a6  jal         func_178298
label_1791c4:
    if (ctx->pc == 0x1791C4u) {
        ctx->pc = 0x1791C4u;
            // 0x1791c4: 0x24844fa8  addiu       $a0, $a0, 0x4FA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20392));
        ctx->pc = 0x1791C8u;
        goto label_1791c8;
    }
    ctx->pc = 0x1791C0u;
    SET_GPR_U32(ctx, 31, 0x1791C8u);
    ctx->pc = 0x1791C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1791C0u;
            // 0x1791c4: 0x24844fa8  addiu       $a0, $a0, 0x4FA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1791C8u; }
        if (ctx->pc != 0x1791C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178298_0x178298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1791C8u; }
        if (ctx->pc != 0x1791C8u) { return; }
    }
    ctx->pc = 0x1791C8u;
label_1791c8:
    // 0x1791c8: 0x1000000d  b           . + 4 + (0xD << 2)
label_1791cc:
    if (ctx->pc == 0x1791CCu) {
        ctx->pc = 0x1791CCu;
            // 0x1791cc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1791D0u;
        goto label_1791d0;
    }
    ctx->pc = 0x1791C8u;
    {
        const bool branch_taken_0x1791c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1791CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1791C8u;
            // 0x1791cc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1791c8) {
            ctx->pc = 0x179200u;
            goto label_179200;
        }
    }
    ctx->pc = 0x1791D0u;
label_1791d0:
    // 0x1791d0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1791d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1791d4:
    // 0x1791d4: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x1791d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
label_1791d8:
    // 0x1791d8: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x1791d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1791dc:
    // 0x1791dc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1791e0:
    if (ctx->pc == 0x1791E0u) {
        ctx->pc = 0x1791E0u;
            // 0x1791e0: 0x3463ffff  ori         $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
        ctx->pc = 0x1791E4u;
        goto label_1791e4;
    }
    ctx->pc = 0x1791DCu;
    {
        const bool branch_taken_0x1791dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1791E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1791DCu;
            // 0x1791e0: 0x3463ffff  ori         $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1791dc) {
            ctx->pc = 0x1791FCu;
            goto label_1791fc;
        }
    }
    ctx->pc = 0x1791E4u;
label_1791e4:
    // 0x1791e4: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1791e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1791e8:
    // 0x1791e8: 0x2405012c  addiu       $a1, $zero, 0x12C
    ctx->pc = 0x1791e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_1791ec:
    // 0x1791ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1791ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1791f0:
    // 0x1791f0: 0x40f809  jalr        $v0
label_1791f4:
    if (ctx->pc == 0x1791F4u) {
        ctx->pc = 0x1791F4u;
            // 0x1791f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1791F8u;
        goto label_1791f8;
    }
    ctx->pc = 0x1791F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1791F8u);
        ctx->pc = 0x1791F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1791F0u;
            // 0x1791f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1791F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1791F8u; }
            if (ctx->pc != 0x1791F8u) { return; }
        }
        }
    }
    ctx->pc = 0x1791F8u;
label_1791f8:
    // 0x1791f8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1791f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1791fc:
    // 0x1791fc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1791fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_179200:
    // 0x179200: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x179200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_179204:
    // 0x179204: 0x3e00008  jr          $ra
label_179208:
    if (ctx->pc == 0x179208u) {
        ctx->pc = 0x179208u;
            // 0x179208: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x17920Cu;
        goto label_17920c;
    }
    ctx->pc = 0x179204u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179204u;
            // 0x179208: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17920Cu;
label_17920c:
    // 0x17920c: 0x0  nop
    ctx->pc = 0x17920cu;
    // NOP
label_179210:
    // 0x179210: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x179210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_179214:
    // 0x179214: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_179218:
    if (ctx->pc == 0x179218u) {
        ctx->pc = 0x179218u;
            // 0x179218: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x17921Cu;
        goto label_17921c;
    }
    ctx->pc = 0x179214u;
    {
        const bool branch_taken_0x179214 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x179218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179214u;
            // 0x179218: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179214) {
            ctx->pc = 0x179230u;
            goto label_179230;
        }
    }
    ctx->pc = 0x17921Cu;
label_17921c:
    // 0x17921c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17921cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_179220:
    // 0x179220: 0xc05e0a6  jal         func_178298
label_179224:
    if (ctx->pc == 0x179224u) {
        ctx->pc = 0x179224u;
            // 0x179224: 0x24844fd8  addiu       $a0, $a0, 0x4FD8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20440));
        ctx->pc = 0x179228u;
        goto label_179228;
    }
    ctx->pc = 0x179220u;
    SET_GPR_U32(ctx, 31, 0x179228u);
    ctx->pc = 0x179224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179220u;
            // 0x179224: 0x24844fd8  addiu       $a0, $a0, 0x4FD8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20440));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179228u; }
        if (ctx->pc != 0x179228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178298_0x178298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179228u; }
        if (ctx->pc != 0x179228u) { return; }
    }
    ctx->pc = 0x179228u;
label_179228:
    // 0x179228: 0x1000000c  b           . + 4 + (0xC << 2)
label_17922c:
    if (ctx->pc == 0x17922Cu) {
        ctx->pc = 0x17922Cu;
            // 0x17922c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179230u;
        goto label_179230;
    }
    ctx->pc = 0x179228u;
    {
        const bool branch_taken_0x179228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17922Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179228u;
            // 0x17922c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179228) {
            ctx->pc = 0x17925Cu;
            goto label_17925c;
        }
    }
    ctx->pc = 0x179230u;
label_179230:
    // 0x179230: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x179230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_179234:
    // 0x179234: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x179234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_179238:
    // 0x179238: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_17923c:
    if (ctx->pc == 0x17923Cu) {
        ctx->pc = 0x17923Cu;
            // 0x17923c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x179240u;
        goto label_179240;
    }
    ctx->pc = 0x179238u;
    {
        const bool branch_taken_0x179238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17923Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179238u;
            // 0x17923c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179238) {
            ctx->pc = 0x179258u;
            goto label_179258;
        }
    }
    ctx->pc = 0x179240u;
label_179240:
    // 0x179240: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x179240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_179244:
    // 0x179244: 0x24050258  addiu       $a1, $zero, 0x258
    ctx->pc = 0x179244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
label_179248:
    // 0x179248: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x179248u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17924c:
    // 0x17924c: 0x40f809  jalr        $v0
label_179250:
    if (ctx->pc == 0x179250u) {
        ctx->pc = 0x179250u;
            // 0x179250: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179254u;
        goto label_179254;
    }
    ctx->pc = 0x17924Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x179254u);
        ctx->pc = 0x179250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17924Cu;
            // 0x179250: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x179254u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x179254u; }
            if (ctx->pc != 0x179254u) { return; }
        }
        }
    }
    ctx->pc = 0x179254u;
label_179254:
    // 0x179254: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x179254u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_179258:
    // 0x179258: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x179258u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_17925c:
    // 0x17925c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17925cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_179260:
    // 0x179260: 0x3e00008  jr          $ra
label_179264:
    if (ctx->pc == 0x179264u) {
        ctx->pc = 0x179264u;
            // 0x179264: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x179268u;
        goto label_179268;
    }
    ctx->pc = 0x179260u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179260u;
            // 0x179264: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x179268u;
label_179268:
    // 0x179268: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x179268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_17926c:
    // 0x17926c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17926cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_179270:
    // 0x179270: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_179274:
    if (ctx->pc == 0x179274u) {
        ctx->pc = 0x179274u;
            // 0x179274: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x179278u;
        goto label_179278;
    }
    ctx->pc = 0x179270u;
    {
        const bool branch_taken_0x179270 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x179274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179270u;
            // 0x179274: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179270) {
            ctx->pc = 0x1792A4u;
            goto label_1792a4;
        }
    }
    ctx->pc = 0x179278u;
label_179278:
    // 0x179278: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x179278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17927c:
    // 0x17927c: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x17927cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_179280:
    // 0x179280: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_179284:
    if (ctx->pc == 0x179284u) {
        ctx->pc = 0x179284u;
            // 0x179284: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179288u;
        goto label_179288;
    }
    ctx->pc = 0x179280u;
    {
        const bool branch_taken_0x179280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x179284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179280u;
            // 0x179284: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179280) {
            ctx->pc = 0x1792A0u;
            goto label_1792a0;
        }
    }
    ctx->pc = 0x179288u;
label_179288:
    // 0x179288: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x179288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_17928c:
    // 0x17928c: 0x240501f5  addiu       $a1, $zero, 0x1F5
    ctx->pc = 0x17928cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 501));
label_179290:
    // 0x179290: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x179290u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_179294:
    // 0x179294: 0x40f809  jalr        $v0
label_179298:
    if (ctx->pc == 0x179298u) {
        ctx->pc = 0x179298u;
            // 0x179298: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17929Cu;
        goto label_17929c;
    }
    ctx->pc = 0x179294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17929Cu);
        ctx->pc = 0x179298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179294u;
            // 0x179298: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17929Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17929Cu; }
            if (ctx->pc != 0x17929Cu) { return; }
        }
        }
    }
    ctx->pc = 0x17929Cu;
label_17929c:
    // 0x17929c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x17929cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1792a0:
    // 0x1792a0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1792a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1792a4:
    // 0x1792a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1792a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1792a8:
    // 0x1792a8: 0x3e00008  jr          $ra
label_1792ac:
    if (ctx->pc == 0x1792ACu) {
        ctx->pc = 0x1792ACu;
            // 0x1792ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1792B0u;
        goto label_1792b0;
    }
    ctx->pc = 0x1792A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1792ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1792A8u;
            // 0x1792ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1792B0u;
label_1792b0:
    // 0x1792b0: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x1792b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_1792b4:
    // 0x1792b4: 0xffb00130  sd          $s0, 0x130($sp)
    ctx->pc = 0x1792b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 16));
label_1792b8:
    // 0x1792b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1792b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1792bc:
    // 0x1792bc: 0xffb40150  sd          $s4, 0x150($sp)
    ctx->pc = 0x1792bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 20));
label_1792c0:
    // 0x1792c0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1792c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1792c4:
    // 0x1792c4: 0xffb10138  sd          $s1, 0x138($sp)
    ctx->pc = 0x1792c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 17));
label_1792c8:
    // 0x1792c8: 0xffb20140  sd          $s2, 0x140($sp)
    ctx->pc = 0x1792c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 18));
label_1792cc:
    // 0x1792cc: 0xffb30148  sd          $s3, 0x148($sp)
    ctx->pc = 0x1792ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 19));
label_1792d0:
    // 0x1792d0: 0xffb50158  sd          $s5, 0x158($sp)
    ctx->pc = 0x1792d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 21));
label_1792d4:
    // 0x1792d4: 0xffb60160  sd          $s6, 0x160($sp)
    ctx->pc = 0x1792d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 22));
label_1792d8:
    // 0x1792d8: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1792dc:
    if (ctx->pc == 0x1792DCu) {
        ctx->pc = 0x1792DCu;
            // 0x1792dc: 0xffbf0168  sd          $ra, 0x168($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 31));
        ctx->pc = 0x1792E0u;
        goto label_1792e0;
    }
    ctx->pc = 0x1792D8u;
    {
        const bool branch_taken_0x1792d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1792DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1792D8u;
            // 0x1792dc: 0xffbf0168  sd          $ra, 0x168($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1792d8) {
            ctx->pc = 0x1792ECu;
            goto label_1792ec;
        }
    }
    ctx->pc = 0x1792E0u;
label_1792e0:
    // 0x1792e0: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1792e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1792e4:
    // 0x1792e4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1792e8:
    if (ctx->pc == 0x1792E8u) {
        ctx->pc = 0x1792ECu;
        goto label_1792ec;
    }
    ctx->pc = 0x1792E4u;
    {
        const bool branch_taken_0x1792e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1792e4) {
            ctx->pc = 0x179310u;
            goto label_179310;
        }
    }
    ctx->pc = 0x1792ECu;
label_1792ec:
    // 0x1792ec: 0xc05e306  jal         func_178C18
label_1792f0:
    if (ctx->pc == 0x1792F0u) {
        ctx->pc = 0x1792F0u;
            // 0x1792f0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1792F4u;
        goto label_1792f4;
    }
    ctx->pc = 0x1792ECu;
    SET_GPR_U32(ctx, 31, 0x1792F4u);
    ctx->pc = 0x1792F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1792ECu;
            // 0x1792f0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178C18u;
    if (runtime->hasFunction(0x178C18u)) {
        auto targetFn = runtime->lookupFunction(0x178C18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1792F4u; }
        if (ctx->pc != 0x1792F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178C18_0x178c18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1792F4u; }
        if (ctx->pc != 0x1792F4u) { return; }
    }
    ctx->pc = 0x1792F4u;
label_1792f4:
    // 0x1792f4: 0x83a20000  lb          $v0, 0x0($sp)
    ctx->pc = 0x1792f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_1792f8:
    // 0x1792f8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1792fc:
    if (ctx->pc == 0x1792FCu) {
        ctx->pc = 0x179300u;
        goto label_179300;
    }
    ctx->pc = 0x1792F8u;
    {
        const bool branch_taken_0x1792f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1792f8) {
            ctx->pc = 0x179328u;
            goto label_179328;
        }
    }
    ctx->pc = 0x179300u;
label_179300:
    // 0x179300: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x179300u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_179304:
    // 0x179304: 0x10000028  b           . + 4 + (0x28 << 2)
label_179308:
    if (ctx->pc == 0x179308u) {
        ctx->pc = 0x179308u;
            // 0x179308: 0x24845000  addiu       $a0, $a0, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20480));
        ctx->pc = 0x17930Cu;
        goto label_17930c;
    }
    ctx->pc = 0x179304u;
    {
        const bool branch_taken_0x179304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179304u;
            // 0x179308: 0x24845000  addiu       $a0, $a0, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179304) {
            ctx->pc = 0x1793A8u;
            goto label_1793a8;
        }
    }
    ctx->pc = 0x17930Cu;
label_17930c:
    // 0x17930c: 0x0  nop
    ctx->pc = 0x17930cu;
    // NOP
label_179310:
    // 0x179310: 0xc04b02e  jal         func_12C0B8
label_179314:
    if (ctx->pc == 0x179314u) {
        ctx->pc = 0x179318u;
        goto label_179318;
    }
    ctx->pc = 0x179310u;
    SET_GPR_U32(ctx, 31, 0x179318u);
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179318u; }
        if (ctx->pc != 0x179318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179318u; }
        if (ctx->pc != 0x179318u) { return; }
    }
    ctx->pc = 0x179318u;
label_179318:
    // 0x179318: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x179318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17931c:
    // 0x17931c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17931cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_179320:
    // 0x179320: 0xc04a508  jal         func_129420
label_179324:
    if (ctx->pc == 0x179324u) {
        ctx->pc = 0x179324u;
            // 0x179324: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x179328u;
        goto label_179328;
    }
    ctx->pc = 0x179320u;
    SET_GPR_U32(ctx, 31, 0x179328u);
    ctx->pc = 0x179324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179320u;
            // 0x179324: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179328u; }
        if (ctx->pc != 0x179328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179328u; }
        if (ctx->pc != 0x179328u) { return; }
    }
    ctx->pc = 0x179328u;
label_179328:
    // 0x179328: 0xc04b02e  jal         func_12C0B8
label_17932c:
    if (ctx->pc == 0x17932Cu) {
        ctx->pc = 0x17932Cu;
            // 0x17932c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179330u;
        goto label_179330;
    }
    ctx->pc = 0x179328u;
    SET_GPR_U32(ctx, 31, 0x179330u);
    ctx->pc = 0x17932Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179328u;
            // 0x17932c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179330u; }
        if (ctx->pc != 0x179330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179330u; }
        if (ctx->pc != 0x179330u) { return; }
    }
    ctx->pc = 0x179330u;
label_179330:
    // 0x179330: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x179330u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_179334:
    // 0x179334: 0x5e400004  bgtzl       $s2, . + 4 + (0x4 << 2)
label_179338:
    if (ctx->pc == 0x179338u) {
        ctx->pc = 0x179338u;
            // 0x179338: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->pc = 0x17933Cu;
        goto label_17933c;
    }
    ctx->pc = 0x179334u;
    {
        const bool branch_taken_0x179334 = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x179334) {
            ctx->pc = 0x179338u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x179334u;
            // 0x179338: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x179348u;
            goto label_179348;
        }
    }
    ctx->pc = 0x17933Cu;
label_17933c:
    // 0x17933c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17933cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_179340:
    // 0x179340: 0x10000019  b           . + 4 + (0x19 << 2)
label_179344:
    if (ctx->pc == 0x179344u) {
        ctx->pc = 0x179344u;
            // 0x179344: 0x24845000  addiu       $a0, $a0, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20480));
        ctx->pc = 0x179348u;
        goto label_179348;
    }
    ctx->pc = 0x179340u;
    {
        const bool branch_taken_0x179340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179340u;
            // 0x179344: 0x24845000  addiu       $a0, $a0, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179340) {
            ctx->pc = 0x1793A8u;
            goto label_1793a8;
        }
    }
    ctx->pc = 0x179348u;
label_179348:
    // 0x179348: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x179348u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17934c:
    // 0x17934c: 0x2453d3dc  addiu       $s3, $v0, -0x2C24
    ctx->pc = 0x17934cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955996));
label_179350:
    // 0x179350: 0x3c160063  lui         $s6, 0x63
    ctx->pc = 0x179350u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)99 << 16));
label_179354:
    // 0x179354: 0x2675fffc  addiu       $s5, $s3, -0x4
    ctx->pc = 0x179354u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
label_179358:
    // 0x179358: 0x118100  sll         $s0, $s1, 4
    ctx->pc = 0x179358u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_17935c:
    // 0x17935c: 0x0  nop
    ctx->pc = 0x17935cu;
    // NOP
label_179360:
    // 0x179360: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x179360u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_179364:
    // 0x179364: 0x2132821  addu        $a1, $s0, $s3
    ctx->pc = 0x179364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_179368:
    // 0x179368: 0x2158021  addu        $s0, $s0, $s5
    ctx->pc = 0x179368u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
label_17936c:
    // 0x17936c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17936cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_179370:
    // 0x179370: 0xc04b0e8  jal         func_12C3A0
label_179374:
    if (ctx->pc == 0x179374u) {
        ctx->pc = 0x179374u;
            // 0x179374: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179378u;
        goto label_179378;
    }
    ctx->pc = 0x179370u;
    SET_GPR_U32(ctx, 31, 0x179378u);
    ctx->pc = 0x179374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179370u;
            // 0x179374: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C3A0u;
    if (runtime->hasFunction(0x12C3A0u)) {
        auto targetFn = runtime->lookupFunction(0x12C3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179378u; }
        if (ctx->pc != 0x179378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C3A0_0x12c3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179378u; }
        if (ctx->pc != 0x179378u) { return; }
    }
    ctx->pc = 0x179378u;
label_179378:
    // 0x179378: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_17937c:
    if (ctx->pc == 0x17937Cu) {
        ctx->pc = 0x17937Cu;
            // 0x17937c: 0x2a220020  slti        $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->pc = 0x179380u;
        goto label_179380;
    }
    ctx->pc = 0x179378u;
    {
        const bool branch_taken_0x179378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x179378) {
            ctx->pc = 0x17937Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x179378u;
            // 0x17937c: 0x2a220020  slti        $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1793BCu;
            goto label_1793bc;
        }
    }
    ctx->pc = 0x179380u;
label_179380:
    // 0x179380: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x179380u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_179384:
    // 0x179384: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_179388:
    if (ctx->pc == 0x179388u) {
        ctx->pc = 0x179388u;
            // 0x179388: 0x26c45028  addiu       $a0, $s6, 0x5028 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 20520));
        ctx->pc = 0x17938Cu;
        goto label_17938c;
    }
    ctx->pc = 0x179384u;
    {
        const bool branch_taken_0x179384 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x179388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179384u;
            // 0x179388: 0x26c45028  addiu       $a0, $s6, 0x5028 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 20520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179384) {
            ctx->pc = 0x1793A8u;
            goto label_1793a8;
        }
    }
    ctx->pc = 0x17938Cu;
label_17938c:
    // 0x17938c: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x17938cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_179390:
    // 0x179390: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
label_179394:
    if (ctx->pc == 0x179394u) {
        ctx->pc = 0x179394u;
            // 0x179394: 0x2a220020  slti        $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->pc = 0x179398u;
        goto label_179398;
    }
    ctx->pc = 0x179390u;
    {
        const bool branch_taken_0x179390 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x179390) {
            ctx->pc = 0x179394u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x179390u;
            // 0x179394: 0x2a220020  slti        $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1793BCu;
            goto label_1793bc;
        }
    }
    ctx->pc = 0x179398u;
label_179398:
    // 0x179398: 0x200f809  jalr        $s0
label_17939c:
    if (ctx->pc == 0x17939Cu) {
        ctx->pc = 0x1793A0u;
        goto label_1793a0;
    }
    ctx->pc = 0x179398u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x1793A0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1793A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1793A0u; }
            if (ctx->pc != 0x1793A0u) { return; }
        }
        }
    }
    ctx->pc = 0x1793A0u;
label_1793a0:
    // 0x1793a0: 0x10000005  b           . + 4 + (0x5 << 2)
label_1793a4:
    if (ctx->pc == 0x1793A4u) {
        ctx->pc = 0x1793A4u;
            // 0x1793a4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1793A8u;
        goto label_1793a8;
    }
    ctx->pc = 0x1793A0u;
    {
        const bool branch_taken_0x1793a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1793A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1793A0u;
            // 0x1793a4: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1793a0) {
            ctx->pc = 0x1793B8u;
            goto label_1793b8;
        }
    }
    ctx->pc = 0x1793A8u;
label_1793a8:
    // 0x1793a8: 0xc05e0a6  jal         func_178298
label_1793ac:
    if (ctx->pc == 0x1793ACu) {
        ctx->pc = 0x1793B0u;
        goto label_1793b0;
    }
    ctx->pc = 0x1793A8u;
    SET_GPR_U32(ctx, 31, 0x1793B0u);
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1793B0u; }
        if (ctx->pc != 0x1793B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178298_0x178298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1793B0u; }
        if (ctx->pc != 0x1793B0u) { return; }
    }
    ctx->pc = 0x1793B0u;
label_1793b0:
    // 0x1793b0: 0x10000005  b           . + 4 + (0x5 << 2)
label_1793b4:
    if (ctx->pc == 0x1793B4u) {
        ctx->pc = 0x1793B4u;
            // 0x1793b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1793B8u;
        goto label_1793b8;
    }
    ctx->pc = 0x1793B0u;
    {
        const bool branch_taken_0x1793b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1793B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1793B0u;
            // 0x1793b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1793b0) {
            ctx->pc = 0x1793C8u;
            goto label_1793c8;
        }
    }
    ctx->pc = 0x1793B8u;
label_1793b8:
    // 0x1793b8: 0x2a220020  slti        $v0, $s1, 0x20
    ctx->pc = 0x1793b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
label_1793bc:
    // 0x1793bc: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_1793c0:
    if (ctx->pc == 0x1793C0u) {
        ctx->pc = 0x1793C0u;
            // 0x1793c0: 0x118100  sll         $s0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x1793C4u;
        goto label_1793c4;
    }
    ctx->pc = 0x1793BCu;
    {
        const bool branch_taken_0x1793bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1793C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1793BCu;
            // 0x1793c0: 0x118100  sll         $s0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1793bc) {
            ctx->pc = 0x179360u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_179360;
        }
    }
    ctx->pc = 0x1793C4u;
label_1793c4:
    // 0x1793c4: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1793c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1793c8:
    // 0x1793c8: 0xdfb00130  ld          $s0, 0x130($sp)
    ctx->pc = 0x1793c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 304)));
label_1793cc:
    // 0x1793cc: 0xdfb10138  ld          $s1, 0x138($sp)
    ctx->pc = 0x1793ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 312)));
label_1793d0:
    // 0x1793d0: 0xdfb20140  ld          $s2, 0x140($sp)
    ctx->pc = 0x1793d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 320)));
label_1793d4:
    // 0x1793d4: 0xdfb30148  ld          $s3, 0x148($sp)
    ctx->pc = 0x1793d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 328)));
label_1793d8:
    // 0x1793d8: 0xdfb40150  ld          $s4, 0x150($sp)
    ctx->pc = 0x1793d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 336)));
label_1793dc:
    // 0x1793dc: 0xdfb50158  ld          $s5, 0x158($sp)
    ctx->pc = 0x1793dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 344)));
label_1793e0:
    // 0x1793e0: 0xdfb60160  ld          $s6, 0x160($sp)
    ctx->pc = 0x1793e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 352)));
label_1793e4:
    // 0x1793e4: 0xdfbf0168  ld          $ra, 0x168($sp)
    ctx->pc = 0x1793e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 360)));
label_1793e8:
    // 0x1793e8: 0x3e00008  jr          $ra
label_1793ec:
    if (ctx->pc == 0x1793ECu) {
        ctx->pc = 0x1793ECu;
            // 0x1793ec: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x1793F0u;
        goto label_1793f0;
    }
    ctx->pc = 0x1793E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1793ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1793E8u;
            // 0x1793ec: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1793F0u;
label_1793f0:
    // 0x1793f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1793f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1793f4:
    // 0x1793f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1793f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1793f8:
    // 0x1793f8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1793f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1793fc:
    // 0x1793fc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_179400:
    if (ctx->pc == 0x179400u) {
        ctx->pc = 0x179400u;
            // 0x179400: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->pc = 0x179404u;
        goto label_179404;
    }
    ctx->pc = 0x1793FCu;
    {
        const bool branch_taken_0x1793fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x179400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1793FCu;
            // 0x179400: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1793fc) {
            ctx->pc = 0x179418u;
            goto label_179418;
        }
    }
    ctx->pc = 0x179404u;
label_179404:
    // 0x179404: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x179404u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_179408:
    // 0x179408: 0xc05e0a6  jal         func_178298
label_17940c:
    if (ctx->pc == 0x17940Cu) {
        ctx->pc = 0x17940Cu;
            // 0x17940c: 0x24845048  addiu       $a0, $a0, 0x5048 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20552));
        ctx->pc = 0x179410u;
        goto label_179410;
    }
    ctx->pc = 0x179408u;
    SET_GPR_U32(ctx, 31, 0x179410u);
    ctx->pc = 0x17940Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179408u;
            // 0x17940c: 0x24845048  addiu       $a0, $a0, 0x5048 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179410u; }
        if (ctx->pc != 0x179410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178298_0x178298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179410u; }
        if (ctx->pc != 0x179410u) { return; }
    }
    ctx->pc = 0x179410u;
label_179410:
    // 0x179410: 0x1000000c  b           . + 4 + (0xC << 2)
label_179414:
    if (ctx->pc == 0x179414u) {
        ctx->pc = 0x179414u;
            // 0x179414: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179418u;
        goto label_179418;
    }
    ctx->pc = 0x179410u;
    {
        const bool branch_taken_0x179410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179410u;
            // 0x179414: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179410) {
            ctx->pc = 0x179444u;
            goto label_179444;
        }
    }
    ctx->pc = 0x179418u;
label_179418:
    // 0x179418: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x179418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17941c:
    // 0x17941c: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x17941cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_179420:
    // 0x179420: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_179424:
    if (ctx->pc == 0x179424u) {
        ctx->pc = 0x179424u;
            // 0x179424: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->pc = 0x179428u;
        goto label_179428;
    }
    ctx->pc = 0x179420u;
    {
        const bool branch_taken_0x179420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x179420) {
            ctx->pc = 0x179424u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x179420u;
            // 0x179424: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x179438u;
            goto label_179438;
        }
    }
    ctx->pc = 0x179428u;
label_179428:
    // 0x179428: 0x40f809  jalr        $v0
label_17942c:
    if (ctx->pc == 0x17942Cu) {
        ctx->pc = 0x17942Cu;
            // 0x17942c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = 0x179430u;
        goto label_179430;
    }
    ctx->pc = 0x179428u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x179430u);
        ctx->pc = 0x17942Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179428u;
            // 0x17942c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x179430u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x179430u; }
            if (ctx->pc != 0x179430u) { return; }
        }
        }
    }
    ctx->pc = 0x179430u;
label_179430:
    // 0x179430: 0x10000003  b           . + 4 + (0x3 << 2)
label_179434:
    if (ctx->pc == 0x179434u) {
        ctx->pc = 0x179434u;
            // 0x179434: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179438u;
        goto label_179438;
    }
    ctx->pc = 0x179430u;
    {
        const bool branch_taken_0x179430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179430u;
            // 0x179434: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179430) {
            ctx->pc = 0x179440u;
            goto label_179440;
        }
    }
    ctx->pc = 0x179438u;
label_179438:
    // 0x179438: 0xc05e0a6  jal         func_178298
label_17943c:
    if (ctx->pc == 0x17943Cu) {
        ctx->pc = 0x17943Cu;
            // 0x17943c: 0x24845068  addiu       $a0, $a0, 0x5068 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20584));
        ctx->pc = 0x179440u;
        goto label_179440;
    }
    ctx->pc = 0x179438u;
    SET_GPR_U32(ctx, 31, 0x179440u);
    ctx->pc = 0x17943Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179438u;
            // 0x17943c: 0x24845068  addiu       $a0, $a0, 0x5068 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179440u; }
        if (ctx->pc != 0x179440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178298_0x178298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179440u; }
        if (ctx->pc != 0x179440u) { return; }
    }
    ctx->pc = 0x179440u;
label_179440:
    // 0x179440: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x179440u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_179444:
    // 0x179444: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x179444u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_179448:
    // 0x179448: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x179448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_17944c:
    // 0x17944c: 0x3e00008  jr          $ra
label_179450:
    if (ctx->pc == 0x179450u) {
        ctx->pc = 0x179450u;
            // 0x179450: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x179454u;
        goto label_179454;
    }
    ctx->pc = 0x17944Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17944Cu;
            // 0x179450: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x179454u;
label_179454:
    // 0x179454: 0x0  nop
    ctx->pc = 0x179454u;
    // NOP
label_179458:
    // 0x179458: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x179458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_17945c:
    // 0x17945c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_179460:
    if (ctx->pc == 0x179460u) {
        ctx->pc = 0x179460u;
            // 0x179460: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x179464u;
        goto label_179464;
    }
    ctx->pc = 0x17945Cu;
    {
        const bool branch_taken_0x17945c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x179460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17945Cu;
            // 0x179460: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17945c) {
            ctx->pc = 0x179478u;
            goto label_179478;
        }
    }
    ctx->pc = 0x179464u;
label_179464:
    // 0x179464: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x179464u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_179468:
    // 0x179468: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x179468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17946c:
    // 0x17946c: 0x24845088  addiu       $a0, $a0, 0x5088
    ctx->pc = 0x17946cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20616));
label_179470:
    // 0x179470: 0x805e0a6  j           func_178298
label_179474:
    if (ctx->pc == 0x179474u) {
        ctx->pc = 0x179474u;
            // 0x179474: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x179478u;
        goto label_179478;
    }
    ctx->pc = 0x179470u;
    ctx->pc = 0x179474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179470u;
            // 0x179474: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00178298_0x178298(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x179478u;
label_179478:
    // 0x179478: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x179478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17947c:
    // 0x17947c: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x17947cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_179480:
    // 0x179480: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_179484:
    if (ctx->pc == 0x179484u) {
        ctx->pc = 0x179484u;
            // 0x179484: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->pc = 0x179488u;
        goto label_179488;
    }
    ctx->pc = 0x179480u;
    {
        const bool branch_taken_0x179480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x179480) {
            ctx->pc = 0x179484u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x179480u;
            // 0x179484: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1794A0u;
            goto label_1794a0;
        }
    }
    ctx->pc = 0x179488u;
label_179488:
    // 0x179488: 0x40f809  jalr        $v0
label_17948c:
    if (ctx->pc == 0x17948Cu) {
        ctx->pc = 0x17948Cu;
            // 0x17948c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = 0x179490u;
        goto label_179490;
    }
    ctx->pc = 0x179488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x179490u);
        ctx->pc = 0x17948Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179488u;
            // 0x17948c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x179490u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x179490u; }
            if (ctx->pc != 0x179490u) { return; }
        }
        }
    }
    ctx->pc = 0x179490u;
label_179490:
    // 0x179490: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x179490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_179494:
    // 0x179494: 0x3e00008  jr          $ra
label_179498:
    if (ctx->pc == 0x179498u) {
        ctx->pc = 0x179498u;
            // 0x179498: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x17949Cu;
        goto label_17949c;
    }
    ctx->pc = 0x179494u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179494u;
            // 0x179498: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17949Cu;
label_17949c:
    // 0x17949c: 0x0  nop
    ctx->pc = 0x17949cu;
    // NOP
label_1794a0:
    // 0x1794a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1794a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1794a4:
    // 0x1794a4: 0x248450a8  addiu       $a0, $a0, 0x50A8
    ctx->pc = 0x1794a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20648));
label_1794a8:
    // 0x1794a8: 0x805e0a6  j           func_178298
label_1794ac:
    if (ctx->pc == 0x1794ACu) {
        ctx->pc = 0x1794ACu;
            // 0x1794ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1794B0u;
        goto label_1794b0;
    }
    ctx->pc = 0x1794A8u;
    ctx->pc = 0x1794ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1794A8u;
            // 0x1794ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00178298_0x178298(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1794B0u;
label_1794b0:
    // 0x1794b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1794b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1794b4:
    // 0x1794b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1794b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1794b8:
    // 0x1794b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1794b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1794bc:
    // 0x1794bc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_1794c0:
    if (ctx->pc == 0x1794C0u) {
        ctx->pc = 0x1794C0u;
            // 0x1794c0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->pc = 0x1794C4u;
        goto label_1794c4;
    }
    ctx->pc = 0x1794BCu;
    {
        const bool branch_taken_0x1794bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1794C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1794BCu;
            // 0x1794c0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1794bc) {
            ctx->pc = 0x1794D8u;
            goto label_1794d8;
        }
    }
    ctx->pc = 0x1794C4u;
label_1794c4:
    // 0x1794c4: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1794c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_1794c8:
    // 0x1794c8: 0xc05e0a6  jal         func_178298
label_1794cc:
    if (ctx->pc == 0x1794CCu) {
        ctx->pc = 0x1794CCu;
            // 0x1794cc: 0x248450c8  addiu       $a0, $a0, 0x50C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20680));
        ctx->pc = 0x1794D0u;
        goto label_1794d0;
    }
    ctx->pc = 0x1794C8u;
    SET_GPR_U32(ctx, 31, 0x1794D0u);
    ctx->pc = 0x1794CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1794C8u;
            // 0x1794cc: 0x248450c8  addiu       $a0, $a0, 0x50C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1794D0u; }
        if (ctx->pc != 0x1794D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178298_0x178298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1794D0u; }
        if (ctx->pc != 0x1794D0u) { return; }
    }
    ctx->pc = 0x1794D0u;
label_1794d0:
    // 0x1794d0: 0x1000000c  b           . + 4 + (0xC << 2)
label_1794d4:
    if (ctx->pc == 0x1794D4u) {
        ctx->pc = 0x1794D4u;
            // 0x1794d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1794D8u;
        goto label_1794d8;
    }
    ctx->pc = 0x1794D0u;
    {
        const bool branch_taken_0x1794d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1794D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1794D0u;
            // 0x1794d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1794d0) {
            ctx->pc = 0x179504u;
            goto label_179504;
        }
    }
    ctx->pc = 0x1794D8u;
label_1794d8:
    // 0x1794d8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1794d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1794dc:
    // 0x1794dc: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x1794dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_1794e0:
    // 0x1794e0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1794e4:
    if (ctx->pc == 0x1794E4u) {
        ctx->pc = 0x1794E4u;
            // 0x1794e4: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->pc = 0x1794E8u;
        goto label_1794e8;
    }
    ctx->pc = 0x1794E0u;
    {
        const bool branch_taken_0x1794e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1794e0) {
            ctx->pc = 0x1794E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1794E0u;
            // 0x1794e4: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1794F8u;
            goto label_1794f8;
        }
    }
    ctx->pc = 0x1794E8u;
label_1794e8:
    // 0x1794e8: 0x40f809  jalr        $v0
label_1794ec:
    if (ctx->pc == 0x1794ECu) {
        ctx->pc = 0x1794ECu;
            // 0x1794ec: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = 0x1794F0u;
        goto label_1794f0;
    }
    ctx->pc = 0x1794E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1794F0u);
        ctx->pc = 0x1794ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1794E8u;
            // 0x1794ec: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1794F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1794F0u; }
            if (ctx->pc != 0x1794F0u) { return; }
        }
        }
    }
    ctx->pc = 0x1794F0u;
label_1794f0:
    // 0x1794f0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1794f4:
    if (ctx->pc == 0x1794F4u) {
        ctx->pc = 0x1794F4u;
            // 0x1794f4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1794F8u;
        goto label_1794f8;
    }
    ctx->pc = 0x1794F0u;
    {
        const bool branch_taken_0x1794f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1794F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1794F0u;
            // 0x1794f4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1794f0) {
            ctx->pc = 0x179500u;
            goto label_179500;
        }
    }
    ctx->pc = 0x1794F8u;
label_1794f8:
    // 0x1794f8: 0xc05e0a6  jal         func_178298
label_1794fc:
    if (ctx->pc == 0x1794FCu) {
        ctx->pc = 0x1794FCu;
            // 0x1794fc: 0x248450e8  addiu       $a0, $a0, 0x50E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20712));
        ctx->pc = 0x179500u;
        goto label_179500;
    }
    ctx->pc = 0x1794F8u;
    SET_GPR_U32(ctx, 31, 0x179500u);
    ctx->pc = 0x1794FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1794F8u;
            // 0x1794fc: 0x248450e8  addiu       $a0, $a0, 0x50E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179500u; }
        if (ctx->pc != 0x179500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178298_0x178298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179500u; }
        if (ctx->pc != 0x179500u) { return; }
    }
    ctx->pc = 0x179500u;
label_179500:
    // 0x179500: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x179500u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_179504:
    // 0x179504: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x179504u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_179508:
    // 0x179508: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x179508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_17950c:
    // 0x17950c: 0x3e00008  jr          $ra
label_179510:
    if (ctx->pc == 0x179510u) {
        ctx->pc = 0x179510u;
            // 0x179510: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x179514u;
        goto label_179514;
    }
    ctx->pc = 0x17950Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17950Cu;
            // 0x179510: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x179514u;
label_179514:
    // 0x179514: 0x0  nop
    ctx->pc = 0x179514u;
    // NOP
label_179518:
    // 0x179518: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x179518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
label_17951c:
    // 0x17951c: 0xffb00260  sd          $s0, 0x260($sp)
    ctx->pc = 0x17951cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 16));
label_179520:
    // 0x179520: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x179520u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_179524:
    // 0x179524: 0xffb10268  sd          $s1, 0x268($sp)
    ctx->pc = 0x179524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 17));
label_179528:
    // 0x179528: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_17952c:
    if (ctx->pc == 0x17952Cu) {
        ctx->pc = 0x17952Cu;
            // 0x17952c: 0xffbf0270  sd          $ra, 0x270($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 31));
        ctx->pc = 0x179530u;
        goto label_179530;
    }
    ctx->pc = 0x179528u;
    {
        const bool branch_taken_0x179528 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x17952Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179528u;
            // 0x17952c: 0xffbf0270  sd          $ra, 0x270($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179528) {
            ctx->pc = 0x179540u;
            goto label_179540;
        }
    }
    ctx->pc = 0x179530u;
label_179530:
    // 0x179530: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x179530u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_179534:
    // 0x179534: 0x1000001f  b           . + 4 + (0x1F << 2)
label_179538:
    if (ctx->pc == 0x179538u) {
        ctx->pc = 0x179538u;
            // 0x179538: 0x24845108  addiu       $a0, $a0, 0x5108 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20744));
        ctx->pc = 0x17953Cu;
        goto label_17953c;
    }
    ctx->pc = 0x179534u;
    {
        const bool branch_taken_0x179534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179534u;
            // 0x179538: 0x24845108  addiu       $a0, $a0, 0x5108 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179534) {
            ctx->pc = 0x1795B4u;
            goto label_1795b4;
        }
    }
    ctx->pc = 0x17953Cu;
label_17953c:
    // 0x17953c: 0x0  nop
    ctx->pc = 0x17953cu;
    // NOP
label_179540:
    // 0x179540: 0x27b10130  addiu       $s1, $sp, 0x130
    ctx->pc = 0x179540u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_179544:
    // 0x179544: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x179544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_179548:
    // 0x179548: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x179548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17954c:
    // 0x17954c: 0xc05e2b4  jal         func_178AD0
label_179550:
    if (ctx->pc == 0x179550u) {
        ctx->pc = 0x179550u;
            // 0x179550: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179554u;
        goto label_179554;
    }
    ctx->pc = 0x17954Cu;
    SET_GPR_U32(ctx, 31, 0x179554u);
    ctx->pc = 0x179550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17954Cu;
            // 0x179550: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178AD0u;
    if (runtime->hasFunction(0x178AD0u)) {
        auto targetFn = runtime->lookupFunction(0x178AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179554u; }
        if (ctx->pc != 0x179554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178AD0_0x178ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179554u; }
        if (ctx->pc != 0x179554u) { return; }
    }
    ctx->pc = 0x179554u;
label_179554:
    // 0x179554: 0x83a20130  lb          $v0, 0x130($sp)
    ctx->pc = 0x179554u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 304)));
label_179558:
    // 0x179558: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_17955c:
    if (ctx->pc == 0x17955Cu) {
        ctx->pc = 0x17955Cu;
            // 0x17955c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179560u;
        goto label_179560;
    }
    ctx->pc = 0x179558u;
    {
        const bool branch_taken_0x179558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17955Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179558u;
            // 0x17955c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179558) {
            ctx->pc = 0x179570u;
            goto label_179570;
        }
    }
    ctx->pc = 0x179560u;
label_179560:
    // 0x179560: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x179560u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_179564:
    // 0x179564: 0x10000013  b           . + 4 + (0x13 << 2)
label_179568:
    if (ctx->pc == 0x179568u) {
        ctx->pc = 0x179568u;
            // 0x179568: 0x24845108  addiu       $a0, $a0, 0x5108 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20744));
        ctx->pc = 0x17956Cu;
        goto label_17956c;
    }
    ctx->pc = 0x179564u;
    {
        const bool branch_taken_0x179564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179564u;
            // 0x179568: 0x24845108  addiu       $a0, $a0, 0x5108 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179564) {
            ctx->pc = 0x1795B4u;
            goto label_1795b4;
        }
    }
    ctx->pc = 0x17956Cu;
label_17956c:
    // 0x17956c: 0x0  nop
    ctx->pc = 0x17956cu;
    // NOP
label_179570:
    // 0x179570: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x179570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_179574:
    // 0x179574: 0xc05e222  jal         func_178888
label_179578:
    if (ctx->pc == 0x179578u) {
        ctx->pc = 0x179578u;
            // 0x179578: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17957Cu;
        goto label_17957c;
    }
    ctx->pc = 0x179574u;
    SET_GPR_U32(ctx, 31, 0x17957Cu);
    ctx->pc = 0x179578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179574u;
            // 0x179578: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178888u;
    if (runtime->hasFunction(0x178888u)) {
        auto targetFn = runtime->lookupFunction(0x178888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17957Cu; }
        if (ctx->pc != 0x17957Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178888_0x178888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17957Cu; }
        if (ctx->pc != 0x17957Cu) { return; }
    }
    ctx->pc = 0x17957Cu;
label_17957c:
    // 0x17957c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17957cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_179580:
    // 0x179580: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
label_179584:
    if (ctx->pc == 0x179584u) {
        ctx->pc = 0x179584u;
            // 0x179584: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->pc = 0x179588u;
        goto label_179588;
    }
    ctx->pc = 0x179580u;
    {
        const bool branch_taken_0x179580 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x179580) {
            ctx->pc = 0x179584u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x179580u;
            // 0x179584: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x179598u;
            goto label_179598;
        }
    }
    ctx->pc = 0x179588u;
label_179588:
    // 0x179588: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x179588u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_17958c:
    // 0x17958c: 0xc05e0a6  jal         func_178298
label_179590:
    if (ctx->pc == 0x179590u) {
        ctx->pc = 0x179590u;
            // 0x179590: 0x24845158  addiu       $a0, $a0, 0x5158 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20824));
        ctx->pc = 0x179594u;
        goto label_179594;
    }
    ctx->pc = 0x17958Cu;
    SET_GPR_U32(ctx, 31, 0x179594u);
    ctx->pc = 0x179590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17958Cu;
            // 0x179590: 0x24845158  addiu       $a0, $a0, 0x5158 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20824));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179594u; }
        if (ctx->pc != 0x179594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178298_0x178298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179594u; }
        if (ctx->pc != 0x179594u) { return; }
    }
    ctx->pc = 0x179594u;
label_179594:
    // 0x179594: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x179594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_179598:
    // 0x179598: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_17959c:
    if (ctx->pc == 0x17959Cu) {
        ctx->pc = 0x17959Cu;
            // 0x17959c: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->pc = 0x1795A0u;
        goto label_1795a0;
    }
    ctx->pc = 0x179598u;
    {
        const bool branch_taken_0x179598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x179598) {
            ctx->pc = 0x17959Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x179598u;
            // 0x17959c: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1795B0u;
            goto label_1795b0;
        }
    }
    ctx->pc = 0x1795A0u;
label_1795a0:
    // 0x1795a0: 0x40f809  jalr        $v0
label_1795a4:
    if (ctx->pc == 0x1795A4u) {
        ctx->pc = 0x1795A4u;
            // 0x1795a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1795A8u;
        goto label_1795a8;
    }
    ctx->pc = 0x1795A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1795A8u);
        ctx->pc = 0x1795A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1795A0u;
            // 0x1795a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1795A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1795A8u; }
            if (ctx->pc != 0x1795A8u) { return; }
        }
        }
    }
    ctx->pc = 0x1795A8u;
label_1795a8:
    // 0x1795a8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1795ac:
    if (ctx->pc == 0x1795ACu) {
        ctx->pc = 0x1795ACu;
            // 0x1795ac: 0xdfb00260  ld          $s0, 0x260($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->pc = 0x1795B0u;
        goto label_1795b0;
    }
    ctx->pc = 0x1795A8u;
    {
        const bool branch_taken_0x1795a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1795ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1795A8u;
            // 0x1795ac: 0xdfb00260  ld          $s0, 0x260($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1795a8) {
            ctx->pc = 0x1795C4u;
            goto label_1795c4;
        }
    }
    ctx->pc = 0x1795B0u;
label_1795b0:
    // 0x1795b0: 0x24845180  addiu       $a0, $a0, 0x5180
    ctx->pc = 0x1795b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20864));
label_1795b4:
    // 0x1795b4: 0xc05e0a6  jal         func_178298
label_1795b8:
    if (ctx->pc == 0x1795B8u) {
        ctx->pc = 0x1795BCu;
        goto label_1795bc;
    }
    ctx->pc = 0x1795B4u;
    SET_GPR_U32(ctx, 31, 0x1795BCu);
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1795BCu; }
        if (ctx->pc != 0x1795BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178298_0x178298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1795BCu; }
        if (ctx->pc != 0x1795BCu) { return; }
    }
    ctx->pc = 0x1795BCu;
label_1795bc:
    // 0x1795bc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1795bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1795c0:
    // 0x1795c0: 0xdfb00260  ld          $s0, 0x260($sp)
    ctx->pc = 0x1795c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
label_1795c4:
    // 0x1795c4: 0xdfb10268  ld          $s1, 0x268($sp)
    ctx->pc = 0x1795c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 616)));
label_1795c8:
    // 0x1795c8: 0xdfbf0270  ld          $ra, 0x270($sp)
    ctx->pc = 0x1795c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 624)));
label_1795cc:
    // 0x1795cc: 0x3e00008  jr          $ra
label_1795d0:
    if (ctx->pc == 0x1795D0u) {
        ctx->pc = 0x1795D0u;
            // 0x1795d0: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->pc = 0x1795D4u;
        goto label_1795d4;
    }
    ctx->pc = 0x1795CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1795D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1795CCu;
            // 0x1795d0: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1795D4u;
label_1795d4:
    // 0x1795d4: 0x0  nop
    ctx->pc = 0x1795d4u;
    // NOP
label_1795d8:
    // 0x1795d8: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x1795d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
label_1795dc:
    // 0x1795dc: 0xffb00260  sd          $s0, 0x260($sp)
    ctx->pc = 0x1795dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 16));
label_1795e0:
    // 0x1795e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1795e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1795e4:
    // 0x1795e4: 0xffb10268  sd          $s1, 0x268($sp)
    ctx->pc = 0x1795e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 17));
label_1795e8:
    // 0x1795e8: 0x27b10130  addiu       $s1, $sp, 0x130
    ctx->pc = 0x1795e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_1795ec:
    // 0x1795ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1795ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1795f0:
    // 0x1795f0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1795f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1795f4:
    // 0x1795f4: 0xffbf0270  sd          $ra, 0x270($sp)
    ctx->pc = 0x1795f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 31));
label_1795f8:
    // 0x1795f8: 0xc05e2b4  jal         func_178AD0
label_1795fc:
    if (ctx->pc == 0x1795FCu) {
        ctx->pc = 0x1795FCu;
            // 0x1795fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179600u;
        goto label_179600;
    }
    ctx->pc = 0x1795F8u;
    SET_GPR_U32(ctx, 31, 0x179600u);
    ctx->pc = 0x1795FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1795F8u;
            // 0x1795fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178AD0u;
    if (runtime->hasFunction(0x178AD0u)) {
        auto targetFn = runtime->lookupFunction(0x178AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179600u; }
        if (ctx->pc != 0x179600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178AD0_0x178ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179600u; }
        if (ctx->pc != 0x179600u) { return; }
    }
    ctx->pc = 0x179600u;
label_179600:
    // 0x179600: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x179600u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_179604:
    // 0x179604: 0x83a20130  lb          $v0, 0x130($sp)
    ctx->pc = 0x179604u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 304)));
label_179608:
    // 0x179608: 0x248451a0  addiu       $a0, $a0, 0x51A0
    ctx->pc = 0x179608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20896));
label_17960c:
    // 0x17960c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x17960cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_179610:
    // 0x179610: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_179614:
    if (ctx->pc == 0x179614u) {
        ctx->pc = 0x179614u;
            // 0x179614: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179618u;
        goto label_179618;
    }
    ctx->pc = 0x179610u;
    {
        const bool branch_taken_0x179610 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x179614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179610u;
            // 0x179614: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179610) {
            ctx->pc = 0x17965Cu;
            goto label_17965c;
        }
    }
    ctx->pc = 0x179618u;
label_179618:
    // 0x179618: 0xc05e222  jal         func_178888
label_17961c:
    if (ctx->pc == 0x17961Cu) {
        ctx->pc = 0x17961Cu;
            // 0x17961c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179620u;
        goto label_179620;
    }
    ctx->pc = 0x179618u;
    SET_GPR_U32(ctx, 31, 0x179620u);
    ctx->pc = 0x17961Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179618u;
            // 0x17961c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178888u;
    if (runtime->hasFunction(0x178888u)) {
        auto targetFn = runtime->lookupFunction(0x178888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179620u; }
        if (ctx->pc != 0x179620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178888_0x178888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179620u; }
        if (ctx->pc != 0x179620u) { return; }
    }
    ctx->pc = 0x179620u;
label_179620:
    // 0x179620: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x179620u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_179624:
    // 0x179624: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x179624u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_179628:
    // 0x179628: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_17962c:
    if (ctx->pc == 0x17962Cu) {
        ctx->pc = 0x17962Cu;
            // 0x17962c: 0x248451f0  addiu       $a0, $a0, 0x51F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20976));
        ctx->pc = 0x179630u;
        goto label_179630;
    }
    ctx->pc = 0x179628u;
    {
        const bool branch_taken_0x179628 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x17962Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179628u;
            // 0x17962c: 0x248451f0  addiu       $a0, $a0, 0x51F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179628) {
            ctx->pc = 0x179638u;
            goto label_179638;
        }
    }
    ctx->pc = 0x179630u;
label_179630:
    // 0x179630: 0xc05e0a6  jal         func_178298
label_179634:
    if (ctx->pc == 0x179634u) {
        ctx->pc = 0x179638u;
        goto label_179638;
    }
    ctx->pc = 0x179630u;
    SET_GPR_U32(ctx, 31, 0x179638u);
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179638u; }
        if (ctx->pc != 0x179638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178298_0x178298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179638u; }
        if (ctx->pc != 0x179638u) { return; }
    }
    ctx->pc = 0x179638u;
label_179638:
    // 0x179638: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x179638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_17963c:
    // 0x17963c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_179640:
    if (ctx->pc == 0x179640u) {
        ctx->pc = 0x179640u;
            // 0x179640: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->pc = 0x179644u;
        goto label_179644;
    }
    ctx->pc = 0x17963Cu;
    {
        const bool branch_taken_0x17963c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17963c) {
            ctx->pc = 0x179640u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17963Cu;
            // 0x179640: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x179658u;
            goto label_179658;
        }
    }
    ctx->pc = 0x179644u;
label_179644:
    // 0x179644: 0x40f809  jalr        $v0
label_179648:
    if (ctx->pc == 0x179648u) {
        ctx->pc = 0x179648u;
            // 0x179648: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17964Cu;
        goto label_17964c;
    }
    ctx->pc = 0x179644u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17964Cu);
        ctx->pc = 0x179648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179644u;
            // 0x179648: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17964Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17964Cu; }
            if (ctx->pc != 0x17964Cu) { return; }
        }
        }
    }
    ctx->pc = 0x17964Cu;
label_17964c:
    // 0x17964c: 0x10000007  b           . + 4 + (0x7 << 2)
label_179650:
    if (ctx->pc == 0x179650u) {
        ctx->pc = 0x179650u;
            // 0x179650: 0xdfb00260  ld          $s0, 0x260($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->pc = 0x179654u;
        goto label_179654;
    }
    ctx->pc = 0x17964Cu;
    {
        const bool branch_taken_0x17964c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17964Cu;
            // 0x179650: 0xdfb00260  ld          $s0, 0x260($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17964c) {
            ctx->pc = 0x17966Cu;
            goto label_17966c;
        }
    }
    ctx->pc = 0x179654u;
label_179654:
    // 0x179654: 0x0  nop
    ctx->pc = 0x179654u;
    // NOP
label_179658:
    // 0x179658: 0x24845218  addiu       $a0, $a0, 0x5218
    ctx->pc = 0x179658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21016));
label_17965c:
    // 0x17965c: 0xc05e0a6  jal         func_178298
label_179660:
    if (ctx->pc == 0x179660u) {
        ctx->pc = 0x179664u;
        goto label_179664;
    }
    ctx->pc = 0x17965Cu;
    SET_GPR_U32(ctx, 31, 0x179664u);
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179664u; }
        if (ctx->pc != 0x179664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178298_0x178298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179664u; }
        if (ctx->pc != 0x179664u) { return; }
    }
    ctx->pc = 0x179664u;
label_179664:
    // 0x179664: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x179664u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_179668:
    // 0x179668: 0xdfb00260  ld          $s0, 0x260($sp)
    ctx->pc = 0x179668u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
label_17966c:
    // 0x17966c: 0xdfb10268  ld          $s1, 0x268($sp)
    ctx->pc = 0x17966cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 616)));
label_179670:
    // 0x179670: 0xdfbf0270  ld          $ra, 0x270($sp)
    ctx->pc = 0x179670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 624)));
label_179674:
    // 0x179674: 0x3e00008  jr          $ra
label_179678:
    if (ctx->pc == 0x179678u) {
        ctx->pc = 0x179678u;
            // 0x179678: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->pc = 0x17967Cu;
        goto label_17967c;
    }
    ctx->pc = 0x179674u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179674u;
            // 0x179678: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17967Cu;
label_17967c:
    // 0x17967c: 0x0  nop
    ctx->pc = 0x17967cu;
    // NOP
label_179680:
    // 0x179680: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x179680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_179684:
    // 0x179684: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x179684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_179688:
    // 0x179688: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x179688u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17968c:
    // 0x17968c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x17968cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_179690:
    // 0x179690: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x179690u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_179694:
    // 0x179694: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x179694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_179698:
    // 0x179698: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x179698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_17969c:
    // 0x17969c: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x17969cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_1796a0:
    // 0x1796a0: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x1796a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_1796a4:
    // 0x1796a4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1796a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1796a8:
    // 0x1796a8: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1796a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_1796ac:
    // 0x1796ac: 0xc04b02e  jal         func_12C0B8
label_1796b0:
    if (ctx->pc == 0x1796B0u) {
        ctx->pc = 0x1796B0u;
            // 0x1796b0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1796B4u;
        goto label_1796b4;
    }
    ctx->pc = 0x1796ACu;
    SET_GPR_U32(ctx, 31, 0x1796B4u);
    ctx->pc = 0x1796B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1796ACu;
            // 0x1796b0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1796B4u; }
        if (ctx->pc != 0x1796B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1796B4u; }
        if (ctx->pc != 0x1796B4u) { return; }
    }
    ctx->pc = 0x1796B4u;
label_1796b4:
    // 0x1796b4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1796b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1796b8:
    // 0x1796b8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x1796b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_1796bc:
    // 0x1796bc: 0x2453d3dc  addiu       $s3, $v0, -0x2C24
    ctx->pc = 0x1796bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955996));
label_1796c0:
    // 0x1796c0: 0x2676fffc  addiu       $s6, $s3, -0x4
    ctx->pc = 0x1796c0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
label_1796c4:
    // 0x1796c4: 0x118100  sll         $s0, $s1, 4
    ctx->pc = 0x1796c4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_1796c8:
    // 0x1796c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1796c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1796cc:
    // 0x1796cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1796ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1796d0:
    // 0x1796d0: 0x2132821  addu        $a1, $s0, $s3
    ctx->pc = 0x1796d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_1796d4:
    // 0x1796d4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1796d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1796d8:
    // 0x1796d8: 0xc04b0e8  jal         func_12C3A0
label_1796dc:
    if (ctx->pc == 0x1796DCu) {
        ctx->pc = 0x1796DCu;
            // 0x1796dc: 0x2168021  addu        $s0, $s0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
        ctx->pc = 0x1796E0u;
        goto label_1796e0;
    }
    ctx->pc = 0x1796D8u;
    SET_GPR_U32(ctx, 31, 0x1796E0u);
    ctx->pc = 0x1796DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1796D8u;
            // 0x1796dc: 0x2168021  addu        $s0, $s0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C3A0u;
    if (runtime->hasFunction(0x12C3A0u)) {
        auto targetFn = runtime->lookupFunction(0x12C3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1796E0u; }
        if (ctx->pc != 0x1796E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C3A0_0x12c3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1796E0u; }
        if (ctx->pc != 0x1796E0u) { return; }
    }
    ctx->pc = 0x1796E0u;
label_1796e0:
    // 0x1796e0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_1796e4:
    if (ctx->pc == 0x1796E4u) {
        ctx->pc = 0x1796E4u;
            // 0x1796e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1796E8u;
        goto label_1796e8;
    }
    ctx->pc = 0x1796E0u;
    {
        const bool branch_taken_0x1796e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1796E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1796E0u;
            // 0x1796e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1796e0) {
            ctx->pc = 0x179758u;
            goto label_179758;
        }
    }
    ctx->pc = 0x1796E8u;
label_1796e8:
    // 0x1796e8: 0xc05e828  jal         func_17A0A0
label_1796ec:
    if (ctx->pc == 0x1796ECu) {
        ctx->pc = 0x1796ECu;
            // 0x1796ec: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1796F0u;
        goto label_1796f0;
    }
    ctx->pc = 0x1796E8u;
    SET_GPR_U32(ctx, 31, 0x1796F0u);
    ctx->pc = 0x1796ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1796E8u;
            // 0x1796ec: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A0A0u;
    if (runtime->hasFunction(0x17A0A0u)) {
        auto targetFn = runtime->lookupFunction(0x17A0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1796F0u; }
        if (ctx->pc != 0x1796F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A0A0_0x17a0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1796F0u; }
        if (ctx->pc != 0x1796F0u) { return; }
    }
    ctx->pc = 0x1796F0u;
label_1796f0:
    // 0x1796f0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1796f4:
    if (ctx->pc == 0x1796F4u) {
        ctx->pc = 0x1796F8u;
        goto label_1796f8;
    }
    ctx->pc = 0x1796F0u;
    {
        const bool branch_taken_0x1796f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1796f0) {
            ctx->pc = 0x179730u;
            goto label_179730;
        }
    }
    ctx->pc = 0x1796F8u;
label_1796f8:
    // 0x1796f8: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
label_1796fc:
    if (ctx->pc == 0x1796FCu) {
        ctx->pc = 0x1796FCu;
            // 0x1796fc: 0x2a220020  slti        $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->pc = 0x179700u;
        goto label_179700;
    }
    ctx->pc = 0x1796F8u;
    {
        const bool branch_taken_0x1796f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1796FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1796F8u;
            // 0x1796fc: 0x2a220020  slti        $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1796f8) {
            ctx->pc = 0x17975Cu;
            goto label_17975c;
        }
    }
    ctx->pc = 0x179700u;
label_179700:
    // 0x179700: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x179700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_179704:
    // 0x179704: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_179708:
    if (ctx->pc == 0x179708u) {
        ctx->pc = 0x179708u;
            // 0x179708: 0x2a220020  slti        $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->pc = 0x17970Cu;
        goto label_17970c;
    }
    ctx->pc = 0x179704u;
    {
        const bool branch_taken_0x179704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x179708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179704u;
            // 0x179708: 0x2a220020  slti        $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x179704) {
            ctx->pc = 0x17975Cu;
            goto label_17975c;
        }
    }
    ctx->pc = 0x17970Cu;
label_17970c:
    // 0x17970c: 0xafb20004  sw          $s2, 0x4($sp)
    ctx->pc = 0x17970cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 18));
label_179710:
    // 0x179710: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x179710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_179714:
    // 0x179714: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x179714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_179718:
    // 0x179718: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x179718u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17971c:
    // 0x17971c: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x17971cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_179720:
    // 0x179720: 0x40f809  jalr        $v0
label_179724:
    if (ctx->pc == 0x179724u) {
        ctx->pc = 0x179724u;
            // 0x179724: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179728u;
        goto label_179728;
    }
    ctx->pc = 0x179720u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x179728u);
        ctx->pc = 0x179724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179720u;
            // 0x179724: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x179728u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x179728u; }
            if (ctx->pc != 0x179728u) { return; }
        }
        }
    }
    ctx->pc = 0x179728u;
label_179728:
    // 0x179728: 0x1000000e  b           . + 4 + (0xE << 2)
label_17972c:
    if (ctx->pc == 0x17972Cu) {
        ctx->pc = 0x17972Cu;
            // 0x17972c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179730u;
        goto label_179730;
    }
    ctx->pc = 0x179728u;
    {
        const bool branch_taken_0x179728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17972Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179728u;
            // 0x17972c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179728) {
            ctx->pc = 0x179764u;
            goto label_179764;
        }
    }
    ctx->pc = 0x179730u;
label_179730:
    // 0x179730: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_179734:
    if (ctx->pc == 0x179734u) {
        ctx->pc = 0x179734u;
            // 0x179734: 0x2a220020  slti        $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->pc = 0x179738u;
        goto label_179738;
    }
    ctx->pc = 0x179730u;
    {
        const bool branch_taken_0x179730 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x179734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179730u;
            // 0x179734: 0x2a220020  slti        $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x179730) {
            ctx->pc = 0x17975Cu;
            goto label_17975c;
        }
    }
    ctx->pc = 0x179738u;
label_179738:
    // 0x179738: 0x8e100044  lw          $s0, 0x44($s0)
    ctx->pc = 0x179738u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_17973c:
    // 0x17973c: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_179740:
    if (ctx->pc == 0x179740u) {
        ctx->pc = 0x179744u;
        goto label_179744;
    }
    ctx->pc = 0x17973Cu;
    {
        const bool branch_taken_0x17973c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x17973c) {
            ctx->pc = 0x17975Cu;
            goto label_17975c;
        }
    }
    ctx->pc = 0x179744u;
label_179744:
    // 0x179744: 0x200f809  jalr        $s0
label_179748:
    if (ctx->pc == 0x179748u) {
        ctx->pc = 0x17974Cu;
        goto label_17974c;
    }
    ctx->pc = 0x179744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x17974Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x17974Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17974Cu; }
            if (ctx->pc != 0x17974Cu) { return; }
        }
        }
    }
    ctx->pc = 0x17974Cu;
label_17974c:
    // 0x17974c: 0x10000005  b           . + 4 + (0x5 << 2)
label_179750:
    if (ctx->pc == 0x179750u) {
        ctx->pc = 0x179750u;
            // 0x179750: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179754u;
        goto label_179754;
    }
    ctx->pc = 0x17974Cu;
    {
        const bool branch_taken_0x17974c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17974Cu;
            // 0x179750: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17974c) {
            ctx->pc = 0x179764u;
            goto label_179764;
        }
    }
    ctx->pc = 0x179754u;
label_179754:
    // 0x179754: 0x0  nop
    ctx->pc = 0x179754u;
    // NOP
label_179758:
    // 0x179758: 0x2a220020  slti        $v0, $s1, 0x20
    ctx->pc = 0x179758u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
label_17975c:
    // 0x17975c: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
label_179760:
    if (ctx->pc == 0x179760u) {
        ctx->pc = 0x179760u;
            // 0x179760: 0x118100  sll         $s0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x179764u;
        goto label_179764;
    }
    ctx->pc = 0x17975Cu;
    {
        const bool branch_taken_0x17975c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x179760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17975Cu;
            // 0x179760: 0x118100  sll         $s0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17975c) {
            ctx->pc = 0x1796C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1796c8;
        }
    }
    ctx->pc = 0x179764u;
label_179764:
    // 0x179764: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x179764u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_179768:
    // 0x179768: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x179768u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17976c:
    // 0x17976c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x17976cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_179770:
    // 0x179770: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x179770u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_179774:
    // 0x179774: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x179774u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_179778:
    // 0x179778: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x179778u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_17977c:
    // 0x17977c: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x17977cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_179780:
    // 0x179780: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x179780u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_179784:
    // 0x179784: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x179784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_179788:
    // 0x179788: 0x3e00008  jr          $ra
label_17978c:
    if (ctx->pc == 0x17978Cu) {
        ctx->pc = 0x17978Cu;
            // 0x17978c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x179790u;
        goto label_179790;
    }
    ctx->pc = 0x179788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17978Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179788u;
            // 0x17978c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x179790u;
label_179790:
    // 0x179790: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x179790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
label_179794:
    // 0x179794: 0xffb00260  sd          $s0, 0x260($sp)
    ctx->pc = 0x179794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 16));
label_179798:
    // 0x179798: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x179798u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17979c:
    // 0x17979c: 0xffb10268  sd          $s1, 0x268($sp)
    ctx->pc = 0x17979cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 17));
label_1797a0:
    // 0x1797a0: 0x27b10130  addiu       $s1, $sp, 0x130
    ctx->pc = 0x1797a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_1797a4:
    // 0x1797a4: 0xffb20270  sd          $s2, 0x270($sp)
    ctx->pc = 0x1797a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 18));
label_1797a8:
    // 0x1797a8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1797a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1797ac:
    // 0x1797ac: 0xffb30278  sd          $s3, 0x278($sp)
    ctx->pc = 0x1797acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 632), GPR_U64(ctx, 19));
label_1797b0:
    // 0x1797b0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1797b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1797b4:
    // 0x1797b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1797b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1797b8:
    // 0x1797b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1797b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1797bc:
    // 0x1797bc: 0xffb40280  sd          $s4, 0x280($sp)
    ctx->pc = 0x1797bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 20));
label_1797c0:
    // 0x1797c0: 0xffbf0288  sd          $ra, 0x288($sp)
    ctx->pc = 0x1797c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 648), GPR_U64(ctx, 31));
label_1797c4:
    // 0x1797c4: 0xc05e2b4  jal         func_178AD0
label_1797c8:
    if (ctx->pc == 0x1797C8u) {
        ctx->pc = 0x1797C8u;
            // 0x1797c8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1797CCu;
        goto label_1797cc;
    }
    ctx->pc = 0x1797C4u;
    SET_GPR_U32(ctx, 31, 0x1797CCu);
    ctx->pc = 0x1797C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1797C4u;
            // 0x1797c8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178AD0u;
    if (runtime->hasFunction(0x178AD0u)) {
        auto targetFn = runtime->lookupFunction(0x178AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1797CCu; }
        if (ctx->pc != 0x1797CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178AD0_0x178ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1797CCu; }
        if (ctx->pc != 0x1797CCu) { return; }
    }
    ctx->pc = 0x1797CCu;
label_1797cc:
    // 0x1797cc: 0x83a20000  lb          $v0, 0x0($sp)
    ctx->pc = 0x1797ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_1797d0:
    // 0x1797d0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1797d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1797d4:
    // 0x1797d4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_1797d8:
    if (ctx->pc == 0x1797D8u) {
        ctx->pc = 0x1797D8u;
            // 0x1797d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1797DCu;
        goto label_1797dc;
    }
    ctx->pc = 0x1797D4u;
    {
        const bool branch_taken_0x1797d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1797D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1797D4u;
            // 0x1797d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1797d4) {
            ctx->pc = 0x179808u;
            goto label_179808;
        }
    }
    ctx->pc = 0x1797DCu;
label_1797dc:
    // 0x1797dc: 0xc05e306  jal         func_178C18
label_1797e0:
    if (ctx->pc == 0x1797E0u) {
        ctx->pc = 0x1797E4u;
        goto label_1797e4;
    }
    ctx->pc = 0x1797DCu;
    SET_GPR_U32(ctx, 31, 0x1797E4u);
    ctx->pc = 0x178C18u;
    if (runtime->hasFunction(0x178C18u)) {
        auto targetFn = runtime->lookupFunction(0x178C18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1797E4u; }
        if (ctx->pc != 0x1797E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178C18_0x178c18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1797E4u; }
        if (ctx->pc != 0x1797E4u) { return; }
    }
    ctx->pc = 0x1797E4u;
label_1797e4:
    // 0x1797e4: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1797e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_1797e8:
    // 0x1797e8: 0x83a20000  lb          $v0, 0x0($sp)
    ctx->pc = 0x1797e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_1797ec:
    // 0x1797ec: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1797f0:
    if (ctx->pc == 0x1797F0u) {
        ctx->pc = 0x1797F0u;
            // 0x1797f0: 0x248451c8  addiu       $a0, $a0, 0x51C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20936));
        ctx->pc = 0x1797F4u;
        goto label_1797f4;
    }
    ctx->pc = 0x1797ECu;
    {
        const bool branch_taken_0x1797ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1797F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1797ECu;
            // 0x1797f0: 0x248451c8  addiu       $a0, $a0, 0x51C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1797ec) {
            ctx->pc = 0x179808u;
            goto label_179808;
        }
    }
    ctx->pc = 0x1797F4u;
label_1797f4:
    // 0x1797f4: 0xc05e0a6  jal         func_178298
label_1797f8:
    if (ctx->pc == 0x1797F8u) {
        ctx->pc = 0x1797FCu;
        goto label_1797fc;
    }
    ctx->pc = 0x1797F4u;
    SET_GPR_U32(ctx, 31, 0x1797FCu);
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1797FCu; }
        if (ctx->pc != 0x1797FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178298_0x178298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1797FCu; }
        if (ctx->pc != 0x1797FCu) { return; }
    }
    ctx->pc = 0x1797FCu;
label_1797fc:
    // 0x1797fc: 0x10000011  b           . + 4 + (0x11 << 2)
label_179800:
    if (ctx->pc == 0x179800u) {
        ctx->pc = 0x179800u;
            // 0x179800: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179804u;
        goto label_179804;
    }
    ctx->pc = 0x1797FCu;
    {
        const bool branch_taken_0x1797fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1797FCu;
            // 0x179800: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1797fc) {
            ctx->pc = 0x179844u;
            goto label_179844;
        }
    }
    ctx->pc = 0x179804u;
label_179804:
    // 0x179804: 0x0  nop
    ctx->pc = 0x179804u;
    // NOP
label_179808:
    // 0x179808: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x179808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_17980c:
    // 0x17980c: 0xc05e83c  jal         func_17A0F0
label_179810:
    if (ctx->pc == 0x179810u) {
        ctx->pc = 0x179810u;
            // 0x179810: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179814u;
        goto label_179814;
    }
    ctx->pc = 0x17980Cu;
    SET_GPR_U32(ctx, 31, 0x179814u);
    ctx->pc = 0x179810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17980Cu;
            // 0x179810: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A0F0u;
    if (runtime->hasFunction(0x17A0F0u)) {
        auto targetFn = runtime->lookupFunction(0x17A0F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179814u; }
        if (ctx->pc != 0x179814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A0F0_0x17a0f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179814u; }
        if (ctx->pc != 0x179814u) { return; }
    }
    ctx->pc = 0x179814u;
label_179814:
    // 0x179814: 0xc05e158  jal         func_178560
label_179818:
    if (ctx->pc == 0x179818u) {
        ctx->pc = 0x179818u;
            // 0x179818: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17981Cu;
        goto label_17981c;
    }
    ctx->pc = 0x179814u;
    SET_GPR_U32(ctx, 31, 0x17981Cu);
    ctx->pc = 0x179818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179814u;
            // 0x179818: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178560u;
    if (runtime->hasFunction(0x178560u)) {
        auto targetFn = runtime->lookupFunction(0x178560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17981Cu; }
        if (ctx->pc != 0x17981Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178560_0x178560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17981Cu; }
        if (ctx->pc != 0x17981Cu) { return; }
    }
    ctx->pc = 0x17981Cu;
label_17981c:
    // 0x17981c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_179820:
    if (ctx->pc == 0x179820u) {
        ctx->pc = 0x179820u;
            // 0x179820: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179824u;
        goto label_179824;
    }
    ctx->pc = 0x17981Cu;
    {
        const bool branch_taken_0x17981c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17981c) {
            ctx->pc = 0x179820u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17981Cu;
            // 0x179820: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x179844u;
            goto label_179844;
        }
    }
    ctx->pc = 0x179824u;
label_179824:
    // 0x179824: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x179824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_179828:
    // 0x179828: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_17982c:
    if (ctx->pc == 0x17982Cu) {
        ctx->pc = 0x17982Cu;
            // 0x17982c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179830u;
        goto label_179830;
    }
    ctx->pc = 0x179828u;
    {
        const bool branch_taken_0x179828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17982Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179828u;
            // 0x17982c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179828) {
            ctx->pc = 0x179840u;
            goto label_179840;
        }
    }
    ctx->pc = 0x179830u;
label_179830:
    // 0x179830: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x179830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_179834:
    // 0x179834: 0x40f809  jalr        $v0
label_179838:
    if (ctx->pc == 0x179838u) {
        ctx->pc = 0x179838u;
            // 0x179838: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17983Cu;
        goto label_17983c;
    }
    ctx->pc = 0x179834u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17983Cu);
        ctx->pc = 0x179838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179834u;
            // 0x179838: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17983Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17983Cu; }
            if (ctx->pc != 0x17983Cu) { return; }
        }
        }
    }
    ctx->pc = 0x17983Cu;
label_17983c:
    // 0x17983c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x17983cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_179840:
    // 0x179840: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x179840u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_179844:
    // 0x179844: 0xdfb00260  ld          $s0, 0x260($sp)
    ctx->pc = 0x179844u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
label_179848:
    // 0x179848: 0xdfb10268  ld          $s1, 0x268($sp)
    ctx->pc = 0x179848u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 616)));
label_17984c:
    // 0x17984c: 0xdfb20270  ld          $s2, 0x270($sp)
    ctx->pc = 0x17984cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 624)));
label_179850:
    // 0x179850: 0xdfb30278  ld          $s3, 0x278($sp)
    ctx->pc = 0x179850u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 632)));
label_179854:
    // 0x179854: 0xdfb40280  ld          $s4, 0x280($sp)
    ctx->pc = 0x179854u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 640)));
label_179858:
    // 0x179858: 0xdfbf0288  ld          $ra, 0x288($sp)
    ctx->pc = 0x179858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 648)));
label_17985c:
    // 0x17985c: 0x3e00008  jr          $ra
label_179860:
    if (ctx->pc == 0x179860u) {
        ctx->pc = 0x179860u;
            // 0x179860: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->pc = 0x179864u;
        goto label_179864;
    }
    ctx->pc = 0x17985Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17985Cu;
            // 0x179860: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x179864u;
label_179864:
    // 0x179864: 0x0  nop
    ctx->pc = 0x179864u;
    // NOP
label_179868:
    // 0x179868: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x179868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_17986c:
    // 0x17986c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_179870:
    if (ctx->pc == 0x179870u) {
        ctx->pc = 0x179870u;
            // 0x179870: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x179874u;
        goto label_179874;
    }
    ctx->pc = 0x17986Cu;
    {
        const bool branch_taken_0x17986c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x179870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17986Cu;
            // 0x179870: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17986c) {
            ctx->pc = 0x179888u;
            goto label_179888;
        }
    }
    ctx->pc = 0x179874u;
label_179874:
    // 0x179874: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x179874u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_179878:
    // 0x179878: 0xc05e0a6  jal         func_178298
label_17987c:
    if (ctx->pc == 0x17987Cu) {
        ctx->pc = 0x17987Cu;
            // 0x17987c: 0x24845238  addiu       $a0, $a0, 0x5238 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21048));
        ctx->pc = 0x179880u;
        goto label_179880;
    }
    ctx->pc = 0x179878u;
    SET_GPR_U32(ctx, 31, 0x179880u);
    ctx->pc = 0x17987Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179878u;
            // 0x17987c: 0x24845238  addiu       $a0, $a0, 0x5238 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179880u; }
        if (ctx->pc != 0x179880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178298_0x178298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179880u; }
        if (ctx->pc != 0x179880u) { return; }
    }
    ctx->pc = 0x179880u;
label_179880:
    // 0x179880: 0x1000000c  b           . + 4 + (0xC << 2)
label_179884:
    if (ctx->pc == 0x179884u) {
        ctx->pc = 0x179884u;
            // 0x179884: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179888u;
        goto label_179888;
    }
    ctx->pc = 0x179880u;
    {
        const bool branch_taken_0x179880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179880u;
            // 0x179884: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179880) {
            ctx->pc = 0x1798B4u;
            goto label_1798b4;
        }
    }
    ctx->pc = 0x179888u;
label_179888:
    // 0x179888: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x179888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17988c:
    // 0x17988c: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x17988cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_179890:
    // 0x179890: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_179894:
    if (ctx->pc == 0x179894u) {
        ctx->pc = 0x179894u;
            // 0x179894: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->pc = 0x179898u;
        goto label_179898;
    }
    ctx->pc = 0x179890u;
    {
        const bool branch_taken_0x179890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x179890) {
            ctx->pc = 0x179894u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x179890u;
            // 0x179894: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1798A8u;
            goto label_1798a8;
        }
    }
    ctx->pc = 0x179898u;
label_179898:
    // 0x179898: 0x40f809  jalr        $v0
label_17989c:
    if (ctx->pc == 0x17989Cu) {
        ctx->pc = 0x17989Cu;
            // 0x17989c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = 0x1798A0u;
        goto label_1798a0;
    }
    ctx->pc = 0x179898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1798A0u);
        ctx->pc = 0x17989Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179898u;
            // 0x17989c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1798A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1798A0u; }
            if (ctx->pc != 0x1798A0u) { return; }
        }
        }
    }
    ctx->pc = 0x1798A0u;
label_1798a0:
    // 0x1798a0: 0x10000005  b           . + 4 + (0x5 << 2)
label_1798a4:
    if (ctx->pc == 0x1798A4u) {
        ctx->pc = 0x1798A4u;
            // 0x1798a4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1798A8u;
        goto label_1798a8;
    }
    ctx->pc = 0x1798A0u;
    {
        const bool branch_taken_0x1798a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1798A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1798A0u;
            // 0x1798a4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1798a0) {
            ctx->pc = 0x1798B8u;
            goto label_1798b8;
        }
    }
    ctx->pc = 0x1798A8u;
label_1798a8:
    // 0x1798a8: 0xc05e0a6  jal         func_178298
label_1798ac:
    if (ctx->pc == 0x1798ACu) {
        ctx->pc = 0x1798ACu;
            // 0x1798ac: 0x24845260  addiu       $a0, $a0, 0x5260 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21088));
        ctx->pc = 0x1798B0u;
        goto label_1798b0;
    }
    ctx->pc = 0x1798A8u;
    SET_GPR_U32(ctx, 31, 0x1798B0u);
    ctx->pc = 0x1798ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1798A8u;
            // 0x1798ac: 0x24845260  addiu       $a0, $a0, 0x5260 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1798B0u; }
        if (ctx->pc != 0x1798B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178298_0x178298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1798B0u; }
        if (ctx->pc != 0x1798B0u) { return; }
    }
    ctx->pc = 0x1798B0u;
label_1798b0:
    // 0x1798b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1798b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1798b4:
    // 0x1798b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1798b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1798b8:
    // 0x1798b8: 0x3e00008  jr          $ra
label_1798bc:
    if (ctx->pc == 0x1798BCu) {
        ctx->pc = 0x1798BCu;
            // 0x1798bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1798C0u;
        goto label_1798c0;
    }
    ctx->pc = 0x1798B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1798BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1798B8u;
            // 0x1798bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1798C0u;
label_1798c0:
    // 0x1798c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1798c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1798c4:
    // 0x1798c4: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x1798c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
label_1798c8:
    // 0x1798c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1798c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1798cc:
    // 0x1798cc: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x1798ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
label_1798d0:
    // 0x1798d0: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_1798d4:
    if (ctx->pc == 0x1798D4u) {
        ctx->pc = 0x1798D4u;
            // 0x1798d4: 0xffbf0070  sd          $ra, 0x70($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
        ctx->pc = 0x1798D8u;
        goto label_1798d8;
    }
    ctx->pc = 0x1798D0u;
    {
        const bool branch_taken_0x1798d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1798D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1798D0u;
            // 0x1798d4: 0xffbf0070  sd          $ra, 0x70($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1798d0) {
            ctx->pc = 0x1798E8u;
            goto label_1798e8;
        }
    }
    ctx->pc = 0x1798D8u;
label_1798d8:
    // 0x1798d8: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1798d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_1798dc:
    // 0x1798dc: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1798e0:
    if (ctx->pc == 0x1798E0u) {
        ctx->pc = 0x1798E0u;
            // 0x1798e0: 0x24845288  addiu       $a0, $a0, 0x5288 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21128));
        ctx->pc = 0x1798E4u;
        goto label_1798e4;
    }
    ctx->pc = 0x1798DCu;
    {
        const bool branch_taken_0x1798dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1798E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1798DCu;
            // 0x1798e0: 0x24845288  addiu       $a0, $a0, 0x5288 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1798dc) {
            ctx->pc = 0x17995Cu;
            goto label_17995c;
        }
    }
    ctx->pc = 0x1798E4u;
label_1798e4:
    // 0x1798e4: 0x0  nop
    ctx->pc = 0x1798e4u;
    // NOP
label_1798e8:
    // 0x1798e8: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x1798e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1798ec:
    // 0x1798ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1798ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1798f0:
    // 0x1798f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1798f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1798f4:
    // 0x1798f4: 0xc05e2b4  jal         func_178AD0
label_1798f8:
    if (ctx->pc == 0x1798F8u) {
        ctx->pc = 0x1798F8u;
            // 0x1798f8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1798FCu;
        goto label_1798fc;
    }
    ctx->pc = 0x1798F4u;
    SET_GPR_U32(ctx, 31, 0x1798FCu);
    ctx->pc = 0x1798F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1798F4u;
            // 0x1798f8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178AD0u;
    if (runtime->hasFunction(0x178AD0u)) {
        auto targetFn = runtime->lookupFunction(0x178AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1798FCu; }
        if (ctx->pc != 0x1798FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178AD0_0x178ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1798FCu; }
        if (ctx->pc != 0x1798FCu) { return; }
    }
    ctx->pc = 0x1798FCu;
label_1798fc:
    // 0x1798fc: 0x83a20030  lb          $v0, 0x30($sp)
    ctx->pc = 0x1798fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
label_179900:
    // 0x179900: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_179904:
    if (ctx->pc == 0x179904u) {
        ctx->pc = 0x179904u;
            // 0x179904: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179908u;
        goto label_179908;
    }
    ctx->pc = 0x179900u;
    {
        const bool branch_taken_0x179900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x179904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179900u;
            // 0x179904: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179900) {
            ctx->pc = 0x179918u;
            goto label_179918;
        }
    }
    ctx->pc = 0x179908u;
label_179908:
    // 0x179908: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x179908u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_17990c:
    // 0x17990c: 0x10000013  b           . + 4 + (0x13 << 2)
label_179910:
    if (ctx->pc == 0x179910u) {
        ctx->pc = 0x179910u;
            // 0x179910: 0x24845288  addiu       $a0, $a0, 0x5288 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21128));
        ctx->pc = 0x179914u;
        goto label_179914;
    }
    ctx->pc = 0x17990Cu;
    {
        const bool branch_taken_0x17990c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17990Cu;
            // 0x179910: 0x24845288  addiu       $a0, $a0, 0x5288 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17990c) {
            ctx->pc = 0x17995Cu;
            goto label_17995c;
        }
    }
    ctx->pc = 0x179914u;
label_179914:
    // 0x179914: 0x0  nop
    ctx->pc = 0x179914u;
    // NOP
label_179918:
    // 0x179918: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x179918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_17991c:
    // 0x17991c: 0xc05e222  jal         func_178888
label_179920:
    if (ctx->pc == 0x179920u) {
        ctx->pc = 0x179920u;
            // 0x179920: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179924u;
        goto label_179924;
    }
    ctx->pc = 0x17991Cu;
    SET_GPR_U32(ctx, 31, 0x179924u);
    ctx->pc = 0x179920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17991Cu;
            // 0x179920: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178888u;
    if (runtime->hasFunction(0x178888u)) {
        auto targetFn = runtime->lookupFunction(0x178888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179924u; }
        if (ctx->pc != 0x179924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178888_0x178888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179924u; }
        if (ctx->pc != 0x179924u) { return; }
    }
    ctx->pc = 0x179924u;
label_179924:
    // 0x179924: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x179924u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_179928:
    // 0x179928: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
label_17992c:
    if (ctx->pc == 0x17992Cu) {
        ctx->pc = 0x17992Cu;
            // 0x17992c: 0x8e020050  lw          $v0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x179930u;
        goto label_179930;
    }
    ctx->pc = 0x179928u;
    {
        const bool branch_taken_0x179928 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x179928) {
            ctx->pc = 0x17992Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x179928u;
            // 0x17992c: 0x8e020050  lw          $v0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x179940u;
            goto label_179940;
        }
    }
    ctx->pc = 0x179930u;
label_179930:
    // 0x179930: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x179930u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_179934:
    // 0x179934: 0xc05e0a6  jal         func_178298
label_179938:
    if (ctx->pc == 0x179938u) {
        ctx->pc = 0x179938u;
            // 0x179938: 0x248452d8  addiu       $a0, $a0, 0x52D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21208));
        ctx->pc = 0x17993Cu;
        goto label_17993c;
    }
    ctx->pc = 0x179934u;
    SET_GPR_U32(ctx, 31, 0x17993Cu);
    ctx->pc = 0x179938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179934u;
            // 0x179938: 0x248452d8  addiu       $a0, $a0, 0x52D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17993Cu; }
        if (ctx->pc != 0x17993Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178298_0x178298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17993Cu; }
        if (ctx->pc != 0x17993Cu) { return; }
    }
    ctx->pc = 0x17993Cu;
label_17993c:
    // 0x17993c: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x17993cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_179940:
    // 0x179940: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_179944:
    if (ctx->pc == 0x179944u) {
        ctx->pc = 0x179944u;
            // 0x179944: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->pc = 0x179948u;
        goto label_179948;
    }
    ctx->pc = 0x179940u;
    {
        const bool branch_taken_0x179940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x179940) {
            ctx->pc = 0x179944u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x179940u;
            // 0x179944: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x179958u;
            goto label_179958;
        }
    }
    ctx->pc = 0x179948u;
label_179948:
    // 0x179948: 0x40f809  jalr        $v0
label_17994c:
    if (ctx->pc == 0x17994Cu) {
        ctx->pc = 0x17994Cu;
            // 0x17994c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179950u;
        goto label_179950;
    }
    ctx->pc = 0x179948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x179950u);
        ctx->pc = 0x17994Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179948u;
            // 0x17994c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x179950u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x179950u; }
            if (ctx->pc != 0x179950u) { return; }
        }
        }
    }
    ctx->pc = 0x179950u;
label_179950:
    // 0x179950: 0x10000006  b           . + 4 + (0x6 << 2)
label_179954:
    if (ctx->pc == 0x179954u) {
        ctx->pc = 0x179954u;
            // 0x179954: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x179958u;
        goto label_179958;
    }
    ctx->pc = 0x179950u;
    {
        const bool branch_taken_0x179950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179950u;
            // 0x179954: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179950) {
            ctx->pc = 0x17996Cu;
            goto label_17996c;
        }
    }
    ctx->pc = 0x179958u;
label_179958:
    // 0x179958: 0x248452f8  addiu       $a0, $a0, 0x52F8
    ctx->pc = 0x179958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21240));
label_17995c:
    // 0x17995c: 0xc05e0a6  jal         func_178298
label_179960:
    if (ctx->pc == 0x179960u) {
        ctx->pc = 0x179964u;
        goto label_179964;
    }
    ctx->pc = 0x17995Cu;
    SET_GPR_U32(ctx, 31, 0x179964u);
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179964u; }
        if (ctx->pc != 0x179964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178298_0x178298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179964u; }
        if (ctx->pc != 0x179964u) { return; }
    }
    ctx->pc = 0x179964u;
label_179964:
    // 0x179964: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x179964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_179968:
    // 0x179968: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x179968u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_17996c:
    // 0x17996c: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x17996cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_179970:
    // 0x179970: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x179970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_179974:
    // 0x179974: 0x3e00008  jr          $ra
label_179978:
    if (ctx->pc == 0x179978u) {
        ctx->pc = 0x179978u;
            // 0x179978: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x17997Cu;
        goto label_17997c;
    }
    ctx->pc = 0x179974u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179974u;
            // 0x179978: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17997Cu;
label_17997c:
    // 0x17997c: 0x0  nop
    ctx->pc = 0x17997cu;
    // NOP
label_179980:
    // 0x179980: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x179980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
label_179984:
    // 0x179984: 0xffb00260  sd          $s0, 0x260($sp)
    ctx->pc = 0x179984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 16));
label_179988:
    // 0x179988: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x179988u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17998c:
    // 0x17998c: 0xffb10268  sd          $s1, 0x268($sp)
    ctx->pc = 0x17998cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 17));
label_179990:
    // 0x179990: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_179994:
    if (ctx->pc == 0x179994u) {
        ctx->pc = 0x179994u;
            // 0x179994: 0xffbf0270  sd          $ra, 0x270($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 31));
        ctx->pc = 0x179998u;
        goto label_179998;
    }
    ctx->pc = 0x179990u;
    {
        const bool branch_taken_0x179990 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x179994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179990u;
            // 0x179994: 0xffbf0270  sd          $ra, 0x270($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179990) {
            ctx->pc = 0x1799A8u;
            goto label_1799a8;
        }
    }
    ctx->pc = 0x179998u;
label_179998:
    // 0x179998: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x179998u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_17999c:
    // 0x17999c: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1799a0:
    if (ctx->pc == 0x1799A0u) {
        ctx->pc = 0x1799A0u;
            // 0x1799a0: 0x24845318  addiu       $a0, $a0, 0x5318 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21272));
        ctx->pc = 0x1799A4u;
        goto label_1799a4;
    }
    ctx->pc = 0x17999Cu;
    {
        const bool branch_taken_0x17999c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1799A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17999Cu;
            // 0x1799a0: 0x24845318  addiu       $a0, $a0, 0x5318 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17999c) {
            ctx->pc = 0x179A1Cu;
            goto label_179a1c;
        }
    }
    ctx->pc = 0x1799A4u;
label_1799a4:
    // 0x1799a4: 0x0  nop
    ctx->pc = 0x1799a4u;
    // NOP
label_1799a8:
    // 0x1799a8: 0x27b10130  addiu       $s1, $sp, 0x130
    ctx->pc = 0x1799a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_1799ac:
    // 0x1799ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1799acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1799b0:
    // 0x1799b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1799b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1799b4:
    // 0x1799b4: 0xc05e2b4  jal         func_178AD0
label_1799b8:
    if (ctx->pc == 0x1799B8u) {
        ctx->pc = 0x1799B8u;
            // 0x1799b8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1799BCu;
        goto label_1799bc;
    }
    ctx->pc = 0x1799B4u;
    SET_GPR_U32(ctx, 31, 0x1799BCu);
    ctx->pc = 0x1799B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1799B4u;
            // 0x1799b8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178AD0u;
    if (runtime->hasFunction(0x178AD0u)) {
        auto targetFn = runtime->lookupFunction(0x178AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1799BCu; }
        if (ctx->pc != 0x1799BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178AD0_0x178ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1799BCu; }
        if (ctx->pc != 0x1799BCu) { return; }
    }
    ctx->pc = 0x1799BCu;
label_1799bc:
    // 0x1799bc: 0x83a20130  lb          $v0, 0x130($sp)
    ctx->pc = 0x1799bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 304)));
label_1799c0:
    // 0x1799c0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1799c4:
    if (ctx->pc == 0x1799C4u) {
        ctx->pc = 0x1799C4u;
            // 0x1799c4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1799C8u;
        goto label_1799c8;
    }
    ctx->pc = 0x1799C0u;
    {
        const bool branch_taken_0x1799c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1799C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1799C0u;
            // 0x1799c4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1799c0) {
            ctx->pc = 0x1799D8u;
            goto label_1799d8;
        }
    }
    ctx->pc = 0x1799C8u;
label_1799c8:
    // 0x1799c8: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1799c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_1799cc:
    // 0x1799cc: 0x10000013  b           . + 4 + (0x13 << 2)
label_1799d0:
    if (ctx->pc == 0x1799D0u) {
        ctx->pc = 0x1799D0u;
            // 0x1799d0: 0x24845318  addiu       $a0, $a0, 0x5318 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21272));
        ctx->pc = 0x1799D4u;
        goto label_1799d4;
    }
    ctx->pc = 0x1799CCu;
    {
        const bool branch_taken_0x1799cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1799D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1799CCu;
            // 0x1799d0: 0x24845318  addiu       $a0, $a0, 0x5318 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1799cc) {
            ctx->pc = 0x179A1Cu;
            goto label_179a1c;
        }
    }
    ctx->pc = 0x1799D4u;
label_1799d4:
    // 0x1799d4: 0x0  nop
    ctx->pc = 0x1799d4u;
    // NOP
label_1799d8:
    // 0x1799d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1799d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1799dc:
    // 0x1799dc: 0xc05e222  jal         func_178888
label_1799e0:
    if (ctx->pc == 0x1799E0u) {
        ctx->pc = 0x1799E0u;
            // 0x1799e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1799E4u;
        goto label_1799e4;
    }
    ctx->pc = 0x1799DCu;
    SET_GPR_U32(ctx, 31, 0x1799E4u);
    ctx->pc = 0x1799E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1799DCu;
            // 0x1799e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178888u;
    if (runtime->hasFunction(0x178888u)) {
        auto targetFn = runtime->lookupFunction(0x178888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1799E4u; }
        if (ctx->pc != 0x1799E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178888_0x178888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1799E4u; }
        if (ctx->pc != 0x1799E4u) { return; }
    }
    ctx->pc = 0x1799E4u;
label_1799e4:
    // 0x1799e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1799e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1799e8:
    // 0x1799e8: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
label_1799ec:
    if (ctx->pc == 0x1799ECu) {
        ctx->pc = 0x1799ECu;
            // 0x1799ec: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->pc = 0x1799F0u;
        goto label_1799f0;
    }
    ctx->pc = 0x1799E8u;
    {
        const bool branch_taken_0x1799e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1799e8) {
            ctx->pc = 0x1799ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1799E8u;
            // 0x1799ec: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x179A00u;
            goto label_179a00;
        }
    }
    ctx->pc = 0x1799F0u;
label_1799f0:
    // 0x1799f0: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1799f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_1799f4:
    // 0x1799f4: 0xc05e0a6  jal         func_178298
label_1799f8:
    if (ctx->pc == 0x1799F8u) {
        ctx->pc = 0x1799F8u;
            // 0x1799f8: 0x24845368  addiu       $a0, $a0, 0x5368 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21352));
        ctx->pc = 0x1799FCu;
        goto label_1799fc;
    }
    ctx->pc = 0x1799F4u;
    SET_GPR_U32(ctx, 31, 0x1799FCu);
    ctx->pc = 0x1799F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1799F4u;
            // 0x1799f8: 0x24845368  addiu       $a0, $a0, 0x5368 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1799FCu; }
        if (ctx->pc != 0x1799FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178298_0x178298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1799FCu; }
        if (ctx->pc != 0x1799FCu) { return; }
    }
    ctx->pc = 0x1799FCu;
label_1799fc:
    // 0x1799fc: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x1799fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_179a00:
    // 0x179a00: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_179a04:
    if (ctx->pc == 0x179A04u) {
        ctx->pc = 0x179A04u;
            // 0x179a04: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->pc = 0x179A08u;
        goto label_179a08;
    }
    ctx->pc = 0x179A00u;
    {
        const bool branch_taken_0x179a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x179a00) {
            ctx->pc = 0x179A04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x179A00u;
            // 0x179a04: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x179A18u;
            goto label_179a18;
        }
    }
    ctx->pc = 0x179A08u;
label_179a08:
    // 0x179a08: 0x40f809  jalr        $v0
label_179a0c:
    if (ctx->pc == 0x179A0Cu) {
        ctx->pc = 0x179A0Cu;
            // 0x179a0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179A10u;
        goto label_179a10;
    }
    ctx->pc = 0x179A08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x179A10u);
        ctx->pc = 0x179A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179A08u;
            // 0x179a0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x179A10u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x179A10u; }
            if (ctx->pc != 0x179A10u) { return; }
        }
        }
    }
    ctx->pc = 0x179A10u;
label_179a10:
    // 0x179a10: 0x10000006  b           . + 4 + (0x6 << 2)
label_179a14:
    if (ctx->pc == 0x179A14u) {
        ctx->pc = 0x179A14u;
            // 0x179a14: 0xdfb00260  ld          $s0, 0x260($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->pc = 0x179A18u;
        goto label_179a18;
    }
    ctx->pc = 0x179A10u;
    {
        const bool branch_taken_0x179a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179A10u;
            // 0x179a14: 0xdfb00260  ld          $s0, 0x260($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179a10) {
            ctx->pc = 0x179A2Cu;
            goto label_179a2c;
        }
    }
    ctx->pc = 0x179A18u;
label_179a18:
    // 0x179a18: 0x24845390  addiu       $a0, $a0, 0x5390
    ctx->pc = 0x179a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21392));
label_179a1c:
    // 0x179a1c: 0xc05e0a6  jal         func_178298
label_179a20:
    if (ctx->pc == 0x179A20u) {
        ctx->pc = 0x179A24u;
        goto label_179a24;
    }
    ctx->pc = 0x179A1Cu;
    SET_GPR_U32(ctx, 31, 0x179A24u);
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179A24u; }
        if (ctx->pc != 0x179A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178298_0x178298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179A24u; }
        if (ctx->pc != 0x179A24u) { return; }
    }
    ctx->pc = 0x179A24u;
label_179a24:
    // 0x179a24: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x179a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_179a28:
    // 0x179a28: 0xdfb00260  ld          $s0, 0x260($sp)
    ctx->pc = 0x179a28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
label_179a2c:
    // 0x179a2c: 0xdfb10268  ld          $s1, 0x268($sp)
    ctx->pc = 0x179a2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 616)));
label_179a30:
    // 0x179a30: 0xdfbf0270  ld          $ra, 0x270($sp)
    ctx->pc = 0x179a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 624)));
label_179a34:
    // 0x179a34: 0x3e00008  jr          $ra
label_179a38:
    if (ctx->pc == 0x179A38u) {
        ctx->pc = 0x179A38u;
            // 0x179a38: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->pc = 0x179A3Cu;
        goto label_179a3c;
    }
    ctx->pc = 0x179A34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179A34u;
            // 0x179a38: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x179A3Cu;
label_179a3c:
    // 0x179a3c: 0x0  nop
    ctx->pc = 0x179a3cu;
    // NOP
label_179a40:
    // 0x179a40: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x179a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
label_179a44:
    // 0x179a44: 0xffb00260  sd          $s0, 0x260($sp)
    ctx->pc = 0x179a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 16));
label_179a48:
    // 0x179a48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x179a48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_179a4c:
    // 0x179a4c: 0xffb10268  sd          $s1, 0x268($sp)
    ctx->pc = 0x179a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 17));
label_179a50:
    // 0x179a50: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_179a54:
    if (ctx->pc == 0x179A54u) {
        ctx->pc = 0x179A54u;
            // 0x179a54: 0xffbf0270  sd          $ra, 0x270($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 31));
        ctx->pc = 0x179A58u;
        goto label_179a58;
    }
    ctx->pc = 0x179A50u;
    {
        const bool branch_taken_0x179a50 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x179A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179A50u;
            // 0x179a54: 0xffbf0270  sd          $ra, 0x270($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179a50) {
            ctx->pc = 0x179A68u;
            goto label_179a68;
        }
    }
    ctx->pc = 0x179A58u;
label_179a58:
    // 0x179a58: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x179a58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_179a5c:
    // 0x179a5c: 0x1000001f  b           . + 4 + (0x1F << 2)
label_179a60:
    if (ctx->pc == 0x179A60u) {
        ctx->pc = 0x179A60u;
            // 0x179a60: 0x248453b0  addiu       $a0, $a0, 0x53B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21424));
        ctx->pc = 0x179A64u;
        goto label_179a64;
    }
    ctx->pc = 0x179A5Cu;
    {
        const bool branch_taken_0x179a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179A5Cu;
            // 0x179a60: 0x248453b0  addiu       $a0, $a0, 0x53B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179a5c) {
            ctx->pc = 0x179ADCu;
            goto label_179adc;
        }
    }
    ctx->pc = 0x179A64u;
label_179a64:
    // 0x179a64: 0x0  nop
    ctx->pc = 0x179a64u;
    // NOP
label_179a68:
    // 0x179a68: 0x27b10130  addiu       $s1, $sp, 0x130
    ctx->pc = 0x179a68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_179a6c:
    // 0x179a6c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x179a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_179a70:
    // 0x179a70: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x179a70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_179a74:
    // 0x179a74: 0xc05e2b4  jal         func_178AD0
label_179a78:
    if (ctx->pc == 0x179A78u) {
        ctx->pc = 0x179A78u;
            // 0x179a78: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179A7Cu;
        goto label_179a7c;
    }
    ctx->pc = 0x179A74u;
    SET_GPR_U32(ctx, 31, 0x179A7Cu);
    ctx->pc = 0x179A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179A74u;
            // 0x179a78: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178AD0u;
    if (runtime->hasFunction(0x178AD0u)) {
        auto targetFn = runtime->lookupFunction(0x178AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179A7Cu; }
        if (ctx->pc != 0x179A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178AD0_0x178ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179A7Cu; }
        if (ctx->pc != 0x179A7Cu) { return; }
    }
    ctx->pc = 0x179A7Cu;
label_179a7c:
    // 0x179a7c: 0x83a20130  lb          $v0, 0x130($sp)
    ctx->pc = 0x179a7cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 304)));
label_179a80:
    // 0x179a80: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_179a84:
    if (ctx->pc == 0x179A84u) {
        ctx->pc = 0x179A84u;
            // 0x179a84: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179A88u;
        goto label_179a88;
    }
    ctx->pc = 0x179A80u;
    {
        const bool branch_taken_0x179a80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x179A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179A80u;
            // 0x179a84: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179a80) {
            ctx->pc = 0x179A98u;
            goto label_179a98;
        }
    }
    ctx->pc = 0x179A88u;
label_179a88:
    // 0x179a88: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x179a88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_179a8c:
    // 0x179a8c: 0x10000013  b           . + 4 + (0x13 << 2)
label_179a90:
    if (ctx->pc == 0x179A90u) {
        ctx->pc = 0x179A90u;
            // 0x179a90: 0x248453b0  addiu       $a0, $a0, 0x53B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21424));
        ctx->pc = 0x179A94u;
        goto label_179a94;
    }
    ctx->pc = 0x179A8Cu;
    {
        const bool branch_taken_0x179a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179A8Cu;
            // 0x179a90: 0x248453b0  addiu       $a0, $a0, 0x53B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179a8c) {
            ctx->pc = 0x179ADCu;
            goto label_179adc;
        }
    }
    ctx->pc = 0x179A94u;
label_179a94:
    // 0x179a94: 0x0  nop
    ctx->pc = 0x179a94u;
    // NOP
label_179a98:
    // 0x179a98: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x179a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_179a9c:
    // 0x179a9c: 0xc05e222  jal         func_178888
label_179aa0:
    if (ctx->pc == 0x179AA0u) {
        ctx->pc = 0x179AA0u;
            // 0x179aa0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179AA4u;
        goto label_179aa4;
    }
    ctx->pc = 0x179A9Cu;
    SET_GPR_U32(ctx, 31, 0x179AA4u);
    ctx->pc = 0x179AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179A9Cu;
            // 0x179aa0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178888u;
    if (runtime->hasFunction(0x178888u)) {
        auto targetFn = runtime->lookupFunction(0x178888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179AA4u; }
        if (ctx->pc != 0x179AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178888_0x178888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179AA4u; }
        if (ctx->pc != 0x179AA4u) { return; }
    }
    ctx->pc = 0x179AA4u;
label_179aa4:
    // 0x179aa4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x179aa4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_179aa8:
    // 0x179aa8: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
label_179aac:
    if (ctx->pc == 0x179AACu) {
        ctx->pc = 0x179AACu;
            // 0x179aac: 0x8e020058  lw          $v0, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->pc = 0x179AB0u;
        goto label_179ab0;
    }
    ctx->pc = 0x179AA8u;
    {
        const bool branch_taken_0x179aa8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x179aa8) {
            ctx->pc = 0x179AACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x179AA8u;
            // 0x179aac: 0x8e020058  lw          $v0, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x179AC0u;
            goto label_179ac0;
        }
    }
    ctx->pc = 0x179AB0u;
label_179ab0:
    // 0x179ab0: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x179ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_179ab4:
    // 0x179ab4: 0xc05e0a6  jal         func_178298
label_179ab8:
    if (ctx->pc == 0x179AB8u) {
        ctx->pc = 0x179AB8u;
            // 0x179ab8: 0x24845400  addiu       $a0, $a0, 0x5400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21504));
        ctx->pc = 0x179ABCu;
        goto label_179abc;
    }
    ctx->pc = 0x179AB4u;
    SET_GPR_U32(ctx, 31, 0x179ABCu);
    ctx->pc = 0x179AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179AB4u;
            // 0x179ab8: 0x24845400  addiu       $a0, $a0, 0x5400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179ABCu; }
        if (ctx->pc != 0x179ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178298_0x178298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179ABCu; }
        if (ctx->pc != 0x179ABCu) { return; }
    }
    ctx->pc = 0x179ABCu;
label_179abc:
    // 0x179abc: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x179abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_179ac0:
    // 0x179ac0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_179ac4:
    if (ctx->pc == 0x179AC4u) {
        ctx->pc = 0x179AC4u;
            // 0x179ac4: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->pc = 0x179AC8u;
        goto label_179ac8;
    }
    ctx->pc = 0x179AC0u;
    {
        const bool branch_taken_0x179ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x179ac0) {
            ctx->pc = 0x179AC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x179AC0u;
            // 0x179ac4: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x179AD8u;
            goto label_179ad8;
        }
    }
    ctx->pc = 0x179AC8u;
label_179ac8:
    // 0x179ac8: 0x40f809  jalr        $v0
label_179acc:
    if (ctx->pc == 0x179ACCu) {
        ctx->pc = 0x179ACCu;
            // 0x179acc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179AD0u;
        goto label_179ad0;
    }
    ctx->pc = 0x179AC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x179AD0u);
        ctx->pc = 0x179ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179AC8u;
            // 0x179acc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x179AD0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x179AD0u; }
            if (ctx->pc != 0x179AD0u) { return; }
        }
        }
    }
    ctx->pc = 0x179AD0u;
label_179ad0:
    // 0x179ad0: 0x10000006  b           . + 4 + (0x6 << 2)
label_179ad4:
    if (ctx->pc == 0x179AD4u) {
        ctx->pc = 0x179AD4u;
            // 0x179ad4: 0xdfb00260  ld          $s0, 0x260($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->pc = 0x179AD8u;
        goto label_179ad8;
    }
    ctx->pc = 0x179AD0u;
    {
        const bool branch_taken_0x179ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179AD0u;
            // 0x179ad4: 0xdfb00260  ld          $s0, 0x260($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179ad0) {
            ctx->pc = 0x179AECu;
            goto label_179aec;
        }
    }
    ctx->pc = 0x179AD8u;
label_179ad8:
    // 0x179ad8: 0x24845428  addiu       $a0, $a0, 0x5428
    ctx->pc = 0x179ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21544));
label_179adc:
    // 0x179adc: 0xc05e0a6  jal         func_178298
label_179ae0:
    if (ctx->pc == 0x179AE0u) {
        ctx->pc = 0x179AE4u;
        goto label_179ae4;
    }
    ctx->pc = 0x179ADCu;
    SET_GPR_U32(ctx, 31, 0x179AE4u);
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179AE4u; }
        if (ctx->pc != 0x179AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178298_0x178298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179AE4u; }
        if (ctx->pc != 0x179AE4u) { return; }
    }
    ctx->pc = 0x179AE4u;
label_179ae4:
    // 0x179ae4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x179ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_179ae8:
    // 0x179ae8: 0xdfb00260  ld          $s0, 0x260($sp)
    ctx->pc = 0x179ae8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
label_179aec:
    // 0x179aec: 0xdfb10268  ld          $s1, 0x268($sp)
    ctx->pc = 0x179aecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 616)));
label_179af0:
    // 0x179af0: 0xdfbf0270  ld          $ra, 0x270($sp)
    ctx->pc = 0x179af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 624)));
label_179af4:
    // 0x179af4: 0x3e00008  jr          $ra
label_179af8:
    if (ctx->pc == 0x179AF8u) {
        ctx->pc = 0x179AF8u;
            // 0x179af8: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->pc = 0x179AFCu;
        goto label_179afc;
    }
    ctx->pc = 0x179AF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179AF4u;
            // 0x179af8: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x179AFCu;
label_179afc:
    // 0x179afc: 0x0  nop
    ctx->pc = 0x179afcu;
    // NOP
label_179b00:
    // 0x179b00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x179b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_179b04:
    // 0x179b04: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_179b08:
    if (ctx->pc == 0x179B08u) {
        ctx->pc = 0x179B08u;
            // 0x179b08: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x179B0Cu;
        goto label_179b0c;
    }
    ctx->pc = 0x179B04u;
    {
        const bool branch_taken_0x179b04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x179B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179B04u;
            // 0x179b08: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179b04) {
            ctx->pc = 0x179B20u;
            goto label_179b20;
        }
    }
    ctx->pc = 0x179B0Cu;
label_179b0c:
    // 0x179b0c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x179b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_179b10:
    // 0x179b10: 0xc05e0a6  jal         func_178298
label_179b14:
    if (ctx->pc == 0x179B14u) {
        ctx->pc = 0x179B14u;
            // 0x179b14: 0x24845448  addiu       $a0, $a0, 0x5448 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21576));
        ctx->pc = 0x179B18u;
        goto label_179b18;
    }
    ctx->pc = 0x179B10u;
    SET_GPR_U32(ctx, 31, 0x179B18u);
    ctx->pc = 0x179B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179B10u;
            // 0x179b14: 0x24845448  addiu       $a0, $a0, 0x5448 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179B18u; }
        if (ctx->pc != 0x179B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178298_0x178298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179B18u; }
        if (ctx->pc != 0x179B18u) { return; }
    }
    ctx->pc = 0x179B18u;
label_179b18:
    // 0x179b18: 0x10000017  b           . + 4 + (0x17 << 2)
label_179b1c:
    if (ctx->pc == 0x179B1Cu) {
        ctx->pc = 0x179B1Cu;
            // 0x179b1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179B20u;
        goto label_179b20;
    }
    ctx->pc = 0x179B18u;
    {
        const bool branch_taken_0x179b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179B18u;
            // 0x179b1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179b18) {
            ctx->pc = 0x179B78u;
            goto label_179b78;
        }
    }
    ctx->pc = 0x179B20u;
label_179b20:
    // 0x179b20: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x179b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_179b24:
    // 0x179b24: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x179b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_179b28:
    // 0x179b28: 0x2443d3d8  addiu       $v1, $v0, -0x2C28
    ctx->pc = 0x179b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955992));
label_179b2c:
    // 0x179b2c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x179b2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_179b30:
    // 0x179b30: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x179b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_179b34:
    // 0x179b34: 0x1044000d  beq         $v0, $a0, . + 4 + (0xD << 2)
label_179b38:
    if (ctx->pc == 0x179B38u) {
        ctx->pc = 0x179B38u;
            // 0x179b38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x179B3Cu;
        goto label_179b3c;
    }
    ctx->pc = 0x179B34u;
    {
        const bool branch_taken_0x179b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x179B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179B34u;
            // 0x179b38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179b34) {
            ctx->pc = 0x179B6Cu;
            goto label_179b6c;
        }
    }
    ctx->pc = 0x179B3Cu;
label_179b3c:
    // 0x179b3c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x179b3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_179b40:
    // 0x179b40: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x179b40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_179b44:
    // 0x179b44: 0x0  nop
    ctx->pc = 0x179b44u;
    // NOP
label_179b48:
    // 0x179b48: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x179b48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_179b4c:
    // 0x179b4c: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x179b4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
label_179b50:
    // 0x179b50: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_179b54:
    if (ctx->pc == 0x179B54u) {
        ctx->pc = 0x179B54u;
            // 0x179b54: 0xa71821  addu        $v1, $a1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
        ctx->pc = 0x179B58u;
        goto label_179b58;
    }
    ctx->pc = 0x179B50u;
    {
        const bool branch_taken_0x179b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x179B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179B50u;
            // 0x179b54: 0xa71821  addu        $v1, $a1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179b50) {
            ctx->pc = 0x179B6Cu;
            goto label_179b6c;
        }
    }
    ctx->pc = 0x179B58u;
label_179b58:
    // 0x179b58: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x179b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_179b5c:
    // 0x179b5c: 0x0  nop
    ctx->pc = 0x179b5cu;
    // NOP
label_179b60:
    // 0x179b60: 0x0  nop
    ctx->pc = 0x179b60u;
    // NOP
label_179b64:
    // 0x179b64: 0x5444fff8  bnel        $v0, $a0, . + 4 + (-0x8 << 2)
label_179b68:
    if (ctx->pc == 0x179B68u) {
        ctx->pc = 0x179B68u;
            // 0x179b68: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->pc = 0x179B6Cu;
        goto label_179b6c;
    }
    ctx->pc = 0x179B64u;
    {
        const bool branch_taken_0x179b64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x179b64) {
            ctx->pc = 0x179B68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x179B64u;
            // 0x179b68: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x179B48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_179b48;
        }
    }
    ctx->pc = 0x179B6Cu;
label_179b6c:
    // 0x179b6c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x179b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_179b70:
    // 0x179b70: 0x2442d3dc  addiu       $v0, $v0, -0x2C24
    ctx->pc = 0x179b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955996));
label_179b74:
    // 0x179b74: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x179b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_179b78:
    // 0x179b78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x179b78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_179b7c:
    // 0x179b7c: 0x3e00008  jr          $ra
label_179b80:
    if (ctx->pc == 0x179B80u) {
        ctx->pc = 0x179B80u;
            // 0x179b80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x179B84u;
        goto label_179b84;
    }
    ctx->pc = 0x179B7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x179B7Cu;
            // 0x179b80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x179B84u;
label_179b84:
    // 0x179b84: 0x0  nop
    ctx->pc = 0x179b84u;
    // NOP
}
