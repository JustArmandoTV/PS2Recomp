#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00203350
// Address: 0x203350 - 0x204010
void sub_00203350_0x203350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203350_0x203350");
#endif

    switch (ctx->pc) {
        case 0x203350u: goto label_203350;
        case 0x203354u: goto label_203354;
        case 0x203358u: goto label_203358;
        case 0x20335cu: goto label_20335c;
        case 0x203360u: goto label_203360;
        case 0x203364u: goto label_203364;
        case 0x203368u: goto label_203368;
        case 0x20336cu: goto label_20336c;
        case 0x203370u: goto label_203370;
        case 0x203374u: goto label_203374;
        case 0x203378u: goto label_203378;
        case 0x20337cu: goto label_20337c;
        case 0x203380u: goto label_203380;
        case 0x203384u: goto label_203384;
        case 0x203388u: goto label_203388;
        case 0x20338cu: goto label_20338c;
        case 0x203390u: goto label_203390;
        case 0x203394u: goto label_203394;
        case 0x203398u: goto label_203398;
        case 0x20339cu: goto label_20339c;
        case 0x2033a0u: goto label_2033a0;
        case 0x2033a4u: goto label_2033a4;
        case 0x2033a8u: goto label_2033a8;
        case 0x2033acu: goto label_2033ac;
        case 0x2033b0u: goto label_2033b0;
        case 0x2033b4u: goto label_2033b4;
        case 0x2033b8u: goto label_2033b8;
        case 0x2033bcu: goto label_2033bc;
        case 0x2033c0u: goto label_2033c0;
        case 0x2033c4u: goto label_2033c4;
        case 0x2033c8u: goto label_2033c8;
        case 0x2033ccu: goto label_2033cc;
        case 0x2033d0u: goto label_2033d0;
        case 0x2033d4u: goto label_2033d4;
        case 0x2033d8u: goto label_2033d8;
        case 0x2033dcu: goto label_2033dc;
        case 0x2033e0u: goto label_2033e0;
        case 0x2033e4u: goto label_2033e4;
        case 0x2033e8u: goto label_2033e8;
        case 0x2033ecu: goto label_2033ec;
        case 0x2033f0u: goto label_2033f0;
        case 0x2033f4u: goto label_2033f4;
        case 0x2033f8u: goto label_2033f8;
        case 0x2033fcu: goto label_2033fc;
        case 0x203400u: goto label_203400;
        case 0x203404u: goto label_203404;
        case 0x203408u: goto label_203408;
        case 0x20340cu: goto label_20340c;
        case 0x203410u: goto label_203410;
        case 0x203414u: goto label_203414;
        case 0x203418u: goto label_203418;
        case 0x20341cu: goto label_20341c;
        case 0x203420u: goto label_203420;
        case 0x203424u: goto label_203424;
        case 0x203428u: goto label_203428;
        case 0x20342cu: goto label_20342c;
        case 0x203430u: goto label_203430;
        case 0x203434u: goto label_203434;
        case 0x203438u: goto label_203438;
        case 0x20343cu: goto label_20343c;
        case 0x203440u: goto label_203440;
        case 0x203444u: goto label_203444;
        case 0x203448u: goto label_203448;
        case 0x20344cu: goto label_20344c;
        case 0x203450u: goto label_203450;
        case 0x203454u: goto label_203454;
        case 0x203458u: goto label_203458;
        case 0x20345cu: goto label_20345c;
        case 0x203460u: goto label_203460;
        case 0x203464u: goto label_203464;
        case 0x203468u: goto label_203468;
        case 0x20346cu: goto label_20346c;
        case 0x203470u: goto label_203470;
        case 0x203474u: goto label_203474;
        case 0x203478u: goto label_203478;
        case 0x20347cu: goto label_20347c;
        case 0x203480u: goto label_203480;
        case 0x203484u: goto label_203484;
        case 0x203488u: goto label_203488;
        case 0x20348cu: goto label_20348c;
        case 0x203490u: goto label_203490;
        case 0x203494u: goto label_203494;
        case 0x203498u: goto label_203498;
        case 0x20349cu: goto label_20349c;
        case 0x2034a0u: goto label_2034a0;
        case 0x2034a4u: goto label_2034a4;
        case 0x2034a8u: goto label_2034a8;
        case 0x2034acu: goto label_2034ac;
        case 0x2034b0u: goto label_2034b0;
        case 0x2034b4u: goto label_2034b4;
        case 0x2034b8u: goto label_2034b8;
        case 0x2034bcu: goto label_2034bc;
        case 0x2034c0u: goto label_2034c0;
        case 0x2034c4u: goto label_2034c4;
        case 0x2034c8u: goto label_2034c8;
        case 0x2034ccu: goto label_2034cc;
        case 0x2034d0u: goto label_2034d0;
        case 0x2034d4u: goto label_2034d4;
        case 0x2034d8u: goto label_2034d8;
        case 0x2034dcu: goto label_2034dc;
        case 0x2034e0u: goto label_2034e0;
        case 0x2034e4u: goto label_2034e4;
        case 0x2034e8u: goto label_2034e8;
        case 0x2034ecu: goto label_2034ec;
        case 0x2034f0u: goto label_2034f0;
        case 0x2034f4u: goto label_2034f4;
        case 0x2034f8u: goto label_2034f8;
        case 0x2034fcu: goto label_2034fc;
        case 0x203500u: goto label_203500;
        case 0x203504u: goto label_203504;
        case 0x203508u: goto label_203508;
        case 0x20350cu: goto label_20350c;
        case 0x203510u: goto label_203510;
        case 0x203514u: goto label_203514;
        case 0x203518u: goto label_203518;
        case 0x20351cu: goto label_20351c;
        case 0x203520u: goto label_203520;
        case 0x203524u: goto label_203524;
        case 0x203528u: goto label_203528;
        case 0x20352cu: goto label_20352c;
        case 0x203530u: goto label_203530;
        case 0x203534u: goto label_203534;
        case 0x203538u: goto label_203538;
        case 0x20353cu: goto label_20353c;
        case 0x203540u: goto label_203540;
        case 0x203544u: goto label_203544;
        case 0x203548u: goto label_203548;
        case 0x20354cu: goto label_20354c;
        case 0x203550u: goto label_203550;
        case 0x203554u: goto label_203554;
        case 0x203558u: goto label_203558;
        case 0x20355cu: goto label_20355c;
        case 0x203560u: goto label_203560;
        case 0x203564u: goto label_203564;
        case 0x203568u: goto label_203568;
        case 0x20356cu: goto label_20356c;
        case 0x203570u: goto label_203570;
        case 0x203574u: goto label_203574;
        case 0x203578u: goto label_203578;
        case 0x20357cu: goto label_20357c;
        case 0x203580u: goto label_203580;
        case 0x203584u: goto label_203584;
        case 0x203588u: goto label_203588;
        case 0x20358cu: goto label_20358c;
        case 0x203590u: goto label_203590;
        case 0x203594u: goto label_203594;
        case 0x203598u: goto label_203598;
        case 0x20359cu: goto label_20359c;
        case 0x2035a0u: goto label_2035a0;
        case 0x2035a4u: goto label_2035a4;
        case 0x2035a8u: goto label_2035a8;
        case 0x2035acu: goto label_2035ac;
        case 0x2035b0u: goto label_2035b0;
        case 0x2035b4u: goto label_2035b4;
        case 0x2035b8u: goto label_2035b8;
        case 0x2035bcu: goto label_2035bc;
        case 0x2035c0u: goto label_2035c0;
        case 0x2035c4u: goto label_2035c4;
        case 0x2035c8u: goto label_2035c8;
        case 0x2035ccu: goto label_2035cc;
        case 0x2035d0u: goto label_2035d0;
        case 0x2035d4u: goto label_2035d4;
        case 0x2035d8u: goto label_2035d8;
        case 0x2035dcu: goto label_2035dc;
        case 0x2035e0u: goto label_2035e0;
        case 0x2035e4u: goto label_2035e4;
        case 0x2035e8u: goto label_2035e8;
        case 0x2035ecu: goto label_2035ec;
        case 0x2035f0u: goto label_2035f0;
        case 0x2035f4u: goto label_2035f4;
        case 0x2035f8u: goto label_2035f8;
        case 0x2035fcu: goto label_2035fc;
        case 0x203600u: goto label_203600;
        case 0x203604u: goto label_203604;
        case 0x203608u: goto label_203608;
        case 0x20360cu: goto label_20360c;
        case 0x203610u: goto label_203610;
        case 0x203614u: goto label_203614;
        case 0x203618u: goto label_203618;
        case 0x20361cu: goto label_20361c;
        case 0x203620u: goto label_203620;
        case 0x203624u: goto label_203624;
        case 0x203628u: goto label_203628;
        case 0x20362cu: goto label_20362c;
        case 0x203630u: goto label_203630;
        case 0x203634u: goto label_203634;
        case 0x203638u: goto label_203638;
        case 0x20363cu: goto label_20363c;
        case 0x203640u: goto label_203640;
        case 0x203644u: goto label_203644;
        case 0x203648u: goto label_203648;
        case 0x20364cu: goto label_20364c;
        case 0x203650u: goto label_203650;
        case 0x203654u: goto label_203654;
        case 0x203658u: goto label_203658;
        case 0x20365cu: goto label_20365c;
        case 0x203660u: goto label_203660;
        case 0x203664u: goto label_203664;
        case 0x203668u: goto label_203668;
        case 0x20366cu: goto label_20366c;
        case 0x203670u: goto label_203670;
        case 0x203674u: goto label_203674;
        case 0x203678u: goto label_203678;
        case 0x20367cu: goto label_20367c;
        case 0x203680u: goto label_203680;
        case 0x203684u: goto label_203684;
        case 0x203688u: goto label_203688;
        case 0x20368cu: goto label_20368c;
        case 0x203690u: goto label_203690;
        case 0x203694u: goto label_203694;
        case 0x203698u: goto label_203698;
        case 0x20369cu: goto label_20369c;
        case 0x2036a0u: goto label_2036a0;
        case 0x2036a4u: goto label_2036a4;
        case 0x2036a8u: goto label_2036a8;
        case 0x2036acu: goto label_2036ac;
        case 0x2036b0u: goto label_2036b0;
        case 0x2036b4u: goto label_2036b4;
        case 0x2036b8u: goto label_2036b8;
        case 0x2036bcu: goto label_2036bc;
        case 0x2036c0u: goto label_2036c0;
        case 0x2036c4u: goto label_2036c4;
        case 0x2036c8u: goto label_2036c8;
        case 0x2036ccu: goto label_2036cc;
        case 0x2036d0u: goto label_2036d0;
        case 0x2036d4u: goto label_2036d4;
        case 0x2036d8u: goto label_2036d8;
        case 0x2036dcu: goto label_2036dc;
        case 0x2036e0u: goto label_2036e0;
        case 0x2036e4u: goto label_2036e4;
        case 0x2036e8u: goto label_2036e8;
        case 0x2036ecu: goto label_2036ec;
        case 0x2036f0u: goto label_2036f0;
        case 0x2036f4u: goto label_2036f4;
        case 0x2036f8u: goto label_2036f8;
        case 0x2036fcu: goto label_2036fc;
        case 0x203700u: goto label_203700;
        case 0x203704u: goto label_203704;
        case 0x203708u: goto label_203708;
        case 0x20370cu: goto label_20370c;
        case 0x203710u: goto label_203710;
        case 0x203714u: goto label_203714;
        case 0x203718u: goto label_203718;
        case 0x20371cu: goto label_20371c;
        case 0x203720u: goto label_203720;
        case 0x203724u: goto label_203724;
        case 0x203728u: goto label_203728;
        case 0x20372cu: goto label_20372c;
        case 0x203730u: goto label_203730;
        case 0x203734u: goto label_203734;
        case 0x203738u: goto label_203738;
        case 0x20373cu: goto label_20373c;
        case 0x203740u: goto label_203740;
        case 0x203744u: goto label_203744;
        case 0x203748u: goto label_203748;
        case 0x20374cu: goto label_20374c;
        case 0x203750u: goto label_203750;
        case 0x203754u: goto label_203754;
        case 0x203758u: goto label_203758;
        case 0x20375cu: goto label_20375c;
        case 0x203760u: goto label_203760;
        case 0x203764u: goto label_203764;
        case 0x203768u: goto label_203768;
        case 0x20376cu: goto label_20376c;
        case 0x203770u: goto label_203770;
        case 0x203774u: goto label_203774;
        case 0x203778u: goto label_203778;
        case 0x20377cu: goto label_20377c;
        case 0x203780u: goto label_203780;
        case 0x203784u: goto label_203784;
        case 0x203788u: goto label_203788;
        case 0x20378cu: goto label_20378c;
        case 0x203790u: goto label_203790;
        case 0x203794u: goto label_203794;
        case 0x203798u: goto label_203798;
        case 0x20379cu: goto label_20379c;
        case 0x2037a0u: goto label_2037a0;
        case 0x2037a4u: goto label_2037a4;
        case 0x2037a8u: goto label_2037a8;
        case 0x2037acu: goto label_2037ac;
        case 0x2037b0u: goto label_2037b0;
        case 0x2037b4u: goto label_2037b4;
        case 0x2037b8u: goto label_2037b8;
        case 0x2037bcu: goto label_2037bc;
        case 0x2037c0u: goto label_2037c0;
        case 0x2037c4u: goto label_2037c4;
        case 0x2037c8u: goto label_2037c8;
        case 0x2037ccu: goto label_2037cc;
        case 0x2037d0u: goto label_2037d0;
        case 0x2037d4u: goto label_2037d4;
        case 0x2037d8u: goto label_2037d8;
        case 0x2037dcu: goto label_2037dc;
        case 0x2037e0u: goto label_2037e0;
        case 0x2037e4u: goto label_2037e4;
        case 0x2037e8u: goto label_2037e8;
        case 0x2037ecu: goto label_2037ec;
        case 0x2037f0u: goto label_2037f0;
        case 0x2037f4u: goto label_2037f4;
        case 0x2037f8u: goto label_2037f8;
        case 0x2037fcu: goto label_2037fc;
        case 0x203800u: goto label_203800;
        case 0x203804u: goto label_203804;
        case 0x203808u: goto label_203808;
        case 0x20380cu: goto label_20380c;
        case 0x203810u: goto label_203810;
        case 0x203814u: goto label_203814;
        case 0x203818u: goto label_203818;
        case 0x20381cu: goto label_20381c;
        case 0x203820u: goto label_203820;
        case 0x203824u: goto label_203824;
        case 0x203828u: goto label_203828;
        case 0x20382cu: goto label_20382c;
        case 0x203830u: goto label_203830;
        case 0x203834u: goto label_203834;
        case 0x203838u: goto label_203838;
        case 0x20383cu: goto label_20383c;
        case 0x203840u: goto label_203840;
        case 0x203844u: goto label_203844;
        case 0x203848u: goto label_203848;
        case 0x20384cu: goto label_20384c;
        case 0x203850u: goto label_203850;
        case 0x203854u: goto label_203854;
        case 0x203858u: goto label_203858;
        case 0x20385cu: goto label_20385c;
        case 0x203860u: goto label_203860;
        case 0x203864u: goto label_203864;
        case 0x203868u: goto label_203868;
        case 0x20386cu: goto label_20386c;
        case 0x203870u: goto label_203870;
        case 0x203874u: goto label_203874;
        case 0x203878u: goto label_203878;
        case 0x20387cu: goto label_20387c;
        case 0x203880u: goto label_203880;
        case 0x203884u: goto label_203884;
        case 0x203888u: goto label_203888;
        case 0x20388cu: goto label_20388c;
        case 0x203890u: goto label_203890;
        case 0x203894u: goto label_203894;
        case 0x203898u: goto label_203898;
        case 0x20389cu: goto label_20389c;
        case 0x2038a0u: goto label_2038a0;
        case 0x2038a4u: goto label_2038a4;
        case 0x2038a8u: goto label_2038a8;
        case 0x2038acu: goto label_2038ac;
        case 0x2038b0u: goto label_2038b0;
        case 0x2038b4u: goto label_2038b4;
        case 0x2038b8u: goto label_2038b8;
        case 0x2038bcu: goto label_2038bc;
        case 0x2038c0u: goto label_2038c0;
        case 0x2038c4u: goto label_2038c4;
        case 0x2038c8u: goto label_2038c8;
        case 0x2038ccu: goto label_2038cc;
        case 0x2038d0u: goto label_2038d0;
        case 0x2038d4u: goto label_2038d4;
        case 0x2038d8u: goto label_2038d8;
        case 0x2038dcu: goto label_2038dc;
        case 0x2038e0u: goto label_2038e0;
        case 0x2038e4u: goto label_2038e4;
        case 0x2038e8u: goto label_2038e8;
        case 0x2038ecu: goto label_2038ec;
        case 0x2038f0u: goto label_2038f0;
        case 0x2038f4u: goto label_2038f4;
        case 0x2038f8u: goto label_2038f8;
        case 0x2038fcu: goto label_2038fc;
        case 0x203900u: goto label_203900;
        case 0x203904u: goto label_203904;
        case 0x203908u: goto label_203908;
        case 0x20390cu: goto label_20390c;
        case 0x203910u: goto label_203910;
        case 0x203914u: goto label_203914;
        case 0x203918u: goto label_203918;
        case 0x20391cu: goto label_20391c;
        case 0x203920u: goto label_203920;
        case 0x203924u: goto label_203924;
        case 0x203928u: goto label_203928;
        case 0x20392cu: goto label_20392c;
        case 0x203930u: goto label_203930;
        case 0x203934u: goto label_203934;
        case 0x203938u: goto label_203938;
        case 0x20393cu: goto label_20393c;
        case 0x203940u: goto label_203940;
        case 0x203944u: goto label_203944;
        case 0x203948u: goto label_203948;
        case 0x20394cu: goto label_20394c;
        case 0x203950u: goto label_203950;
        case 0x203954u: goto label_203954;
        case 0x203958u: goto label_203958;
        case 0x20395cu: goto label_20395c;
        case 0x203960u: goto label_203960;
        case 0x203964u: goto label_203964;
        case 0x203968u: goto label_203968;
        case 0x20396cu: goto label_20396c;
        case 0x203970u: goto label_203970;
        case 0x203974u: goto label_203974;
        case 0x203978u: goto label_203978;
        case 0x20397cu: goto label_20397c;
        case 0x203980u: goto label_203980;
        case 0x203984u: goto label_203984;
        case 0x203988u: goto label_203988;
        case 0x20398cu: goto label_20398c;
        case 0x203990u: goto label_203990;
        case 0x203994u: goto label_203994;
        case 0x203998u: goto label_203998;
        case 0x20399cu: goto label_20399c;
        case 0x2039a0u: goto label_2039a0;
        case 0x2039a4u: goto label_2039a4;
        case 0x2039a8u: goto label_2039a8;
        case 0x2039acu: goto label_2039ac;
        case 0x2039b0u: goto label_2039b0;
        case 0x2039b4u: goto label_2039b4;
        case 0x2039b8u: goto label_2039b8;
        case 0x2039bcu: goto label_2039bc;
        case 0x2039c0u: goto label_2039c0;
        case 0x2039c4u: goto label_2039c4;
        case 0x2039c8u: goto label_2039c8;
        case 0x2039ccu: goto label_2039cc;
        case 0x2039d0u: goto label_2039d0;
        case 0x2039d4u: goto label_2039d4;
        case 0x2039d8u: goto label_2039d8;
        case 0x2039dcu: goto label_2039dc;
        case 0x2039e0u: goto label_2039e0;
        case 0x2039e4u: goto label_2039e4;
        case 0x2039e8u: goto label_2039e8;
        case 0x2039ecu: goto label_2039ec;
        case 0x2039f0u: goto label_2039f0;
        case 0x2039f4u: goto label_2039f4;
        case 0x2039f8u: goto label_2039f8;
        case 0x2039fcu: goto label_2039fc;
        case 0x203a00u: goto label_203a00;
        case 0x203a04u: goto label_203a04;
        case 0x203a08u: goto label_203a08;
        case 0x203a0cu: goto label_203a0c;
        case 0x203a10u: goto label_203a10;
        case 0x203a14u: goto label_203a14;
        case 0x203a18u: goto label_203a18;
        case 0x203a1cu: goto label_203a1c;
        case 0x203a20u: goto label_203a20;
        case 0x203a24u: goto label_203a24;
        case 0x203a28u: goto label_203a28;
        case 0x203a2cu: goto label_203a2c;
        case 0x203a30u: goto label_203a30;
        case 0x203a34u: goto label_203a34;
        case 0x203a38u: goto label_203a38;
        case 0x203a3cu: goto label_203a3c;
        case 0x203a40u: goto label_203a40;
        case 0x203a44u: goto label_203a44;
        case 0x203a48u: goto label_203a48;
        case 0x203a4cu: goto label_203a4c;
        case 0x203a50u: goto label_203a50;
        case 0x203a54u: goto label_203a54;
        case 0x203a58u: goto label_203a58;
        case 0x203a5cu: goto label_203a5c;
        case 0x203a60u: goto label_203a60;
        case 0x203a64u: goto label_203a64;
        case 0x203a68u: goto label_203a68;
        case 0x203a6cu: goto label_203a6c;
        case 0x203a70u: goto label_203a70;
        case 0x203a74u: goto label_203a74;
        case 0x203a78u: goto label_203a78;
        case 0x203a7cu: goto label_203a7c;
        case 0x203a80u: goto label_203a80;
        case 0x203a84u: goto label_203a84;
        case 0x203a88u: goto label_203a88;
        case 0x203a8cu: goto label_203a8c;
        case 0x203a90u: goto label_203a90;
        case 0x203a94u: goto label_203a94;
        case 0x203a98u: goto label_203a98;
        case 0x203a9cu: goto label_203a9c;
        case 0x203aa0u: goto label_203aa0;
        case 0x203aa4u: goto label_203aa4;
        case 0x203aa8u: goto label_203aa8;
        case 0x203aacu: goto label_203aac;
        case 0x203ab0u: goto label_203ab0;
        case 0x203ab4u: goto label_203ab4;
        case 0x203ab8u: goto label_203ab8;
        case 0x203abcu: goto label_203abc;
        case 0x203ac0u: goto label_203ac0;
        case 0x203ac4u: goto label_203ac4;
        case 0x203ac8u: goto label_203ac8;
        case 0x203accu: goto label_203acc;
        case 0x203ad0u: goto label_203ad0;
        case 0x203ad4u: goto label_203ad4;
        case 0x203ad8u: goto label_203ad8;
        case 0x203adcu: goto label_203adc;
        case 0x203ae0u: goto label_203ae0;
        case 0x203ae4u: goto label_203ae4;
        case 0x203ae8u: goto label_203ae8;
        case 0x203aecu: goto label_203aec;
        case 0x203af0u: goto label_203af0;
        case 0x203af4u: goto label_203af4;
        case 0x203af8u: goto label_203af8;
        case 0x203afcu: goto label_203afc;
        case 0x203b00u: goto label_203b00;
        case 0x203b04u: goto label_203b04;
        case 0x203b08u: goto label_203b08;
        case 0x203b0cu: goto label_203b0c;
        case 0x203b10u: goto label_203b10;
        case 0x203b14u: goto label_203b14;
        case 0x203b18u: goto label_203b18;
        case 0x203b1cu: goto label_203b1c;
        case 0x203b20u: goto label_203b20;
        case 0x203b24u: goto label_203b24;
        case 0x203b28u: goto label_203b28;
        case 0x203b2cu: goto label_203b2c;
        case 0x203b30u: goto label_203b30;
        case 0x203b34u: goto label_203b34;
        case 0x203b38u: goto label_203b38;
        case 0x203b3cu: goto label_203b3c;
        case 0x203b40u: goto label_203b40;
        case 0x203b44u: goto label_203b44;
        case 0x203b48u: goto label_203b48;
        case 0x203b4cu: goto label_203b4c;
        case 0x203b50u: goto label_203b50;
        case 0x203b54u: goto label_203b54;
        case 0x203b58u: goto label_203b58;
        case 0x203b5cu: goto label_203b5c;
        case 0x203b60u: goto label_203b60;
        case 0x203b64u: goto label_203b64;
        case 0x203b68u: goto label_203b68;
        case 0x203b6cu: goto label_203b6c;
        case 0x203b70u: goto label_203b70;
        case 0x203b74u: goto label_203b74;
        case 0x203b78u: goto label_203b78;
        case 0x203b7cu: goto label_203b7c;
        case 0x203b80u: goto label_203b80;
        case 0x203b84u: goto label_203b84;
        case 0x203b88u: goto label_203b88;
        case 0x203b8cu: goto label_203b8c;
        case 0x203b90u: goto label_203b90;
        case 0x203b94u: goto label_203b94;
        case 0x203b98u: goto label_203b98;
        case 0x203b9cu: goto label_203b9c;
        case 0x203ba0u: goto label_203ba0;
        case 0x203ba4u: goto label_203ba4;
        case 0x203ba8u: goto label_203ba8;
        case 0x203bacu: goto label_203bac;
        case 0x203bb0u: goto label_203bb0;
        case 0x203bb4u: goto label_203bb4;
        case 0x203bb8u: goto label_203bb8;
        case 0x203bbcu: goto label_203bbc;
        case 0x203bc0u: goto label_203bc0;
        case 0x203bc4u: goto label_203bc4;
        case 0x203bc8u: goto label_203bc8;
        case 0x203bccu: goto label_203bcc;
        case 0x203bd0u: goto label_203bd0;
        case 0x203bd4u: goto label_203bd4;
        case 0x203bd8u: goto label_203bd8;
        case 0x203bdcu: goto label_203bdc;
        case 0x203be0u: goto label_203be0;
        case 0x203be4u: goto label_203be4;
        case 0x203be8u: goto label_203be8;
        case 0x203becu: goto label_203bec;
        case 0x203bf0u: goto label_203bf0;
        case 0x203bf4u: goto label_203bf4;
        case 0x203bf8u: goto label_203bf8;
        case 0x203bfcu: goto label_203bfc;
        case 0x203c00u: goto label_203c00;
        case 0x203c04u: goto label_203c04;
        case 0x203c08u: goto label_203c08;
        case 0x203c0cu: goto label_203c0c;
        case 0x203c10u: goto label_203c10;
        case 0x203c14u: goto label_203c14;
        case 0x203c18u: goto label_203c18;
        case 0x203c1cu: goto label_203c1c;
        case 0x203c20u: goto label_203c20;
        case 0x203c24u: goto label_203c24;
        case 0x203c28u: goto label_203c28;
        case 0x203c2cu: goto label_203c2c;
        case 0x203c30u: goto label_203c30;
        case 0x203c34u: goto label_203c34;
        case 0x203c38u: goto label_203c38;
        case 0x203c3cu: goto label_203c3c;
        case 0x203c40u: goto label_203c40;
        case 0x203c44u: goto label_203c44;
        case 0x203c48u: goto label_203c48;
        case 0x203c4cu: goto label_203c4c;
        case 0x203c50u: goto label_203c50;
        case 0x203c54u: goto label_203c54;
        case 0x203c58u: goto label_203c58;
        case 0x203c5cu: goto label_203c5c;
        case 0x203c60u: goto label_203c60;
        case 0x203c64u: goto label_203c64;
        case 0x203c68u: goto label_203c68;
        case 0x203c6cu: goto label_203c6c;
        case 0x203c70u: goto label_203c70;
        case 0x203c74u: goto label_203c74;
        case 0x203c78u: goto label_203c78;
        case 0x203c7cu: goto label_203c7c;
        case 0x203c80u: goto label_203c80;
        case 0x203c84u: goto label_203c84;
        case 0x203c88u: goto label_203c88;
        case 0x203c8cu: goto label_203c8c;
        case 0x203c90u: goto label_203c90;
        case 0x203c94u: goto label_203c94;
        case 0x203c98u: goto label_203c98;
        case 0x203c9cu: goto label_203c9c;
        case 0x203ca0u: goto label_203ca0;
        case 0x203ca4u: goto label_203ca4;
        case 0x203ca8u: goto label_203ca8;
        case 0x203cacu: goto label_203cac;
        case 0x203cb0u: goto label_203cb0;
        case 0x203cb4u: goto label_203cb4;
        case 0x203cb8u: goto label_203cb8;
        case 0x203cbcu: goto label_203cbc;
        case 0x203cc0u: goto label_203cc0;
        case 0x203cc4u: goto label_203cc4;
        case 0x203cc8u: goto label_203cc8;
        case 0x203cccu: goto label_203ccc;
        case 0x203cd0u: goto label_203cd0;
        case 0x203cd4u: goto label_203cd4;
        case 0x203cd8u: goto label_203cd8;
        case 0x203cdcu: goto label_203cdc;
        case 0x203ce0u: goto label_203ce0;
        case 0x203ce4u: goto label_203ce4;
        case 0x203ce8u: goto label_203ce8;
        case 0x203cecu: goto label_203cec;
        case 0x203cf0u: goto label_203cf0;
        case 0x203cf4u: goto label_203cf4;
        case 0x203cf8u: goto label_203cf8;
        case 0x203cfcu: goto label_203cfc;
        case 0x203d00u: goto label_203d00;
        case 0x203d04u: goto label_203d04;
        case 0x203d08u: goto label_203d08;
        case 0x203d0cu: goto label_203d0c;
        case 0x203d10u: goto label_203d10;
        case 0x203d14u: goto label_203d14;
        case 0x203d18u: goto label_203d18;
        case 0x203d1cu: goto label_203d1c;
        case 0x203d20u: goto label_203d20;
        case 0x203d24u: goto label_203d24;
        case 0x203d28u: goto label_203d28;
        case 0x203d2cu: goto label_203d2c;
        case 0x203d30u: goto label_203d30;
        case 0x203d34u: goto label_203d34;
        case 0x203d38u: goto label_203d38;
        case 0x203d3cu: goto label_203d3c;
        case 0x203d40u: goto label_203d40;
        case 0x203d44u: goto label_203d44;
        case 0x203d48u: goto label_203d48;
        case 0x203d4cu: goto label_203d4c;
        case 0x203d50u: goto label_203d50;
        case 0x203d54u: goto label_203d54;
        case 0x203d58u: goto label_203d58;
        case 0x203d5cu: goto label_203d5c;
        case 0x203d60u: goto label_203d60;
        case 0x203d64u: goto label_203d64;
        case 0x203d68u: goto label_203d68;
        case 0x203d6cu: goto label_203d6c;
        case 0x203d70u: goto label_203d70;
        case 0x203d74u: goto label_203d74;
        case 0x203d78u: goto label_203d78;
        case 0x203d7cu: goto label_203d7c;
        case 0x203d80u: goto label_203d80;
        case 0x203d84u: goto label_203d84;
        case 0x203d88u: goto label_203d88;
        case 0x203d8cu: goto label_203d8c;
        case 0x203d90u: goto label_203d90;
        case 0x203d94u: goto label_203d94;
        case 0x203d98u: goto label_203d98;
        case 0x203d9cu: goto label_203d9c;
        case 0x203da0u: goto label_203da0;
        case 0x203da4u: goto label_203da4;
        case 0x203da8u: goto label_203da8;
        case 0x203dacu: goto label_203dac;
        case 0x203db0u: goto label_203db0;
        case 0x203db4u: goto label_203db4;
        case 0x203db8u: goto label_203db8;
        case 0x203dbcu: goto label_203dbc;
        case 0x203dc0u: goto label_203dc0;
        case 0x203dc4u: goto label_203dc4;
        case 0x203dc8u: goto label_203dc8;
        case 0x203dccu: goto label_203dcc;
        case 0x203dd0u: goto label_203dd0;
        case 0x203dd4u: goto label_203dd4;
        case 0x203dd8u: goto label_203dd8;
        case 0x203ddcu: goto label_203ddc;
        case 0x203de0u: goto label_203de0;
        case 0x203de4u: goto label_203de4;
        case 0x203de8u: goto label_203de8;
        case 0x203decu: goto label_203dec;
        case 0x203df0u: goto label_203df0;
        case 0x203df4u: goto label_203df4;
        case 0x203df8u: goto label_203df8;
        case 0x203dfcu: goto label_203dfc;
        case 0x203e00u: goto label_203e00;
        case 0x203e04u: goto label_203e04;
        case 0x203e08u: goto label_203e08;
        case 0x203e0cu: goto label_203e0c;
        case 0x203e10u: goto label_203e10;
        case 0x203e14u: goto label_203e14;
        case 0x203e18u: goto label_203e18;
        case 0x203e1cu: goto label_203e1c;
        case 0x203e20u: goto label_203e20;
        case 0x203e24u: goto label_203e24;
        case 0x203e28u: goto label_203e28;
        case 0x203e2cu: goto label_203e2c;
        case 0x203e30u: goto label_203e30;
        case 0x203e34u: goto label_203e34;
        case 0x203e38u: goto label_203e38;
        case 0x203e3cu: goto label_203e3c;
        case 0x203e40u: goto label_203e40;
        case 0x203e44u: goto label_203e44;
        case 0x203e48u: goto label_203e48;
        case 0x203e4cu: goto label_203e4c;
        case 0x203e50u: goto label_203e50;
        case 0x203e54u: goto label_203e54;
        case 0x203e58u: goto label_203e58;
        case 0x203e5cu: goto label_203e5c;
        case 0x203e60u: goto label_203e60;
        case 0x203e64u: goto label_203e64;
        case 0x203e68u: goto label_203e68;
        case 0x203e6cu: goto label_203e6c;
        case 0x203e70u: goto label_203e70;
        case 0x203e74u: goto label_203e74;
        case 0x203e78u: goto label_203e78;
        case 0x203e7cu: goto label_203e7c;
        case 0x203e80u: goto label_203e80;
        case 0x203e84u: goto label_203e84;
        case 0x203e88u: goto label_203e88;
        case 0x203e8cu: goto label_203e8c;
        case 0x203e90u: goto label_203e90;
        case 0x203e94u: goto label_203e94;
        case 0x203e98u: goto label_203e98;
        case 0x203e9cu: goto label_203e9c;
        case 0x203ea0u: goto label_203ea0;
        case 0x203ea4u: goto label_203ea4;
        case 0x203ea8u: goto label_203ea8;
        case 0x203eacu: goto label_203eac;
        case 0x203eb0u: goto label_203eb0;
        case 0x203eb4u: goto label_203eb4;
        case 0x203eb8u: goto label_203eb8;
        case 0x203ebcu: goto label_203ebc;
        case 0x203ec0u: goto label_203ec0;
        case 0x203ec4u: goto label_203ec4;
        case 0x203ec8u: goto label_203ec8;
        case 0x203eccu: goto label_203ecc;
        case 0x203ed0u: goto label_203ed0;
        case 0x203ed4u: goto label_203ed4;
        case 0x203ed8u: goto label_203ed8;
        case 0x203edcu: goto label_203edc;
        case 0x203ee0u: goto label_203ee0;
        case 0x203ee4u: goto label_203ee4;
        case 0x203ee8u: goto label_203ee8;
        case 0x203eecu: goto label_203eec;
        case 0x203ef0u: goto label_203ef0;
        case 0x203ef4u: goto label_203ef4;
        case 0x203ef8u: goto label_203ef8;
        case 0x203efcu: goto label_203efc;
        case 0x203f00u: goto label_203f00;
        case 0x203f04u: goto label_203f04;
        case 0x203f08u: goto label_203f08;
        case 0x203f0cu: goto label_203f0c;
        case 0x203f10u: goto label_203f10;
        case 0x203f14u: goto label_203f14;
        case 0x203f18u: goto label_203f18;
        case 0x203f1cu: goto label_203f1c;
        case 0x203f20u: goto label_203f20;
        case 0x203f24u: goto label_203f24;
        case 0x203f28u: goto label_203f28;
        case 0x203f2cu: goto label_203f2c;
        case 0x203f30u: goto label_203f30;
        case 0x203f34u: goto label_203f34;
        case 0x203f38u: goto label_203f38;
        case 0x203f3cu: goto label_203f3c;
        case 0x203f40u: goto label_203f40;
        case 0x203f44u: goto label_203f44;
        case 0x203f48u: goto label_203f48;
        case 0x203f4cu: goto label_203f4c;
        case 0x203f50u: goto label_203f50;
        case 0x203f54u: goto label_203f54;
        case 0x203f58u: goto label_203f58;
        case 0x203f5cu: goto label_203f5c;
        case 0x203f60u: goto label_203f60;
        case 0x203f64u: goto label_203f64;
        case 0x203f68u: goto label_203f68;
        case 0x203f6cu: goto label_203f6c;
        case 0x203f70u: goto label_203f70;
        case 0x203f74u: goto label_203f74;
        case 0x203f78u: goto label_203f78;
        case 0x203f7cu: goto label_203f7c;
        case 0x203f80u: goto label_203f80;
        case 0x203f84u: goto label_203f84;
        case 0x203f88u: goto label_203f88;
        case 0x203f8cu: goto label_203f8c;
        case 0x203f90u: goto label_203f90;
        case 0x203f94u: goto label_203f94;
        case 0x203f98u: goto label_203f98;
        case 0x203f9cu: goto label_203f9c;
        case 0x203fa0u: goto label_203fa0;
        case 0x203fa4u: goto label_203fa4;
        case 0x203fa8u: goto label_203fa8;
        case 0x203facu: goto label_203fac;
        case 0x203fb0u: goto label_203fb0;
        case 0x203fb4u: goto label_203fb4;
        case 0x203fb8u: goto label_203fb8;
        case 0x203fbcu: goto label_203fbc;
        case 0x203fc0u: goto label_203fc0;
        case 0x203fc4u: goto label_203fc4;
        case 0x203fc8u: goto label_203fc8;
        case 0x203fccu: goto label_203fcc;
        case 0x203fd0u: goto label_203fd0;
        case 0x203fd4u: goto label_203fd4;
        case 0x203fd8u: goto label_203fd8;
        case 0x203fdcu: goto label_203fdc;
        case 0x203fe0u: goto label_203fe0;
        case 0x203fe4u: goto label_203fe4;
        case 0x203fe8u: goto label_203fe8;
        case 0x203fecu: goto label_203fec;
        case 0x203ff0u: goto label_203ff0;
        case 0x203ff4u: goto label_203ff4;
        case 0x203ff8u: goto label_203ff8;
        case 0x203ffcu: goto label_203ffc;
        case 0x204000u: goto label_204000;
        case 0x204004u: goto label_204004;
        case 0x204008u: goto label_204008;
        case 0x20400cu: goto label_20400c;
        default: break;
    }

    ctx->pc = 0x203350u;

