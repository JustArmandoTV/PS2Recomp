#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00403020
// Address: 0x403020 - 0x4038e0
void sub_00403020_0x403020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00403020_0x403020");
#endif

    switch (ctx->pc) {
        case 0x403020u: goto label_403020;
        case 0x403024u: goto label_403024;
        case 0x403028u: goto label_403028;
        case 0x40302cu: goto label_40302c;
        case 0x403030u: goto label_403030;
        case 0x403034u: goto label_403034;
        case 0x403038u: goto label_403038;
        case 0x40303cu: goto label_40303c;
        case 0x403040u: goto label_403040;
        case 0x403044u: goto label_403044;
        case 0x403048u: goto label_403048;
        case 0x40304cu: goto label_40304c;
        case 0x403050u: goto label_403050;
        case 0x403054u: goto label_403054;
        case 0x403058u: goto label_403058;
        case 0x40305cu: goto label_40305c;
        case 0x403060u: goto label_403060;
        case 0x403064u: goto label_403064;
        case 0x403068u: goto label_403068;
        case 0x40306cu: goto label_40306c;
        case 0x403070u: goto label_403070;
        case 0x403074u: goto label_403074;
        case 0x403078u: goto label_403078;
        case 0x40307cu: goto label_40307c;
        case 0x403080u: goto label_403080;
        case 0x403084u: goto label_403084;
        case 0x403088u: goto label_403088;
        case 0x40308cu: goto label_40308c;
        case 0x403090u: goto label_403090;
        case 0x403094u: goto label_403094;
        case 0x403098u: goto label_403098;
        case 0x40309cu: goto label_40309c;
        case 0x4030a0u: goto label_4030a0;
        case 0x4030a4u: goto label_4030a4;
        case 0x4030a8u: goto label_4030a8;
        case 0x4030acu: goto label_4030ac;
        case 0x4030b0u: goto label_4030b0;
        case 0x4030b4u: goto label_4030b4;
        case 0x4030b8u: goto label_4030b8;
        case 0x4030bcu: goto label_4030bc;
        case 0x4030c0u: goto label_4030c0;
        case 0x4030c4u: goto label_4030c4;
        case 0x4030c8u: goto label_4030c8;
        case 0x4030ccu: goto label_4030cc;
        case 0x4030d0u: goto label_4030d0;
        case 0x4030d4u: goto label_4030d4;
        case 0x4030d8u: goto label_4030d8;
        case 0x4030dcu: goto label_4030dc;
        case 0x4030e0u: goto label_4030e0;
        case 0x4030e4u: goto label_4030e4;
        case 0x4030e8u: goto label_4030e8;
        case 0x4030ecu: goto label_4030ec;
        case 0x4030f0u: goto label_4030f0;
        case 0x4030f4u: goto label_4030f4;
        case 0x4030f8u: goto label_4030f8;
        case 0x4030fcu: goto label_4030fc;
        case 0x403100u: goto label_403100;
        case 0x403104u: goto label_403104;
        case 0x403108u: goto label_403108;
        case 0x40310cu: goto label_40310c;
        case 0x403110u: goto label_403110;
        case 0x403114u: goto label_403114;
        case 0x403118u: goto label_403118;
        case 0x40311cu: goto label_40311c;
        case 0x403120u: goto label_403120;
        case 0x403124u: goto label_403124;
        case 0x403128u: goto label_403128;
        case 0x40312cu: goto label_40312c;
        case 0x403130u: goto label_403130;
        case 0x403134u: goto label_403134;
        case 0x403138u: goto label_403138;
        case 0x40313cu: goto label_40313c;
        case 0x403140u: goto label_403140;
        case 0x403144u: goto label_403144;
        case 0x403148u: goto label_403148;
        case 0x40314cu: goto label_40314c;
        case 0x403150u: goto label_403150;
        case 0x403154u: goto label_403154;
        case 0x403158u: goto label_403158;
        case 0x40315cu: goto label_40315c;
        case 0x403160u: goto label_403160;
        case 0x403164u: goto label_403164;
        case 0x403168u: goto label_403168;
        case 0x40316cu: goto label_40316c;
        case 0x403170u: goto label_403170;
        case 0x403174u: goto label_403174;
        case 0x403178u: goto label_403178;
        case 0x40317cu: goto label_40317c;
        case 0x403180u: goto label_403180;
        case 0x403184u: goto label_403184;
        case 0x403188u: goto label_403188;
        case 0x40318cu: goto label_40318c;
        case 0x403190u: goto label_403190;
        case 0x403194u: goto label_403194;
        case 0x403198u: goto label_403198;
        case 0x40319cu: goto label_40319c;
        case 0x4031a0u: goto label_4031a0;
        case 0x4031a4u: goto label_4031a4;
        case 0x4031a8u: goto label_4031a8;
        case 0x4031acu: goto label_4031ac;
        case 0x4031b0u: goto label_4031b0;
        case 0x4031b4u: goto label_4031b4;
        case 0x4031b8u: goto label_4031b8;
        case 0x4031bcu: goto label_4031bc;
        case 0x4031c0u: goto label_4031c0;
        case 0x4031c4u: goto label_4031c4;
        case 0x4031c8u: goto label_4031c8;
        case 0x4031ccu: goto label_4031cc;
        case 0x4031d0u: goto label_4031d0;
        case 0x4031d4u: goto label_4031d4;
        case 0x4031d8u: goto label_4031d8;
        case 0x4031dcu: goto label_4031dc;
        case 0x4031e0u: goto label_4031e0;
        case 0x4031e4u: goto label_4031e4;
        case 0x4031e8u: goto label_4031e8;
        case 0x4031ecu: goto label_4031ec;
        case 0x4031f0u: goto label_4031f0;
        case 0x4031f4u: goto label_4031f4;
        case 0x4031f8u: goto label_4031f8;
        case 0x4031fcu: goto label_4031fc;
        case 0x403200u: goto label_403200;
        case 0x403204u: goto label_403204;
        case 0x403208u: goto label_403208;
        case 0x40320cu: goto label_40320c;
        case 0x403210u: goto label_403210;
        case 0x403214u: goto label_403214;
        case 0x403218u: goto label_403218;
        case 0x40321cu: goto label_40321c;
        case 0x403220u: goto label_403220;
        case 0x403224u: goto label_403224;
        case 0x403228u: goto label_403228;
        case 0x40322cu: goto label_40322c;
        case 0x403230u: goto label_403230;
        case 0x403234u: goto label_403234;
        case 0x403238u: goto label_403238;
        case 0x40323cu: goto label_40323c;
        case 0x403240u: goto label_403240;
        case 0x403244u: goto label_403244;
        case 0x403248u: goto label_403248;
        case 0x40324cu: goto label_40324c;
        case 0x403250u: goto label_403250;
        case 0x403254u: goto label_403254;
        case 0x403258u: goto label_403258;
        case 0x40325cu: goto label_40325c;
        case 0x403260u: goto label_403260;
        case 0x403264u: goto label_403264;
        case 0x403268u: goto label_403268;
        case 0x40326cu: goto label_40326c;
        case 0x403270u: goto label_403270;
        case 0x403274u: goto label_403274;
        case 0x403278u: goto label_403278;
        case 0x40327cu: goto label_40327c;
        case 0x403280u: goto label_403280;
        case 0x403284u: goto label_403284;
        case 0x403288u: goto label_403288;
        case 0x40328cu: goto label_40328c;
        case 0x403290u: goto label_403290;
        case 0x403294u: goto label_403294;
        case 0x403298u: goto label_403298;
        case 0x40329cu: goto label_40329c;
        case 0x4032a0u: goto label_4032a0;
        case 0x4032a4u: goto label_4032a4;
        case 0x4032a8u: goto label_4032a8;
        case 0x4032acu: goto label_4032ac;
        case 0x4032b0u: goto label_4032b0;
        case 0x4032b4u: goto label_4032b4;
        case 0x4032b8u: goto label_4032b8;
        case 0x4032bcu: goto label_4032bc;
        case 0x4032c0u: goto label_4032c0;
        case 0x4032c4u: goto label_4032c4;
        case 0x4032c8u: goto label_4032c8;
        case 0x4032ccu: goto label_4032cc;
        case 0x4032d0u: goto label_4032d0;
        case 0x4032d4u: goto label_4032d4;
        case 0x4032d8u: goto label_4032d8;
        case 0x4032dcu: goto label_4032dc;
        case 0x4032e0u: goto label_4032e0;
        case 0x4032e4u: goto label_4032e4;
        case 0x4032e8u: goto label_4032e8;
        case 0x4032ecu: goto label_4032ec;
        case 0x4032f0u: goto label_4032f0;
        case 0x4032f4u: goto label_4032f4;
        case 0x4032f8u: goto label_4032f8;
        case 0x4032fcu: goto label_4032fc;
        case 0x403300u: goto label_403300;
        case 0x403304u: goto label_403304;
        case 0x403308u: goto label_403308;
        case 0x40330cu: goto label_40330c;
        case 0x403310u: goto label_403310;
        case 0x403314u: goto label_403314;
        case 0x403318u: goto label_403318;
        case 0x40331cu: goto label_40331c;
        case 0x403320u: goto label_403320;
        case 0x403324u: goto label_403324;
        case 0x403328u: goto label_403328;
        case 0x40332cu: goto label_40332c;
        case 0x403330u: goto label_403330;
        case 0x403334u: goto label_403334;
        case 0x403338u: goto label_403338;
        case 0x40333cu: goto label_40333c;
        case 0x403340u: goto label_403340;
        case 0x403344u: goto label_403344;
        case 0x403348u: goto label_403348;
        case 0x40334cu: goto label_40334c;
        case 0x403350u: goto label_403350;
        case 0x403354u: goto label_403354;
        case 0x403358u: goto label_403358;
        case 0x40335cu: goto label_40335c;
        case 0x403360u: goto label_403360;
        case 0x403364u: goto label_403364;
        case 0x403368u: goto label_403368;
        case 0x40336cu: goto label_40336c;
        case 0x403370u: goto label_403370;
        case 0x403374u: goto label_403374;
        case 0x403378u: goto label_403378;
        case 0x40337cu: goto label_40337c;
        case 0x403380u: goto label_403380;
        case 0x403384u: goto label_403384;
        case 0x403388u: goto label_403388;
        case 0x40338cu: goto label_40338c;
        case 0x403390u: goto label_403390;
        case 0x403394u: goto label_403394;
        case 0x403398u: goto label_403398;
        case 0x40339cu: goto label_40339c;
        case 0x4033a0u: goto label_4033a0;
        case 0x4033a4u: goto label_4033a4;
        case 0x4033a8u: goto label_4033a8;
        case 0x4033acu: goto label_4033ac;
        case 0x4033b0u: goto label_4033b0;
        case 0x4033b4u: goto label_4033b4;
        case 0x4033b8u: goto label_4033b8;
        case 0x4033bcu: goto label_4033bc;
        case 0x4033c0u: goto label_4033c0;
        case 0x4033c4u: goto label_4033c4;
        case 0x4033c8u: goto label_4033c8;
        case 0x4033ccu: goto label_4033cc;
        case 0x4033d0u: goto label_4033d0;
        case 0x4033d4u: goto label_4033d4;
        case 0x4033d8u: goto label_4033d8;
        case 0x4033dcu: goto label_4033dc;
        case 0x4033e0u: goto label_4033e0;
        case 0x4033e4u: goto label_4033e4;
        case 0x4033e8u: goto label_4033e8;
        case 0x4033ecu: goto label_4033ec;
        case 0x4033f0u: goto label_4033f0;
        case 0x4033f4u: goto label_4033f4;
        case 0x4033f8u: goto label_4033f8;
        case 0x4033fcu: goto label_4033fc;
        case 0x403400u: goto label_403400;
        case 0x403404u: goto label_403404;
        case 0x403408u: goto label_403408;
        case 0x40340cu: goto label_40340c;
        case 0x403410u: goto label_403410;
        case 0x403414u: goto label_403414;
        case 0x403418u: goto label_403418;
        case 0x40341cu: goto label_40341c;
        case 0x403420u: goto label_403420;
        case 0x403424u: goto label_403424;
        case 0x403428u: goto label_403428;
        case 0x40342cu: goto label_40342c;
        case 0x403430u: goto label_403430;
        case 0x403434u: goto label_403434;
        case 0x403438u: goto label_403438;
        case 0x40343cu: goto label_40343c;
        case 0x403440u: goto label_403440;
        case 0x403444u: goto label_403444;
        case 0x403448u: goto label_403448;
        case 0x40344cu: goto label_40344c;
        case 0x403450u: goto label_403450;
        case 0x403454u: goto label_403454;
        case 0x403458u: goto label_403458;
        case 0x40345cu: goto label_40345c;
        case 0x403460u: goto label_403460;
        case 0x403464u: goto label_403464;
        case 0x403468u: goto label_403468;
        case 0x40346cu: goto label_40346c;
        case 0x403470u: goto label_403470;
        case 0x403474u: goto label_403474;
        case 0x403478u: goto label_403478;
        case 0x40347cu: goto label_40347c;
        case 0x403480u: goto label_403480;
        case 0x403484u: goto label_403484;
        case 0x403488u: goto label_403488;
        case 0x40348cu: goto label_40348c;
        case 0x403490u: goto label_403490;
        case 0x403494u: goto label_403494;
        case 0x403498u: goto label_403498;
        case 0x40349cu: goto label_40349c;
        case 0x4034a0u: goto label_4034a0;
        case 0x4034a4u: goto label_4034a4;
        case 0x4034a8u: goto label_4034a8;
        case 0x4034acu: goto label_4034ac;
        case 0x4034b0u: goto label_4034b0;
        case 0x4034b4u: goto label_4034b4;
        case 0x4034b8u: goto label_4034b8;
        case 0x4034bcu: goto label_4034bc;
        case 0x4034c0u: goto label_4034c0;
        case 0x4034c4u: goto label_4034c4;
        case 0x4034c8u: goto label_4034c8;
        case 0x4034ccu: goto label_4034cc;
        case 0x4034d0u: goto label_4034d0;
        case 0x4034d4u: goto label_4034d4;
        case 0x4034d8u: goto label_4034d8;
        case 0x4034dcu: goto label_4034dc;
        case 0x4034e0u: goto label_4034e0;
        case 0x4034e4u: goto label_4034e4;
        case 0x4034e8u: goto label_4034e8;
        case 0x4034ecu: goto label_4034ec;
        case 0x4034f0u: goto label_4034f0;
        case 0x4034f4u: goto label_4034f4;
        case 0x4034f8u: goto label_4034f8;
        case 0x4034fcu: goto label_4034fc;
        case 0x403500u: goto label_403500;
        case 0x403504u: goto label_403504;
        case 0x403508u: goto label_403508;
        case 0x40350cu: goto label_40350c;
        case 0x403510u: goto label_403510;
        case 0x403514u: goto label_403514;
        case 0x403518u: goto label_403518;
        case 0x40351cu: goto label_40351c;
        case 0x403520u: goto label_403520;
        case 0x403524u: goto label_403524;
        case 0x403528u: goto label_403528;
        case 0x40352cu: goto label_40352c;
        case 0x403530u: goto label_403530;
        case 0x403534u: goto label_403534;
        case 0x403538u: goto label_403538;
        case 0x40353cu: goto label_40353c;
        case 0x403540u: goto label_403540;
        case 0x403544u: goto label_403544;
        case 0x403548u: goto label_403548;
        case 0x40354cu: goto label_40354c;
        case 0x403550u: goto label_403550;
        case 0x403554u: goto label_403554;
        case 0x403558u: goto label_403558;
        case 0x40355cu: goto label_40355c;
        case 0x403560u: goto label_403560;
        case 0x403564u: goto label_403564;
        case 0x403568u: goto label_403568;
        case 0x40356cu: goto label_40356c;
        case 0x403570u: goto label_403570;
        case 0x403574u: goto label_403574;
        case 0x403578u: goto label_403578;
        case 0x40357cu: goto label_40357c;
        case 0x403580u: goto label_403580;
        case 0x403584u: goto label_403584;
        case 0x403588u: goto label_403588;
        case 0x40358cu: goto label_40358c;
        case 0x403590u: goto label_403590;
        case 0x403594u: goto label_403594;
        case 0x403598u: goto label_403598;
        case 0x40359cu: goto label_40359c;
        case 0x4035a0u: goto label_4035a0;
        case 0x4035a4u: goto label_4035a4;
        case 0x4035a8u: goto label_4035a8;
        case 0x4035acu: goto label_4035ac;
        case 0x4035b0u: goto label_4035b0;
        case 0x4035b4u: goto label_4035b4;
        case 0x4035b8u: goto label_4035b8;
        case 0x4035bcu: goto label_4035bc;
        case 0x4035c0u: goto label_4035c0;
        case 0x4035c4u: goto label_4035c4;
        case 0x4035c8u: goto label_4035c8;
        case 0x4035ccu: goto label_4035cc;
        case 0x4035d0u: goto label_4035d0;
        case 0x4035d4u: goto label_4035d4;
        case 0x4035d8u: goto label_4035d8;
        case 0x4035dcu: goto label_4035dc;
        case 0x4035e0u: goto label_4035e0;
        case 0x4035e4u: goto label_4035e4;
        case 0x4035e8u: goto label_4035e8;
        case 0x4035ecu: goto label_4035ec;
        case 0x4035f0u: goto label_4035f0;
        case 0x4035f4u: goto label_4035f4;
        case 0x4035f8u: goto label_4035f8;
        case 0x4035fcu: goto label_4035fc;
        case 0x403600u: goto label_403600;
        case 0x403604u: goto label_403604;
        case 0x403608u: goto label_403608;
        case 0x40360cu: goto label_40360c;
        case 0x403610u: goto label_403610;
        case 0x403614u: goto label_403614;
        case 0x403618u: goto label_403618;
        case 0x40361cu: goto label_40361c;
        case 0x403620u: goto label_403620;
        case 0x403624u: goto label_403624;
        case 0x403628u: goto label_403628;
        case 0x40362cu: goto label_40362c;
        case 0x403630u: goto label_403630;
        case 0x403634u: goto label_403634;
        case 0x403638u: goto label_403638;
        case 0x40363cu: goto label_40363c;
        case 0x403640u: goto label_403640;
        case 0x403644u: goto label_403644;
        case 0x403648u: goto label_403648;
        case 0x40364cu: goto label_40364c;
        case 0x403650u: goto label_403650;
        case 0x403654u: goto label_403654;
        case 0x403658u: goto label_403658;
        case 0x40365cu: goto label_40365c;
        case 0x403660u: goto label_403660;
        case 0x403664u: goto label_403664;
        case 0x403668u: goto label_403668;
        case 0x40366cu: goto label_40366c;
        case 0x403670u: goto label_403670;
        case 0x403674u: goto label_403674;
        case 0x403678u: goto label_403678;
        case 0x40367cu: goto label_40367c;
        case 0x403680u: goto label_403680;
        case 0x403684u: goto label_403684;
        case 0x403688u: goto label_403688;
        case 0x40368cu: goto label_40368c;
        case 0x403690u: goto label_403690;
        case 0x403694u: goto label_403694;
        case 0x403698u: goto label_403698;
        case 0x40369cu: goto label_40369c;
        case 0x4036a0u: goto label_4036a0;
        case 0x4036a4u: goto label_4036a4;
        case 0x4036a8u: goto label_4036a8;
        case 0x4036acu: goto label_4036ac;
        case 0x4036b0u: goto label_4036b0;
        case 0x4036b4u: goto label_4036b4;
        case 0x4036b8u: goto label_4036b8;
        case 0x4036bcu: goto label_4036bc;
        case 0x4036c0u: goto label_4036c0;
        case 0x4036c4u: goto label_4036c4;
        case 0x4036c8u: goto label_4036c8;
        case 0x4036ccu: goto label_4036cc;
        case 0x4036d0u: goto label_4036d0;
        case 0x4036d4u: goto label_4036d4;
        case 0x4036d8u: goto label_4036d8;
        case 0x4036dcu: goto label_4036dc;
        case 0x4036e0u: goto label_4036e0;
        case 0x4036e4u: goto label_4036e4;
        case 0x4036e8u: goto label_4036e8;
        case 0x4036ecu: goto label_4036ec;
        case 0x4036f0u: goto label_4036f0;
        case 0x4036f4u: goto label_4036f4;
        case 0x4036f8u: goto label_4036f8;
        case 0x4036fcu: goto label_4036fc;
        case 0x403700u: goto label_403700;
        case 0x403704u: goto label_403704;
        case 0x403708u: goto label_403708;
        case 0x40370cu: goto label_40370c;
        case 0x403710u: goto label_403710;
        case 0x403714u: goto label_403714;
        case 0x403718u: goto label_403718;
        case 0x40371cu: goto label_40371c;
        case 0x403720u: goto label_403720;
        case 0x403724u: goto label_403724;
        case 0x403728u: goto label_403728;
        case 0x40372cu: goto label_40372c;
        case 0x403730u: goto label_403730;
        case 0x403734u: goto label_403734;
        case 0x403738u: goto label_403738;
        case 0x40373cu: goto label_40373c;
        case 0x403740u: goto label_403740;
        case 0x403744u: goto label_403744;
        case 0x403748u: goto label_403748;
        case 0x40374cu: goto label_40374c;
        case 0x403750u: goto label_403750;
        case 0x403754u: goto label_403754;
        case 0x403758u: goto label_403758;
        case 0x40375cu: goto label_40375c;
        case 0x403760u: goto label_403760;
        case 0x403764u: goto label_403764;
        case 0x403768u: goto label_403768;
        case 0x40376cu: goto label_40376c;
        case 0x403770u: goto label_403770;
        case 0x403774u: goto label_403774;
        case 0x403778u: goto label_403778;
        case 0x40377cu: goto label_40377c;
        case 0x403780u: goto label_403780;
        case 0x403784u: goto label_403784;
        case 0x403788u: goto label_403788;
        case 0x40378cu: goto label_40378c;
        case 0x403790u: goto label_403790;
        case 0x403794u: goto label_403794;
        case 0x403798u: goto label_403798;
        case 0x40379cu: goto label_40379c;
        case 0x4037a0u: goto label_4037a0;
        case 0x4037a4u: goto label_4037a4;
        case 0x4037a8u: goto label_4037a8;
        case 0x4037acu: goto label_4037ac;
        case 0x4037b0u: goto label_4037b0;
        case 0x4037b4u: goto label_4037b4;
        case 0x4037b8u: goto label_4037b8;
        case 0x4037bcu: goto label_4037bc;
        case 0x4037c0u: goto label_4037c0;
        case 0x4037c4u: goto label_4037c4;
        case 0x4037c8u: goto label_4037c8;
        case 0x4037ccu: goto label_4037cc;
        case 0x4037d0u: goto label_4037d0;
        case 0x4037d4u: goto label_4037d4;
        case 0x4037d8u: goto label_4037d8;
        case 0x4037dcu: goto label_4037dc;
        case 0x4037e0u: goto label_4037e0;
        case 0x4037e4u: goto label_4037e4;
        case 0x4037e8u: goto label_4037e8;
        case 0x4037ecu: goto label_4037ec;
        case 0x4037f0u: goto label_4037f0;
        case 0x4037f4u: goto label_4037f4;
        case 0x4037f8u: goto label_4037f8;
        case 0x4037fcu: goto label_4037fc;
        case 0x403800u: goto label_403800;
        case 0x403804u: goto label_403804;
        case 0x403808u: goto label_403808;
        case 0x40380cu: goto label_40380c;
        case 0x403810u: goto label_403810;
        case 0x403814u: goto label_403814;
        case 0x403818u: goto label_403818;
        case 0x40381cu: goto label_40381c;
        case 0x403820u: goto label_403820;
        case 0x403824u: goto label_403824;
        case 0x403828u: goto label_403828;
        case 0x40382cu: goto label_40382c;
        case 0x403830u: goto label_403830;
        case 0x403834u: goto label_403834;
        case 0x403838u: goto label_403838;
        case 0x40383cu: goto label_40383c;
        case 0x403840u: goto label_403840;
        case 0x403844u: goto label_403844;
        case 0x403848u: goto label_403848;
        case 0x40384cu: goto label_40384c;
        case 0x403850u: goto label_403850;
        case 0x403854u: goto label_403854;
        case 0x403858u: goto label_403858;
        case 0x40385cu: goto label_40385c;
        case 0x403860u: goto label_403860;
        case 0x403864u: goto label_403864;
        case 0x403868u: goto label_403868;
        case 0x40386cu: goto label_40386c;
        case 0x403870u: goto label_403870;
        case 0x403874u: goto label_403874;
        case 0x403878u: goto label_403878;
        case 0x40387cu: goto label_40387c;
        case 0x403880u: goto label_403880;
        case 0x403884u: goto label_403884;
        case 0x403888u: goto label_403888;
        case 0x40388cu: goto label_40388c;
        case 0x403890u: goto label_403890;
        case 0x403894u: goto label_403894;
        case 0x403898u: goto label_403898;
        case 0x40389cu: goto label_40389c;
        case 0x4038a0u: goto label_4038a0;
        case 0x4038a4u: goto label_4038a4;
        case 0x4038a8u: goto label_4038a8;
        case 0x4038acu: goto label_4038ac;
        case 0x4038b0u: goto label_4038b0;
        case 0x4038b4u: goto label_4038b4;
        case 0x4038b8u: goto label_4038b8;
        case 0x4038bcu: goto label_4038bc;
        case 0x4038c0u: goto label_4038c0;
        case 0x4038c4u: goto label_4038c4;
        case 0x4038c8u: goto label_4038c8;
        case 0x4038ccu: goto label_4038cc;
        case 0x4038d0u: goto label_4038d0;
        case 0x4038d4u: goto label_4038d4;
        case 0x4038d8u: goto label_4038d8;
        case 0x4038dcu: goto label_4038dc;
        default: break;
    }

    ctx->pc = 0x403020u;

