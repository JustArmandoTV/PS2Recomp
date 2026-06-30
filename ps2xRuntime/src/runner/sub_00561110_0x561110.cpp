#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00561110
// Address: 0x561110 - 0x562010
void sub_00561110_0x561110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00561110_0x561110");
#endif

    switch (ctx->pc) {
        case 0x561110u: goto label_561110;
        case 0x561114u: goto label_561114;
        case 0x561118u: goto label_561118;
        case 0x56111cu: goto label_56111c;
        case 0x561120u: goto label_561120;
        case 0x561124u: goto label_561124;
        case 0x561128u: goto label_561128;
        case 0x56112cu: goto label_56112c;
        case 0x561130u: goto label_561130;
        case 0x561134u: goto label_561134;
        case 0x561138u: goto label_561138;
        case 0x56113cu: goto label_56113c;
        case 0x561140u: goto label_561140;
        case 0x561144u: goto label_561144;
        case 0x561148u: goto label_561148;
        case 0x56114cu: goto label_56114c;
        case 0x561150u: goto label_561150;
        case 0x561154u: goto label_561154;
        case 0x561158u: goto label_561158;
        case 0x56115cu: goto label_56115c;
        case 0x561160u: goto label_561160;
        case 0x561164u: goto label_561164;
        case 0x561168u: goto label_561168;
        case 0x56116cu: goto label_56116c;
        case 0x561170u: goto label_561170;
        case 0x561174u: goto label_561174;
        case 0x561178u: goto label_561178;
        case 0x56117cu: goto label_56117c;
        case 0x561180u: goto label_561180;
        case 0x561184u: goto label_561184;
        case 0x561188u: goto label_561188;
        case 0x56118cu: goto label_56118c;
        case 0x561190u: goto label_561190;
        case 0x561194u: goto label_561194;
        case 0x561198u: goto label_561198;
        case 0x56119cu: goto label_56119c;
        case 0x5611a0u: goto label_5611a0;
        case 0x5611a4u: goto label_5611a4;
        case 0x5611a8u: goto label_5611a8;
        case 0x5611acu: goto label_5611ac;
        case 0x5611b0u: goto label_5611b0;
        case 0x5611b4u: goto label_5611b4;
        case 0x5611b8u: goto label_5611b8;
        case 0x5611bcu: goto label_5611bc;
        case 0x5611c0u: goto label_5611c0;
        case 0x5611c4u: goto label_5611c4;
        case 0x5611c8u: goto label_5611c8;
        case 0x5611ccu: goto label_5611cc;
        case 0x5611d0u: goto label_5611d0;
        case 0x5611d4u: goto label_5611d4;
        case 0x5611d8u: goto label_5611d8;
        case 0x5611dcu: goto label_5611dc;
        case 0x5611e0u: goto label_5611e0;
        case 0x5611e4u: goto label_5611e4;
        case 0x5611e8u: goto label_5611e8;
        case 0x5611ecu: goto label_5611ec;
        case 0x5611f0u: goto label_5611f0;
        case 0x5611f4u: goto label_5611f4;
        case 0x5611f8u: goto label_5611f8;
        case 0x5611fcu: goto label_5611fc;
        case 0x561200u: goto label_561200;
        case 0x561204u: goto label_561204;
        case 0x561208u: goto label_561208;
        case 0x56120cu: goto label_56120c;
        case 0x561210u: goto label_561210;
        case 0x561214u: goto label_561214;
        case 0x561218u: goto label_561218;
        case 0x56121cu: goto label_56121c;
        case 0x561220u: goto label_561220;
        case 0x561224u: goto label_561224;
        case 0x561228u: goto label_561228;
        case 0x56122cu: goto label_56122c;
        case 0x561230u: goto label_561230;
        case 0x561234u: goto label_561234;
        case 0x561238u: goto label_561238;
        case 0x56123cu: goto label_56123c;
        case 0x561240u: goto label_561240;
        case 0x561244u: goto label_561244;
        case 0x561248u: goto label_561248;
        case 0x56124cu: goto label_56124c;
        case 0x561250u: goto label_561250;
        case 0x561254u: goto label_561254;
        case 0x561258u: goto label_561258;
        case 0x56125cu: goto label_56125c;
        case 0x561260u: goto label_561260;
        case 0x561264u: goto label_561264;
        case 0x561268u: goto label_561268;
        case 0x56126cu: goto label_56126c;
        case 0x561270u: goto label_561270;
        case 0x561274u: goto label_561274;
        case 0x561278u: goto label_561278;
        case 0x56127cu: goto label_56127c;
        case 0x561280u: goto label_561280;
        case 0x561284u: goto label_561284;
        case 0x561288u: goto label_561288;
        case 0x56128cu: goto label_56128c;
        case 0x561290u: goto label_561290;
        case 0x561294u: goto label_561294;
        case 0x561298u: goto label_561298;
        case 0x56129cu: goto label_56129c;
        case 0x5612a0u: goto label_5612a0;
        case 0x5612a4u: goto label_5612a4;
        case 0x5612a8u: goto label_5612a8;
        case 0x5612acu: goto label_5612ac;
        case 0x5612b0u: goto label_5612b0;
        case 0x5612b4u: goto label_5612b4;
        case 0x5612b8u: goto label_5612b8;
        case 0x5612bcu: goto label_5612bc;
        case 0x5612c0u: goto label_5612c0;
        case 0x5612c4u: goto label_5612c4;
        case 0x5612c8u: goto label_5612c8;
        case 0x5612ccu: goto label_5612cc;
        case 0x5612d0u: goto label_5612d0;
        case 0x5612d4u: goto label_5612d4;
        case 0x5612d8u: goto label_5612d8;
        case 0x5612dcu: goto label_5612dc;
        case 0x5612e0u: goto label_5612e0;
        case 0x5612e4u: goto label_5612e4;
        case 0x5612e8u: goto label_5612e8;
        case 0x5612ecu: goto label_5612ec;
        case 0x5612f0u: goto label_5612f0;
        case 0x5612f4u: goto label_5612f4;
        case 0x5612f8u: goto label_5612f8;
        case 0x5612fcu: goto label_5612fc;
        case 0x561300u: goto label_561300;
        case 0x561304u: goto label_561304;
        case 0x561308u: goto label_561308;
        case 0x56130cu: goto label_56130c;
        case 0x561310u: goto label_561310;
        case 0x561314u: goto label_561314;
        case 0x561318u: goto label_561318;
        case 0x56131cu: goto label_56131c;
        case 0x561320u: goto label_561320;
        case 0x561324u: goto label_561324;
        case 0x561328u: goto label_561328;
        case 0x56132cu: goto label_56132c;
        case 0x561330u: goto label_561330;
        case 0x561334u: goto label_561334;
        case 0x561338u: goto label_561338;
        case 0x56133cu: goto label_56133c;
        case 0x561340u: goto label_561340;
        case 0x561344u: goto label_561344;
        case 0x561348u: goto label_561348;
        case 0x56134cu: goto label_56134c;
        case 0x561350u: goto label_561350;
        case 0x561354u: goto label_561354;
        case 0x561358u: goto label_561358;
        case 0x56135cu: goto label_56135c;
        case 0x561360u: goto label_561360;
        case 0x561364u: goto label_561364;
        case 0x561368u: goto label_561368;
        case 0x56136cu: goto label_56136c;
        case 0x561370u: goto label_561370;
        case 0x561374u: goto label_561374;
        case 0x561378u: goto label_561378;
        case 0x56137cu: goto label_56137c;
        case 0x561380u: goto label_561380;
        case 0x561384u: goto label_561384;
        case 0x561388u: goto label_561388;
        case 0x56138cu: goto label_56138c;
        case 0x561390u: goto label_561390;
        case 0x561394u: goto label_561394;
        case 0x561398u: goto label_561398;
        case 0x56139cu: goto label_56139c;
        case 0x5613a0u: goto label_5613a0;
        case 0x5613a4u: goto label_5613a4;
        case 0x5613a8u: goto label_5613a8;
        case 0x5613acu: goto label_5613ac;
        case 0x5613b0u: goto label_5613b0;
        case 0x5613b4u: goto label_5613b4;
        case 0x5613b8u: goto label_5613b8;
        case 0x5613bcu: goto label_5613bc;
        case 0x5613c0u: goto label_5613c0;
        case 0x5613c4u: goto label_5613c4;
        case 0x5613c8u: goto label_5613c8;
        case 0x5613ccu: goto label_5613cc;
        case 0x5613d0u: goto label_5613d0;
        case 0x5613d4u: goto label_5613d4;
        case 0x5613d8u: goto label_5613d8;
        case 0x5613dcu: goto label_5613dc;
        case 0x5613e0u: goto label_5613e0;
        case 0x5613e4u: goto label_5613e4;
        case 0x5613e8u: goto label_5613e8;
        case 0x5613ecu: goto label_5613ec;
        case 0x5613f0u: goto label_5613f0;
        case 0x5613f4u: goto label_5613f4;
        case 0x5613f8u: goto label_5613f8;
        case 0x5613fcu: goto label_5613fc;
        case 0x561400u: goto label_561400;
        case 0x561404u: goto label_561404;
        case 0x561408u: goto label_561408;
        case 0x56140cu: goto label_56140c;
        case 0x561410u: goto label_561410;
        case 0x561414u: goto label_561414;
        case 0x561418u: goto label_561418;
        case 0x56141cu: goto label_56141c;
        case 0x561420u: goto label_561420;
        case 0x561424u: goto label_561424;
        case 0x561428u: goto label_561428;
        case 0x56142cu: goto label_56142c;
        case 0x561430u: goto label_561430;
        case 0x561434u: goto label_561434;
        case 0x561438u: goto label_561438;
        case 0x56143cu: goto label_56143c;
        case 0x561440u: goto label_561440;
        case 0x561444u: goto label_561444;
        case 0x561448u: goto label_561448;
        case 0x56144cu: goto label_56144c;
        case 0x561450u: goto label_561450;
        case 0x561454u: goto label_561454;
        case 0x561458u: goto label_561458;
        case 0x56145cu: goto label_56145c;
        case 0x561460u: goto label_561460;
        case 0x561464u: goto label_561464;
        case 0x561468u: goto label_561468;
        case 0x56146cu: goto label_56146c;
        case 0x561470u: goto label_561470;
        case 0x561474u: goto label_561474;
        case 0x561478u: goto label_561478;
        case 0x56147cu: goto label_56147c;
        case 0x561480u: goto label_561480;
        case 0x561484u: goto label_561484;
        case 0x561488u: goto label_561488;
        case 0x56148cu: goto label_56148c;
        case 0x561490u: goto label_561490;
        case 0x561494u: goto label_561494;
        case 0x561498u: goto label_561498;
        case 0x56149cu: goto label_56149c;
        case 0x5614a0u: goto label_5614a0;
        case 0x5614a4u: goto label_5614a4;
        case 0x5614a8u: goto label_5614a8;
        case 0x5614acu: goto label_5614ac;
        case 0x5614b0u: goto label_5614b0;
        case 0x5614b4u: goto label_5614b4;
        case 0x5614b8u: goto label_5614b8;
        case 0x5614bcu: goto label_5614bc;
        case 0x5614c0u: goto label_5614c0;
        case 0x5614c4u: goto label_5614c4;
        case 0x5614c8u: goto label_5614c8;
        case 0x5614ccu: goto label_5614cc;
        case 0x5614d0u: goto label_5614d0;
        case 0x5614d4u: goto label_5614d4;
        case 0x5614d8u: goto label_5614d8;
        case 0x5614dcu: goto label_5614dc;
        case 0x5614e0u: goto label_5614e0;
        case 0x5614e4u: goto label_5614e4;
        case 0x5614e8u: goto label_5614e8;
        case 0x5614ecu: goto label_5614ec;
        case 0x5614f0u: goto label_5614f0;
        case 0x5614f4u: goto label_5614f4;
        case 0x5614f8u: goto label_5614f8;
        case 0x5614fcu: goto label_5614fc;
        case 0x561500u: goto label_561500;
        case 0x561504u: goto label_561504;
        case 0x561508u: goto label_561508;
        case 0x56150cu: goto label_56150c;
        case 0x561510u: goto label_561510;
        case 0x561514u: goto label_561514;
        case 0x561518u: goto label_561518;
        case 0x56151cu: goto label_56151c;
        case 0x561520u: goto label_561520;
        case 0x561524u: goto label_561524;
        case 0x561528u: goto label_561528;
        case 0x56152cu: goto label_56152c;
        case 0x561530u: goto label_561530;
        case 0x561534u: goto label_561534;
        case 0x561538u: goto label_561538;
        case 0x56153cu: goto label_56153c;
        case 0x561540u: goto label_561540;
        case 0x561544u: goto label_561544;
        case 0x561548u: goto label_561548;
        case 0x56154cu: goto label_56154c;
        case 0x561550u: goto label_561550;
        case 0x561554u: goto label_561554;
        case 0x561558u: goto label_561558;
        case 0x56155cu: goto label_56155c;
        case 0x561560u: goto label_561560;
        case 0x561564u: goto label_561564;
        case 0x561568u: goto label_561568;
        case 0x56156cu: goto label_56156c;
        case 0x561570u: goto label_561570;
        case 0x561574u: goto label_561574;
        case 0x561578u: goto label_561578;
        case 0x56157cu: goto label_56157c;
        case 0x561580u: goto label_561580;
        case 0x561584u: goto label_561584;
        case 0x561588u: goto label_561588;
        case 0x56158cu: goto label_56158c;
        case 0x561590u: goto label_561590;
        case 0x561594u: goto label_561594;
        case 0x561598u: goto label_561598;
        case 0x56159cu: goto label_56159c;
        case 0x5615a0u: goto label_5615a0;
        case 0x5615a4u: goto label_5615a4;
        case 0x5615a8u: goto label_5615a8;
        case 0x5615acu: goto label_5615ac;
        case 0x5615b0u: goto label_5615b0;
        case 0x5615b4u: goto label_5615b4;
        case 0x5615b8u: goto label_5615b8;
        case 0x5615bcu: goto label_5615bc;
        case 0x5615c0u: goto label_5615c0;
        case 0x5615c4u: goto label_5615c4;
        case 0x5615c8u: goto label_5615c8;
        case 0x5615ccu: goto label_5615cc;
        case 0x5615d0u: goto label_5615d0;
        case 0x5615d4u: goto label_5615d4;
        case 0x5615d8u: goto label_5615d8;
        case 0x5615dcu: goto label_5615dc;
        case 0x5615e0u: goto label_5615e0;
        case 0x5615e4u: goto label_5615e4;
        case 0x5615e8u: goto label_5615e8;
        case 0x5615ecu: goto label_5615ec;
        case 0x5615f0u: goto label_5615f0;
        case 0x5615f4u: goto label_5615f4;
        case 0x5615f8u: goto label_5615f8;
        case 0x5615fcu: goto label_5615fc;
        case 0x561600u: goto label_561600;
        case 0x561604u: goto label_561604;
        case 0x561608u: goto label_561608;
        case 0x56160cu: goto label_56160c;
        case 0x561610u: goto label_561610;
        case 0x561614u: goto label_561614;
        case 0x561618u: goto label_561618;
        case 0x56161cu: goto label_56161c;
        case 0x561620u: goto label_561620;
        case 0x561624u: goto label_561624;
        case 0x561628u: goto label_561628;
        case 0x56162cu: goto label_56162c;
        case 0x561630u: goto label_561630;
        case 0x561634u: goto label_561634;
        case 0x561638u: goto label_561638;
        case 0x56163cu: goto label_56163c;
        case 0x561640u: goto label_561640;
        case 0x561644u: goto label_561644;
        case 0x561648u: goto label_561648;
        case 0x56164cu: goto label_56164c;
        case 0x561650u: goto label_561650;
        case 0x561654u: goto label_561654;
        case 0x561658u: goto label_561658;
        case 0x56165cu: goto label_56165c;
        case 0x561660u: goto label_561660;
        case 0x561664u: goto label_561664;
        case 0x561668u: goto label_561668;
        case 0x56166cu: goto label_56166c;
        case 0x561670u: goto label_561670;
        case 0x561674u: goto label_561674;
        case 0x561678u: goto label_561678;
        case 0x56167cu: goto label_56167c;
        case 0x561680u: goto label_561680;
        case 0x561684u: goto label_561684;
        case 0x561688u: goto label_561688;
        case 0x56168cu: goto label_56168c;
        case 0x561690u: goto label_561690;
        case 0x561694u: goto label_561694;
        case 0x561698u: goto label_561698;
        case 0x56169cu: goto label_56169c;
        case 0x5616a0u: goto label_5616a0;
        case 0x5616a4u: goto label_5616a4;
        case 0x5616a8u: goto label_5616a8;
        case 0x5616acu: goto label_5616ac;
        case 0x5616b0u: goto label_5616b0;
        case 0x5616b4u: goto label_5616b4;
        case 0x5616b8u: goto label_5616b8;
        case 0x5616bcu: goto label_5616bc;
        case 0x5616c0u: goto label_5616c0;
        case 0x5616c4u: goto label_5616c4;
        case 0x5616c8u: goto label_5616c8;
        case 0x5616ccu: goto label_5616cc;
        case 0x5616d0u: goto label_5616d0;
        case 0x5616d4u: goto label_5616d4;
        case 0x5616d8u: goto label_5616d8;
        case 0x5616dcu: goto label_5616dc;
        case 0x5616e0u: goto label_5616e0;
        case 0x5616e4u: goto label_5616e4;
        case 0x5616e8u: goto label_5616e8;
        case 0x5616ecu: goto label_5616ec;
        case 0x5616f0u: goto label_5616f0;
        case 0x5616f4u: goto label_5616f4;
        case 0x5616f8u: goto label_5616f8;
        case 0x5616fcu: goto label_5616fc;
        case 0x561700u: goto label_561700;
        case 0x561704u: goto label_561704;
        case 0x561708u: goto label_561708;
        case 0x56170cu: goto label_56170c;
        case 0x561710u: goto label_561710;
        case 0x561714u: goto label_561714;
        case 0x561718u: goto label_561718;
        case 0x56171cu: goto label_56171c;
        case 0x561720u: goto label_561720;
        case 0x561724u: goto label_561724;
        case 0x561728u: goto label_561728;
        case 0x56172cu: goto label_56172c;
        case 0x561730u: goto label_561730;
        case 0x561734u: goto label_561734;
        case 0x561738u: goto label_561738;
        case 0x56173cu: goto label_56173c;
        case 0x561740u: goto label_561740;
        case 0x561744u: goto label_561744;
        case 0x561748u: goto label_561748;
        case 0x56174cu: goto label_56174c;
        case 0x561750u: goto label_561750;
        case 0x561754u: goto label_561754;
        case 0x561758u: goto label_561758;
        case 0x56175cu: goto label_56175c;
        case 0x561760u: goto label_561760;
        case 0x561764u: goto label_561764;
        case 0x561768u: goto label_561768;
        case 0x56176cu: goto label_56176c;
        case 0x561770u: goto label_561770;
        case 0x561774u: goto label_561774;
        case 0x561778u: goto label_561778;
        case 0x56177cu: goto label_56177c;
        case 0x561780u: goto label_561780;
        case 0x561784u: goto label_561784;
        case 0x561788u: goto label_561788;
        case 0x56178cu: goto label_56178c;
        case 0x561790u: goto label_561790;
        case 0x561794u: goto label_561794;
        case 0x561798u: goto label_561798;
        case 0x56179cu: goto label_56179c;
        case 0x5617a0u: goto label_5617a0;
        case 0x5617a4u: goto label_5617a4;
        case 0x5617a8u: goto label_5617a8;
        case 0x5617acu: goto label_5617ac;
        case 0x5617b0u: goto label_5617b0;
        case 0x5617b4u: goto label_5617b4;
        case 0x5617b8u: goto label_5617b8;
        case 0x5617bcu: goto label_5617bc;
        case 0x5617c0u: goto label_5617c0;
        case 0x5617c4u: goto label_5617c4;
        case 0x5617c8u: goto label_5617c8;
        case 0x5617ccu: goto label_5617cc;
        case 0x5617d0u: goto label_5617d0;
        case 0x5617d4u: goto label_5617d4;
        case 0x5617d8u: goto label_5617d8;
        case 0x5617dcu: goto label_5617dc;
        case 0x5617e0u: goto label_5617e0;
        case 0x5617e4u: goto label_5617e4;
        case 0x5617e8u: goto label_5617e8;
        case 0x5617ecu: goto label_5617ec;
        case 0x5617f0u: goto label_5617f0;
        case 0x5617f4u: goto label_5617f4;
        case 0x5617f8u: goto label_5617f8;
        case 0x5617fcu: goto label_5617fc;
        case 0x561800u: goto label_561800;
        case 0x561804u: goto label_561804;
        case 0x561808u: goto label_561808;
        case 0x56180cu: goto label_56180c;
        case 0x561810u: goto label_561810;
        case 0x561814u: goto label_561814;
        case 0x561818u: goto label_561818;
        case 0x56181cu: goto label_56181c;
        case 0x561820u: goto label_561820;
        case 0x561824u: goto label_561824;
        case 0x561828u: goto label_561828;
        case 0x56182cu: goto label_56182c;
        case 0x561830u: goto label_561830;
        case 0x561834u: goto label_561834;
        case 0x561838u: goto label_561838;
        case 0x56183cu: goto label_56183c;
        case 0x561840u: goto label_561840;
        case 0x561844u: goto label_561844;
        case 0x561848u: goto label_561848;
        case 0x56184cu: goto label_56184c;
        case 0x561850u: goto label_561850;
        case 0x561854u: goto label_561854;
        case 0x561858u: goto label_561858;
        case 0x56185cu: goto label_56185c;
        case 0x561860u: goto label_561860;
        case 0x561864u: goto label_561864;
        case 0x561868u: goto label_561868;
        case 0x56186cu: goto label_56186c;
        case 0x561870u: goto label_561870;
        case 0x561874u: goto label_561874;
        case 0x561878u: goto label_561878;
        case 0x56187cu: goto label_56187c;
        case 0x561880u: goto label_561880;
        case 0x561884u: goto label_561884;
        case 0x561888u: goto label_561888;
        case 0x56188cu: goto label_56188c;
        case 0x561890u: goto label_561890;
        case 0x561894u: goto label_561894;
        case 0x561898u: goto label_561898;
        case 0x56189cu: goto label_56189c;
        case 0x5618a0u: goto label_5618a0;
        case 0x5618a4u: goto label_5618a4;
        case 0x5618a8u: goto label_5618a8;
        case 0x5618acu: goto label_5618ac;
        case 0x5618b0u: goto label_5618b0;
        case 0x5618b4u: goto label_5618b4;
        case 0x5618b8u: goto label_5618b8;
        case 0x5618bcu: goto label_5618bc;
        case 0x5618c0u: goto label_5618c0;
        case 0x5618c4u: goto label_5618c4;
        case 0x5618c8u: goto label_5618c8;
        case 0x5618ccu: goto label_5618cc;
        case 0x5618d0u: goto label_5618d0;
        case 0x5618d4u: goto label_5618d4;
        case 0x5618d8u: goto label_5618d8;
        case 0x5618dcu: goto label_5618dc;
        case 0x5618e0u: goto label_5618e0;
        case 0x5618e4u: goto label_5618e4;
        case 0x5618e8u: goto label_5618e8;
        case 0x5618ecu: goto label_5618ec;
        case 0x5618f0u: goto label_5618f0;
        case 0x5618f4u: goto label_5618f4;
        case 0x5618f8u: goto label_5618f8;
        case 0x5618fcu: goto label_5618fc;
        case 0x561900u: goto label_561900;
        case 0x561904u: goto label_561904;
        case 0x561908u: goto label_561908;
        case 0x56190cu: goto label_56190c;
        case 0x561910u: goto label_561910;
        case 0x561914u: goto label_561914;
        case 0x561918u: goto label_561918;
        case 0x56191cu: goto label_56191c;
        case 0x561920u: goto label_561920;
        case 0x561924u: goto label_561924;
        case 0x561928u: goto label_561928;
        case 0x56192cu: goto label_56192c;
        case 0x561930u: goto label_561930;
        case 0x561934u: goto label_561934;
        case 0x561938u: goto label_561938;
        case 0x56193cu: goto label_56193c;
        case 0x561940u: goto label_561940;
        case 0x561944u: goto label_561944;
        case 0x561948u: goto label_561948;
        case 0x56194cu: goto label_56194c;
        case 0x561950u: goto label_561950;
        case 0x561954u: goto label_561954;
        case 0x561958u: goto label_561958;
        case 0x56195cu: goto label_56195c;
        case 0x561960u: goto label_561960;
        case 0x561964u: goto label_561964;
        case 0x561968u: goto label_561968;
        case 0x56196cu: goto label_56196c;
        case 0x561970u: goto label_561970;
        case 0x561974u: goto label_561974;
        case 0x561978u: goto label_561978;
        case 0x56197cu: goto label_56197c;
        case 0x561980u: goto label_561980;
        case 0x561984u: goto label_561984;
        case 0x561988u: goto label_561988;
        case 0x56198cu: goto label_56198c;
        case 0x561990u: goto label_561990;
        case 0x561994u: goto label_561994;
        case 0x561998u: goto label_561998;
        case 0x56199cu: goto label_56199c;
        case 0x5619a0u: goto label_5619a0;
        case 0x5619a4u: goto label_5619a4;
        case 0x5619a8u: goto label_5619a8;
        case 0x5619acu: goto label_5619ac;
        case 0x5619b0u: goto label_5619b0;
        case 0x5619b4u: goto label_5619b4;
        case 0x5619b8u: goto label_5619b8;
        case 0x5619bcu: goto label_5619bc;
        case 0x5619c0u: goto label_5619c0;
        case 0x5619c4u: goto label_5619c4;
        case 0x5619c8u: goto label_5619c8;
        case 0x5619ccu: goto label_5619cc;
        case 0x5619d0u: goto label_5619d0;
        case 0x5619d4u: goto label_5619d4;
        case 0x5619d8u: goto label_5619d8;
        case 0x5619dcu: goto label_5619dc;
        case 0x5619e0u: goto label_5619e0;
        case 0x5619e4u: goto label_5619e4;
        case 0x5619e8u: goto label_5619e8;
        case 0x5619ecu: goto label_5619ec;
        case 0x5619f0u: goto label_5619f0;
        case 0x5619f4u: goto label_5619f4;
        case 0x5619f8u: goto label_5619f8;
        case 0x5619fcu: goto label_5619fc;
        case 0x561a00u: goto label_561a00;
        case 0x561a04u: goto label_561a04;
        case 0x561a08u: goto label_561a08;
        case 0x561a0cu: goto label_561a0c;
        case 0x561a10u: goto label_561a10;
        case 0x561a14u: goto label_561a14;
        case 0x561a18u: goto label_561a18;
        case 0x561a1cu: goto label_561a1c;
        case 0x561a20u: goto label_561a20;
        case 0x561a24u: goto label_561a24;
        case 0x561a28u: goto label_561a28;
        case 0x561a2cu: goto label_561a2c;
        case 0x561a30u: goto label_561a30;
        case 0x561a34u: goto label_561a34;
        case 0x561a38u: goto label_561a38;
        case 0x561a3cu: goto label_561a3c;
        case 0x561a40u: goto label_561a40;
        case 0x561a44u: goto label_561a44;
        case 0x561a48u: goto label_561a48;
        case 0x561a4cu: goto label_561a4c;
        case 0x561a50u: goto label_561a50;
        case 0x561a54u: goto label_561a54;
        case 0x561a58u: goto label_561a58;
        case 0x561a5cu: goto label_561a5c;
        case 0x561a60u: goto label_561a60;
        case 0x561a64u: goto label_561a64;
        case 0x561a68u: goto label_561a68;
        case 0x561a6cu: goto label_561a6c;
        case 0x561a70u: goto label_561a70;
        case 0x561a74u: goto label_561a74;
        case 0x561a78u: goto label_561a78;
        case 0x561a7cu: goto label_561a7c;
        case 0x561a80u: goto label_561a80;
        case 0x561a84u: goto label_561a84;
        case 0x561a88u: goto label_561a88;
        case 0x561a8cu: goto label_561a8c;
        case 0x561a90u: goto label_561a90;
        case 0x561a94u: goto label_561a94;
        case 0x561a98u: goto label_561a98;
        case 0x561a9cu: goto label_561a9c;
        case 0x561aa0u: goto label_561aa0;
        case 0x561aa4u: goto label_561aa4;
        case 0x561aa8u: goto label_561aa8;
        case 0x561aacu: goto label_561aac;
        case 0x561ab0u: goto label_561ab0;
        case 0x561ab4u: goto label_561ab4;
        case 0x561ab8u: goto label_561ab8;
        case 0x561abcu: goto label_561abc;
        case 0x561ac0u: goto label_561ac0;
        case 0x561ac4u: goto label_561ac4;
        case 0x561ac8u: goto label_561ac8;
        case 0x561accu: goto label_561acc;
        case 0x561ad0u: goto label_561ad0;
        case 0x561ad4u: goto label_561ad4;
        case 0x561ad8u: goto label_561ad8;
        case 0x561adcu: goto label_561adc;
        case 0x561ae0u: goto label_561ae0;
        case 0x561ae4u: goto label_561ae4;
        case 0x561ae8u: goto label_561ae8;
        case 0x561aecu: goto label_561aec;
        case 0x561af0u: goto label_561af0;
        case 0x561af4u: goto label_561af4;
        case 0x561af8u: goto label_561af8;
        case 0x561afcu: goto label_561afc;
        case 0x561b00u: goto label_561b00;
        case 0x561b04u: goto label_561b04;
        case 0x561b08u: goto label_561b08;
        case 0x561b0cu: goto label_561b0c;
        case 0x561b10u: goto label_561b10;
        case 0x561b14u: goto label_561b14;
        case 0x561b18u: goto label_561b18;
        case 0x561b1cu: goto label_561b1c;
        case 0x561b20u: goto label_561b20;
        case 0x561b24u: goto label_561b24;
        case 0x561b28u: goto label_561b28;
        case 0x561b2cu: goto label_561b2c;
        case 0x561b30u: goto label_561b30;
        case 0x561b34u: goto label_561b34;
        case 0x561b38u: goto label_561b38;
        case 0x561b3cu: goto label_561b3c;
        case 0x561b40u: goto label_561b40;
        case 0x561b44u: goto label_561b44;
        case 0x561b48u: goto label_561b48;
        case 0x561b4cu: goto label_561b4c;
        case 0x561b50u: goto label_561b50;
        case 0x561b54u: goto label_561b54;
        case 0x561b58u: goto label_561b58;
        case 0x561b5cu: goto label_561b5c;
        case 0x561b60u: goto label_561b60;
        case 0x561b64u: goto label_561b64;
        case 0x561b68u: goto label_561b68;
        case 0x561b6cu: goto label_561b6c;
        case 0x561b70u: goto label_561b70;
        case 0x561b74u: goto label_561b74;
        case 0x561b78u: goto label_561b78;
        case 0x561b7cu: goto label_561b7c;
        case 0x561b80u: goto label_561b80;
        case 0x561b84u: goto label_561b84;
        case 0x561b88u: goto label_561b88;
        case 0x561b8cu: goto label_561b8c;
        case 0x561b90u: goto label_561b90;
        case 0x561b94u: goto label_561b94;
        case 0x561b98u: goto label_561b98;
        case 0x561b9cu: goto label_561b9c;
        case 0x561ba0u: goto label_561ba0;
        case 0x561ba4u: goto label_561ba4;
        case 0x561ba8u: goto label_561ba8;
        case 0x561bacu: goto label_561bac;
        case 0x561bb0u: goto label_561bb0;
        case 0x561bb4u: goto label_561bb4;
        case 0x561bb8u: goto label_561bb8;
        case 0x561bbcu: goto label_561bbc;
        case 0x561bc0u: goto label_561bc0;
        case 0x561bc4u: goto label_561bc4;
        case 0x561bc8u: goto label_561bc8;
        case 0x561bccu: goto label_561bcc;
        case 0x561bd0u: goto label_561bd0;
        case 0x561bd4u: goto label_561bd4;
        case 0x561bd8u: goto label_561bd8;
        case 0x561bdcu: goto label_561bdc;
        case 0x561be0u: goto label_561be0;
        case 0x561be4u: goto label_561be4;
        case 0x561be8u: goto label_561be8;
        case 0x561becu: goto label_561bec;
        case 0x561bf0u: goto label_561bf0;
        case 0x561bf4u: goto label_561bf4;
        case 0x561bf8u: goto label_561bf8;
        case 0x561bfcu: goto label_561bfc;
        case 0x561c00u: goto label_561c00;
        case 0x561c04u: goto label_561c04;
        case 0x561c08u: goto label_561c08;
        case 0x561c0cu: goto label_561c0c;
        case 0x561c10u: goto label_561c10;
        case 0x561c14u: goto label_561c14;
        case 0x561c18u: goto label_561c18;
        case 0x561c1cu: goto label_561c1c;
        case 0x561c20u: goto label_561c20;
        case 0x561c24u: goto label_561c24;
        case 0x561c28u: goto label_561c28;
        case 0x561c2cu: goto label_561c2c;
        case 0x561c30u: goto label_561c30;
        case 0x561c34u: goto label_561c34;
        case 0x561c38u: goto label_561c38;
        case 0x561c3cu: goto label_561c3c;
        case 0x561c40u: goto label_561c40;
        case 0x561c44u: goto label_561c44;
        case 0x561c48u: goto label_561c48;
        case 0x561c4cu: goto label_561c4c;
        case 0x561c50u: goto label_561c50;
        case 0x561c54u: goto label_561c54;
        case 0x561c58u: goto label_561c58;
        case 0x561c5cu: goto label_561c5c;
        case 0x561c60u: goto label_561c60;
        case 0x561c64u: goto label_561c64;
        case 0x561c68u: goto label_561c68;
        case 0x561c6cu: goto label_561c6c;
        case 0x561c70u: goto label_561c70;
        case 0x561c74u: goto label_561c74;
        case 0x561c78u: goto label_561c78;
        case 0x561c7cu: goto label_561c7c;
        case 0x561c80u: goto label_561c80;
        case 0x561c84u: goto label_561c84;
        case 0x561c88u: goto label_561c88;
        case 0x561c8cu: goto label_561c8c;
        case 0x561c90u: goto label_561c90;
        case 0x561c94u: goto label_561c94;
        case 0x561c98u: goto label_561c98;
        case 0x561c9cu: goto label_561c9c;
        case 0x561ca0u: goto label_561ca0;
        case 0x561ca4u: goto label_561ca4;
        case 0x561ca8u: goto label_561ca8;
        case 0x561cacu: goto label_561cac;
        case 0x561cb0u: goto label_561cb0;
        case 0x561cb4u: goto label_561cb4;
        case 0x561cb8u: goto label_561cb8;
        case 0x561cbcu: goto label_561cbc;
        case 0x561cc0u: goto label_561cc0;
        case 0x561cc4u: goto label_561cc4;
        case 0x561cc8u: goto label_561cc8;
        case 0x561cccu: goto label_561ccc;
        case 0x561cd0u: goto label_561cd0;
        case 0x561cd4u: goto label_561cd4;
        case 0x561cd8u: goto label_561cd8;
        case 0x561cdcu: goto label_561cdc;
        case 0x561ce0u: goto label_561ce0;
        case 0x561ce4u: goto label_561ce4;
        case 0x561ce8u: goto label_561ce8;
        case 0x561cecu: goto label_561cec;
        case 0x561cf0u: goto label_561cf0;
        case 0x561cf4u: goto label_561cf4;
        case 0x561cf8u: goto label_561cf8;
        case 0x561cfcu: goto label_561cfc;
        case 0x561d00u: goto label_561d00;
        case 0x561d04u: goto label_561d04;
        case 0x561d08u: goto label_561d08;
        case 0x561d0cu: goto label_561d0c;
        case 0x561d10u: goto label_561d10;
        case 0x561d14u: goto label_561d14;
        case 0x561d18u: goto label_561d18;
        case 0x561d1cu: goto label_561d1c;
        case 0x561d20u: goto label_561d20;
        case 0x561d24u: goto label_561d24;
        case 0x561d28u: goto label_561d28;
        case 0x561d2cu: goto label_561d2c;
        case 0x561d30u: goto label_561d30;
        case 0x561d34u: goto label_561d34;
        case 0x561d38u: goto label_561d38;
        case 0x561d3cu: goto label_561d3c;
        case 0x561d40u: goto label_561d40;
        case 0x561d44u: goto label_561d44;
        case 0x561d48u: goto label_561d48;
        case 0x561d4cu: goto label_561d4c;
        case 0x561d50u: goto label_561d50;
        case 0x561d54u: goto label_561d54;
        case 0x561d58u: goto label_561d58;
        case 0x561d5cu: goto label_561d5c;
        case 0x561d60u: goto label_561d60;
        case 0x561d64u: goto label_561d64;
        case 0x561d68u: goto label_561d68;
        case 0x561d6cu: goto label_561d6c;
        case 0x561d70u: goto label_561d70;
        case 0x561d74u: goto label_561d74;
        case 0x561d78u: goto label_561d78;
        case 0x561d7cu: goto label_561d7c;
        case 0x561d80u: goto label_561d80;
        case 0x561d84u: goto label_561d84;
        case 0x561d88u: goto label_561d88;
        case 0x561d8cu: goto label_561d8c;
        case 0x561d90u: goto label_561d90;
        case 0x561d94u: goto label_561d94;
        case 0x561d98u: goto label_561d98;
        case 0x561d9cu: goto label_561d9c;
        case 0x561da0u: goto label_561da0;
        case 0x561da4u: goto label_561da4;
        case 0x561da8u: goto label_561da8;
        case 0x561dacu: goto label_561dac;
        case 0x561db0u: goto label_561db0;
        case 0x561db4u: goto label_561db4;
        case 0x561db8u: goto label_561db8;
        case 0x561dbcu: goto label_561dbc;
        case 0x561dc0u: goto label_561dc0;
        case 0x561dc4u: goto label_561dc4;
        case 0x561dc8u: goto label_561dc8;
        case 0x561dccu: goto label_561dcc;
        case 0x561dd0u: goto label_561dd0;
        case 0x561dd4u: goto label_561dd4;
        case 0x561dd8u: goto label_561dd8;
        case 0x561ddcu: goto label_561ddc;
        case 0x561de0u: goto label_561de0;
        case 0x561de4u: goto label_561de4;
        case 0x561de8u: goto label_561de8;
        case 0x561decu: goto label_561dec;
        case 0x561df0u: goto label_561df0;
        case 0x561df4u: goto label_561df4;
        case 0x561df8u: goto label_561df8;
        case 0x561dfcu: goto label_561dfc;
        case 0x561e00u: goto label_561e00;
        case 0x561e04u: goto label_561e04;
        case 0x561e08u: goto label_561e08;
        case 0x561e0cu: goto label_561e0c;
        case 0x561e10u: goto label_561e10;
        case 0x561e14u: goto label_561e14;
        case 0x561e18u: goto label_561e18;
        case 0x561e1cu: goto label_561e1c;
        case 0x561e20u: goto label_561e20;
        case 0x561e24u: goto label_561e24;
        case 0x561e28u: goto label_561e28;
        case 0x561e2cu: goto label_561e2c;
        case 0x561e30u: goto label_561e30;
        case 0x561e34u: goto label_561e34;
        case 0x561e38u: goto label_561e38;
        case 0x561e3cu: goto label_561e3c;
        case 0x561e40u: goto label_561e40;
        case 0x561e44u: goto label_561e44;
        case 0x561e48u: goto label_561e48;
        case 0x561e4cu: goto label_561e4c;
        case 0x561e50u: goto label_561e50;
        case 0x561e54u: goto label_561e54;
        case 0x561e58u: goto label_561e58;
        case 0x561e5cu: goto label_561e5c;
        case 0x561e60u: goto label_561e60;
        case 0x561e64u: goto label_561e64;
        case 0x561e68u: goto label_561e68;
        case 0x561e6cu: goto label_561e6c;
        case 0x561e70u: goto label_561e70;
        case 0x561e74u: goto label_561e74;
        case 0x561e78u: goto label_561e78;
        case 0x561e7cu: goto label_561e7c;
        case 0x561e80u: goto label_561e80;
        case 0x561e84u: goto label_561e84;
        case 0x561e88u: goto label_561e88;
        case 0x561e8cu: goto label_561e8c;
        case 0x561e90u: goto label_561e90;
        case 0x561e94u: goto label_561e94;
        case 0x561e98u: goto label_561e98;
        case 0x561e9cu: goto label_561e9c;
        case 0x561ea0u: goto label_561ea0;
        case 0x561ea4u: goto label_561ea4;
        case 0x561ea8u: goto label_561ea8;
        case 0x561eacu: goto label_561eac;
        case 0x561eb0u: goto label_561eb0;
        case 0x561eb4u: goto label_561eb4;
        case 0x561eb8u: goto label_561eb8;
        case 0x561ebcu: goto label_561ebc;
        case 0x561ec0u: goto label_561ec0;
        case 0x561ec4u: goto label_561ec4;
        case 0x561ec8u: goto label_561ec8;
        case 0x561eccu: goto label_561ecc;
        case 0x561ed0u: goto label_561ed0;
        case 0x561ed4u: goto label_561ed4;
        case 0x561ed8u: goto label_561ed8;
        case 0x561edcu: goto label_561edc;
        case 0x561ee0u: goto label_561ee0;
        case 0x561ee4u: goto label_561ee4;
        case 0x561ee8u: goto label_561ee8;
        case 0x561eecu: goto label_561eec;
        case 0x561ef0u: goto label_561ef0;
        case 0x561ef4u: goto label_561ef4;
        case 0x561ef8u: goto label_561ef8;
        case 0x561efcu: goto label_561efc;
        case 0x561f00u: goto label_561f00;
        case 0x561f04u: goto label_561f04;
        case 0x561f08u: goto label_561f08;
        case 0x561f0cu: goto label_561f0c;
        case 0x561f10u: goto label_561f10;
        case 0x561f14u: goto label_561f14;
        case 0x561f18u: goto label_561f18;
        case 0x561f1cu: goto label_561f1c;
        case 0x561f20u: goto label_561f20;
        case 0x561f24u: goto label_561f24;
        case 0x561f28u: goto label_561f28;
        case 0x561f2cu: goto label_561f2c;
        case 0x561f30u: goto label_561f30;
        case 0x561f34u: goto label_561f34;
        case 0x561f38u: goto label_561f38;
        case 0x561f3cu: goto label_561f3c;
        case 0x561f40u: goto label_561f40;
        case 0x561f44u: goto label_561f44;
        case 0x561f48u: goto label_561f48;
        case 0x561f4cu: goto label_561f4c;
        case 0x561f50u: goto label_561f50;
        case 0x561f54u: goto label_561f54;
        case 0x561f58u: goto label_561f58;
        case 0x561f5cu: goto label_561f5c;
        case 0x561f60u: goto label_561f60;
        case 0x561f64u: goto label_561f64;
        case 0x561f68u: goto label_561f68;
        case 0x561f6cu: goto label_561f6c;
        case 0x561f70u: goto label_561f70;
        case 0x561f74u: goto label_561f74;
        case 0x561f78u: goto label_561f78;
        case 0x561f7cu: goto label_561f7c;
        case 0x561f80u: goto label_561f80;
        case 0x561f84u: goto label_561f84;
        case 0x561f88u: goto label_561f88;
        case 0x561f8cu: goto label_561f8c;
        case 0x561f90u: goto label_561f90;
        case 0x561f94u: goto label_561f94;
        case 0x561f98u: goto label_561f98;
        case 0x561f9cu: goto label_561f9c;
        case 0x561fa0u: goto label_561fa0;
        case 0x561fa4u: goto label_561fa4;
        case 0x561fa8u: goto label_561fa8;
        case 0x561facu: goto label_561fac;
        case 0x561fb0u: goto label_561fb0;
        case 0x561fb4u: goto label_561fb4;
        case 0x561fb8u: goto label_561fb8;
        case 0x561fbcu: goto label_561fbc;
        case 0x561fc0u: goto label_561fc0;
        case 0x561fc4u: goto label_561fc4;
        case 0x561fc8u: goto label_561fc8;
        case 0x561fccu: goto label_561fcc;
        case 0x561fd0u: goto label_561fd0;
        case 0x561fd4u: goto label_561fd4;
        case 0x561fd8u: goto label_561fd8;
        case 0x561fdcu: goto label_561fdc;
        case 0x561fe0u: goto label_561fe0;
        case 0x561fe4u: goto label_561fe4;
        case 0x561fe8u: goto label_561fe8;
        case 0x561fecu: goto label_561fec;
        case 0x561ff0u: goto label_561ff0;
        case 0x561ff4u: goto label_561ff4;
        case 0x561ff8u: goto label_561ff8;
        case 0x561ffcu: goto label_561ffc;
        case 0x562000u: goto label_562000;
        case 0x562004u: goto label_562004;
        case 0x562008u: goto label_562008;
        case 0x56200cu: goto label_56200c;
        default: break;
    }

    ctx->pc = 0x561110u;