label_203350:
    // 0x203350: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x203350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_203354:
    // 0x203354: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x203354u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
label_203358:
    // 0x203358: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x203358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_20335c:
    // 0x20335c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x20335cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_203360:
    // 0x203360: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x203360u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_203364:
    // 0x203364: 0x24c6e190  addiu       $a2, $a2, -0x1E70
    ctx->pc = 0x203364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959504));
label_203368:
    // 0x203368: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x203368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_20336c:
    // 0x20336c: 0x2463e1b8  addiu       $v1, $v1, -0x1E48
    ctx->pc = 0x20336cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959544));
label_203370:
    // 0x203370: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x203370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_203374:
    // 0x203374: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x203374u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_203378:
    // 0x203378: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x203378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20337c:
    // 0x20337c: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x20337cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_203380:
    // 0x203380: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x203380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_203384:
    // 0x203384: 0x2442e370  addiu       $v0, $v0, -0x1C90
    ctx->pc = 0x203384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959984));
label_203388:
    // 0x203388: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x203388u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_20338c:
    // 0x20338c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x20338cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_203390:
    // 0x203390: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x203390u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_203394:
    // 0x203394: 0x2442e3d0  addiu       $v0, $v0, -0x1C30
    ctx->pc = 0x203394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960080));
label_203398:
    // 0x203398: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x203398u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_20339c:
    // 0x20339c: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x20339cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