label_403020:
    // 0x403020: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x403020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_403024:
    // 0x403024: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x403024u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_403028:
    // 0x403028: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x403028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_40302c:
    // 0x40302c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x40302cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_403030:
    // 0x403030: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x403030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_403034:
    // 0x403034: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x403034u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_403038:
    // 0x403038: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x403038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_40303c:
    // 0x40303c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x40303cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_403040:
    // 0x403040: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x403040u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_403044:
    // 0x403044: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x403044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_403048:
    // 0x403048: 0xc10ca68  jal         func_4329A0
label_40304c:
    if (ctx->pc == 0x40304Cu) {
        ctx->pc = 0x40304Cu;
            // 0x40304c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x403050u;
        goto label_403050;
    }
    ctx->pc = 0x403048u;
    SET_GPR_U32(ctx, 31, 0x403050u);
    ctx->pc = 0x40304Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x403048u;
            // 0x40304c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403050u; }
        if (ctx->pc != 0x403050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403050u; }
        if (ctx->pc != 0x403050u) { return; }
    }
    ctx->pc = 0x403050u;
label_403050:
    // 0x403050: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x403050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_403054:
    // 0x403054: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x403054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_403058:
    // 0x403058: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x403058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_40305c:
    // 0x40305c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x40305cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_403060:
    // 0x403060: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x403060u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_403064:
    // 0x403064: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x403064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_403068:
    // 0x403068: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x403068u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_40306c:
    // 0x40306c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x40306cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_403070:
    // 0x403070: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x403070u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_403074:
    // 0x403074: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x403074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_403078:
    // 0x403078: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x403078u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_40307c:
    // 0x40307c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x40307cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_403080:
    // 0x403080: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x403080u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_403084:
    // 0x403084: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x403084u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_403088:
    // 0x403088: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x403088u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_40308c:
    // 0x40308c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x40308cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_403090:
    // 0x403090: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x403090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_403094:
    // 0x403094: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x403094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_403098:
    // 0x403098: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x403098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_40309c:
    // 0x40309c: 0xc0582cc  jal         func_160B30