label_561110:
    // 0x561110: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x561110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_561114:
    // 0x561114: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x561114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_561118:
    // 0x561118: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x561118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_56111c:
    // 0x56111c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x56111cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_561120:
    // 0x561120: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x561120u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_561124:
    // 0x561124: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x561124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_561128:
    // 0x561128: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x561128u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_56112c:
    // 0x56112c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x56112cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_561130:
    // 0x561130: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x561130u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_561134:
    // 0x561134: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x561134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_561138:
    // 0x561138: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x561138u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_56113c:
    // 0x56113c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x56113cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_561140:
    // 0x561140: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x561140u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_561144:
    // 0x561144: 0xc0aeebc  jal         func_2BBAF0
label_561148:
    if (ctx->pc == 0x561148u) {
        ctx->pc = 0x561148u;
            // 0x561148: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x56114Cu;
        goto label_56114c;
    }
    ctx->pc = 0x561144u;
    SET_GPR_U32(ctx, 31, 0x56114Cu);
    ctx->pc = 0x561148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x561144u;
            // 0x561148: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56114Cu; }
        if (ctx->pc != 0x56114Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56114Cu; }
        if (ctx->pc != 0x56114Cu) { return; }
    }
    ctx->pc = 0x56114Cu;
label_56114c:
    // 0x56114c: 0xc0aeeb4  jal         func_2BBAD0