label_2033a0:
    // 0x2033a0: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x2033a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
label_2033a4:
    // 0x2033a4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2033a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2033a8:
    // 0x2033a8: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x2033a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
label_2033ac:
    // 0x2033ac: 0x3e00008  jr          $ra
label_2033b0:
    if (ctx->pc == 0x2033B0u) {
        ctx->pc = 0x2033B0u;
            // 0x2033b0: 0xa0800014  sb          $zero, 0x14($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2033B4u;
        goto label_2033b4;
    }
    ctx->pc = 0x2033ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2033B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2033ACu;
            // 0x2033b0: 0xa0800014  sb          $zero, 0x14($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2033B4u;
label_2033b4:
    // 0x2033b4: 0x0  nop
    ctx->pc = 0x2033b4u;
    // NOP
label_2033b8:
    // 0x2033b8: 0x0  nop
    ctx->pc = 0x2033b8u;
    // NOP
label_2033bc:
    // 0x2033bc: 0x0  nop
    ctx->pc = 0x2033bcu;
    // NOP
label_2033c0:
    // 0x2033c0: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x2033c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
label_2033c4:
    // 0x2033c4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2033c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2033c8:
    // 0x2033c8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2033c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2033cc:
    // 0x2033cc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2033ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2033d0:
    // 0x2033d0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2033d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2033d4:
    // 0x2033d4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2033d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2033d8:
    // 0x2033d8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2033d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2033dc:
    // 0x2033dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2033dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2033e0:
    // 0x2033e0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2033e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2033e4:
    // 0x2033e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2033e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2033e8:
    // 0x2033e8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2033e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2033ec:
    // 0x2033ec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2033ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2033f0:
    // 0x2033f0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2033f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2033f4:
    // 0x2033f4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2033f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2033f8:
    // 0x2033f8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2033f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2033fc:
    // 0x2033fc: 0x8c63ea64  lw          $v1, -0x159C($v1)
    ctx->pc = 0x2033fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_203400:
    // 0x203400: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x203400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_203404:
    // 0x203404: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x203404u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_203408:
    // 0x203408: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_20340c:
    if (ctx->pc == 0x20340Cu) {
        ctx->pc = 0x20340Cu;
            // 0x20340c: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x203410u;
        goto label_203410;
    }
    ctx->pc = 0x203408u;
    {
        const bool branch_taken_0x203408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20340Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203408u;
            // 0x20340c: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203408) {
            ctx->pc = 0x203438u;
            goto label_203438;
        }
    }
    ctx->pc = 0x203410u;
label_203410:
    // 0x203410: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x203410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_203414:
    // 0x203414: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x203414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_203418:
    // 0x203418: 0x2442b618  addiu       $v0, $v0, -0x49E8
    ctx->pc = 0x203418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948376));
label_20341c:
    // 0x20341c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x20341cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_203420:
    // 0x203420: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x203420u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_203424:
    // 0x203424: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x203424u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_203428:
    // 0x203428: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x203428u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_20342c:
    // 0x20342c: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x20342cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_203430:
    // 0x203430: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x203430u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_203434:
    // 0x203434: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x203434u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_203438:
    // 0x203438: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x203438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_20343c:
    // 0x20343c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20343cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_203440:
    // 0x203440: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x203440u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
label_203444:
    // 0x203444: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x203444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_203448:
    // 0x203448: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
label_20344c:
    if (ctx->pc == 0x20344Cu) {
        ctx->pc = 0x20344Cu;
            // 0x20344c: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x203450u;
        goto label_203450;
    }
    ctx->pc = 0x203448u;
    {
        const bool branch_taken_0x203448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20344Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203448u;
            // 0x20344c: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203448) {
            ctx->pc = 0x2034E4u;
            goto label_2034e4;
        }
    }
    ctx->pc = 0x203450u;
label_203450:
    // 0x203450: 0x8e790010  lw          $t9, 0x10($s3)
    ctx->pc = 0x203450u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_203454:
    // 0x203454: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x203454u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_203458:
    // 0x203458: 0x320f809  jalr        $t9
label_20345c:
    if (ctx->pc == 0x20345Cu) {
        ctx->pc = 0x20345Cu;
            // 0x20345c: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x203460u;
        goto label_203460;
    }
    ctx->pc = 0x203458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x203460u);
        ctx->pc = 0x20345Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203458u;
            // 0x20345c: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x203460u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x203460u; }
            if (ctx->pc != 0x203460u) { return; }
        }
        }
    }
    ctx->pc = 0x203460u;
label_203460:
    // 0x203460: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x203460u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_203464:
    // 0x203464: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x203464u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_203468:
    // 0x203468: 0x1283004f  beq         $s4, $v1, . + 4 + (0x4F << 2)
label_20346c:
    if (ctx->pc == 0x20346Cu) {
        ctx->pc = 0x203470u;
        goto label_203470;
    }
    ctx->pc = 0x203468u;
    {
        const bool branch_taken_0x203468 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x203468) {
            ctx->pc = 0x2035A8u;
            goto label_2035a8;
        }
    }
    ctx->pc = 0x203470u;
label_203470:
    // 0x203470: 0x8e790010  lw          $t9, 0x10($s3)
    ctx->pc = 0x203470u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_203474:
    // 0x203474: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x203474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_203478:
    // 0x203478: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x203478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20347c:
    // 0x20347c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x20347cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_203480:
    // 0x203480: 0x320f809  jalr        $t9
label_203484:
    if (ctx->pc == 0x203484u) {
        ctx->pc = 0x203484u;
            // 0x203484: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x203488u;
        goto label_203488;
    }
    ctx->pc = 0x203480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x203488u);
        ctx->pc = 0x203484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203480u;
            // 0x203484: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x203488u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x203488u; }
            if (ctx->pc != 0x203488u) { return; }
        }
        }
    }
    ctx->pc = 0x203488u;
label_203488:
    // 0x203488: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x203488u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20348c:
    // 0x20348c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20348cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_203490:
    // 0x203490: 0x27a4027c  addiu       $a0, $sp, 0x27C
    ctx->pc = 0x203490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 636));
label_203494:
    // 0x203494: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x203494u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_203498:
    // 0x203498: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x203498u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_20349c:
    // 0x20349c: 0x320f809  jalr        $t9
label_2034a0:
    if (ctx->pc == 0x2034A0u) {
        ctx->pc = 0x2034A0u;
            // 0x2034a0: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2034A4u;
        goto label_2034a4;
    }
    ctx->pc = 0x20349Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2034A4u);
        ctx->pc = 0x2034A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20349Cu;
            // 0x2034a0: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2034A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2034A4u; }
            if (ctx->pc != 0x2034A4u) { return; }
        }
        }
    }
    ctx->pc = 0x2034A4u;
label_2034a4:
    // 0x2034a4: 0x83a2027c  lb          $v0, 0x27C($sp)
    ctx->pc = 0x2034a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 636)));
label_2034a8:
    // 0x2034a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2034ac:
    if (ctx->pc == 0x2034ACu) {
        ctx->pc = 0x2034B0u;
        goto label_2034b0;
    }
    ctx->pc = 0x2034A8u;
    {
        const bool branch_taken_0x2034a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2034a8) {
            ctx->pc = 0x2034B8u;
            goto label_2034b8;
        }
    }
    ctx->pc = 0x2034B0u;
label_2034b0:
    // 0x2034b0: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x2034b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2034b4:
    // 0x2034b4: 0x0  nop
    ctx->pc = 0x2034b4u;
    // NOP
label_2034b8:
    // 0x2034b8: 0x8e790010  lw          $t9, 0x10($s3)
    ctx->pc = 0x2034b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2034bc:
    // 0x2034bc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2034bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2034c0:
    // 0x2034c0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2034c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2034c4:
    // 0x2034c4: 0x320f809  jalr        $t9
label_2034c8:
    if (ctx->pc == 0x2034C8u) {
        ctx->pc = 0x2034C8u;
            // 0x2034c8: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x2034CCu;
        goto label_2034cc;
    }
    ctx->pc = 0x2034C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2034CCu);
        ctx->pc = 0x2034C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2034C4u;
            // 0x2034c8: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2034CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2034CCu; }
            if (ctx->pc != 0x2034CCu) { return; }
        }
        }
    }
    ctx->pc = 0x2034CCu;
label_2034cc:
    // 0x2034cc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2034ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2034d0:
    // 0x2034d0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2034d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2034d4:
    // 0x2034d4: 0x5683ffe7  bnel        $s4, $v1, . + 4 + (-0x19 << 2)
label_2034d8:
    if (ctx->pc == 0x2034D8u) {
        ctx->pc = 0x2034D8u;
            // 0x2034d8: 0x8e790010  lw          $t9, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->pc = 0x2034DCu;
        goto label_2034dc;
    }
    ctx->pc = 0x2034D4u;
    {
        const bool branch_taken_0x2034d4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        if (branch_taken_0x2034d4) {
            ctx->pc = 0x2034D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2034D4u;
            // 0x2034d8: 0x8e790010  lw          $t9, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x203474u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_203474;
        }
    }
    ctx->pc = 0x2034DCu;