label_4030a0:
    if (ctx->pc == 0x4030A0u) {
        ctx->pc = 0x4030A0u;
            // 0x4030a0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x4030A4u;
        goto label_4030a4;
    }
    ctx->pc = 0x40309Cu;
    SET_GPR_U32(ctx, 31, 0x4030A4u);
    ctx->pc = 0x4030A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40309Cu;
            // 0x4030a0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4030A4u; }
        if (ctx->pc != 0x4030A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4030A4u; }
        if (ctx->pc != 0x4030A4u) { return; }
    }
    ctx->pc = 0x4030A4u;
label_4030a4:
    // 0x4030a4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4030a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4030a8:
    // 0x4030a8: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x4030a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_4030ac:
    // 0x4030ac: 0x2463a638  addiu       $v1, $v1, -0x59C8
    ctx->pc = 0x4030acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944312));
label_4030b0:
    // 0x4030b0: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x4030b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_4030b4:
    // 0x4030b4: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x4030b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_4030b8:
    // 0x4030b8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4030b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4030bc:
    // 0x4030bc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4030bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4030c0:
    // 0x4030c0: 0xac447290  sw          $a0, 0x7290($v0)
    ctx->pc = 0x4030c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29328), GPR_U32(ctx, 4));
label_4030c4:
    // 0x4030c4: 0x2463a650  addiu       $v1, $v1, -0x59B0
    ctx->pc = 0x4030c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944336));
label_4030c8:
    // 0x4030c8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4030c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4030cc:
    // 0x4030cc: 0x2442a688  addiu       $v0, $v0, -0x5978
    ctx->pc = 0x4030ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944392));
label_4030d0:
    // 0x4030d0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4030d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_4030d4:
    // 0x4030d4: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x4030d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_4030d8:
    // 0x4030d8: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x4030d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_4030dc:
    // 0x4030dc: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x4030dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_4030e0:
    // 0x4030e0: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x4030e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_4030e4:
    // 0x4030e4: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x4030e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_4030e8:
    // 0x4030e8: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x4030e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_4030ec:
    // 0x4030ec: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x4030ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_4030f0:
    // 0x4030f0: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x4030f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_4030f4:
    // 0x4030f4: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x4030f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_4030f8:
    // 0x4030f8: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x4030f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_4030fc:
    // 0x4030fc: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x4030fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_403100:
    // 0x403100: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x403100u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_403104:
    // 0x403104: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
label_403108:
    if (ctx->pc == 0x403108u) {
        ctx->pc = 0x40310Cu;
        goto label_40310c;
    }
    ctx->pc = 0x403104u;
    {
        const bool branch_taken_0x403104 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x403104) {
            ctx->pc = 0x4031A0u;
            goto label_4031a0;
        }
    }
    ctx->pc = 0x40310Cu;
label_40310c:
    // 0x40310c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x40310cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_403110:
    // 0x403110: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x403110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_403114:
    // 0x403114: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x403114u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_403118:
    // 0x403118: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x403118u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_40311c:
    // 0x40311c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x40311cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_403120:
    // 0x403120: 0xc040138  jal         func_1004E0
label_403124:
    if (ctx->pc == 0x403124u) {
        ctx->pc = 0x403124u;
            // 0x403124: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x403128u;
        goto label_403128;
    }
    ctx->pc = 0x403120u;
    SET_GPR_U32(ctx, 31, 0x403128u);
    ctx->pc = 0x403124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x403120u;
            // 0x403124: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403128u; }
        if (ctx->pc != 0x403128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403128u; }
        if (ctx->pc != 0x403128u) { return; }
    }
    ctx->pc = 0x403128u;
label_403128:
    // 0x403128: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x403128u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_40312c:
    // 0x40312c: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x40312cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
label_403130:
    // 0x403130: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x403130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_403134:
    // 0x403134: 0x24a531c0  addiu       $a1, $a1, 0x31C0
    ctx->pc = 0x403134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12736));
label_403138:
    // 0x403138: 0x24c625c0  addiu       $a2, $a2, 0x25C0
    ctx->pc = 0x403138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9664));
label_40313c:
    // 0x40313c: 0x24070270  addiu       $a3, $zero, 0x270
    ctx->pc = 0x40313cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 624));
label_403140:
    // 0x403140: 0xc040840  jal         func_102100
label_403144:
    if (ctx->pc == 0x403144u) {
        ctx->pc = 0x403144u;
            // 0x403144: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x403148u;
        goto label_403148;
    }
    ctx->pc = 0x403140u;
    SET_GPR_U32(ctx, 31, 0x403148u);
    ctx->pc = 0x403144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x403140u;
            // 0x403144: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403148u; }
        if (ctx->pc != 0x403148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403148u; }
        if (ctx->pc != 0x403148u) { return; }
    }
    ctx->pc = 0x403148u;
label_403148:
    // 0x403148: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x403148u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_40314c:
    // 0x40314c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x40314cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_403150:
    // 0x403150: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x403150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_403154:
    // 0x403154: 0xc0788fc  jal         func_1E23F0
label_403158:
    if (ctx->pc == 0x403158u) {
        ctx->pc = 0x403158u;
            // 0x403158: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40315Cu;
        goto label_40315c;
    }
    ctx->pc = 0x403154u;
    SET_GPR_U32(ctx, 31, 0x40315Cu);
    ctx->pc = 0x403158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x403154u;
            // 0x403158: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40315Cu; }
        if (ctx->pc != 0x40315Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40315Cu; }
        if (ctx->pc != 0x40315Cu) { return; }
    }
    ctx->pc = 0x40315Cu;
label_40315c:
    // 0x40315c: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x40315cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_403160:
    // 0x403160: 0xc0788fc  jal         func_1E23F0
label_403164:
    if (ctx->pc == 0x403164u) {
        ctx->pc = 0x403164u;
            // 0x403164: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x403168u;
        goto label_403168;
    }
    ctx->pc = 0x403160u;
    SET_GPR_U32(ctx, 31, 0x403168u);
    ctx->pc = 0x403164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x403160u;
            // 0x403164: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403168u; }
        if (ctx->pc != 0x403168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403168u; }
        if (ctx->pc != 0x403168u) { return; }
    }
    ctx->pc = 0x403168u;
label_403168:
    // 0x403168: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x403168u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40316c:
    // 0x40316c: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x40316cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_403170:
    // 0x403170: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x403170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_403174:
    // 0x403174: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x403174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_403178:
    // 0x403178: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x403178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40317c:
    // 0x40317c: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x40317cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_403180:
    // 0x403180: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x403180u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_403184:
    // 0x403184: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x403184u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_403188:
    // 0x403188: 0xc0a997c  jal         func_2A65F0
label_40318c:
    if (ctx->pc == 0x40318Cu) {
        ctx->pc = 0x40318Cu;
            // 0x40318c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x403190u;
        goto label_403190;
    }
    ctx->pc = 0x403188u;
    SET_GPR_U32(ctx, 31, 0x403190u);
    ctx->pc = 0x40318Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x403188u;
            // 0x40318c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403190u; }
        if (ctx->pc != 0x403190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403190u; }
        if (ctx->pc != 0x403190u) { return; }
    }
    ctx->pc = 0x403190u;
label_403190:
    // 0x403190: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x403190u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_403194:
    // 0x403194: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x403194u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_403198:
    // 0x403198: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_40319c:
    if (ctx->pc == 0x40319Cu) {
        ctx->pc = 0x40319Cu;
            // 0x40319c: 0x26520270  addiu       $s2, $s2, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 624));
        ctx->pc = 0x4031A0u;
        goto label_4031a0;
    }
    ctx->pc = 0x403198u;
    {
        const bool branch_taken_0x403198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40319Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x403198u;
            // 0x40319c: 0x26520270  addiu       $s2, $s2, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403198) {
            ctx->pc = 0x40316Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_40316c;
        }
    }
    ctx->pc = 0x4031A0u;
label_4031a0:
    // 0x4031a0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4031a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4031a4:
    // 0x4031a4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4031a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4031a8:
    // 0x4031a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4031a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4031ac:
    // 0x4031ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4031acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4031b0:
    // 0x4031b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4031b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4031b4:
    // 0x4031b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4031b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4031b8:
    // 0x4031b8: 0x3e00008  jr          $ra
label_4031bc:
    if (ctx->pc == 0x4031BCu) {
        ctx->pc = 0x4031BCu;
            // 0x4031bc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4031C0u;
        goto label_4031c0;
    }
    ctx->pc = 0x4031B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4031BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4031B8u;
            // 0x4031bc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4031C0u;
label_4031c0:
    // 0x4031c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4031c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4031c4:
    // 0x4031c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4031c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4031c8:
    // 0x4031c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4031c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4031cc:
    // 0x4031cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4031ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4031d0:
    // 0x4031d0: 0xc0aeebc  jal         func_2BBAF0
label_4031d4:
    if (ctx->pc == 0x4031D4u) {
        ctx->pc = 0x4031D4u;
            // 0x4031d4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x4031D8u;
        goto label_4031d8;
    }
    ctx->pc = 0x4031D0u;
    SET_GPR_U32(ctx, 31, 0x4031D8u);
    ctx->pc = 0x4031D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4031D0u;
            // 0x4031d4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4031D8u; }
        if (ctx->pc != 0x4031D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4031D8u; }
        if (ctx->pc != 0x4031D8u) { return; }
    }
    ctx->pc = 0x4031D8u;
label_4031d8:
    // 0x4031d8: 0xc0aeeb4  jal         func_2BBAD0
label_4031dc:
    if (ctx->pc == 0x4031DCu) {
        ctx->pc = 0x4031DCu;
            // 0x4031dc: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->pc = 0x4031E0u;
        goto label_4031e0;
    }
    ctx->pc = 0x4031D8u;
    SET_GPR_U32(ctx, 31, 0x4031E0u);
    ctx->pc = 0x4031DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4031D8u;
            // 0x4031dc: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4031E0u; }
        if (ctx->pc != 0x4031E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4031E0u; }
        if (ctx->pc != 0x4031E0u) { return; }
    }
    ctx->pc = 0x4031E0u;
label_4031e0:
    // 0x4031e0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4031e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4031e4:
    // 0x4031e4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4031e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4031e8:
    // 0x4031e8: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x4031e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_4031ec:
    // 0x4031ec: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x4031ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_4031f0:
    // 0x4031f0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4031f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4031f4:
    // 0x4031f4: 0x26240058  addiu       $a0, $s1, 0x58
    ctx->pc = 0x4031f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_4031f8:
    // 0x4031f8: 0xc0aeea4  jal         func_2BBA90
label_4031fc:
    if (ctx->pc == 0x4031FCu) {
        ctx->pc = 0x4031FCu;
            // 0x4031fc: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x403200u;
        goto label_403200;
    }
    ctx->pc = 0x4031F8u;
    SET_GPR_U32(ctx, 31, 0x403200u);
    ctx->pc = 0x4031FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4031F8u;
            // 0x4031fc: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403200u; }
        if (ctx->pc != 0x403200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403200u; }
        if (ctx->pc != 0x403200u) { return; }
    }
    ctx->pc = 0x403200u;
label_403200:
    // 0x403200: 0xc0aee8c  jal         func_2BBA30
label_403204:
    if (ctx->pc == 0x403204u) {
        ctx->pc = 0x403204u;
            // 0x403204: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x403208u;
        goto label_403208;
    }
    ctx->pc = 0x403200u;
    SET_GPR_U32(ctx, 31, 0x403208u);
    ctx->pc = 0x403204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x403200u;
            // 0x403204: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403208u; }
        if (ctx->pc != 0x403208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403208u; }
        if (ctx->pc != 0x403208u) { return; }
    }
    ctx->pc = 0x403208u;