label_561150:
    if (ctx->pc == 0x561150u) {
        ctx->pc = 0x561150u;
            // 0x561150: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->pc = 0x561154u;
        goto label_561154;
    }
    ctx->pc = 0x56114Cu;
    SET_GPR_U32(ctx, 31, 0x561154u);
    ctx->pc = 0x561150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56114Cu;
            // 0x561150: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561154u; }
        if (ctx->pc != 0x561154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561154u; }
        if (ctx->pc != 0x561154u) { return; }
    }
    ctx->pc = 0x561154u;
label_561154:
    // 0x561154: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x561154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_561158:
    // 0x561158: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x561158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_56115c:
    // 0x56115c: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x56115cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_561160:
    // 0x561160: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x561160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_561164:
    // 0x561164: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x561164u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_561168:
    // 0x561168: 0x26240058  addiu       $a0, $s1, 0x58
    ctx->pc = 0x561168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_56116c:
    // 0x56116c: 0xc0aeea4  jal         func_2BBA90
label_561170:
    if (ctx->pc == 0x561170u) {
        ctx->pc = 0x561170u;
            // 0x561170: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x561174u;
        goto label_561174;
    }
    ctx->pc = 0x56116Cu;
    SET_GPR_U32(ctx, 31, 0x561174u);
    ctx->pc = 0x561170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56116Cu;
            // 0x561170: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561174u; }
        if (ctx->pc != 0x561174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561174u; }
        if (ctx->pc != 0x561174u) { return; }
    }
    ctx->pc = 0x561174u;
label_561174:
    // 0x561174: 0xc0aee8c  jal         func_2BBA30
label_561178:
    if (ctx->pc == 0x561178u) {
        ctx->pc = 0x561178u;
            // 0x561178: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x56117Cu;
        goto label_56117c;
    }
    ctx->pc = 0x561174u;
    SET_GPR_U32(ctx, 31, 0x56117Cu);
    ctx->pc = 0x561178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x561174u;
            // 0x561178: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56117Cu; }
        if (ctx->pc != 0x56117Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56117Cu; }
        if (ctx->pc != 0x56117Cu) { return; }
    }
    ctx->pc = 0x56117Cu;
label_56117c:
    // 0x56117c: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x56117cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_561180:
    // 0x561180: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x561180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_561184:
    // 0x561184: 0xae2000a0  sw          $zero, 0xA0($s1)
    ctx->pc = 0x561184u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
label_561188:
    // 0x561188: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x561188u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
label_56118c:
    // 0x56118c: 0xae2000a4  sw          $zero, 0xA4($s1)
    ctx->pc = 0x56118cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 0));
label_561190:
    // 0x561190: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x561190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_561194:
    // 0x561194: 0xae2000a8  sw          $zero, 0xA8($s1)
    ctx->pc = 0x561194u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 0));
label_561198:
    // 0x561198: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x561198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_56119c:
    // 0x56119c: 0xae2000ac  sw          $zero, 0xAC($s1)
    ctx->pc = 0x56119cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 0));
label_5611a0:
    // 0x5611a0: 0xae2500b0  sw          $a1, 0xB0($s1)
    ctx->pc = 0x5611a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 5));
label_5611a4:
    // 0x5611a4: 0xae2000b4  sw          $zero, 0xB4($s1)
    ctx->pc = 0x5611a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
label_5611a8:
    // 0x5611a8: 0xae2000b8  sw          $zero, 0xB8($s1)
    ctx->pc = 0x5611a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 0));
label_5611ac:
    // 0x5611ac: 0xae2000c0  sw          $zero, 0xC0($s1)
    ctx->pc = 0x5611acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 0));
label_5611b0:
    // 0x5611b0: 0xae2400c4  sw          $a0, 0xC4($s1)
    ctx->pc = 0x5611b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 4));
label_5611b4:
    // 0x5611b4: 0xae2300c8  sw          $v1, 0xC8($s1)
    ctx->pc = 0x5611b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 3));
label_5611b8:
    // 0x5611b8: 0xc0775b8  jal         func_1DD6E0
label_5611bc:
    if (ctx->pc == 0x5611BCu) {
        ctx->pc = 0x5611BCu;
            // 0x5611bc: 0xa22200cc  sb          $v0, 0xCC($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x5611C0u;
        goto label_5611c0;
    }
    ctx->pc = 0x5611B8u;
    SET_GPR_U32(ctx, 31, 0x5611C0u);
    ctx->pc = 0x5611BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5611B8u;
            // 0x5611bc: 0xa22200cc  sb          $v0, 0xCC($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5611C0u; }
        if (ctx->pc != 0x5611C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5611C0u; }
        if (ctx->pc != 0x5611C0u) { return; }
    }
    ctx->pc = 0x5611C0u;
label_5611c0:
    // 0x5611c0: 0xc077314  jal         func_1DCC50
label_5611c4:
    if (ctx->pc == 0x5611C4u) {
        ctx->pc = 0x5611C4u;
            // 0x5611c4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x5611C8u;
        goto label_5611c8;
    }
    ctx->pc = 0x5611C0u;
    SET_GPR_U32(ctx, 31, 0x5611C8u);
    ctx->pc = 0x5611C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5611C0u;
            // 0x5611c4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5611C8u; }
        if (ctx->pc != 0x5611C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5611C8u; }
        if (ctx->pc != 0x5611C8u) { return; }
    }
    ctx->pc = 0x5611C8u;
label_5611c8:
    // 0x5611c8: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x5611c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_5611cc:
    // 0x5611cc: 0x8e2700c8  lw          $a3, 0xC8($s1)
    ctx->pc = 0x5611ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
label_5611d0:
    // 0x5611d0: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x5611d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
label_5611d4:
    // 0x5611d4: 0x262400e0  addiu       $a0, $s1, 0xE0
    ctx->pc = 0x5611d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
label_5611d8:
    // 0x5611d8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x5611d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_5611dc:
    // 0x5611dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x5611dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5611e0:
    // 0x5611e0: 0x90480000  lbu         $t0, 0x0($v0)
    ctx->pc = 0x5611e0u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_5611e4:
    // 0x5611e4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x5611e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_5611e8:
    // 0x5611e8: 0x24637d20  addiu       $v1, $v1, 0x7D20
    ctx->pc = 0x5611e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32032));
label_5611ec:
    // 0x5611ec: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x5611ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_5611f0:
    // 0x5611f0: 0xe83818  mult        $a3, $a3, $t0
    ctx->pc = 0x5611f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_5611f4:
    // 0x5611f4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x5611f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_5611f8:
    // 0x5611f8: 0x24427d60  addiu       $v0, $v0, 0x7D60
    ctx->pc = 0x5611f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32096));
label_5611fc:
    // 0x5611fc: 0xae2700c8  sw          $a3, 0xC8($s1)
    ctx->pc = 0x5611fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 7));
label_561200:
    // 0x561200: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x561200u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_561204:
    // 0x561204: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x561204u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_561208:
    // 0x561208: 0xae3400d0  sw          $s4, 0xD0($s1)
    ctx->pc = 0x561208u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 20));
label_56120c:
    // 0x56120c: 0xae2000d4  sw          $zero, 0xD4($s1)
    ctx->pc = 0x56120cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 0));
label_561210:
    // 0x561210: 0xa22000d8  sb          $zero, 0xD8($s1)
    ctx->pc = 0x561210u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 216), (uint8_t)GPR_U32(ctx, 0));
label_561214:
    // 0x561214: 0xae2000dc  sw          $zero, 0xDC($s1)
    ctx->pc = 0x561214u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 0));
label_561218:
    // 0x561218: 0xa62000f0  sh          $zero, 0xF0($s1)
    ctx->pc = 0x561218u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 240), (uint16_t)GPR_U32(ctx, 0));
label_56121c:
    // 0x56121c: 0xa62000f2  sh          $zero, 0xF2($s1)
    ctx->pc = 0x56121cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 242), (uint16_t)GPR_U32(ctx, 0));
label_561220:
    // 0x561220: 0xc04a576  jal         func_1295D8
label_561224:
    if (ctx->pc == 0x561224u) {
        ctx->pc = 0x561224u;
            // 0x561224: 0xa62000f4  sh          $zero, 0xF4($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 244), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x561228u;
        goto label_561228;
    }
    ctx->pc = 0x561220u;
    SET_GPR_U32(ctx, 31, 0x561228u);
    ctx->pc = 0x561224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x561220u;
            // 0x561224: 0xa62000f4  sh          $zero, 0xF4($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 244), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561228u; }
        if (ctx->pc != 0x561228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561228u; }
        if (ctx->pc != 0x561228u) { return; }
    }
    ctx->pc = 0x561228u;
label_561228:
    // 0x561228: 0xae200140  sw          $zero, 0x140($s1)
    ctx->pc = 0x561228u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 320), GPR_U32(ctx, 0));
label_56122c:
    // 0x56122c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x56122cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_561230:
    // 0x561230: 0xae200144  sw          $zero, 0x144($s1)
    ctx->pc = 0x561230u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 324), GPR_U32(ctx, 0));
label_561234:
    // 0x561234: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x561234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_561238:
    // 0x561238: 0xae200148  sw          $zero, 0x148($s1)
    ctx->pc = 0x561238u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 0));
label_56123c:
    // 0x56123c: 0x26240100  addiu       $a0, $s1, 0x100
    ctx->pc = 0x56123cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
label_561240:
    // 0x561240: 0xa6200150  sh          $zero, 0x150($s1)
    ctx->pc = 0x561240u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 336), (uint16_t)GPR_U32(ctx, 0));
label_561244:
    // 0x561244: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x561244u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_561248:
    // 0x561248: 0xa6200152  sh          $zero, 0x152($s1)
    ctx->pc = 0x561248u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 338), (uint16_t)GPR_U32(ctx, 0));
label_56124c:
    // 0x56124c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x56124cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_561250:
    // 0x561250: 0xa6220154  sh          $v0, 0x154($s1)
    ctx->pc = 0x561250u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 340), (uint16_t)GPR_U32(ctx, 2));
label_561254:
    // 0x561254: 0xc04cbd8  jal         func_132F60
label_561258:
    if (ctx->pc == 0x561258u) {
        ctx->pc = 0x561258u;
            // 0x561258: 0xa6200156  sh          $zero, 0x156($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 342), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x56125Cu;
        goto label_56125c;
    }
    ctx->pc = 0x561254u;
    SET_GPR_U32(ctx, 31, 0x56125Cu);
    ctx->pc = 0x561258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x561254u;
            // 0x561258: 0xa6200156  sh          $zero, 0x156($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 342), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56125Cu; }
        if (ctx->pc != 0x56125Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56125Cu; }
        if (ctx->pc != 0x56125Cu) { return; }
    }
    ctx->pc = 0x56125Cu;
label_56125c:
    // 0x56125c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x56125cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_561260:
    // 0x561260: 0x26240110  addiu       $a0, $s1, 0x110
    ctx->pc = 0x561260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 272));
label_561264:
    // 0x561264: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x561264u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_561268:
    // 0x561268: 0xc04cbd8  jal         func_132F60
label_56126c:
    if (ctx->pc == 0x56126Cu) {
        ctx->pc = 0x56126Cu;
            // 0x56126c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x561270u;
        goto label_561270;
    }
    ctx->pc = 0x561268u;
    SET_GPR_U32(ctx, 31, 0x561270u);
    ctx->pc = 0x56126Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x561268u;
            // 0x56126c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561270u; }
        if (ctx->pc != 0x561270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561270u; }
        if (ctx->pc != 0x561270u) { return; }
    }
    ctx->pc = 0x561270u;
label_561270:
    // 0x561270: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x561270u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_561274:
    // 0x561274: 0x26240120  addiu       $a0, $s1, 0x120
    ctx->pc = 0x561274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
label_561278:
    // 0x561278: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x561278u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_56127c:
    // 0x56127c: 0xc04cbd8  jal         func_132F60
label_561280:
    if (ctx->pc == 0x561280u) {
        ctx->pc = 0x561280u;
            // 0x561280: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x561284u;
        goto label_561284;
    }
    ctx->pc = 0x56127Cu;
    SET_GPR_U32(ctx, 31, 0x561284u);
    ctx->pc = 0x561280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56127Cu;
            // 0x561280: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561284u; }
        if (ctx->pc != 0x561284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561284u; }
        if (ctx->pc != 0x561284u) { return; }
    }
    ctx->pc = 0x561284u;
label_561284:
    // 0x561284: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x561284u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_561288:
    // 0x561288: 0x26240130  addiu       $a0, $s1, 0x130
    ctx->pc = 0x561288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 304));
label_56128c:
    // 0x56128c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x56128cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_561290:
    // 0x561290: 0xc04cbd8  jal         func_132F60
label_561294:
    if (ctx->pc == 0x561294u) {
        ctx->pc = 0x561294u;
            // 0x561294: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x561298u;
        goto label_561298;
    }
    ctx->pc = 0x561290u;
    SET_GPR_U32(ctx, 31, 0x561298u);
    ctx->pc = 0x561294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x561290u;
            // 0x561294: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561298u; }
        if (ctx->pc != 0x561298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561298u; }
        if (ctx->pc != 0x561298u) { return; }
    }
    ctx->pc = 0x561298u;
label_561298:
    // 0x561298: 0xae200160  sw          $zero, 0x160($s1)
    ctx->pc = 0x561298u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 0));
label_56129c:
    // 0x56129c: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x56129cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_5612a0:
    // 0x5612a0: 0xae200168  sw          $zero, 0x168($s1)
    ctx->pc = 0x5612a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 360), GPR_U32(ctx, 0));
label_5612a4:
    // 0x5612a4: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x5612a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
label_5612a8:
    // 0x5612a8: 0xae20016c  sw          $zero, 0x16C($s1)
    ctx->pc = 0x5612a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 364), GPR_U32(ctx, 0));
label_5612ac:
    // 0x5612ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x5612acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_5612b0:
    // 0x5612b0: 0xae240170  sw          $a0, 0x170($s1)
    ctx->pc = 0x5612b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 368), GPR_U32(ctx, 4));
label_5612b4:
    // 0x5612b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x5612b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5612b8:
    // 0x5612b8: 0xae230174  sw          $v1, 0x174($s1)
    ctx->pc = 0x5612b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 372), GPR_U32(ctx, 3));
label_5612bc:
    // 0x5612bc: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x5612bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_5612c0:
    // 0x5612c0: 0xa6220178  sh          $v0, 0x178($s1)
    ctx->pc = 0x5612c0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 376), (uint16_t)GPR_U32(ctx, 2));
label_5612c4:
    // 0x5612c4: 0xc04cc04  jal         func_133010
label_5612c8:
    if (ctx->pc == 0x5612C8u) {
        ctx->pc = 0x5612C8u;
            // 0x5612c8: 0xa2200180  sb          $zero, 0x180($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 384), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x5612CCu;
        goto label_5612cc;
    }
    ctx->pc = 0x5612C4u;
    SET_GPR_U32(ctx, 31, 0x5612CCu);
    ctx->pc = 0x5612C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5612C4u;
            // 0x5612c8: 0xa2200180  sb          $zero, 0x180($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 384), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5612CCu; }
        if (ctx->pc != 0x5612CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5612CCu; }
        if (ctx->pc != 0x5612CCu) { return; }
    }
    ctx->pc = 0x5612CCu;
label_5612cc:
    // 0x5612cc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x5612ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_5612d0:
    // 0x5612d0: 0xc04c720  jal         func_131C80
label_5612d4:
    if (ctx->pc == 0x5612D4u) {
        ctx->pc = 0x5612D4u;
            // 0x5612d4: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x5612D8u;
        goto label_5612d8;
    }
    ctx->pc = 0x5612D0u;
    SET_GPR_U32(ctx, 31, 0x5612D8u);
    ctx->pc = 0x5612D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5612D0u;
            // 0x5612d4: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5612D8u; }
        if (ctx->pc != 0x5612D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5612D8u; }
        if (ctx->pc != 0x5612D8u) { return; }
    }
    ctx->pc = 0x5612D8u;
label_5612d8:
    // 0x5612d8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x5612d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_5612dc:
    // 0x5612dc: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x5612dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_5612e0:
    // 0x5612e0: 0xae230030  sw          $v1, 0x30($s1)
    ctx->pc = 0x5612e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
label_5612e4:
    // 0x5612e4: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x5612e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_5612e8:
    // 0x5612e8: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x5612e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
label_5612ec:
    // 0x5612ec: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x5612ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_5612f0:
    // 0x5612f0: 0xae230038  sw          $v1, 0x38($s1)
    ctx->pc = 0x5612f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
label_5612f4:
    // 0x5612f4: 0x24a5f8d0  addiu       $a1, $a1, -0x730
    ctx->pc = 0x5612f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965456));
label_5612f8:
    // 0x5612f8: 0xa222004c  sb          $v0, 0x4C($s1)
    ctx->pc = 0x5612f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 76), (uint8_t)GPR_U32(ctx, 2));
label_5612fc:
    // 0x5612fc: 0xe6340164  swc1        $f20, 0x164($s1)
    ctx->pc = 0x5612fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 356), bits); }
label_561300:
    // 0x561300: 0xc04cc04  jal         func_133010
label_561304:
    if (ctx->pc == 0x561304u) {
        ctx->pc = 0x561304u;
            // 0x561304: 0xa6320178  sh          $s2, 0x178($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 376), (uint16_t)GPR_U32(ctx, 18));
        ctx->pc = 0x561308u;
        goto label_561308;
    }
    ctx->pc = 0x561300u;
    SET_GPR_U32(ctx, 31, 0x561308u);
    ctx->pc = 0x561304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x561300u;
            // 0x561304: 0xa6320178  sh          $s2, 0x178($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 376), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561308u; }
        if (ctx->pc != 0x561308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561308u; }
        if (ctx->pc != 0x561308u) { return; }
    }
    ctx->pc = 0x561308u;
label_561308:
    // 0x561308: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x561308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_56130c:
    // 0x56130c: 0x262500e0  addiu       $a1, $s1, 0xE0
    ctx->pc = 0x56130cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
label_561310:
    // 0x561310: 0x8c420ea4  lw          $v0, 0xEA4($v0)
    ctx->pc = 0x561310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_561314:
    // 0x561314: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x561314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_561318:
    // 0x561318: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x561318u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_56131c:
    // 0x56131c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x56131cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_561320:
    // 0x561320: 0x24520130  addiu       $s2, $v0, 0x130
    ctx->pc = 0x561320u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
label_561324:
    // 0x561324: 0xc0c5ae8  jal         func_316BA0
label_561328:
    if (ctx->pc == 0x561328u) {
        ctx->pc = 0x561328u;
            // 0x561328: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x56132Cu;
        goto label_56132c;
    }
    ctx->pc = 0x561324u;
    SET_GPR_U32(ctx, 31, 0x56132Cu);
    ctx->pc = 0x561328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x561324u;
            // 0x561328: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x316BA0u;
    if (runtime->hasFunction(0x316BA0u)) {
        auto targetFn = runtime->lookupFunction(0x316BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56132Cu; }
        if (ctx->pc != 0x56132Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00316BA0_0x316ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56132Cu; }
        if (ctx->pc != 0x56132Cu) { return; }
    }
    ctx->pc = 0x56132Cu;
label_56132c:
    // 0x56132c: 0x962500f0  lhu         $a1, 0xF0($s1)
    ctx->pc = 0x56132cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 240)));
label_561330:
    // 0x561330: 0x18a0004e  blez        $a1, . + 4 + (0x4E << 2)
label_561334:
    if (ctx->pc == 0x561334u) {
        ctx->pc = 0x561338u;
        goto label_561338;
    }
    ctx->pc = 0x561330u;
    {
        const bool branch_taken_0x561330 = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x561330) {
            ctx->pc = 0x56146Cu;
            goto label_56146c;
        }
    }
    ctx->pc = 0x561338u;
label_561338:
    // 0x561338: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x561338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_56133c:
    // 0x56133c: 0x963400f2  lhu         $s4, 0xF2($s1)
    ctx->pc = 0x56133cu;
    SET_GPR_U32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 242)));
label_561340:
    // 0x561340: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x561340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_561344:
    // 0x561344: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x561344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_561348:
    // 0x561348: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x561348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_56134c:
    // 0x56134c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x56134cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_561350:
    // 0x561350: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x561350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_561354:
    // 0x561354: 0x944300e0  lhu         $v1, 0xE0($v0)
    ctx->pc = 0x561354u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 224)));
label_561358:
    // 0x561358: 0x31180  sll         $v0, $v1, 6
    ctx->pc = 0x561358u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_56135c:
    // 0x56135c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x56135cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_561360:
    // 0x561360: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x561360u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_561364:
    // 0x561364: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_561368:
    if (ctx->pc == 0x561368u) {
        ctx->pc = 0x56136Cu;
        goto label_56136c;
    }
    ctx->pc = 0x561364u;
    {
        const bool branch_taken_0x561364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x561364) {
            ctx->pc = 0x561370u;
            goto label_561370;
        }
    }
    ctx->pc = 0x56136Cu;
