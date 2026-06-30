#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00359380
// Address: 0x359380 - 0x35a050
void sub_00359380_0x359380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00359380_0x359380");
#endif

    switch (ctx->pc) {
        case 0x359380u: goto label_359380;
        case 0x359384u: goto label_359384;
        case 0x359388u: goto label_359388;
        case 0x35938cu: goto label_35938c;
        case 0x359390u: goto label_359390;
        case 0x359394u: goto label_359394;
        case 0x359398u: goto label_359398;
        case 0x35939cu: goto label_35939c;
        case 0x3593a0u: goto label_3593a0;
        case 0x3593a4u: goto label_3593a4;
        case 0x3593a8u: goto label_3593a8;
        case 0x3593acu: goto label_3593ac;
        case 0x3593b0u: goto label_3593b0;
        case 0x3593b4u: goto label_3593b4;
        case 0x3593b8u: goto label_3593b8;
        case 0x3593bcu: goto label_3593bc;
        case 0x3593c0u: goto label_3593c0;
        case 0x3593c4u: goto label_3593c4;
        case 0x3593c8u: goto label_3593c8;
        case 0x3593ccu: goto label_3593cc;
        case 0x3593d0u: goto label_3593d0;
        case 0x3593d4u: goto label_3593d4;
        case 0x3593d8u: goto label_3593d8;
        case 0x3593dcu: goto label_3593dc;
        case 0x3593e0u: goto label_3593e0;
        case 0x3593e4u: goto label_3593e4;
        case 0x3593e8u: goto label_3593e8;
        case 0x3593ecu: goto label_3593ec;
        case 0x3593f0u: goto label_3593f0;
        case 0x3593f4u: goto label_3593f4;
        case 0x3593f8u: goto label_3593f8;
        case 0x3593fcu: goto label_3593fc;
        case 0x359400u: goto label_359400;
        case 0x359404u: goto label_359404;
        case 0x359408u: goto label_359408;
        case 0x35940cu: goto label_35940c;
        case 0x359410u: goto label_359410;
        case 0x359414u: goto label_359414;
        case 0x359418u: goto label_359418;
        case 0x35941cu: goto label_35941c;
        case 0x359420u: goto label_359420;
        case 0x359424u: goto label_359424;
        case 0x359428u: goto label_359428;
        case 0x35942cu: goto label_35942c;
        case 0x359430u: goto label_359430;
        case 0x359434u: goto label_359434;
        case 0x359438u: goto label_359438;
        case 0x35943cu: goto label_35943c;
        case 0x359440u: goto label_359440;
        case 0x359444u: goto label_359444;
        case 0x359448u: goto label_359448;
        case 0x35944cu: goto label_35944c;
        case 0x359450u: goto label_359450;
        case 0x359454u: goto label_359454;
        case 0x359458u: goto label_359458;
        case 0x35945cu: goto label_35945c;
        case 0x359460u: goto label_359460;
        case 0x359464u: goto label_359464;
        case 0x359468u: goto label_359468;
        case 0x35946cu: goto label_35946c;
        case 0x359470u: goto label_359470;
        case 0x359474u: goto label_359474;
        case 0x359478u: goto label_359478;
        case 0x35947cu: goto label_35947c;
        case 0x359480u: goto label_359480;
        case 0x359484u: goto label_359484;
        case 0x359488u: goto label_359488;
        case 0x35948cu: goto label_35948c;
        case 0x359490u: goto label_359490;
        case 0x359494u: goto label_359494;
        case 0x359498u: goto label_359498;
        case 0x35949cu: goto label_35949c;
        case 0x3594a0u: goto label_3594a0;
        case 0x3594a4u: goto label_3594a4;
        case 0x3594a8u: goto label_3594a8;
        case 0x3594acu: goto label_3594ac;
        case 0x3594b0u: goto label_3594b0;
        case 0x3594b4u: goto label_3594b4;
        case 0x3594b8u: goto label_3594b8;
        case 0x3594bcu: goto label_3594bc;
        case 0x3594c0u: goto label_3594c0;
        case 0x3594c4u: goto label_3594c4;
        case 0x3594c8u: goto label_3594c8;
        case 0x3594ccu: goto label_3594cc;
        case 0x3594d0u: goto label_3594d0;
        case 0x3594d4u: goto label_3594d4;
        case 0x3594d8u: goto label_3594d8;
        case 0x3594dcu: goto label_3594dc;
        case 0x3594e0u: goto label_3594e0;
        case 0x3594e4u: goto label_3594e4;
        case 0x3594e8u: goto label_3594e8;
        case 0x3594ecu: goto label_3594ec;
        case 0x3594f0u: goto label_3594f0;
        case 0x3594f4u: goto label_3594f4;
        case 0x3594f8u: goto label_3594f8;
        case 0x3594fcu: goto label_3594fc;
        case 0x359500u: goto label_359500;
        case 0x359504u: goto label_359504;
        case 0x359508u: goto label_359508;
        case 0x35950cu: goto label_35950c;
        case 0x359510u: goto label_359510;
        case 0x359514u: goto label_359514;
        case 0x359518u: goto label_359518;
        case 0x35951cu: goto label_35951c;
        case 0x359520u: goto label_359520;
        case 0x359524u: goto label_359524;
        case 0x359528u: goto label_359528;
        case 0x35952cu: goto label_35952c;
        case 0x359530u: goto label_359530;
        case 0x359534u: goto label_359534;
        case 0x359538u: goto label_359538;
        case 0x35953cu: goto label_35953c;
        case 0x359540u: goto label_359540;
        case 0x359544u: goto label_359544;
        case 0x359548u: goto label_359548;
        case 0x35954cu: goto label_35954c;
        case 0x359550u: goto label_359550;
        case 0x359554u: goto label_359554;
        case 0x359558u: goto label_359558;
        case 0x35955cu: goto label_35955c;
        case 0x359560u: goto label_359560;
        case 0x359564u: goto label_359564;
        case 0x359568u: goto label_359568;
        case 0x35956cu: goto label_35956c;
        case 0x359570u: goto label_359570;
        case 0x359574u: goto label_359574;
        case 0x359578u: goto label_359578;
        case 0x35957cu: goto label_35957c;
        case 0x359580u: goto label_359580;
        case 0x359584u: goto label_359584;
        case 0x359588u: goto label_359588;
        case 0x35958cu: goto label_35958c;
        case 0x359590u: goto label_359590;
        case 0x359594u: goto label_359594;
        case 0x359598u: goto label_359598;
        case 0x35959cu: goto label_35959c;
        case 0x3595a0u: goto label_3595a0;
        case 0x3595a4u: goto label_3595a4;
        case 0x3595a8u: goto label_3595a8;
        case 0x3595acu: goto label_3595ac;
        case 0x3595b0u: goto label_3595b0;
        case 0x3595b4u: goto label_3595b4;
        case 0x3595b8u: goto label_3595b8;
        case 0x3595bcu: goto label_3595bc;
        case 0x3595c0u: goto label_3595c0;
        case 0x3595c4u: goto label_3595c4;
        case 0x3595c8u: goto label_3595c8;
        case 0x3595ccu: goto label_3595cc;
        case 0x3595d0u: goto label_3595d0;
        case 0x3595d4u: goto label_3595d4;
        case 0x3595d8u: goto label_3595d8;
        case 0x3595dcu: goto label_3595dc;
        case 0x3595e0u: goto label_3595e0;
        case 0x3595e4u: goto label_3595e4;
        case 0x3595e8u: goto label_3595e8;
        case 0x3595ecu: goto label_3595ec;
        case 0x3595f0u: goto label_3595f0;
        case 0x3595f4u: goto label_3595f4;
        case 0x3595f8u: goto label_3595f8;
        case 0x3595fcu: goto label_3595fc;
        case 0x359600u: goto label_359600;
        case 0x359604u: goto label_359604;
        case 0x359608u: goto label_359608;
        case 0x35960cu: goto label_35960c;
        case 0x359610u: goto label_359610;
        case 0x359614u: goto label_359614;
        case 0x359618u: goto label_359618;
        case 0x35961cu: goto label_35961c;
        case 0x359620u: goto label_359620;
        case 0x359624u: goto label_359624;
        case 0x359628u: goto label_359628;
        case 0x35962cu: goto label_35962c;
        case 0x359630u: goto label_359630;
        case 0x359634u: goto label_359634;
        case 0x359638u: goto label_359638;
        case 0x35963cu: goto label_35963c;
        case 0x359640u: goto label_359640;
        case 0x359644u: goto label_359644;
        case 0x359648u: goto label_359648;
        case 0x35964cu: goto label_35964c;
        case 0x359650u: goto label_359650;
        case 0x359654u: goto label_359654;
        case 0x359658u: goto label_359658;
        case 0x35965cu: goto label_35965c;
        case 0x359660u: goto label_359660;
        case 0x359664u: goto label_359664;
        case 0x359668u: goto label_359668;
        case 0x35966cu: goto label_35966c;
        case 0x359670u: goto label_359670;
        case 0x359674u: goto label_359674;
        case 0x359678u: goto label_359678;
        case 0x35967cu: goto label_35967c;
        case 0x359680u: goto label_359680;
        case 0x359684u: goto label_359684;
        case 0x359688u: goto label_359688;
        case 0x35968cu: goto label_35968c;
        case 0x359690u: goto label_359690;
        case 0x359694u: goto label_359694;
        case 0x359698u: goto label_359698;
        case 0x35969cu: goto label_35969c;
        case 0x3596a0u: goto label_3596a0;
        case 0x3596a4u: goto label_3596a4;
        case 0x3596a8u: goto label_3596a8;
        case 0x3596acu: goto label_3596ac;
        case 0x3596b0u: goto label_3596b0;
        case 0x3596b4u: goto label_3596b4;
        case 0x3596b8u: goto label_3596b8;
        case 0x3596bcu: goto label_3596bc;
        case 0x3596c0u: goto label_3596c0;
        case 0x3596c4u: goto label_3596c4;
        case 0x3596c8u: goto label_3596c8;
        case 0x3596ccu: goto label_3596cc;
        case 0x3596d0u: goto label_3596d0;
        case 0x3596d4u: goto label_3596d4;
        case 0x3596d8u: goto label_3596d8;
        case 0x3596dcu: goto label_3596dc;
        case 0x3596e0u: goto label_3596e0;
        case 0x3596e4u: goto label_3596e4;
        case 0x3596e8u: goto label_3596e8;
        case 0x3596ecu: goto label_3596ec;
        case 0x3596f0u: goto label_3596f0;
        case 0x3596f4u: goto label_3596f4;
        case 0x3596f8u: goto label_3596f8;
        case 0x3596fcu: goto label_3596fc;
        case 0x359700u: goto label_359700;
        case 0x359704u: goto label_359704;
        case 0x359708u: goto label_359708;
        case 0x35970cu: goto label_35970c;
        case 0x359710u: goto label_359710;
        case 0x359714u: goto label_359714;
        case 0x359718u: goto label_359718;
        case 0x35971cu: goto label_35971c;
        case 0x359720u: goto label_359720;
        case 0x359724u: goto label_359724;
        case 0x359728u: goto label_359728;
        case 0x35972cu: goto label_35972c;
        case 0x359730u: goto label_359730;
        case 0x359734u: goto label_359734;
        case 0x359738u: goto label_359738;
        case 0x35973cu: goto label_35973c;
        case 0x359740u: goto label_359740;
        case 0x359744u: goto label_359744;
        case 0x359748u: goto label_359748;
        case 0x35974cu: goto label_35974c;
        case 0x359750u: goto label_359750;
        case 0x359754u: goto label_359754;
        case 0x359758u: goto label_359758;
        case 0x35975cu: goto label_35975c;
        case 0x359760u: goto label_359760;
        case 0x359764u: goto label_359764;
        case 0x359768u: goto label_359768;
        case 0x35976cu: goto label_35976c;
        case 0x359770u: goto label_359770;
        case 0x359774u: goto label_359774;
        case 0x359778u: goto label_359778;
        case 0x35977cu: goto label_35977c;
        case 0x359780u: goto label_359780;
        case 0x359784u: goto label_359784;
        case 0x359788u: goto label_359788;
        case 0x35978cu: goto label_35978c;
        case 0x359790u: goto label_359790;
        case 0x359794u: goto label_359794;
        case 0x359798u: goto label_359798;
        case 0x35979cu: goto label_35979c;
        case 0x3597a0u: goto label_3597a0;
        case 0x3597a4u: goto label_3597a4;
        case 0x3597a8u: goto label_3597a8;
        case 0x3597acu: goto label_3597ac;
        case 0x3597b0u: goto label_3597b0;
        case 0x3597b4u: goto label_3597b4;
        case 0x3597b8u: goto label_3597b8;
        case 0x3597bcu: goto label_3597bc;
        case 0x3597c0u: goto label_3597c0;
        case 0x3597c4u: goto label_3597c4;
        case 0x3597c8u: goto label_3597c8;
        case 0x3597ccu: goto label_3597cc;
        case 0x3597d0u: goto label_3597d0;
        case 0x3597d4u: goto label_3597d4;
        case 0x3597d8u: goto label_3597d8;
        case 0x3597dcu: goto label_3597dc;
        case 0x3597e0u: goto label_3597e0;
        case 0x3597e4u: goto label_3597e4;
        case 0x3597e8u: goto label_3597e8;
        case 0x3597ecu: goto label_3597ec;
        case 0x3597f0u: goto label_3597f0;
        case 0x3597f4u: goto label_3597f4;
        case 0x3597f8u: goto label_3597f8;
        case 0x3597fcu: goto label_3597fc;
        case 0x359800u: goto label_359800;
        case 0x359804u: goto label_359804;
        case 0x359808u: goto label_359808;
        case 0x35980cu: goto label_35980c;
        case 0x359810u: goto label_359810;
        case 0x359814u: goto label_359814;
        case 0x359818u: goto label_359818;
        case 0x35981cu: goto label_35981c;
        case 0x359820u: goto label_359820;
        case 0x359824u: goto label_359824;
        case 0x359828u: goto label_359828;
        case 0x35982cu: goto label_35982c;
        case 0x359830u: goto label_359830;
        case 0x359834u: goto label_359834;
        case 0x359838u: goto label_359838;
        case 0x35983cu: goto label_35983c;
        case 0x359840u: goto label_359840;
        case 0x359844u: goto label_359844;
        case 0x359848u: goto label_359848;
        case 0x35984cu: goto label_35984c;
        case 0x359850u: goto label_359850;
        case 0x359854u: goto label_359854;
        case 0x359858u: goto label_359858;
        case 0x35985cu: goto label_35985c;
        case 0x359860u: goto label_359860;
        case 0x359864u: goto label_359864;
        case 0x359868u: goto label_359868;
        case 0x35986cu: goto label_35986c;
        case 0x359870u: goto label_359870;
        case 0x359874u: goto label_359874;
        case 0x359878u: goto label_359878;
        case 0x35987cu: goto label_35987c;
        case 0x359880u: goto label_359880;
        case 0x359884u: goto label_359884;
        case 0x359888u: goto label_359888;
        case 0x35988cu: goto label_35988c;
        case 0x359890u: goto label_359890;
        case 0x359894u: goto label_359894;
        case 0x359898u: goto label_359898;
        case 0x35989cu: goto label_35989c;
        case 0x3598a0u: goto label_3598a0;
        case 0x3598a4u: goto label_3598a4;
        case 0x3598a8u: goto label_3598a8;
        case 0x3598acu: goto label_3598ac;
        case 0x3598b0u: goto label_3598b0;
        case 0x3598b4u: goto label_3598b4;
        case 0x3598b8u: goto label_3598b8;
        case 0x3598bcu: goto label_3598bc;
        case 0x3598c0u: goto label_3598c0;
        case 0x3598c4u: goto label_3598c4;
        case 0x3598c8u: goto label_3598c8;
        case 0x3598ccu: goto label_3598cc;
        case 0x3598d0u: goto label_3598d0;
        case 0x3598d4u: goto label_3598d4;
        case 0x3598d8u: goto label_3598d8;
        case 0x3598dcu: goto label_3598dc;
        case 0x3598e0u: goto label_3598e0;
        case 0x3598e4u: goto label_3598e4;
        case 0x3598e8u: goto label_3598e8;
        case 0x3598ecu: goto label_3598ec;
        case 0x3598f0u: goto label_3598f0;
        case 0x3598f4u: goto label_3598f4;
        case 0x3598f8u: goto label_3598f8;
        case 0x3598fcu: goto label_3598fc;
        case 0x359900u: goto label_359900;
        case 0x359904u: goto label_359904;
        case 0x359908u: goto label_359908;
        case 0x35990cu: goto label_35990c;
        case 0x359910u: goto label_359910;
        case 0x359914u: goto label_359914;
        case 0x359918u: goto label_359918;
        case 0x35991cu: goto label_35991c;
        case 0x359920u: goto label_359920;
        case 0x359924u: goto label_359924;
        case 0x359928u: goto label_359928;
        case 0x35992cu: goto label_35992c;
        case 0x359930u: goto label_359930;
        case 0x359934u: goto label_359934;
        case 0x359938u: goto label_359938;
        case 0x35993cu: goto label_35993c;
        case 0x359940u: goto label_359940;
        case 0x359944u: goto label_359944;
        case 0x359948u: goto label_359948;
        case 0x35994cu: goto label_35994c;
        case 0x359950u: goto label_359950;
        case 0x359954u: goto label_359954;
        case 0x359958u: goto label_359958;
        case 0x35995cu: goto label_35995c;
        case 0x359960u: goto label_359960;
        case 0x359964u: goto label_359964;
        case 0x359968u: goto label_359968;
        case 0x35996cu: goto label_35996c;
        case 0x359970u: goto label_359970;
        case 0x359974u: goto label_359974;
        case 0x359978u: goto label_359978;
        case 0x35997cu: goto label_35997c;
        case 0x359980u: goto label_359980;
        case 0x359984u: goto label_359984;
        case 0x359988u: goto label_359988;
        case 0x35998cu: goto label_35998c;
        case 0x359990u: goto label_359990;
        case 0x359994u: goto label_359994;
        case 0x359998u: goto label_359998;
        case 0x35999cu: goto label_35999c;
        case 0x3599a0u: goto label_3599a0;
        case 0x3599a4u: goto label_3599a4;
        case 0x3599a8u: goto label_3599a8;
        case 0x3599acu: goto label_3599ac;
        case 0x3599b0u: goto label_3599b0;
        case 0x3599b4u: goto label_3599b4;
        case 0x3599b8u: goto label_3599b8;
        case 0x3599bcu: goto label_3599bc;
        case 0x3599c0u: goto label_3599c0;
        case 0x3599c4u: goto label_3599c4;
        case 0x3599c8u: goto label_3599c8;
        case 0x3599ccu: goto label_3599cc;
        case 0x3599d0u: goto label_3599d0;
        case 0x3599d4u: goto label_3599d4;
        case 0x3599d8u: goto label_3599d8;
        case 0x3599dcu: goto label_3599dc;
        case 0x3599e0u: goto label_3599e0;
        case 0x3599e4u: goto label_3599e4;
        case 0x3599e8u: goto label_3599e8;
        case 0x3599ecu: goto label_3599ec;
        case 0x3599f0u: goto label_3599f0;
        case 0x3599f4u: goto label_3599f4;
        case 0x3599f8u: goto label_3599f8;
        case 0x3599fcu: goto label_3599fc;
        case 0x359a00u: goto label_359a00;
        case 0x359a04u: goto label_359a04;
        case 0x359a08u: goto label_359a08;
        case 0x359a0cu: goto label_359a0c;
        case 0x359a10u: goto label_359a10;
        case 0x359a14u: goto label_359a14;
        case 0x359a18u: goto label_359a18;
        case 0x359a1cu: goto label_359a1c;
        case 0x359a20u: goto label_359a20;
        case 0x359a24u: goto label_359a24;
        case 0x359a28u: goto label_359a28;
        case 0x359a2cu: goto label_359a2c;
        case 0x359a30u: goto label_359a30;
        case 0x359a34u: goto label_359a34;
        case 0x359a38u: goto label_359a38;
        case 0x359a3cu: goto label_359a3c;
        case 0x359a40u: goto label_359a40;
        case 0x359a44u: goto label_359a44;
        case 0x359a48u: goto label_359a48;
        case 0x359a4cu: goto label_359a4c;
        case 0x359a50u: goto label_359a50;
        case 0x359a54u: goto label_359a54;
        case 0x359a58u: goto label_359a58;
        case 0x359a5cu: goto label_359a5c;
        case 0x359a60u: goto label_359a60;
        case 0x359a64u: goto label_359a64;
        case 0x359a68u: goto label_359a68;
        case 0x359a6cu: goto label_359a6c;
        case 0x359a70u: goto label_359a70;
        case 0x359a74u: goto label_359a74;
        case 0x359a78u: goto label_359a78;
        case 0x359a7cu: goto label_359a7c;
        case 0x359a80u: goto label_359a80;
        case 0x359a84u: goto label_359a84;
        case 0x359a88u: goto label_359a88;
        case 0x359a8cu: goto label_359a8c;
        case 0x359a90u: goto label_359a90;
        case 0x359a94u: goto label_359a94;
        case 0x359a98u: goto label_359a98;
        case 0x359a9cu: goto label_359a9c;
        case 0x359aa0u: goto label_359aa0;
        case 0x359aa4u: goto label_359aa4;
        case 0x359aa8u: goto label_359aa8;
        case 0x359aacu: goto label_359aac;
        case 0x359ab0u: goto label_359ab0;
        case 0x359ab4u: goto label_359ab4;
        case 0x359ab8u: goto label_359ab8;
        case 0x359abcu: goto label_359abc;
        case 0x359ac0u: goto label_359ac0;
        case 0x359ac4u: goto label_359ac4;
        case 0x359ac8u: goto label_359ac8;
        case 0x359accu: goto label_359acc;
        case 0x359ad0u: goto label_359ad0;
        case 0x359ad4u: goto label_359ad4;
        case 0x359ad8u: goto label_359ad8;
        case 0x359adcu: goto label_359adc;
        case 0x359ae0u: goto label_359ae0;
        case 0x359ae4u: goto label_359ae4;
        case 0x359ae8u: goto label_359ae8;
        case 0x359aecu: goto label_359aec;
        case 0x359af0u: goto label_359af0;
        case 0x359af4u: goto label_359af4;
        case 0x359af8u: goto label_359af8;
        case 0x359afcu: goto label_359afc;
        case 0x359b00u: goto label_359b00;
        case 0x359b04u: goto label_359b04;
        case 0x359b08u: goto label_359b08;
        case 0x359b0cu: goto label_359b0c;
        case 0x359b10u: goto label_359b10;
        case 0x359b14u: goto label_359b14;
        case 0x359b18u: goto label_359b18;
        case 0x359b1cu: goto label_359b1c;
        case 0x359b20u: goto label_359b20;
        case 0x359b24u: goto label_359b24;
        case 0x359b28u: goto label_359b28;
        case 0x359b2cu: goto label_359b2c;
        case 0x359b30u: goto label_359b30;
        case 0x359b34u: goto label_359b34;
        case 0x359b38u: goto label_359b38;
        case 0x359b3cu: goto label_359b3c;
        case 0x359b40u: goto label_359b40;
        case 0x359b44u: goto label_359b44;
        case 0x359b48u: goto label_359b48;
        case 0x359b4cu: goto label_359b4c;
        case 0x359b50u: goto label_359b50;
        case 0x359b54u: goto label_359b54;
        case 0x359b58u: goto label_359b58;
        case 0x359b5cu: goto label_359b5c;
        case 0x359b60u: goto label_359b60;
        case 0x359b64u: goto label_359b64;
        case 0x359b68u: goto label_359b68;
        case 0x359b6cu: goto label_359b6c;
        case 0x359b70u: goto label_359b70;
        case 0x359b74u: goto label_359b74;
        case 0x359b78u: goto label_359b78;
        case 0x359b7cu: goto label_359b7c;
        case 0x359b80u: goto label_359b80;
        case 0x359b84u: goto label_359b84;
        case 0x359b88u: goto label_359b88;
        case 0x359b8cu: goto label_359b8c;
        case 0x359b90u: goto label_359b90;
        case 0x359b94u: goto label_359b94;
        case 0x359b98u: goto label_359b98;
        case 0x359b9cu: goto label_359b9c;
        case 0x359ba0u: goto label_359ba0;
        case 0x359ba4u: goto label_359ba4;
        case 0x359ba8u: goto label_359ba8;
        case 0x359bacu: goto label_359bac;
        case 0x359bb0u: goto label_359bb0;
        case 0x359bb4u: goto label_359bb4;
        case 0x359bb8u: goto label_359bb8;
        case 0x359bbcu: goto label_359bbc;
        case 0x359bc0u: goto label_359bc0;
        case 0x359bc4u: goto label_359bc4;
        case 0x359bc8u: goto label_359bc8;
        case 0x359bccu: goto label_359bcc;
        case 0x359bd0u: goto label_359bd0;
        case 0x359bd4u: goto label_359bd4;
        case 0x359bd8u: goto label_359bd8;
        case 0x359bdcu: goto label_359bdc;
        case 0x359be0u: goto label_359be0;
        case 0x359be4u: goto label_359be4;
        case 0x359be8u: goto label_359be8;
        case 0x359becu: goto label_359bec;
        case 0x359bf0u: goto label_359bf0;
        case 0x359bf4u: goto label_359bf4;
        case 0x359bf8u: goto label_359bf8;
        case 0x359bfcu: goto label_359bfc;
        case 0x359c00u: goto label_359c00;
        case 0x359c04u: goto label_359c04;
        case 0x359c08u: goto label_359c08;
        case 0x359c0cu: goto label_359c0c;
        case 0x359c10u: goto label_359c10;
        case 0x359c14u: goto label_359c14;
        case 0x359c18u: goto label_359c18;
        case 0x359c1cu: goto label_359c1c;
        case 0x359c20u: goto label_359c20;
        case 0x359c24u: goto label_359c24;
        case 0x359c28u: goto label_359c28;
        case 0x359c2cu: goto label_359c2c;
        case 0x359c30u: goto label_359c30;
        case 0x359c34u: goto label_359c34;
        case 0x359c38u: goto label_359c38;
        case 0x359c3cu: goto label_359c3c;
        case 0x359c40u: goto label_359c40;
        case 0x359c44u: goto label_359c44;
        case 0x359c48u: goto label_359c48;
        case 0x359c4cu: goto label_359c4c;
        case 0x359c50u: goto label_359c50;
        case 0x359c54u: goto label_359c54;
        case 0x359c58u: goto label_359c58;
        case 0x359c5cu: goto label_359c5c;
        case 0x359c60u: goto label_359c60;
        case 0x359c64u: goto label_359c64;
        case 0x359c68u: goto label_359c68;
        case 0x359c6cu: goto label_359c6c;
        case 0x359c70u: goto label_359c70;
        case 0x359c74u: goto label_359c74;
        case 0x359c78u: goto label_359c78;
        case 0x359c7cu: goto label_359c7c;
        case 0x359c80u: goto label_359c80;
        case 0x359c84u: goto label_359c84;
        case 0x359c88u: goto label_359c88;
        case 0x359c8cu: goto label_359c8c;
        case 0x359c90u: goto label_359c90;
        case 0x359c94u: goto label_359c94;
        case 0x359c98u: goto label_359c98;
        case 0x359c9cu: goto label_359c9c;
        case 0x359ca0u: goto label_359ca0;
        case 0x359ca4u: goto label_359ca4;
        case 0x359ca8u: goto label_359ca8;
        case 0x359cacu: goto label_359cac;
        case 0x359cb0u: goto label_359cb0;
        case 0x359cb4u: goto label_359cb4;
        case 0x359cb8u: goto label_359cb8;
        case 0x359cbcu: goto label_359cbc;
        case 0x359cc0u: goto label_359cc0;
        case 0x359cc4u: goto label_359cc4;
        case 0x359cc8u: goto label_359cc8;
        case 0x359cccu: goto label_359ccc;
        case 0x359cd0u: goto label_359cd0;
        case 0x359cd4u: goto label_359cd4;
        case 0x359cd8u: goto label_359cd8;
        case 0x359cdcu: goto label_359cdc;
        case 0x359ce0u: goto label_359ce0;
        case 0x359ce4u: goto label_359ce4;
        case 0x359ce8u: goto label_359ce8;
        case 0x359cecu: goto label_359cec;
        case 0x359cf0u: goto label_359cf0;
        case 0x359cf4u: goto label_359cf4;
        case 0x359cf8u: goto label_359cf8;
        case 0x359cfcu: goto label_359cfc;
        case 0x359d00u: goto label_359d00;
        case 0x359d04u: goto label_359d04;
        case 0x359d08u: goto label_359d08;
        case 0x359d0cu: goto label_359d0c;
        case 0x359d10u: goto label_359d10;
        case 0x359d14u: goto label_359d14;
        case 0x359d18u: goto label_359d18;
        case 0x359d1cu: goto label_359d1c;
        case 0x359d20u: goto label_359d20;
        case 0x359d24u: goto label_359d24;
        case 0x359d28u: goto label_359d28;
        case 0x359d2cu: goto label_359d2c;
        case 0x359d30u: goto label_359d30;
        case 0x359d34u: goto label_359d34;
        case 0x359d38u: goto label_359d38;
        case 0x359d3cu: goto label_359d3c;
        case 0x359d40u: goto label_359d40;
        case 0x359d44u: goto label_359d44;
        case 0x359d48u: goto label_359d48;
        case 0x359d4cu: goto label_359d4c;
        case 0x359d50u: goto label_359d50;
        case 0x359d54u: goto label_359d54;
        case 0x359d58u: goto label_359d58;
        case 0x359d5cu: goto label_359d5c;
        case 0x359d60u: goto label_359d60;
        case 0x359d64u: goto label_359d64;
        case 0x359d68u: goto label_359d68;
        case 0x359d6cu: goto label_359d6c;
        case 0x359d70u: goto label_359d70;
        case 0x359d74u: goto label_359d74;
        case 0x359d78u: goto label_359d78;
        case 0x359d7cu: goto label_359d7c;
        case 0x359d80u: goto label_359d80;
        case 0x359d84u: goto label_359d84;
        case 0x359d88u: goto label_359d88;
        case 0x359d8cu: goto label_359d8c;
        case 0x359d90u: goto label_359d90;
        case 0x359d94u: goto label_359d94;
        case 0x359d98u: goto label_359d98;
        case 0x359d9cu: goto label_359d9c;
        case 0x359da0u: goto label_359da0;
        case 0x359da4u: goto label_359da4;
        case 0x359da8u: goto label_359da8;
        case 0x359dacu: goto label_359dac;
        case 0x359db0u: goto label_359db0;
        case 0x359db4u: goto label_359db4;
        case 0x359db8u: goto label_359db8;
        case 0x359dbcu: goto label_359dbc;
        case 0x359dc0u: goto label_359dc0;
        case 0x359dc4u: goto label_359dc4;
        case 0x359dc8u: goto label_359dc8;
        case 0x359dccu: goto label_359dcc;
        case 0x359dd0u: goto label_359dd0;
        case 0x359dd4u: goto label_359dd4;
        case 0x359dd8u: goto label_359dd8;
        case 0x359ddcu: goto label_359ddc;
        case 0x359de0u: goto label_359de0;
        case 0x359de4u: goto label_359de4;
        case 0x359de8u: goto label_359de8;
        case 0x359decu: goto label_359dec;
        case 0x359df0u: goto label_359df0;
        case 0x359df4u: goto label_359df4;
        case 0x359df8u: goto label_359df8;
        case 0x359dfcu: goto label_359dfc;
        case 0x359e00u: goto label_359e00;
        case 0x359e04u: goto label_359e04;
        case 0x359e08u: goto label_359e08;
        case 0x359e0cu: goto label_359e0c;
        case 0x359e10u: goto label_359e10;
        case 0x359e14u: goto label_359e14;
        case 0x359e18u: goto label_359e18;
        case 0x359e1cu: goto label_359e1c;
        case 0x359e20u: goto label_359e20;
        case 0x359e24u: goto label_359e24;
        case 0x359e28u: goto label_359e28;
        case 0x359e2cu: goto label_359e2c;
        case 0x359e30u: goto label_359e30;
        case 0x359e34u: goto label_359e34;
        case 0x359e38u: goto label_359e38;
        case 0x359e3cu: goto label_359e3c;
        case 0x359e40u: goto label_359e40;
        case 0x359e44u: goto label_359e44;
        case 0x359e48u: goto label_359e48;
        case 0x359e4cu: goto label_359e4c;
        case 0x359e50u: goto label_359e50;
        case 0x359e54u: goto label_359e54;
        case 0x359e58u: goto label_359e58;
        case 0x359e5cu: goto label_359e5c;
        case 0x359e60u: goto label_359e60;
        case 0x359e64u: goto label_359e64;
        case 0x359e68u: goto label_359e68;
        case 0x359e6cu: goto label_359e6c;
        case 0x359e70u: goto label_359e70;
        case 0x359e74u: goto label_359e74;
        case 0x359e78u: goto label_359e78;
        case 0x359e7cu: goto label_359e7c;
        case 0x359e80u: goto label_359e80;
        case 0x359e84u: goto label_359e84;
        case 0x359e88u: goto label_359e88;
        case 0x359e8cu: goto label_359e8c;
        case 0x359e90u: goto label_359e90;
        case 0x359e94u: goto label_359e94;
        case 0x359e98u: goto label_359e98;
        case 0x359e9cu: goto label_359e9c;
        case 0x359ea0u: goto label_359ea0;
        case 0x359ea4u: goto label_359ea4;
        case 0x359ea8u: goto label_359ea8;
        case 0x359eacu: goto label_359eac;
        case 0x359eb0u: goto label_359eb0;
        case 0x359eb4u: goto label_359eb4;
        case 0x359eb8u: goto label_359eb8;
        case 0x359ebcu: goto label_359ebc;
        case 0x359ec0u: goto label_359ec0;
        case 0x359ec4u: goto label_359ec4;
        case 0x359ec8u: goto label_359ec8;
        case 0x359eccu: goto label_359ecc;
        case 0x359ed0u: goto label_359ed0;
        case 0x359ed4u: goto label_359ed4;
        case 0x359ed8u: goto label_359ed8;
        case 0x359edcu: goto label_359edc;
        case 0x359ee0u: goto label_359ee0;
        case 0x359ee4u: goto label_359ee4;
        case 0x359ee8u: goto label_359ee8;
        case 0x359eecu: goto label_359eec;
        case 0x359ef0u: goto label_359ef0;
        case 0x359ef4u: goto label_359ef4;
        case 0x359ef8u: goto label_359ef8;
        case 0x359efcu: goto label_359efc;
        case 0x359f00u: goto label_359f00;
        case 0x359f04u: goto label_359f04;
        case 0x359f08u: goto label_359f08;
        case 0x359f0cu: goto label_359f0c;
        case 0x359f10u: goto label_359f10;
        case 0x359f14u: goto label_359f14;
        case 0x359f18u: goto label_359f18;
        case 0x359f1cu: goto label_359f1c;
        case 0x359f20u: goto label_359f20;
        case 0x359f24u: goto label_359f24;
        case 0x359f28u: goto label_359f28;
        case 0x359f2cu: goto label_359f2c;
        case 0x359f30u: goto label_359f30;
        case 0x359f34u: goto label_359f34;
        case 0x359f38u: goto label_359f38;
        case 0x359f3cu: goto label_359f3c;
        case 0x359f40u: goto label_359f40;
        case 0x359f44u: goto label_359f44;
        case 0x359f48u: goto label_359f48;
        case 0x359f4cu: goto label_359f4c;
        case 0x359f50u: goto label_359f50;
        case 0x359f54u: goto label_359f54;
        case 0x359f58u: goto label_359f58;
        case 0x359f5cu: goto label_359f5c;
        case 0x359f60u: goto label_359f60;
        case 0x359f64u: goto label_359f64;
        case 0x359f68u: goto label_359f68;
        case 0x359f6cu: goto label_359f6c;
        case 0x359f70u: goto label_359f70;
        case 0x359f74u: goto label_359f74;
        case 0x359f78u: goto label_359f78;
        case 0x359f7cu: goto label_359f7c;
        case 0x359f80u: goto label_359f80;
        case 0x359f84u: goto label_359f84;
        case 0x359f88u: goto label_359f88;
        case 0x359f8cu: goto label_359f8c;
        case 0x359f90u: goto label_359f90;
        case 0x359f94u: goto label_359f94;
        case 0x359f98u: goto label_359f98;
        case 0x359f9cu: goto label_359f9c;
        case 0x359fa0u: goto label_359fa0;
        case 0x359fa4u: goto label_359fa4;
        case 0x359fa8u: goto label_359fa8;
        case 0x359facu: goto label_359fac;
        case 0x359fb0u: goto label_359fb0;
        case 0x359fb4u: goto label_359fb4;
        case 0x359fb8u: goto label_359fb8;
        case 0x359fbcu: goto label_359fbc;
        case 0x359fc0u: goto label_359fc0;
        case 0x359fc4u: goto label_359fc4;
        case 0x359fc8u: goto label_359fc8;
        case 0x359fccu: goto label_359fcc;
        case 0x359fd0u: goto label_359fd0;
        case 0x359fd4u: goto label_359fd4;
        case 0x359fd8u: goto label_359fd8;
        case 0x359fdcu: goto label_359fdc;
        case 0x359fe0u: goto label_359fe0;
        case 0x359fe4u: goto label_359fe4;
        case 0x359fe8u: goto label_359fe8;
        case 0x359fecu: goto label_359fec;
        case 0x359ff0u: goto label_359ff0;
        case 0x359ff4u: goto label_359ff4;
        case 0x359ff8u: goto label_359ff8;
        case 0x359ffcu: goto label_359ffc;
        case 0x35a000u: goto label_35a000;
        case 0x35a004u: goto label_35a004;
        case 0x35a008u: goto label_35a008;
        case 0x35a00cu: goto label_35a00c;
        case 0x35a010u: goto label_35a010;
        case 0x35a014u: goto label_35a014;
        case 0x35a018u: goto label_35a018;
        case 0x35a01cu: goto label_35a01c;
        case 0x35a020u: goto label_35a020;
        case 0x35a024u: goto label_35a024;
        case 0x35a028u: goto label_35a028;
        case 0x35a02cu: goto label_35a02c;
        case 0x35a030u: goto label_35a030;
        case 0x35a034u: goto label_35a034;
        case 0x35a038u: goto label_35a038;
        case 0x35a03cu: goto label_35a03c;
        case 0x35a040u: goto label_35a040;
        case 0x35a044u: goto label_35a044;
        case 0x35a048u: goto label_35a048;
        case 0x35a04cu: goto label_35a04c;
        default: break;
    }

    ctx->pc = 0x359380u;