label_403208:
    // 0x403208: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x403208u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_40320c:
    // 0x40320c: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x40320cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_403210:
    // 0x403210: 0xae2000a0  sw          $zero, 0xA0($s1)
    ctx->pc = 0x403210u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
label_403214:
    // 0x403214: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x403214u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
label_403218:
    // 0x403218: 0xae2000a4  sw          $zero, 0xA4($s1)
    ctx->pc = 0x403218u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 0));
label_40321c:
    // 0x40321c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x40321cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_403220:
    // 0x403220: 0xae2000a8  sw          $zero, 0xA8($s1)
    ctx->pc = 0x403220u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 0));
label_403224:
    // 0x403224: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x403224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_403228:
    // 0x403228: 0xae2000ac  sw          $zero, 0xAC($s1)
    ctx->pc = 0x403228u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 0));
label_40322c:
    // 0x40322c: 0xae2500b0  sw          $a1, 0xB0($s1)
    ctx->pc = 0x40322cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 5));
label_403230:
    // 0x403230: 0xae2000b4  sw          $zero, 0xB4($s1)
    ctx->pc = 0x403230u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
label_403234:
    // 0x403234: 0xae2000b8  sw          $zero, 0xB8($s1)
    ctx->pc = 0x403234u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 0));
label_403238:
    // 0x403238: 0xae2000c0  sw          $zero, 0xC0($s1)
    ctx->pc = 0x403238u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 0));
label_40323c:
    // 0x40323c: 0xae2400c4  sw          $a0, 0xC4($s1)
    ctx->pc = 0x40323cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 4));
label_403240:
    // 0x403240: 0xae2300c8  sw          $v1, 0xC8($s1)
    ctx->pc = 0x403240u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 3));
label_403244:
    // 0x403244: 0xc0775b8  jal         func_1DD6E0
label_403248:
    if (ctx->pc == 0x403248u) {
        ctx->pc = 0x403248u;
            // 0x403248: 0xa22200cc  sb          $v0, 0xCC($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x40324Cu;
        goto label_40324c;
    }
    ctx->pc = 0x403244u;
    SET_GPR_U32(ctx, 31, 0x40324Cu);
    ctx->pc = 0x403248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x403244u;
            // 0x403248: 0xa22200cc  sb          $v0, 0xCC($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40324Cu; }
        if (ctx->pc != 0x40324Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40324Cu; }
        if (ctx->pc != 0x40324Cu) { return; }
    }
    ctx->pc = 0x40324Cu;
label_40324c:
    // 0x40324c: 0xc077314  jal         func_1DCC50
label_403250:
    if (ctx->pc == 0x403250u) {
        ctx->pc = 0x403250u;
            // 0x403250: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x403254u;
        goto label_403254;
    }
    ctx->pc = 0x40324Cu;
    SET_GPR_U32(ctx, 31, 0x403254u);
    ctx->pc = 0x403250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40324Cu;
            // 0x403250: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403254u; }
        if (ctx->pc != 0x403254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403254u; }
        if (ctx->pc != 0x403254u) { return; }
    }
    ctx->pc = 0x403254u;
label_403254:
    // 0x403254: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x403254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_403258:
    // 0x403258: 0x263000f0  addiu       $s0, $s1, 0xF0
    ctx->pc = 0x403258u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
label_40325c:
    // 0x40325c: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x40325cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
label_403260:
    // 0x403260: 0x8e2500c8  lw          $a1, 0xC8($s1)
    ctx->pc = 0x403260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
label_403264:
    // 0x403264: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x403264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_403268:
    // 0x403268: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x403268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_40326c:
    // 0x40326c: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x40326cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_403270:
    // 0x403270: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x403270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_403274:
    // 0x403274: 0x2463a6f0  addiu       $v1, $v1, -0x5910
    ctx->pc = 0x403274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944496));
label_403278:
    // 0x403278: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x403278u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_40327c:
    // 0x40327c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x40327cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_403280:
    // 0x403280: 0x2442a730  addiu       $v0, $v0, -0x58D0
    ctx->pc = 0x403280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944560));
label_403284:
    // 0x403284: 0xae2500c8  sw          $a1, 0xC8($s1)
    ctx->pc = 0x403284u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 5));
label_403288:
    // 0x403288: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x403288u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_40328c:
    // 0x40328c: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x40328cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_403290:
    // 0x403290: 0xae2000e0  sw          $zero, 0xE0($s1)
    ctx->pc = 0x403290u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 0));
label_403294:
    // 0x403294: 0xae200180  sw          $zero, 0x180($s1)
    ctx->pc = 0x403294u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 384), GPR_U32(ctx, 0));
label_403298:
    // 0x403298: 0xae200184  sw          $zero, 0x184($s1)
    ctx->pc = 0x403298u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 0));
label_40329c:
    // 0x40329c: 0xc04c968  jal         func_1325A0
label_4032a0:
    if (ctx->pc == 0x4032A0u) {
        ctx->pc = 0x4032A0u;
            // 0x4032a0: 0xa2200188  sb          $zero, 0x188($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 392), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x4032A4u;
        goto label_4032a4;
    }
    ctx->pc = 0x40329Cu;
    SET_GPR_U32(ctx, 31, 0x4032A4u);
    ctx->pc = 0x4032A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40329Cu;
            // 0x4032a0: 0xa2200188  sb          $zero, 0x188($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 392), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4032A4u; }
        if (ctx->pc != 0x4032A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4032A4u; }
        if (ctx->pc != 0x4032A4u) { return; }
    }
    ctx->pc = 0x4032A4u;
label_4032a4:
    // 0x4032a4: 0xc04c968  jal         func_1325A0
label_4032a8:
    if (ctx->pc == 0x4032A8u) {
        ctx->pc = 0x4032A8u;
            // 0x4032a8: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x4032ACu;
        goto label_4032ac;
    }
    ctx->pc = 0x4032A4u;
    SET_GPR_U32(ctx, 31, 0x4032ACu);
    ctx->pc = 0x4032A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4032A4u;
            // 0x4032a8: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4032ACu; }
        if (ctx->pc != 0x4032ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4032ACu; }
        if (ctx->pc != 0x4032ACu) { return; }
    }
    ctx->pc = 0x4032ACu;
label_4032ac:
    // 0x4032ac: 0xc04c968  jal         func_1325A0
label_4032b0:
    if (ctx->pc == 0x4032B0u) {
        ctx->pc = 0x4032B0u;
            // 0x4032b0: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->pc = 0x4032B4u;
        goto label_4032b4;
    }
    ctx->pc = 0x4032ACu;
    SET_GPR_U32(ctx, 31, 0x4032B4u);
    ctx->pc = 0x4032B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4032ACu;
            // 0x4032b0: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4032B4u; }
        if (ctx->pc != 0x4032B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4032B4u; }
        if (ctx->pc != 0x4032B4u) { return; }
    }
    ctx->pc = 0x4032B4u;
label_4032b4:
    // 0x4032b4: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x4032b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_4032b8:
    // 0x4032b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4032b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4032bc:
    // 0x4032bc: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x4032bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_4032c0:
    // 0x4032c0: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x4032c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_4032c4:
    // 0x4032c4: 0xc04f26c  jal         func_13C9B0
label_4032c8:
    if (ctx->pc == 0x4032C8u) {
        ctx->pc = 0x4032C8u;
            // 0x4032c8: 0xae0000a8  sw          $zero, 0xA8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
        ctx->pc = 0x4032CCu;
        goto label_4032cc;
    }
    ctx->pc = 0x4032C4u;
    SET_GPR_U32(ctx, 31, 0x4032CCu);
    ctx->pc = 0x4032C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4032C4u;
            // 0x4032c8: 0xae0000a8  sw          $zero, 0xA8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4032CCu; }
        if (ctx->pc != 0x4032CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4032CCu; }
        if (ctx->pc != 0x4032CCu) { return; }
    }
    ctx->pc = 0x4032CCu;
label_4032cc:
    // 0x4032cc: 0xc04c968  jal         func_1325A0
label_4032d0:
    if (ctx->pc == 0x4032D0u) {
        ctx->pc = 0x4032D0u;
            // 0x4032d0: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x4032D4u;
        goto label_4032d4;
    }
    ctx->pc = 0x4032CCu;
    SET_GPR_U32(ctx, 31, 0x4032D4u);
    ctx->pc = 0x4032D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4032CCu;
            // 0x4032d0: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4032D4u; }
        if (ctx->pc != 0x4032D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4032D4u; }
        if (ctx->pc != 0x4032D4u) { return; }
    }
    ctx->pc = 0x4032D4u;
label_4032d4:
    // 0x4032d4: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4032d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_4032d8:
    // 0x4032d8: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x4032d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_4032dc:
    // 0x4032dc: 0xc04cc04  jal         func_133010
label_4032e0:
    if (ctx->pc == 0x4032E0u) {
        ctx->pc = 0x4032E0u;
            // 0x4032e0: 0x24a5b9d0  addiu       $a1, $a1, -0x4630 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949328));
        ctx->pc = 0x4032E4u;
        goto label_4032e4;
    }
    ctx->pc = 0x4032DCu;
    SET_GPR_U32(ctx, 31, 0x4032E4u);
    ctx->pc = 0x4032E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4032DCu;
            // 0x4032e0: 0x24a5b9d0  addiu       $a1, $a1, -0x4630 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4032E4u; }
        if (ctx->pc != 0x4032E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4032E4u; }
        if (ctx->pc != 0x4032E4u) { return; }
    }
    ctx->pc = 0x4032E4u;
label_4032e4:
    // 0x4032e4: 0xae2001e0  sw          $zero, 0x1E0($s1)
    ctx->pc = 0x4032e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 480), GPR_U32(ctx, 0));
label_4032e8:
    // 0x4032e8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4032e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4032ec:
    // 0x4032ec: 0xae2001e4  sw          $zero, 0x1E4($s1)
    ctx->pc = 0x4032ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 484), GPR_U32(ctx, 0));
label_4032f0:
    // 0x4032f0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4032f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4032f4:
    // 0x4032f4: 0xae2001e8  sw          $zero, 0x1E8($s1)
    ctx->pc = 0x4032f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 488), GPR_U32(ctx, 0));
label_4032f8:
    // 0x4032f8: 0x262401a0  addiu       $a0, $s1, 0x1A0
    ctx->pc = 0x4032f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 416));
label_4032fc:
    // 0x4032fc: 0xa62001f0  sh          $zero, 0x1F0($s1)
    ctx->pc = 0x4032fcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 496), (uint16_t)GPR_U32(ctx, 0));
label_403300:
    // 0x403300: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x403300u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_403304:
    // 0x403304: 0xa62001f2  sh          $zero, 0x1F2($s1)
    ctx->pc = 0x403304u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 498), (uint16_t)GPR_U32(ctx, 0));
label_403308:
    // 0x403308: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x403308u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_40330c:
    // 0x40330c: 0xa62201f4  sh          $v0, 0x1F4($s1)
    ctx->pc = 0x40330cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 500), (uint16_t)GPR_U32(ctx, 2));
label_403310:
    // 0x403310: 0xc04cbd8  jal         func_132F60
label_403314:
    if (ctx->pc == 0x403314u) {
        ctx->pc = 0x403314u;
            // 0x403314: 0xa62001f6  sh          $zero, 0x1F6($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 502), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x403318u;
        goto label_403318;
    }
    ctx->pc = 0x403310u;
    SET_GPR_U32(ctx, 31, 0x403318u);
    ctx->pc = 0x403314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x403310u;
            // 0x403314: 0xa62001f6  sh          $zero, 0x1F6($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 502), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403318u; }
        if (ctx->pc != 0x403318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403318u; }
        if (ctx->pc != 0x403318u) { return; }
    }
    ctx->pc = 0x403318u;
label_403318:
    // 0x403318: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x403318u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_40331c:
    // 0x40331c: 0x262401b0  addiu       $a0, $s1, 0x1B0
    ctx->pc = 0x40331cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 432));
label_403320:
    // 0x403320: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x403320u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_403324:
    // 0x403324: 0xc04cbd8  jal         func_132F60
label_403328:
    if (ctx->pc == 0x403328u) {
        ctx->pc = 0x403328u;
            // 0x403328: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x40332Cu;
        goto label_40332c;
    }
    ctx->pc = 0x403324u;
    SET_GPR_U32(ctx, 31, 0x40332Cu);
    ctx->pc = 0x403328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x403324u;
            // 0x403328: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40332Cu; }
        if (ctx->pc != 0x40332Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40332Cu; }
        if (ctx->pc != 0x40332Cu) { return; }
    }
    ctx->pc = 0x40332Cu;
label_40332c:
    // 0x40332c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x40332cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_403330:
    // 0x403330: 0x262401c0  addiu       $a0, $s1, 0x1C0
    ctx->pc = 0x403330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
label_403334:
    // 0x403334: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x403334u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_403338:
    // 0x403338: 0xc04cbd8  jal         func_132F60
label_40333c:
    if (ctx->pc == 0x40333Cu) {
        ctx->pc = 0x40333Cu;
            // 0x40333c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x403340u;
        goto label_403340;
    }
    ctx->pc = 0x403338u;
    SET_GPR_U32(ctx, 31, 0x403340u);
    ctx->pc = 0x40333Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x403338u;
            // 0x40333c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403340u; }
        if (ctx->pc != 0x403340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403340u; }
        if (ctx->pc != 0x403340u) { return; }
    }
    ctx->pc = 0x403340u;