label_56136c:
    // 0x56136c: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x56136cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_561370:
    // 0x561370: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x561370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_561374:
    // 0x561374: 0x5ca0fff4  bgtzl       $a1, . + 4 + (-0xC << 2)
label_561378:
    if (ctx->pc == 0x561378u) {
        ctx->pc = 0x561378u;
            // 0x561378: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->pc = 0x56137Cu;
        goto label_56137c;
    }
    ctx->pc = 0x561374u;
    {
        const bool branch_taken_0x561374 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x561374) {
            ctx->pc = 0x561378u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x561374u;
            // 0x561378: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x561348u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_561348;
        }
    }
    ctx->pc = 0x56137Cu;
label_56137c:
    // 0x56137c: 0x3282ffff  andi        $v0, $s4, 0xFFFF
    ctx->pc = 0x56137cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)65535);
label_561380:
    // 0x561380: 0xa63400f2  sh          $s4, 0xF2($s1)
    ctx->pc = 0x561380u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 242), (uint16_t)GPR_U32(ctx, 20));
label_561384:
    // 0x561384: 0x22980  sll         $a1, $v0, 6
    ctx->pc = 0x561384u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_561388:
    // 0x561388: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x561388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_56138c:
    // 0x56138c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x56138cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_561390:
    // 0x561390: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x561390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_561394:
    // 0x561394: 0x659821  addu        $s3, $v1, $a1
    ctx->pc = 0x561394u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_561398:
    // 0x561398: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x561398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_56139c:
    // 0x56139c: 0x96630002  lhu         $v1, 0x2($s3)
    ctx->pc = 0x56139cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_5613a0:
    // 0x5613a0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x5613a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_5613a4:
    // 0x5613a4: 0xc04cc04  jal         func_133010
label_5613a8:
    if (ctx->pc == 0x5613A8u) {
        ctx->pc = 0x5613A8u;
            // 0x5613a8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x5613ACu;
        goto label_5613ac;
    }
    ctx->pc = 0x5613A4u;
    SET_GPR_U32(ctx, 31, 0x5613ACu);
    ctx->pc = 0x5613A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5613A4u;
            // 0x5613a8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5613ACu; }
        if (ctx->pc != 0x5613ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5613ACu; }
        if (ctx->pc != 0x5613ACu) { return; }
    }
    ctx->pc = 0x5613ACu;
label_5613ac:
    // 0x5613ac: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x5613acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_5613b0:
    // 0x5613b0: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x5613b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_5613b4:
    // 0x5613b4: 0xc04cc90  jal         func_133240
label_5613b8:
    if (ctx->pc == 0x5613B8u) {
        ctx->pc = 0x5613B8u;
            // 0x5613b8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5613BCu;
        goto label_5613bc;
    }
    ctx->pc = 0x5613B4u;
    SET_GPR_U32(ctx, 31, 0x5613BCu);
    ctx->pc = 0x5613B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5613B4u;
            // 0x5613b8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5613BCu; }
        if (ctx->pc != 0x5613BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5613BCu; }
        if (ctx->pc != 0x5613BCu) { return; }
    }
    ctx->pc = 0x5613BCu;
label_5613bc:
    // 0x5613bc: 0xc04cc2c  jal         func_1330B0
label_5613c0:
    if (ctx->pc == 0x5613C0u) {
        ctx->pc = 0x5613C0u;
            // 0x5613c0: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x5613C4u;
        goto label_5613c4;
    }
    ctx->pc = 0x5613BCu;
    SET_GPR_U32(ctx, 31, 0x5613C4u);
    ctx->pc = 0x5613C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5613BCu;
            // 0x5613c0: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330B0u;
    if (runtime->hasFunction(0x1330B0u)) {
        auto targetFn = runtime->lookupFunction(0x1330B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5613C4u; }
        if (ctx->pc != 0x5613C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330B0_0x1330b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5613C4u; }
        if (ctx->pc != 0x5613C4u) { return; }
    }
    ctx->pc = 0x5613C4u;
label_5613c4:
    // 0x5613c4: 0x3c024361  lui         $v0, 0x4361
    ctx->pc = 0x5613c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17249 << 16));
label_5613c8:
    // 0x5613c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x5613c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_5613cc:
    // 0x5613cc: 0x0  nop
    ctx->pc = 0x5613ccu;
    // NOP
label_5613d0:
    // 0x5613d0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x5613d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_5613d4:
    // 0x5613d4: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
label_5613d8:
    if (ctx->pc == 0x5613D8u) {
        ctx->pc = 0x5613D8u;
            // 0x5613d8: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5613DCu;
        goto label_5613dc;
    }
    ctx->pc = 0x5613D4u;
    {
        const bool branch_taken_0x5613d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x5613d4) {
            ctx->pc = 0x5613D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5613D4u;
            // 0x5613d8: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x561404u;
            goto label_561404;
        }
    }
    ctx->pc = 0x5613DCu;
label_5613dc:
    // 0x5613dc: 0x96660002  lhu         $a2, 0x2($s3)
    ctx->pc = 0x5613dcu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_5613e0:
    // 0x5613e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x5613e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_5613e4:
    // 0x5613e4: 0xc0c5ba8  jal         func_316EA0
label_5613e8:
    if (ctx->pc == 0x5613E8u) {
        ctx->pc = 0x5613E8u;
            // 0x5613e8: 0x262500e0  addiu       $a1, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->pc = 0x5613ECu;
        goto label_5613ec;
    }
    ctx->pc = 0x5613E4u;
    SET_GPR_U32(ctx, 31, 0x5613ECu);
    ctx->pc = 0x5613E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5613E4u;
            // 0x5613e8: 0x262500e0  addiu       $a1, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x316EA0u;
    if (runtime->hasFunction(0x316EA0u)) {
        auto targetFn = runtime->lookupFunction(0x316EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5613ECu; }
        if (ctx->pc != 0x5613ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00316EA0_0x316ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5613ECu; }
        if (ctx->pc != 0x5613ECu) { return; }
    }
    ctx->pc = 0x5613ECu;
label_5613ec:
    // 0x5613ec: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x5613ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_5613f0:
    // 0x5613f0: 0x962300f2  lhu         $v1, 0xF2($s1)
    ctx->pc = 0x5613f0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 242)));
label_5613f4:
    // 0x5613f4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x5613f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_5613f8:
    // 0x5613f8: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x5613f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_5613fc:
    // 0x5613fc: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x5613fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_561400:
    // 0x561400: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x561400u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_561404:
    // 0x561404: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x561404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_561408:
    // 0x561408: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x561408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_56140c:
    // 0x56140c: 0xc0c60b4  jal         func_3182D0
label_561410:
    if (ctx->pc == 0x561410u) {
        ctx->pc = 0x561410u;
            // 0x561410: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x561414u;
        goto label_561414;
    }
    ctx->pc = 0x56140Cu;
    SET_GPR_U32(ctx, 31, 0x561414u);
    ctx->pc = 0x561410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56140Cu;
            // 0x561410: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3182D0u;
    if (runtime->hasFunction(0x3182D0u)) {
        auto targetFn = runtime->lookupFunction(0x3182D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561414u; }
        if (ctx->pc != 0x561414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003182D0_0x3182d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561414u; }
        if (ctx->pc != 0x561414u) { return; }
    }
    ctx->pc = 0x561414u;
label_561414:
    // 0x561414: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x561414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_561418:
    // 0x561418: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x561418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_56141c:
    // 0x56141c: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x56141cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_561420:
    // 0x561420: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x561420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_561424:
    // 0x561424: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x561424u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_561428:
    // 0x561428: 0xc04cc04  jal         func_133010
label_56142c:
    if (ctx->pc == 0x56142Cu) {
        ctx->pc = 0x56142Cu;
            // 0x56142c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x561430u;
        goto label_561430;
    }
    ctx->pc = 0x561428u;
    SET_GPR_U32(ctx, 31, 0x561430u);
    ctx->pc = 0x56142Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x561428u;
            // 0x56142c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561430u; }
        if (ctx->pc != 0x561430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561430u; }
        if (ctx->pc != 0x561430u) { return; }
    }
    ctx->pc = 0x561430u;
label_561430:
    // 0x561430: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x561430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_561434:
    // 0x561434: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x561434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_561438:
    // 0x561438: 0x96630002  lhu         $v1, 0x2($s3)
    ctx->pc = 0x561438u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_56143c:
    // 0x56143c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x56143cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_561440:
    // 0x561440: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x561440u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_561444:
    // 0x561444: 0xc04cc04  jal         func_133010
label_561448:
    if (ctx->pc == 0x561448u) {
        ctx->pc = 0x561448u;
            // 0x561448: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x56144Cu;
        goto label_56144c;
    }
    ctx->pc = 0x561444u;
    SET_GPR_U32(ctx, 31, 0x56144Cu);
    ctx->pc = 0x561448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x561444u;
            // 0x561448: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56144Cu; }
        if (ctx->pc != 0x56144Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56144Cu; }
        if (ctx->pc != 0x56144Cu) { return; }
    }
    ctx->pc = 0x56144Cu;
label_56144c:
    // 0x56144c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x56144cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_561450:
    // 0x561450: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x561450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_561454:
    // 0x561454: 0xc04cc90  jal         func_133240
label_561458:
    if (ctx->pc == 0x561458u) {
        ctx->pc = 0x561458u;
            // 0x561458: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x56145Cu;
        goto label_56145c;
    }
    ctx->pc = 0x561454u;
    SET_GPR_U32(ctx, 31, 0x56145Cu);
    ctx->pc = 0x561458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x561454u;
            // 0x561458: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56145Cu; }
        if (ctx->pc != 0x56145Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56145Cu; }
        if (ctx->pc != 0x56145Cu) { return; }
    }
    ctx->pc = 0x56145Cu;
label_56145c:
    // 0x56145c: 0xc04cc2c  jal         func_1330B0
label_561460:
    if (ctx->pc == 0x561460u) {
        ctx->pc = 0x561460u;
            // 0x561460: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x561464u;
        goto label_561464;
    }
    ctx->pc = 0x56145Cu;
    SET_GPR_U32(ctx, 31, 0x561464u);
    ctx->pc = 0x561460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56145Cu;
            // 0x561460: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330B0u;
    if (runtime->hasFunction(0x1330B0u)) {
        auto targetFn = runtime->lookupFunction(0x1330B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561464u; }
        if (ctx->pc != 0x561464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330B0_0x1330b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561464u; }
        if (ctx->pc != 0x561464u) { return; }
    }
    ctx->pc = 0x561464u;
label_561464:
    // 0x561464: 0x10000030  b           . + 4 + (0x30 << 2)
label_561468:
    if (ctx->pc == 0x561468u) {
        ctx->pc = 0x561468u;
            // 0x561468: 0xe620017c  swc1        $f0, 0x17C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 380), bits); }
        ctx->pc = 0x56146Cu;
        goto label_56146c;
    }
    ctx->pc = 0x561464u;
    {
        const bool branch_taken_0x561464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x561468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x561464u;
            // 0x561468: 0xe620017c  swc1        $f0, 0x17C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 380), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x561464) {
            ctx->pc = 0x561528u;
            goto label_561528;
        }
    }
    ctx->pc = 0x56146Cu;
label_56146c:
    // 0x56146c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x56146cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_561470:
    // 0x561470: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x561470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_561474:
    // 0x561474: 0x8c420ea4  lw          $v0, 0xEA4($v0)
    ctx->pc = 0x561474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_561478:
    // 0x561478: 0x8c53012c  lw          $s3, 0x12C($v0)
    ctx->pc = 0x561478u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_56147c:
    // 0x56147c: 0xc04f278  jal         func_13C9E0
label_561480:
    if (ctx->pc == 0x561480u) {
        ctx->pc = 0x561480u;
            // 0x561480: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x561484u;
        goto label_561484;
    }
    ctx->pc = 0x56147Cu;
    SET_GPR_U32(ctx, 31, 0x561484u);
    ctx->pc = 0x561480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56147Cu;
            // 0x561480: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561484u; }
        if (ctx->pc != 0x561484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561484u; }
        if (ctx->pc != 0x561484u) { return; }
    }
    ctx->pc = 0x561484u;
label_561484:
    // 0x561484: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x561484u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
label_561488:
    // 0x561488: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x561488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_56148c:
    // 0x56148c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x56148cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_561490:
    // 0x561490: 0xc04cca0  jal         func_133280
label_561494:
    if (ctx->pc == 0x561494u) {
        ctx->pc = 0x561494u;
            // 0x561494: 0x24c6f8c0  addiu       $a2, $a2, -0x740 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965440));
        ctx->pc = 0x561498u;
        goto label_561498;
    }
    ctx->pc = 0x561490u;
    SET_GPR_U32(ctx, 31, 0x561498u);
    ctx->pc = 0x561494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x561490u;
            // 0x561494: 0x24c6f8c0  addiu       $a2, $a2, -0x740 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294965440));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561498u; }
        if (ctx->pc != 0x561498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561498u; }
        if (ctx->pc != 0x561498u) { return; }
    }
    ctx->pc = 0x561498u;
label_561498:
    // 0x561498: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x561498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_56149c:
    // 0x56149c: 0x262500e0  addiu       $a1, $s1, 0xE0
    ctx->pc = 0x56149cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
label_5614a0:
    // 0x5614a0: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x5614a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_5614a4:
    // 0x5614a4: 0x27a700c0  addiu       $a3, $sp, 0xC0
    ctx->pc = 0x5614a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_5614a8:
    // 0x5614a8: 0xc0c614c  jal         func_318530
label_5614ac:
    if (ctx->pc == 0x5614ACu) {
        ctx->pc = 0x5614ACu;
            // 0x5614ac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5614B0u;
        goto label_5614b0;
    }
    ctx->pc = 0x5614A8u;
    SET_GPR_U32(ctx, 31, 0x5614B0u);
    ctx->pc = 0x5614ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5614A8u;
            // 0x5614ac: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318530u;
    if (runtime->hasFunction(0x318530u)) {
        auto targetFn = runtime->lookupFunction(0x318530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5614B0u; }
        if (ctx->pc != 0x5614B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318530_0x318530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5614B0u; }
        if (ctx->pc != 0x5614B0u) { return; }
    }
    ctx->pc = 0x5614B0u;
label_5614b0:
    // 0x5614b0: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x5614b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_5614b4:
    // 0x5614b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x5614b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_5614b8:
    // 0x5614b8: 0x962700f2  lhu         $a3, 0xF2($s1)
    ctx->pc = 0x5614b8u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 242)));
label_5614bc:
    // 0x5614bc: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x5614bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_5614c0:
    // 0x5614c0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x5614c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5614c4:
    // 0x5614c4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x5614c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_5614c8:
    // 0x5614c8: 0x71980  sll         $v1, $a3, 6
    ctx->pc = 0x5614c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
label_5614cc:
    // 0x5614cc: 0xc0c60b4  jal         func_3182D0
label_5614d0:
    if (ctx->pc == 0x5614D0u) {
        ctx->pc = 0x5614D0u;
            // 0x5614d0: 0x439021  addu        $s2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x5614D4u;
        goto label_5614d4;
    }
    ctx->pc = 0x5614CCu;
    SET_GPR_U32(ctx, 31, 0x5614D4u);
    ctx->pc = 0x5614D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5614CCu;
            // 0x5614d0: 0x439021  addu        $s2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3182D0u;
    if (runtime->hasFunction(0x3182D0u)) {
        auto targetFn = runtime->lookupFunction(0x3182D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5614D4u; }
        if (ctx->pc != 0x5614D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003182D0_0x3182d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5614D4u; }
        if (ctx->pc != 0x5614D4u) { return; }
    }
    ctx->pc = 0x5614D4u;
label_5614d4:
    // 0x5614d4: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x5614d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_5614d8:
    // 0x5614d8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x5614d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_5614dc:
    // 0x5614dc: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x5614dcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_5614e0:
    // 0x5614e0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x5614e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_5614e4:
    // 0x5614e4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x5614e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_5614e8:
    // 0x5614e8: 0xc04cc04  jal         func_133010
label_5614ec:
    if (ctx->pc == 0x5614ECu) {
        ctx->pc = 0x5614ECu;
            // 0x5614ec: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x5614F0u;
        goto label_5614f0;
    }
    ctx->pc = 0x5614E8u;
    SET_GPR_U32(ctx, 31, 0x5614F0u);
    ctx->pc = 0x5614ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5614E8u;
            // 0x5614ec: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5614F0u; }
        if (ctx->pc != 0x5614F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5614F0u; }
        if (ctx->pc != 0x5614F0u) { return; }
    }
    ctx->pc = 0x5614F0u;
label_5614f0:
    // 0x5614f0: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x5614f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_5614f4:
    // 0x5614f4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x5614f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_5614f8:
    // 0x5614f8: 0x96430002  lhu         $v1, 0x2($s2)
    ctx->pc = 0x5614f8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_5614fc:
    // 0x5614fc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x5614fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_561500:
    // 0x561500: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x561500u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_561504:
    // 0x561504: 0xc04cc04  jal         func_133010
label_561508:
    if (ctx->pc == 0x561508u) {
        ctx->pc = 0x561508u;
            // 0x561508: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x56150Cu;
        goto label_56150c;
    }
    ctx->pc = 0x561504u;
    SET_GPR_U32(ctx, 31, 0x56150Cu);
    ctx->pc = 0x561508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x561504u;
            // 0x561508: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56150Cu; }
        if (ctx->pc != 0x56150Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56150Cu; }
        if (ctx->pc != 0x56150Cu) { return; }
    }
    ctx->pc = 0x56150Cu;
label_56150c:
    // 0x56150c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x56150cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_561510:
    // 0x561510: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x561510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_561514:
    // 0x561514: 0xc04cc90  jal         func_133240
label_561518:
    if (ctx->pc == 0x561518u) {
        ctx->pc = 0x561518u;
            // 0x561518: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x56151Cu;
        goto label_56151c;
    }
    ctx->pc = 0x561514u;
    SET_GPR_U32(ctx, 31, 0x56151Cu);
    ctx->pc = 0x561518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x561514u;
            // 0x561518: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56151Cu; }
        if (ctx->pc != 0x56151Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56151Cu; }
        if (ctx->pc != 0x56151Cu) { return; }
    }
    ctx->pc = 0x56151Cu;
label_56151c:
    // 0x56151c: 0xae20017c  sw          $zero, 0x17C($s1)
    ctx->pc = 0x56151cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 380), GPR_U32(ctx, 0));
label_561520:
    // 0x561520: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x561520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_561524:
    // 0x561524: 0xa2220180  sb          $v0, 0x180($s1)
    ctx->pc = 0x561524u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 384), (uint8_t)GPR_U32(ctx, 2));
label_561528:
    // 0x561528: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x561528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_56152c:
    // 0x56152c: 0xc04cc44  jal         func_133110
label_561530:
    if (ctx->pc == 0x561530u) {
        ctx->pc = 0x561530u;
            // 0x561530: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x561534u;
        goto label_561534;
    }
    ctx->pc = 0x56152Cu;
    SET_GPR_U32(ctx, 31, 0x561534u);
    ctx->pc = 0x561530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56152Cu;
            // 0x561530: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561534u; }
        if (ctx->pc != 0x561534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561534u; }
        if (ctx->pc != 0x561534u) { return; }
    }
    ctx->pc = 0x561534u;
label_561534:
    // 0x561534: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x561534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_561538:
    // 0x561538: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x561538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_56153c:
    // 0x56153c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x56153cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_561540:
    // 0x561540: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x561540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_561544:
    // 0x561544: 0xc04cc7c  jal         func_1331F0
label_561548:
    if (ctx->pc == 0x561548u) {
        ctx->pc = 0x561548u;
            // 0x561548: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x56154Cu;
        goto label_56154c;
    }
    ctx->pc = 0x561544u;
    SET_GPR_U32(ctx, 31, 0x56154Cu);
    ctx->pc = 0x561548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x561544u;
            // 0x561548: 0x27a600f0  addiu       $a2, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56154Cu; }
        if (ctx->pc != 0x56154Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56154Cu; }
        if (ctx->pc != 0x56154Cu) { return; }
    }
    ctx->pc = 0x56154Cu;
label_56154c:
    // 0x56154c: 0x86290178  lh          $t1, 0x178($s1)
    ctx->pc = 0x56154cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 376)));
label_561550:
    // 0x561550: 0x5210008  bgez        $t1, . + 4 + (0x8 << 2)
label_561554:
    if (ctx->pc == 0x561554u) {
        ctx->pc = 0x561558u;
        goto label_561558;
    }
    ctx->pc = 0x561550u;
    {
        const bool branch_taken_0x561550 = (GPR_S32(ctx, 9) >= 0);
        if (branch_taken_0x561550) {
            ctx->pc = 0x561574u;
            goto label_561574;
        }
    }
    ctx->pc = 0x561558u;
label_561558:
    // 0x561558: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x561558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_56155c:
    // 0x56155c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x56155cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_561560:
    // 0x561560: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x561560u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_561564:
    // 0x561564: 0x0  nop
    ctx->pc = 0x561564u;
    // NOP
label_561568:
    // 0x561568: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x561568u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_56156c:
    // 0x56156c: 0x10000020  b           . + 4 + (0x20 << 2)
label_561570:
    if (ctx->pc == 0x561570u) {
        ctx->pc = 0x561570u;
            // 0x561570: 0xe7a00104  swc1        $f0, 0x104($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
        ctx->pc = 0x561574u;
        goto label_561574;
    }
    ctx->pc = 0x56156Cu;
    {
        const bool branch_taken_0x56156c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x561570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56156Cu;
            // 0x561570: 0xe7a00104  swc1        $f0, 0x104($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x56156c) {
            ctx->pc = 0x5615F0u;
            goto label_5615f0;
        }
    }
    ctx->pc = 0x561574u;
label_561574:
    // 0x561574: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x561574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_561578:
    // 0x561578: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x561578u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_56157c:
    // 0x56157c: 0x8c420c78  lw          $v0, 0xC78($v0)
    ctx->pc = 0x56157cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
label_561580:
    // 0x561580: 0x26240100  addiu       $a0, $s1, 0x100
    ctx->pc = 0x561580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
label_561584:
    // 0x561584: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x561584u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_561588:
    // 0x561588: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x561588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_56158c:
    // 0x56158c: 0xc0b85e8  jal         func_2E17A0