label_2034dc:
    // 0x2034dc: 0x10000032  b           . + 4 + (0x32 << 2)
label_2034e0:
    if (ctx->pc == 0x2034E0u) {
        ctx->pc = 0x2034E4u;
        goto label_2034e4;
    }
    ctx->pc = 0x2034DCu;
    {
        const bool branch_taken_0x2034dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2034dc) {
            ctx->pc = 0x2035A8u;
            goto label_2035a8;
        }
    }
    ctx->pc = 0x2034E4u;
label_2034e4:
    // 0x2034e4: 0x8e790010  lw          $t9, 0x10($s3)
    ctx->pc = 0x2034e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2034e8:
    // 0x2034e8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2034e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2034ec:
    // 0x2034ec: 0x320f809  jalr        $t9
label_2034f0:
    if (ctx->pc == 0x2034F0u) {
        ctx->pc = 0x2034F0u;
            // 0x2034f0: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x2034F4u;
        goto label_2034f4;
    }
    ctx->pc = 0x2034ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2034F4u);
        ctx->pc = 0x2034F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2034ECu;
            // 0x2034f0: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2034F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2034F4u; }
            if (ctx->pc != 0x2034F4u) { return; }
        }
        }
    }
    ctx->pc = 0x2034F4u;
label_2034f4:
    // 0x2034f4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2034f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2034f8:
    // 0x2034f8: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x2034f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2034fc:
    // 0x2034fc: 0x1283002a  beq         $s4, $v1, . + 4 + (0x2A << 2)
label_203500:
    if (ctx->pc == 0x203500u) {
        ctx->pc = 0x203504u;
        goto label_203504;
    }
    ctx->pc = 0x2034FCu;
    {
        const bool branch_taken_0x2034fc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x2034fc) {
            ctx->pc = 0x2035A8u;
            goto label_2035a8;
        }
    }
    ctx->pc = 0x203504u;
label_203504:
    // 0x203504: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x203504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_203508:
    // 0x203508: 0x27a40278  addiu       $a0, $sp, 0x278
    ctx->pc = 0x203508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 632));
label_20350c:
    // 0x20350c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x20350cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_203510:
    // 0x203510: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x203510u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_203514:
    // 0x203514: 0x26680010  addiu       $t0, $s3, 0x10
    ctx->pc = 0x203514u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_203518:
    // 0x203518: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x203518u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20351c:
    // 0x20351c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x20351cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_203520:
    // 0x203520: 0x320f809  jalr        $t9
label_203524:
    if (ctx->pc == 0x203524u) {
        ctx->pc = 0x203524u;
            // 0x203524: 0x280482d  daddu       $t1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x203528u;
        goto label_203528;
    }
    ctx->pc = 0x203520u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x203528u);
        ctx->pc = 0x203524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203520u;
            // 0x203524: 0x280482d  daddu       $t1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x203528u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x203528u; }
            if (ctx->pc != 0x203528u) { return; }
        }
        }
    }
    ctx->pc = 0x203528u;
label_203528:
    // 0x203528: 0x27a20278  addiu       $v0, $sp, 0x278
    ctx->pc = 0x203528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 632));
label_20352c:
    // 0x20352c: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x20352cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_203530:
    // 0x203530: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_203534:
    if (ctx->pc == 0x203534u) {
        ctx->pc = 0x203538u;
        goto label_203538;
    }
    ctx->pc = 0x203530u;
    {
        const bool branch_taken_0x203530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x203530) {
            ctx->pc = 0x203580u;
            goto label_203580;
        }
    }
    ctx->pc = 0x203538u;
label_203538:
    // 0x203538: 0x8e790010  lw          $t9, 0x10($s3)
    ctx->pc = 0x203538u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_20353c:
    // 0x20353c: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x20353cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_203540:
    // 0x203540: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x203540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_203544:
    // 0x203544: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x203544u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_203548:
    // 0x203548: 0x320f809  jalr        $t9
label_20354c:
    if (ctx->pc == 0x20354Cu) {
        ctx->pc = 0x20354Cu;
            // 0x20354c: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x203550u;
        goto label_203550;
    }
    ctx->pc = 0x203548u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x203550u);
        ctx->pc = 0x20354Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203548u;
            // 0x20354c: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x203550u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x203550u; }
            if (ctx->pc != 0x203550u) { return; }
        }
        }
    }
    ctx->pc = 0x203550u;
label_203550:
    // 0x203550: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x203550u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_203554:
    // 0x203554: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x203554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_203558:
    // 0x203558: 0x27a40274  addiu       $a0, $sp, 0x274
    ctx->pc = 0x203558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 628));
label_20355c:
    // 0x20355c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x20355cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_203560:
    // 0x203560: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x203560u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_203564:
    // 0x203564: 0x320f809  jalr        $t9
label_203568:
    if (ctx->pc == 0x203568u) {
        ctx->pc = 0x203568u;
            // 0x203568: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20356Cu;
        goto label_20356c;
    }
    ctx->pc = 0x203564u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20356Cu);
        ctx->pc = 0x203568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203564u;
            // 0x203568: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20356Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20356Cu; }
            if (ctx->pc != 0x20356Cu) { return; }
        }
        }
    }
    ctx->pc = 0x20356Cu;
label_20356c:
    // 0x20356c: 0x83a20274  lb          $v0, 0x274($sp)
    ctx->pc = 0x20356cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 628)));
label_203570:
    // 0x203570: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_203574:
    if (ctx->pc == 0x203574u) {
        ctx->pc = 0x203578u;
        goto label_203578;
    }
    ctx->pc = 0x203570u;
    {
        const bool branch_taken_0x203570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x203570) {
            ctx->pc = 0x203580u;
            goto label_203580;
        }
    }
    ctx->pc = 0x203578u;
label_203578:
    // 0x203578: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x203578u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20357c:
    // 0x20357c: 0x0  nop
    ctx->pc = 0x20357cu;
    // NOP
label_203580:
    // 0x203580: 0x8e790010  lw          $t9, 0x10($s3)
    ctx->pc = 0x203580u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_203584:
    // 0x203584: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x203584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_203588:
    // 0x203588: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x203588u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_20358c:
    // 0x20358c: 0x320f809  jalr        $t9
label_203590:
    if (ctx->pc == 0x203590u) {
        ctx->pc = 0x203590u;
            // 0x203590: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x203594u;
        goto label_203594;
    }
    ctx->pc = 0x20358Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x203594u);
        ctx->pc = 0x203590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20358Cu;
            // 0x203590: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x203594u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x203594u; }
            if (ctx->pc != 0x203594u) { return; }
        }
        }
    }
    ctx->pc = 0x203594u;
label_203594:
    // 0x203594: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x203594u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_203598:
    // 0x203598: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x203598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_20359c:
    // 0x20359c: 0x5683ffda  bnel        $s4, $v1, . + 4 + (-0x26 << 2)
label_2035a0:
    if (ctx->pc == 0x2035A0u) {
        ctx->pc = 0x2035A0u;
            // 0x2035a0: 0x8e450024  lw          $a1, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->pc = 0x2035A4u;
        goto label_2035a4;
    }
    ctx->pc = 0x20359Cu;
    {
        const bool branch_taken_0x20359c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        if (branch_taken_0x20359c) {
            ctx->pc = 0x2035A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20359Cu;
            // 0x2035a0: 0x8e450024  lw          $a1, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x203508u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_203508;
        }
    }
    ctx->pc = 0x2035A4u;
label_2035a4:
    // 0x2035a4: 0x0  nop
    ctx->pc = 0x2035a4u;
    // NOP
label_2035a8:
    // 0x2035a8: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x2035a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_2035ac:
    // 0x2035ac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2035acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2035b0:
    // 0x2035b0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2035b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_2035b4:
    // 0x2035b4: 0x12030005  beq         $s0, $v1, . + 4 + (0x5 << 2)
label_2035b8:
    if (ctx->pc == 0x2035B8u) {
        ctx->pc = 0x2035B8u;
            // 0x2035b8: 0xae240040  sw          $a0, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 4));
        ctx->pc = 0x2035BCu;
        goto label_2035bc;
    }
    ctx->pc = 0x2035B4u;
    {
        const bool branch_taken_0x2035b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x2035B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2035B4u;
            // 0x2035b8: 0xae240040  sw          $a0, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2035b4) {
            ctx->pc = 0x2035CCu;
            goto label_2035cc;
        }
    }
    ctx->pc = 0x2035BCu;
label_2035bc:
    // 0x2035bc: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x2035bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_2035c0:
    // 0x2035c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2035c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2035c4:
    // 0x2035c4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x2035c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_2035c8:
    // 0x2035c8: 0xac700020  sw          $s0, 0x20($v1)
    ctx->pc = 0x2035c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 16));
label_2035cc:
    // 0x2035cc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2035ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2035d0:
    // 0x2035d0: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x2035d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_2035d4:
    // 0x2035d4: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x2035d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_2035d8:
    // 0x2035d8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2035d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2035dc:
    // 0x2035dc: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x2035dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_2035e0:
    // 0x2035e0: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x2035e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2035e4:
    // 0x2035e4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_2035e8:
    if (ctx->pc == 0x2035E8u) {
        ctx->pc = 0x2035E8u;
            // 0x2035e8: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x2035ECu;
        goto label_2035ec;
    }
    ctx->pc = 0x2035E4u;
    {
        const bool branch_taken_0x2035e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2035E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2035E4u;
            // 0x2035e8: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2035e4) {
            ctx->pc = 0x203614u;
            goto label_203614;
        }
    }
    ctx->pc = 0x2035ECu;
label_2035ec:
    // 0x2035ec: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x2035ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2035f0:
    // 0x2035f0: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2035f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_2035f4:
    // 0x2035f4: 0x2463b628  addiu       $v1, $v1, -0x49D8
    ctx->pc = 0x2035f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948392));
label_2035f8:
    // 0x2035f8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2035f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2035fc:
    // 0x2035fc: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2035fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_203600:
    // 0x203600: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x203600u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_203604:
    // 0x203604: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x203604u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_203608:
    // 0x203608: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x203608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_20360c:
    // 0x20360c: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x20360cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_203610:
    // 0x203610: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x203610u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_203614:
    // 0x203614: 0x2001827  not         $v1, $s0
    ctx->pc = 0x203614u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 16) | GPR_U64(ctx, 0)));
label_203618:
    // 0x203618: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x203618u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_20361c:
    // 0x20361c: 0xa2a30000  sb          $v1, 0x0($s5)
    ctx->pc = 0x20361cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
label_203620:
    // 0x203620: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x203620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_203624:
    // 0x203624: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x203624u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_203628:
    // 0x203628: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x203628u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20362c:
    // 0x20362c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x20362cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_203630:
    // 0x203630: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x203630u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_203634:
    // 0x203634: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x203634u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_203638:
    // 0x203638: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x203638u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20363c:
    // 0x20363c: 0x3e00008  jr          $ra
label_203640:
    if (ctx->pc == 0x203640u) {
        ctx->pc = 0x203640u;
            // 0x203640: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->pc = 0x203644u;
        goto label_203644;
    }
    ctx->pc = 0x20363Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20363Cu;
            // 0x203640: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x203644u;
label_203644:
    // 0x203644: 0x0  nop
    ctx->pc = 0x203644u;
    // NOP
label_203648:
    // 0x203648: 0x0  nop
    ctx->pc = 0x203648u;
    // NOP
label_20364c:
    // 0x20364c: 0x0  nop
    ctx->pc = 0x20364cu;
    // NOP
label_203650:
    // 0x203650: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x203650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
label_203654:
    // 0x203654: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x203654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_203658:
    // 0x203658: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x203658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_20365c:
    // 0x20365c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x20365cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_203660:
    // 0x203660: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x203660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_203664:
    // 0x203664: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x203664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_203668:
    // 0x203668: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x203668u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20366c:
    // 0x20366c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x20366cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_203670:
    // 0x203670: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x203670u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_203674:
    // 0x203674: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x203674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_203678:
    // 0x203678: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x203678u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20367c:
    // 0x20367c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x20367cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_203680:
    // 0x203680: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x203680u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_203684:
    // 0x203684: 0x8c63ea64  lw          $v1, -0x159C($v1)
    ctx->pc = 0x203684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_203688:
    // 0x203688: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x203688u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_20368c:
    // 0x20368c: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x20368cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_203690:
    // 0x203690: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x203690u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_203694:
    // 0x203694: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_203698:
    if (ctx->pc == 0x203698u) {
        ctx->pc = 0x203698u;
            // 0x203698: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x20369Cu;
        goto label_20369c;
    }
    ctx->pc = 0x203694u;
    {
        const bool branch_taken_0x203694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203694u;
            // 0x203698: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203694) {
            ctx->pc = 0x2036C4u;
            goto label_2036c4;
        }
    }
    ctx->pc = 0x20369Cu;
label_20369c:
    // 0x20369c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x20369cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2036a0:
    // 0x2036a0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2036a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2036a4:
    // 0x2036a4: 0x2442b630  addiu       $v0, $v0, -0x49D0
    ctx->pc = 0x2036a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948400));
label_2036a8:
    // 0x2036a8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2036a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2036ac:
    // 0x2036ac: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2036acu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_2036b0:
    // 0x2036b0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2036b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_2036b4:
    // 0x2036b4: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2036b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_2036b8:
    // 0x2036b8: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x2036b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_2036bc:
    // 0x2036bc: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x2036bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_2036c0:
    // 0x2036c0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2036c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_2036c4:
    // 0x2036c4: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x2036c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_2036c8:
    // 0x2036c8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x2036c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_2036cc:
    // 0x2036cc: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2036ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2036d0:
    // 0x2036d0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2036d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2036d4:
    // 0x2036d4: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x2036d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
label_2036d8:
    // 0x2036d8: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x2036d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_2036dc:
    // 0x2036dc: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x2036dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_2036e0:
    // 0x2036e0: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x2036e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_2036e4:
    // 0x2036e4: 0x8e790010  lw          $t9, 0x10($s3)
    ctx->pc = 0x2036e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2036e8:
    // 0x2036e8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2036e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2036ec:
    // 0x2036ec: 0x320f809  jalr        $t9
label_2036f0:
    if (ctx->pc == 0x2036F0u) {
        ctx->pc = 0x2036F0u;
            // 0x2036f0: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x2036F4u;
        goto label_2036f4;
    }
    ctx->pc = 0x2036ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2036F4u);
        ctx->pc = 0x2036F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2036ECu;
            // 0x2036f0: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2036F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2036F4u; }
            if (ctx->pc != 0x2036F4u) { return; }
        }
        }
    }
    ctx->pc = 0x2036F4u;
label_2036f4:
    // 0x2036f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2036f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2036f8:
    // 0x2036f8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2036f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2036fc:
    // 0x2036fc: 0x5203000f  beql        $s0, $v1, . + 4 + (0xF << 2)
label_203700:
    if (ctx->pc == 0x203700u) {
        ctx->pc = 0x203700u;
            // 0x203700: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x203704u;
        goto label_203704;
    }
    ctx->pc = 0x2036FCu;
    {
        const bool branch_taken_0x2036fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2036fc) {
            ctx->pc = 0x203700u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2036FCu;
            // 0x203700: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20373Cu;
            goto label_20373c;
        }
    }
    ctx->pc = 0x203704u;
label_203704:
    // 0x203704: 0x8e790010  lw          $t9, 0x10($s3)
    ctx->pc = 0x203704u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_203708:
    // 0x203708: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x203708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_20370c:
    // 0x20370c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20370cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_203710:
    // 0x203710: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x203710u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_203714:
    // 0x203714: 0x320f809  jalr        $t9
label_203718:
    if (ctx->pc == 0x203718u) {
        ctx->pc = 0x203718u;
            // 0x203718: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x20371Cu;
        goto label_20371c;
    }
    ctx->pc = 0x203714u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20371Cu);
        ctx->pc = 0x203718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203714u;
            // 0x203718: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20371Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20371Cu; }
            if (ctx->pc != 0x20371Cu) { return; }
        }
        }
    }
    ctx->pc = 0x20371Cu;