label_403340:
    // 0x403340: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x403340u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_403344:
    // 0x403344: 0x262401d0  addiu       $a0, $s1, 0x1D0
    ctx->pc = 0x403344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 464));
label_403348:
    // 0x403348: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x403348u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_40334c:
    // 0x40334c: 0xc04cbd8  jal         func_132F60
label_403350:
    if (ctx->pc == 0x403350u) {
        ctx->pc = 0x403350u;
            // 0x403350: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x403354u;
        goto label_403354;
    }
    ctx->pc = 0x40334Cu;
    SET_GPR_U32(ctx, 31, 0x403354u);
    ctx->pc = 0x403350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40334Cu;
            // 0x403350: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403354u; }
        if (ctx->pc != 0x403354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403354u; }
        if (ctx->pc != 0x403354u) { return; }
    }
    ctx->pc = 0x403354u;
label_403354:
    // 0x403354: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x403354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_403358:
    // 0x403358: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x403358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40335c:
    // 0x40335c: 0xae220218  sw          $v0, 0x218($s1)
    ctx->pc = 0x40335cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 536), GPR_U32(ctx, 2));
label_403360:
    // 0x403360: 0xa2200250  sb          $zero, 0x250($s1)
    ctx->pc = 0x403360u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 592), (uint8_t)GPR_U32(ctx, 0));
label_403364:
    // 0x403364: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x403364u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_403368:
    // 0x403368: 0xa223025c  sb          $v1, 0x25C($s1)
    ctx->pc = 0x403368u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 604), (uint8_t)GPR_U32(ctx, 3));
label_40336c:
    // 0x40336c: 0xae200260  sw          $zero, 0x260($s1)
    ctx->pc = 0x40336cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 0));
label_403370:
    // 0x403370: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x403370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_403374:
    // 0x403374: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x403374u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_403378:
    // 0x403378: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x403378u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_40337c:
    // 0x40337c: 0x3e00008  jr          $ra
label_403380:
    if (ctx->pc == 0x403380u) {
        ctx->pc = 0x403380u;
            // 0x403380: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x403384u;
        goto label_403384;
    }
    ctx->pc = 0x40337Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x403380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40337Cu;
            // 0x403380: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x403384u;
label_403384:
    // 0x403384: 0x0  nop
    ctx->pc = 0x403384u;
    // NOP
label_403388:
    // 0x403388: 0x0  nop
    ctx->pc = 0x403388u;
    // NOP
label_40338c:
    // 0x40338c: 0x0  nop
    ctx->pc = 0x40338cu;
    // NOP
label_403390:
    // 0x403390: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x403390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_403394:
    // 0x403394: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x403394u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_403398:
    // 0x403398: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x403398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_40339c:
    // 0x40339c: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x40339cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_4033a0:
    // 0x4033a0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4033a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4033a4:
    // 0x4033a4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x4033a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_4033a8:
    // 0x4033a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4033a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4033ac:
    // 0x4033ac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4033acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4033b0:
    // 0x4033b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4033b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4033b4:
    // 0x4033b4: 0x24650820  addiu       $a1, $v1, 0x820
    ctx->pc = 0x4033b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 2080));
label_4033b8:
    // 0x4033b8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x4033b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_4033bc:
    // 0x4033bc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x4033bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4033c0:
    // 0x4033c0: 0x246602e0  addiu       $a2, $v1, 0x2E0
    ctx->pc = 0x4033c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 736));
label_4033c4:
    // 0x4033c4: 0xc04cc7c  jal         func_1331F0
label_4033c8:
    if (ctx->pc == 0x4033C8u) {
        ctx->pc = 0x4033C8u;
            // 0x4033c8: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x4033CCu;
        goto label_4033cc;
    }
    ctx->pc = 0x4033C4u;
    SET_GPR_U32(ctx, 31, 0x4033CCu);
    ctx->pc = 0x4033C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4033C4u;
            // 0x4033c8: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4033CCu; }
        if (ctx->pc != 0x4033CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4033CCu; }
        if (ctx->pc != 0x4033CCu) { return; }
    }
    ctx->pc = 0x4033CCu;
label_4033cc:
    // 0x4033cc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x4033ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4033d0:
    // 0x4033d0: 0xc04cc44  jal         func_133110
label_4033d4:
    if (ctx->pc == 0x4033D4u) {
        ctx->pc = 0x4033D4u;
            // 0x4033d4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4033D8u;
        goto label_4033d8;
    }
    ctx->pc = 0x4033D0u;
    SET_GPR_U32(ctx, 31, 0x4033D8u);
    ctx->pc = 0x4033D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4033D0u;
            // 0x4033d4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4033D8u; }
        if (ctx->pc != 0x4033D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4033D8u; }
        if (ctx->pc != 0x4033D8u) { return; }
    }
    ctx->pc = 0x4033D8u;
label_4033d8:
    // 0x4033d8: 0x3c023f94  lui         $v0, 0x3F94
    ctx->pc = 0x4033d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16276 << 16));
label_4033dc:
    // 0x4033dc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x4033dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4033e0:
    // 0x4033e0: 0x344225ed  ori         $v0, $v0, 0x25ED
    ctx->pc = 0x4033e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9709);
label_4033e4:
    // 0x4033e4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4033e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4033e8:
    // 0x4033e8: 0xc04cc70  jal         func_1331C0
label_4033ec:
    if (ctx->pc == 0x4033ECu) {
        ctx->pc = 0x4033ECu;
            // 0x4033ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4033F0u;
        goto label_4033f0;
    }
    ctx->pc = 0x4033E8u;
    SET_GPR_U32(ctx, 31, 0x4033F0u);
    ctx->pc = 0x4033ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4033E8u;
            // 0x4033ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4033F0u; }
        if (ctx->pc != 0x4033F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4033F0u; }
        if (ctx->pc != 0x4033F0u) { return; }
    }
    ctx->pc = 0x4033F0u;
label_4033f0:
    // 0x4033f0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4033f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4033f4:
    // 0x4033f4: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x4033f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_4033f8:
    // 0x4033f8: 0x8c43e3e0  lw          $v1, -0x1C20($v0)
    ctx->pc = 0x4033f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4033fc:
    // 0x4033fc: 0xc7a60060  lwc1        $f6, 0x60($sp)
    ctx->pc = 0x4033fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_403400:
    // 0x403400: 0xc7a50064  lwc1        $f5, 0x64($sp)
    ctx->pc = 0x403400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_403404:
    // 0x403404: 0xc7a40068  lwc1        $f4, 0x68($sp)
    ctx->pc = 0x403404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_403408:
    // 0x403408: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x403408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_40340c:
    // 0x40340c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x40340cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_403410:
    // 0x403410: 0xe7a60050  swc1        $f6, 0x50($sp)
    ctx->pc = 0x403410u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_403414:
    // 0x403414: 0xe7a50054  swc1        $f5, 0x54($sp)
    ctx->pc = 0x403414u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_403418:
    // 0x403418: 0xe7a40058  swc1        $f4, 0x58($sp)
    ctx->pc = 0x403418u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_40341c:
    // 0x40341c: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x40341cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_403420:
    // 0x403420: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x403420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_403424:
    // 0x403424: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x403424u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_403428:
    // 0x403428: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x403428u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_40342c:
    // 0x40342c: 0x46023002  mul.s       $f0, $f6, $f2
    ctx->pc = 0x40342cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_403430:
    // 0x403430: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x403430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_403434:
    // 0x403434: 0x46022802  mul.s       $f0, $f5, $f2
    ctx->pc = 0x403434u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_403438:
    // 0x403438: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x403438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_40343c:
    // 0x40343c: 0x46022042  mul.s       $f1, $f4, $f2
    ctx->pc = 0x40343cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_403440:
    // 0x403440: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x403440u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_403444:
    // 0x403444: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x403444u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_403448:
    // 0x403448: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x403448u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_40344c:
    // 0x40344c: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x40344cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_403450:
    // 0x403450: 0xc088b74  jal         func_222DD0
label_403454:
    if (ctx->pc == 0x403454u) {
        ctx->pc = 0x403454u;
            // 0x403454: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x403458u;
        goto label_403458;
    }
    ctx->pc = 0x403450u;
    SET_GPR_U32(ctx, 31, 0x403458u);
    ctx->pc = 0x403454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x403450u;
            // 0x403454: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403458u; }
        if (ctx->pc != 0x403458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403458u; }
        if (ctx->pc != 0x403458u) { return; }
    }
    ctx->pc = 0x403458u;
label_403458:
    // 0x403458: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x403458u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_40345c:
    // 0x40345c: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x40345cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_403460:
    // 0x403460: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x403460u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_403464:
    // 0x403464: 0x320f809  jalr        $t9
label_403468:
    if (ctx->pc == 0x403468u) {
        ctx->pc = 0x403468u;
            // 0x403468: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x40346Cu;
        goto label_40346c;
    }
    ctx->pc = 0x403464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x40346Cu);
        ctx->pc = 0x403468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x403464u;
            // 0x403468: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x40346Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x40346Cu; }
            if (ctx->pc != 0x40346Cu) { return; }
        }
        }
    }
    ctx->pc = 0x40346Cu;
label_40346c:
    // 0x40346c: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x40346cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_403470:
    // 0x403470: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x403470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_403474:
    // 0x403474: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x403474u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_403478:
    // 0x403478: 0xc08914c  jal         func_224530
label_40347c:
    if (ctx->pc == 0x40347Cu) {
        ctx->pc = 0x40347Cu;
            // 0x40347c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x403480u;
        goto label_403480;
    }
    ctx->pc = 0x403478u;
    SET_GPR_U32(ctx, 31, 0x403480u);
    ctx->pc = 0x40347Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x403478u;
            // 0x40347c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403480u; }
        if (ctx->pc != 0x403480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403480u; }
        if (ctx->pc != 0x403480u) { return; }
    }
    ctx->pc = 0x403480u;
label_403480:
    // 0x403480: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x403480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_403484:
    // 0x403484: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x403484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_403488:
    // 0x403488: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x403488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_40348c:
    // 0x40348c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x40348cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_403490:
    // 0x403490: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x403490u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_403494:
    // 0x403494: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x403494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_403498:
    // 0x403498: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x403498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_40349c:
    // 0x40349c: 0xc08bff0  jal         func_22FFC0
label_4034a0:
    if (ctx->pc == 0x4034A0u) {
        ctx->pc = 0x4034A0u;
            // 0x4034a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4034A4u;
        goto label_4034a4;
    }
    ctx->pc = 0x40349Cu;
    SET_GPR_U32(ctx, 31, 0x4034A4u);
    ctx->pc = 0x4034A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40349Cu;
            // 0x4034a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4034A4u; }
        if (ctx->pc != 0x4034A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4034A4u; }
        if (ctx->pc != 0x4034A4u) { return; }
    }
    ctx->pc = 0x4034A4u;
label_4034a4:
    // 0x4034a4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4034a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4034a8:
    // 0x4034a8: 0xc074740  jal         func_1D1D00
label_4034ac:
    if (ctx->pc == 0x4034ACu) {
        ctx->pc = 0x4034ACu;
            // 0x4034ac: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->pc = 0x4034B0u;
        goto label_4034b0;
    }
    ctx->pc = 0x4034A8u;
    SET_GPR_U32(ctx, 31, 0x4034B0u);
    ctx->pc = 0x4034ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4034A8u;
            // 0x4034ac: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4034B0u; }
        if (ctx->pc != 0x4034B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4034B0u; }
        if (ctx->pc != 0x4034B0u) { return; }
    }
    ctx->pc = 0x4034B0u;
label_4034b0:
    // 0x4034b0: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_4034b4:
    if (ctx->pc == 0x4034B4u) {
        ctx->pc = 0x4034B4u;
            // 0x4034b4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x4034B8u;
        goto label_4034b8;
    }
    ctx->pc = 0x4034B0u;
    {
        const bool branch_taken_0x4034b0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4034b0) {
            ctx->pc = 0x4034B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4034B0u;
            // 0x4034b4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4034C4u;
            goto label_4034c4;
        }
    }
    ctx->pc = 0x4034B8u;
label_4034b8:
    // 0x4034b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4034b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4034bc:
    // 0x4034bc: 0x10000007  b           . + 4 + (0x7 << 2)
label_4034c0:
    if (ctx->pc == 0x4034C0u) {
        ctx->pc = 0x4034C0u;
            // 0x4034c0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4034C4u;
        goto label_4034c4;
    }
    ctx->pc = 0x4034BCu;
    {
        const bool branch_taken_0x4034bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4034C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4034BCu;
            // 0x4034c0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4034bc) {
            ctx->pc = 0x4034DCu;
            goto label_4034dc;
        }
    }
    ctx->pc = 0x4034C4u;
label_4034c4:
    // 0x4034c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4034c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4034c8:
    // 0x4034c8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4034c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4034cc:
    // 0x4034cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4034ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4034d0:
    // 0x4034d0: 0x0  nop
    ctx->pc = 0x4034d0u;
    // NOP
label_4034d4:
    // 0x4034d4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x4034d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4034d8:
    // 0x4034d8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x4034d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_4034dc:
    // 0x4034dc: 0x3c032f80  lui         $v1, 0x2F80
    ctx->pc = 0x4034dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12160 << 16));