label_561590:
    if (ctx->pc == 0x561590u) {
        ctx->pc = 0x561590u;
            // 0x561590: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x561594u;
        goto label_561594;
    }
    ctx->pc = 0x56158Cu;
    SET_GPR_U32(ctx, 31, 0x561594u);
    ctx->pc = 0x561590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56158Cu;
            // 0x561590: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E17A0u;
    if (runtime->hasFunction(0x2E17A0u)) {
        auto targetFn = runtime->lookupFunction(0x2E17A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561594u; }
        if (ctx->pc != 0x561594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E17A0_0x2e17a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561594u; }
        if (ctx->pc != 0x561594u) { return; }
    }
    ctx->pc = 0x561594u;
label_561594:
    // 0x561594: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x561594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_561598:
    // 0x561598: 0x26240100  addiu       $a0, $s1, 0x100
    ctx->pc = 0x561598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
label_56159c:
    // 0x56159c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x56159cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_5615a0:
    // 0x5615a0: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x5615a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_5615a4:
    // 0x5615a4: 0xc0b82c4  jal         func_2E0B10
label_5615a8:
    if (ctx->pc == 0x5615A8u) {
        ctx->pc = 0x5615A8u;
            // 0x5615a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5615ACu;
        goto label_5615ac;
    }
    ctx->pc = 0x5615A4u;
    SET_GPR_U32(ctx, 31, 0x5615ACu);
    ctx->pc = 0x5615A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5615A4u;
            // 0x5615a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0B10u;
    if (runtime->hasFunction(0x2E0B10u)) {
        auto targetFn = runtime->lookupFunction(0x2E0B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5615ACu; }
        if (ctx->pc != 0x5615ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0B10_0x2e0b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5615ACu; }
        if (ctx->pc != 0x5615ACu) { return; }
    }
    ctx->pc = 0x5615ACu;
label_5615ac:
    // 0x5615ac: 0xc6200100  lwc1        $f0, 0x100($s1)
    ctx->pc = 0x5615acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5615b0:
    // 0x5615b0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x5615b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_5615b4:
    // 0x5615b4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x5615b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5615b8:
    // 0x5615b8: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x5615b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_5615bc:
    // 0x5615bc: 0xc6200104  lwc1        $f0, 0x104($s1)
    ctx->pc = 0x5615bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5615c0:
    // 0x5615c0: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x5615c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_5615c4:
    // 0x5615c4: 0xc6200108  lwc1        $f0, 0x108($s1)
    ctx->pc = 0x5615c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5615c8:
    // 0x5615c8: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x5615c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_5615cc:
    // 0x5615cc: 0xc620010c  lwc1        $f0, 0x10C($s1)
    ctx->pc = 0x5615ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5615d0:
    // 0x5615d0: 0xc04cc44  jal         func_133110
label_5615d4:
    if (ctx->pc == 0x5615D4u) {
        ctx->pc = 0x5615D4u;
            // 0x5615d4: 0xe7a000bc  swc1        $f0, 0xBC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
        ctx->pc = 0x5615D8u;
        goto label_5615d8;
    }
    ctx->pc = 0x5615D0u;
    SET_GPR_U32(ctx, 31, 0x5615D8u);
    ctx->pc = 0x5615D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5615D0u;
            // 0x5615d4: 0xe7a000bc  swc1        $f0, 0xBC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5615D8u; }
        if (ctx->pc != 0x5615D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5615D8u; }
        if (ctx->pc != 0x5615D8u) { return; }
    }
    ctx->pc = 0x5615D8u;
label_5615d8:
    // 0x5615d8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x5615d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_5615dc:
    // 0x5615dc: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x5615dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_5615e0:
    // 0x5615e0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x5615e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_5615e4:
    // 0x5615e4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x5615e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5615e8:
    // 0x5615e8: 0xc04cc7c  jal         func_1331F0
label_5615ec:
    if (ctx->pc == 0x5615ECu) {
        ctx->pc = 0x5615ECu;
            // 0x5615ec: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x5615F0u;
        goto label_5615f0;
    }
    ctx->pc = 0x5615E8u;
    SET_GPR_U32(ctx, 31, 0x5615F0u);
    ctx->pc = 0x5615ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5615E8u;
            // 0x5615ec: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5615F0u; }
        if (ctx->pc != 0x5615F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5615F0u; }
        if (ctx->pc != 0x5615F0u) { return; }
    }
    ctx->pc = 0x5615F0u;
label_5615f0:
    // 0x5615f0: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x5615f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_5615f4:
    // 0x5615f4: 0xc04cc04  jal         func_133010
label_5615f8:
    if (ctx->pc == 0x5615F8u) {
        ctx->pc = 0x5615F8u;
            // 0x5615f8: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x5615FCu;
        goto label_5615fc;
    }
    ctx->pc = 0x5615F4u;
    SET_GPR_U32(ctx, 31, 0x5615FCu);
    ctx->pc = 0x5615F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5615F4u;
            // 0x5615f8: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5615FCu; }
        if (ctx->pc != 0x5615FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5615FCu; }
        if (ctx->pc != 0x5615FCu) { return; }
    }
    ctx->pc = 0x5615FCu;
label_5615fc:
    // 0x5615fc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x5615fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_561600:
    // 0x561600: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x561600u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_561604:
    // 0x561604: 0x320f809  jalr        $t9
label_561608:
    if (ctx->pc == 0x561608u) {
        ctx->pc = 0x561608u;
            // 0x561608: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x56160Cu;
        goto label_56160c;
    }
    ctx->pc = 0x561604u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x56160Cu);
        ctx->pc = 0x561608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x561604u;
            // 0x561608: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x56160Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x56160Cu; }
            if (ctx->pc != 0x56160Cu) { return; }
        }
        }
    }
    ctx->pc = 0x56160Cu;
label_56160c:
    // 0x56160c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x56160cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_561610:
    // 0x561610: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x561610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_561614:
    // 0x561614: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x561614u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_561618:
    // 0x561618: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x561618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_56161c:
    // 0x56161c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x56161cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_561620:
    // 0x561620: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x561620u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_561624:
    // 0x561624: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x561624u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_561628:
    // 0x561628: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x561628u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_56162c:
    // 0x56162c: 0x3e00008  jr          $ra
label_561630:
    if (ctx->pc == 0x561630u) {
        ctx->pc = 0x561630u;
            // 0x561630: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x561634u;
        goto label_561634;
    }
    ctx->pc = 0x56162Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x561630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56162Cu;
            // 0x561630: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x561634u;
label_561634:
    // 0x561634: 0x0  nop
    ctx->pc = 0x561634u;
    // NOP
label_561638:
    // 0x561638: 0x0  nop
    ctx->pc = 0x561638u;
    // NOP
label_56163c:
    // 0x56163c: 0x0  nop
    ctx->pc = 0x56163cu;
    // NOP
label_561640:
    // 0x561640: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x561640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_561644:
    // 0x561644: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x561644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_561648:
    // 0x561648: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x561648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_56164c:
    // 0x56164c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x56164cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_561650:
    // 0x561650: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x561650u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_561654:
    // 0x561654: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
label_561658:
    if (ctx->pc == 0x561658u) {
        ctx->pc = 0x561658u;
            // 0x561658: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x56165Cu;
        goto label_56165c;
    }
    ctx->pc = 0x561654u;
    {
        const bool branch_taken_0x561654 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x561658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x561654u;
            // 0x561658: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x561654) {
            ctx->pc = 0x5616C0u;
            goto label_5616c0;
        }
    }
    ctx->pc = 0x56165Cu;
label_56165c:
    // 0x56165c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x56165cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_561660:
    // 0x561660: 0x24427dc0  addiu       $v0, $v0, 0x7DC0
    ctx->pc = 0x561660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32192));
label_561664:
    // 0x561664: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x561664u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_561668:
    // 0x561668: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x561668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_56166c:
    // 0x56166c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_561670:
    if (ctx->pc == 0x561670u) {
        ctx->pc = 0x561670u;
            // 0x561670: 0xae200058  sw          $zero, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
        ctx->pc = 0x561674u;
        goto label_561674;
    }
    ctx->pc = 0x56166Cu;
    {
        const bool branch_taken_0x56166c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x56166c) {
            ctx->pc = 0x561670u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x56166Cu;
            // 0x561670: 0xae200058  sw          $zero, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x561688u;
            goto label_561688;
        }
    }
    ctx->pc = 0x561674u;
label_561674:
    // 0x561674: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x561674u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_561678:
    // 0x561678: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x561678u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_56167c:
    // 0x56167c: 0x320f809  jalr        $t9
label_561680:
    if (ctx->pc == 0x561680u) {
        ctx->pc = 0x561680u;
            // 0x561680: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x561684u;
        goto label_561684;
    }
    ctx->pc = 0x56167Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x561684u);
        ctx->pc = 0x561680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56167Cu;
            // 0x561680: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x561684u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x561684u; }
            if (ctx->pc != 0x561684u) { return; }
        }
        }
    }
    ctx->pc = 0x561684u;
label_561684:
    // 0x561684: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x561684u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
label_561688:
    // 0x561688: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
label_56168c:
    if (ctx->pc == 0x56168Cu) {
        ctx->pc = 0x56168Cu;
            // 0x56168c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x561690u;
        goto label_561690;
    }
    ctx->pc = 0x561688u;
    {
        const bool branch_taken_0x561688 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x561688) {
            ctx->pc = 0x56168Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x561688u;
            // 0x56168c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5616ACu;
            goto label_5616ac;
        }
    }
    ctx->pc = 0x561690u;
label_561690:
    // 0x561690: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x561690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_561694:
    // 0x561694: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x561694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_561698:
    // 0x561698: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x561698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_56169c:
    // 0x56169c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x56169cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5616a0:
    // 0x5616a0: 0xc057a68  jal         func_15E9A0
label_5616a4:
    if (ctx->pc == 0x5616A4u) {
        ctx->pc = 0x5616A4u;
            // 0x5616a4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x5616A8u;
        goto label_5616a8;
    }
    ctx->pc = 0x5616A0u;
    SET_GPR_U32(ctx, 31, 0x5616A8u);
    ctx->pc = 0x5616A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5616A0u;
            // 0x5616a4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5616A8u; }
        if (ctx->pc != 0x5616A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5616A8u; }
        if (ctx->pc != 0x5616A8u) { return; }
    }
    ctx->pc = 0x5616A8u;
label_5616a8:
    // 0x5616a8: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x5616a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_5616ac:
    // 0x5616ac: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x5616acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_5616b0:
    // 0x5616b0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_5616b4:
    if (ctx->pc == 0x5616B4u) {
        ctx->pc = 0x5616B4u;
            // 0x5616b4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5616B8u;
        goto label_5616b8;
    }
    ctx->pc = 0x5616B0u;
    {
        const bool branch_taken_0x5616b0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x5616b0) {
            ctx->pc = 0x5616B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5616B0u;
            // 0x5616b4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5616C4u;
            goto label_5616c4;
        }
    }
    ctx->pc = 0x5616B8u;
label_5616b8:
    // 0x5616b8: 0xc0400a8  jal         func_1002A0
label_5616bc:
    if (ctx->pc == 0x5616BCu) {
        ctx->pc = 0x5616BCu;
            // 0x5616bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5616C0u;
        goto label_5616c0;
    }
    ctx->pc = 0x5616B8u;
    SET_GPR_U32(ctx, 31, 0x5616C0u);
    ctx->pc = 0x5616BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5616B8u;
            // 0x5616bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5616C0u; }
        if (ctx->pc != 0x5616C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5616C0u; }
        if (ctx->pc != 0x5616C0u) { return; }
    }
    ctx->pc = 0x5616C0u;
label_5616c0:
    // 0x5616c0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x5616c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5616c4:
    // 0x5616c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x5616c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_5616c8:
    // 0x5616c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5616c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5616cc:
    // 0x5616cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5616ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5616d0:
    // 0x5616d0: 0x3e00008  jr          $ra
label_5616d4:
    if (ctx->pc == 0x5616D4u) {
        ctx->pc = 0x5616D4u;
            // 0x5616d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x5616D8u;
        goto label_5616d8;
    }
    ctx->pc = 0x5616D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5616D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5616D0u;
            // 0x5616d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5616D8u;
label_5616d8:
    // 0x5616d8: 0x0  nop
    ctx->pc = 0x5616d8u;
    // NOP
label_5616dc:
    // 0x5616dc: 0x0  nop
    ctx->pc = 0x5616dcu;
    // NOP
label_5616e0:
    // 0x5616e0: 0x8158404  j           func_561010
label_5616e4:
    if (ctx->pc == 0x5616E4u) {
        ctx->pc = 0x5616E4u;
            // 0x5616e4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x5616E8u;
        goto label_5616e8;
    }
    ctx->pc = 0x5616E0u;
    ctx->pc = 0x5616E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5616E0u;
            // 0x5616e4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x561010u;
    {
        auto targetFn = runtime->lookupFunction(0x561010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x5616E8u;
label_5616e8:
    // 0x5616e8: 0x0  nop
    ctx->pc = 0x5616e8u;
    // NOP
label_5616ec:
    // 0x5616ec: 0x0  nop
    ctx->pc = 0x5616ecu;
    // NOP
label_5616f0:
    // 0x5616f0: 0x3e00008  jr          $ra
label_5616f4:
    if (ctx->pc == 0x5616F4u) {
        ctx->pc = 0x5616F8u;
        goto label_5616f8;
    }
    ctx->pc = 0x5616F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5616F8u;
label_5616f8:
    // 0x5616f8: 0x0  nop
    ctx->pc = 0x5616f8u;
    // NOP
label_5616fc:
    // 0x5616fc: 0x0  nop
    ctx->pc = 0x5616fcu;
    // NOP
label_561700:
    // 0x561700: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x561700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_561704:
    // 0x561704: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x561704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_561708:
    // 0x561708: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x561708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_56170c:
    // 0x56170c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x56170cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_561710:
    // 0x561710: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x561710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_561714:
    // 0x561714: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x561714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_561718:
    // 0x561718: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x561718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_56171c:
    // 0x56171c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x56171cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_561720:
    // 0x561720: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x561720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_561724:
    // 0x561724: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x561724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_561728:
    // 0x561728: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x561728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_56172c:
    // 0x56172c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x56172cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_561730:
    // 0x561730: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x561730u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_561734:
    // 0x561734: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x561734u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_561738:
    // 0x561738: 0x8c65d130  lw          $a1, -0x2ED0($v1)
    ctx->pc = 0x561738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_56173c:
    // 0x56173c: 0x8c840058  lw          $a0, 0x58($a0)
    ctx->pc = 0x56173cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_561740:
    // 0x561740: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x561740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_561744:
    // 0x561744: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_561748:
    if (ctx->pc == 0x561748u) {
        ctx->pc = 0x561748u;
            // 0x561748: 0x8cb40130  lw          $s4, 0x130($a1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
        ctx->pc = 0x56174Cu;
        goto label_56174c;
    }
    ctx->pc = 0x561744u;
    {
        const bool branch_taken_0x561744 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x561748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x561744u;
            // 0x561748: 0x8cb40130  lw          $s4, 0x130($a1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x561744) {
            ctx->pc = 0x561754u;
            goto label_561754;
        }
    }
    ctx->pc = 0x56174Cu;
label_56174c:
    // 0x56174c: 0x549400d4  bnel        $a0, $s4, . + 4 + (0xD4 << 2)
label_561750:
    if (ctx->pc == 0x561750u) {
        ctx->pc = 0x561750u;
            // 0x561750: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x561754u;
        goto label_561754;
    }
    ctx->pc = 0x56174Cu;
    {
        const bool branch_taken_0x56174c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 20));
        if (branch_taken_0x56174c) {
            ctx->pc = 0x561750u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x56174Cu;
            // 0x561750: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x561AA0u;
            goto label_561aa0;
        }
    }
    ctx->pc = 0x561754u;
label_561754:
    // 0x561754: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x561754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_561758:
    // 0x561758: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x561758u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_56175c:
    // 0x56175c: 0x8c5289e0  lw          $s2, -0x7620($v0)
    ctx->pc = 0x56175cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_561760:
    // 0x561760: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x561760u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
label_561764:
    // 0x561764: 0x8c7189f0  lw          $s1, -0x7610($v1)
    ctx->pc = 0x561764u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937072)));
label_561768:
    // 0x561768: 0x3c130067  lui         $s3, 0x67
    ctx->pc = 0x561768u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)103 << 16));
label_56176c:
    // 0x56176c: 0x8ea6005c  lw          $a2, 0x5C($s5)
    ctx->pc = 0x56176cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 92)));
label_561770:
    // 0x561770: 0x3c160067  lui         $s6, 0x67
    ctx->pc = 0x561770u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)103 << 16));
label_561774:
    // 0x561774: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x561774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_561778:
    // 0x561778: 0x24a5dcc0  addiu       $a1, $a1, -0x2340
    ctx->pc = 0x561778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958272));
label_56177c:
    // 0x56177c: 0x8c43d120  lw          $v1, -0x2EE0($v0)
    ctx->pc = 0x56177cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_561780:
    // 0x561780: 0x144080  sll         $t0, $s4, 2
    ctx->pc = 0x561780u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_561784:
    // 0x561784: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x561784u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_561788:
    // 0x561788: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x561788u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_56178c:
    // 0x56178c: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x56178cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_561790:
    // 0x561790: 0x2673f950  addiu       $s3, $s3, -0x6B0
    ctx->pc = 0x561790u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294965584));
label_561794:
    // 0x561794: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x561794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_561798:
    // 0x561798: 0x8c670010  lw          $a3, 0x10($v1)
    ctx->pc = 0x561798u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_56179c:
    // 0x56179c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x56179cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_5617a0:
    // 0x5617a0: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x5617a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_5617a4:
    // 0x5617a4: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x5617a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_5617a8:
    // 0x5617a8: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x5617a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_5617ac:
    // 0x5617ac: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x5617acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_5617b0:
    // 0x5617b0: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x5617b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_5617b4:
    // 0x5617b4: 0x8042007a  lb          $v0, 0x7A($v0)
    ctx->pc = 0x5617b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 122)));
label_5617b8:
    // 0x5617b8: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x5617b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_5617bc:
    // 0x5617bc: 0x8cf00000  lw          $s0, 0x0($a3)
    ctx->pc = 0x5617bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_5617c0:
    // 0x5617c0: 0x2463f98c  addiu       $v1, $v1, -0x674
    ctx->pc = 0x5617c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965644));
label_5617c4:
    // 0x5617c4: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x5617c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5617c8:
    // 0x5617c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x5617c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5617cc:
    // 0x5617cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x5617ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_5617d0:
    // 0x5617d0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x5617d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_5617d4:
    // 0x5617d4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x5617d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_5617d8:
    // 0x5617d8: 0x26d6f8e0  addiu       $s6, $s6, -0x720
    ctx->pc = 0x5617d8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294965472));
label_5617dc:
    // 0x5617dc: 0xe7a200c0  swc1        $f2, 0xC0($sp)
    ctx->pc = 0x5617dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_5617e0:
    // 0x5617e0: 0x26170200  addiu       $s7, $s0, 0x200
    ctx->pc = 0x5617e0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
label_5617e4:
    // 0x5617e4: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x5617e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5617e8:
    // 0x5617e8: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x5617e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_5617ec:
    // 0x5617ec: 0xc4550000  lwc1        $f21, 0x0($v0)
    ctx->pc = 0x5617ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_5617f0:
    // 0x5617f0: 0x320f809  jalr        $t9
label_5617f4:
    if (ctx->pc == 0x5617F4u) {
        ctx->pc = 0x5617F4u;
            // 0x5617f4: 0xe7a000c8  swc1        $f0, 0xC8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
        ctx->pc = 0x5617F8u;
        goto label_5617f8;
    }
    ctx->pc = 0x5617F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5617F8u);
        ctx->pc = 0x5617F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5617F0u;
            // 0x5617f4: 0xe7a000c8  swc1        $f0, 0xC8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5617F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5617F8u; }
            if (ctx->pc != 0x5617F8u) { return; }
        }
        }
    }
    ctx->pc = 0x5617F8u;
label_5617f8:
    // 0x5617f8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x5617f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_5617fc:
    // 0x5617fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x5617fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_561800:
    // 0x561800: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x561800u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_561804:
    // 0x561804: 0x320f809  jalr        $t9
label_561808:
    if (ctx->pc == 0x561808u) {
        ctx->pc = 0x561808u;
            // 0x561808: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x56180Cu;
        goto label_56180c;
    }
    ctx->pc = 0x561804u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x56180Cu);
        ctx->pc = 0x561808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x561804u;
            // 0x561808: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x56180Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x56180Cu; }
            if (ctx->pc != 0x56180Cu) { return; }
        }
        }
    }
    ctx->pc = 0x56180Cu;
label_56180c:
    // 0x56180c: 0x8ea20054  lw          $v0, 0x54($s5)
    ctx->pc = 0x56180cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_561810:
    // 0x561810: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x561810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_561814:
    // 0x561814: 0xc44d0004  lwc1        $f13, 0x4($v0)
    ctx->pc = 0x561814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_561818:
    // 0x561818: 0xc44e0008  lwc1        $f14, 0x8($v0)
    ctx->pc = 0x561818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_56181c:
    // 0x56181c: 0xc04cbd8  jal         func_132F60
label_561820:
    if (ctx->pc == 0x561820u) {
        ctx->pc = 0x561820u;
            // 0x561820: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x561824u;
        goto label_561824;
    }
    ctx->pc = 0x56181Cu;
    SET_GPR_U32(ctx, 31, 0x561824u);
    ctx->pc = 0x561820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56181Cu;
            // 0x561820: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561824u; }
        if (ctx->pc != 0x561824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561824u; }
        if (ctx->pc != 0x561824u) { return; }
    }
    ctx->pc = 0x561824u;
label_561824:
    // 0x561824: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x561824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_561828:
    // 0x561828: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x561828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_56182c:
    // 0x56182c: 0xc075094  jal         func_1D4250
label_561830:
    if (ctx->pc == 0x561830u) {
        ctx->pc = 0x561830u;
            // 0x561830: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x561834u;
        goto label_561834;
    }
    ctx->pc = 0x56182Cu;
    SET_GPR_U32(ctx, 31, 0x561834u);
    ctx->pc = 0x561830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56182Cu;
            // 0x561830: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4250u;
    if (runtime->hasFunction(0x1D4250u)) {
        auto targetFn = runtime->lookupFunction(0x1D4250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561834u; }
        if (ctx->pc != 0x561834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4250_0x1d4250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561834u; }
        if (ctx->pc != 0x561834u) { return; }
    }
    ctx->pc = 0x561834u;