label_359380:
    // 0x359380: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x359380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_359384:
    // 0x359384: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x359384u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_359388:
    // 0x359388: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x359388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_35938c:
    // 0x35938c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x35938cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_359390:
    // 0x359390: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x359390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_359394:
    // 0x359394: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x359394u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_359398:
    // 0x359398: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x359398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_35939c:
    // 0x35939c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35939cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3593a0:
    // 0x3593a0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3593a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3593a4:
    // 0x3593a4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3593a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3593a8:
    // 0x3593a8: 0xc10ca68  jal         func_4329A0
label_3593ac:
    if (ctx->pc == 0x3593ACu) {
        ctx->pc = 0x3593ACu;
            // 0x3593ac: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x3593B0u;
        goto label_3593b0;
    }
    ctx->pc = 0x3593A8u;
    SET_GPR_U32(ctx, 31, 0x3593B0u);
    ctx->pc = 0x3593ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3593A8u;
            // 0x3593ac: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3593B0u; }
        if (ctx->pc != 0x3593B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3593B0u; }
        if (ctx->pc != 0x3593B0u) { return; }
    }
    ctx->pc = 0x3593B0u;
label_3593b0:
    // 0x3593b0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3593b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3593b4:
    // 0x3593b4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3593b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3593b8:
    // 0x3593b8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x3593b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_3593bc:
    // 0x3593bc: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x3593bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_3593c0:
    // 0x3593c0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x3593c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_3593c4:
    // 0x3593c4: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x3593c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_3593c8:
    // 0x3593c8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x3593c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_3593cc:
    // 0x3593cc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3593ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3593d0:
    // 0x3593d0: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x3593d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_3593d4:
    // 0x3593d4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3593d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3593d8:
    // 0x3593d8: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x3593d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_3593dc:
    // 0x3593dc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x3593dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3593e0:
    // 0x3593e0: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x3593e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_3593e4:
    // 0x3593e4: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x3593e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_3593e8:
    // 0x3593e8: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x3593e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_3593ec:
    // 0x3593ec: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x3593ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_3593f0:
    // 0x3593f0: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x3593f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_3593f4:
    // 0x3593f4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x3593f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_3593f8:
    // 0x3593f8: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x3593f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_3593fc:
    // 0x3593fc: 0xc0582cc  jal         func_160B30