label_20371c:
    // 0x20371c: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x20371cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_203720:
    // 0x203720: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x203720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_203724:
    // 0x203724: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x203724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_203728:
    // 0x203728: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x203728u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20372c:
    // 0x20372c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x20372cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_203730:
    // 0x203730: 0x320f809  jalr        $t9
label_203734:
    if (ctx->pc == 0x203734u) {
        ctx->pc = 0x203734u;
            // 0x203734: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x203738u;
        goto label_203738;
    }
    ctx->pc = 0x203730u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x203738u);
        ctx->pc = 0x203734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203730u;
            // 0x203734: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x203738u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x203738u; }
            if (ctx->pc != 0x203738u) { return; }
        }
        }
    }
    ctx->pc = 0x203738u;
label_203738:
    // 0x203738: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x203738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_20373c:
    // 0x20373c: 0x1203004a  beq         $s0, $v1, . + 4 + (0x4A << 2)
label_203740:
    if (ctx->pc == 0x203740u) {
        ctx->pc = 0x203744u;
        goto label_203744;
    }
    ctx->pc = 0x20373Cu;
    {
        const bool branch_taken_0x20373c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x20373c) {
            ctx->pc = 0x203868u;
            goto label_203868;
        }
    }
    ctx->pc = 0x203744u;
label_203744:
    // 0x203744: 0x8e790010  lw          $t9, 0x10($s3)
    ctx->pc = 0x203744u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_203748:
    // 0x203748: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x203748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_20374c:
    // 0x20374c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20374cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_203750:
    // 0x203750: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x203750u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_203754:
    // 0x203754: 0x320f809  jalr        $t9
label_203758:
    if (ctx->pc == 0x203758u) {
        ctx->pc = 0x203758u;
            // 0x203758: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x20375Cu;
        goto label_20375c;
    }
    ctx->pc = 0x203754u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20375Cu);
        ctx->pc = 0x203758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203754u;
            // 0x203758: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20375Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20375Cu; }
            if (ctx->pc != 0x20375Cu) { return; }
        }
        }
    }
    ctx->pc = 0x20375Cu;
label_20375c:
    // 0x20375c: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x20375cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_203760:
    // 0x203760: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x203760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_203764:
    // 0x203764: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x203764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_203768:
    // 0x203768: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x203768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_20376c:
    // 0x20376c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x20376cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_203770:
    // 0x203770: 0x320f809  jalr        $t9
label_203774:
    if (ctx->pc == 0x203774u) {
        ctx->pc = 0x203774u;
            // 0x203774: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x203778u;
        goto label_203778;
    }
    ctx->pc = 0x203770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x203778u);
        ctx->pc = 0x203774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203770u;
            // 0x203774: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x203778u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x203778u; }
            if (ctx->pc != 0x203778u) { return; }
        }
        }
    }
    ctx->pc = 0x203778u;
label_203778:
    // 0x203778: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x203778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20377c:
    // 0x20377c: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x20377cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_203780:
    // 0x203780: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x203780u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_203784:
    // 0x203784: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_203788:
    if (ctx->pc == 0x203788u) {
        ctx->pc = 0x203788u;
            // 0x203788: 0xc7a20060  lwc1        $f2, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x20378Cu;
        goto label_20378c;
    }
    ctx->pc = 0x203784u;
    {
        const bool branch_taken_0x203784 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x203788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203784u;
            // 0x203788: 0xc7a20060  lwc1        $f2, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x203784) {
            ctx->pc = 0x203794u;
            goto label_203794;
        }
    }
    ctx->pc = 0x20378Cu;
label_20378c:
    // 0x20378c: 0x10000003  b           . + 4 + (0x3 << 2)
label_203790:
    if (ctx->pc == 0x203790u) {
        ctx->pc = 0x203790u;
            // 0x203790: 0xe6210000  swc1        $f1, 0x0($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->pc = 0x203794u;
        goto label_203794;
    }
    ctx->pc = 0x20378Cu;
    {
        const bool branch_taken_0x20378c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20378Cu;
            // 0x203790: 0xe6210000  swc1        $f1, 0x0($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20378c) {
            ctx->pc = 0x20379Cu;
            goto label_20379c;
        }
    }
    ctx->pc = 0x203794u;
label_203794:
    // 0x203794: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x203794u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
label_203798:
    // 0x203798: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x203798u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_20379c:
    // 0x20379c: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x20379cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2037a0:
    // 0x2037a0: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2037a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2037a4:
    // 0x2037a4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2037a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2037a8:
    // 0x2037a8: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_2037ac:
    if (ctx->pc == 0x2037ACu) {
        ctx->pc = 0x2037ACu;
            // 0x2037ac: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x2037B0u;
        goto label_2037b0;
    }
    ctx->pc = 0x2037A8u;
    {
        const bool branch_taken_0x2037a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2037a8) {
            ctx->pc = 0x2037ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2037A8u;
            // 0x2037ac: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2037B0u;
            goto label_2037b0;
        }
    }
    ctx->pc = 0x2037B0u;
label_2037b0:
    // 0x2037b0: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x2037b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_2037b4:
    // 0x2037b4: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x2037b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2037b8:
    // 0x2037b8: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2037b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2037bc:
    // 0x2037bc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2037bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2037c0:
    // 0x2037c0: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_2037c4:
    if (ctx->pc == 0x2037C4u) {
        ctx->pc = 0x2037C4u;
            // 0x2037c4: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x2037C8u;
        goto label_2037c8;
    }
    ctx->pc = 0x2037C0u;
    {
        const bool branch_taken_0x2037c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2037c0) {
            ctx->pc = 0x2037C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2037C0u;
            // 0x2037c4: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2037C8u;
            goto label_2037c8;
        }
    }
    ctx->pc = 0x2037C8u;
label_2037c8:
    // 0x2037c8: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x2037c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_2037cc:
    // 0x2037cc: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x2037ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2037d0:
    // 0x2037d0: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x2037d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2037d4:
    // 0x2037d4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2037d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2037d8:
    // 0x2037d8: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_2037dc:
    if (ctx->pc == 0x2037DCu) {
        ctx->pc = 0x2037DCu;
            // 0x2037dc: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x2037E0u;
        goto label_2037e0;
    }
    ctx->pc = 0x2037D8u;
    {
        const bool branch_taken_0x2037d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2037d8) {
            ctx->pc = 0x2037DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2037D8u;
            // 0x2037dc: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2037E0u;
            goto label_2037e0;
        }
    }
    ctx->pc = 0x2037E0u;
label_2037e0:
    // 0x2037e0: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x2037e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_2037e4:
    // 0x2037e4: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x2037e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2037e8:
    // 0x2037e8: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x2037e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2037ec:
    // 0x2037ec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2037ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2037f0:
    // 0x2037f0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2037f4:
    if (ctx->pc == 0x2037F4u) {
        ctx->pc = 0x2037F4u;
            // 0x2037f4: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x2037F8u;
        goto label_2037f8;
    }
    ctx->pc = 0x2037F0u;
    {
        const bool branch_taken_0x2037f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2037f0) {
            ctx->pc = 0x2037F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2037F0u;
            // 0x2037f4: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2037F8u;
            goto label_2037f8;
        }
    }
    ctx->pc = 0x2037F8u;
label_2037f8:
    // 0x2037f8: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x2037f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_2037fc:
    // 0x2037fc: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x2037fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_203800:
    // 0x203800: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x203800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_203804:
    // 0x203804: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x203804u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_203808:
    // 0x203808: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_20380c:
    if (ctx->pc == 0x20380Cu) {
        ctx->pc = 0x20380Cu;
            // 0x20380c: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x203810u;
        goto label_203810;
    }
    ctx->pc = 0x203808u;
    {
        const bool branch_taken_0x203808 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x203808) {
            ctx->pc = 0x20380Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x203808u;
            // 0x20380c: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x203810u;
            goto label_203810;
        }
    }
    ctx->pc = 0x203810u;
label_203810:
    // 0x203810: 0xe6200014  swc1        $f0, 0x14($s1)
    ctx->pc = 0x203810u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_203814:
    // 0x203814: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x203814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_203818:
    // 0x203818: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x203818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20381c:
    // 0x20381c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x20381cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_203820:
    // 0x203820: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_203824:
    if (ctx->pc == 0x203824u) {
        ctx->pc = 0x203824u;
            // 0x203824: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x203828u;
        goto label_203828;
    }
    ctx->pc = 0x203820u;
    {
        const bool branch_taken_0x203820 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x203820) {
            ctx->pc = 0x203824u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x203820u;
            // 0x203824: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x203828u;
            goto label_203828;
        }
    }
    ctx->pc = 0x203828u;
label_203828:
    // 0x203828: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x203828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_20382c:
    // 0x20382c: 0xc7a1007c  lwc1        $f1, 0x7C($sp)
    ctx->pc = 0x20382cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_203830:
    // 0x203830: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x203830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_203834:
    // 0x203834: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x203834u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_203838:
    // 0x203838: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_20383c:
    if (ctx->pc == 0x20383Cu) {
        ctx->pc = 0x20383Cu;
            // 0x20383c: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x203840u;
        goto label_203840;
    }
    ctx->pc = 0x203838u;
    {
        const bool branch_taken_0x203838 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x203838) {
            ctx->pc = 0x20383Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x203838u;
            // 0x20383c: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x203840u;
            goto label_203840;
        }
    }
    ctx->pc = 0x203840u;
label_203840:
    // 0x203840: 0xe620001c  swc1        $f0, 0x1C($s1)
    ctx->pc = 0x203840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_203844:
    // 0x203844: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x203844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_203848:
    // 0x203848: 0x8e790010  lw          $t9, 0x10($s3)
    ctx->pc = 0x203848u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_20384c:
    // 0x20384c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x20384cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_203850:
    // 0x203850: 0x320f809  jalr        $t9
label_203854:
    if (ctx->pc == 0x203854u) {
        ctx->pc = 0x203854u;
            // 0x203854: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x203858u;
        goto label_203858;
    }
    ctx->pc = 0x203850u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x203858u);
        ctx->pc = 0x203854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203850u;
            // 0x203854: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x203858u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x203858u; }
            if (ctx->pc != 0x203858u) { return; }
        }
        }
    }
    ctx->pc = 0x203858u;
label_203858:
    // 0x203858: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x203858u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20385c:
    // 0x20385c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x20385cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_203860:
    // 0x203860: 0x5603ffb9  bnel        $s0, $v1, . + 4 + (-0x47 << 2)
label_203864:
    if (ctx->pc == 0x203864u) {
        ctx->pc = 0x203864u;
            // 0x203864: 0x8e790010  lw          $t9, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->pc = 0x203868u;
        goto label_203868;
    }
    ctx->pc = 0x203860u;
    {
        const bool branch_taken_0x203860 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x203860) {
            ctx->pc = 0x203864u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x203860u;
            // 0x203864: 0x8e790010  lw          $t9, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x203748u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_203748;
        }
    }
    ctx->pc = 0x203868u;
label_203868:
    // 0x203868: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x203868u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_20386c:
    // 0x20386c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x20386cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_203870:
    // 0x203870: 0x8c84ea64  lw          $a0, -0x159C($a0)
    ctx->pc = 0x203870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961764)));
label_203874:
    // 0x203874: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x203874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_203878:
    // 0x203878: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x203878u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_20387c:
    // 0x20387c: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x20387cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_203880:
    // 0x203880: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_203884:
    if (ctx->pc == 0x203884u) {
        ctx->pc = 0x203884u;
            // 0x203884: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x203888u;
        goto label_203888;
    }
    ctx->pc = 0x203880u;
    {
        const bool branch_taken_0x203880 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x203884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203880u;
            // 0x203884: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203880) {
            ctx->pc = 0x2038B0u;
            goto label_2038b0;
        }
    }
    ctx->pc = 0x203888u;
label_203888:
    // 0x203888: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x203888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_20388c:
    // 0x20388c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x20388cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_203890:
    // 0x203890: 0x2463b628  addiu       $v1, $v1, -0x49D8
    ctx->pc = 0x203890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948392));
label_203894:
    // 0x203894: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x203894u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_203898:
    // 0x203898: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x203898u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_20389c:
    // 0x20389c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x20389cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_2038a0:
    // 0x2038a0: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2038a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_2038a4:
    // 0x2038a4: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x2038a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_2038a8:
    // 0x2038a8: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x2038a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_2038ac:
    // 0x2038ac: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x2038acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_2038b0:
    // 0x2038b0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2038b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2038b4:
    // 0x2038b4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2038b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2038b8:
    // 0x2038b8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2038b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2038bc:
    // 0x2038bc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2038bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2038c0:
    // 0x2038c0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2038c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2038c4:
    // 0x2038c4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2038c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2038c8:
    // 0x2038c8: 0x3e00008  jr          $ra
label_2038cc:
    if (ctx->pc == 0x2038CCu) {
        ctx->pc = 0x2038CCu;
            // 0x2038cc: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->pc = 0x2038D0u;
        goto label_2038d0;
    }
    ctx->pc = 0x2038C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2038CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2038C8u;
            // 0x2038cc: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2038D0u;
label_2038d0:
    // 0x2038d0: 0x27bdfdb0  addiu       $sp, $sp, -0x250
    ctx->pc = 0x2038d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966704));
label_2038d4:
    // 0x2038d4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2038d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2038d8:
    // 0x2038d8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2038d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2038dc:
    // 0x2038dc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2038dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2038e0:
    // 0x2038e0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2038e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2038e4:
    // 0x2038e4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2038e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2038e8:
    // 0x2038e8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2038e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2038ec:
    // 0x2038ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2038ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2038f0:
    // 0x2038f0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2038f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2038f4:
    // 0x2038f4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2038f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2038f8:
    // 0x2038f8: 0x8c63ea64  lw          $v1, -0x159C($v1)
    ctx->pc = 0x2038f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_2038fc:
    // 0x2038fc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2038fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_203900:
    // 0x203900: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x203900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_203904:
    // 0x203904: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x203904u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_203908:
    // 0x203908: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_20390c:
    if (ctx->pc == 0x20390Cu) {
        ctx->pc = 0x20390Cu;
            // 0x20390c: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x203910u;
        goto label_203910;
    }
    ctx->pc = 0x203908u;
    {
        const bool branch_taken_0x203908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20390Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203908u;
            // 0x20390c: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203908) {
            ctx->pc = 0x203938u;
            goto label_203938;
        }
    }
    ctx->pc = 0x203910u;
label_203910:
    // 0x203910: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x203910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_203914:
    // 0x203914: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x203914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_203918:
    // 0x203918: 0x2442b650  addiu       $v0, $v0, -0x49B0
    ctx->pc = 0x203918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948432));
label_20391c:
    // 0x20391c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x20391cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_203920:
    // 0x203920: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x203920u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_203924:
    // 0x203924: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x203924u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_203928:
    // 0x203928: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x203928u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_20392c:
    // 0x20392c: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x20392cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_203930:
    // 0x203930: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x203930u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_203934:
    // 0x203934: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x203934u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_203938:
    // 0x203938: 0x8e390010  lw          $t9, 0x10($s1)
    ctx->pc = 0x203938u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_20393c:
    // 0x20393c: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x20393cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
label_203940:
    // 0x203940: 0x3442ffee  ori         $v0, $v0, 0xFFEE
    ctx->pc = 0x203940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
label_203944:
    // 0x203944: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x203944u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_203948:
    // 0x203948: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x203948u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_20394c:
    // 0x20394c: 0x320f809  jalr        $t9
label_203950:
    if (ctx->pc == 0x203950u) {
        ctx->pc = 0x203950u;
            // 0x203950: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x203954u;
        goto label_203954;
    }
    ctx->pc = 0x20394Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x203954u);
        ctx->pc = 0x203950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20394Cu;
            // 0x203950: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x203954u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x203954u; }
            if (ctx->pc != 0x203954u) { return; }
        }
        }
    }
    ctx->pc = 0x203954u;
label_203954:
    // 0x203954: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x203954u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_203958:
    // 0x203958: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x203958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_20395c:
    // 0x20395c: 0x12420018  beq         $s2, $v0, . + 4 + (0x18 << 2)
label_203960:
    if (ctx->pc == 0x203960u) {
        ctx->pc = 0x203964u;
        goto label_203964;
    }
    ctx->pc = 0x20395Cu;
    {
        const bool branch_taken_0x20395c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x20395c) {
            ctx->pc = 0x2039C0u;
            goto label_2039c0;
        }
    }
    ctx->pc = 0x203964u;