label_561834:
    // 0x561834: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x561834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_561838:
    // 0x561838: 0xc440c058  lwc1        $f0, -0x3FA8($v0)
    ctx->pc = 0x561838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294951000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_56183c:
    // 0x56183c: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x56183cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_561840:
    // 0x561840: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x561840u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_561844:
    // 0x561844: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_561848:
    if (ctx->pc == 0x561848u) {
        ctx->pc = 0x561848u;
            // 0x561848: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x56184Cu;
        goto label_56184c;
    }
    ctx->pc = 0x561844u;
    {
        const bool branch_taken_0x561844 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x561848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x561844u;
            // 0x561848: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x561844) {
            ctx->pc = 0x561850u;
            goto label_561850;
        }
    }
    ctx->pc = 0x56184Cu;
label_56184c:
    // 0x56184c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x56184cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_561850:
    // 0x561850: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x561850u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_561854:
    // 0x561854: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x561854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_561858:
    // 0x561858: 0xc440c060  lwc1        $f0, -0x3FA0($v0)
    ctx->pc = 0x561858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294951008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_56185c:
    // 0x56185c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x56185cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_561860:
    // 0x561860: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_561864:
    if (ctx->pc == 0x561864u) {
        ctx->pc = 0x561864u;
            // 0x561864: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x561868u;
        goto label_561868;
    }
    ctx->pc = 0x561860u;
    {
        const bool branch_taken_0x561860 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x561864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x561860u;
            // 0x561864: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x561860) {
            ctx->pc = 0x56186Cu;
            goto label_56186c;
        }
    }
    ctx->pc = 0x561868u;
label_561868:
    // 0x561868: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x561868u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_56186c:
    // 0x56186c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x56186cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_561870:
    // 0x561870: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x561870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_561874:
    // 0x561874: 0x50400080  beql        $v0, $zero, . + 4 + (0x80 << 2)
label_561878:
    if (ctx->pc == 0x561878u) {
        ctx->pc = 0x561878u;
            // 0x561878: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x56187Cu;
        goto label_56187c;
    }
    ctx->pc = 0x561874u;
    {
        const bool branch_taken_0x561874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x561874) {
            ctx->pc = 0x561878u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x561874u;
            // 0x561878: 0x8e390000  lw          $t9, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x561A78u;
            goto label_561a78;
        }
    }
    ctx->pc = 0x56187Cu;
label_56187c:
    // 0x56187c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x56187cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_561880:
    // 0x561880: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x561880u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_561884:
    // 0x561884: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x561884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_561888:
    // 0x561888: 0x27a500cc  addiu       $a1, $sp, 0xCC
    ctx->pc = 0x561888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
label_56188c:
    // 0x56188c: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x56188cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_561890:
    // 0x561890: 0x320f809  jalr        $t9
label_561894:
    if (ctx->pc == 0x561894u) {
        ctx->pc = 0x561894u;
            // 0x561894: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x561898u;
        goto label_561898;
    }
    ctx->pc = 0x561890u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x561898u);
        ctx->pc = 0x561894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x561890u;
            // 0x561894: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x561898u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x561898u; }
            if (ctx->pc != 0x561898u) { return; }
        }
        }
    }
    ctx->pc = 0x561898u;
label_561898:
    // 0x561898: 0x87b400cc  lh          $s4, 0xCC($sp)
    ctx->pc = 0x561898u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 204)));
label_56189c:
    // 0x56189c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x56189cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_5618a0:
    // 0x5618a0: 0x87b000ce  lh          $s0, 0xCE($sp)
    ctx->pc = 0x5618a0u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 206)));
label_5618a4:
    // 0x5618a4: 0xc04cc1c  jal         func_133070
label_5618a8:
    if (ctx->pc == 0x5618A8u) {
        ctx->pc = 0x5618A8u;
            // 0x5618a8: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x5618ACu;
        goto label_5618ac;
    }
    ctx->pc = 0x5618A4u;
    SET_GPR_U32(ctx, 31, 0x5618ACu);
    ctx->pc = 0x5618A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5618A4u;
            // 0x5618a8: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5618ACu; }
        if (ctx->pc != 0x5618ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5618ACu; }
        if (ctx->pc != 0x5618ACu) { return; }
    }
    ctx->pc = 0x5618ACu;
label_5618ac:
    // 0x5618ac: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x5618acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_5618b0:
    // 0x5618b0: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x5618b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_5618b4:
    // 0x5618b4: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x5618b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_5618b8:
    // 0x5618b8: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x5618b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_5618bc:
    // 0x5618bc: 0x1a80006d  blez        $s4, . + 4 + (0x6D << 2)
label_5618c0:
    if (ctx->pc == 0x5618C0u) {
        ctx->pc = 0x5618C0u;
            // 0x5618c0: 0x46000507  neg.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_NEG_S(ctx->f[0]);
        ctx->pc = 0x5618C4u;
        goto label_5618c4;
    }
    ctx->pc = 0x5618BCu;
    {
        const bool branch_taken_0x5618bc = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x5618C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5618BCu;
            // 0x5618c0: 0x46000507  neg.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x5618bc) {
            ctx->pc = 0x561A74u;
            goto label_561a74;
        }
    }
    ctx->pc = 0x5618C4u;
label_5618c4:
    // 0x5618c4: 0x283082a  slt         $at, $s4, $v1
    ctx->pc = 0x5618c4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_5618c8:
    // 0x5618c8: 0x1020006a  beqz        $at, . + 4 + (0x6A << 2)
label_5618cc:
    if (ctx->pc == 0x5618CCu) {
        ctx->pc = 0x5618D0u;
        goto label_5618d0;
    }
    ctx->pc = 0x5618C8u;
    {
        const bool branch_taken_0x5618c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x5618c8) {
            ctx->pc = 0x561A74u;
            goto label_561a74;
        }
    }
    ctx->pc = 0x5618D0u;
label_5618d0:
    // 0x5618d0: 0x1a000068  blez        $s0, . + 4 + (0x68 << 2)
label_5618d4:
    if (ctx->pc == 0x5618D4u) {
        ctx->pc = 0x5618D8u;
        goto label_5618d8;
    }
    ctx->pc = 0x5618D0u;
    {
        const bool branch_taken_0x5618d0 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x5618d0) {
            ctx->pc = 0x561A74u;
            goto label_561a74;
        }
    }
    ctx->pc = 0x5618D8u;
label_5618d8:
    // 0x5618d8: 0x202082a  slt         $at, $s0, $v0
    ctx->pc = 0x5618d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_5618dc:
    // 0x5618dc: 0x10200065  beqz        $at, . + 4 + (0x65 << 2)
label_5618e0:
    if (ctx->pc == 0x5618E0u) {
        ctx->pc = 0x5618E4u;
        goto label_5618e4;
    }
    ctx->pc = 0x5618DCu;
    {
        const bool branch_taken_0x5618dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x5618dc) {
            ctx->pc = 0x561A74u;
            goto label_561a74;
        }
    }
    ctx->pc = 0x5618E4u;
label_5618e4:
    // 0x5618e4: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x5618e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_5618e8:
    // 0x5618e8: 0x8c44aad0  lw          $a0, -0x5530($v0)
    ctx->pc = 0x5618e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945488)));
label_5618ec:
    // 0x5618ec: 0xc0506ac  jal         func_141AB0
label_5618f0:
    if (ctx->pc == 0x5618F0u) {
        ctx->pc = 0x5618F0u;
            // 0x5618f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5618F4u;
        goto label_5618f4;
    }
    ctx->pc = 0x5618ECu;
    SET_GPR_U32(ctx, 31, 0x5618F4u);
    ctx->pc = 0x5618F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5618ECu;
            // 0x5618f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5618F4u; }
        if (ctx->pc != 0x5618F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5618F4u; }
        if (ctx->pc != 0x5618F4u) { return; }
    }
    ctx->pc = 0x5618F4u;
label_5618f4:
    // 0x5618f4: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x5618f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_5618f8:
    // 0x5618f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x5618f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_5618fc:
    // 0x5618fc: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x5618fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_561900:
    // 0x561900: 0x320f809  jalr        $t9
label_561904:
    if (ctx->pc == 0x561904u) {
        ctx->pc = 0x561904u;
            // 0x561904: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x561908u;
        goto label_561908;
    }
    ctx->pc = 0x561900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x561908u);
        ctx->pc = 0x561904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x561900u;
            // 0x561904: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x561908u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x561908u; }
            if (ctx->pc != 0x561908u) { return; }
        }
        }
    }
    ctx->pc = 0x561908u;
label_561908:
    // 0x561908: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x561908u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_56190c:
    // 0x56190c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x56190cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_561910:
    // 0x561910: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x561910u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_561914:
    // 0x561914: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x561914u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_561918:
    // 0x561918: 0x0  nop
    ctx->pc = 0x561918u;
    // NOP
label_56191c:
    // 0x56191c: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x56191cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_561920:
    // 0x561920: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x561920u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_561924:
    // 0x561924: 0xc6660008  lwc1        $f6, 0x8($s3)
    ctx->pc = 0x561924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_561928:
    // 0x561928: 0x460f1018  adda.s      $f2, $f15
    ctx->pc = 0x561928u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[15]);
label_56192c:
    // 0x56192c: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x56192cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_561930:
    // 0x561930: 0x46153082  mul.s       $f2, $f6, $f21
    ctx->pc = 0x561930u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[21]);
label_561934:
    // 0x561934: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x561934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_561938:
    // 0x561938: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x561938u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_56193c:
    // 0x56193c: 0xc663000c  lwc1        $f3, 0xC($s3)
    ctx->pc = 0x56193cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_561940:
    // 0x561940: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x561940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_561944:
    // 0x561944: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x561944u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_561948:
    // 0x561948: 0x46022301  sub.s       $f12, $f4, $f2
    ctx->pc = 0x561948u;
    ctx->f[12] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
label_56194c:
    // 0x56194c: 0x46022380  add.s       $f14, $f4, $f2
    ctx->pc = 0x56194cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
label_561950:
    // 0x561950: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x561950u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_561954:
    // 0x561954: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_561958:
    if (ctx->pc == 0x561958u) {
        ctx->pc = 0x561958u;
            // 0x561958: 0x46151b5d  msub.s      $f13, $f3, $f21 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[21]));
        ctx->pc = 0x56195Cu;
        goto label_56195c;
    }
    ctx->pc = 0x561954u;
    {
        const bool branch_taken_0x561954 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x561958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x561954u;
            // 0x561958: 0x46151b5d  msub.s      $f13, $f3, $f21 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[21]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x561954) {
            ctx->pc = 0x56196Cu;
            goto label_56196c;
        }
    }
    ctx->pc = 0x56195Cu;
label_56195c:
    // 0x56195c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x56195cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_561960:
    // 0x561960: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x561960u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_561964:
    // 0x561964: 0x10000008  b           . + 4 + (0x8 << 2)
label_561968:
    if (ctx->pc == 0x561968u) {
        ctx->pc = 0x561968u;
            // 0x561968: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x56196Cu;
        goto label_56196c;
    }
    ctx->pc = 0x561964u;
    {
        const bool branch_taken_0x561964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x561968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x561964u;
            // 0x561968: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x561964) {
            ctx->pc = 0x561988u;
            goto label_561988;
        }
    }
    ctx->pc = 0x56196Cu;
label_56196c:
    // 0x56196c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x56196cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_561970:
    // 0x561970: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x561970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_561974:
    // 0x561974: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x561974u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_561978:
    // 0x561978: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x561978u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_56197c:
    // 0x56197c: 0x0  nop
    ctx->pc = 0x56197cu;
    // NOP
label_561980:
    // 0x561980: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x561980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_561984:
    // 0x561984: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x561984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_561988:
    // 0x561988: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x561988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_56198c:
    // 0x56198c: 0x22600  sll         $a0, $v0, 24
    ctx->pc = 0x56198cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_561990:
    // 0x561990: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x561990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_561994:
    // 0x561994: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x561994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_561998:
    // 0x561998: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x561998u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_56199c:
    // 0x56199c: 0x0  nop
    ctx->pc = 0x56199cu;
    // NOP
label_5619a0:
    // 0x5619a0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x5619a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_5619a4:
    // 0x5619a4: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_5619a8:
    if (ctx->pc == 0x5619A8u) {
        ctx->pc = 0x5619A8u;
            // 0x5619a8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x5619ACu;
        goto label_5619ac;
    }
    ctx->pc = 0x5619A4u;
    {
        const bool branch_taken_0x5619a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x5619a4) {
            ctx->pc = 0x5619A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5619A4u;
            // 0x5619a8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x5619BCu;
            goto label_5619bc;
        }
    }
    ctx->pc = 0x5619ACu;
label_5619ac:
    // 0x5619ac: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x5619acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_5619b0:
    // 0x5619b0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x5619b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_5619b4:
    // 0x5619b4: 0x10000007  b           . + 4 + (0x7 << 2)
label_5619b8:
    if (ctx->pc == 0x5619B8u) {
        ctx->pc = 0x5619B8u;
            // 0x5619b8: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x5619BCu;
        goto label_5619bc;
    }
    ctx->pc = 0x5619B4u;
    {
        const bool branch_taken_0x5619b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5619B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5619B4u;
            // 0x5619b8: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x5619b4) {
            ctx->pc = 0x5619D4u;
            goto label_5619d4;
        }
    }
    ctx->pc = 0x5619BCu;
label_5619bc:
    // 0x5619bc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x5619bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_5619c0:
    // 0x5619c0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x5619c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_5619c4:
    // 0x5619c4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x5619c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_5619c8:
    // 0x5619c8: 0x0  nop
    ctx->pc = 0x5619c8u;
    // NOP
label_5619cc:
    // 0x5619cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x5619ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_5619d0:
    // 0x5619d0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x5619d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_5619d4:
    // 0x5619d4: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x5619d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_5619d8:
    // 0x5619d8: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x5619d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_5619dc:
    // 0x5619dc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x5619dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_5619e0:
    // 0x5619e0: 0xc7a100c8  lwc1        $f1, 0xC8($sp)
    ctx->pc = 0x5619e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5619e4:
    // 0x5619e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x5619e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5619e8:
    // 0x5619e8: 0x0  nop
    ctx->pc = 0x5619e8u;
    // NOP
label_5619ec:
    // 0x5619ec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x5619ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_5619f0:
    // 0x5619f0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_5619f4:
    if (ctx->pc == 0x5619F4u) {
        ctx->pc = 0x5619F4u;
            // 0x5619f4: 0x832025  or          $a0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->pc = 0x5619F8u;
        goto label_5619f8;
    }
    ctx->pc = 0x5619F0u;
    {
        const bool branch_taken_0x5619f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x5619F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5619F0u;
            // 0x5619f4: 0x832025  or          $a0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5619f0) {
            ctx->pc = 0x561A08u;
            goto label_561a08;
        }
    }
    ctx->pc = 0x5619F8u;
label_5619f8:
    // 0x5619f8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x5619f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_5619fc:
    // 0x5619fc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x5619fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_561a00:
    // 0x561a00: 0x10000008  b           . + 4 + (0x8 << 2)
label_561a04:
    if (ctx->pc == 0x561A04u) {
        ctx->pc = 0x561A04u;
            // 0x561a04: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x561A08u;
        goto label_561a08;
    }
    ctx->pc = 0x561A00u;
    {
        const bool branch_taken_0x561a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x561A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x561A00u;
            // 0x561a04: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x561a00) {
            ctx->pc = 0x561A24u;
            goto label_561a24;
        }
    }
    ctx->pc = 0x561A08u;
label_561a08:
    // 0x561a08: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x561a08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_561a0c:
    // 0x561a0c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x561a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_561a10:
    // 0x561a10: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x561a10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_561a14:
    // 0x561a14: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x561a14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_561a18:
    // 0x561a18: 0x0  nop
    ctx->pc = 0x561a18u;
    // NOP
label_561a1c:
    // 0x561a1c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x561a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_561a20:
    // 0x561a20: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x561a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_561a24:
    // 0x561a24: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x561a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_561a28:
    // 0x561a28: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x561a28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_561a2c:
    // 0x561a2c: 0x86c30000  lh          $v1, 0x0($s6)
    ctx->pc = 0x561a2cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 0)));
label_561a30:
    // 0x561a30: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x561a30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_561a34:
    // 0x561a34: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x561a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_561a38:
    // 0x561a38: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x561a38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_561a3c:
    // 0x561a3c: 0x344600ff  ori         $a2, $v0, 0xFF
    ctx->pc = 0x561a3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
label_561a40:
    // 0x561a40: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x561a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_561a44:
    // 0x561a44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x561a44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_561a48:
    // 0x561a48: 0x86c20002  lh          $v0, 0x2($s6)
    ctx->pc = 0x561a48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 2)));
label_561a4c:
    // 0x561a4c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x561a4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_561a50:
    // 0x561a50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x561a50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_561a54:
    // 0x561a54: 0x0  nop
    ctx->pc = 0x561a54u;
    // NOP
label_561a58:
    // 0x561a58: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x561a58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_561a5c:
    // 0x561a5c: 0xc0bc284  jal         func_2F0A10
label_561a60:
    if (ctx->pc == 0x561A60u) {
        ctx->pc = 0x561A60u;
            // 0x561a60: 0x4600a486  mov.s       $f18, $f20 (Delay Slot)
        ctx->f[18] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x561A64u;
        goto label_561a64;
    }
    ctx->pc = 0x561A5Cu;
    SET_GPR_U32(ctx, 31, 0x561A64u);
    ctx->pc = 0x561A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x561A5Cu;
            // 0x561a60: 0x4600a486  mov.s       $f18, $f20 (Delay Slot)
        ctx->f[18] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561A64u; }
        if (ctx->pc != 0x561A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561A64u; }
        if (ctx->pc != 0x561A64u) { return; }
    }
    ctx->pc = 0x561A64u;
label_561a64:
    // 0x561a64: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x561a64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_561a68:
    // 0x561a68: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x561a68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_561a6c:
    // 0x561a6c: 0x320f809  jalr        $t9
label_561a70:
    if (ctx->pc == 0x561A70u) {
        ctx->pc = 0x561A70u;
            // 0x561a70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x561A74u;
        goto label_561a74;
    }
    ctx->pc = 0x561A6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x561A74u);
        ctx->pc = 0x561A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x561A6Cu;
            // 0x561a70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x561A74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x561A74u; }
            if (ctx->pc != 0x561A74u) { return; }
        }
        }
    }
    ctx->pc = 0x561A74u;
label_561a74:
    // 0x561a74: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x561a74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_561a78:
    // 0x561a78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x561a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_561a7c:
    // 0x561a7c: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x561a7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_561a80:
    // 0x561a80: 0x320f809  jalr        $t9
label_561a84:
    if (ctx->pc == 0x561A84u) {
        ctx->pc = 0x561A84u;
            // 0x561a84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x561A88u;
        goto label_561a88;
    }
    ctx->pc = 0x561A80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x561A88u);
        ctx->pc = 0x561A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x561A80u;
            // 0x561a84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x561A88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x561A88u; }
            if (ctx->pc != 0x561A88u) { return; }
        }
        }
    }
    ctx->pc = 0x561A88u;
label_561a88:
    // 0x561a88: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x561a88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_561a8c:
    // 0x561a8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x561a8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_561a90:
    // 0x561a90: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x561a90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_561a94:
    // 0x561a94: 0x320f809  jalr        $t9
label_561a98:
    if (ctx->pc == 0x561A98u) {
        ctx->pc = 0x561A98u;
            // 0x561a98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x561A9Cu;
        goto label_561a9c;
    }
    ctx->pc = 0x561A94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x561A9Cu);
        ctx->pc = 0x561A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x561A94u;
            // 0x561a98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x561A9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x561A9Cu; }
            if (ctx->pc != 0x561A9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x561A9Cu;
label_561a9c:
    // 0x561a9c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x561a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_561aa0:
    // 0x561aa0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x561aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_561aa4:
    // 0x561aa4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x561aa4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_561aa8:
    // 0x561aa8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x561aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_561aac:
    // 0x561aac: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x561aacu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_561ab0:
    // 0x561ab0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x561ab0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_561ab4:
    // 0x561ab4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x561ab4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_561ab8:
    // 0x561ab8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x561ab8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_561abc:
    // 0x561abc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x561abcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_561ac0:
    // 0x561ac0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x561ac0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_561ac4:
    // 0x561ac4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x561ac4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_561ac8:
    // 0x561ac8: 0x3e00008  jr          $ra
label_561acc:
    if (ctx->pc == 0x561ACCu) {
        ctx->pc = 0x561ACCu;
            // 0x561acc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x561AD0u;
        goto label_561ad0;
    }
    ctx->pc = 0x561AC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x561ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x561AC8u;
            // 0x561acc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x561AD0u;
label_561ad0:
    // 0x561ad0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x561ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_561ad4:
    // 0x561ad4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x561ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_561ad8:
    // 0x561ad8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x561ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_561adc:
    // 0x561adc: 0x90860010  lbu         $a2, 0x10($a0)
    ctx->pc = 0x561adcu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_561ae0:
    // 0x561ae0: 0x10c30015  beq         $a2, $v1, . + 4 + (0x15 << 2)
label_561ae4:
    if (ctx->pc == 0x561AE4u) {
        ctx->pc = 0x561AE4u;
            // 0x561ae4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x561AE8u;
        goto label_561ae8;
    }
    ctx->pc = 0x561AE0u;
    {
        const bool branch_taken_0x561ae0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x561AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x561AE0u;
            // 0x561ae4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x561ae0) {
            ctx->pc = 0x561B38u;
            goto label_561b38;
        }
    }
    ctx->pc = 0x561AE8u;
label_561ae8:
    // 0x561ae8: 0x50c0000e  beql        $a2, $zero, . + 4 + (0xE << 2)
label_561aec:
    if (ctx->pc == 0x561AECu) {
        ctx->pc = 0x561AECu;
            // 0x561aec: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x561AF0u;
        goto label_561af0;
    }
    ctx->pc = 0x561AE8u;
    {
        const bool branch_taken_0x561ae8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x561ae8) {
            ctx->pc = 0x561AECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x561AE8u;
            // 0x561aec: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x561B24u;
            goto label_561b24;
        }
    }
    ctx->pc = 0x561AF0u;
label_561af0:
    // 0x561af0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x561af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_561af4:
    // 0x561af4: 0x50c30015  beql        $a2, $v1, . + 4 + (0x15 << 2)