label_359400:
    if (ctx->pc == 0x359400u) {
        ctx->pc = 0x359400u;
            // 0x359400: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x359404u;
        goto label_359404;
    }
    ctx->pc = 0x3593FCu;
    SET_GPR_U32(ctx, 31, 0x359404u);
    ctx->pc = 0x359400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3593FCu;
            // 0x359400: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359404u; }
        if (ctx->pc != 0x359404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359404u; }
        if (ctx->pc != 0x359404u) { return; }
    }
    ctx->pc = 0x359404u;
label_359404:
    // 0x359404: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x359404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_359408:
    // 0x359408: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x359408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_35940c:
    // 0x35940c: 0x246361a8  addiu       $v1, $v1, 0x61A8
    ctx->pc = 0x35940cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25000));
label_359410:
    // 0x359410: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x359410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_359414:
    // 0x359414: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x359414u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_359418:
    // 0x359418: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x359418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_35941c:
    // 0x35941c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x35941cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_359420:
    // 0x359420: 0xac444000  sw          $a0, 0x4000($v0)
    ctx->pc = 0x359420u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16384), GPR_U32(ctx, 4));
label_359424:
    // 0x359424: 0x246361c0  addiu       $v1, $v1, 0x61C0
    ctx->pc = 0x359424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25024));
label_359428:
    // 0x359428: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x359428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_35942c:
    // 0x35942c: 0x244261f8  addiu       $v0, $v0, 0x61F8
    ctx->pc = 0x35942cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25080));
label_359430:
    // 0x359430: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x359430u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_359434:
    // 0x359434: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x359434u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_359438:
    // 0x359438: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x359438u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_35943c:
    // 0x35943c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x35943cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_359440:
    // 0x359440: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x359440u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_359444:
    // 0x359444: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x359444u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_359448:
    // 0x359448: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x359448u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_35944c:
    // 0x35944c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x35944cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_359450:
    // 0x359450: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x359450u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_359454:
    // 0x359454: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x359454u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_359458:
    // 0x359458: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x359458u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_35945c:
    // 0x35945c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x35945cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_359460:
    // 0x359460: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x359460u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_359464:
    // 0x359464: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_359468:
    if (ctx->pc == 0x359468u) {
        ctx->pc = 0x35946Cu;
        goto label_35946c;
    }
    ctx->pc = 0x359464u;
    {
        const bool branch_taken_0x359464 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x359464) {
            ctx->pc = 0x3594F8u;
            goto label_3594f8;
        }
    }
    ctx->pc = 0x35946Cu;
label_35946c:
    // 0x35946c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x35946cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_359470:
    // 0x359470: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x359470u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_359474:
    // 0x359474: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x359474u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_359478:
    // 0x359478: 0xc040138  jal         func_1004E0
label_35947c:
    if (ctx->pc == 0x35947Cu) {
        ctx->pc = 0x35947Cu;
            // 0x35947c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x359480u;
        goto label_359480;
    }
    ctx->pc = 0x359478u;
    SET_GPR_U32(ctx, 31, 0x359480u);
    ctx->pc = 0x35947Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x359478u;
            // 0x35947c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359480u; }
        if (ctx->pc != 0x359480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359480u; }
        if (ctx->pc != 0x359480u) { return; }
    }
    ctx->pc = 0x359480u;
label_359480:
    // 0x359480: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x359480u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_359484:
    // 0x359484: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x359484u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_359488:
    // 0x359488: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x359488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35948c:
    // 0x35948c: 0x24a59520  addiu       $a1, $a1, -0x6AE0
    ctx->pc = 0x35948cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939936));
label_359490:
    // 0x359490: 0x24c687e0  addiu       $a2, $a2, -0x7820
    ctx->pc = 0x359490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936544));
label_359494:
    // 0x359494: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x359494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_359498:
    // 0x359498: 0xc040840  jal         func_102100
label_35949c:
    if (ctx->pc == 0x35949Cu) {
        ctx->pc = 0x35949Cu;
            // 0x35949c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3594A0u;
        goto label_3594a0;
    }
    ctx->pc = 0x359498u;
    SET_GPR_U32(ctx, 31, 0x3594A0u);
    ctx->pc = 0x35949Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x359498u;
            // 0x35949c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3594A0u; }
        if (ctx->pc != 0x3594A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3594A0u; }
        if (ctx->pc != 0x3594A0u) { return; }
    }
    ctx->pc = 0x3594A0u;
label_3594a0:
    // 0x3594a0: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x3594a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_3594a4:
    // 0x3594a4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3594a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3594a8:
    // 0x3594a8: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x3594a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_3594ac:
    // 0x3594ac: 0xc0788fc  jal         func_1E23F0
label_3594b0:
    if (ctx->pc == 0x3594B0u) {
        ctx->pc = 0x3594B0u;
            // 0x3594b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3594B4u;
        goto label_3594b4;
    }
    ctx->pc = 0x3594ACu;
    SET_GPR_U32(ctx, 31, 0x3594B4u);
    ctx->pc = 0x3594B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3594ACu;
            // 0x3594b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3594B4u; }
        if (ctx->pc != 0x3594B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3594B4u; }
        if (ctx->pc != 0x3594B4u) { return; }
    }
    ctx->pc = 0x3594B4u;
label_3594b4:
    // 0x3594b4: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x3594b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_3594b8:
    // 0x3594b8: 0xc0788fc  jal         func_1E23F0
label_3594bc:
    if (ctx->pc == 0x3594BCu) {
        ctx->pc = 0x3594BCu;
            // 0x3594bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3594C0u;
        goto label_3594c0;
    }
    ctx->pc = 0x3594B8u;
    SET_GPR_U32(ctx, 31, 0x3594C0u);
    ctx->pc = 0x3594BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3594B8u;
            // 0x3594bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3594C0u; }
        if (ctx->pc != 0x3594C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3594C0u; }
        if (ctx->pc != 0x3594C0u) { return; }
    }
    ctx->pc = 0x3594C0u;
label_3594c0:
    // 0x3594c0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3594c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3594c4:
    // 0x3594c4: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x3594c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_3594c8:
    // 0x3594c8: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x3594c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_3594cc:
    // 0x3594cc: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x3594ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_3594d0:
    // 0x3594d0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3594d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3594d4:
    // 0x3594d4: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x3594d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_3594d8:
    // 0x3594d8: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x3594d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_3594dc:
    // 0x3594dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3594dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3594e0:
    // 0x3594e0: 0xc0a997c  jal         func_2A65F0
label_3594e4:
    if (ctx->pc == 0x3594E4u) {
        ctx->pc = 0x3594E4u;
            // 0x3594e4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x3594E8u;
        goto label_3594e8;
    }
    ctx->pc = 0x3594E0u;
    SET_GPR_U32(ctx, 31, 0x3594E8u);
    ctx->pc = 0x3594E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3594E0u;
            // 0x3594e4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3594E8u; }
        if (ctx->pc != 0x3594E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3594E8u; }
        if (ctx->pc != 0x3594E8u) { return; }
    }
    ctx->pc = 0x3594E8u;
label_3594e8:
    // 0x3594e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3594e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3594ec:
    // 0x3594ec: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x3594ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3594f0:
    // 0x3594f0: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_3594f4:
    if (ctx->pc == 0x3594F4u) {
        ctx->pc = 0x3594F4u;
            // 0x3594f4: 0x265200e0  addiu       $s2, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->pc = 0x3594F8u;
        goto label_3594f8;
    }
    ctx->pc = 0x3594F0u;
    {
        const bool branch_taken_0x3594f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3594F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3594F0u;
            // 0x3594f4: 0x265200e0  addiu       $s2, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3594f0) {
            ctx->pc = 0x3594C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3594c4;
        }
    }
    ctx->pc = 0x3594F8u;
label_3594f8:
    // 0x3594f8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3594f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3594fc:
    // 0x3594fc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3594fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_359500:
    // 0x359500: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x359500u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_359504:
    // 0x359504: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x359504u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_359508:
    // 0x359508: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x359508u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_35950c:
    // 0x35950c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35950cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_359510:
    // 0x359510: 0x3e00008  jr          $ra
label_359514:
    if (ctx->pc == 0x359514u) {
        ctx->pc = 0x359514u;
            // 0x359514: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x359518u;
        goto label_359518;
    }
    ctx->pc = 0x359510u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359510u;
            // 0x359514: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x359518u;
label_359518:
    // 0x359518: 0x0  nop
    ctx->pc = 0x359518u;
    // NOP
label_35951c:
    // 0x35951c: 0x0  nop
    ctx->pc = 0x35951cu;
    // NOP
label_359520:
    // 0x359520: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x359520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_359524:
    // 0x359524: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x359524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_359528:
    // 0x359528: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x359528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_35952c:
    // 0x35952c: 0xc0aeebc  jal         func_2BBAF0
label_359530:
    if (ctx->pc == 0x359530u) {
        ctx->pc = 0x359530u;
            // 0x359530: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x359534u;
        goto label_359534;
    }
    ctx->pc = 0x35952Cu;
    SET_GPR_U32(ctx, 31, 0x359534u);
    ctx->pc = 0x359530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35952Cu;
            // 0x359530: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359534u; }
        if (ctx->pc != 0x359534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359534u; }
        if (ctx->pc != 0x359534u) { return; }
    }
    ctx->pc = 0x359534u;
label_359534:
    // 0x359534: 0xc0aeeb4  jal         func_2BBAD0
label_359538:
    if (ctx->pc == 0x359538u) {
        ctx->pc = 0x359538u;
            // 0x359538: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x35953Cu;
        goto label_35953c;
    }
    ctx->pc = 0x359534u;
    SET_GPR_U32(ctx, 31, 0x35953Cu);
    ctx->pc = 0x359538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x359534u;
            // 0x359538: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35953Cu; }
        if (ctx->pc != 0x35953Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35953Cu; }
        if (ctx->pc != 0x35953Cu) { return; }
    }
    ctx->pc = 0x35953Cu;
label_35953c:
    // 0x35953c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x35953cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_359540:
    // 0x359540: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x359540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_359544:
    // 0x359544: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x359544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_359548:
    // 0x359548: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x359548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_35954c:
    // 0x35954c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x35954cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_359550:
    // 0x359550: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x359550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_359554:
    // 0x359554: 0xc0aeea4  jal         func_2BBA90
label_359558:
    if (ctx->pc == 0x359558u) {
        ctx->pc = 0x359558u;
            // 0x359558: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x35955Cu;
        goto label_35955c;
    }
    ctx->pc = 0x359554u;
    SET_GPR_U32(ctx, 31, 0x35955Cu);
    ctx->pc = 0x359558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x359554u;
            // 0x359558: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35955Cu; }
        if (ctx->pc != 0x35955Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35955Cu; }
        if (ctx->pc != 0x35955Cu) { return; }
    }
    ctx->pc = 0x35955Cu;
label_35955c:
    // 0x35955c: 0xc0aee8c  jal         func_2BBA30
label_359560:
    if (ctx->pc == 0x359560u) {
        ctx->pc = 0x359560u;
            // 0x359560: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x359564u;
        goto label_359564;
    }
    ctx->pc = 0x35955Cu;
    SET_GPR_U32(ctx, 31, 0x359564u);
    ctx->pc = 0x359560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35955Cu;
            // 0x359560: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359564u; }
        if (ctx->pc != 0x359564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359564u; }
        if (ctx->pc != 0x359564u) { return; }
    }
    ctx->pc = 0x359564u;
label_359564:
    // 0x359564: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x359564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_359568:
    // 0x359568: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x359568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_35956c:
    // 0x35956c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x35956cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_359570:
    // 0x359570: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x359570u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
label_359574:
    // 0x359574: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x359574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_359578:
    // 0x359578: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x359578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35957c:
    // 0x35957c: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x35957cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
label_359580:
    // 0x359580: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x359580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_359584:
    // 0x359584: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x359584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
label_359588:
    // 0x359588: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x359588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
label_35958c:
    // 0x35958c: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x35958cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
label_359590:
    // 0x359590: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x359590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
label_359594:
    // 0x359594: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x359594u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
label_359598:
    // 0x359598: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x359598u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