label_4034e0:
    // 0x4034e0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4034e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4034e4:
    // 0x4034e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4034e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4034e8:
    // 0x4034e8: 0x8c44a2e0  lw          $a0, -0x5D20($v0)
    ctx->pc = 0x4034e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
label_4034ec:
    // 0x4034ec: 0xc074740  jal         func_1D1D00
label_4034f0:
    if (ctx->pc == 0x4034F0u) {
        ctx->pc = 0x4034F0u;
            // 0x4034f0: 0x46010542  mul.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x4034F4u;
        goto label_4034f4;
    }
    ctx->pc = 0x4034ECu;
    SET_GPR_U32(ctx, 31, 0x4034F4u);
    ctx->pc = 0x4034F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4034ECu;
            // 0x4034f0: 0x46010542  mul.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4034F4u; }
        if (ctx->pc != 0x4034F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4034F4u; }
        if (ctx->pc != 0x4034F4u) { return; }
    }
    ctx->pc = 0x4034F4u;
label_4034f4:
    // 0x4034f4: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_4034f8:
    if (ctx->pc == 0x4034F8u) {
        ctx->pc = 0x4034F8u;
            // 0x4034f8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x4034FCu;
        goto label_4034fc;
    }
    ctx->pc = 0x4034F4u;
    {
        const bool branch_taken_0x4034f4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4034f4) {
            ctx->pc = 0x4034F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4034F4u;
            // 0x4034f8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x403508u;
            goto label_403508;
        }
    }
    ctx->pc = 0x4034FCu;
label_4034fc:
    // 0x4034fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4034fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_403500:
    // 0x403500: 0x10000007  b           . + 4 + (0x7 << 2)
label_403504:
    if (ctx->pc == 0x403504u) {
        ctx->pc = 0x403504u;
            // 0x403504: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x403508u;
        goto label_403508;
    }
    ctx->pc = 0x403500u;
    {
        const bool branch_taken_0x403500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x403504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x403500u;
            // 0x403504: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x403500) {
            ctx->pc = 0x403520u;
            goto label_403520;
        }
    }
    ctx->pc = 0x403508u;
label_403508:
    // 0x403508: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x403508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_40350c:
    // 0x40350c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x40350cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_403510:
    // 0x403510: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x403510u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_403514:
    // 0x403514: 0x0  nop
    ctx->pc = 0x403514u;
    // NOP
label_403518:
    // 0x403518: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x403518u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_40351c:
    // 0x40351c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x40351cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_403520:
    // 0x403520: 0x3c032f80  lui         $v1, 0x2F80
    ctx->pc = 0x403520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12160 << 16));
label_403524:
    // 0x403524: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x403524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_403528:
    // 0x403528: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x403528u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40352c:
    // 0x40352c: 0x8c44a2e0  lw          $a0, -0x5D20($v0)
    ctx->pc = 0x40352cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
label_403530:
    // 0x403530: 0xc074740  jal         func_1D1D00
label_403534:
    if (ctx->pc == 0x403534u) {
        ctx->pc = 0x403534u;
            // 0x403534: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x403538u;
        goto label_403538;
    }
    ctx->pc = 0x403530u;
    SET_GPR_U32(ctx, 31, 0x403538u);
    ctx->pc = 0x403534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x403530u;
            // 0x403534: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403538u; }
        if (ctx->pc != 0x403538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403538u; }
        if (ctx->pc != 0x403538u) { return; }
    }
    ctx->pc = 0x403538u;
label_403538:
    // 0x403538: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_40353c:
    if (ctx->pc == 0x40353Cu) {
        ctx->pc = 0x40353Cu;
            // 0x40353c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x403540u;
        goto label_403540;
    }
    ctx->pc = 0x403538u;
    {
        const bool branch_taken_0x403538 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x403538) {
            ctx->pc = 0x40353Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x403538u;
            // 0x40353c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x40354Cu;
            goto label_40354c;
        }
    }
    ctx->pc = 0x403540u;
label_403540:
    // 0x403540: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x403540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_403544:
    // 0x403544: 0x10000007  b           . + 4 + (0x7 << 2)
label_403548:
    if (ctx->pc == 0x403548u) {
        ctx->pc = 0x403548u;
            // 0x403548: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x40354Cu;
        goto label_40354c;
    }
    ctx->pc = 0x403544u;
    {
        const bool branch_taken_0x403544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x403548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x403544u;
            // 0x403548: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x403544) {
            ctx->pc = 0x403564u;
            goto label_403564;
        }
    }
    ctx->pc = 0x40354Cu;
label_40354c:
    // 0x40354c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x40354cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_403550:
    // 0x403550: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x403550u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_403554:
    // 0x403554: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x403554u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_403558:
    // 0x403558: 0x0  nop
    ctx->pc = 0x403558u;
    // NOP
label_40355c:
    // 0x40355c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x40355cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_403560:
    // 0x403560: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x403560u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_403564:
    // 0x403564: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x403564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_403568:
    // 0x403568: 0x3c033eb2  lui         $v1, 0x3EB2
    ctx->pc = 0x403568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16050 << 16));
label_40356c:
    // 0x40356c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x40356cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_403570:
    // 0x403570: 0x3463b8c2  ori         $v1, $v1, 0xB8C2
    ctx->pc = 0x403570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47298);
label_403574:
    // 0x403574: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x403574u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_403578:
    // 0x403578: 0x3c023f32  lui         $v0, 0x3F32
    ctx->pc = 0x403578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16178 << 16));
label_40357c:
    // 0x40357c: 0x3444b8c2  ori         $a0, $v0, 0xB8C2
    ctx->pc = 0x40357cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
label_403580:
    // 0x403580: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x403580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_403584:
    // 0x403584: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x403584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_403588:
    // 0x403588: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x403588u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_40358c:
    // 0x40358c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x40358cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_403590:
    // 0x403590: 0x44842800  mtc1        $a0, $f5
    ctx->pc = 0x403590u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_403594:
    // 0x403594: 0x0  nop
    ctx->pc = 0x403594u;
    // NOP
label_403598:
    // 0x403598: 0x46041818  adda.s      $f3, $f4
    ctx->pc = 0x403598u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_40359c:
    // 0x40359c: 0x4600281d  msub.s      $f0, $f5, $f0
    ctx->pc = 0x40359cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[0]));
label_4035a0:
    // 0x4035a0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x4035a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4035a4:
    // 0x4035a4: 0x0  nop
    ctx->pc = 0x4035a4u;
    // NOP
label_4035a8:
    // 0x4035a8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x4035a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_4035ac:
    // 0x4035ac: 0x46041818  adda.s      $f3, $f4
    ctx->pc = 0x4035acu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_4035b0:
    // 0x4035b0: 0x4614285d  msub.s      $f1, $f5, $f20
    ctx->pc = 0x4035b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[20]));
label_4035b4:
    // 0x4035b4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x4035b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_4035b8:
    // 0x4035b8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x4035b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_4035bc:
    // 0x4035bc: 0x46041818  adda.s      $f3, $f4
    ctx->pc = 0x4035bcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
label_4035c0:
    // 0x4035c0: 0x4615281d  msub.s      $f0, $f5, $f21
    ctx->pc = 0x4035c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[21]));
label_4035c4:
    // 0x4035c4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x4035c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_4035c8:
    // 0x4035c8: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x4035c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_4035cc:
    // 0x4035cc: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x4035ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_4035d0:
    // 0x4035d0: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x4035d0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4035d4:
    // 0x4035d4: 0xc088b74  jal         func_222DD0
label_4035d8:
    if (ctx->pc == 0x4035D8u) {
        ctx->pc = 0x4035D8u;
            // 0x4035d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4035DCu;
        goto label_4035dc;
    }
    ctx->pc = 0x4035D4u;
    SET_GPR_U32(ctx, 31, 0x4035DCu);
    ctx->pc = 0x4035D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4035D4u;
            // 0x4035d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4035DCu; }
        if (ctx->pc != 0x4035DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4035DCu; }
        if (ctx->pc != 0x4035DCu) { return; }
    }
    ctx->pc = 0x4035DCu;
label_4035dc:
    // 0x4035dc: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x4035dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_4035e0:
    // 0x4035e0: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x4035e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_4035e4:
    // 0x4035e4: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x4035e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_4035e8:
    // 0x4035e8: 0x320f809  jalr        $t9
label_4035ec:
    if (ctx->pc == 0x4035ECu) {
        ctx->pc = 0x4035ECu;
            // 0x4035ec: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x4035F0u;
        goto label_4035f0;
    }
    ctx->pc = 0x4035E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4035F0u);
        ctx->pc = 0x4035ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4035E8u;
            // 0x4035ec: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4035F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4035F0u; }
            if (ctx->pc != 0x4035F0u) { return; }
        }
        }
    }
    ctx->pc = 0x4035F0u;
label_4035f0:
    // 0x4035f0: 0x3c03423c  lui         $v1, 0x423C
    ctx->pc = 0x4035f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16956 << 16));
label_4035f4:
    // 0x4035f4: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x4035f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4035f8:
    // 0x4035f8: 0x34667edd  ori         $a2, $v1, 0x7EDD
    ctx->pc = 0x4035f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32477);
label_4035fc:
    // 0x4035fc: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x4035fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
label_403600:
    // 0x403600: 0x34646666  ori         $a0, $v1, 0x6666
    ctx->pc = 0x403600u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
label_403604:
    // 0x403604: 0xaca60158  sw          $a2, 0x158($a1)
    ctx->pc = 0x403604u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 344), GPR_U32(ctx, 6));
label_403608:
    // 0x403608: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x403608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_40360c:
    // 0x40360c: 0xac640160  sw          $a0, 0x160($v1)
    ctx->pc = 0x40360cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 352), GPR_U32(ctx, 4));
label_403610:
    // 0x403610: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x403610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_403614:
    // 0x403614: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x403614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_403618:
    // 0x403618: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x403618u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_40361c:
    // 0x40361c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x40361cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_403620:
    // 0x403620: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x403620u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_403624:
    // 0x403624: 0x3e00008  jr          $ra
label_403628:
    if (ctx->pc == 0x403628u) {
        ctx->pc = 0x403628u;
            // 0x403628: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x40362Cu;
        goto label_40362c;
    }
    ctx->pc = 0x403624u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x403628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x403624u;
            // 0x403628: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40362Cu;
label_40362c:
    // 0x40362c: 0x0  nop
    ctx->pc = 0x40362cu;
    // NOP
label_403630:
    // 0x403630: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x403630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_403634:
    // 0x403634: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x403634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_403638:
    // 0x403638: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x403638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_40363c:
    // 0x40363c: 0xc0e34b0  jal         func_38D2C0
label_403640:
    if (ctx->pc == 0x403640u) {
        ctx->pc = 0x403640u;
            // 0x403640: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x403644u;
        goto label_403644;
    }
    ctx->pc = 0x40363Cu;
    SET_GPR_U32(ctx, 31, 0x403644u);
    ctx->pc = 0x403640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40363Cu;
            // 0x403640: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D2C0u;
    if (runtime->hasFunction(0x38D2C0u)) {
        auto targetFn = runtime->lookupFunction(0x38D2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403644u; }
        if (ctx->pc != 0x403644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D2C0_0x38d2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403644u; }
        if (ctx->pc != 0x403644u) { return; }
    }
    ctx->pc = 0x403644u;
label_403644:
    // 0x403644: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x403644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_403648:
    // 0x403648: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x403648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40364c:
    // 0x40364c: 0x5483001d  bnel        $a0, $v1, . + 4 + (0x1D << 2)
label_403650:
    if (ctx->pc == 0x403650u) {
        ctx->pc = 0x403650u;
            // 0x403650: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x403654u;
        goto label_403654;
    }
    ctx->pc = 0x40364Cu;
    {
        const bool branch_taken_0x40364c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x40364c) {
            ctx->pc = 0x403650u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40364Cu;
            // 0x403650: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4036C4u;
            goto label_4036c4;
        }
    }
    ctx->pc = 0x403654u;
label_403654:
    // 0x403654: 0x92020250  lbu         $v0, 0x250($s0)
    ctx->pc = 0x403654u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 592)));
label_403658:
    // 0x403658: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_40365c:
    if (ctx->pc == 0x40365Cu) {
        ctx->pc = 0x40365Cu;
            // 0x40365c: 0x8e040260  lw          $a0, 0x260($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
        ctx->pc = 0x403660u;
        goto label_403660;
    }
    ctx->pc = 0x403658u;
    {
        const bool branch_taken_0x403658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x403658) {
            ctx->pc = 0x40365Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x403658u;
            // 0x40365c: 0x8e040260  lw          $a0, 0x260($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x403694u;
            goto label_403694;
        }
    }
    ctx->pc = 0x403660u;
label_403660:
    // 0x403660: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x403660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_403664:
    // 0x403664: 0x8e030254  lw          $v1, 0x254($s0)
    ctx->pc = 0x403664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
label_403668:
    // 0x403668: 0x8c420dc0  lw          $v0, 0xDC0($v0)
    ctx->pc = 0x403668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3520)));
label_40366c:
    // 0x40366c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x40366cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_403670:
    // 0x403670: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x403670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_403674:
    // 0x403674: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x403674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_403678:
    // 0x403678: 0xc0ff744  jal         func_3FDD10