label_203964:
    // 0x203964: 0x8e390010  lw          $t9, 0x10($s1)
    ctx->pc = 0x203964u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_203968:
    // 0x203968: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x203968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_20396c:
    // 0x20396c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20396cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_203970:
    // 0x203970: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x203970u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_203974:
    // 0x203974: 0x320f809  jalr        $t9
label_203978:
    if (ctx->pc == 0x203978u) {
        ctx->pc = 0x203978u;
            // 0x203978: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x20397Cu;
        goto label_20397c;
    }
    ctx->pc = 0x203974u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20397Cu);
        ctx->pc = 0x203978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203974u;
            // 0x203978: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20397Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20397Cu; }
            if (ctx->pc != 0x20397Cu) { return; }
        }
        }
    }
    ctx->pc = 0x20397Cu;
label_20397c:
    // 0x20397c: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x20397cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_203980:
    // 0x203980: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x203980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_203984:
    // 0x203984: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x203984u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_203988:
    // 0x203988: 0x320f809  jalr        $t9
label_20398c:
    if (ctx->pc == 0x20398Cu) {
        ctx->pc = 0x20398Cu;
            // 0x20398c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x203990u;
        goto label_203990;
    }
    ctx->pc = 0x203988u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x203990u);
        ctx->pc = 0x20398Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203988u;
            // 0x20398c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x203990u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x203990u; }
            if (ctx->pc != 0x203990u) { return; }
        }
        }
    }
    ctx->pc = 0x203990u;
label_203990:
    // 0x203990: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x203990u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_203994:
    // 0x203994: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_203998:
    if (ctx->pc == 0x203998u) {
        ctx->pc = 0x203998u;
            // 0x203998: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x20399Cu;
        goto label_20399c;
    }
    ctx->pc = 0x203994u;
    {
        const bool branch_taken_0x203994 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x203994) {
            ctx->pc = 0x203998u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x203994u;
            // 0x203998: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20399Cu;
            goto label_20399c;
        }
    }
    ctx->pc = 0x20399Cu;
label_20399c:
    // 0x20399c: 0x8e390010  lw          $t9, 0x10($s1)
    ctx->pc = 0x20399cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2039a0:
    // 0x2039a0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2039a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2039a4:
    // 0x2039a4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2039a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2039a8:
    // 0x2039a8: 0x320f809  jalr        $t9
label_2039ac:
    if (ctx->pc == 0x2039ACu) {
        ctx->pc = 0x2039ACu;
            // 0x2039ac: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x2039B0u;
        goto label_2039b0;
    }
    ctx->pc = 0x2039A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2039B0u);
        ctx->pc = 0x2039ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2039A8u;
            // 0x2039ac: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2039B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2039B0u; }
            if (ctx->pc != 0x2039B0u) { return; }
        }
        }
    }
    ctx->pc = 0x2039B0u;
label_2039b0:
    // 0x2039b0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2039b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2039b4:
    // 0x2039b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2039b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2039b8:
    // 0x2039b8: 0x5642ffeb  bnel        $s2, $v0, . + 4 + (-0x15 << 2)
label_2039bc:
    if (ctx->pc == 0x2039BCu) {
        ctx->pc = 0x2039BCu;
            // 0x2039bc: 0x8e390010  lw          $t9, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->pc = 0x2039C0u;
        goto label_2039c0;
    }
    ctx->pc = 0x2039B8u;
    {
        const bool branch_taken_0x2039b8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x2039b8) {
            ctx->pc = 0x2039BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2039B8u;
            // 0x2039bc: 0x8e390010  lw          $t9, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x203968u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_203968;
        }
    }
    ctx->pc = 0x2039C0u;
label_2039c0:
    // 0x2039c0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2039c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2039c4:
    // 0x2039c4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2039c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2039c8:
    // 0x2039c8: 0x8c63ea64  lw          $v1, -0x159C($v1)
    ctx->pc = 0x2039c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_2039cc:
    // 0x2039cc: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x2039ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_2039d0:
    // 0x2039d0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2039d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2039d4:
    // 0x2039d4: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2039d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2039d8:
    // 0x2039d8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2039dc:
    if (ctx->pc == 0x2039DCu) {
        ctx->pc = 0x2039DCu;
            // 0x2039dc: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x2039E0u;
        goto label_2039e0;
    }
    ctx->pc = 0x2039D8u;
    {
        const bool branch_taken_0x2039d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2039DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2039D8u;
            // 0x2039dc: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2039d8) {
            ctx->pc = 0x203A08u;
            goto label_203a08;
        }
    }
    ctx->pc = 0x2039E0u;
label_2039e0:
    // 0x2039e0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2039e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2039e4:
    // 0x2039e4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2039e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2039e8:
    // 0x2039e8: 0x2442b628  addiu       $v0, $v0, -0x49D8
    ctx->pc = 0x2039e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948392));
label_2039ec:
    // 0x2039ec: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2039ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2039f0:
    // 0x2039f0: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2039f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_2039f4:
    // 0x2039f4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2039f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_2039f8:
    // 0x2039f8: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2039f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_2039fc:
    // 0x2039fc: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x2039fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_203a00:
    // 0x203a00: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x203a00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_203a04:
    // 0x203a04: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x203a04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_203a08:
    // 0x203a08: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x203a08u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_203a0c:
    // 0x203a0c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x203a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_203a10:
    // 0x203a10: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x203a10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_203a14:
    // 0x203a14: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x203a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_203a18:
    // 0x203a18: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x203a18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_203a1c:
    // 0x203a1c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x203a1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_203a20:
    // 0x203a20: 0x3e00008  jr          $ra
label_203a24:
    if (ctx->pc == 0x203A24u) {
        ctx->pc = 0x203A24u;
            // 0x203a24: 0x27bd0250  addiu       $sp, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->pc = 0x203A28u;
        goto label_203a28;
    }
    ctx->pc = 0x203A20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203A20u;
            // 0x203a24: 0x27bd0250  addiu       $sp, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x203A28u;
label_203a28:
    // 0x203a28: 0x0  nop
    ctx->pc = 0x203a28u;
    // NOP
label_203a2c:
    // 0x203a2c: 0x0  nop
    ctx->pc = 0x203a2cu;
    // NOP
label_203a30:
    // 0x203a30: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x203a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
label_203a34:
    // 0x203a34: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x203a34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_203a38:
    // 0x203a38: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x203a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_203a3c:
    // 0x203a3c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x203a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_203a40:
    // 0x203a40: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x203a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_203a44:
    // 0x203a44: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x203a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_203a48:
    // 0x203a48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x203a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_203a4c:
    // 0x203a4c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x203a4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_203a50:
    // 0x203a50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x203a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_203a54:
    // 0x203a54: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x203a54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_203a58:
    // 0x203a58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x203a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_203a5c:
    // 0x203a5c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x203a5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_203a60:
    // 0x203a60: 0x8c63ea64  lw          $v1, -0x159C($v1)
    ctx->pc = 0x203a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_203a64:
    // 0x203a64: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x203a64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_203a68:
    // 0x203a68: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x203a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_203a6c:
    // 0x203a6c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x203a6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_203a70:
    // 0x203a70: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x203a70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_203a74:
    // 0x203a74: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_203a78:
    if (ctx->pc == 0x203A78u) {
        ctx->pc = 0x203A78u;
            // 0x203a78: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x203A7Cu;
        goto label_203a7c;
    }
    ctx->pc = 0x203A74u;
    {
        const bool branch_taken_0x203a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203A74u;
            // 0x203a78: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203a74) {
            ctx->pc = 0x203AA4u;
            goto label_203aa4;
        }
    }
    ctx->pc = 0x203A7Cu;
label_203a7c:
    // 0x203a7c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x203a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_203a80:
    // 0x203a80: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x203a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_203a84:
    // 0x203a84: 0x2442b618  addiu       $v0, $v0, -0x49E8
    ctx->pc = 0x203a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948376));
label_203a88:
    // 0x203a88: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x203a88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_203a8c:
    // 0x203a8c: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x203a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_203a90:
    // 0x203a90: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x203a90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_203a94:
    // 0x203a94: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x203a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_203a98:
    // 0x203a98: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x203a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_203a9c:
    // 0x203a9c: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x203a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_203aa0:
    // 0x203aa0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x203aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_203aa4:
    // 0x203aa4: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x203aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_203aa8:
    // 0x203aa8: 0x54400026  bnel        $v0, $zero, . + 4 + (0x26 << 2)
label_203aac:
    if (ctx->pc == 0x203AACu) {
        ctx->pc = 0x203AACu;
            // 0x203aac: 0x8e790010  lw          $t9, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->pc = 0x203AB0u;
        goto label_203ab0;
    }
    ctx->pc = 0x203AA8u;
    {
        const bool branch_taken_0x203aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x203aa8) {
            ctx->pc = 0x203AACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x203AA8u;
            // 0x203aac: 0x8e790010  lw          $t9, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x203B44u;
            goto label_203b44;
        }
    }
    ctx->pc = 0x203AB0u;
label_203ab0:
    // 0x203ab0: 0x8e790010  lw          $t9, 0x10($s3)
    ctx->pc = 0x203ab0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_203ab4:
    // 0x203ab4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x203ab4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_203ab8:
    // 0x203ab8: 0x320f809  jalr        $t9
label_203abc:
    if (ctx->pc == 0x203ABCu) {
        ctx->pc = 0x203ABCu;
            // 0x203abc: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x203AC0u;
        goto label_203ac0;
    }
    ctx->pc = 0x203AB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x203AC0u);
        ctx->pc = 0x203ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203AB8u;
            // 0x203abc: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x203AC0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x203AC0u; }
            if (ctx->pc != 0x203AC0u) { return; }
        }
        }
    }
    ctx->pc = 0x203AC0u;
label_203ac0:
    // 0x203ac0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x203ac0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_203ac4:
    // 0x203ac4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x203ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_203ac8:
    // 0x203ac8: 0x1283004f  beq         $s4, $v1, . + 4 + (0x4F << 2)
label_203acc:
    if (ctx->pc == 0x203ACCu) {
        ctx->pc = 0x203AD0u;
        goto label_203ad0;
    }
    ctx->pc = 0x203AC8u;
    {
        const bool branch_taken_0x203ac8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x203ac8) {
            ctx->pc = 0x203C08u;
            goto label_203c08;
        }
    }
    ctx->pc = 0x203AD0u;
label_203ad0:
    // 0x203ad0: 0x8e790010  lw          $t9, 0x10($s3)
    ctx->pc = 0x203ad0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_203ad4:
    // 0x203ad4: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x203ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_203ad8:
    // 0x203ad8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x203ad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_203adc:
    // 0x203adc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x203adcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_203ae0:
    // 0x203ae0: 0x320f809  jalr        $t9
label_203ae4:
    if (ctx->pc == 0x203AE4u) {
        ctx->pc = 0x203AE4u;
            // 0x203ae4: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x203AE8u;
        goto label_203ae8;
    }
    ctx->pc = 0x203AE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x203AE8u);
        ctx->pc = 0x203AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203AE0u;
            // 0x203ae4: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x203AE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x203AE8u; }
            if (ctx->pc != 0x203AE8u) { return; }
        }
        }
    }
    ctx->pc = 0x203AE8u;
label_203ae8:
    // 0x203ae8: 0xafb1007c  sw          $s1, 0x7C($sp)
    ctx->pc = 0x203ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 17));
label_203aec:
    // 0x203aec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x203aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_203af0:
    // 0x203af0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x203af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_203af4:
    // 0x203af4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x203af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_203af8:
    // 0x203af8: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x203af8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_203afc:
    // 0x203afc: 0xafa30078  sw          $v1, 0x78($sp)
    ctx->pc = 0x203afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 3));
label_203b00:
    // 0x203b00: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x203b00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
label_203b04:
    // 0x203b04: 0xafb40074  sw          $s4, 0x74($sp)
    ctx->pc = 0x203b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 20));
label_203b08:
    // 0x203b08: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x203b08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_203b0c:
    // 0x203b0c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x203b0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_203b10:
    // 0x203b10: 0x320f809  jalr        $t9
label_203b14:
    if (ctx->pc == 0x203B14u) {
        ctx->pc = 0x203B14u;
            // 0x203b14: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x203B18u;
        goto label_203b18;
    }
    ctx->pc = 0x203B10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x203B18u);
        ctx->pc = 0x203B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203B10u;
            // 0x203b14: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x203B18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x203B18u; }
            if (ctx->pc != 0x203B18u) { return; }
        }
        }
    }
    ctx->pc = 0x203B18u;
label_203b18:
    // 0x203b18: 0x8e790010  lw          $t9, 0x10($s3)
    ctx->pc = 0x203b18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_203b1c:
    // 0x203b1c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x203b1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_203b20:
    // 0x203b20: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x203b20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_203b24:
    // 0x203b24: 0x320f809  jalr        $t9
label_203b28:
    if (ctx->pc == 0x203B28u) {
        ctx->pc = 0x203B28u;
            // 0x203b28: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x203B2Cu;
        goto label_203b2c;
    }
    ctx->pc = 0x203B24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x203B2Cu);
        ctx->pc = 0x203B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203B24u;
            // 0x203b28: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x203B2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x203B2Cu; }
            if (ctx->pc != 0x203B2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x203B2Cu;
label_203b2c:
    // 0x203b2c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x203b2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_203b30:
    // 0x203b30: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x203b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_203b34:
    // 0x203b34: 0x5683ffe7  bnel        $s4, $v1, . + 4 + (-0x19 << 2)
label_203b38:
    if (ctx->pc == 0x203B38u) {
        ctx->pc = 0x203B38u;
            // 0x203b38: 0x8e790010  lw          $t9, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->pc = 0x203B3Cu;
        goto label_203b3c;
    }
    ctx->pc = 0x203B34u;
    {
        const bool branch_taken_0x203b34 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        if (branch_taken_0x203b34) {
            ctx->pc = 0x203B38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x203B34u;
            // 0x203b38: 0x8e790010  lw          $t9, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x203AD4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_203ad4;
        }
    }
    ctx->pc = 0x203B3Cu;
label_203b3c:
    // 0x203b3c: 0x10000032  b           . + 4 + (0x32 << 2)
label_203b40:
    if (ctx->pc == 0x203B40u) {
        ctx->pc = 0x203B44u;
        goto label_203b44;
    }
    ctx->pc = 0x203B3Cu;
    {
        const bool branch_taken_0x203b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x203b3c) {
            ctx->pc = 0x203C08u;
            goto label_203c08;
        }
    }
    ctx->pc = 0x203B44u;
label_203b44:
    // 0x203b44: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x203b44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_203b48:
    // 0x203b48: 0x320f809  jalr        $t9
label_203b4c:
    if (ctx->pc == 0x203B4Cu) {
        ctx->pc = 0x203B4Cu;
            // 0x203b4c: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x203B50u;
        goto label_203b50;
    }
    ctx->pc = 0x203B48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x203B50u);
        ctx->pc = 0x203B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203B48u;
            // 0x203b4c: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x203B50u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x203B50u; }
            if (ctx->pc != 0x203B50u) { return; }
        }
        }
    }
    ctx->pc = 0x203B50u;
label_203b50:
    // 0x203b50: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x203b50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_203b54:
    // 0x203b54: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x203b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_203b58:
    // 0x203b58: 0x1283002b  beq         $s4, $v1, . + 4 + (0x2B << 2)
label_203b5c:
    if (ctx->pc == 0x203B5Cu) {
        ctx->pc = 0x203B60u;
        goto label_203b60;
    }
    ctx->pc = 0x203B58u;
    {
        const bool branch_taken_0x203b58 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 3));
        if (branch_taken_0x203b58) {
            ctx->pc = 0x203C08u;
            goto label_203c08;
        }
    }
    ctx->pc = 0x203B60u;
label_203b60:
    // 0x203b60: 0x8e450024  lw          $a1, 0x24($s2)
    ctx->pc = 0x203b60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_203b64:
    // 0x203b64: 0x27a4028c  addiu       $a0, $sp, 0x28C
    ctx->pc = 0x203b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 652));
label_203b68:
    // 0x203b68: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x203b68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_203b6c:
    // 0x203b6c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x203b6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_203b70:
    // 0x203b70: 0x26680010  addiu       $t0, $s3, 0x10
    ctx->pc = 0x203b70u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_203b74:
    // 0x203b74: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x203b74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_203b78:
    // 0x203b78: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x203b78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_203b7c:
    // 0x203b7c: 0x320f809  jalr        $t9