label_35959c:
    // 0x35959c: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x35959cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_3595a0:
    // 0x3595a0: 0xc0775b8  jal         func_1DD6E0
label_3595a4:
    if (ctx->pc == 0x3595A4u) {
        ctx->pc = 0x3595A4u;
            // 0x3595a4: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3595A8u;
        goto label_3595a8;
    }
    ctx->pc = 0x3595A0u;
    SET_GPR_U32(ctx, 31, 0x3595A8u);
    ctx->pc = 0x3595A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3595A0u;
            // 0x3595a4: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3595A8u; }
        if (ctx->pc != 0x3595A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3595A8u; }
        if (ctx->pc != 0x3595A8u) { return; }
    }
    ctx->pc = 0x3595A8u;
label_3595a8:
    // 0x3595a8: 0xc077314  jal         func_1DCC50
label_3595ac:
    if (ctx->pc == 0x3595ACu) {
        ctx->pc = 0x3595ACu;
            // 0x3595ac: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3595B0u;
        goto label_3595b0;
    }
    ctx->pc = 0x3595A8u;
    SET_GPR_U32(ctx, 31, 0x3595B0u);
    ctx->pc = 0x3595ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3595A8u;
            // 0x3595ac: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3595B0u; }
        if (ctx->pc != 0x3595B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3595B0u; }
        if (ctx->pc != 0x3595B0u) { return; }
    }
    ctx->pc = 0x3595B0u;
label_3595b0:
    // 0x3595b0: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x3595b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_3595b4:
    // 0x3595b4: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x3595b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_3595b8:
    // 0x3595b8: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x3595b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
label_3595bc:
    // 0x3595bc: 0x8e0500c8  lw          $a1, 0xC8($s0)
    ctx->pc = 0x3595bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_3595c0:
    // 0x3595c0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3595c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3595c4:
    // 0x3595c4: 0x24846260  addiu       $a0, $a0, 0x6260
    ctx->pc = 0x3595c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25184));
label_3595c8:
    // 0x3595c8: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x3595c8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3595cc:
    // 0x3595cc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3595ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3595d0:
    // 0x3595d0: 0x246362a0  addiu       $v1, $v1, 0x62A0
    ctx->pc = 0x3595d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25248));
label_3595d4:
    // 0x3595d4: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x3595d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_3595d8:
    // 0x3595d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3595d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3595dc:
    // 0x3595dc: 0xae0500c8  sw          $a1, 0xC8($s0)
    ctx->pc = 0x3595dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 5));
label_3595e0:
    // 0x3595e0: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x3595e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_3595e4:
    // 0x3595e4: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3595e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_3595e8:
    // 0x3595e8: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x3595e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_3595ec:
    // 0x3595ec: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x3595ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
label_3595f0:
    // 0x3595f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3595f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3595f4:
    // 0x3595f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3595f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3595f8:
    // 0x3595f8: 0x3e00008  jr          $ra
label_3595fc:
    if (ctx->pc == 0x3595FCu) {
        ctx->pc = 0x3595FCu;
            // 0x3595fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x359600u;
        goto label_359600;
    }
    ctx->pc = 0x3595F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3595FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3595F8u;
            // 0x3595fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x359600u;
label_359600:
    // 0x359600: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x359600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_359604:
    // 0x359604: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x359604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_359608:
    // 0x359608: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x359608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_35960c:
    // 0x35960c: 0x908300d8  lbu         $v1, 0xD8($a0)
    ctx->pc = 0x35960cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 216)));
label_359610:
    // 0x359610: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_359614:
    if (ctx->pc == 0x359614u) {
        ctx->pc = 0x359614u;
            // 0x359614: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x359618u;
        goto label_359618;
    }
    ctx->pc = 0x359610u;
    {
        const bool branch_taken_0x359610 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x359614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359610u;
            // 0x359614: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359610) {
            ctx->pc = 0x359644u;
            goto label_359644;
        }
    }
    ctx->pc = 0x359618u;
label_359618:
    // 0x359618: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x359618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_35961c:
    // 0x35961c: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x35961cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_359620:
    // 0x359620: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
label_359624:
    if (ctx->pc == 0x359624u) {
        ctx->pc = 0x359624u;
            // 0x359624: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x359628u;
        goto label_359628;
    }
    ctx->pc = 0x359620u;
    {
        const bool branch_taken_0x359620 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x359620) {
            ctx->pc = 0x359624u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x359620u;
            // 0x359624: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x359648u;
            goto label_359648;
        }
    }
    ctx->pc = 0x359628u;
label_359628:
    // 0x359628: 0x8e0400d4  lw          $a0, 0xD4($s0)
    ctx->pc = 0x359628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_35962c:
    // 0x35962c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35962cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_359630:
    // 0x359630: 0xc122d2c  jal         func_48B4B0
label_359634:
    if (ctx->pc == 0x359634u) {
        ctx->pc = 0x359634u;
            // 0x359634: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x359638u;
        goto label_359638;
    }
    ctx->pc = 0x359630u;
    SET_GPR_U32(ctx, 31, 0x359638u);
    ctx->pc = 0x359634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x359630u;
            // 0x359634: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359638u; }
        if (ctx->pc != 0x359638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359638u; }
        if (ctx->pc != 0x359638u) { return; }
    }
    ctx->pc = 0x359638u;
label_359638:
    // 0x359638: 0x920300d8  lbu         $v1, 0xD8($s0)
    ctx->pc = 0x359638u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 216)));
label_35963c:
    // 0x35963c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x35963cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_359640:
    // 0x359640: 0xa20300d8  sb          $v1, 0xD8($s0)
    ctx->pc = 0x359640u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 216), (uint8_t)GPR_U32(ctx, 3));
label_359644:
    // 0x359644: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x359644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_359648:
    // 0x359648: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x359648u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35964c:
    // 0x35964c: 0x3e00008  jr          $ra
label_359650:
    if (ctx->pc == 0x359650u) {
        ctx->pc = 0x359650u;
            // 0x359650: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x359654u;
        goto label_359654;
    }
    ctx->pc = 0x35964Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35964Cu;
            // 0x359650: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x359654u;
label_359654:
    // 0x359654: 0x0  nop
    ctx->pc = 0x359654u;
    // NOP
label_359658:
    // 0x359658: 0x0  nop
    ctx->pc = 0x359658u;
    // NOP
label_35965c:
    // 0x35965c: 0x0  nop
    ctx->pc = 0x35965cu;
    // NOP
label_359660:
    // 0x359660: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x359660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_359664:
    // 0x359664: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x359664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_359668:
    // 0x359668: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x359668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_35966c:
    // 0x35966c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35966cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_359670:
    // 0x359670: 0x8c90009c  lw          $s0, 0x9C($a0)
    ctx->pc = 0x359670u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
label_359674:
    // 0x359674: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_359678:
    if (ctx->pc == 0x359678u) {
        ctx->pc = 0x359678u;
            // 0x359678: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35967Cu;
        goto label_35967c;
    }
    ctx->pc = 0x359674u;
    {
        const bool branch_taken_0x359674 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x359678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359674u;
            // 0x359678: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359674) {
            ctx->pc = 0x3596ACu;
            goto label_3596ac;
        }
    }
    ctx->pc = 0x35967Cu;
label_35967c:
    // 0x35967c: 0xc04008c  jal         func_100230
label_359680:
    if (ctx->pc == 0x359680u) {
        ctx->pc = 0x359680u;
            // 0x359680: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x359684u;
        goto label_359684;
    }
    ctx->pc = 0x35967Cu;
    SET_GPR_U32(ctx, 31, 0x359684u);
    ctx->pc = 0x359680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35967Cu;
            // 0x359680: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359684u; }
        if (ctx->pc != 0x359684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359684u; }
        if (ctx->pc != 0x359684u) { return; }
    }
    ctx->pc = 0x359684u;
label_359684:
    // 0x359684: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x359684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_359688:
    // 0x359688: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x359688u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_35968c:
    // 0x35968c: 0xc0407c0  jal         func_101F00
label_359690:
    if (ctx->pc == 0x359690u) {
        ctx->pc = 0x359690u;
            // 0x359690: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->pc = 0x359694u;
        goto label_359694;
    }
    ctx->pc = 0x35968Cu;
    SET_GPR_U32(ctx, 31, 0x359694u);
    ctx->pc = 0x359690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35968Cu;
            // 0x359690: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359694u; }
        if (ctx->pc != 0x359694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359694u; }
        if (ctx->pc != 0x359694u) { return; }
    }
    ctx->pc = 0x359694u;
label_359694:
    // 0x359694: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x359694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_359698:
    // 0x359698: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x359698u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_35969c:
    // 0x35969c: 0xc0407c0  jal         func_101F00
label_3596a0:
    if (ctx->pc == 0x3596A0u) {
        ctx->pc = 0x3596A0u;
            // 0x3596a0: 0x24a5b390  addiu       $a1, $a1, -0x4C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947728));
        ctx->pc = 0x3596A4u;
        goto label_3596a4;
    }
    ctx->pc = 0x35969Cu;
    SET_GPR_U32(ctx, 31, 0x3596A4u);
    ctx->pc = 0x3596A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35969Cu;
            // 0x3596a0: 0x24a5b390  addiu       $a1, $a1, -0x4C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3596A4u; }
        if (ctx->pc != 0x3596A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3596A4u; }
        if (ctx->pc != 0x3596A4u) { return; }
    }
    ctx->pc = 0x3596A4u;
label_3596a4:
    // 0x3596a4: 0xc0400a8  jal         func_1002A0
label_3596a8:
    if (ctx->pc == 0x3596A8u) {
        ctx->pc = 0x3596A8u;
            // 0x3596a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3596ACu;
        goto label_3596ac;
    }
    ctx->pc = 0x3596A4u;
    SET_GPR_U32(ctx, 31, 0x3596ACu);
    ctx->pc = 0x3596A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3596A4u;
            // 0x3596a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3596ACu; }
        if (ctx->pc != 0x3596ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3596ACu; }
        if (ctx->pc != 0x3596ACu) { return; }
    }
    ctx->pc = 0x3596ACu;
label_3596ac:
    // 0x3596ac: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x3596acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_3596b0:
    // 0x3596b0: 0x8e2400a0  lw          $a0, 0xA0($s1)
    ctx->pc = 0x3596b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_3596b4:
    // 0x3596b4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3596b8:
    if (ctx->pc == 0x3596B8u) {
        ctx->pc = 0x3596B8u;
            // 0x3596b8: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x3596BCu;
        goto label_3596bc;
    }
    ctx->pc = 0x3596B4u;
    {
        const bool branch_taken_0x3596b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3596b4) {
            ctx->pc = 0x3596B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3596B4u;
            // 0x3596b8: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3596D0u;
            goto label_3596d0;
        }
    }
    ctx->pc = 0x3596BCu;
label_3596bc:
    // 0x3596bc: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x3596bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_3596c0:
    // 0x3596c0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3596c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3596c4:
    // 0x3596c4: 0x320f809  jalr        $t9
label_3596c8:
    if (ctx->pc == 0x3596C8u) {
        ctx->pc = 0x3596C8u;
            // 0x3596c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3596CCu;
        goto label_3596cc;
    }
    ctx->pc = 0x3596C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3596CCu);
        ctx->pc = 0x3596C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3596C4u;
            // 0x3596c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3596CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3596CCu; }
            if (ctx->pc != 0x3596CCu) { return; }
        }
        }
    }
    ctx->pc = 0x3596CCu;
label_3596cc:
    // 0x3596cc: 0xae2000a0  sw          $zero, 0xA0($s1)
    ctx->pc = 0x3596ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
label_3596d0:
    // 0x3596d0: 0x8e2400d4  lw          $a0, 0xD4($s1)
    ctx->pc = 0x3596d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_3596d4:
    // 0x3596d4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3596d8:
    if (ctx->pc == 0x3596D8u) {
        ctx->pc = 0x3596D8u;
            // 0x3596d8: 0xae2000d4  sw          $zero, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 0));
        ctx->pc = 0x3596DCu;
        goto label_3596dc;
    }
    ctx->pc = 0x3596D4u;
    {
        const bool branch_taken_0x3596d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3596d4) {
            ctx->pc = 0x3596D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3596D4u;
            // 0x3596d8: 0xae2000d4  sw          $zero, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3596F0u;
            goto label_3596f0;
        }
    }
    ctx->pc = 0x3596DCu;
label_3596dc:
    // 0x3596dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3596dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3596e0:
    // 0x3596e0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3596e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3596e4:
    // 0x3596e4: 0x320f809  jalr        $t9
label_3596e8:
    if (ctx->pc == 0x3596E8u) {
        ctx->pc = 0x3596E8u;
            // 0x3596e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3596ECu;
        goto label_3596ec;
    }
    ctx->pc = 0x3596E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3596ECu);
        ctx->pc = 0x3596E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3596E4u;
            // 0x3596e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3596ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3596ECu; }
            if (ctx->pc != 0x3596ECu) { return; }
        }
        }
    }
    ctx->pc = 0x3596ECu;
label_3596ec:
    // 0x3596ec: 0xae2000d4  sw          $zero, 0xD4($s1)
    ctx->pc = 0x3596ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 0));
label_3596f0:
    // 0x3596f0: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x3596f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_3596f4:
    // 0x3596f4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3596f8:
    if (ctx->pc == 0x3596F8u) {
        ctx->pc = 0x3596F8u;
            // 0x3596f8: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x3596FCu;
        goto label_3596fc;
    }
    ctx->pc = 0x3596F4u;
    {
        const bool branch_taken_0x3596f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3596f4) {
            ctx->pc = 0x3596F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3596F4u;
            // 0x3596f8: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x359710u;
            goto label_359710;
        }
    }
    ctx->pc = 0x3596FCu;
label_3596fc:
    // 0x3596fc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3596fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_359700:
    // 0x359700: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x359700u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_359704:
    // 0x359704: 0x320f809  jalr        $t9
label_359708:
    if (ctx->pc == 0x359708u) {
        ctx->pc = 0x359708u;
            // 0x359708: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x35970Cu;
        goto label_35970c;
    }
    ctx->pc = 0x359704u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x35970Cu);
        ctx->pc = 0x359708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359704u;
            // 0x359708: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x35970Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x35970Cu; }
            if (ctx->pc != 0x35970Cu) { return; }
        }
        }
    }
    ctx->pc = 0x35970Cu;
label_35970c:
    // 0x35970c: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x35970cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_359710:
    // 0x359710: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x359710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_359714:
    // 0x359714: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x359714u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_359718:
    // 0x359718: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x359718u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35971c:
    // 0x35971c: 0x3e00008  jr          $ra
label_359720:
    if (ctx->pc == 0x359720u) {
        ctx->pc = 0x359720u;
            // 0x359720: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x359724u;
        goto label_359724;
    }
    ctx->pc = 0x35971Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35971Cu;
            // 0x359720: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x359724u;
label_359724:
    // 0x359724: 0x0  nop
    ctx->pc = 0x359724u;
    // NOP
label_359728:
    // 0x359728: 0x0  nop
    ctx->pc = 0x359728u;
    // NOP
label_35972c:
    // 0x35972c: 0x0  nop
    ctx->pc = 0x35972cu;
    // NOP
label_359730:
    // 0x359730: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x359730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_359734:
    // 0x359734: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x359734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_359738:
    // 0x359738: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x359738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_35973c:
    // 0x35973c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x35973cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_359740:
    // 0x359740: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x359740u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_359744:
    // 0x359744: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x359744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_359748:
    // 0x359748: 0xc0892d0  jal         func_224B40
label_35974c:
    if (ctx->pc == 0x35974Cu) {
        ctx->pc = 0x35974Cu;
            // 0x35974c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x359750u;
        goto label_359750;
    }
    ctx->pc = 0x359748u;
    SET_GPR_U32(ctx, 31, 0x359750u);
    ctx->pc = 0x35974Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x359748u;
            // 0x35974c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359750u; }
        if (ctx->pc != 0x359750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359750u; }
        if (ctx->pc != 0x359750u) { return; }
    }
    ctx->pc = 0x359750u;
label_359750:
    // 0x359750: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x359750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_359754:
    // 0x359754: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x359754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_359758:
    // 0x359758: 0x8c424000  lw          $v0, 0x4000($v0)
    ctx->pc = 0x359758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16384)));
label_35975c:
    // 0x35975c: 0x8c500060  lw          $s0, 0x60($v0)
    ctx->pc = 0x35975cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_359760:
    // 0x359760: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x359760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_359764:
    // 0x359764: 0xc0b6e68  jal         func_2DB9A0
label_359768:
    if (ctx->pc == 0x359768u) {
        ctx->pc = 0x359768u;
            // 0x359768: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x35976Cu;
        goto label_35976c;
    }
    ctx->pc = 0x359764u;
    SET_GPR_U32(ctx, 31, 0x35976Cu);
    ctx->pc = 0x359768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x359764u;
            // 0x359768: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35976Cu; }
        if (ctx->pc != 0x35976Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35976Cu; }
        if (ctx->pc != 0x35976Cu) { return; }
    }
    ctx->pc = 0x35976Cu;
label_35976c:
    // 0x35976c: 0xc0b6dac  jal         func_2DB6B0
label_359770:
    if (ctx->pc == 0x359770u) {
        ctx->pc = 0x359770u;
            // 0x359770: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x359774u;
        goto label_359774;
    }
    ctx->pc = 0x35976Cu;
    SET_GPR_U32(ctx, 31, 0x359774u);
    ctx->pc = 0x359770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35976Cu;
            // 0x359770: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359774u; }
        if (ctx->pc != 0x359774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359774u; }
        if (ctx->pc != 0x359774u) { return; }
    }
    ctx->pc = 0x359774u;
label_359774:
    // 0x359774: 0xc0cac94  jal         func_32B250