label_40367c:
    if (ctx->pc == 0x40367Cu) {
        ctx->pc = 0x40367Cu;
            // 0x40367c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x403680u;
        goto label_403680;
    }
    ctx->pc = 0x403678u;
    SET_GPR_U32(ctx, 31, 0x403680u);
    ctx->pc = 0x40367Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x403678u;
            // 0x40367c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3FDD10u;
    if (runtime->hasFunction(0x3FDD10u)) {
        auto targetFn = runtime->lookupFunction(0x3FDD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403680u; }
        if (ctx->pc != 0x403680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003FDD10_0x3fdd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403680u; }
        if (ctx->pc != 0x403680u) { return; }
    }
    ctx->pc = 0x403680u;
label_403680:
    // 0x403680: 0x8e040260  lw          $a0, 0x260($s0)
    ctx->pc = 0x403680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
label_403684:
    // 0x403684: 0xc122c5c  jal         func_48B170
label_403688:
    if (ctx->pc == 0x403688u) {
        ctx->pc = 0x403688u;
            // 0x403688: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x40368Cu;
        goto label_40368c;
    }
    ctx->pc = 0x403684u;
    SET_GPR_U32(ctx, 31, 0x40368Cu);
    ctx->pc = 0x403688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x403684u;
            // 0x403688: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B170u;
    if (runtime->hasFunction(0x48B170u)) {
        auto targetFn = runtime->lookupFunction(0x48B170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40368Cu; }
        if (ctx->pc != 0x40368Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B170_0x48b170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40368Cu; }
        if (ctx->pc != 0x40368Cu) { return; }
    }
    ctx->pc = 0x40368Cu;
label_40368c:
    // 0x40368c: 0xa2000250  sb          $zero, 0x250($s0)
    ctx->pc = 0x40368cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 592), (uint8_t)GPR_U32(ctx, 0));
label_403690:
    // 0x403690: 0x8e040260  lw          $a0, 0x260($s0)
    ctx->pc = 0x403690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
label_403694:
    // 0x403694: 0xc122c5c  jal         func_48B170
label_403698:
    if (ctx->pc == 0x403698u) {
        ctx->pc = 0x403698u;
            // 0x403698: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x40369Cu;
        goto label_40369c;
    }
    ctx->pc = 0x403694u;
    SET_GPR_U32(ctx, 31, 0x40369Cu);
    ctx->pc = 0x403698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x403694u;
            // 0x403698: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B170u;
    if (runtime->hasFunction(0x48B170u)) {
        auto targetFn = runtime->lookupFunction(0x48B170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40369Cu; }
        if (ctx->pc != 0x40369Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B170_0x48b170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40369Cu; }
        if (ctx->pc != 0x40369Cu) { return; }
    }
    ctx->pc = 0x40369Cu;
label_40369c:
    // 0x40369c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x40369cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4036a0:
    // 0x4036a0: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4036a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_4036a4:
    // 0x4036a4: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4036a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4036a8:
    // 0x4036a8: 0x2463b990  addiu       $v1, $v1, -0x4670
    ctx->pc = 0x4036a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949264));
label_4036ac:
    // 0x4036ac: 0x90420c6a  lbu         $v0, 0xC6A($v0)
    ctx->pc = 0x4036acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3178)));
label_4036b0:
    // 0x4036b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4036b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4036b4:
    // 0x4036b4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4036b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4036b8:
    // 0x4036b8: 0xc073234  jal         func_1CC8D0
label_4036bc:
    if (ctx->pc == 0x4036BCu) {
        ctx->pc = 0x4036BCu;
            // 0x4036bc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4036C0u;
        goto label_4036c0;
    }
    ctx->pc = 0x4036B8u;
    SET_GPR_U32(ctx, 31, 0x4036C0u);
    ctx->pc = 0x4036BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4036B8u;
            // 0x4036bc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4036C0u; }
        if (ctx->pc != 0x4036C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4036C0u; }
        if (ctx->pc != 0x4036C0u) { return; }
    }
    ctx->pc = 0x4036C0u;
label_4036c0:
    // 0x4036c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4036c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4036c4:
    // 0x4036c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4036c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4036c8:
    // 0x4036c8: 0x3e00008  jr          $ra
label_4036cc:
    if (ctx->pc == 0x4036CCu) {
        ctx->pc = 0x4036CCu;
            // 0x4036cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4036D0u;
        goto label_4036d0;
    }
    ctx->pc = 0x4036C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4036CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4036C8u;
            // 0x4036cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4036D0u;
label_4036d0:
    // 0x4036d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4036d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4036d4:
    // 0x4036d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4036d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4036d8:
    // 0x4036d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4036d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4036dc:
    // 0x4036dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4036dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4036e0:
    // 0x4036e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4036e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4036e4:
    // 0x4036e4: 0x8c8400b4  lw          $a0, 0xB4($a0)
    ctx->pc = 0x4036e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
label_4036e8:
    // 0x4036e8: 0x5483001d  bnel        $a0, $v1, . + 4 + (0x1D << 2)
label_4036ec:
    if (ctx->pc == 0x4036ECu) {
        ctx->pc = 0x4036ECu;
            // 0x4036ec: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4036F0u;
        goto label_4036f0;
    }
    ctx->pc = 0x4036E8u;
    {
        const bool branch_taken_0x4036e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4036e8) {
            ctx->pc = 0x4036ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4036E8u;
            // 0x4036ec: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x403760u;
            goto label_403760;
        }
    }
    ctx->pc = 0x4036F0u;
label_4036f0:
    // 0x4036f0: 0x92020250  lbu         $v0, 0x250($s0)
    ctx->pc = 0x4036f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 592)));
label_4036f4:
    // 0x4036f4: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_4036f8:
    if (ctx->pc == 0x4036F8u) {
        ctx->pc = 0x4036F8u;
            // 0x4036f8: 0x8e040260  lw          $a0, 0x260($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
        ctx->pc = 0x4036FCu;
        goto label_4036fc;
    }
    ctx->pc = 0x4036F4u;
    {
        const bool branch_taken_0x4036f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4036f4) {
            ctx->pc = 0x4036F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4036F4u;
            // 0x4036f8: 0x8e040260  lw          $a0, 0x260($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x403730u;
            goto label_403730;
        }
    }
    ctx->pc = 0x4036FCu;
label_4036fc:
    // 0x4036fc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4036fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_403700:
    // 0x403700: 0x8e030254  lw          $v1, 0x254($s0)
    ctx->pc = 0x403700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
label_403704:
    // 0x403704: 0x8c420dc0  lw          $v0, 0xDC0($v0)
    ctx->pc = 0x403704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3520)));
label_403708:
    // 0x403708: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x403708u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_40370c:
    // 0x40370c: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x40370cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_403710:
    // 0x403710: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x403710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_403714:
    // 0x403714: 0xc0ff744  jal         func_3FDD10
label_403718:
    if (ctx->pc == 0x403718u) {
        ctx->pc = 0x403718u;
            // 0x403718: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x40371Cu;
        goto label_40371c;
    }
    ctx->pc = 0x403714u;
    SET_GPR_U32(ctx, 31, 0x40371Cu);
    ctx->pc = 0x403718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x403714u;
            // 0x403718: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3FDD10u;
    if (runtime->hasFunction(0x3FDD10u)) {
        auto targetFn = runtime->lookupFunction(0x3FDD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40371Cu; }
        if (ctx->pc != 0x40371Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003FDD10_0x3fdd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40371Cu; }
        if (ctx->pc != 0x40371Cu) { return; }
    }
    ctx->pc = 0x40371Cu;
label_40371c:
    // 0x40371c: 0x8e040260  lw          $a0, 0x260($s0)
    ctx->pc = 0x40371cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
label_403720:
    // 0x403720: 0xc122c5c  jal         func_48B170
label_403724:
    if (ctx->pc == 0x403724u) {
        ctx->pc = 0x403724u;
            // 0x403724: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x403728u;
        goto label_403728;
    }
    ctx->pc = 0x403720u;
    SET_GPR_U32(ctx, 31, 0x403728u);
    ctx->pc = 0x403724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x403720u;
            // 0x403724: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B170u;
    if (runtime->hasFunction(0x48B170u)) {
        auto targetFn = runtime->lookupFunction(0x48B170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403728u; }
        if (ctx->pc != 0x403728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B170_0x48b170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403728u; }
        if (ctx->pc != 0x403728u) { return; }
    }
    ctx->pc = 0x403728u;
label_403728:
    // 0x403728: 0xa2000250  sb          $zero, 0x250($s0)
    ctx->pc = 0x403728u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 592), (uint8_t)GPR_U32(ctx, 0));
label_40372c:
    // 0x40372c: 0x8e040260  lw          $a0, 0x260($s0)
    ctx->pc = 0x40372cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
label_403730:
    // 0x403730: 0xc122c5c  jal         func_48B170
label_403734:
    if (ctx->pc == 0x403734u) {
        ctx->pc = 0x403734u;
            // 0x403734: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x403738u;
        goto label_403738;
    }
    ctx->pc = 0x403730u;
    SET_GPR_U32(ctx, 31, 0x403738u);
    ctx->pc = 0x403734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x403730u;
            // 0x403734: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B170u;
    if (runtime->hasFunction(0x48B170u)) {
        auto targetFn = runtime->lookupFunction(0x48B170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403738u; }
        if (ctx->pc != 0x403738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B170_0x48b170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403738u; }
        if (ctx->pc != 0x403738u) { return; }
    }
    ctx->pc = 0x403738u;
label_403738:
    // 0x403738: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x403738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_40373c:
    // 0x40373c: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x40373cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_403740:
    // 0x403740: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x403740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_403744:
    // 0x403744: 0x2463b990  addiu       $v1, $v1, -0x4670
    ctx->pc = 0x403744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949264));
label_403748:
    // 0x403748: 0x90420c6a  lbu         $v0, 0xC6A($v0)
    ctx->pc = 0x403748u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3178)));
label_40374c:
    // 0x40374c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x40374cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_403750:
    // 0x403750: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x403750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_403754:
    // 0x403754: 0xc073234  jal         func_1CC8D0
label_403758:
    if (ctx->pc == 0x403758u) {
        ctx->pc = 0x403758u;
            // 0x403758: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x40375Cu;
        goto label_40375c;
    }
    ctx->pc = 0x403754u;
    SET_GPR_U32(ctx, 31, 0x40375Cu);
    ctx->pc = 0x403758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x403754u;
            // 0x403758: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40375Cu; }
        if (ctx->pc != 0x40375Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40375Cu; }
        if (ctx->pc != 0x40375Cu) { return; }
    }
    ctx->pc = 0x40375Cu;
label_40375c:
    // 0x40375c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x40375cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_403760:
    // 0x403760: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x403760u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_403764:
    // 0x403764: 0x3e00008  jr          $ra
label_403768:
    if (ctx->pc == 0x403768u) {
        ctx->pc = 0x403768u;
            // 0x403768: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x40376Cu;
        goto label_40376c;
    }
    ctx->pc = 0x403764u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x403768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x403764u;
            // 0x403768: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40376Cu;
label_40376c:
    // 0x40376c: 0x0  nop
    ctx->pc = 0x40376cu;
    // NOP
label_403770:
    // 0x403770: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x403770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_403774:
    // 0x403774: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x403774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_403778:
    // 0x403778: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x403778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_40377c:
    // 0x40377c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x40377cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_403780:
    // 0x403780: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x403780u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_403784:
    // 0x403784: 0x8c8400a0  lw          $a0, 0xA0($a0)
    ctx->pc = 0x403784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
label_403788:
    // 0x403788: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_40378c:
    if (ctx->pc == 0x40378Cu) {
        ctx->pc = 0x40378Cu;
            // 0x40378c: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x403790u;
        goto label_403790;
    }
    ctx->pc = 0x403788u;
    {
        const bool branch_taken_0x403788 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x403788) {
            ctx->pc = 0x40378Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x403788u;
            // 0x40378c: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4037A4u;
            goto label_4037a4;
        }
    }
    ctx->pc = 0x403790u;
label_403790:
    // 0x403790: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x403790u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_403794:
    // 0x403794: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x403794u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_403798:
    // 0x403798: 0x320f809  jalr        $t9
label_40379c:
    if (ctx->pc == 0x40379Cu) {
        ctx->pc = 0x40379Cu;
            // 0x40379c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4037A0u;
        goto label_4037a0;
    }
    ctx->pc = 0x403798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4037A0u);
        ctx->pc = 0x40379Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x403798u;
            // 0x40379c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4037A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4037A0u; }
            if (ctx->pc != 0x4037A0u) { return; }
        }
        }
    }
    ctx->pc = 0x4037A0u;
label_4037a0:
    // 0x4037a0: 0xae2000a0  sw          $zero, 0xA0($s1)
    ctx->pc = 0x4037a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
label_4037a4:
    // 0x4037a4: 0x8e30009c  lw          $s0, 0x9C($s1)
    ctx->pc = 0x4037a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_4037a8:
    // 0x4037a8: 0x5200000e  beql        $s0, $zero, . + 4 + (0xE << 2)