label_203b80:
    if (ctx->pc == 0x203B80u) {
        ctx->pc = 0x203B80u;
            // 0x203b80: 0x280482d  daddu       $t1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x203B84u;
        goto label_203b84;
    }
    ctx->pc = 0x203B7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x203B84u);
        ctx->pc = 0x203B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203B7Cu;
            // 0x203b80: 0x280482d  daddu       $t1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x203B84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x203B84u; }
            if (ctx->pc != 0x203B84u) { return; }
        }
        }
    }
    ctx->pc = 0x203B84u;
label_203b84:
    // 0x203b84: 0x27a2028c  addiu       $v0, $sp, 0x28C
    ctx->pc = 0x203b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 652));
label_203b88:
    // 0x203b88: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x203b88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_203b8c:
    // 0x203b8c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_203b90:
    if (ctx->pc == 0x203B90u) {
        ctx->pc = 0x203B94u;
        goto label_203b94;
    }
    ctx->pc = 0x203B8Cu;
    {
        const bool branch_taken_0x203b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x203b8c) {
            ctx->pc = 0x203BE0u;
            goto label_203be0;
        }
    }
    ctx->pc = 0x203B94u;
label_203b94:
    // 0x203b94: 0x8e790010  lw          $t9, 0x10($s3)
    ctx->pc = 0x203b94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_203b98:
    // 0x203b98: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x203b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_203b9c:
    // 0x203b9c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x203b9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_203ba0:
    // 0x203ba0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x203ba0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_203ba4:
    // 0x203ba4: 0x320f809  jalr        $t9
label_203ba8:
    if (ctx->pc == 0x203BA8u) {
        ctx->pc = 0x203BA8u;
            // 0x203ba8: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x203BACu;
        goto label_203bac;
    }
    ctx->pc = 0x203BA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x203BACu);
        ctx->pc = 0x203BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203BA4u;
            // 0x203ba8: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x203BACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x203BACu; }
            if (ctx->pc != 0x203BACu) { return; }
        }
        }
    }
    ctx->pc = 0x203BACu;
label_203bac:
    // 0x203bac: 0xafb1006c  sw          $s1, 0x6C($sp)
    ctx->pc = 0x203bacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 17));
label_203bb0:
    // 0x203bb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x203bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_203bb4:
    // 0x203bb4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x203bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_203bb8:
    // 0x203bb8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x203bb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_203bbc:
    // 0x203bbc: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x203bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_203bc0:
    // 0x203bc0: 0xafa30068  sw          $v1, 0x68($sp)
    ctx->pc = 0x203bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
label_203bc4:
    // 0x203bc4: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x203bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
label_203bc8:
    // 0x203bc8: 0xafb40064  sw          $s4, 0x64($sp)
    ctx->pc = 0x203bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 20));
label_203bcc:
    // 0x203bcc: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x203bccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_203bd0:
    // 0x203bd0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x203bd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_203bd4:
    // 0x203bd4: 0x320f809  jalr        $t9
label_203bd8:
    if (ctx->pc == 0x203BD8u) {
        ctx->pc = 0x203BD8u;
            // 0x203bd8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x203BDCu;
        goto label_203bdc;
    }
    ctx->pc = 0x203BD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x203BDCu);
        ctx->pc = 0x203BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203BD4u;
            // 0x203bd8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x203BDCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x203BDCu; }
            if (ctx->pc != 0x203BDCu) { return; }
        }
        }
    }
    ctx->pc = 0x203BDCu;
label_203bdc:
    // 0x203bdc: 0x0  nop
    ctx->pc = 0x203bdcu;
    // NOP
label_203be0:
    // 0x203be0: 0x8e790010  lw          $t9, 0x10($s3)
    ctx->pc = 0x203be0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_203be4:
    // 0x203be4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x203be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_203be8:
    // 0x203be8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x203be8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_203bec:
    // 0x203bec: 0x320f809  jalr        $t9
label_203bf0:
    if (ctx->pc == 0x203BF0u) {
        ctx->pc = 0x203BF0u;
            // 0x203bf0: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x203BF4u;
        goto label_203bf4;
    }
    ctx->pc = 0x203BECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x203BF4u);
        ctx->pc = 0x203BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203BECu;
            // 0x203bf0: 0x26640010  addiu       $a0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x203BF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x203BF4u; }
            if (ctx->pc != 0x203BF4u) { return; }
        }
        }
    }
    ctx->pc = 0x203BF4u;
label_203bf4:
    // 0x203bf4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x203bf4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_203bf8:
    // 0x203bf8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x203bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_203bfc:
    // 0x203bfc: 0x5683ffd9  bnel        $s4, $v1, . + 4 + (-0x27 << 2)
label_203c00:
    if (ctx->pc == 0x203C00u) {
        ctx->pc = 0x203C00u;
            // 0x203c00: 0x8e450024  lw          $a1, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->pc = 0x203C04u;
        goto label_203c04;
    }
    ctx->pc = 0x203BFCu;
    {
        const bool branch_taken_0x203bfc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        if (branch_taken_0x203bfc) {
            ctx->pc = 0x203C00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x203BFCu;
            // 0x203c00: 0x8e450024  lw          $a1, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x203B64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_203b64;
        }
    }
    ctx->pc = 0x203C04u;
label_203c04:
    // 0x203c04: 0x0  nop
    ctx->pc = 0x203c04u;
    // NOP
label_203c08:
    // 0x203c08: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x203c08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_203c0c:
    // 0x203c0c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x203c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_203c10:
    // 0x203c10: 0x8c84ea64  lw          $a0, -0x159C($a0)
    ctx->pc = 0x203c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961764)));
label_203c14:
    // 0x203c14: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x203c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_203c18:
    // 0x203c18: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x203c18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_203c1c:
    // 0x203c1c: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x203c1cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_203c20:
    // 0x203c20: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_203c24:
    if (ctx->pc == 0x203C24u) {
        ctx->pc = 0x203C24u;
            // 0x203c24: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x203C28u;
        goto label_203c28;
    }
    ctx->pc = 0x203C20u;
    {
        const bool branch_taken_0x203c20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x203C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203C20u;
            // 0x203c24: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203c20) {
            ctx->pc = 0x203C50u;
            goto label_203c50;
        }
    }
    ctx->pc = 0x203C28u;
label_203c28:
    // 0x203c28: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x203c28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_203c2c:
    // 0x203c2c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x203c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_203c30:
    // 0x203c30: 0x2463b628  addiu       $v1, $v1, -0x49D8
    ctx->pc = 0x203c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948392));
label_203c34:
    // 0x203c34: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x203c34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_203c38:
    // 0x203c38: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x203c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_203c3c:
    // 0x203c3c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x203c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_203c40:
    // 0x203c40: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x203c40u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_203c44:
    // 0x203c44: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x203c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_203c48:
    // 0x203c48: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x203c48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_203c4c:
    // 0x203c4c: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x203c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_203c50:
    // 0x203c50: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x203c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_203c54:
    // 0x203c54: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x203c54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_203c58:
    // 0x203c58: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x203c58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_203c5c:
    // 0x203c5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x203c5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_203c60:
    // 0x203c60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x203c60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_203c64:
    // 0x203c64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x203c64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_203c68:
    // 0x203c68: 0x3e00008  jr          $ra
label_203c6c:
    if (ctx->pc == 0x203C6Cu) {
        ctx->pc = 0x203C6Cu;
            // 0x203c6c: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->pc = 0x203C70u;
        goto label_203c70;
    }
    ctx->pc = 0x203C68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203C68u;
            // 0x203c6c: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x203C70u;
label_203c70:
    // 0x203c70: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_203c74:
    if (ctx->pc == 0x203C74u) {
        ctx->pc = 0x203C74u;
            // 0x203c74: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x203C78u;
        goto label_203c78;
    }
    ctx->pc = 0x203C70u;
    {
        const bool branch_taken_0x203c70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x203c70) {
            ctx->pc = 0x203C74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x203C70u;
            // 0x203c74: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x203C80u;
            goto label_203c80;
        }
    }
    ctx->pc = 0x203C78u;
label_203c78:
    // 0x203c78: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x203c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_203c7c:
    // 0x203c7c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x203c7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_203c80:
    // 0x203c80: 0x3e00008  jr          $ra
label_203c84:
    if (ctx->pc == 0x203C84u) {
        ctx->pc = 0x203C88u;
        goto label_203c88;
    }
    ctx->pc = 0x203C80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x203C88u;
label_203c88:
    // 0x203c88: 0x0  nop
    ctx->pc = 0x203c88u;
    // NOP
label_203c8c:
    // 0x203c8c: 0x0  nop
    ctx->pc = 0x203c8cu;
    // NOP
label_203c90:
    // 0x203c90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x203c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_203c94:
    // 0x203c94: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x203c94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_203c98:
    // 0x203c98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x203c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_203c9c:
    // 0x203c9c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x203c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_203ca0:
    // 0x203ca0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x203ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_203ca4:
    // 0x203ca4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x203ca4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_203ca8:
    // 0x203ca8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x203ca8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_203cac:
    // 0x203cac: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x203cacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_203cb0:
    // 0x203cb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x203cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_203cb4:
    // 0x203cb4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x203cb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_203cb8:
    // 0x203cb8: 0x320f809  jalr        $t9
label_203cbc:
    if (ctx->pc == 0x203CBCu) {
        ctx->pc = 0x203CBCu;
            // 0x203cbc: 0x24a5b680  addiu       $a1, $a1, -0x4980 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948480));
        ctx->pc = 0x203CC0u;
        goto label_203cc0;
    }
    ctx->pc = 0x203CB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x203CC0u);
        ctx->pc = 0x203CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203CB8u;
            // 0x203cbc: 0x24a5b680  addiu       $a1, $a1, -0x4980 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948480));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x203CC0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x203CC0u; }
            if (ctx->pc != 0x203CC0u) { return; }
        }
        }
    }
    ctx->pc = 0x203CC0u;
label_203cc0:
    // 0x203cc0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x203cc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_203cc4:
    // 0x203cc4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x203cc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_203cc8:
    // 0x203cc8: 0x320f809  jalr        $t9
label_203ccc:
    if (ctx->pc == 0x203CCCu) {
        ctx->pc = 0x203CCCu;
            // 0x203ccc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x203CD0u;
        goto label_203cd0;
    }
    ctx->pc = 0x203CC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x203CD0u);
        ctx->pc = 0x203CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203CC8u;
            // 0x203ccc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x203CD0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x203CD0u; }
            if (ctx->pc != 0x203CD0u) { return; }
        }
        }
    }
    ctx->pc = 0x203CD0u;
label_203cd0:
    // 0x203cd0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x203cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_203cd4:
    // 0x203cd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x203cd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_203cd8:
    // 0x203cd8: 0x3e00008  jr          $ra
label_203cdc:
    if (ctx->pc == 0x203CDCu) {
        ctx->pc = 0x203CDCu;
            // 0x203cdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x203CE0u;
        goto label_203ce0;
    }
    ctx->pc = 0x203CD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203CD8u;
            // 0x203cdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x203CE0u;
label_203ce0:
    // 0x203ce0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x203ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_203ce4:
    // 0x203ce4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x203ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_203ce8:
    // 0x203ce8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x203ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_203cec:
    // 0x203cec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x203cecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_203cf0:
    // 0x203cf0: 0x52000024  beql        $s0, $zero, . + 4 + (0x24 << 2)
label_203cf4:
    if (ctx->pc == 0x203CF4u) {
        ctx->pc = 0x203CF4u;
            // 0x203cf4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x203CF8u;
        goto label_203cf8;
    }
    ctx->pc = 0x203CF0u;
    {
        const bool branch_taken_0x203cf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x203cf0) {
            ctx->pc = 0x203CF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x203CF0u;
            // 0x203cf4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x203D84u;
            goto label_203d84;
        }
    }
    ctx->pc = 0x203CF8u;
label_203cf8:
    // 0x203cf8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x203cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_203cfc:
    // 0x203cfc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x203cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_203d00:
    // 0x203d00: 0x2442e190  addiu       $v0, $v0, -0x1E70
    ctx->pc = 0x203d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959504));
label_203d04:
    // 0x203d04: 0x2463e1b8  addiu       $v1, $v1, -0x1E48
    ctx->pc = 0x203d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959544));
label_203d08:
    // 0x203d08: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x203d08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_203d0c:
    // 0x203d0c: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x203d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_203d10:
    // 0x203d10: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_203d14:
    if (ctx->pc == 0x203D14u) {
        ctx->pc = 0x203D14u;
            // 0x203d14: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->pc = 0x203D18u;
        goto label_203d18;
    }
    ctx->pc = 0x203D10u;
    {
        const bool branch_taken_0x203d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203D10u;
            // 0x203d14: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203d10) {
            ctx->pc = 0x203D24u;
            goto label_203d24;
        }
    }
    ctx->pc = 0x203D18u;
label_203d18:
    // 0x203d18: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x203d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_203d1c:
    // 0x203d1c: 0x2442e3d0  addiu       $v0, $v0, -0x1C30
    ctx->pc = 0x203d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960080));
label_203d20:
    // 0x203d20: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x203d20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_203d24:
    // 0x203d24: 0x5200000d  beql        $s0, $zero, . + 4 + (0xD << 2)
label_203d28:
    if (ctx->pc == 0x203D28u) {
        ctx->pc = 0x203D28u;
            // 0x203d28: 0x5143c  dsll32      $v0, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
        ctx->pc = 0x203D2Cu;
        goto label_203d2c;
    }
    ctx->pc = 0x203D24u;
    {
        const bool branch_taken_0x203d24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x203d24) {
            ctx->pc = 0x203D28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x203D24u;
            // 0x203d28: 0x5143c  dsll32      $v0, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x203D5Cu;
            goto label_203d5c;
        }
    }
    ctx->pc = 0x203D2Cu;
label_203d2c:
    // 0x203d2c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x203d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_203d30:
    // 0x203d30: 0x2442e370  addiu       $v0, $v0, -0x1C90
    ctx->pc = 0x203d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959984));
label_203d34:
    // 0x203d34: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_203d38:
    if (ctx->pc == 0x203D38u) {
        ctx->pc = 0x203D38u;
            // 0x203d38: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x203D3Cu;
        goto label_203d3c;
    }
    ctx->pc = 0x203D34u;
    {
        const bool branch_taken_0x203d34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x203D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203D34u;
            // 0x203d38: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203d34) {
            ctx->pc = 0x203D58u;
            goto label_203d58;
        }
    }
    ctx->pc = 0x203D3Cu;
label_203d3c:
    // 0x203d3c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x203d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_203d40:
    // 0x203d40: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x203d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_203d44:
    // 0x203d44: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_203d48:
    if (ctx->pc == 0x203D48u) {
        ctx->pc = 0x203D48u;
            // 0x203d48: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x203D4Cu;
        goto label_203d4c;
    }
    ctx->pc = 0x203D44u;
    {
        const bool branch_taken_0x203d44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x203D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203D44u;
            // 0x203d48: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203d44) {
            ctx->pc = 0x203D58u;
            goto label_203d58;
        }
    }
    ctx->pc = 0x203D4Cu;
label_203d4c:
    // 0x203d4c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x203d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_203d50:
    // 0x203d50: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x203d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_203d54:
    // 0x203d54: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x203d54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_203d58:
    // 0x203d58: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x203d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_203d5c:
    // 0x203d5c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x203d5cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_203d60:
    // 0x203d60: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_203d64:
    if (ctx->pc == 0x203D64u) {
        ctx->pc = 0x203D68u;
        goto label_203d68;
    }
    ctx->pc = 0x203D60u;
    {
        const bool branch_taken_0x203d60 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x203d60) {
            ctx->pc = 0x203D80u;
            goto label_203d80;
        }
    }
    ctx->pc = 0x203D68u;
label_203d68:
    // 0x203d68: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x203d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_203d6c:
    // 0x203d6c: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x203d6cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_203d70:
    // 0x203d70: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x203d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_203d74:
    // 0x203d74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x203d74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_203d78:
    // 0x203d78: 0xc0a7ab4  jal         func_29EAD0