label_359778:
    if (ctx->pc == 0x359778u) {
        ctx->pc = 0x359778u;
            // 0x359778: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x35977Cu;
        goto label_35977c;
    }
    ctx->pc = 0x359774u;
    SET_GPR_U32(ctx, 31, 0x35977Cu);
    ctx->pc = 0x359778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x359774u;
            // 0x359778: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35977Cu; }
        if (ctx->pc != 0x35977Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35977Cu; }
        if (ctx->pc != 0x35977Cu) { return; }
    }
    ctx->pc = 0x35977Cu;
label_35977c:
    // 0x35977c: 0xc0cac84  jal         func_32B210
label_359780:
    if (ctx->pc == 0x359780u) {
        ctx->pc = 0x359780u;
            // 0x359780: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x359784u;
        goto label_359784;
    }
    ctx->pc = 0x35977Cu;
    SET_GPR_U32(ctx, 31, 0x359784u);
    ctx->pc = 0x359780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35977Cu;
            // 0x359780: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359784u; }
        if (ctx->pc != 0x359784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359784u; }
        if (ctx->pc != 0x359784u) { return; }
    }
    ctx->pc = 0x359784u;
label_359784:
    // 0x359784: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x359784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_359788:
    // 0x359788: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x359788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_35978c:
    // 0x35978c: 0xc44cc910  lwc1        $f12, -0x36F0($v0)
    ctx->pc = 0x35978cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_359790:
    // 0x359790: 0xc0a5a68  jal         func_2969A0
label_359794:
    if (ctx->pc == 0x359794u) {
        ctx->pc = 0x359794u;
            // 0x359794: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x359798u;
        goto label_359798;
    }
    ctx->pc = 0x359790u;
    SET_GPR_U32(ctx, 31, 0x359798u);
    ctx->pc = 0x359794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x359790u;
            // 0x359794: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359798u; }
        if (ctx->pc != 0x359798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359798u; }
        if (ctx->pc != 0x359798u) { return; }
    }
    ctx->pc = 0x359798u;
label_359798:
    // 0x359798: 0xafb000c4  sw          $s0, 0xC4($sp)
    ctx->pc = 0x359798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 16));
label_35979c:
    // 0x35979c: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x35979cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_3597a0:
    // 0x3597a0: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x3597a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3597a4:
    // 0x3597a4: 0x3448cccd  ori         $t0, $v0, 0xCCCD
    ctx->pc = 0x3597a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_3597a8:
    // 0x3597a8: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x3597a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3597ac:
    // 0x3597ac: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x3597acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_3597b0:
    // 0x3597b0: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x3597b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3597b4:
    // 0x3597b4: 0x34430180  ori         $v1, $v0, 0x180
    ctx->pc = 0x3597b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)384);
label_3597b8:
    // 0x3597b8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3597b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3597bc:
    // 0x3597bc: 0x3c0a42c8  lui         $t2, 0x42C8
    ctx->pc = 0x3597bcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17096 << 16));
label_3597c0:
    // 0x3597c0: 0xc7a90090  lwc1        $f9, 0x90($sp)
    ctx->pc = 0x3597c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_3597c4:
    // 0x3597c4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3597c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_3597c8:
    // 0x3597c8: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x3597c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_3597cc:
    // 0x3597cc: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x3597ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_3597d0:
    // 0x3597d0: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x3597d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_3597d4:
    // 0x3597d4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3597d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3597d8:
    // 0x3597d8: 0xe7a200d8  swc1        $f2, 0xD8($sp)
    ctx->pc = 0x3597d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_3597dc:
    // 0x3597dc: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x3597dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3597e0:
    // 0x3597e0: 0xc62d002c  lwc1        $f13, 0x2C($s1)
    ctx->pc = 0x3597e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3597e4:
    // 0x3597e4: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x3597e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_3597e8:
    // 0x3597e8: 0xc62c0028  lwc1        $f12, 0x28($s1)
    ctx->pc = 0x3597e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3597ec:
    // 0x3597ec: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x3597ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_3597f0:
    // 0x3597f0: 0xc62b0024  lwc1        $f11, 0x24($s1)
    ctx->pc = 0x3597f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_3597f4:
    // 0x3597f4: 0xc62a0020  lwc1        $f10, 0x20($s1)
    ctx->pc = 0x3597f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_3597f8:
    // 0x3597f8: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x3597f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3597fc:
    // 0x3597fc: 0xc7a200ac  lwc1        $f2, 0xAC($sp)
    ctx->pc = 0x3597fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_359800:
    // 0x359800: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x359800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_359804:
    // 0x359804: 0xafaa0168  sw          $t2, 0x168($sp)
    ctx->pc = 0x359804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 10));
label_359808:
    // 0x359808: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x359808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_35980c:
    // 0x35980c: 0xa3a90170  sb          $t1, 0x170($sp)
    ctx->pc = 0x35980cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 368), (uint8_t)GPR_U32(ctx, 9));
label_359810:
    // 0x359810: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x359810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_359814:
    // 0x359814: 0xafa8016c  sw          $t0, 0x16C($sp)
    ctx->pc = 0x359814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 8));
label_359818:
    // 0x359818: 0xe7a2012c  swc1        $f2, 0x12C($sp)
    ctx->pc = 0x359818u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_35981c:
    // 0x35981c: 0xa3a70172  sb          $a3, 0x172($sp)
    ctx->pc = 0x35981cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 370), (uint8_t)GPR_U32(ctx, 7));
label_359820:
    // 0x359820: 0xe7a10130  swc1        $f1, 0x130($sp)
    ctx->pc = 0x359820u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_359824:
    // 0x359824: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x359824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_359828:
    // 0x359828: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x359828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_35982c:
    // 0x35982c: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x35982cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_359830:
    // 0x359830: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x359830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_359834:
    // 0x359834: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x359834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_359838:
    // 0x359838: 0xe7a20138  swc1        $f2, 0x138($sp)
    ctx->pc = 0x359838u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_35983c:
    // 0x35983c: 0xe7a1013c  swc1        $f1, 0x13C($sp)
    ctx->pc = 0x35983cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_359840:
    // 0x359840: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x359840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_359844:
    // 0x359844: 0xc7a80094  lwc1        $f8, 0x94($sp)
    ctx->pc = 0x359844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_359848:
    // 0x359848: 0xc7a70098  lwc1        $f7, 0x98($sp)
    ctx->pc = 0x359848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_35984c:
    // 0x35984c: 0xc7a6009c  lwc1        $f6, 0x9C($sp)
    ctx->pc = 0x35984cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_359850:
    // 0x359850: 0xc7a500a0  lwc1        $f5, 0xA0($sp)
    ctx->pc = 0x359850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_359854:
    // 0x359854: 0xc7a400a4  lwc1        $f4, 0xA4($sp)
    ctx->pc = 0x359854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_359858:
    // 0x359858: 0xc7a300a8  lwc1        $f3, 0xA8($sp)
    ctx->pc = 0x359858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_35985c:
    // 0x35985c: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x35985cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_359860:
    // 0x359860: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x359860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_359864:
    // 0x359864: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x359864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_359868:
    // 0x359868: 0xe7aa00e0  swc1        $f10, 0xE0($sp)
    ctx->pc = 0x359868u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_35986c:
    // 0x35986c: 0xe7ab00e4  swc1        $f11, 0xE4($sp)
    ctx->pc = 0x35986cu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_359870:
    // 0x359870: 0xe7ac00e8  swc1        $f12, 0xE8($sp)
    ctx->pc = 0x359870u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_359874:
    // 0x359874: 0xe7ad00ec  swc1        $f13, 0xEC($sp)
    ctx->pc = 0x359874u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_359878:
    // 0x359878: 0xe7a90110  swc1        $f9, 0x110($sp)
    ctx->pc = 0x359878u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_35987c:
    // 0x35987c: 0xe7a80114  swc1        $f8, 0x114($sp)
    ctx->pc = 0x35987cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_359880:
    // 0x359880: 0xe7a70118  swc1        $f7, 0x118($sp)
    ctx->pc = 0x359880u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_359884:
    // 0x359884: 0xe7a6011c  swc1        $f6, 0x11C($sp)
    ctx->pc = 0x359884u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_359888:
    // 0x359888: 0xe7a50120  swc1        $f5, 0x120($sp)
    ctx->pc = 0x359888u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_35988c:
    // 0x35988c: 0xe7a40124  swc1        $f4, 0x124($sp)
    ctx->pc = 0x35988cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_359890:
    // 0x359890: 0xe7a30128  swc1        $f3, 0x128($sp)
    ctx->pc = 0x359890u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_359894:
    // 0x359894: 0xe7a20144  swc1        $f2, 0x144($sp)
    ctx->pc = 0x359894u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_359898:
    // 0x359898: 0xe7a10148  swc1        $f1, 0x148($sp)
    ctx->pc = 0x359898u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_35989c:
    // 0x35989c: 0xc0a7a88  jal         func_29EA20
label_3598a0:
    if (ctx->pc == 0x3598A0u) {
        ctx->pc = 0x3598A0u;
            // 0x3598a0: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->pc = 0x3598A4u;
        goto label_3598a4;
    }
    ctx->pc = 0x35989Cu;
    SET_GPR_U32(ctx, 31, 0x3598A4u);
    ctx->pc = 0x3598A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35989Cu;
            // 0x3598a0: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3598A4u; }
        if (ctx->pc != 0x3598A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3598A4u; }
        if (ctx->pc != 0x3598A4u) { return; }
    }
    ctx->pc = 0x3598A4u;
label_3598a4:
    // 0x3598a4: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x3598a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_3598a8:
    // 0x3598a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3598a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3598ac:
    // 0x3598ac: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_3598b0:
    if (ctx->pc == 0x3598B0u) {
        ctx->pc = 0x3598B0u;
            // 0x3598b0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3598B4u;
        goto label_3598b4;
    }
    ctx->pc = 0x3598ACu;
    {
        const bool branch_taken_0x3598ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3598B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3598ACu;
            // 0x3598b0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3598ac) {
            ctx->pc = 0x3598FCu;
            goto label_3598fc;
        }
    }
    ctx->pc = 0x3598B4u;
label_3598b4:
    // 0x3598b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3598b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3598b8:
    // 0x3598b8: 0xc088ef4  jal         func_223BD0
label_3598bc:
    if (ctx->pc == 0x3598BCu) {
        ctx->pc = 0x3598BCu;
            // 0x3598bc: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x3598C0u;
        goto label_3598c0;
    }
    ctx->pc = 0x3598B8u;
    SET_GPR_U32(ctx, 31, 0x3598C0u);
    ctx->pc = 0x3598BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3598B8u;
            // 0x3598bc: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3598C0u; }
        if (ctx->pc != 0x3598C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3598C0u; }
        if (ctx->pc != 0x3598C0u) { return; }
    }
    ctx->pc = 0x3598C0u;
label_3598c0:
    // 0x3598c0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3598c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3598c4:
    // 0x3598c4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3598c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3598c8:
    // 0x3598c8: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x3598c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_3598cc:
    // 0x3598cc: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x3598ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_3598d0:
    // 0x3598d0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3598d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3598d4:
    // 0x3598d4: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x3598d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_3598d8:
    // 0x3598d8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3598d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3598dc:
    // 0x3598dc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3598dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3598e0:
    // 0x3598e0: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x3598e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_3598e4:
    // 0x3598e4: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x3598e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_3598e8:
    // 0x3598e8: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x3598e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_3598ec:
    // 0x3598ec: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3598ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3598f0:
    // 0x3598f0: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x3598f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3598f4:
    // 0x3598f4: 0xc088b38  jal         func_222CE0
label_3598f8:
    if (ctx->pc == 0x3598F8u) {
        ctx->pc = 0x3598F8u;
            // 0x3598f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3598FCu;
        goto label_3598fc;
    }
    ctx->pc = 0x3598F4u;
    SET_GPR_U32(ctx, 31, 0x3598FCu);
    ctx->pc = 0x3598F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3598F4u;
            // 0x3598f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3598FCu; }
        if (ctx->pc != 0x3598FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3598FCu; }
        if (ctx->pc != 0x3598FCu) { return; }
    }
    ctx->pc = 0x3598FCu;
label_3598fc:
    // 0x3598fc: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x3598fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_359900:
    // 0x359900: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x359900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_359904:
    // 0x359904: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x359904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_359908:
    // 0x359908: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x359908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_35990c:
    // 0x35990c: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x35990cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_359910:
    // 0x359910: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x359910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_359914:
    // 0x359914: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x359914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_359918:
    // 0x359918: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x359918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_35991c:
    // 0x35991c: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x35991cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_359920:
    // 0x359920: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x359920u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_359924:
    // 0x359924: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x359924u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_359928:
    // 0x359928: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x359928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_35992c:
    // 0x35992c: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x35992cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_359930:
    // 0x359930: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x359930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_359934:
    // 0x359934: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x359934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_359938:
    // 0x359938: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x359938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_35993c:
    // 0x35993c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x35993cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_359940:
    // 0x359940: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x359940u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_359944:
    // 0x359944: 0xc0892b0  jal         func_224AC0
label_359948:
    if (ctx->pc == 0x359948u) {
        ctx->pc = 0x359948u;
            // 0x359948: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x35994Cu;
        goto label_35994c;
    }
    ctx->pc = 0x359944u;
    SET_GPR_U32(ctx, 31, 0x35994Cu);
    ctx->pc = 0x359948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x359944u;
            // 0x359948: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35994Cu; }
        if (ctx->pc != 0x35994Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35994Cu; }
        if (ctx->pc != 0x35994Cu) { return; }
    }
    ctx->pc = 0x35994Cu;
label_35994c:
    // 0x35994c: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x35994cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_359950:
    // 0x359950: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x359950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_359954:
    // 0x359954: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x359954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_359958:
    // 0x359958: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x359958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_35995c:
    // 0x35995c: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x35995cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_359960:
    // 0x359960: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x359960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_359964:
    // 0x359964: 0xc0891d8  jal         func_224760
label_359968:
    if (ctx->pc == 0x359968u) {
        ctx->pc = 0x359968u;
            // 0x359968: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x35996Cu;
        goto label_35996c;
    }
    ctx->pc = 0x359964u;
    SET_GPR_U32(ctx, 31, 0x35996Cu);
    ctx->pc = 0x359968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x359964u;
            // 0x359968: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35996Cu; }
        if (ctx->pc != 0x35996Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35996Cu; }
        if (ctx->pc != 0x35996Cu) { return; }
    }
    ctx->pc = 0x35996Cu;
label_35996c:
    // 0x35996c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35996cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_359970:
    // 0x359970: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x359970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_359974:
    // 0x359974: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x359974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_359978:
    // 0x359978: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x359978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_35997c:
    // 0x35997c: 0xc08c164  jal         func_230590
label_359980:
    if (ctx->pc == 0x359980u) {
        ctx->pc = 0x359980u;
            // 0x359980: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x359984u;
        goto label_359984;
    }
    ctx->pc = 0x35997Cu;
    SET_GPR_U32(ctx, 31, 0x359984u);
    ctx->pc = 0x359980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35997Cu;
            // 0x359980: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359984u; }
        if (ctx->pc != 0x359984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359984u; }
        if (ctx->pc != 0x359984u) { return; }
    }
    ctx->pc = 0x359984u;
label_359984:
    // 0x359984: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x359984u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_359988:
    // 0x359988: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x359988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_35998c:
    // 0x35998c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x35998cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_359990:
    // 0x359990: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x359990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_359994:
    // 0x359994: 0xc0a7a88  jal         func_29EA20
label_359998:
    if (ctx->pc == 0x359998u) {
        ctx->pc = 0x359998u;
            // 0x359998: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x35999Cu;
        goto label_35999c;
    }
    ctx->pc = 0x359994u;
    SET_GPR_U32(ctx, 31, 0x35999Cu);
    ctx->pc = 0x359998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x359994u;
            // 0x359998: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35999Cu; }
        if (ctx->pc != 0x35999Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35999Cu; }
        if (ctx->pc != 0x35999Cu) { return; }
    }
    ctx->pc = 0x35999Cu;
label_35999c:
    // 0x35999c: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x35999cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_3599a0:
    // 0x3599a0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3599a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3599a4:
    // 0x3599a4: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_3599a8:
    if (ctx->pc == 0x3599A8u) {
        ctx->pc = 0x3599A8u;
            // 0x3599a8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3599ACu;
        goto label_3599ac;
    }
    ctx->pc = 0x3599A4u;
    {
        const bool branch_taken_0x3599a4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3599A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3599A4u;
            // 0x3599a8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3599a4) {
            ctx->pc = 0x3599C8u;
            goto label_3599c8;
        }
    }
    ctx->pc = 0x3599ACu;
label_3599ac:
    // 0x3599ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3599acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3599b0:
    // 0x3599b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3599b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3599b4:
    // 0x3599b4: 0xc0869d0  jal         func_21A740
label_3599b8:
    if (ctx->pc == 0x3599B8u) {
        ctx->pc = 0x3599B8u;
            // 0x3599b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3599BCu;
        goto label_3599bc;
    }
    ctx->pc = 0x3599B4u;
    SET_GPR_U32(ctx, 31, 0x3599BCu);
    ctx->pc = 0x3599B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3599B4u;
            // 0x3599b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3599BCu; }
        if (ctx->pc != 0x3599BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3599BCu; }
        if (ctx->pc != 0x3599BCu) { return; }
    }
    ctx->pc = 0x3599BCu;
label_3599bc:
    // 0x3599bc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3599bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3599c0:
    // 0x3599c0: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x3599c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_3599c4:
    // 0x3599c4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3599c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3599c8:
    // 0x3599c8: 0xae120210  sw          $s2, 0x210($s0)
    ctx->pc = 0x3599c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 18));
label_3599cc:
    // 0x3599cc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3599ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3599d0:
    // 0x3599d0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3599d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3599d4:
    // 0x3599d4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3599d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3599d8:
    // 0x3599d8: 0xc08c650  jal         func_231940