label_4037ac:
    if (ctx->pc == 0x4037ACu) {
        ctx->pc = 0x4037ACu;
            // 0x4037ac: 0xae20009c  sw          $zero, 0x9C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
        ctx->pc = 0x4037B0u;
        goto label_4037b0;
    }
    ctx->pc = 0x4037A8u;
    {
        const bool branch_taken_0x4037a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4037a8) {
            ctx->pc = 0x4037ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4037A8u;
            // 0x4037ac: 0xae20009c  sw          $zero, 0x9C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4037E4u;
            goto label_4037e4;
        }
    }
    ctx->pc = 0x4037B0u;
label_4037b0:
    // 0x4037b0: 0xc04008c  jal         func_100230
label_4037b4:
    if (ctx->pc == 0x4037B4u) {
        ctx->pc = 0x4037B4u;
            // 0x4037b4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4037B8u;
        goto label_4037b8;
    }
    ctx->pc = 0x4037B0u;
    SET_GPR_U32(ctx, 31, 0x4037B8u);
    ctx->pc = 0x4037B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4037B0u;
            // 0x4037b4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4037B8u; }
        if (ctx->pc != 0x4037B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4037B8u; }
        if (ctx->pc != 0x4037B8u) { return; }
    }
    ctx->pc = 0x4037B8u;
label_4037b8:
    // 0x4037b8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x4037b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4037bc:
    // 0x4037bc: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x4037bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_4037c0:
    // 0x4037c0: 0xc0407c0  jal         func_101F00
label_4037c4:
    if (ctx->pc == 0x4037C4u) {
        ctx->pc = 0x4037C4u;
            // 0x4037c4: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->pc = 0x4037C8u;
        goto label_4037c8;
    }
    ctx->pc = 0x4037C0u;
    SET_GPR_U32(ctx, 31, 0x4037C8u);
    ctx->pc = 0x4037C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4037C0u;
            // 0x4037c4: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4037C8u; }
        if (ctx->pc != 0x4037C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4037C8u; }
        if (ctx->pc != 0x4037C8u) { return; }
    }
    ctx->pc = 0x4037C8u;
label_4037c8:
    // 0x4037c8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x4037c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4037cc:
    // 0x4037cc: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x4037ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_4037d0:
    // 0x4037d0: 0xc0407c0  jal         func_101F00
label_4037d4:
    if (ctx->pc == 0x4037D4u) {
        ctx->pc = 0x4037D4u;
            // 0x4037d4: 0x24a5b390  addiu       $a1, $a1, -0x4C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947728));
        ctx->pc = 0x4037D8u;
        goto label_4037d8;
    }
    ctx->pc = 0x4037D0u;
    SET_GPR_U32(ctx, 31, 0x4037D8u);
    ctx->pc = 0x4037D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4037D0u;
            // 0x4037d4: 0x24a5b390  addiu       $a1, $a1, -0x4C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4037D8u; }
        if (ctx->pc != 0x4037D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4037D8u; }
        if (ctx->pc != 0x4037D8u) { return; }
    }
    ctx->pc = 0x4037D8u;
label_4037d8:
    // 0x4037d8: 0xc0400a8  jal         func_1002A0
label_4037dc:
    if (ctx->pc == 0x4037DCu) {
        ctx->pc = 0x4037DCu;
            // 0x4037dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4037E0u;
        goto label_4037e0;
    }
    ctx->pc = 0x4037D8u;
    SET_GPR_U32(ctx, 31, 0x4037E0u);
    ctx->pc = 0x4037DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4037D8u;
            // 0x4037dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4037E0u; }
        if (ctx->pc != 0x4037E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4037E0u; }
        if (ctx->pc != 0x4037E0u) { return; }
    }
    ctx->pc = 0x4037E0u;
label_4037e0:
    // 0x4037e0: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x4037e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_4037e4:
    // 0x4037e4: 0x8e240260  lw          $a0, 0x260($s1)
    ctx->pc = 0x4037e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
label_4037e8:
    // 0x4037e8: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4037ec:
    if (ctx->pc == 0x4037ECu) {
        ctx->pc = 0x4037ECu;
            // 0x4037ec: 0xae200260  sw          $zero, 0x260($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 0));
        ctx->pc = 0x4037F0u;
        goto label_4037f0;
    }
    ctx->pc = 0x4037E8u;
    {
        const bool branch_taken_0x4037e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4037e8) {
            ctx->pc = 0x4037ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4037E8u;
            // 0x4037ec: 0xae200260  sw          $zero, 0x260($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x403804u;
            goto label_403804;
        }
    }
    ctx->pc = 0x4037F0u;
label_4037f0:
    // 0x4037f0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4037f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4037f4:
    // 0x4037f4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4037f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4037f8:
    // 0x4037f8: 0x320f809  jalr        $t9
label_4037fc:
    if (ctx->pc == 0x4037FCu) {
        ctx->pc = 0x4037FCu;
            // 0x4037fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x403800u;
        goto label_403800;
    }
    ctx->pc = 0x4037F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x403800u);
        ctx->pc = 0x4037FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4037F8u;
            // 0x4037fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x403800u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x403800u; }
            if (ctx->pc != 0x403800u) { return; }
        }
        }
    }
    ctx->pc = 0x403800u;
label_403800:
    // 0x403800: 0xae200260  sw          $zero, 0x260($s1)
    ctx->pc = 0x403800u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 0));
label_403804:
    // 0x403804: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x403804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_403808:
    // 0x403808: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_40380c:
    if (ctx->pc == 0x40380Cu) {
        ctx->pc = 0x40380Cu;
            // 0x40380c: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x403810u;
        goto label_403810;
    }
    ctx->pc = 0x403808u;
    {
        const bool branch_taken_0x403808 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x403808) {
            ctx->pc = 0x40380Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x403808u;
            // 0x40380c: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x403824u;
            goto label_403824;
        }
    }
    ctx->pc = 0x403810u;
label_403810:
    // 0x403810: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x403810u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_403814:
    // 0x403814: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x403814u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_403818:
    // 0x403818: 0x320f809  jalr        $t9
label_40381c:
    if (ctx->pc == 0x40381Cu) {
        ctx->pc = 0x40381Cu;
            // 0x40381c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x403820u;
        goto label_403820;
    }
    ctx->pc = 0x403818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x403820u);
        ctx->pc = 0x40381Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x403818u;
            // 0x40381c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x403820u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x403820u; }
            if (ctx->pc != 0x403820u) { return; }
        }
        }
    }
    ctx->pc = 0x403820u;
label_403820:
    // 0x403820: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x403820u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_403824:
    // 0x403824: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x403824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_403828:
    // 0x403828: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x403828u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_40382c:
    // 0x40382c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x40382cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_403830:
    // 0x403830: 0x3e00008  jr          $ra
label_403834:
    if (ctx->pc == 0x403834u) {
        ctx->pc = 0x403834u;
            // 0x403834: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x403838u;
        goto label_403838;
    }
    ctx->pc = 0x403830u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x403834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x403830u;
            // 0x403834: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x403838u;
label_403838:
    // 0x403838: 0x0  nop
    ctx->pc = 0x403838u;
    // NOP
label_40383c:
    // 0x40383c: 0x0  nop
    ctx->pc = 0x40383cu;
    // NOP
label_403840:
    // 0x403840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x403840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_403844:
    // 0x403844: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x403844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_403848:
    // 0x403848: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x403848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_40384c:
    // 0x40384c: 0x34430180  ori         $v1, $v0, 0x180
    ctx->pc = 0x40384cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)384);
label_403850:
    // 0x403850: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x403850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_403854:
    // 0x403854: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x403854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_403858:
    // 0x403858: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x403858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_40385c:
    // 0x40385c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x40385cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_403860:
    // 0x403860: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x403860u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_403864:
    // 0x403864: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x403864u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_403868:
    // 0x403868: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x403868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_40386c:
    // 0x40386c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x40386cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_403870:
    // 0x403870: 0xc08bff0  jal         func_22FFC0
label_403874:
    if (ctx->pc == 0x403874u) {
        ctx->pc = 0x403874u;
            // 0x403874: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x403878u;
        goto label_403878;
    }
    ctx->pc = 0x403870u;
    SET_GPR_U32(ctx, 31, 0x403878u);
    ctx->pc = 0x403874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x403870u;
            // 0x403874: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403878u; }
        if (ctx->pc != 0x403878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x403878u; }
        if (ctx->pc != 0x403878u) { return; }
    }
    ctx->pc = 0x403878u;
label_403878:
    // 0x403878: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x403878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_40387c:
    // 0x40387c: 0xae0200e0  sw          $v0, 0xE0($s0)
    ctx->pc = 0x40387cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 2));
label_403880:
    // 0x403880: 0x92020250  lbu         $v0, 0x250($s0)
    ctx->pc = 0x403880u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 592)));
label_403884:
    // 0x403884: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_403888:
    if (ctx->pc == 0x403888u) {
        ctx->pc = 0x403888u;
            // 0x403888: 0x8e040260  lw          $a0, 0x260($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
        ctx->pc = 0x40388Cu;
        goto label_40388c;
    }
    ctx->pc = 0x403884u;
    {
        const bool branch_taken_0x403884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x403884) {
            ctx->pc = 0x403888u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x403884u;
            // 0x403888: 0x8e040260  lw          $a0, 0x260($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4038C0u;
            goto label_4038c0;
        }
    }
    ctx->pc = 0x40388Cu;
label_40388c:
    // 0x40388c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x40388cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_403890:
    // 0x403890: 0x8e030254  lw          $v1, 0x254($s0)
    ctx->pc = 0x403890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
label_403894:
    // 0x403894: 0x8c420dc0  lw          $v0, 0xDC0($v0)
    ctx->pc = 0x403894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3520)));
label_403898:
    // 0x403898: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x403898u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_40389c:
    // 0x40389c: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x40389cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_4038a0:
    // 0x4038a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4038a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4038a4:
    // 0x4038a4: 0xc0ff744  jal         func_3FDD10
label_4038a8:
    if (ctx->pc == 0x4038A8u) {
        ctx->pc = 0x4038A8u;
            // 0x4038a8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x4038ACu;
        goto label_4038ac;
    }
    ctx->pc = 0x4038A4u;
    SET_GPR_U32(ctx, 31, 0x4038ACu);
    ctx->pc = 0x4038A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4038A4u;
            // 0x4038a8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3FDD10u;
    if (runtime->hasFunction(0x3FDD10u)) {
        auto targetFn = runtime->lookupFunction(0x3FDD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4038ACu; }
        if (ctx->pc != 0x4038ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003FDD10_0x3fdd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4038ACu; }
        if (ctx->pc != 0x4038ACu) { return; }
    }
    ctx->pc = 0x4038ACu;
label_4038ac:
    // 0x4038ac: 0x8e040260  lw          $a0, 0x260($s0)
    ctx->pc = 0x4038acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
label_4038b0:
    // 0x4038b0: 0xc122c5c  jal         func_48B170
label_4038b4:
    if (ctx->pc == 0x4038B4u) {
        ctx->pc = 0x4038B4u;
            // 0x4038b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4038B8u;
        goto label_4038b8;
    }
    ctx->pc = 0x4038B0u;
    SET_GPR_U32(ctx, 31, 0x4038B8u);
    ctx->pc = 0x4038B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4038B0u;
            // 0x4038b4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B170u;
    if (runtime->hasFunction(0x48B170u)) {
        auto targetFn = runtime->lookupFunction(0x48B170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4038B8u; }
        if (ctx->pc != 0x4038B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B170_0x48b170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4038B8u; }
        if (ctx->pc != 0x4038B8u) { return; }
    }
    ctx->pc = 0x4038B8u;
label_4038b8:
    // 0x4038b8: 0xa2000250  sb          $zero, 0x250($s0)
    ctx->pc = 0x4038b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 592), (uint8_t)GPR_U32(ctx, 0));
label_4038bc:
    // 0x4038bc: 0x8e040260  lw          $a0, 0x260($s0)
    ctx->pc = 0x4038bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
label_4038c0:
    // 0x4038c0: 0xc122c5c  jal         func_48B170
label_4038c4:
    if (ctx->pc == 0x4038C4u) {
        ctx->pc = 0x4038C4u;
            // 0x4038c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4038C8u;
        goto label_4038c8;
    }
    ctx->pc = 0x4038C0u;
    SET_GPR_U32(ctx, 31, 0x4038C8u);
    ctx->pc = 0x4038C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4038C0u;
            // 0x4038c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B170u;
    if (runtime->hasFunction(0x48B170u)) {
        auto targetFn = runtime->lookupFunction(0x48B170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4038C8u; }
        if (ctx->pc != 0x4038C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B170_0x48b170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4038C8u; }
        if (ctx->pc != 0x4038C8u) { return; }
    }
    ctx->pc = 0x4038C8u;
label_4038c8:
    // 0x4038c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4038c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4038cc:
    // 0x4038cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4038ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4038d0:
    // 0x4038d0: 0x3e00008  jr          $ra
label_4038d4:
    if (ctx->pc == 0x4038D4u) {
        ctx->pc = 0x4038D4u;
            // 0x4038d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4038D8u;
        goto label_4038d8;
    }
    ctx->pc = 0x4038D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4038D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4038D0u;
            // 0x4038d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4038D8u;
label_4038d8:
    // 0x4038d8: 0x0  nop
    ctx->pc = 0x4038d8u;
    // NOP
label_4038dc:
    // 0x4038dc: 0x0  nop
    ctx->pc = 0x4038dcu;
    // NOP
}