label_561af8:
    if (ctx->pc == 0x561AF8u) {
        ctx->pc = 0x561AF8u;
            // 0x561af8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x561AFCu;
        goto label_561afc;
    }
    ctx->pc = 0x561AF4u;
    {
        const bool branch_taken_0x561af4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x561af4) {
            ctx->pc = 0x561AF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x561AF4u;
            // 0x561af8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x561B4Cu;
            goto label_561b4c;
        }
    }
    ctx->pc = 0x561AFCu;
label_561afc:
    // 0x561afc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x561afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_561b00:
    // 0x561b00: 0x50c30003  beql        $a2, $v1, . + 4 + (0x3 << 2)
label_561b04:
    if (ctx->pc == 0x561B04u) {
        ctx->pc = 0x561B04u;
            // 0x561b04: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x561B08u;
        goto label_561b08;
    }
    ctx->pc = 0x561B00u;
    {
        const bool branch_taken_0x561b00 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x561b00) {
            ctx->pc = 0x561B04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x561B00u;
            // 0x561b04: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x561B10u;
            goto label_561b10;
        }
    }
    ctx->pc = 0x561B08u;
label_561b08:
    // 0x561b08: 0x1000000f  b           . + 4 + (0xF << 2)
label_561b0c:
    if (ctx->pc == 0x561B0Cu) {
        ctx->pc = 0x561B10u;
        goto label_561b10;
    }
    ctx->pc = 0x561B08u;
    {
        const bool branch_taken_0x561b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x561b08) {
            ctx->pc = 0x561B48u;
            goto label_561b48;
        }
    }
    ctx->pc = 0x561B10u;
label_561b10:
    // 0x561b10: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x561b10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_561b14:
    // 0x561b14: 0x320f809  jalr        $t9
label_561b18:
    if (ctx->pc == 0x561B18u) {
        ctx->pc = 0x561B1Cu;
        goto label_561b1c;
    }
    ctx->pc = 0x561B14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x561B1Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x561B1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x561B1Cu; }
            if (ctx->pc != 0x561B1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x561B1Cu;
label_561b1c:
    // 0x561b1c: 0x1000000a  b           . + 4 + (0xA << 2)
label_561b20:
    if (ctx->pc == 0x561B20u) {
        ctx->pc = 0x561B24u;
        goto label_561b24;
    }
    ctx->pc = 0x561B1Cu;
    {
        const bool branch_taken_0x561b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x561b1c) {
            ctx->pc = 0x561B48u;
            goto label_561b48;
        }
    }
    ctx->pc = 0x561B24u;
label_561b24:
    // 0x561b24: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x561b24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_561b28:
    // 0x561b28: 0x320f809  jalr        $t9
label_561b2c:
    if (ctx->pc == 0x561B2Cu) {
        ctx->pc = 0x561B30u;
        goto label_561b30;
    }
    ctx->pc = 0x561B28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x561B30u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x561B30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x561B30u; }
            if (ctx->pc != 0x561B30u) { return; }
        }
        }
    }
    ctx->pc = 0x561B30u;
label_561b30:
    // 0x561b30: 0x10000005  b           . + 4 + (0x5 << 2)
label_561b34:
    if (ctx->pc == 0x561B34u) {
        ctx->pc = 0x561B38u;
        goto label_561b38;
    }
    ctx->pc = 0x561B30u;
    {
        const bool branch_taken_0x561b30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x561b30) {
            ctx->pc = 0x561B48u;
            goto label_561b48;
        }
    }
    ctx->pc = 0x561B38u;
label_561b38:
    // 0x561b38: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x561b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_561b3c:
    // 0x561b3c: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x561b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_561b40:
    // 0x561b40: 0xc057b7c  jal         func_15EDF0
label_561b44:
    if (ctx->pc == 0x561B44u) {
        ctx->pc = 0x561B44u;
            // 0x561b44: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x561B48u;
        goto label_561b48;
    }
    ctx->pc = 0x561B40u;
    SET_GPR_U32(ctx, 31, 0x561B48u);
    ctx->pc = 0x561B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x561B40u;
            // 0x561b44: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561B48u; }
        if (ctx->pc != 0x561B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561B48u; }
        if (ctx->pc != 0x561B48u) { return; }
    }
    ctx->pc = 0x561B48u;
label_561b48:
    // 0x561b48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x561b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_561b4c:
    // 0x561b4c: 0x3e00008  jr          $ra
label_561b50:
    if (ctx->pc == 0x561B50u) {
        ctx->pc = 0x561B50u;
            // 0x561b50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x561B54u;
        goto label_561b54;
    }
    ctx->pc = 0x561B4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x561B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x561B4Cu;
            // 0x561b50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x561B54u;
label_561b54:
    // 0x561b54: 0x0  nop
    ctx->pc = 0x561b54u;
    // NOP
label_561b58:
    // 0x561b58: 0x0  nop
    ctx->pc = 0x561b58u;
    // NOP
label_561b5c:
    // 0x561b5c: 0x0  nop
    ctx->pc = 0x561b5cu;
    // NOP
label_561b60:
    // 0x561b60: 0x3e00008  jr          $ra
label_561b64:
    if (ctx->pc == 0x561B64u) {
        ctx->pc = 0x561B68u;
        goto label_561b68;
    }
    ctx->pc = 0x561B60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x561B68u;
label_561b68:
    // 0x561b68: 0x0  nop
    ctx->pc = 0x561b68u;
    // NOP
label_561b6c:
    // 0x561b6c: 0x0  nop
    ctx->pc = 0x561b6cu;
    // NOP
label_561b70:
    // 0x561b70: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x561b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_561b74:
    // 0x561b74: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x561b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_561b78:
    // 0x561b78: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x561b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_561b7c:
    // 0x561b7c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x561b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_561b80:
    // 0x561b80: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x561b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_561b84:
    // 0x561b84: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x561b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_561b88:
    // 0x561b88: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x561b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_561b8c:
    // 0x561b8c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x561b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_561b90:
    // 0x561b90: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x561b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_561b94:
    // 0x561b94: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x561b94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_561b98:
    // 0x561b98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x561b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_561b9c:
    // 0x561b9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x561b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_561ba0:
    // 0x561ba0: 0x8c840058  lw          $a0, 0x58($a0)
    ctx->pc = 0x561ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_561ba4:
    // 0x561ba4: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_561ba8:
    if (ctx->pc == 0x561BA8u) {
        ctx->pc = 0x561BACu;
        goto label_561bac;
    }
    ctx->pc = 0x561BA4u;
    {
        const bool branch_taken_0x561ba4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x561ba4) {
            ctx->pc = 0x561BC0u;
            goto label_561bc0;
        }
    }
    ctx->pc = 0x561BACu;
label_561bac:
    // 0x561bac: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x561bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_561bb0:
    // 0x561bb0: 0x8c63d130  lw          $v1, -0x2ED0($v1)
    ctx->pc = 0x561bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_561bb4:
    // 0x561bb4: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x561bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_561bb8:
    // 0x561bb8: 0x148300d5  bne         $a0, $v1, . + 4 + (0xD5 << 2)
label_561bbc:
    if (ctx->pc == 0x561BBCu) {
        ctx->pc = 0x561BC0u;
        goto label_561bc0;
    }
    ctx->pc = 0x561BB8u;
    {
        const bool branch_taken_0x561bb8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x561bb8) {
            ctx->pc = 0x561F10u;
            goto label_561f10;
        }
    }
    ctx->pc = 0x561BC0u;
label_561bc0:
    // 0x561bc0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x561bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_561bc4:
    // 0x561bc4: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x561bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_561bc8:
    // 0x561bc8: 0x8c45d130  lw          $a1, -0x2ED0($v0)
    ctx->pc = 0x561bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_561bcc:
    // 0x561bcc: 0x3c0c0063  lui         $t4, 0x63
    ctx->pc = 0x561bccu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)99 << 16));
label_561bd0:
    // 0x561bd0: 0x8c64d120  lw          $a0, -0x2EE0($v1)
    ctx->pc = 0x561bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_561bd4:
    // 0x561bd4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x561bd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_561bd8:
    // 0x561bd8: 0x27a60168  addiu       $a2, $sp, 0x168
    ctx->pc = 0x561bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
label_561bdc:
    // 0x561bdc: 0x258cdda0  addiu       $t4, $t4, -0x2260
    ctx->pc = 0x561bdcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294958496));
label_561be0:
    // 0x561be0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x561be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_561be4:
    // 0x561be4: 0x8ca70130  lw          $a3, 0x130($a1)
    ctx->pc = 0x561be4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_561be8:
    // 0x561be8: 0x8c52e370  lw          $s2, -0x1C90($v0)
    ctx->pc = 0x561be8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_561bec:
    // 0x561bec: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x561becu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_561bf0:
    // 0x561bf0: 0x8c71e378  lw          $s1, -0x1C88($v1)
    ctx->pc = 0x561bf0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_561bf4:
    // 0x561bf4: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x561bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_561bf8:
    // 0x561bf8: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x561bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_561bfc:
    // 0x561bfc: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x561bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_561c00:
    // 0x561c00: 0x8c54b840  lw          $s4, -0x47C0($v0)
    ctx->pc = 0x561c00u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948928)));
label_561c04:
    // 0x561c04: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x561c04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_561c08:
    // 0x561c08: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x561c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_561c0c:
    // 0x561c0c: 0x8e900014  lw          $s0, 0x14($s4)
    ctx->pc = 0x561c0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_561c10:
    // 0x561c10: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x561c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_561c14:
    // 0x561c14: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x561c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_561c18:
    // 0x561c18: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x561c18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_561c1c:
    // 0x561c1c: 0x24560010  addiu       $s6, $v0, 0x10
    ctx->pc = 0x561c1cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_561c20:
    // 0x561c20: 0x24570090  addiu       $s7, $v0, 0x90
    ctx->pc = 0x561c20u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_561c24:
    // 0x561c24: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x561c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
label_561c28:
    // 0x561c28: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x561c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_561c2c:
    // 0x561c2c: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x561c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_561c30:
    // 0x561c30: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x561c30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_561c34:
    // 0x561c34: 0x29090002  slti        $t1, $t0, 0x2
    ctx->pc = 0x561c34u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)2) ? 1 : 0);
label_561c38:
    // 0x561c38: 0xc4620010  lwc1        $f2, 0x10($v1)
    ctx->pc = 0x561c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_561c3c:
    // 0x561c3c: 0x8c6a003c  lw          $t2, 0x3C($v1)
    ctx->pc = 0x561c3cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_561c40:
    // 0x561c40: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x561c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_561c44:
    // 0x561c44: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x561c44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_561c48:
    // 0x561c48: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x561c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_561c4c:
    // 0x561c4c: 0xe4a20000  swc1        $f2, 0x0($a1)
    ctx->pc = 0x561c4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_561c50:
    // 0x561c50: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x561c50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
label_561c54:
    // 0x561c54: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x561c54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_561c58:
    // 0x561c58: 0x1425024  and         $t2, $t2, $v0
    ctx->pc = 0x561c58u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
label_561c5c:
    // 0x561c5c: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x561c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_561c60:
    // 0x561c60: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x561c60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_561c64:
    // 0x561c64: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x561c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_561c68:
    // 0x561c68: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x561c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_561c6c:
    // 0x561c6c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x561c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_561c70:
    // 0x561c70: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x561c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_561c74:
    // 0x561c74: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x561c74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_561c78:
    // 0x561c78: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x561c78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_561c7c:
    // 0x561c7c: 0xac6a003c  sw          $t2, 0x3C($v1)
    ctx->pc = 0x561c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 10));
label_561c80:
    // 0x561c80: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x561c80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_561c84:
    // 0x561c84: 0x8e6b0060  lw          $t3, 0x60($s3)
    ctx->pc = 0x561c84u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
label_561c88:
    // 0x561c88: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x561c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_561c8c:
    // 0x561c8c: 0xb5040  sll         $t2, $t3, 1
    ctx->pc = 0x561c8cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
label_561c90:
    // 0x561c90: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x561c90u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_561c94:
    // 0x561c94: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x561c94u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_561c98:
    // 0x561c98: 0x18a5021  addu        $t2, $t4, $t2
    ctx->pc = 0x561c98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
label_561c9c:
    // 0x561c9c: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x561c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_561ca0:
    // 0x561ca0: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x561ca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_561ca4:
    // 0x561ca4: 0xc5400004  lwc1        $f0, 0x4($t2)
    ctx->pc = 0x561ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_561ca8:
    // 0x561ca8: 0xe4600014  swc1        $f0, 0x14($v1)
    ctx->pc = 0x561ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_561cac:
    // 0x561cac: 0xc5400008  lwc1        $f0, 0x8($t2)
    ctx->pc = 0x561cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_561cb0:
    // 0x561cb0: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x561cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_561cb4:
    // 0x561cb4: 0x8e6b0060  lw          $t3, 0x60($s3)
    ctx->pc = 0x561cb4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
label_561cb8:
    // 0x561cb8: 0xb5040  sll         $t2, $t3, 1
    ctx->pc = 0x561cb8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 11), 1));
label_561cbc:
    // 0x561cbc: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x561cbcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_561cc0:
    // 0x561cc0: 0xa5080  sll         $t2, $t2, 2
    ctx->pc = 0x561cc0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_561cc4:
    // 0x561cc4: 0x18a5021  addu        $t2, $t4, $t2
    ctx->pc = 0x561cc4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 10)));
label_561cc8:
    // 0x561cc8: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x561cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_561ccc:
    // 0x561ccc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x561cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_561cd0:
    // 0x561cd0: 0xc5400004  lwc1        $f0, 0x4($t2)
    ctx->pc = 0x561cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_561cd4:
    // 0x561cd4: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x561cd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_561cd8:
    // 0x561cd8: 0xc5400008  lwc1        $f0, 0x8($t2)
    ctx->pc = 0x561cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_561cdc:
    // 0x561cdc: 0x1520ffd3  bnez        $t1, . + 4 + (-0x2D << 2)
label_561ce0:
    if (ctx->pc == 0x561CE0u) {
        ctx->pc = 0x561CE0u;
            // 0x561ce0: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->pc = 0x561CE4u;
        goto label_561ce4;
    }
    ctx->pc = 0x561CDCu;
    {
        const bool branch_taken_0x561cdc = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x561CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x561CDCu;
            // 0x561ce0: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x561cdc) {
            ctx->pc = 0x561C2Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_561c2c;
        }
    }
    ctx->pc = 0x561CE4u;
label_561ce4:
    // 0x561ce4: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x561ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_561ce8:
    // 0x561ce8: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x561ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_561cec:
    // 0x561cec: 0xc44d0004  lwc1        $f13, 0x4($v0)
    ctx->pc = 0x561cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_561cf0:
    // 0x561cf0: 0xc44e0008  lwc1        $f14, 0x8($v0)
    ctx->pc = 0x561cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_561cf4:
    // 0x561cf4: 0xc04f3fc  jal         func_13CFF0
label_561cf8:
    if (ctx->pc == 0x561CF8u) {
        ctx->pc = 0x561CF8u;
            // 0x561cf8: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x561CFCu;
        goto label_561cfc;
    }
    ctx->pc = 0x561CF4u;
    SET_GPR_U32(ctx, 31, 0x561CFCu);
    ctx->pc = 0x561CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x561CF4u;
            // 0x561cf8: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFF0u;
    if (runtime->hasFunction(0x13CFF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561CFCu; }
        if (ctx->pc != 0x561CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFF0_0x13cff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561CFCu; }
        if (ctx->pc != 0x561CFCu) { return; }
    }
    ctx->pc = 0x561CFCu;
label_561cfc:
    // 0x561cfc: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x561cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_561d00:
    // 0x561d00: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x561d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_561d04:
    // 0x561d04: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x561d04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_561d08:
    // 0x561d08: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x561d08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_561d0c:
    // 0x561d0c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x561d0cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_561d10:
    // 0x561d10: 0xc04ce50  jal         func_133940
label_561d14:
    if (ctx->pc == 0x561D14u) {
        ctx->pc = 0x561D14u;
            // 0x561d14: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x561D18u;
        goto label_561d18;
    }
    ctx->pc = 0x561D10u;
    SET_GPR_U32(ctx, 31, 0x561D18u);
    ctx->pc = 0x561D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x561D10u;
            // 0x561d14: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561D18u; }
        if (ctx->pc != 0x561D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561D18u; }
        if (ctx->pc != 0x561D18u) { return; }
    }
    ctx->pc = 0x561D18u;
label_561d18:
    // 0x561d18: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x561d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_561d1c:
    // 0x561d1c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x561d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_561d20:
    // 0x561d20: 0x8c63d130  lw          $v1, -0x2ED0($v1)
    ctx->pc = 0x561d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_561d24:
    // 0x561d24: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x561d24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_561d28:
    // 0x561d28: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x561d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_561d2c:
    // 0x561d2c: 0x8c750130  lw          $s5, 0x130($v1)
    ctx->pc = 0x561d2cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_561d30:
    // 0x561d30: 0xc07698c  jal         func_1DA630
label_561d34:
    if (ctx->pc == 0x561D34u) {
        ctx->pc = 0x561D34u;
            // 0x561d34: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x561D38u;
        goto label_561d38;
    }
    ctx->pc = 0x561D30u;
    SET_GPR_U32(ctx, 31, 0x561D38u);
    ctx->pc = 0x561D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x561D30u;
            // 0x561d34: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561D38u; }
        if (ctx->pc != 0x561D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561D38u; }
        if (ctx->pc != 0x561D38u) { return; }
    }
    ctx->pc = 0x561D38u;
label_561d38:
    // 0x561d38: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x561d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_561d3c:
    // 0x561d3c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_561d40:
    if (ctx->pc == 0x561D40u) {
        ctx->pc = 0x561D44u;
        goto label_561d44;
    }
    ctx->pc = 0x561D3Cu;
    {
        const bool branch_taken_0x561d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x561d3c) {
            ctx->pc = 0x561D4Cu;
            goto label_561d4c;
        }
    }
    ctx->pc = 0x561D44u;
label_561d44:
    // 0x561d44: 0x10000035  b           . + 4 + (0x35 << 2)
label_561d48:
    if (ctx->pc == 0x561D48u) {
        ctx->pc = 0x561D48u;
            // 0x561d48: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x561D4Cu;
        goto label_561d4c;
    }
    ctx->pc = 0x561D44u;
    {
        const bool branch_taken_0x561d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x561D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x561D44u;
            // 0x561d48: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x561d44) {
            ctx->pc = 0x561E1Cu;
            goto label_561e1c;
        }
    }
    ctx->pc = 0x561D4Cu;
label_561d4c:
    // 0x561d4c: 0xc0576f4  jal         func_15DBD0
label_561d50:
    if (ctx->pc == 0x561D50u) {
        ctx->pc = 0x561D54u;
        goto label_561d54;
    }
    ctx->pc = 0x561D4Cu;
    SET_GPR_U32(ctx, 31, 0x561D54u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561D54u; }
        if (ctx->pc != 0x561D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561D54u; }
        if (ctx->pc != 0x561D54u) { return; }
    }
    ctx->pc = 0x561D54u;
label_561d54:
    // 0x561d54: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x561d54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_561d58:
    // 0x561d58: 0xc076984  jal         func_1DA610
label_561d5c:
    if (ctx->pc == 0x561D5Cu) {
        ctx->pc = 0x561D5Cu;
            // 0x561d5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x561D60u;
        goto label_561d60;
    }
    ctx->pc = 0x561D58u;
    SET_GPR_U32(ctx, 31, 0x561D60u);
    ctx->pc = 0x561D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x561D58u;
            // 0x561d5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561D60u; }
        if (ctx->pc != 0x561D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561D60u; }
        if (ctx->pc != 0x561D60u) { return; }
    }
    ctx->pc = 0x561D60u;
label_561d60:
    // 0x561d60: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x561d60u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_561d64:
    // 0x561d64: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x561d64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_561d68:
    // 0x561d68: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x561d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_561d6c:
    // 0x561d6c: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x561d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_561d70:
    // 0x561d70: 0xc442de80  lwc1        $f2, -0x2180($v0)
    ctx->pc = 0x561d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294958720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_561d74:
    // 0x561d74: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x561d74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_561d78:
    // 0x561d78: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x561d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_561d7c:
    // 0x561d7c: 0xc441de88  lwc1        $f1, -0x2178($v0)
    ctx->pc = 0x561d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294958728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_561d80:
    // 0x561d80: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x561d80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_561d84:
    // 0x561d84: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x561d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_561d88:
    // 0x561d88: 0xc440de8c  lwc1        $f0, -0x2174($v0)
    ctx->pc = 0x561d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294958732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_561d8c:
    // 0x561d8c: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x561d8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_561d90:
    // 0x561d90: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x561d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_561d94:
    // 0x561d94: 0x8c42de84  lw          $v0, -0x217C($v0)
    ctx->pc = 0x561d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958724)));
label_561d98:
    // 0x561d98: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x561d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_561d9c:
    // 0x561d9c: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x561d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
label_561da0:
    // 0x561da0: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x561da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_561da4:
    // 0x561da4: 0xc04cca0  jal         func_133280
label_561da8:
    if (ctx->pc == 0x561DA8u) {
        ctx->pc = 0x561DA8u;
            // 0x561da8: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->pc = 0x561DACu;
        goto label_561dac;
    }
    ctx->pc = 0x561DA4u;
    SET_GPR_U32(ctx, 31, 0x561DACu);
    ctx->pc = 0x561DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x561DA4u;
            // 0x561da8: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561DACu; }
        if (ctx->pc != 0x561DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561DACu; }
        if (ctx->pc != 0x561DACu) { return; }
    }
    ctx->pc = 0x561DACu;
label_561dac:
    // 0x561dac: 0xc076980  jal         func_1DA600
label_561db0:
    if (ctx->pc == 0x561DB0u) {
        ctx->pc = 0x561DB0u;
            // 0x561db0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x561DB4u;
        goto label_561db4;
    }
    ctx->pc = 0x561DACu;
    SET_GPR_U32(ctx, 31, 0x561DB4u);
    ctx->pc = 0x561DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x561DACu;
            // 0x561db0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561DB4u; }
        if (ctx->pc != 0x561DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561DB4u; }
        if (ctx->pc != 0x561DB4u) { return; }
    }
    ctx->pc = 0x561DB4u;
label_561db4:
    // 0x561db4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x561db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_561db8:
    // 0x561db8: 0xc04cc34  jal         func_1330D0