label_3599dc:
    if (ctx->pc == 0x3599DCu) {
        ctx->pc = 0x3599DCu;
            // 0x3599dc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3599E0u;
        goto label_3599e0;
    }
    ctx->pc = 0x3599D8u;
    SET_GPR_U32(ctx, 31, 0x3599E0u);
    ctx->pc = 0x3599DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3599D8u;
            // 0x3599dc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3599E0u; }
        if (ctx->pc != 0x3599E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3599E0u; }
        if (ctx->pc != 0x3599E0u) { return; }
    }
    ctx->pc = 0x3599E0u;
label_3599e0:
    // 0x3599e0: 0xc040180  jal         func_100600
label_3599e4:
    if (ctx->pc == 0x3599E4u) {
        ctx->pc = 0x3599E4u;
            // 0x3599e4: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x3599E8u;
        goto label_3599e8;
    }
    ctx->pc = 0x3599E0u;
    SET_GPR_U32(ctx, 31, 0x3599E8u);
    ctx->pc = 0x3599E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3599E0u;
            // 0x3599e4: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3599E8u; }
        if (ctx->pc != 0x3599E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3599E8u; }
        if (ctx->pc != 0x3599E8u) { return; }
    }
    ctx->pc = 0x3599E8u;
label_3599e8:
    // 0x3599e8: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_3599ec:
    if (ctx->pc == 0x3599ECu) {
        ctx->pc = 0x3599ECu;
            // 0x3599ec: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->pc = 0x3599F0u;
        goto label_3599f0;
    }
    ctx->pc = 0x3599E8u;
    {
        const bool branch_taken_0x3599e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3599e8) {
            ctx->pc = 0x3599ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3599E8u;
            // 0x3599ec: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x359A38u;
            goto label_359a38;
        }
    }
    ctx->pc = 0x3599F0u;
label_3599f0:
    // 0x3599f0: 0x8e260050  lw          $a2, 0x50($s1)
    ctx->pc = 0x3599f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_3599f4:
    // 0x3599f4: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x3599f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_3599f8:
    // 0x3599f8: 0x24a521e0  addiu       $a1, $a1, 0x21E0
    ctx->pc = 0x3599f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8672));
label_3599fc:
    // 0x3599fc: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x3599fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_359a00:
    // 0x359a00: 0x3c04c000  lui         $a0, 0xC000
    ctx->pc = 0x359a00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
label_359a04:
    // 0x359a04: 0x24636020  addiu       $v1, $v1, 0x6020
    ctx->pc = 0x359a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24608));
label_359a08:
    // 0x359a08: 0xac450048  sw          $a1, 0x48($v0)
    ctx->pc = 0x359a08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 5));
label_359a0c:
    // 0x359a0c: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x359a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_359a10:
    // 0x359a10: 0xac460024  sw          $a2, 0x24($v0)
    ctx->pc = 0x359a10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 6));
label_359a14:
    // 0x359a14: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x359a14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
label_359a18:
    // 0x359a18: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x359a18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_359a1c:
    // 0x359a1c: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x359a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_359a20:
    // 0x359a20: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x359a20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_359a24:
    // 0x359a24: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x359a24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_359a28:
    // 0x359a28: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x359a28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
label_359a2c:
    // 0x359a2c: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x359a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_359a30:
    // 0x359a30: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x359a30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
label_359a34:
    // 0x359a34: 0xae2200a0  sw          $v0, 0xA0($s1)
    ctx->pc = 0x359a34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
label_359a38:
    // 0x359a38: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x359a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_359a3c:
    // 0x359a3c: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x359a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_359a40:
    // 0x359a40: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x359a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_359a44:
    // 0x359a44: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x359a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_359a48:
    // 0x359a48: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x359a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_359a4c:
    // 0x359a4c: 0xc040180  jal         func_100600
label_359a50:
    if (ctx->pc == 0x359A50u) {
        ctx->pc = 0x359A50u;
            // 0x359a50: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->pc = 0x359A54u;
        goto label_359a54;
    }
    ctx->pc = 0x359A4Cu;
    SET_GPR_U32(ctx, 31, 0x359A54u);
    ctx->pc = 0x359A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x359A4Cu;
            // 0x359a50: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359A54u; }
        if (ctx->pc != 0x359A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359A54u; }
        if (ctx->pc != 0x359A54u) { return; }
    }
    ctx->pc = 0x359A54u;
label_359a54:
    // 0x359a54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x359a54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_359a58:
    // 0x359a58: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
label_359a5c:
    if (ctx->pc == 0x359A5Cu) {
        ctx->pc = 0x359A60u;
        goto label_359a60;
    }
    ctx->pc = 0x359A58u;
    {
        const bool branch_taken_0x359a58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x359a58) {
            ctx->pc = 0x359AD8u;
            goto label_359ad8;
        }
    }
    ctx->pc = 0x359A60u;
label_359a60:
    // 0x359a60: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x359a60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_359a64:
    // 0x359a64: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x359a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_359a68:
    // 0x359a68: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x359a68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_359a6c:
    // 0x359a6c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x359a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_359a70:
    // 0x359a70: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x359a70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_359a74:
    // 0x359a74: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x359a74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_359a78:
    // 0x359a78: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x359a78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_359a7c:
    // 0x359a7c: 0xc040138  jal         func_1004E0
label_359a80:
    if (ctx->pc == 0x359A80u) {
        ctx->pc = 0x359A80u;
            // 0x359a80: 0xa2000020  sb          $zero, 0x20($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x359A84u;
        goto label_359a84;
    }
    ctx->pc = 0x359A7Cu;
    SET_GPR_U32(ctx, 31, 0x359A84u);
    ctx->pc = 0x359A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x359A7Cu;
            // 0x359a80: 0xa2000020  sb          $zero, 0x20($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359A84u; }
        if (ctx->pc != 0x359A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359A84u; }
        if (ctx->pc != 0x359A84u) { return; }
    }
    ctx->pc = 0x359A84u;
label_359a84:
    // 0x359a84: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x359a84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_359a88:
    // 0x359a88: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x359a88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_359a8c:
    // 0x359a8c: 0xc040138  jal         func_1004E0
label_359a90:
    if (ctx->pc == 0x359A90u) {
        ctx->pc = 0x359A90u;
            // 0x359a90: 0x24040130  addiu       $a0, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->pc = 0x359A94u;
        goto label_359a94;
    }
    ctx->pc = 0x359A8Cu;
    SET_GPR_U32(ctx, 31, 0x359A94u);
    ctx->pc = 0x359A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x359A8Cu;
            // 0x359a90: 0x24040130  addiu       $a0, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359A94u; }
        if (ctx->pc != 0x359A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359A94u; }
        if (ctx->pc != 0x359A94u) { return; }
    }
    ctx->pc = 0x359A94u;
label_359a94:
    // 0x359a94: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x359a94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_359a98:
    // 0x359a98: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x359a98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
label_359a9c:
    // 0x359a9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x359a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_359aa0:
    // 0x359aa0: 0x24a583b0  addiu       $a1, $a1, -0x7C50
    ctx->pc = 0x359aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935472));
label_359aa4:
    // 0x359aa4: 0x24c6b410  addiu       $a2, $a2, -0x4BF0
    ctx->pc = 0x359aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947856));
label_359aa8:
    // 0x359aa8: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x359aa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_359aac:
    // 0x359aac: 0xc040840  jal         func_102100
label_359ab0:
    if (ctx->pc == 0x359AB0u) {
        ctx->pc = 0x359AB0u;
            // 0x359ab0: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x359AB4u;
        goto label_359ab4;
    }
    ctx->pc = 0x359AACu;
    SET_GPR_U32(ctx, 31, 0x359AB4u);
    ctx->pc = 0x359AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x359AACu;
            // 0x359ab0: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359AB4u; }
        if (ctx->pc != 0x359AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359AB4u; }
        if (ctx->pc != 0x359AB4u) { return; }
    }
    ctx->pc = 0x359AB4u;
label_359ab4:
    // 0x359ab4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x359ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_359ab8:
    // 0x359ab8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x359ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_359abc:
    // 0x359abc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x359abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_359ac0:
    // 0x359ac0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x359ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_359ac4:
    // 0x359ac4: 0x28830003  slti        $v1, $a0, 0x3
    ctx->pc = 0x359ac4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_359ac8:
    // 0x359ac8: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x359ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_359acc:
    // 0x359acc: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x359accu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_359ad0:
    // 0x359ad0: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_359ad4:
    if (ctx->pc == 0x359AD4u) {
        ctx->pc = 0x359AD8u;
        goto label_359ad8;
    }
    ctx->pc = 0x359AD0u;
    {
        const bool branch_taken_0x359ad0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x359ad0) {
            ctx->pc = 0x359ABCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_359abc;
        }
    }
    ctx->pc = 0x359AD8u;
label_359ad8:
    // 0x359ad8: 0xae30009c  sw          $s0, 0x9C($s1)
    ctx->pc = 0x359ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 16));
label_359adc:
    // 0x359adc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x359adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_359ae0:
    // 0x359ae0: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x359ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_359ae4:
    // 0x359ae4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x359ae4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_359ae8:
    // 0x359ae8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x359ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_359aec:
    // 0x359aec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x359aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_359af0:
    // 0x359af0: 0xc0e7d2c  jal         func_39F4B0
label_359af4:
    if (ctx->pc == 0x359AF4u) {
        ctx->pc = 0x359AF4u;
            // 0x359af4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x359AF8u;
        goto label_359af8;
    }
    ctx->pc = 0x359AF0u;
    SET_GPR_U32(ctx, 31, 0x359AF8u);
    ctx->pc = 0x359AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x359AF0u;
            // 0x359af4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359AF8u; }
        if (ctx->pc != 0x359AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359AF8u; }
        if (ctx->pc != 0x359AF8u) { return; }
    }
    ctx->pc = 0x359AF8u;
label_359af8:
    // 0x359af8: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x359af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_359afc:
    // 0x359afc: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x359afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_359b00:
    // 0x359b00: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x359b00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_359b04:
    // 0x359b04: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x359b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_359b08:
    // 0x359b08: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x359b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_359b0c:
    // 0x359b0c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x359b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_359b10:
    // 0x359b10: 0xc0e7d2c  jal         func_39F4B0
label_359b14:
    if (ctx->pc == 0x359B14u) {
        ctx->pc = 0x359B14u;
            // 0x359b14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x359B18u;
        goto label_359b18;
    }
    ctx->pc = 0x359B10u;
    SET_GPR_U32(ctx, 31, 0x359B18u);
    ctx->pc = 0x359B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x359B10u;
            // 0x359b14: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359B18u; }
        if (ctx->pc != 0x359B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359B18u; }
        if (ctx->pc != 0x359B18u) { return; }
    }
    ctx->pc = 0x359B18u;
label_359b18:
    // 0x359b18: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x359b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_359b1c:
    // 0x359b1c: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x359b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_359b20:
    // 0x359b20: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x359b20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_359b24:
    // 0x359b24: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x359b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_359b28:
    // 0x359b28: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x359b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_359b2c:
    // 0x359b2c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x359b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_359b30:
    // 0x359b30: 0xc0e7d2c  jal         func_39F4B0
label_359b34:
    if (ctx->pc == 0x359B34u) {
        ctx->pc = 0x359B34u;
            // 0x359b34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x359B38u;
        goto label_359b38;
    }
    ctx->pc = 0x359B30u;
    SET_GPR_U32(ctx, 31, 0x359B38u);
    ctx->pc = 0x359B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x359B30u;
            // 0x359b34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359B38u; }
        if (ctx->pc != 0x359B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359B38u; }
        if (ctx->pc != 0x359B38u) { return; }
    }
    ctx->pc = 0x359B38u;
label_359b38:
    // 0x359b38: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x359b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_359b3c:
    // 0x359b3c: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x359b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_359b40:
    // 0x359b40: 0x2407f9ff  addiu       $a3, $zero, -0x601
    ctx->pc = 0x359b40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965759));
label_359b44:
    // 0x359b44: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x359b44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_359b48:
    // 0x359b48: 0x3c054270  lui         $a1, 0x4270
    ctx->pc = 0x359b48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17008 << 16));
label_359b4c:
    // 0x359b4c: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x359b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_359b50:
    // 0x359b50: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x359b50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_359b54:
    // 0x359b54: 0x34880008  ori         $t0, $a0, 0x8
    ctx->pc = 0x359b54u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
label_359b58:
    // 0x359b58: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x359b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_359b5c:
    // 0x359b5c: 0x1073824  and         $a3, $t0, $a3
    ctx->pc = 0x359b5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
label_359b60:
    // 0x359b60: 0xae2800b0  sw          $t0, 0xB0($s1)
    ctx->pc = 0x359b60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 8));
label_359b64:
    // 0x359b64: 0x34e70600  ori         $a3, $a3, 0x600
    ctx->pc = 0x359b64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1536);
label_359b68:
    // 0x359b68: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x359b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_359b6c:
    // 0x359b6c: 0xae2700b0  sw          $a3, 0xB0($s1)
    ctx->pc = 0x359b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 7));
label_359b70:
    // 0x359b70: 0xae26008c  sw          $a2, 0x8C($s1)
    ctx->pc = 0x359b70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 6));
label_359b74:
    // 0x359b74: 0xae250070  sw          $a1, 0x70($s1)
    ctx->pc = 0x359b74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 5));
label_359b78:
    // 0x359b78: 0xae230078  sw          $v1, 0x78($s1)
    ctx->pc = 0x359b78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 3));
label_359b7c:
    // 0x359b7c: 0xae230080  sw          $v1, 0x80($s1)
    ctx->pc = 0x359b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 3));
label_359b80:
    // 0x359b80: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x359b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_359b84:
    // 0x359b84: 0x8c430968  lw          $v1, 0x968($v0)
    ctx->pc = 0x359b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
label_359b88:
    // 0x359b88: 0x90420c6a  lbu         $v0, 0xC6A($v0)
    ctx->pc = 0x359b88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3178)));
label_359b8c:
    // 0x359b8c: 0x38630010  xori        $v1, $v1, 0x10
    ctx->pc = 0x359b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
label_359b90:
    // 0x359b90: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x359b90u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_359b94:
    // 0x359b94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x359b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_359b98:
    // 0x359b98: 0xc040180  jal         func_100600
label_359b9c:
    if (ctx->pc == 0x359B9Cu) {
        ctx->pc = 0x359B9Cu;
            // 0x359b9c: 0x629018  mult        $s2, $v1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
        ctx->pc = 0x359BA0u;
        goto label_359ba0;
    }
    ctx->pc = 0x359B98u;
    SET_GPR_U32(ctx, 31, 0x359BA0u);
    ctx->pc = 0x359B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x359B98u;
            // 0x359b9c: 0x629018  mult        $s2, $v1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359BA0u; }
        if (ctx->pc != 0x359BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359BA0u; }
        if (ctx->pc != 0x359BA0u) { return; }
    }
    ctx->pc = 0x359BA0u;
label_359ba0:
    // 0x359ba0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x359ba0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_359ba4:
    // 0x359ba4: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_359ba8:
    if (ctx->pc == 0x359BA8u) {
        ctx->pc = 0x359BACu;
        goto label_359bac;
    }
    ctx->pc = 0x359BA4u;
    {
        const bool branch_taken_0x359ba4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x359ba4) {
            ctx->pc = 0x359BE0u;
            goto label_359be0;
        }
    }
    ctx->pc = 0x359BACu;
label_359bac:
    // 0x359bac: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x359bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_359bb0:
    // 0x359bb0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x359bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_359bb4:
    // 0x359bb4: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x359bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_359bb8:
    // 0x359bb8: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x359bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_359bbc:
    // 0x359bbc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x359bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_359bc0:
    // 0x359bc0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x359bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_359bc4:
    // 0x359bc4: 0xc040138  jal         func_1004E0
label_359bc8:
    if (ctx->pc == 0x359BC8u) {
        ctx->pc = 0x359BC8u;
            // 0x359bc8: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x359BCCu;
        goto label_359bcc;
    }
    ctx->pc = 0x359BC4u;
    SET_GPR_U32(ctx, 31, 0x359BCCu);
    ctx->pc = 0x359BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x359BC4u;
            // 0x359bc8: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359BCCu; }
        if (ctx->pc != 0x359BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359BCCu; }
        if (ctx->pc != 0x359BCCu) { return; }
    }
    ctx->pc = 0x359BCCu;
label_359bcc:
    // 0x359bcc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x359bccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_359bd0:
    // 0x359bd0: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x359bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_359bd4:
    // 0x359bd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x359bd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_359bd8:
    // 0x359bd8: 0xc04a576  jal         func_1295D8
label_359bdc:
    if (ctx->pc == 0x359BDCu) {
        ctx->pc = 0x359BDCu;
            // 0x359bdc: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x359BE0u;
        goto label_359be0;
    }
    ctx->pc = 0x359BD8u;
    SET_GPR_U32(ctx, 31, 0x359BE0u);
    ctx->pc = 0x359BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x359BD8u;
            // 0x359bdc: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359BE0u; }
        if (ctx->pc != 0x359BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359BE0u; }
        if (ctx->pc != 0x359BE0u) { return; }
    }
    ctx->pc = 0x359BE0u;
label_359be0:
    // 0x359be0: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x359be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_359be4:
    // 0x359be4: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x359be4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_359be8:
    // 0x359be8: 0x24424448  addiu       $v0, $v0, 0x4448
    ctx->pc = 0x359be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17480));
label_359bec:
    // 0x359bec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x359becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_359bf0:
    // 0x359bf0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x359bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_359bf4:
    // 0x359bf4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x359bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_359bf8:
    // 0x359bf8: 0x3c0246af  lui         $v0, 0x46AF
    ctx->pc = 0x359bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18095 << 16));