label_203d7c:
    if (ctx->pc == 0x203D7Cu) {
        ctx->pc = 0x203D7Cu;
            // 0x203d7c: 0x24070025  addiu       $a3, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x203D80u;
        goto label_203d80;
    }
    ctx->pc = 0x203D78u;
    SET_GPR_U32(ctx, 31, 0x203D80u);
    ctx->pc = 0x203D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203D78u;
            // 0x203d7c: 0x24070025  addiu       $a3, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203D80u; }
        if (ctx->pc != 0x203D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203D80u; }
        if (ctx->pc != 0x203D80u) { return; }
    }
    ctx->pc = 0x203D80u;
label_203d80:
    // 0x203d80: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x203d80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_203d84:
    // 0x203d84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x203d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_203d88:
    // 0x203d88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x203d88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_203d8c:
    // 0x203d8c: 0x3e00008  jr          $ra
label_203d90:
    if (ctx->pc == 0x203D90u) {
        ctx->pc = 0x203D90u;
            // 0x203d90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x203D94u;
        goto label_203d94;
    }
    ctx->pc = 0x203D8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203D8Cu;
            // 0x203d90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x203D94u;
label_203d94:
    // 0x203d94: 0x0  nop
    ctx->pc = 0x203d94u;
    // NOP
label_203d98:
    // 0x203d98: 0x0  nop
    ctx->pc = 0x203d98u;
    // NOP
label_203d9c:
    // 0x203d9c: 0x0  nop
    ctx->pc = 0x203d9cu;
    // NOP
label_203da0:
    // 0x203da0: 0x80820014  lb          $v0, 0x14($a0)
    ctx->pc = 0x203da0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
label_203da4:
    // 0x203da4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x203da4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_203da8:
    // 0x203da8: 0x3e00008  jr          $ra
label_203dac:
    if (ctx->pc == 0x203DACu) {
        ctx->pc = 0x203DACu;
            // 0x203dac: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->pc = 0x203DB0u;
        goto label_203db0;
    }
    ctx->pc = 0x203DA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203DA8u;
            // 0x203dac: 0x38420001  xori        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x203DB0u;
label_203db0:
    // 0x203db0: 0x8080f68  j           func_203DA0
label_203db4:
    if (ctx->pc == 0x203DB4u) {
        ctx->pc = 0x203DB4u;
            // 0x203db4: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->pc = 0x203DB8u;
        goto label_203db8;
    }
    ctx->pc = 0x203DB0u;
    ctx->pc = 0x203DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203DB0u;
            // 0x203db4: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x203DA0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_203da0;
    ctx->pc = 0x203DB8u;
label_203db8:
    // 0x203db8: 0x0  nop
    ctx->pc = 0x203db8u;
    // NOP
label_203dbc:
    // 0x203dbc: 0x0  nop
    ctx->pc = 0x203dbcu;
    // NOP
label_203dc0:
    // 0x203dc0: 0x8080f38  j           func_203CE0
label_203dc4:
    if (ctx->pc == 0x203DC4u) {
        ctx->pc = 0x203DC4u;
            // 0x203dc4: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->pc = 0x203DC8u;
        goto label_203dc8;
    }
    ctx->pc = 0x203DC0u;
    ctx->pc = 0x203DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203DC0u;
            // 0x203dc4: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x203CE0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_203ce0;
    ctx->pc = 0x203DC8u;
label_203dc8:
    // 0x203dc8: 0x0  nop
    ctx->pc = 0x203dc8u;
    // NOP
label_203dcc:
    // 0x203dcc: 0x0  nop
    ctx->pc = 0x203dccu;
    // NOP
label_203dd0:
    // 0x203dd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x203dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_203dd4:
    // 0x203dd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x203dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_203dd8:
    // 0x203dd8: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x203dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_203ddc:
    // 0x203ddc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x203ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_203de0:
    // 0x203de0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x203de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_203de4:
    // 0x203de4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x203de4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_203de8:
    // 0x203de8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x203de8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_203dec:
    // 0x203dec: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x203decu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_203df0:
    // 0x203df0: 0x320f809  jalr        $t9
label_203df4:
    if (ctx->pc == 0x203DF4u) {
        ctx->pc = 0x203DF4u;
            // 0x203df4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x203DF8u;
        goto label_203df8;
    }
    ctx->pc = 0x203DF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x203DF8u);
        ctx->pc = 0x203DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203DF0u;
            // 0x203df4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x203DF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x203DF8u; }
            if (ctx->pc != 0x203DF8u) { return; }
        }
        }
    }
    ctx->pc = 0x203DF8u;
label_203df8:
    // 0x203df8: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x203df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_203dfc:
    // 0x203dfc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x203dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_203e00:
    // 0x203e00: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x203e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_203e04:
    // 0x203e04: 0xc7a40030  lwc1        $f4, 0x30($sp)
    ctx->pc = 0x203e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_203e08:
    // 0x203e08: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x203e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_203e0c:
    // 0x203e0c: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x203e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_203e10:
    // 0x203e10: 0xc6060008  lwc1        $f6, 0x8($s0)
    ctx->pc = 0x203e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_203e14:
    // 0x203e14: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x203e14u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_203e18:
    // 0x203e18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x203e18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_203e1c:
    // 0x203e1c: 0xc7a50038  lwc1        $f5, 0x38($sp)
    ctx->pc = 0x203e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_203e20:
    // 0x203e20: 0x4603201e  madda.s     $f4, $f3
    ctx->pc = 0x203e20u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
label_203e24:
    // 0x203e24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x203e24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_203e28:
    // 0x203e28: 0x4606285c  madd.s      $f1, $f5, $f6
    ctx->pc = 0x203e28u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[6]));
label_203e2c:
    // 0x203e2c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x203e2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_203e30:
    // 0x203e30: 0x3e00008  jr          $ra
label_203e34:
    if (ctx->pc == 0x203E34u) {
        ctx->pc = 0x203E34u;
            // 0x203e34: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x203E38u;
        goto label_203e38;
    }
    ctx->pc = 0x203E30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203E30u;
            // 0x203e34: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x203E38u;
label_203e38:
    // 0x203e38: 0x0  nop
    ctx->pc = 0x203e38u;
    // NOP
label_203e3c:
    // 0x203e3c: 0x0  nop
    ctx->pc = 0x203e3cu;
    // NOP
label_203e40:
    // 0x203e40: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x203e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_203e44:
    // 0x203e44: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x203e44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_203e48:
    // 0x203e48: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x203e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_203e4c:
    // 0x203e4c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x203e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_203e50:
    // 0x203e50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x203e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_203e54:
    // 0x203e54: 0x27a4008c  addiu       $a0, $sp, 0x8C
    ctx->pc = 0x203e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
label_203e58:
    // 0x203e58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x203e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_203e5c:
    // 0x203e5c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x203e5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_203e60:
    // 0x203e60: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x203e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_203e64:
    // 0x203e64: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x203e64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_203e68:
    // 0x203e68: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x203e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_203e6c:
    // 0x203e6c: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x203e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_203e70:
    // 0x203e70: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x203e70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_203e74:
    // 0x203e74: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x203e74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_203e78:
    // 0x203e78: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x203e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_203e7c:
    // 0x203e7c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x203e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_203e80:
    // 0x203e80: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x203e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_203e84:
    // 0x203e84: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x203e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_203e88:
    // 0x203e88: 0x8c790000  lw          $t9, 0x0($v1)
    ctx->pc = 0x203e88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_203e8c:
    // 0x203e8c: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x203e8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_203e90:
    // 0x203e90: 0x320f809  jalr        $t9
label_203e94:
    if (ctx->pc == 0x203E94u) {
        ctx->pc = 0x203E94u;
            // 0x203e94: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x203E98u;
        goto label_203e98;
    }
    ctx->pc = 0x203E90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x203E98u);
        ctx->pc = 0x203E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203E90u;
            // 0x203e94: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x203E98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x203E98u; }
            if (ctx->pc != 0x203E98u) { return; }
        }
        }
    }
    ctx->pc = 0x203E98u;
label_203e98:
    // 0x203e98: 0x83a3008c  lb          $v1, 0x8C($sp)
    ctx->pc = 0x203e98u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 140)));
label_203e9c:
    // 0x203e9c: 0x50600022  beql        $v1, $zero, . + 4 + (0x22 << 2)
label_203ea0:
    if (ctx->pc == 0x203EA0u) {
        ctx->pc = 0x203EA0u;
            // 0x203ea0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x203EA4u;
        goto label_203ea4;
    }
    ctx->pc = 0x203E9Cu;
    {
        const bool branch_taken_0x203e9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x203e9c) {
            ctx->pc = 0x203EA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x203E9Cu;
            // 0x203ea0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x203F28u;
            goto label_203f28;
        }
    }
    ctx->pc = 0x203EA4u;
label_203ea4:
    // 0x203ea4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x203ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_203ea8:
    // 0x203ea8: 0xc7a40034  lwc1        $f4, 0x34($sp)
    ctx->pc = 0x203ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_203eac:
    // 0x203eac: 0xc7a50030  lwc1        $f5, 0x30($sp)
    ctx->pc = 0x203eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_203eb0:
    // 0x203eb0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x203eb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_203eb4:
    // 0x203eb4: 0xc7a30038  lwc1        $f3, 0x38($sp)
    ctx->pc = 0x203eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_203eb8:
    // 0x203eb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x203eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_203ebc:
    // 0x203ebc: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x203ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_203ec0:
    // 0x203ec0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x203ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_203ec4:
    // 0x203ec4: 0xc4420020  lwc1        $f2, 0x20($v0)
    ctx->pc = 0x203ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_203ec8:
    // 0x203ec8: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x203ec8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_203ecc:
    // 0x203ecc: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x203eccu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
label_203ed0:
    // 0x203ed0: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x203ed0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_203ed4:
    // 0x203ed4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x203ed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_203ed8:
    // 0x203ed8: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x203ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_203edc:
    // 0x203edc: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x203edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_203ee0:
    // 0x203ee0: 0xc4420024  lwc1        $f2, 0x24($v0)
    ctx->pc = 0x203ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_203ee4:
    // 0x203ee4: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x203ee4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_203ee8:
    // 0x203ee8: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x203ee8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
label_203eec:
    // 0x203eec: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x203eecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_203ef0:
    // 0x203ef0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x203ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_203ef4:
    // 0x203ef4: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x203ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_203ef8:
    // 0x203ef8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x203ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_203efc:
    // 0x203efc: 0xc4420028  lwc1        $f2, 0x28($v0)
    ctx->pc = 0x203efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_203f00:
    // 0x203f00: 0x4600201a  mula.s      $f4, $f0
    ctx->pc = 0x203f00u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_203f04:
    // 0x203f04: 0x4601281e  madda.s     $f5, $f1
    ctx->pc = 0x203f04u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[1]));
label_203f08:
    // 0x203f08: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x203f08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_203f0c:
    // 0x203f0c: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x203f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_203f10:
    // 0x203f10: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x203f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_203f14:
    // 0x203f14: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x203f14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_203f18:
    // 0x203f18: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x203f18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_203f1c:
    // 0x203f1c: 0x320f809  jalr        $t9
label_203f20:
    if (ctx->pc == 0x203F20u) {
        ctx->pc = 0x203F20u;
            // 0x203f20: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x203F24u;
        goto label_203f24;
    }
    ctx->pc = 0x203F1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x203F24u);
        ctx->pc = 0x203F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203F1Cu;
            // 0x203f20: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x203F24u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x203F24u; }
            if (ctx->pc != 0x203F24u) { return; }
        }
        }
    }
    ctx->pc = 0x203F24u;
label_203f24:
    // 0x203f24: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x203f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_203f28:
    // 0x203f28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x203f28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_203f2c:
    // 0x203f2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x203f2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_203f30:
    // 0x203f30: 0x3e00008  jr          $ra
label_203f34:
    if (ctx->pc == 0x203F34u) {
        ctx->pc = 0x203F34u;
            // 0x203f34: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x203F38u;
        goto label_203f38;
    }
    ctx->pc = 0x203F30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203F30u;
            // 0x203f34: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x203F38u;
label_203f38:
    // 0x203f38: 0x0  nop
    ctx->pc = 0x203f38u;
    // NOP
label_203f3c:
    // 0x203f3c: 0x0  nop
    ctx->pc = 0x203f3cu;
    // NOP
label_203f40:
    // 0x203f40: 0x3e00008  jr          $ra
label_203f44:
    if (ctx->pc == 0x203F44u) {
        ctx->pc = 0x203F44u;
            // 0x203f44: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x203F48u;
        goto label_203f48;
    }
    ctx->pc = 0x203F40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203F40u;
            // 0x203f44: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x203F48u;
label_203f48:
    // 0x203f48: 0x0  nop
    ctx->pc = 0x203f48u;
    // NOP
label_203f4c:
    // 0x203f4c: 0x0  nop
    ctx->pc = 0x203f4cu;
    // NOP
label_203f50:
    // 0x203f50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x203f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_203f54:
    // 0x203f54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x203f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_203f58:
    // 0x203f58: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x203f58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_203f5c:
    // 0x203f5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x203f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_203f60:
    // 0x203f60: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x203f60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_203f64:
    // 0x203f64: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x203f64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_203f68:
    // 0x203f68: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x203f68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_203f6c:
    // 0x203f6c: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x203f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_203f70:
    // 0x203f70: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x203f70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_203f74:
    // 0x203f74: 0x320f809  jalr        $t9
label_203f78:
    if (ctx->pc == 0x203F78u) {
        ctx->pc = 0x203F78u;
            // 0x203f78: 0x24a5d6e0  addiu       $a1, $a1, -0x2920 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956768));
        ctx->pc = 0x203F7Cu;
        goto label_203f7c;
    }
    ctx->pc = 0x203F74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x203F7Cu);
        ctx->pc = 0x203F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203F74u;
            // 0x203f78: 0x24a5d6e0  addiu       $a1, $a1, -0x2920 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956768));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x203F7Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x203F7Cu; }
            if (ctx->pc != 0x203F7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x203F7Cu;
label_203f7c:
    // 0x203f7c: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x203f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_203f80:
    // 0x203f80: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x203f80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_203f84:
    // 0x203f84: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x203f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_203f88:
    // 0x203f88: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x203f88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_203f8c:
    // 0x203f8c: 0x0  nop
    ctx->pc = 0x203f8cu;
    // NOP
label_203f90:
    // 0x203f90: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x203f90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_203f94:
    // 0x203f94: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x203f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_203f98:
    // 0x203f98: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x203f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_203f9c:
    // 0x203f9c: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x203f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_203fa0:
    // 0x203fa0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x203fa0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_203fa4:
    // 0x203fa4: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x203fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_203fa8:
    // 0x203fa8: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x203fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_203fac:
    // 0x203fac: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x203facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_203fb0:
    // 0x203fb0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x203fb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_203fb4:
    // 0x203fb4: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x203fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_203fb8:
    // 0x203fb8: 0xc7a2003c  lwc1        $f2, 0x3C($sp)
    ctx->pc = 0x203fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_203fbc:
    // 0x203fbc: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x203fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_203fc0:
    // 0x203fc0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x203fc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_203fc4:
    // 0x203fc4: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x203fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_203fc8:
    // 0x203fc8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x203fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_203fcc:
    // 0x203fcc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x203fccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_203fd0:
    // 0x203fd0: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x203fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_203fd4:
    // 0x203fd4: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x203fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_203fd8:
    // 0x203fd8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x203fd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_203fdc:
    // 0x203fdc: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x203fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_203fe0:
    // 0x203fe0: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x203fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_203fe4:
    // 0x203fe4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x203fe4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_203fe8:
    // 0x203fe8: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x203fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_203fec:
    // 0x203fec: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x203fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_203ff0:
    // 0x203ff0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x203ff0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_203ff4:
    // 0x203ff4: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x203ff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_203ff8:
    // 0x203ff8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x203ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_203ffc:
    // 0x203ffc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x203ffcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_204000:
    // 0x204000: 0x3e00008  jr          $ra
label_204004:
    if (ctx->pc == 0x204004u) {
        ctx->pc = 0x204004u;
            // 0x204004: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x204008u;
        goto label_204008;
    }
    ctx->pc = 0x204000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204000u;
            // 0x204004: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x204008u;
label_204008:
    // 0x204008: 0x0  nop
    ctx->pc = 0x204008u;
    // NOP
label_20400c:
    // 0x20400c: 0x0  nop
    ctx->pc = 0x20400cu;
    // NOP
}