label_561dbc:
    if (ctx->pc == 0x561DBCu) {
        ctx->pc = 0x561DBCu;
            // 0x561dbc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x561DC0u;
        goto label_561dc0;
    }
    ctx->pc = 0x561DB8u;
    SET_GPR_U32(ctx, 31, 0x561DC0u);
    ctx->pc = 0x561DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x561DB8u;
            // 0x561dbc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561DC0u; }
        if (ctx->pc != 0x561DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561DC0u; }
        if (ctx->pc != 0x561DC0u) { return; }
    }
    ctx->pc = 0x561DC0u;
label_561dc0:
    // 0x561dc0: 0x3c03461c  lui         $v1, 0x461C
    ctx->pc = 0x561dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
label_561dc4:
    // 0x561dc4: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x561dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_561dc8:
    // 0x561dc8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x561dc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_561dcc:
    // 0x561dcc: 0x0  nop
    ctx->pc = 0x561dccu;
    // NOP
label_561dd0:
    // 0x561dd0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x561dd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_561dd4:
    // 0x561dd4: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_561dd8:
    if (ctx->pc == 0x561DD8u) {
        ctx->pc = 0x561DD8u;
            // 0x561dd8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x561DDCu;
        goto label_561ddc;
    }
    ctx->pc = 0x561DD4u;
    {
        const bool branch_taken_0x561dd4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x561dd4) {
            ctx->pc = 0x561DD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x561DD4u;
            // 0x561dd8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x561DE4u;
            goto label_561de4;
        }
    }
    ctx->pc = 0x561DDCu;
label_561ddc:
    // 0x561ddc: 0x1000000f  b           . + 4 + (0xF << 2)
label_561de0:
    if (ctx->pc == 0x561DE0u) {
        ctx->pc = 0x561DE0u;
            // 0x561de0: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x561DE4u;
        goto label_561de4;
    }
    ctx->pc = 0x561DDCu;
    {
        const bool branch_taken_0x561ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x561DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x561DDCu;
            // 0x561de0: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x561ddc) {
            ctx->pc = 0x561E1Cu;
            goto label_561e1c;
        }
    }
    ctx->pc = 0x561DE4u;
label_561de4:
    // 0x561de4: 0xc07697c  jal         func_1DA5F0
label_561de8:
    if (ctx->pc == 0x561DE8u) {
        ctx->pc = 0x561DECu;
        goto label_561dec;
    }
    ctx->pc = 0x561DE4u;
    SET_GPR_U32(ctx, 31, 0x561DECu);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561DECu; }
        if (ctx->pc != 0x561DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561DECu; }
        if (ctx->pc != 0x561DECu) { return; }
    }
    ctx->pc = 0x561DECu;
label_561dec:
    // 0x561dec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x561decu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_561df0:
    // 0x561df0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x561df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_561df4:
    // 0x561df4: 0xc04cd60  jal         func_133580
label_561df8:
    if (ctx->pc == 0x561DF8u) {
        ctx->pc = 0x561DF8u;
            // 0x561df8: 0x27a60120  addiu       $a2, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x561DFCu;
        goto label_561dfc;
    }
    ctx->pc = 0x561DF4u;
    SET_GPR_U32(ctx, 31, 0x561DFCu);
    ctx->pc = 0x561DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x561DF4u;
            // 0x561df8: 0x27a60120  addiu       $a2, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561DFCu; }
        if (ctx->pc != 0x561DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561DFCu; }
        if (ctx->pc != 0x561DFCu) { return; }
    }
    ctx->pc = 0x561DFCu;
label_561dfc:
    // 0x561dfc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x561dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_561e00:
    // 0x561e00: 0xc04c650  jal         func_131940
label_561e04:
    if (ctx->pc == 0x561E04u) {
        ctx->pc = 0x561E04u;
            // 0x561e04: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x561E08u;
        goto label_561e08;
    }
    ctx->pc = 0x561E00u;
    SET_GPR_U32(ctx, 31, 0x561E08u);
    ctx->pc = 0x561E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x561E00u;
            // 0x561e04: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561E08u; }
        if (ctx->pc != 0x561E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561E08u; }
        if (ctx->pc != 0x561E08u) { return; }
    }
    ctx->pc = 0x561E08u;
label_561e08:
    // 0x561e08: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x561e08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_561e0c:
    // 0x561e0c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x561e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_561e10:
    // 0x561e10: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x561e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
label_561e14:
    // 0x561e14: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x561e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_561e18:
    // 0x561e18: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x561e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_561e1c:
    // 0x561e1c: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x561e1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_561e20:
    // 0x561e20: 0x5020003c  beql        $at, $zero, . + 4 + (0x3C << 2)
label_561e24:
    if (ctx->pc == 0x561E24u) {
        ctx->pc = 0x561E24u;
            // 0x561e24: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x561E28u;
        goto label_561e28;
    }
    ctx->pc = 0x561E20u;
    {
        const bool branch_taken_0x561e20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x561e20) {
            ctx->pc = 0x561E24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x561E20u;
            // 0x561e24: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x561F14u;
            goto label_561f14;
        }
    }
    ctx->pc = 0x561E28u;
label_561e28:
    // 0x561e28: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x561e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_561e2c:
    // 0x561e2c: 0xc04e738  jal         func_139CE0
label_561e30:
    if (ctx->pc == 0x561E30u) {
        ctx->pc = 0x561E30u;
            // 0x561e30: 0x8c44b844  lw          $a0, -0x47BC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948932)));
        ctx->pc = 0x561E34u;
        goto label_561e34;
    }
    ctx->pc = 0x561E2Cu;
    SET_GPR_U32(ctx, 31, 0x561E34u);
    ctx->pc = 0x561E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x561E2Cu;
            // 0x561e30: 0x8c44b844  lw          $a0, -0x47BC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948932)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561E34u; }
        if (ctx->pc != 0x561E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561E34u; }
        if (ctx->pc != 0x561E34u) { return; }
    }
    ctx->pc = 0x561E34u;
label_561e34:
    // 0x561e34: 0x8e850028  lw          $a1, 0x28($s4)
    ctx->pc = 0x561e34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_561e38:
    // 0x561e38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x561e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_561e3c:
    // 0x561e3c: 0xc04e4a4  jal         func_139290
label_561e40:
    if (ctx->pc == 0x561E40u) {
        ctx->pc = 0x561E40u;
            // 0x561e40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x561E44u;
        goto label_561e44;
    }
    ctx->pc = 0x561E3Cu;
    SET_GPR_U32(ctx, 31, 0x561E44u);
    ctx->pc = 0x561E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x561E3Cu;
            // 0x561e40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561E44u; }
        if (ctx->pc != 0x561E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561E44u; }
        if (ctx->pc != 0x561E44u) { return; }
    }
    ctx->pc = 0x561E44u;
label_561e44:
    // 0x561e44: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x561e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_561e48:
    // 0x561e48: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x561e48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_561e4c:
    // 0x561e4c: 0xc04cd60  jal         func_133580
label_561e50:
    if (ctx->pc == 0x561E50u) {
        ctx->pc = 0x561E50u;
            // 0x561e50: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x561E54u;
        goto label_561e54;
    }
    ctx->pc = 0x561E4Cu;
    SET_GPR_U32(ctx, 31, 0x561E54u);
    ctx->pc = 0x561E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x561E4Cu;
            // 0x561e50: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561E54u; }
        if (ctx->pc != 0x561E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561E54u; }
        if (ctx->pc != 0x561E54u) { return; }
    }
    ctx->pc = 0x561E54u;
label_561e54:
    // 0x561e54: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x561e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_561e58:
    // 0x561e58: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x561e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_561e5c:
    // 0x561e5c: 0xc04cd60  jal         func_133580
label_561e60:
    if (ctx->pc == 0x561E60u) {
        ctx->pc = 0x561E60u;
            // 0x561e60: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x561E64u;
        goto label_561e64;
    }
    ctx->pc = 0x561E5Cu;
    SET_GPR_U32(ctx, 31, 0x561E64u);
    ctx->pc = 0x561E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x561E5Cu;
            // 0x561e60: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561E64u; }
        if (ctx->pc != 0x561E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561E64u; }
        if (ctx->pc != 0x561E64u) { return; }
    }
    ctx->pc = 0x561E64u;
label_561e64:
    // 0x561e64: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x561e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_561e68:
    // 0x561e68: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x561e68u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_561e6c:
    // 0x561e6c: 0xc66c005c  lwc1        $f12, 0x5C($s3)
    ctx->pc = 0x561e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_561e70:
    // 0x561e70: 0x8c47b848  lw          $a3, -0x47B8($v0)
    ctx->pc = 0x561e70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948936)));
label_561e74:
    // 0x561e74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x561e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_561e78:
    // 0x561e78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x561e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_561e7c:
    // 0x561e7c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x561e7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_561e80:
    // 0x561e80: 0x27a80120  addiu       $t0, $sp, 0x120
    ctx->pc = 0x561e80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_561e84:
    // 0x561e84: 0x2529e350  addiu       $t1, $t1, -0x1CB0
    ctx->pc = 0x561e84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
label_561e88:
    // 0x561e88: 0xc04cff4  jal         func_133FD0
label_561e8c:
    if (ctx->pc == 0x561E8Cu) {
        ctx->pc = 0x561E8Cu;
            // 0x561e8c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x561E90u;
        goto label_561e90;
    }
    ctx->pc = 0x561E88u;
    SET_GPR_U32(ctx, 31, 0x561E90u);
    ctx->pc = 0x561E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x561E88u;
            // 0x561e8c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561E90u; }
        if (ctx->pc != 0x561E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561E90u; }
        if (ctx->pc != 0x561E90u) { return; }
    }
    ctx->pc = 0x561E90u;
label_561e90:
    // 0x561e90: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x561e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_561e94:
    // 0x561e94: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x561e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_561e98:
    // 0x561e98: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x561e98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_561e9c:
    // 0x561e9c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x561e9cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_561ea0:
    // 0x561ea0: 0xc0538d8  jal         func_14E360
label_561ea4:
    if (ctx->pc == 0x561EA4u) {
        ctx->pc = 0x561EA4u;
            // 0x561ea4: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x561EA8u;
        goto label_561ea8;
    }
    ctx->pc = 0x561EA0u;
    SET_GPR_U32(ctx, 31, 0x561EA8u);
    ctx->pc = 0x561EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x561EA0u;
            // 0x561ea4: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E360u;
    if (runtime->hasFunction(0x14E360u)) {
        auto targetFn = runtime->lookupFunction(0x14E360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561EA8u; }
        if (ctx->pc != 0x561EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E360_0x14e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561EA8u; }
        if (ctx->pc != 0x561EA8u) { return; }
    }
    ctx->pc = 0x561EA8u;
label_561ea8:
    // 0x561ea8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x561ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_561eac:
    // 0x561eac: 0x27a80168  addiu       $t0, $sp, 0x168
    ctx->pc = 0x561eacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
label_561eb0:
    // 0x561eb0: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x561eb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_561eb4:
    // 0x561eb4: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x561eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_561eb8:
    // 0x561eb8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x561eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_561ebc:
    // 0x561ebc: 0xc4e40000  lwc1        $f4, 0x0($a3)
    ctx->pc = 0x561ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_561ec0:
    // 0x561ec0: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x561ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_561ec4:
    // 0x561ec4: 0xc4e30004  lwc1        $f3, 0x4($a3)
    ctx->pc = 0x561ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_561ec8:
    // 0x561ec8: 0xc4e20008  lwc1        $f2, 0x8($a3)
    ctx->pc = 0x561ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_561ecc:
    // 0x561ecc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x561eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_561ed0:
    // 0x561ed0: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x561ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_561ed4:
    // 0x561ed4: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x561ed4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_561ed8:
    // 0x561ed8: 0xac83003c  sw          $v1, 0x3C($a0)
    ctx->pc = 0x561ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
label_561edc:
    // 0x561edc: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x561edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_561ee0:
    // 0x561ee0: 0xe4840010  swc1        $f4, 0x10($a0)
    ctx->pc = 0x561ee0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
label_561ee4:
    // 0x561ee4: 0x28a30002  slti        $v1, $a1, 0x2
    ctx->pc = 0x561ee4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
label_561ee8:
    // 0x561ee8: 0xe4830014  swc1        $f3, 0x14($a0)
    ctx->pc = 0x561ee8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
label_561eec:
    // 0x561eec: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x561eecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_561ef0:
    // 0x561ef0: 0xe4820018  swc1        $f2, 0x18($a0)
    ctx->pc = 0x561ef0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_561ef4:
    // 0x561ef4: 0x24e7000c  addiu       $a3, $a3, 0xC
    ctx->pc = 0x561ef4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
label_561ef8:
    // 0x561ef8: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x561ef8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_561efc:
    // 0x561efc: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x561efcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_561f00:
    // 0x561f00: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x561f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_561f04:
    // 0x561f04: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x561f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_561f08:
    // 0x561f08: 0x1460ffeb  bnez        $v1, . + 4 + (-0x15 << 2)
label_561f0c:
    if (ctx->pc == 0x561F0Cu) {
        ctx->pc = 0x561F0Cu;
            // 0x561f0c: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->pc = 0x561F10u;
        goto label_561f10;
    }
    ctx->pc = 0x561F08u;
    {
        const bool branch_taken_0x561f08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x561F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x561F08u;
            // 0x561f0c: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x561f08) {
            ctx->pc = 0x561EB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_561eb8;
        }
    }
    ctx->pc = 0x561F10u;
label_561f10:
    // 0x561f10: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x561f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_561f14:
    // 0x561f14: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x561f14u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_561f18:
    // 0x561f18: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x561f18u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_561f1c:
    // 0x561f1c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x561f1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_561f20:
    // 0x561f20: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x561f20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_561f24:
    // 0x561f24: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x561f24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_561f28:
    // 0x561f28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x561f28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_561f2c:
    // 0x561f2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x561f2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_561f30:
    // 0x561f30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x561f30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_561f34:
    // 0x561f34: 0x3e00008  jr          $ra
label_561f38:
    if (ctx->pc == 0x561F38u) {
        ctx->pc = 0x561F38u;
            // 0x561f38: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x561F3Cu;
        goto label_561f3c;
    }
    ctx->pc = 0x561F34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x561F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x561F34u;
            // 0x561f38: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x561F3Cu;
label_561f3c:
    // 0x561f3c: 0x0  nop
    ctx->pc = 0x561f3cu;
    // NOP
label_561f40:
    // 0x561f40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x561f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_561f44:
    // 0x561f44: 0x3c0300be  lui         $v1, 0xBE
    ctx->pc = 0x561f44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)190 << 16));
label_561f48:
    // 0x561f48: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x561f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_561f4c:
    // 0x561f4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x561f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_561f50:
    // 0x561f50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x561f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_561f54:
    // 0x561f54: 0x8c70b848  lw          $s0, -0x47B8($v1)
    ctx->pc = 0x561f54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948936)));
label_561f58:
    // 0x561f58: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x561f58u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_561f5c:
    // 0x561f5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x561f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_561f60:
    // 0x561f60: 0x10a3001f  beq         $a1, $v1, . + 4 + (0x1F << 2)
label_561f64:
    if (ctx->pc == 0x561F64u) {
        ctx->pc = 0x561F64u;
            // 0x561f64: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x561F68u;
        goto label_561f68;
    }
    ctx->pc = 0x561F60u;
    {
        const bool branch_taken_0x561f60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x561F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x561F60u;
            // 0x561f64: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x561f60) {
            ctx->pc = 0x561FE0u;
            goto label_561fe0;
        }
    }
    ctx->pc = 0x561F68u;
label_561f68:
    // 0x561f68: 0x50a00018  beql        $a1, $zero, . + 4 + (0x18 << 2)
label_561f6c:
    if (ctx->pc == 0x561F6Cu) {
        ctx->pc = 0x561F6Cu;
            // 0x561f6c: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x561F70u;
        goto label_561f70;
    }
    ctx->pc = 0x561F68u;
    {
        const bool branch_taken_0x561f68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x561f68) {
            ctx->pc = 0x561F6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x561F68u;
            // 0x561f6c: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x561FCCu;
            goto label_561fcc;
        }
    }
    ctx->pc = 0x561F70u;
label_561f70:
    // 0x561f70: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x561f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_561f74:
    // 0x561f74: 0x10a30009  beq         $a1, $v1, . + 4 + (0x9 << 2)
label_561f78:
    if (ctx->pc == 0x561F78u) {
        ctx->pc = 0x561F7Cu;
        goto label_561f7c;
    }
    ctx->pc = 0x561F74u;
    {
        const bool branch_taken_0x561f74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x561f74) {
            ctx->pc = 0x561F9Cu;
            goto label_561f9c;
        }
    }
    ctx->pc = 0x561F7Cu;
label_561f7c:
    // 0x561f7c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x561f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_561f80:
    // 0x561f80: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_561f84:
    if (ctx->pc == 0x561F84u) {
        ctx->pc = 0x561F84u;
            // 0x561f84: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x561F88u;
        goto label_561f88;
    }
    ctx->pc = 0x561F80u;
    {
        const bool branch_taken_0x561f80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x561f80) {
            ctx->pc = 0x561F84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x561F80u;
            // 0x561f84: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x561F90u;
            goto label_561f90;
        }
    }
    ctx->pc = 0x561F88u;
label_561f88:
    // 0x561f88: 0x1000001b  b           . + 4 + (0x1B << 2)
label_561f8c:
    if (ctx->pc == 0x561F8Cu) {
        ctx->pc = 0x561F8Cu;
            // 0x561f8c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x561F90u;
        goto label_561f90;
    }
    ctx->pc = 0x561F88u;
    {
        const bool branch_taken_0x561f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x561F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x561F88u;
            // 0x561f8c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x561f88) {
            ctx->pc = 0x561FF8u;
            goto label_561ff8;
        }
    }
    ctx->pc = 0x561F90u;
label_561f90:
    // 0x561f90: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x561f90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_561f94:
    // 0x561f94: 0x320f809  jalr        $t9
label_561f98:
    if (ctx->pc == 0x561F98u) {
        ctx->pc = 0x561F9Cu;
        goto label_561f9c;
    }
    ctx->pc = 0x561F94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x561F9Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x561F9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x561F9Cu; }
            if (ctx->pc != 0x561F9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x561F9Cu;
label_561f9c:
    // 0x561f9c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x561f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_561fa0:
    // 0x561fa0: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x561fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_561fa4:
    // 0x561fa4: 0xc620005c  lwc1        $f0, 0x5C($s1)
    ctx->pc = 0x561fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_561fa8:
    // 0x561fa8: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x561fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_561fac:
    // 0x561fac: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x561facu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_561fb0:
    // 0x561fb0: 0xe621005c  swc1        $f1, 0x5C($s1)
    ctx->pc = 0x561fb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 92), bits); }
label_561fb4:
    // 0x561fb4: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x561fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_561fb8:
    // 0x561fb8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x561fb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_561fbc:
    // 0x561fbc: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_561fc0:
    if (ctx->pc == 0x561FC0u) {
        ctx->pc = 0x561FC4u;
        goto label_561fc4;
    }
    ctx->pc = 0x561FBCu;
    {
        const bool branch_taken_0x561fbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x561fbc) {
            ctx->pc = 0x561FF4u;
            goto label_561ff4;
        }
    }
    ctx->pc = 0x561FC4u;
label_561fc4:
    // 0x561fc4: 0x1000000b  b           . + 4 + (0xB << 2)
label_561fc8:
    if (ctx->pc == 0x561FC8u) {
        ctx->pc = 0x561FC8u;
            // 0x561fc8: 0xae20005c  sw          $zero, 0x5C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
        ctx->pc = 0x561FCCu;
        goto label_561fcc;
    }
    ctx->pc = 0x561FC4u;
    {
        const bool branch_taken_0x561fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x561FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x561FC4u;
            // 0x561fc8: 0xae20005c  sw          $zero, 0x5C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x561fc4) {
            ctx->pc = 0x561FF4u;
            goto label_561ff4;
        }
    }
    ctx->pc = 0x561FCCu;
label_561fcc:
    // 0x561fcc: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x561fccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_561fd0:
    // 0x561fd0: 0x320f809  jalr        $t9
label_561fd4:
    if (ctx->pc == 0x561FD4u) {
        ctx->pc = 0x561FD8u;
        goto label_561fd8;
    }
    ctx->pc = 0x561FD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x561FD8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x561FD8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x561FD8u; }
            if (ctx->pc != 0x561FD8u) { return; }
        }
        }
    }
    ctx->pc = 0x561FD8u;
label_561fd8:
    // 0x561fd8: 0x10000006  b           . + 4 + (0x6 << 2)
label_561fdc:
    if (ctx->pc == 0x561FDCu) {
        ctx->pc = 0x561FE0u;
        goto label_561fe0;
    }
    ctx->pc = 0x561FD8u;
    {
        const bool branch_taken_0x561fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x561fd8) {
            ctx->pc = 0x561FF4u;
            goto label_561ff4;
        }
    }
    ctx->pc = 0x561FE0u;
label_561fe0:
    // 0x561fe0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x561fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_561fe4:
    // 0x561fe4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x561fe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_561fe8:
    // 0x561fe8: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x561fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_561fec:
    // 0x561fec: 0xc057b7c  jal         func_15EDF0
label_561ff0:
    if (ctx->pc == 0x561FF0u) {
        ctx->pc = 0x561FF0u;
            // 0x561ff0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x561FF4u;
        goto label_561ff4;
    }
    ctx->pc = 0x561FECu;
    SET_GPR_U32(ctx, 31, 0x561FF4u);
    ctx->pc = 0x561FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x561FECu;
            // 0x561ff0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561FF4u; }
        if (ctx->pc != 0x561FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x561FF4u; }
        if (ctx->pc != 0x561FF4u) { return; }
    }
    ctx->pc = 0x561FF4u;
label_561ff4:
    // 0x561ff4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x561ff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_561ff8:
    // 0x561ff8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x561ff8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_561ffc:
    // 0x561ffc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x561ffcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_562000:
    // 0x562000: 0x3e00008  jr          $ra
label_562004:
    if (ctx->pc == 0x562004u) {
        ctx->pc = 0x562004u;
            // 0x562004: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x562008u;
        goto label_562008;
    }
    ctx->pc = 0x562000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x562004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x562000u;
            // 0x562004: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x562008u;
label_562008:
    // 0x562008: 0x0  nop
    ctx->pc = 0x562008u;
    // NOP
label_56200c:
    // 0x56200c: 0x0  nop
    ctx->pc = 0x56200cu;
    // NOP
}