label_359bfc:
    // 0x359bfc: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x359bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_359c00:
    // 0x359c00: 0x3442c800  ori         $v0, $v0, 0xC800
    ctx->pc = 0x359c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51200);
label_359c04:
    // 0x359c04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x359c04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_359c08:
    // 0x359c08: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x359c08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_359c0c:
    // 0x359c0c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x359c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_359c10:
    // 0x359c10: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x359c10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_359c14:
    // 0x359c14: 0xc122cd8  jal         func_48B360
label_359c18:
    if (ctx->pc == 0x359C18u) {
        ctx->pc = 0x359C18u;
            // 0x359c18: 0xae3000d4  sw          $s0, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 16));
        ctx->pc = 0x359C1Cu;
        goto label_359c1c;
    }
    ctx->pc = 0x359C14u;
    SET_GPR_U32(ctx, 31, 0x359C1Cu);
    ctx->pc = 0x359C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x359C14u;
            // 0x359c18: 0xae3000d4  sw          $s0, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359C1Cu; }
        if (ctx->pc != 0x359C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359C1Cu; }
        if (ctx->pc != 0x359C1Cu) { return; }
    }
    ctx->pc = 0x359C1Cu;
label_359c1c:
    // 0x359c1c: 0x3c0246af  lui         $v0, 0x46AF
    ctx->pc = 0x359c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18095 << 16));
label_359c20:
    // 0x359c20: 0x8e2400d4  lw          $a0, 0xD4($s1)
    ctx->pc = 0x359c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_359c24:
    // 0x359c24: 0x3443c800  ori         $v1, $v0, 0xC800
    ctx->pc = 0x359c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51200);
label_359c28:
    // 0x359c28: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x359c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_359c2c:
    // 0x359c2c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x359c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_359c30:
    // 0x359c30: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x359c30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_359c34:
    // 0x359c34: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x359c34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_359c38:
    // 0x359c38: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x359c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_359c3c:
    // 0x359c3c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x359c3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_359c40:
    // 0x359c40: 0xc122cd8  jal         func_48B360
label_359c44:
    if (ctx->pc == 0x359C44u) {
        ctx->pc = 0x359C44u;
            // 0x359c44: 0x344601ae  ori         $a2, $v0, 0x1AE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)430);
        ctx->pc = 0x359C48u;
        goto label_359c48;
    }
    ctx->pc = 0x359C40u;
    SET_GPR_U32(ctx, 31, 0x359C48u);
    ctx->pc = 0x359C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x359C40u;
            // 0x359c44: 0x344601ae  ori         $a2, $v0, 0x1AE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)430);
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359C48u; }
        if (ctx->pc != 0x359C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359C48u; }
        if (ctx->pc != 0x359C48u) { return; }
    }
    ctx->pc = 0x359C48u;
label_359c48:
    // 0x359c48: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x359c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_359c4c:
    // 0x359c4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x359c4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_359c50:
    // 0x359c50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x359c50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_359c54:
    // 0x359c54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x359c54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_359c58:
    // 0x359c58: 0x3e00008  jr          $ra
label_359c5c:
    if (ctx->pc == 0x359C5Cu) {
        ctx->pc = 0x359C5Cu;
            // 0x359c5c: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x359C60u;
        goto label_359c60;
    }
    ctx->pc = 0x359C58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359C58u;
            // 0x359c5c: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x359C60u;
label_359c60:
    // 0x359c60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x359c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_359c64:
    // 0x359c64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x359c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_359c68:
    // 0x359c68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x359c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_359c6c:
    // 0x359c6c: 0xc0e3580  jal         func_38D600
label_359c70:
    if (ctx->pc == 0x359C70u) {
        ctx->pc = 0x359C70u;
            // 0x359c70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x359C74u;
        goto label_359c74;
    }
    ctx->pc = 0x359C6Cu;
    SET_GPR_U32(ctx, 31, 0x359C74u);
    ctx->pc = 0x359C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x359C6Cu;
            // 0x359c70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D600u;
    if (runtime->hasFunction(0x38D600u)) {
        auto targetFn = runtime->lookupFunction(0x38D600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359C74u; }
        if (ctx->pc != 0x359C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D600_0x38d600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359C74u; }
        if (ctx->pc != 0x359C74u) { return; }
    }
    ctx->pc = 0x359C74u;
label_359c74:
    // 0x359c74: 0x8e0600b0  lw          $a2, 0xB0($s0)
    ctx->pc = 0x359c74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_359c78:
    // 0x359c78: 0x2405f9ff  addiu       $a1, $zero, -0x601
    ctx->pc = 0x359c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965759));
label_359c7c:
    // 0x359c7c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x359c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_359c80:
    // 0x359c80: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x359c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_359c84:
    // 0x359c84: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x359c84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_359c88:
    // 0x359c88: 0x34a50600  ori         $a1, $a1, 0x600
    ctx->pc = 0x359c88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1536);
label_359c8c:
    // 0x359c8c: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x359c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
label_359c90:
    // 0x359c90: 0xa2040064  sb          $a0, 0x64($s0)
    ctx->pc = 0x359c90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 4));
label_359c94:
    // 0x359c94: 0xa2040065  sb          $a0, 0x65($s0)
    ctx->pc = 0x359c94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 101), (uint8_t)GPR_U32(ctx, 4));
label_359c98:
    // 0x359c98: 0xa2000068  sb          $zero, 0x68($s0)
    ctx->pc = 0x359c98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 0));
label_359c9c:
    // 0x359c9c: 0xa2030069  sb          $v1, 0x69($s0)
    ctx->pc = 0x359c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 3));
label_359ca0:
    // 0x359ca0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x359ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_359ca4:
    // 0x359ca4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x359ca4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_359ca8:
    // 0x359ca8: 0x3e00008  jr          $ra
label_359cac:
    if (ctx->pc == 0x359CACu) {
        ctx->pc = 0x359CACu;
            // 0x359cac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x359CB0u;
        goto label_359cb0;
    }
    ctx->pc = 0x359CA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359CA8u;
            // 0x359cac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x359CB0u;
label_359cb0:
    // 0x359cb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x359cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_359cb4:
    // 0x359cb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x359cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_359cb8:
    // 0x359cb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x359cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_359cbc:
    // 0x359cbc: 0x9082004d  lbu         $v0, 0x4D($a0)
    ctx->pc = 0x359cbcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 77)));
label_359cc0:
    // 0x359cc0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_359cc4:
    if (ctx->pc == 0x359CC4u) {
        ctx->pc = 0x359CC4u;
            // 0x359cc4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x359CC8u;
        goto label_359cc8;
    }
    ctx->pc = 0x359CC0u;
    {
        const bool branch_taken_0x359cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x359CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359CC0u;
            // 0x359cc4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359cc0) {
            ctx->pc = 0x359CD4u;
            goto label_359cd4;
        }
    }
    ctx->pc = 0x359CC8u;
label_359cc8:
    // 0x359cc8: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x359cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_359ccc:
    // 0x359ccc: 0xc0baaa0  jal         func_2EAA80
label_359cd0:
    if (ctx->pc == 0x359CD0u) {
        ctx->pc = 0x359CD0u;
            // 0x359cd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x359CD4u;
        goto label_359cd4;
    }
    ctx->pc = 0x359CCCu;
    SET_GPR_U32(ctx, 31, 0x359CD4u);
    ctx->pc = 0x359CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x359CCCu;
            // 0x359cd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EAA80u;
    if (runtime->hasFunction(0x2EAA80u)) {
        auto targetFn = runtime->lookupFunction(0x2EAA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359CD4u; }
        if (ctx->pc != 0x359CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EAA80_0x2eaa80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359CD4u; }
        if (ctx->pc != 0x359CD4u) { return; }
    }
    ctx->pc = 0x359CD4u;
label_359cd4:
    // 0x359cd4: 0x8e0400d4  lw          $a0, 0xD4($s0)
    ctx->pc = 0x359cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_359cd8:
    // 0x359cd8: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x359cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_359cdc:
    // 0x359cdc: 0xc122d2c  jal         func_48B4B0
label_359ce0:
    if (ctx->pc == 0x359CE0u) {
        ctx->pc = 0x359CE0u;
            // 0x359ce0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x359CE4u;
        goto label_359ce4;
    }
    ctx->pc = 0x359CDCu;
    SET_GPR_U32(ctx, 31, 0x359CE4u);
    ctx->pc = 0x359CE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x359CDCu;
            // 0x359ce0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359CE4u; }
        if (ctx->pc != 0x359CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359CE4u; }
        if (ctx->pc != 0x359CE4u) { return; }
    }
    ctx->pc = 0x359CE4u;
label_359ce4:
    // 0x359ce4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x359ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_359ce8:
    // 0x359ce8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x359ce8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_359cec:
    // 0x359cec: 0x3e00008  jr          $ra
label_359cf0:
    if (ctx->pc == 0x359CF0u) {
        ctx->pc = 0x359CF0u;
            // 0x359cf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x359CF4u;
        goto label_359cf4;
    }
    ctx->pc = 0x359CECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359CECu;
            // 0x359cf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x359CF4u;
label_359cf4:
    // 0x359cf4: 0x0  nop
    ctx->pc = 0x359cf4u;
    // NOP
label_359cf8:
    // 0x359cf8: 0x0  nop
    ctx->pc = 0x359cf8u;
    // NOP
label_359cfc:
    // 0x359cfc: 0x0  nop
    ctx->pc = 0x359cfcu;
    // NOP
label_359d00:
    // 0x359d00: 0x8c8500d0  lw          $a1, 0xD0($a0)
    ctx->pc = 0x359d00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_359d04:
    // 0x359d04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x359d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_359d08:
    // 0x359d08: 0x10a30022  beq         $a1, $v1, . + 4 + (0x22 << 2)
label_359d0c:
    if (ctx->pc == 0x359D0Cu) {
        ctx->pc = 0x359D10u;
        goto label_359d10;
    }
    ctx->pc = 0x359D08u;
    {
        const bool branch_taken_0x359d08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x359d08) {
            ctx->pc = 0x359D94u;
            goto label_359d94;
        }
    }
    ctx->pc = 0x359D10u;
label_359d10:
    // 0x359d10: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_359d14:
    if (ctx->pc == 0x359D14u) {
        ctx->pc = 0x359D18u;
        goto label_359d18;
    }
    ctx->pc = 0x359D10u;
    {
        const bool branch_taken_0x359d10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x359d10) {
            ctx->pc = 0x359D20u;
            goto label_359d20;
        }
    }
    ctx->pc = 0x359D18u;
label_359d18:
    // 0x359d18: 0x1000001e  b           . + 4 + (0x1E << 2)
label_359d1c:
    if (ctx->pc == 0x359D1Cu) {
        ctx->pc = 0x359D20u;
        goto label_359d20;
    }
    ctx->pc = 0x359D18u;
    {
        const bool branch_taken_0x359d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x359d18) {
            ctx->pc = 0x359D94u;
            goto label_359d94;
        }
    }
    ctx->pc = 0x359D20u;
label_359d20:
    // 0x359d20: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x359d20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_359d24:
    // 0x359d24: 0x8c850040  lw          $a1, 0x40($a0)
    ctx->pc = 0x359d24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_359d28:
    // 0x359d28: 0x8c674000  lw          $a3, 0x4000($v1)
    ctx->pc = 0x359d28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16384)));
label_359d2c:
    // 0x359d2c: 0x530c0  sll         $a2, $a1, 3
    ctx->pc = 0x359d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_359d30:
    // 0x359d30: 0x8ce50088  lw          $a1, 0x88($a3)
    ctx->pc = 0x359d30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 136)));
label_359d34:
    // 0x359d34: 0x8c83009c  lw          $v1, 0x9C($a0)
    ctx->pc = 0x359d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
label_359d38:
    // 0x359d38: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x359d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_359d3c:
    // 0x359d3c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x359d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_359d40:
    // 0x359d40: 0x8ca90030  lw          $t1, 0x30($a1)
    ctx->pc = 0x359d40u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_359d44:
    // 0x359d44: 0xac69000c  sw          $t1, 0xC($v1)
    ctx->pc = 0x359d44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 9));
label_359d48:
    // 0x359d48: 0x8c6b0000  lw          $t3, 0x0($v1)
    ctx->pc = 0x359d48u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_359d4c:
    // 0x359d4c: 0x8c6a0010  lw          $t2, 0x10($v1)
    ctx->pc = 0x359d4cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_359d50:
    // 0x359d50: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x359d50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_359d54:
    // 0x359d54: 0x8d680000  lw          $t0, 0x0($t3)
    ctx->pc = 0x359d54u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_359d58:
    // 0x359d58: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x359d58u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
label_359d5c:
    // 0x359d5c: 0x8c6517a8  lw          $a1, 0x17A8($v1)
    ctx->pc = 0x359d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6056)));
label_359d60:
    // 0x359d60: 0x8d070018  lw          $a3, 0x18($t0)
    ctx->pc = 0x359d60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
label_359d64:
    // 0x359d64: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x359d64u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
label_359d68:
    // 0x359d68: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x359d68u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_359d6c:
    // 0x359d6c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x359d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_359d70:
    // 0x359d70: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x359d70u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_359d74:
    // 0x359d74: 0x1263021  addu        $a2, $t1, $a2
    ctx->pc = 0x359d74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_359d78:
    // 0x359d78: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x359d78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_359d7c:
    // 0x359d7c: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x359d7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_359d80:
    // 0x359d80: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x359d80u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_359d84:
    // 0x359d84: 0x1d40fff3  bgtz        $t2, . + 4 + (-0xD << 2)
label_359d88:
    if (ctx->pc == 0x359D88u) {
        ctx->pc = 0x359D88u;
            // 0x359d88: 0xa1050020  sb          $a1, 0x20($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 32), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = 0x359D8Cu;
        goto label_359d8c;
    }
    ctx->pc = 0x359D84u;
    {
        const bool branch_taken_0x359d84 = (GPR_S32(ctx, 10) > 0);
        ctx->pc = 0x359D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359D84u;
            // 0x359d88: 0xa1050020  sb          $a1, 0x20($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 32), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359d84) {
            ctx->pc = 0x359D54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_359d54;
        }
    }
    ctx->pc = 0x359D8Cu;
label_359d8c:
    // 0x359d8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x359d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_359d90:
    // 0x359d90: 0xac8300d0  sw          $v1, 0xD0($a0)
    ctx->pc = 0x359d90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 3));
label_359d94:
    // 0x359d94: 0x3e00008  jr          $ra
label_359d98:
    if (ctx->pc == 0x359D98u) {
        ctx->pc = 0x359D9Cu;
        goto label_359d9c;
    }
    ctx->pc = 0x359D94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x359D9Cu;
label_359d9c:
    // 0x359d9c: 0x0  nop
    ctx->pc = 0x359d9cu;
    // NOP
label_359da0:
    // 0x359da0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x359da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_359da4:
    // 0x359da4: 0x3c0300e1  lui         $v1, 0xE1
    ctx->pc = 0x359da4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)225 << 16));
label_359da8:
    // 0x359da8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x359da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_359dac:
    // 0x359dac: 0x34630180  ori         $v1, $v1, 0x180
    ctx->pc = 0x359dacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)384);
label_359db0:
    // 0x359db0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x359db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_359db4:
    // 0x359db4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x359db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_359db8:
    // 0x359db8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x359db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_359dbc:
    // 0x359dbc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x359dbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_359dc0:
    // 0x359dc0: 0xac8000d0  sw          $zero, 0xD0($a0)
    ctx->pc = 0x359dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 0));
label_359dc4:
    // 0x359dc4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x359dc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_359dc8:
    // 0x359dc8: 0x8c900050  lw          $s0, 0x50($a0)
    ctx->pc = 0x359dc8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_359dcc:
    // 0x359dcc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x359dccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_359dd0:
    // 0x359dd0: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x359dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_359dd4:
    // 0x359dd4: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x359dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_359dd8:
    // 0x359dd8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x359dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_359ddc:
    // 0x359ddc: 0xc08bff0  jal         func_22FFC0
label_359de0:
    if (ctx->pc == 0x359DE0u) {
        ctx->pc = 0x359DE0u;
            // 0x359de0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x359DE4u;
        goto label_359de4;
    }
    ctx->pc = 0x359DDCu;
    SET_GPR_U32(ctx, 31, 0x359DE4u);
    ctx->pc = 0x359DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x359DDCu;
            // 0x359de0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359DE4u; }
        if (ctx->pc != 0x359DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359DE4u; }
        if (ctx->pc != 0x359DE4u) { return; }
    }
    ctx->pc = 0x359DE4u;
label_359de4:
    // 0x359de4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x359de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_359de8:
    // 0x359de8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x359de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_359dec:
    // 0x359dec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x359decu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_359df0:
    // 0x359df0: 0xc08914c  jal         func_224530
label_359df4:
    if (ctx->pc == 0x359DF4u) {
        ctx->pc = 0x359DF4u;
            // 0x359df4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x359DF8u;
        goto label_359df8;
    }
    ctx->pc = 0x359DF0u;
    SET_GPR_U32(ctx, 31, 0x359DF8u);
    ctx->pc = 0x359DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x359DF0u;
            // 0x359df4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359DF8u; }
        if (ctx->pc != 0x359DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359DF8u; }
        if (ctx->pc != 0x359DF8u) { return; }
    }
    ctx->pc = 0x359DF8u;
label_359df8:
    // 0x359df8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x359df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_359dfc:
    // 0x359dfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x359dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_359e00:
    // 0x359e00: 0xc0e393c  jal         func_38E4F0
label_359e04:
    if (ctx->pc == 0x359E04u) {
        ctx->pc = 0x359E04u;
            // 0x359e04: 0xa22200d8  sb          $v0, 0xD8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 216), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x359E08u;
        goto label_359e08;
    }
    ctx->pc = 0x359E00u;
    SET_GPR_U32(ctx, 31, 0x359E08u);
    ctx->pc = 0x359E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x359E00u;
            // 0x359e04: 0xa22200d8  sb          $v0, 0xD8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 216), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359E08u; }
        if (ctx->pc != 0x359E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359E08u; }
        if (ctx->pc != 0x359E08u) { return; }
    }
    ctx->pc = 0x359E08u;
label_359e08:
    // 0x359e08: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x359e08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_359e0c:
    // 0x359e0c: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x359e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_359e10:
    // 0x359e10: 0xc46275a0  lwc1        $f2, 0x75A0($v1)
    ctx->pc = 0x359e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 30112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_359e14:
    // 0x359e14: 0xc48175a8  lwc1        $f1, 0x75A8($a0)
    ctx->pc = 0x359e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 30120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_359e18:
    // 0x359e18: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x359e18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_359e1c:
    // 0x359e1c: 0xc46075b0  lwc1        $f0, 0x75B0($v1)
    ctx->pc = 0x359e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 30128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_359e20:
    // 0x359e20: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x359e20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
label_359e24:
    // 0x359e24: 0xe602015c  swc1        $f2, 0x15C($s0)
    ctx->pc = 0x359e24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 348), bits); }
label_359e28:
    // 0x359e28: 0xe6010160  swc1        $f1, 0x160($s0)
    ctx->pc = 0x359e28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 352), bits); }
label_359e2c:
    // 0x359e2c: 0xe6000154  swc1        $f0, 0x154($s0)
    ctx->pc = 0x359e2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 340), bits); }
label_359e30:
    // 0x359e30: 0xae040158  sw          $a0, 0x158($s0)
    ctx->pc = 0x359e30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 4));
label_359e34:
    // 0x359e34: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x359e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_359e38:
    // 0x359e38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x359e38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_359e3c:
    // 0x359e3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x359e3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_359e40:
    // 0x359e40: 0x3e00008  jr          $ra
label_359e44:
    if (ctx->pc == 0x359E44u) {
        ctx->pc = 0x359E44u;
            // 0x359e44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x359E48u;
        goto label_359e48;
    }
    ctx->pc = 0x359E40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359E40u;
            // 0x359e44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x359E48u;
label_359e48:
    // 0x359e48: 0x0  nop
    ctx->pc = 0x359e48u;
    // NOP
label_359e4c:
    // 0x359e4c: 0x0  nop
    ctx->pc = 0x359e4cu;
    // NOP
label_359e50:
    // 0x359e50: 0x3e00008  jr          $ra
label_359e54:
    if (ctx->pc == 0x359E54u) {
        ctx->pc = 0x359E54u;
            // 0x359e54: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x359E58u;
        goto label_359e58;
    }
    ctx->pc = 0x359E50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359E50u;
            // 0x359e54: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x359E58u;
label_359e58:
    // 0x359e58: 0x0  nop
    ctx->pc = 0x359e58u;
    // NOP
label_359e5c:
    // 0x359e5c: 0x0  nop
    ctx->pc = 0x359e5cu;
    // NOP
label_359e60:
    // 0x359e60: 0x3e00008  jr          $ra
label_359e64:
    if (ctx->pc == 0x359E64u) {
        ctx->pc = 0x359E64u;
            // 0x359e64: 0x24022b02  addiu       $v0, $zero, 0x2B02 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11010));
        ctx->pc = 0x359E68u;
        goto label_359e68;
    }
    ctx->pc = 0x359E60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359E60u;
            // 0x359e64: 0x24022b02  addiu       $v0, $zero, 0x2B02 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11010));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x359E68u;
label_359e68:
    // 0x359e68: 0x0  nop
    ctx->pc = 0x359e68u;
    // NOP
label_359e6c:
    // 0x359e6c: 0x0  nop
    ctx->pc = 0x359e6cu;
    // NOP
label_359e70:
    // 0x359e70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x359e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_359e74:
    // 0x359e74: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x359e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_359e78:
    // 0x359e78: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x359e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_359e7c:
    // 0x359e7c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x359e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_359e80:
    // 0x359e80: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x359e80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_359e84:
    // 0x359e84: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x359e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_359e88:
    // 0x359e88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x359e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_359e8c:
    // 0x359e8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x359e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_359e90:
    // 0x359e90: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x359e90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_359e94:
    // 0x359e94: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_359e98:
    if (ctx->pc == 0x359E98u) {
        ctx->pc = 0x359E98u;
            // 0x359e98: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x359E9Cu;
        goto label_359e9c;
    }
    ctx->pc = 0x359E94u;
    {
        const bool branch_taken_0x359e94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x359E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359E94u;
            // 0x359e98: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359e94) {
            ctx->pc = 0x359ED8u;
            goto label_359ed8;
        }
    }
    ctx->pc = 0x359E9Cu;
label_359e9c:
    // 0x359e9c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x359e9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_359ea0:
    // 0x359ea0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x359ea0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_359ea4:
    // 0x359ea4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x359ea4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_359ea8:
    // 0x359ea8: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x359ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_359eac:
    // 0x359eac: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x359eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_359eb0:
    // 0x359eb0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x359eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_359eb4:
    // 0x359eb4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x359eb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_359eb8:
    // 0x359eb8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x359eb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_359ebc:
    // 0x359ebc: 0x320f809  jalr        $t9
label_359ec0:
    if (ctx->pc == 0x359EC0u) {
        ctx->pc = 0x359EC4u;
        goto label_359ec4;
    }
    ctx->pc = 0x359EBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x359EC4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x359EC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x359EC4u; }
            if (ctx->pc != 0x359EC4u) { return; }
        }
        }
    }
    ctx->pc = 0x359EC4u;
label_359ec4:
    // 0x359ec4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x359ec4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_359ec8:
    // 0x359ec8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x359ec8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_359ecc:
    // 0x359ecc: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x359eccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_359ed0:
    // 0x359ed0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_359ed4:
    if (ctx->pc == 0x359ED4u) {
        ctx->pc = 0x359ED4u;
            // 0x359ed4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x359ED8u;
        goto label_359ed8;
    }
    ctx->pc = 0x359ED0u;
    {
        const bool branch_taken_0x359ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x359ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359ED0u;
            // 0x359ed4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359ed0) {
            ctx->pc = 0x359EA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_359ea8;
        }
    }
    ctx->pc = 0x359ED8u;
label_359ed8:
    // 0x359ed8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x359ed8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_359edc:
    // 0x359edc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x359edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_359ee0:
    // 0x359ee0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x359ee0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_359ee4:
    // 0x359ee4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x359ee4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_359ee8:
    // 0x359ee8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x359ee8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_359eec:
    // 0x359eec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x359eecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_359ef0:
    // 0x359ef0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x359ef0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_359ef4:
    // 0x359ef4: 0x3e00008  jr          $ra
label_359ef8:
    if (ctx->pc == 0x359EF8u) {
        ctx->pc = 0x359EF8u;
            // 0x359ef8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x359EFCu;
        goto label_359efc;
    }
    ctx->pc = 0x359EF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359EF4u;
            // 0x359ef8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x359EFCu;
label_359efc:
    // 0x359efc: 0x0  nop
    ctx->pc = 0x359efcu;
    // NOP
label_359f00:
    // 0x359f00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x359f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_359f04:
    // 0x359f04: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x359f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_359f08:
    // 0x359f08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x359f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_359f0c:
    // 0x359f0c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x359f0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_359f10:
    // 0x359f10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x359f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_359f14:
    // 0x359f14: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x359f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_359f18:
    // 0x359f18: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x359f18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_359f1c:
    // 0x359f1c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x359f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_359f20:
    // 0x359f20: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x359f20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_359f24:
    // 0x359f24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x359f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_359f28:
    // 0x359f28: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x359f28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_359f2c:
    // 0x359f2c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x359f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_359f30:
    // 0x359f30: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x359f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_359f34:
    // 0x359f34: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x359f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_359f38:
    // 0x359f38: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x359f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_359f3c:
    // 0x359f3c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x359f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_359f40:
    // 0x359f40: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x359f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_359f44:
    // 0x359f44: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x359f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_359f48:
    // 0x359f48: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x359f48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_359f4c:
    // 0x359f4c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x359f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_359f50:
    // 0x359f50: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x359f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_359f54:
    // 0x359f54: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x359f54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_359f58:
    // 0x359f58: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x359f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_359f5c:
    // 0x359f5c: 0xc0a997c  jal         func_2A65F0
label_359f60:
    if (ctx->pc == 0x359F60u) {
        ctx->pc = 0x359F60u;
            // 0x359f60: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x359F64u;
        goto label_359f64;
    }
    ctx->pc = 0x359F5Cu;
    SET_GPR_U32(ctx, 31, 0x359F64u);
    ctx->pc = 0x359F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x359F5Cu;
            // 0x359f60: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359F64u; }
        if (ctx->pc != 0x359F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359F64u; }
        if (ctx->pc != 0x359F64u) { return; }
    }
    ctx->pc = 0x359F64u;
label_359f64:
    // 0x359f64: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x359f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_359f68:
    // 0x359f68: 0xc0d879c  jal         func_361E70
label_359f6c:
    if (ctx->pc == 0x359F6Cu) {
        ctx->pc = 0x359F6Cu;
            // 0x359f6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x359F70u;
        goto label_359f70;
    }
    ctx->pc = 0x359F68u;
    SET_GPR_U32(ctx, 31, 0x359F70u);
    ctx->pc = 0x359F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x359F68u;
            // 0x359f6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359F70u; }
        if (ctx->pc != 0x359F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359F70u; }
        if (ctx->pc != 0x359F70u) { return; }
    }
    ctx->pc = 0x359F70u;
label_359f70:
    // 0x359f70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x359f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_359f74:
    // 0x359f74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x359f74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_359f78:
    // 0x359f78: 0x3e00008  jr          $ra
label_359f7c:
    if (ctx->pc == 0x359F7Cu) {
        ctx->pc = 0x359F7Cu;
            // 0x359f7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x359F80u;
        goto label_359f80;
    }
    ctx->pc = 0x359F78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359F78u;
            // 0x359f7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x359F80u;
label_359f80:
    // 0x359f80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x359f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_359f84:
    // 0x359f84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x359f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_359f88:
    // 0x359f88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x359f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_359f8c:
    // 0x359f8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x359f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_359f90:
    // 0x359f90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x359f90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_359f94:
    // 0x359f94: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x359f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_359f98:
    // 0x359f98: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_359f9c:
    if (ctx->pc == 0x359F9Cu) {
        ctx->pc = 0x359F9Cu;
            // 0x359f9c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x359FA0u;
        goto label_359fa0;
    }
    ctx->pc = 0x359F98u;
    {
        const bool branch_taken_0x359f98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x359F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359F98u;
            // 0x359f9c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359f98) {
            ctx->pc = 0x359FC8u;
            goto label_359fc8;
        }
    }
    ctx->pc = 0x359FA0u;
label_359fa0:
    // 0x359fa0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x359fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_359fa4:
    // 0x359fa4: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x359fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_359fa8:
    // 0x359fa8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x359fa8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_359fac:
    // 0x359fac: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x359facu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_359fb0:
    // 0x359fb0: 0x320f809  jalr        $t9
label_359fb4:
    if (ctx->pc == 0x359FB4u) {
        ctx->pc = 0x359FB8u;
        goto label_359fb8;
    }
    ctx->pc = 0x359FB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x359FB8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x359FB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x359FB8u; }
            if (ctx->pc != 0x359FB8u) { return; }
        }
        }
    }
    ctx->pc = 0x359FB8u;
label_359fb8:
    // 0x359fb8: 0x26240084  addiu       $a0, $s1, 0x84
    ctx->pc = 0x359fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_359fbc:
    // 0x359fbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x359fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_359fc0:
    // 0x359fc0: 0xc0d86a0  jal         func_361A80
label_359fc4:
    if (ctx->pc == 0x359FC4u) {
        ctx->pc = 0x359FC4u;
            // 0x359fc4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x359FC8u;
        goto label_359fc8;
    }
    ctx->pc = 0x359FC0u;
    SET_GPR_U32(ctx, 31, 0x359FC8u);
    ctx->pc = 0x359FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x359FC0u;
            // 0x359fc4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361A80u;
    if (runtime->hasFunction(0x361A80u)) {
        auto targetFn = runtime->lookupFunction(0x361A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359FC8u; }
        if (ctx->pc != 0x359FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361A80_0x361a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359FC8u; }
        if (ctx->pc != 0x359FC8u) { return; }
    }
    ctx->pc = 0x359FC8u;
label_359fc8:
    // 0x359fc8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x359fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_359fcc:
    // 0x359fcc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x359fccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_359fd0:
    // 0x359fd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x359fd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_359fd4:
    // 0x359fd4: 0x3e00008  jr          $ra
label_359fd8:
    if (ctx->pc == 0x359FD8u) {
        ctx->pc = 0x359FD8u;
            // 0x359fd8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x359FDCu;
        goto label_359fdc;
    }
    ctx->pc = 0x359FD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359FD4u;
            // 0x359fd8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x359FDCu;
label_359fdc:
    // 0x359fdc: 0x0  nop
    ctx->pc = 0x359fdcu;
    // NOP
label_359fe0:
    // 0x359fe0: 0x80d61f8  j           func_3587E0
label_359fe4:
    if (ctx->pc == 0x359FE4u) {
        ctx->pc = 0x359FE4u;
            // 0x359fe4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x359FE8u;
        goto label_359fe8;
    }
    ctx->pc = 0x359FE0u;
    ctx->pc = 0x359FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x359FE0u;
            // 0x359fe4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3587E0u;
    {
        auto targetFn = runtime->lookupFunction(0x3587E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x359FE8u;
label_359fe8:
    // 0x359fe8: 0x0  nop
    ctx->pc = 0x359fe8u;
    // NOP
label_359fec:
    // 0x359fec: 0x0  nop
    ctx->pc = 0x359fecu;
    // NOP
label_359ff0:
    // 0x359ff0: 0x80d6478  j           func_3591E0
label_359ff4:
    if (ctx->pc == 0x359FF4u) {
        ctx->pc = 0x359FF4u;
            // 0x359ff4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x359FF8u;
        goto label_359ff8;
    }
    ctx->pc = 0x359FF0u;
    ctx->pc = 0x359FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x359FF0u;
            // 0x359ff4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3591E0u;
    {
        auto targetFn = runtime->lookupFunction(0x3591E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x359FF8u;
label_359ff8:
    // 0x359ff8: 0x0  nop
    ctx->pc = 0x359ff8u;
    // NOP
label_359ffc:
    // 0x359ffc: 0x0  nop
    ctx->pc = 0x359ffcu;
    // NOP
label_35a000:
    // 0x35a000: 0x80d6198  j           func_358660
label_35a004:
    if (ctx->pc == 0x35A004u) {
        ctx->pc = 0x35A004u;
            // 0x35a004: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x35A008u;
        goto label_35a008;
    }
    ctx->pc = 0x35A000u;
    ctx->pc = 0x35A004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35A000u;
            // 0x35a004: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358660u;
    if (runtime->hasFunction(0x358660u)) {
        auto targetFn = runtime->lookupFunction(0x358660u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00358660_0x358660(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x35A008u;
label_35a008:
    // 0x35a008: 0x0  nop
    ctx->pc = 0x35a008u;
    // NOP
label_35a00c:
    // 0x35a00c: 0x0  nop
    ctx->pc = 0x35a00cu;
    // NOP
label_35a010:
    // 0x35a010: 0x80d6170  j           func_3585C0
label_35a014:
    if (ctx->pc == 0x35A014u) {
        ctx->pc = 0x35A014u;
            // 0x35a014: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x35A018u;
        goto label_35a018;
    }
    ctx->pc = 0x35A010u;
    ctx->pc = 0x35A014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35A010u;
            // 0x35a014: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3585C0u;
    {
        auto targetFn = runtime->lookupFunction(0x3585C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x35A018u;
label_35a018:
    // 0x35a018: 0x0  nop
    ctx->pc = 0x35a018u;
    // NOP
label_35a01c:
    // 0x35a01c: 0x0  nop
    ctx->pc = 0x35a01cu;
    // NOP
label_35a020:
    // 0x35a020: 0x3e00008  jr          $ra
label_35a024:
    if (ctx->pc == 0x35A024u) {
        ctx->pc = 0x35A028u;
        goto label_35a028;
    }
    ctx->pc = 0x35A020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35A028u;
label_35a028:
    // 0x35a028: 0x0  nop
    ctx->pc = 0x35a028u;
    // NOP
label_35a02c:
    // 0x35a02c: 0x0  nop
    ctx->pc = 0x35a02cu;
    // NOP
label_35a030:
    // 0x35a030: 0x3e00008  jr          $ra
label_35a034:
    if (ctx->pc == 0x35A034u) {
        ctx->pc = 0x35A034u;
            // 0x35a034: 0x240207d0  addiu       $v0, $zero, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
        ctx->pc = 0x35A038u;
        goto label_35a038;
    }
    ctx->pc = 0x35A030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35A034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35A030u;
            // 0x35a034: 0x240207d0  addiu       $v0, $zero, 0x7D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35A038u;
label_35a038:
    // 0x35a038: 0x0  nop
    ctx->pc = 0x35a038u;
    // NOP
label_35a03c:
    // 0x35a03c: 0x0  nop
    ctx->pc = 0x35a03cu;
    // NOP
label_35a040:
    // 0x35a040: 0x3e00008  jr          $ra
label_35a044:
    if (ctx->pc == 0x35A044u) {
        ctx->pc = 0x35A048u;
        goto label_35a048;
    }
    ctx->pc = 0x35A040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35A048u;
label_35a048:
    // 0x35a048: 0x0  nop
    ctx->pc = 0x35a048u;
    // NOP
label_35a04c:
    // 0x35a04c: 0x0  nop
    ctx->pc = 0x35a04cu;
    // NOP
}
