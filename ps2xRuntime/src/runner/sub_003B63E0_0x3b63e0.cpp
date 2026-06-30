#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B63E0
// Address: 0x3b63e0 - 0x3b6a90
void sub_003B63E0_0x3b63e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B63E0_0x3b63e0");
#endif

    switch (ctx->pc) {
        case 0x3b63e0u: goto label_3b63e0;
        case 0x3b63e4u: goto label_3b63e4;
        case 0x3b63e8u: goto label_3b63e8;
        case 0x3b63ecu: goto label_3b63ec;
        case 0x3b63f0u: goto label_3b63f0;
        case 0x3b63f4u: goto label_3b63f4;
        case 0x3b63f8u: goto label_3b63f8;
        case 0x3b63fcu: goto label_3b63fc;
        case 0x3b6400u: goto label_3b6400;
        case 0x3b6404u: goto label_3b6404;
        case 0x3b6408u: goto label_3b6408;
        case 0x3b640cu: goto label_3b640c;
        case 0x3b6410u: goto label_3b6410;
        case 0x3b6414u: goto label_3b6414;
        case 0x3b6418u: goto label_3b6418;
        case 0x3b641cu: goto label_3b641c;
        case 0x3b6420u: goto label_3b6420;
        case 0x3b6424u: goto label_3b6424;
        case 0x3b6428u: goto label_3b6428;
        case 0x3b642cu: goto label_3b642c;
        case 0x3b6430u: goto label_3b6430;
        case 0x3b6434u: goto label_3b6434;
        case 0x3b6438u: goto label_3b6438;
        case 0x3b643cu: goto label_3b643c;
        case 0x3b6440u: goto label_3b6440;
        case 0x3b6444u: goto label_3b6444;
        case 0x3b6448u: goto label_3b6448;
        case 0x3b644cu: goto label_3b644c;
        case 0x3b6450u: goto label_3b6450;
        case 0x3b6454u: goto label_3b6454;
        case 0x3b6458u: goto label_3b6458;
        case 0x3b645cu: goto label_3b645c;
        case 0x3b6460u: goto label_3b6460;
        case 0x3b6464u: goto label_3b6464;
        case 0x3b6468u: goto label_3b6468;
        case 0x3b646cu: goto label_3b646c;
        case 0x3b6470u: goto label_3b6470;
        case 0x3b6474u: goto label_3b6474;
        case 0x3b6478u: goto label_3b6478;
        case 0x3b647cu: goto label_3b647c;
        case 0x3b6480u: goto label_3b6480;
        case 0x3b6484u: goto label_3b6484;
        case 0x3b6488u: goto label_3b6488;
        case 0x3b648cu: goto label_3b648c;
        case 0x3b6490u: goto label_3b6490;
        case 0x3b6494u: goto label_3b6494;
        case 0x3b6498u: goto label_3b6498;
        case 0x3b649cu: goto label_3b649c;
        case 0x3b64a0u: goto label_3b64a0;
        case 0x3b64a4u: goto label_3b64a4;
        case 0x3b64a8u: goto label_3b64a8;
        case 0x3b64acu: goto label_3b64ac;
        case 0x3b64b0u: goto label_3b64b0;
        case 0x3b64b4u: goto label_3b64b4;
        case 0x3b64b8u: goto label_3b64b8;
        case 0x3b64bcu: goto label_3b64bc;
        case 0x3b64c0u: goto label_3b64c0;
        case 0x3b64c4u: goto label_3b64c4;
        case 0x3b64c8u: goto label_3b64c8;
        case 0x3b64ccu: goto label_3b64cc;
        case 0x3b64d0u: goto label_3b64d0;
        case 0x3b64d4u: goto label_3b64d4;
        case 0x3b64d8u: goto label_3b64d8;
        case 0x3b64dcu: goto label_3b64dc;
        case 0x3b64e0u: goto label_3b64e0;
        case 0x3b64e4u: goto label_3b64e4;
        case 0x3b64e8u: goto label_3b64e8;
        case 0x3b64ecu: goto label_3b64ec;
        case 0x3b64f0u: goto label_3b64f0;
        case 0x3b64f4u: goto label_3b64f4;
        case 0x3b64f8u: goto label_3b64f8;
        case 0x3b64fcu: goto label_3b64fc;
        case 0x3b6500u: goto label_3b6500;
        case 0x3b6504u: goto label_3b6504;
        case 0x3b6508u: goto label_3b6508;
        case 0x3b650cu: goto label_3b650c;
        case 0x3b6510u: goto label_3b6510;
        case 0x3b6514u: goto label_3b6514;
        case 0x3b6518u: goto label_3b6518;
        case 0x3b651cu: goto label_3b651c;
        case 0x3b6520u: goto label_3b6520;
        case 0x3b6524u: goto label_3b6524;
        case 0x3b6528u: goto label_3b6528;
        case 0x3b652cu: goto label_3b652c;
        case 0x3b6530u: goto label_3b6530;
        case 0x3b6534u: goto label_3b6534;
        case 0x3b6538u: goto label_3b6538;
        case 0x3b653cu: goto label_3b653c;
        case 0x3b6540u: goto label_3b6540;
        case 0x3b6544u: goto label_3b6544;
        case 0x3b6548u: goto label_3b6548;
        case 0x3b654cu: goto label_3b654c;
        case 0x3b6550u: goto label_3b6550;
        case 0x3b6554u: goto label_3b6554;
        case 0x3b6558u: goto label_3b6558;
        case 0x3b655cu: goto label_3b655c;
        case 0x3b6560u: goto label_3b6560;
        case 0x3b6564u: goto label_3b6564;
        case 0x3b6568u: goto label_3b6568;
        case 0x3b656cu: goto label_3b656c;
        case 0x3b6570u: goto label_3b6570;
        case 0x3b6574u: goto label_3b6574;
        case 0x3b6578u: goto label_3b6578;
        case 0x3b657cu: goto label_3b657c;
        case 0x3b6580u: goto label_3b6580;
        case 0x3b6584u: goto label_3b6584;
        case 0x3b6588u: goto label_3b6588;
        case 0x3b658cu: goto label_3b658c;
        case 0x3b6590u: goto label_3b6590;
        case 0x3b6594u: goto label_3b6594;
        case 0x3b6598u: goto label_3b6598;
        case 0x3b659cu: goto label_3b659c;
        case 0x3b65a0u: goto label_3b65a0;
        case 0x3b65a4u: goto label_3b65a4;
        case 0x3b65a8u: goto label_3b65a8;
        case 0x3b65acu: goto label_3b65ac;
        case 0x3b65b0u: goto label_3b65b0;
        case 0x3b65b4u: goto label_3b65b4;
        case 0x3b65b8u: goto label_3b65b8;
        case 0x3b65bcu: goto label_3b65bc;
        case 0x3b65c0u: goto label_3b65c0;
        case 0x3b65c4u: goto label_3b65c4;
        case 0x3b65c8u: goto label_3b65c8;
        case 0x3b65ccu: goto label_3b65cc;
        case 0x3b65d0u: goto label_3b65d0;
        case 0x3b65d4u: goto label_3b65d4;
        case 0x3b65d8u: goto label_3b65d8;
        case 0x3b65dcu: goto label_3b65dc;
        case 0x3b65e0u: goto label_3b65e0;
        case 0x3b65e4u: goto label_3b65e4;
        case 0x3b65e8u: goto label_3b65e8;
        case 0x3b65ecu: goto label_3b65ec;
        case 0x3b65f0u: goto label_3b65f0;
        case 0x3b65f4u: goto label_3b65f4;
        case 0x3b65f8u: goto label_3b65f8;
        case 0x3b65fcu: goto label_3b65fc;
        case 0x3b6600u: goto label_3b6600;
        case 0x3b6604u: goto label_3b6604;
        case 0x3b6608u: goto label_3b6608;
        case 0x3b660cu: goto label_3b660c;
        case 0x3b6610u: goto label_3b6610;
        case 0x3b6614u: goto label_3b6614;
        case 0x3b6618u: goto label_3b6618;
        case 0x3b661cu: goto label_3b661c;
        case 0x3b6620u: goto label_3b6620;
        case 0x3b6624u: goto label_3b6624;
        case 0x3b6628u: goto label_3b6628;
        case 0x3b662cu: goto label_3b662c;
        case 0x3b6630u: goto label_3b6630;
        case 0x3b6634u: goto label_3b6634;
        case 0x3b6638u: goto label_3b6638;
        case 0x3b663cu: goto label_3b663c;
        case 0x3b6640u: goto label_3b6640;
        case 0x3b6644u: goto label_3b6644;
        case 0x3b6648u: goto label_3b6648;
        case 0x3b664cu: goto label_3b664c;
        case 0x3b6650u: goto label_3b6650;
        case 0x3b6654u: goto label_3b6654;
        case 0x3b6658u: goto label_3b6658;
        case 0x3b665cu: goto label_3b665c;
        case 0x3b6660u: goto label_3b6660;
        case 0x3b6664u: goto label_3b6664;
        case 0x3b6668u: goto label_3b6668;
        case 0x3b666cu: goto label_3b666c;
        case 0x3b6670u: goto label_3b6670;
        case 0x3b6674u: goto label_3b6674;
        case 0x3b6678u: goto label_3b6678;
        case 0x3b667cu: goto label_3b667c;
        case 0x3b6680u: goto label_3b6680;
        case 0x3b6684u: goto label_3b6684;
        case 0x3b6688u: goto label_3b6688;
        case 0x3b668cu: goto label_3b668c;
        case 0x3b6690u: goto label_3b6690;
        case 0x3b6694u: goto label_3b6694;
        case 0x3b6698u: goto label_3b6698;
        case 0x3b669cu: goto label_3b669c;
        case 0x3b66a0u: goto label_3b66a0;
        case 0x3b66a4u: goto label_3b66a4;
        case 0x3b66a8u: goto label_3b66a8;
        case 0x3b66acu: goto label_3b66ac;
        case 0x3b66b0u: goto label_3b66b0;
        case 0x3b66b4u: goto label_3b66b4;
        case 0x3b66b8u: goto label_3b66b8;
        case 0x3b66bcu: goto label_3b66bc;
        case 0x3b66c0u: goto label_3b66c0;
        case 0x3b66c4u: goto label_3b66c4;
        case 0x3b66c8u: goto label_3b66c8;
        case 0x3b66ccu: goto label_3b66cc;
        case 0x3b66d0u: goto label_3b66d0;
        case 0x3b66d4u: goto label_3b66d4;
        case 0x3b66d8u: goto label_3b66d8;
        case 0x3b66dcu: goto label_3b66dc;
        case 0x3b66e0u: goto label_3b66e0;
        case 0x3b66e4u: goto label_3b66e4;
        case 0x3b66e8u: goto label_3b66e8;
        case 0x3b66ecu: goto label_3b66ec;
        case 0x3b66f0u: goto label_3b66f0;
        case 0x3b66f4u: goto label_3b66f4;
        case 0x3b66f8u: goto label_3b66f8;
        case 0x3b66fcu: goto label_3b66fc;
        case 0x3b6700u: goto label_3b6700;
        case 0x3b6704u: goto label_3b6704;
        case 0x3b6708u: goto label_3b6708;
        case 0x3b670cu: goto label_3b670c;
        case 0x3b6710u: goto label_3b6710;
        case 0x3b6714u: goto label_3b6714;
        case 0x3b6718u: goto label_3b6718;
        case 0x3b671cu: goto label_3b671c;
        case 0x3b6720u: goto label_3b6720;
        case 0x3b6724u: goto label_3b6724;
        case 0x3b6728u: goto label_3b6728;
        case 0x3b672cu: goto label_3b672c;
        case 0x3b6730u: goto label_3b6730;
        case 0x3b6734u: goto label_3b6734;
        case 0x3b6738u: goto label_3b6738;
        case 0x3b673cu: goto label_3b673c;
        case 0x3b6740u: goto label_3b6740;
        case 0x3b6744u: goto label_3b6744;
        case 0x3b6748u: goto label_3b6748;
        case 0x3b674cu: goto label_3b674c;
        case 0x3b6750u: goto label_3b6750;
        case 0x3b6754u: goto label_3b6754;
        case 0x3b6758u: goto label_3b6758;
        case 0x3b675cu: goto label_3b675c;
        case 0x3b6760u: goto label_3b6760;
        case 0x3b6764u: goto label_3b6764;
        case 0x3b6768u: goto label_3b6768;
        case 0x3b676cu: goto label_3b676c;
        case 0x3b6770u: goto label_3b6770;
        case 0x3b6774u: goto label_3b6774;
        case 0x3b6778u: goto label_3b6778;
        case 0x3b677cu: goto label_3b677c;
        case 0x3b6780u: goto label_3b6780;
        case 0x3b6784u: goto label_3b6784;
        case 0x3b6788u: goto label_3b6788;
        case 0x3b678cu: goto label_3b678c;
        case 0x3b6790u: goto label_3b6790;
        case 0x3b6794u: goto label_3b6794;
        case 0x3b6798u: goto label_3b6798;
        case 0x3b679cu: goto label_3b679c;
        case 0x3b67a0u: goto label_3b67a0;
        case 0x3b67a4u: goto label_3b67a4;
        case 0x3b67a8u: goto label_3b67a8;
        case 0x3b67acu: goto label_3b67ac;
        case 0x3b67b0u: goto label_3b67b0;
        case 0x3b67b4u: goto label_3b67b4;
        case 0x3b67b8u: goto label_3b67b8;
        case 0x3b67bcu: goto label_3b67bc;
        case 0x3b67c0u: goto label_3b67c0;
        case 0x3b67c4u: goto label_3b67c4;
        case 0x3b67c8u: goto label_3b67c8;
        case 0x3b67ccu: goto label_3b67cc;
        case 0x3b67d0u: goto label_3b67d0;
        case 0x3b67d4u: goto label_3b67d4;
        case 0x3b67d8u: goto label_3b67d8;
        case 0x3b67dcu: goto label_3b67dc;
        case 0x3b67e0u: goto label_3b67e0;
        case 0x3b67e4u: goto label_3b67e4;
        case 0x3b67e8u: goto label_3b67e8;
        case 0x3b67ecu: goto label_3b67ec;
        case 0x3b67f0u: goto label_3b67f0;
        case 0x3b67f4u: goto label_3b67f4;
        case 0x3b67f8u: goto label_3b67f8;
        case 0x3b67fcu: goto label_3b67fc;
        case 0x3b6800u: goto label_3b6800;
        case 0x3b6804u: goto label_3b6804;
        case 0x3b6808u: goto label_3b6808;
        case 0x3b680cu: goto label_3b680c;
        case 0x3b6810u: goto label_3b6810;
        case 0x3b6814u: goto label_3b6814;
        case 0x3b6818u: goto label_3b6818;
        case 0x3b681cu: goto label_3b681c;
        case 0x3b6820u: goto label_3b6820;
        case 0x3b6824u: goto label_3b6824;
        case 0x3b6828u: goto label_3b6828;
        case 0x3b682cu: goto label_3b682c;
        case 0x3b6830u: goto label_3b6830;
        case 0x3b6834u: goto label_3b6834;
        case 0x3b6838u: goto label_3b6838;
        case 0x3b683cu: goto label_3b683c;
        case 0x3b6840u: goto label_3b6840;
        case 0x3b6844u: goto label_3b6844;
        case 0x3b6848u: goto label_3b6848;
        case 0x3b684cu: goto label_3b684c;
        case 0x3b6850u: goto label_3b6850;
        case 0x3b6854u: goto label_3b6854;
        case 0x3b6858u: goto label_3b6858;
        case 0x3b685cu: goto label_3b685c;
        case 0x3b6860u: goto label_3b6860;
        case 0x3b6864u: goto label_3b6864;
        case 0x3b6868u: goto label_3b6868;
        case 0x3b686cu: goto label_3b686c;
        case 0x3b6870u: goto label_3b6870;
        case 0x3b6874u: goto label_3b6874;
        case 0x3b6878u: goto label_3b6878;
        case 0x3b687cu: goto label_3b687c;
        case 0x3b6880u: goto label_3b6880;
        case 0x3b6884u: goto label_3b6884;
        case 0x3b6888u: goto label_3b6888;
        case 0x3b688cu: goto label_3b688c;
        case 0x3b6890u: goto label_3b6890;
        case 0x3b6894u: goto label_3b6894;
        case 0x3b6898u: goto label_3b6898;
        case 0x3b689cu: goto label_3b689c;
        case 0x3b68a0u: goto label_3b68a0;
        case 0x3b68a4u: goto label_3b68a4;
        case 0x3b68a8u: goto label_3b68a8;
        case 0x3b68acu: goto label_3b68ac;
        case 0x3b68b0u: goto label_3b68b0;
        case 0x3b68b4u: goto label_3b68b4;
        case 0x3b68b8u: goto label_3b68b8;
        case 0x3b68bcu: goto label_3b68bc;
        case 0x3b68c0u: goto label_3b68c0;
        case 0x3b68c4u: goto label_3b68c4;
        case 0x3b68c8u: goto label_3b68c8;
        case 0x3b68ccu: goto label_3b68cc;
        case 0x3b68d0u: goto label_3b68d0;
        case 0x3b68d4u: goto label_3b68d4;
        case 0x3b68d8u: goto label_3b68d8;
        case 0x3b68dcu: goto label_3b68dc;
        case 0x3b68e0u: goto label_3b68e0;
        case 0x3b68e4u: goto label_3b68e4;
        case 0x3b68e8u: goto label_3b68e8;
        case 0x3b68ecu: goto label_3b68ec;
        case 0x3b68f0u: goto label_3b68f0;
        case 0x3b68f4u: goto label_3b68f4;
        case 0x3b68f8u: goto label_3b68f8;
        case 0x3b68fcu: goto label_3b68fc;
        case 0x3b6900u: goto label_3b6900;
        case 0x3b6904u: goto label_3b6904;
        case 0x3b6908u: goto label_3b6908;
        case 0x3b690cu: goto label_3b690c;
        case 0x3b6910u: goto label_3b6910;
        case 0x3b6914u: goto label_3b6914;
        case 0x3b6918u: goto label_3b6918;
        case 0x3b691cu: goto label_3b691c;
        case 0x3b6920u: goto label_3b6920;
        case 0x3b6924u: goto label_3b6924;
        case 0x3b6928u: goto label_3b6928;
        case 0x3b692cu: goto label_3b692c;
        case 0x3b6930u: goto label_3b6930;
        case 0x3b6934u: goto label_3b6934;
        case 0x3b6938u: goto label_3b6938;
        case 0x3b693cu: goto label_3b693c;
        case 0x3b6940u: goto label_3b6940;
        case 0x3b6944u: goto label_3b6944;
        case 0x3b6948u: goto label_3b6948;
        case 0x3b694cu: goto label_3b694c;
        case 0x3b6950u: goto label_3b6950;
        case 0x3b6954u: goto label_3b6954;
        case 0x3b6958u: goto label_3b6958;
        case 0x3b695cu: goto label_3b695c;
        case 0x3b6960u: goto label_3b6960;
        case 0x3b6964u: goto label_3b6964;
        case 0x3b6968u: goto label_3b6968;
        case 0x3b696cu: goto label_3b696c;
        case 0x3b6970u: goto label_3b6970;
        case 0x3b6974u: goto label_3b6974;
        case 0x3b6978u: goto label_3b6978;
        case 0x3b697cu: goto label_3b697c;
        case 0x3b6980u: goto label_3b6980;
        case 0x3b6984u: goto label_3b6984;
        case 0x3b6988u: goto label_3b6988;
        case 0x3b698cu: goto label_3b698c;
        case 0x3b6990u: goto label_3b6990;
        case 0x3b6994u: goto label_3b6994;
        case 0x3b6998u: goto label_3b6998;
        case 0x3b699cu: goto label_3b699c;
        case 0x3b69a0u: goto label_3b69a0;
        case 0x3b69a4u: goto label_3b69a4;
        case 0x3b69a8u: goto label_3b69a8;
        case 0x3b69acu: goto label_3b69ac;
        case 0x3b69b0u: goto label_3b69b0;
        case 0x3b69b4u: goto label_3b69b4;
        case 0x3b69b8u: goto label_3b69b8;
        case 0x3b69bcu: goto label_3b69bc;
        case 0x3b69c0u: goto label_3b69c0;
        case 0x3b69c4u: goto label_3b69c4;
        case 0x3b69c8u: goto label_3b69c8;
        case 0x3b69ccu: goto label_3b69cc;
        case 0x3b69d0u: goto label_3b69d0;
        case 0x3b69d4u: goto label_3b69d4;
        case 0x3b69d8u: goto label_3b69d8;
        case 0x3b69dcu: goto label_3b69dc;
        case 0x3b69e0u: goto label_3b69e0;
        case 0x3b69e4u: goto label_3b69e4;
        case 0x3b69e8u: goto label_3b69e8;
        case 0x3b69ecu: goto label_3b69ec;
        case 0x3b69f0u: goto label_3b69f0;
        case 0x3b69f4u: goto label_3b69f4;
        case 0x3b69f8u: goto label_3b69f8;
        case 0x3b69fcu: goto label_3b69fc;
        case 0x3b6a00u: goto label_3b6a00;
        case 0x3b6a04u: goto label_3b6a04;
        case 0x3b6a08u: goto label_3b6a08;
        case 0x3b6a0cu: goto label_3b6a0c;
        case 0x3b6a10u: goto label_3b6a10;
        case 0x3b6a14u: goto label_3b6a14;
        case 0x3b6a18u: goto label_3b6a18;
        case 0x3b6a1cu: goto label_3b6a1c;
        case 0x3b6a20u: goto label_3b6a20;
        case 0x3b6a24u: goto label_3b6a24;
        case 0x3b6a28u: goto label_3b6a28;
        case 0x3b6a2cu: goto label_3b6a2c;
        case 0x3b6a30u: goto label_3b6a30;
        case 0x3b6a34u: goto label_3b6a34;
        case 0x3b6a38u: goto label_3b6a38;
        case 0x3b6a3cu: goto label_3b6a3c;
        case 0x3b6a40u: goto label_3b6a40;
        case 0x3b6a44u: goto label_3b6a44;
        case 0x3b6a48u: goto label_3b6a48;
        case 0x3b6a4cu: goto label_3b6a4c;
        case 0x3b6a50u: goto label_3b6a50;
        case 0x3b6a54u: goto label_3b6a54;
        case 0x3b6a58u: goto label_3b6a58;
        case 0x3b6a5cu: goto label_3b6a5c;
        case 0x3b6a60u: goto label_3b6a60;
        case 0x3b6a64u: goto label_3b6a64;
        case 0x3b6a68u: goto label_3b6a68;
        case 0x3b6a6cu: goto label_3b6a6c;
        case 0x3b6a70u: goto label_3b6a70;
        case 0x3b6a74u: goto label_3b6a74;
        case 0x3b6a78u: goto label_3b6a78;
        case 0x3b6a7cu: goto label_3b6a7c;
        case 0x3b6a80u: goto label_3b6a80;
        case 0x3b6a84u: goto label_3b6a84;
        case 0x3b6a88u: goto label_3b6a88;
        case 0x3b6a8cu: goto label_3b6a8c;
        default: break;
    }

    ctx->pc = 0x3b63e0u;

label_3b63e0:
    // 0x3b63e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3b63e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3b63e4:
    // 0x3b63e4: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x3b63e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_3b63e8:
    // 0x3b63e8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3b63e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3b63ec:
    // 0x3b63ec: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3b63ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3b63f0:
    // 0x3b63f0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3b63f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3b63f4:
    // 0x3b63f4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3b63f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b63f8:
    // 0x3b63f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3b63f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3b63fc:
    // 0x3b63fc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3b63fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3b6400:
    // 0x3b6400: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b6400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3b6404:
    // 0x3b6404: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3b6404u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3b6408:
    // 0x3b6408: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b6408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3b640c:
    // 0x3b640c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x3b640cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3b6410:
    // 0x3b6410: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x3b6410u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3b6414:
    // 0x3b6414: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x3b6414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3b6418:
    // 0x3b6418: 0x34456d34  ori         $a1, $v0, 0x6D34
    ctx->pc = 0x3b6418u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)27956);
label_3b641c:
    // 0x3b641c: 0xc10ca68  jal         func_4329A0
label_3b6420:
    if (ctx->pc == 0x3B6420u) {
        ctx->pc = 0x3B6420u;
            // 0x3b6420: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x3B6424u;
        goto label_3b6424;
    }
    ctx->pc = 0x3B641Cu;
    SET_GPR_U32(ctx, 31, 0x3B6424u);
    ctx->pc = 0x3B6420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B641Cu;
            // 0x3b6420: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B6424u; }
        if (ctx->pc != 0x3B6424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B6424u; }
        if (ctx->pc != 0x3B6424u) { return; }
    }
    ctx->pc = 0x3B6424u;
label_3b6424:
    // 0x3b6424: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3b6424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3b6428:
    // 0x3b6428: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3b6428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3b642c:
    // 0x3b642c: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x3b642cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_3b6430:
    // 0x3b6430: 0x24428b10  addiu       $v0, $v0, -0x74F0
    ctx->pc = 0x3b6430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937360));
label_3b6434:
    // 0x3b6434: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x3b6434u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_3b6438:
    // 0x3b6438: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3b6438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b643c:
    // 0x3b643c: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x3b643cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_3b6440:
    // 0x3b6440: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3b6440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3b6444:
    // 0x3b6444: 0xa2900cb3  sb          $s0, 0xCB3($s4)
    ctx->pc = 0x3b6444u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 3251), (uint8_t)GPR_U32(ctx, 16));
label_3b6448:
    // 0x3b6448: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3b6448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3b644c:
    // 0x3b644c: 0xa2840cb4  sb          $a0, 0xCB4($s4)
    ctx->pc = 0x3b644cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 3252), (uint8_t)GPR_U32(ctx, 4));
label_3b6450:
    // 0x3b6450: 0x24630e84  addiu       $v1, $v1, 0xE84
    ctx->pc = 0x3b6450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3716));
label_3b6454:
    // 0x3b6454: 0xae910cb8  sw          $s1, 0xCB8($s4)
    ctx->pc = 0x3b6454u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3256), GPR_U32(ctx, 17));
label_3b6458:
    // 0x3b6458: 0x24428100  addiu       $v0, $v0, -0x7F00
    ctx->pc = 0x3b6458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934784));
label_3b645c:
    // 0x3b645c: 0xa2930cc0  sb          $s3, 0xCC0($s4)
    ctx->pc = 0x3b645cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 3264), (uint8_t)GPR_U32(ctx, 19));
label_3b6460:
    // 0x3b6460: 0x26840cd0  addiu       $a0, $s4, 0xCD0
    ctx->pc = 0x3b6460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 3280));
label_3b6464:
    // 0x3b6464: 0xa2920cc1  sb          $s2, 0xCC1($s4)
    ctx->pc = 0x3b6464u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 3265), (uint8_t)GPR_U32(ctx, 18));
label_3b6468:
    // 0x3b6468: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x3b6468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_3b646c:
    // 0x3b646c: 0x92850cc0  lbu         $a1, 0xCC0($s4)
    ctx->pc = 0x3b646cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 3264)));
label_3b6470:
    // 0x3b6470: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3b6470u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3b6474:
    // 0x3b6474: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3b6474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3b6478:
    // 0x3b6478: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3b6478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3b647c:
    // 0x3b647c: 0xae830cc4  sw          $v1, 0xCC4($s4)
    ctx->pc = 0x3b647cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3268), GPR_U32(ctx, 3));
label_3b6480:
    // 0x3b6480: 0x8e850cb8  lw          $a1, 0xCB8($s4)
    ctx->pc = 0x3b6480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3256)));
label_3b6484:
    // 0x3b6484: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x3b6484u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_3b6488:
    // 0x3b6488: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3b6488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3b648c:
    // 0x3b648c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3b648cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3b6490:
    // 0x3b6490: 0xc04a508  jal         func_129420
label_3b6494:
    if (ctx->pc == 0x3B6494u) {
        ctx->pc = 0x3B6494u;
            // 0x3b6494: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x3B6498u;
        goto label_3b6498;
    }
    ctx->pc = 0x3B6490u;
    SET_GPR_U32(ctx, 31, 0x3B6498u);
    ctx->pc = 0x3B6494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6490u;
            // 0x3b6494: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B6498u; }
        if (ctx->pc != 0x3B6498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B6498u; }
        if (ctx->pc != 0x3B6498u) { return; }
    }
    ctx->pc = 0x3B6498u;
label_3b6498:
    // 0x3b6498: 0x8e830cc4  lw          $v1, 0xCC4($s4)
    ctx->pc = 0x3b6498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3268)));
label_3b649c:
    // 0x3b649c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3b649cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3b64a0:
    // 0x3b64a0: 0x8c630e38  lw          $v1, 0xE38($v1)
    ctx->pc = 0x3b64a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3640)));
label_3b64a4:
    // 0x3b64a4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_3b64a8:
    if (ctx->pc == 0x3B64A8u) {
        ctx->pc = 0x3B64A8u;
            // 0x3b64a8: 0xae830cbc  sw          $v1, 0xCBC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3260), GPR_U32(ctx, 3));
        ctx->pc = 0x3B64ACu;
        goto label_3b64ac;
    }
    ctx->pc = 0x3B64A4u;
    {
        const bool branch_taken_0x3b64a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3B64A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B64A4u;
            // 0x3b64a8: 0xae830cbc  sw          $v1, 0xCBC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3260), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b64a4) {
            ctx->pc = 0x3B64B4u;
            goto label_3b64b4;
        }
    }
    ctx->pc = 0x3B64ACu;
label_3b64ac:
    // 0x3b64ac: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x3b64acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3b64b0:
    // 0x3b64b0: 0xae820cbc  sw          $v0, 0xCBC($s4)
    ctx->pc = 0x3b64b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3260), GPR_U32(ctx, 2));
label_3b64b4:
    // 0x3b64b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3b64b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b64b8:
    // 0x3b64b8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3b64b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3b64bc:
    // 0x3b64bc: 0xa2820cb5  sb          $v0, 0xCB5($s4)
    ctx->pc = 0x3b64bcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 3253), (uint8_t)GPR_U32(ctx, 2));
label_3b64c0:
    // 0x3b64c0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3b64c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3b64c4:
    // 0x3b64c4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3b64c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3b64c8:
    // 0x3b64c8: 0x8c7089e8  lw          $s0, -0x7618($v1)
    ctx->pc = 0x3b64c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937064)));
label_3b64cc:
    // 0x3b64cc: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3b64ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3b64d0:
    // 0x3b64d0: 0x8c430968  lw          $v1, 0x968($v0)
    ctx->pc = 0x3b64d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
label_3b64d4:
    // 0x3b64d4: 0x10640042  beq         $v1, $a0, . + 4 + (0x42 << 2)
label_3b64d8:
    if (ctx->pc == 0x3B64D8u) {
        ctx->pc = 0x3B64DCu;
        goto label_3b64dc;
    }
    ctx->pc = 0x3B64D4u;
    {
        const bool branch_taken_0x3b64d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x3b64d4) {
            ctx->pc = 0x3B65E0u;
            goto label_3b65e0;
        }
    }
    ctx->pc = 0x3B64DCu;
label_3b64dc:
    // 0x3b64dc: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x3b64dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3b64e0:
    // 0x3b64e0: 0x5062002c  beql        $v1, $v0, . + 4 + (0x2C << 2)
label_3b64e4:
    if (ctx->pc == 0x3B64E4u) {
        ctx->pc = 0x3B64E4u;
            // 0x3b64e4: 0xae800cc8  sw          $zero, 0xCC8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3272), GPR_U32(ctx, 0));
        ctx->pc = 0x3B64E8u;
        goto label_3b64e8;
    }
    ctx->pc = 0x3B64E0u;
    {
        const bool branch_taken_0x3b64e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3b64e0) {
            ctx->pc = 0x3B64E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B64E0u;
            // 0x3b64e4: 0xae800cc8  sw          $zero, 0xCC8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B6594u;
            goto label_3b6594;
        }
    }
    ctx->pc = 0x3B64E8u;
label_3b64e8:
    // 0x3b64e8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3b64e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3b64ec:
    // 0x3b64ec: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_3b64f0:
    if (ctx->pc == 0x3B64F0u) {
        ctx->pc = 0x3B64F4u;
        goto label_3b64f4;
    }
    ctx->pc = 0x3B64ECu;
    {
        const bool branch_taken_0x3b64ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3b64ec) {
            ctx->pc = 0x3B64FCu;
            goto label_3b64fc;
        }
    }
    ctx->pc = 0x3B64F4u;
label_3b64f4:
    // 0x3b64f4: 0x10000067  b           . + 4 + (0x67 << 2)
label_3b64f8:
    if (ctx->pc == 0x3B64F8u) {
        ctx->pc = 0x3B64F8u;
            // 0x3b64f8: 0xae800cc8  sw          $zero, 0xCC8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3272), GPR_U32(ctx, 0));
        ctx->pc = 0x3B64FCu;
        goto label_3b64fc;
    }
    ctx->pc = 0x3B64F4u;
    {
        const bool branch_taken_0x3b64f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B64F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B64F4u;
            // 0x3b64f8: 0xae800cc8  sw          $zero, 0xCC8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b64f4) {
            ctx->pc = 0x3B6694u;
            goto label_3b6694;
        }
    }
    ctx->pc = 0x3B64FCu;
label_3b64fc:
    // 0x3b64fc: 0xc040180  jal         func_100600
label_3b6500:
    if (ctx->pc == 0x3B6500u) {
        ctx->pc = 0x3B6504u;
        goto label_3b6504;
    }
    ctx->pc = 0x3B64FCu;
    SET_GPR_U32(ctx, 31, 0x3B6504u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B6504u; }
        if (ctx->pc != 0x3B6504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B6504u; }
        if (ctx->pc != 0x3B6504u) { return; }
    }
    ctx->pc = 0x3B6504u;
label_3b6504:
    // 0x3b6504: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3b6504u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b6508:
    // 0x3b6508: 0x5220000e  beql        $s1, $zero, . + 4 + (0xE << 2)
label_3b650c:
    if (ctx->pc == 0x3B650Cu) {
        ctx->pc = 0x3B650Cu;
            // 0x3b650c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x3B6510u;
        goto label_3b6510;
    }
    ctx->pc = 0x3B6508u;
    {
        const bool branch_taken_0x3b6508 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b6508) {
            ctx->pc = 0x3B650Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6508u;
            // 0x3b650c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B6544u;
            goto label_3b6544;
        }
    }
    ctx->pc = 0x3B6510u;
label_3b6510:
    // 0x3b6510: 0x8e190004  lw          $t9, 0x4($s0)
    ctx->pc = 0x3b6510u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3b6514:
    // 0x3b6514: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3b6514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_3b6518:
    // 0x3b6518: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x3b6518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_3b651c:
    // 0x3b651c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3b651cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3b6520:
    // 0x3b6520: 0x320f809  jalr        $t9
label_3b6524:
    if (ctx->pc == 0x3B6524u) {
        ctx->pc = 0x3B6524u;
            // 0x3b6524: 0x34450da9  ori         $a1, $v0, 0xDA9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3497);
        ctx->pc = 0x3B6528u;
        goto label_3b6528;
    }
    ctx->pc = 0x3B6520u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3B6528u);
        ctx->pc = 0x3B6524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6520u;
            // 0x3b6524: 0x34450da9  ori         $a1, $v0, 0xDA9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3497);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3B6528u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3B6528u; }
            if (ctx->pc != 0x3B6528u) { return; }
        }
        }
    }
    ctx->pc = 0x3B6528u;
label_3b6528:
    // 0x3b6528: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3b6528u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3b652c:
    // 0x3b652c: 0x2463c9a0  addiu       $v1, $v1, -0x3660
    ctx->pc = 0x3b652cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953376));
label_3b6530:
    // 0x3b6530: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3b6530u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3b6534:
    // 0x3b6534: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3b6534u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_3b6538:
    // 0x3b6538: 0xa2200008  sb          $zero, 0x8($s1)
    ctx->pc = 0x3b6538u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 0));
label_3b653c:
    // 0x3b653c: 0xa2200009  sb          $zero, 0x9($s1)
    ctx->pc = 0x3b653cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 9), (uint8_t)GPR_U32(ctx, 0));
label_3b6540:
    // 0x3b6540: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3b6540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3b6544:
    // 0x3b6544: 0xc040180  jal         func_100600
label_3b6548:
    if (ctx->pc == 0x3B6548u) {
        ctx->pc = 0x3B6548u;
            // 0x3b6548: 0xae910cc8  sw          $s1, 0xCC8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3272), GPR_U32(ctx, 17));
        ctx->pc = 0x3B654Cu;
        goto label_3b654c;
    }
    ctx->pc = 0x3B6544u;
    SET_GPR_U32(ctx, 31, 0x3B654Cu);
    ctx->pc = 0x3B6548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6544u;
            // 0x3b6548: 0xae910cc8  sw          $s1, 0xCC8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3272), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B654Cu; }
        if (ctx->pc != 0x3B654Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B654Cu; }
        if (ctx->pc != 0x3B654Cu) { return; }
    }
    ctx->pc = 0x3B654Cu;
label_3b654c:
    // 0x3b654c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3b654cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b6550:
    // 0x3b6550: 0x52200051  beql        $s1, $zero, . + 4 + (0x51 << 2)
label_3b6554:
    if (ctx->pc == 0x3B6554u) {
        ctx->pc = 0x3B6554u;
            // 0x3b6554: 0xae910ccc  sw          $s1, 0xCCC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3276), GPR_U32(ctx, 17));
        ctx->pc = 0x3B6558u;
        goto label_3b6558;
    }
    ctx->pc = 0x3B6550u;
    {
        const bool branch_taken_0x3b6550 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b6550) {
            ctx->pc = 0x3B6554u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6550u;
            // 0x3b6554: 0xae910ccc  sw          $s1, 0xCCC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3276), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B6698u;
            goto label_3b6698;
        }
    }
    ctx->pc = 0x3B6558u;
label_3b6558:
    // 0x3b6558: 0x8e190004  lw          $t9, 0x4($s0)
    ctx->pc = 0x3b6558u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3b655c:
    // 0x3b655c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x3b655cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_3b6560:
    // 0x3b6560: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x3b6560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_3b6564:
    // 0x3b6564: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3b6564u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3b6568:
    // 0x3b6568: 0x320f809  jalr        $t9
label_3b656c:
    if (ctx->pc == 0x3B656Cu) {
        ctx->pc = 0x3B656Cu;
            // 0x3b656c: 0x34450da9  ori         $a1, $v0, 0xDA9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3497);
        ctx->pc = 0x3B6570u;
        goto label_3b6570;
    }
    ctx->pc = 0x3B6568u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3B6570u);
        ctx->pc = 0x3B656Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6568u;
            // 0x3b656c: 0x34450da9  ori         $a1, $v0, 0xDA9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3497);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3B6570u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3B6570u; }
            if (ctx->pc != 0x3B6570u) { return; }
        }
        }
    }
    ctx->pc = 0x3B6570u;
label_3b6570:
    // 0x3b6570: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3b6570u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3b6574:
    // 0x3b6574: 0x2463c9a0  addiu       $v1, $v1, -0x3660
    ctx->pc = 0x3b6574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953376));
label_3b6578:
    // 0x3b6578: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3b6578u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3b657c:
    // 0x3b657c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3b657cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_3b6580:
    // 0x3b6580: 0xa2200008  sb          $zero, 0x8($s1)
    ctx->pc = 0x3b6580u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 0));
label_3b6584:
    // 0x3b6584: 0xa2200009  sb          $zero, 0x9($s1)
    ctx->pc = 0x3b6584u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 9), (uint8_t)GPR_U32(ctx, 0));
label_3b6588:
    // 0x3b6588: 0xae910ccc  sw          $s1, 0xCCC($s4)
    ctx->pc = 0x3b6588u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3276), GPR_U32(ctx, 17));
label_3b658c:
    // 0x3b658c: 0x10000042  b           . + 4 + (0x42 << 2)
label_3b6590:
    if (ctx->pc == 0x3B6590u) {
        ctx->pc = 0x3B6594u;
        goto label_3b6594;
    }
    ctx->pc = 0x3B658Cu;
    {
        const bool branch_taken_0x3b658c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b658c) {
            ctx->pc = 0x3B6698u;
            goto label_3b6698;
        }
    }
    ctx->pc = 0x3B6594u;
label_3b6594:
    // 0x3b6594: 0xc040180  jal         func_100600
label_3b6598:
    if (ctx->pc == 0x3B6598u) {
        ctx->pc = 0x3B659Cu;
        goto label_3b659c;
    }
    ctx->pc = 0x3B6594u;
    SET_GPR_U32(ctx, 31, 0x3B659Cu);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B659Cu; }
        if (ctx->pc != 0x3B659Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B659Cu; }
        if (ctx->pc != 0x3B659Cu) { return; }
    }
    ctx->pc = 0x3B659Cu;
label_3b659c:
    // 0x3b659c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3b659cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b65a0:
    // 0x3b65a0: 0x5220003d  beql        $s1, $zero, . + 4 + (0x3D << 2)
label_3b65a4:
    if (ctx->pc == 0x3B65A4u) {
        ctx->pc = 0x3B65A4u;
            // 0x3b65a4: 0xae910ccc  sw          $s1, 0xCCC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3276), GPR_U32(ctx, 17));
        ctx->pc = 0x3B65A8u;
        goto label_3b65a8;
    }
    ctx->pc = 0x3B65A0u;
    {
        const bool branch_taken_0x3b65a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b65a0) {
            ctx->pc = 0x3B65A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B65A0u;
            // 0x3b65a4: 0xae910ccc  sw          $s1, 0xCCC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3276), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B6698u;
            goto label_3b6698;
        }
    }
    ctx->pc = 0x3B65A8u;
label_3b65a8:
    // 0x3b65a8: 0x8e190004  lw          $t9, 0x4($s0)
    ctx->pc = 0x3b65a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3b65ac:
    // 0x3b65ac: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x3b65acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_3b65b0:
    // 0x3b65b0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3b65b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3b65b4:
    // 0x3b65b4: 0x320f809  jalr        $t9
label_3b65b8:
    if (ctx->pc == 0x3B65B8u) {
        ctx->pc = 0x3B65B8u;
            // 0x3b65b8: 0x240512a9  addiu       $a1, $zero, 0x12A9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4777));
        ctx->pc = 0x3B65BCu;
        goto label_3b65bc;
    }
    ctx->pc = 0x3B65B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3B65BCu);
        ctx->pc = 0x3B65B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B65B4u;
            // 0x3b65b8: 0x240512a9  addiu       $a1, $zero, 0x12A9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4777));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3B65BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3B65BCu; }
            if (ctx->pc != 0x3B65BCu) { return; }
        }
        }
    }
    ctx->pc = 0x3B65BCu;
label_3b65bc:
    // 0x3b65bc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3b65bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3b65c0:
    // 0x3b65c0: 0x2463c9a0  addiu       $v1, $v1, -0x3660
    ctx->pc = 0x3b65c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953376));
label_3b65c4:
    // 0x3b65c4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3b65c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3b65c8:
    // 0x3b65c8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3b65c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_3b65cc:
    // 0x3b65cc: 0xa2200008  sb          $zero, 0x8($s1)
    ctx->pc = 0x3b65ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 0));
label_3b65d0:
    // 0x3b65d0: 0xa2200009  sb          $zero, 0x9($s1)
    ctx->pc = 0x3b65d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 9), (uint8_t)GPR_U32(ctx, 0));
label_3b65d4:
    // 0x3b65d4: 0xae910ccc  sw          $s1, 0xCCC($s4)
    ctx->pc = 0x3b65d4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3276), GPR_U32(ctx, 17));
label_3b65d8:
    // 0x3b65d8: 0x1000002f  b           . + 4 + (0x2F << 2)
label_3b65dc:
    if (ctx->pc == 0x3B65DCu) {
        ctx->pc = 0x3B65E0u;
        goto label_3b65e0;
    }
    ctx->pc = 0x3B65D8u;
    {
        const bool branch_taken_0x3b65d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b65d8) {
            ctx->pc = 0x3B6698u;
            goto label_3b6698;
        }
    }
    ctx->pc = 0x3B65E0u;
label_3b65e0:
    // 0x3b65e0: 0xc040180  jal         func_100600
label_3b65e4:
    if (ctx->pc == 0x3B65E4u) {
        ctx->pc = 0x3B65E8u;
        goto label_3b65e8;
    }
    ctx->pc = 0x3B65E0u;
    SET_GPR_U32(ctx, 31, 0x3B65E8u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B65E8u; }
        if (ctx->pc != 0x3B65E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B65E8u; }
        if (ctx->pc != 0x3B65E8u) { return; }
    }
    ctx->pc = 0x3B65E8u;
label_3b65e8:
    // 0x3b65e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3b65e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b65ec:
    // 0x3b65ec: 0x5220000e  beql        $s1, $zero, . + 4 + (0xE << 2)
label_3b65f0:
    if (ctx->pc == 0x3B65F0u) {
        ctx->pc = 0x3B65F0u;
            // 0x3b65f0: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x3B65F4u;
        goto label_3b65f4;
    }
    ctx->pc = 0x3B65ECu;
    {
        const bool branch_taken_0x3b65ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b65ec) {
            ctx->pc = 0x3B65F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B65ECu;
            // 0x3b65f0: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B6628u;
            goto label_3b6628;
        }
    }
    ctx->pc = 0x3B65F4u;
label_3b65f4:
    // 0x3b65f4: 0x8e190004  lw          $t9, 0x4($s0)
    ctx->pc = 0x3b65f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3b65f8:
    // 0x3b65f8: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x3b65f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_3b65fc:
    // 0x3b65fc: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x3b65fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_3b6600:
    // 0x3b6600: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3b6600u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3b6604:
    // 0x3b6604: 0x320f809  jalr        $t9
label_3b6608:
    if (ctx->pc == 0x3B6608u) {
        ctx->pc = 0x3B6608u;
            // 0x3b6608: 0x344515a9  ori         $a1, $v0, 0x15A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5545);
        ctx->pc = 0x3B660Cu;
        goto label_3b660c;
    }
    ctx->pc = 0x3B6604u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3B660Cu);
        ctx->pc = 0x3B6608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6604u;
            // 0x3b6608: 0x344515a9  ori         $a1, $v0, 0x15A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5545);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3B660Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3B660Cu; }
            if (ctx->pc != 0x3B660Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3B660Cu;
label_3b660c:
    // 0x3b660c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3b660cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3b6610:
    // 0x3b6610: 0x2463c9a0  addiu       $v1, $v1, -0x3660
    ctx->pc = 0x3b6610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953376));
label_3b6614:
    // 0x3b6614: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3b6614u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3b6618:
    // 0x3b6618: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3b6618u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_3b661c:
    // 0x3b661c: 0xa2200008  sb          $zero, 0x8($s1)
    ctx->pc = 0x3b661cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 0));
label_3b6620:
    // 0x3b6620: 0xa2200009  sb          $zero, 0x9($s1)
    ctx->pc = 0x3b6620u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 9), (uint8_t)GPR_U32(ctx, 0));
label_3b6624:
    // 0x3b6624: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x3b6624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3b6628:
    // 0x3b6628: 0xc040180  jal         func_100600
label_3b662c:
    if (ctx->pc == 0x3B662Cu) {
        ctx->pc = 0x3B662Cu;
            // 0x3b662c: 0xae910cc8  sw          $s1, 0xCC8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3272), GPR_U32(ctx, 17));
        ctx->pc = 0x3B6630u;
        goto label_3b6630;
    }
    ctx->pc = 0x3B6628u;
    SET_GPR_U32(ctx, 31, 0x3B6630u);
    ctx->pc = 0x3B662Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6628u;
            // 0x3b662c: 0xae910cc8  sw          $s1, 0xCC8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3272), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B6630u; }
        if (ctx->pc != 0x3B6630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B6630u; }
        if (ctx->pc != 0x3B6630u) { return; }
    }
    ctx->pc = 0x3B6630u;
label_3b6630:
    // 0x3b6630: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3b6630u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b6634:
    // 0x3b6634: 0x5220000e  beql        $s1, $zero, . + 4 + (0xE << 2)
label_3b6638:
    if (ctx->pc == 0x3B6638u) {
        ctx->pc = 0x3B6638u;
            // 0x3b6638: 0xae910ccc  sw          $s1, 0xCCC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3276), GPR_U32(ctx, 17));
        ctx->pc = 0x3B663Cu;
        goto label_3b663c;
    }
    ctx->pc = 0x3B6634u;
    {
        const bool branch_taken_0x3b6634 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b6634) {
            ctx->pc = 0x3B6638u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6634u;
            // 0x3b6638: 0xae910ccc  sw          $s1, 0xCCC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3276), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B6670u;
            goto label_3b6670;
        }
    }
    ctx->pc = 0x3B663Cu;
label_3b663c:
    // 0x3b663c: 0x8e190004  lw          $t9, 0x4($s0)
    ctx->pc = 0x3b663cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3b6640:
    // 0x3b6640: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x3b6640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_3b6644:
    // 0x3b6644: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x3b6644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_3b6648:
    // 0x3b6648: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3b6648u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3b664c:
    // 0x3b664c: 0x320f809  jalr        $t9
label_3b6650:
    if (ctx->pc == 0x3B6650u) {
        ctx->pc = 0x3B6650u;
            // 0x3b6650: 0x344515a9  ori         $a1, $v0, 0x15A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5545);
        ctx->pc = 0x3B6654u;
        goto label_3b6654;
    }
    ctx->pc = 0x3B664Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3B6654u);
        ctx->pc = 0x3B6650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B664Cu;
            // 0x3b6650: 0x344515a9  ori         $a1, $v0, 0x15A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5545);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3B6654u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3B6654u; }
            if (ctx->pc != 0x3B6654u) { return; }
        }
        }
    }
    ctx->pc = 0x3B6654u;
label_3b6654:
    // 0x3b6654: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3b6654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3b6658:
    // 0x3b6658: 0x2463c9a0  addiu       $v1, $v1, -0x3660
    ctx->pc = 0x3b6658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953376));
label_3b665c:
    // 0x3b665c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3b665cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3b6660:
    // 0x3b6660: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3b6660u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_3b6664:
    // 0x3b6664: 0xa2200008  sb          $zero, 0x8($s1)
    ctx->pc = 0x3b6664u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 0));
label_3b6668:
    // 0x3b6668: 0xa2200009  sb          $zero, 0x9($s1)
    ctx->pc = 0x3b6668u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 9), (uint8_t)GPR_U32(ctx, 0));
label_3b666c:
    // 0x3b666c: 0xae910ccc  sw          $s1, 0xCCC($s4)
    ctx->pc = 0x3b666cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3276), GPR_U32(ctx, 17));
label_3b6670:
    // 0x3b6670: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3b6670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3b6674:
    // 0x3b6674: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3b6674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3b6678:
    // 0x3b6678: 0x8c420788  lw          $v0, 0x788($v0)
    ctx->pc = 0x3b6678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1928)));
label_3b667c:
    // 0x3b667c: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x3b667cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_3b6680:
    // 0x3b6680: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3b6684:
    if (ctx->pc == 0x3B6684u) {
        ctx->pc = 0x3B6688u;
        goto label_3b6688;
    }
    ctx->pc = 0x3B6680u;
    {
        const bool branch_taken_0x3b6680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b6680) {
            ctx->pc = 0x3B6698u;
            goto label_3b6698;
        }
    }
    ctx->pc = 0x3B6688u;
label_3b6688:
    // 0x3b6688: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3b6688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3b668c:
    // 0x3b668c: 0x10000002  b           . + 4 + (0x2 << 2)
label_3b6690:
    if (ctx->pc == 0x3B6690u) {
        ctx->pc = 0x3B6690u;
            // 0x3b6690: 0xa2820cb5  sb          $v0, 0xCB5($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 3253), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3B6694u;
        goto label_3b6694;
    }
    ctx->pc = 0x3B668Cu;
    {
        const bool branch_taken_0x3b668c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B668Cu;
            // 0x3b6690: 0xa2820cb5  sb          $v0, 0xCB5($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 3253), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b668c) {
            ctx->pc = 0x3B6698u;
            goto label_3b6698;
        }
    }
    ctx->pc = 0x3B6694u;
label_3b6694:
    // 0x3b6694: 0xae800ccc  sw          $zero, 0xCCC($s4)
    ctx->pc = 0x3b6694u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3276), GPR_U32(ctx, 0));
label_3b6698:
    // 0x3b6698: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3b6698u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b669c:
    // 0x3b669c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3b669cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3b66a0:
    // 0x3b66a0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3b66a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3b66a4:
    // 0x3b66a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3b66a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3b66a8:
    // 0x3b66a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3b66a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b66ac:
    // 0x3b66ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b66acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b66b0:
    // 0x3b66b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b66b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3b66b4:
    // 0x3b66b4: 0x3e00008  jr          $ra
label_3b66b8:
    if (ctx->pc == 0x3B66B8u) {
        ctx->pc = 0x3B66B8u;
            // 0x3b66b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3B66BCu;
        goto label_3b66bc;
    }
    ctx->pc = 0x3B66B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B66B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B66B4u;
            // 0x3b66b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B66BCu;
label_3b66bc:
    // 0x3b66bc: 0x0  nop
    ctx->pc = 0x3b66bcu;
    // NOP
label_3b66c0:
    // 0x3b66c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b66c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3b66c4:
    // 0x3b66c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3b66c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3b66c8:
    // 0x3b66c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b66c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3b66cc:
    // 0x3b66cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b66ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3b66d0:
    // 0x3b66d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b66d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b66d4:
    // 0x3b66d4: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_3b66d8:
    if (ctx->pc == 0x3B66D8u) {
        ctx->pc = 0x3B66D8u;
            // 0x3b66d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B66DCu;
        goto label_3b66dc;
    }
    ctx->pc = 0x3B66D4u;
    {
        const bool branch_taken_0x3b66d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B66D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B66D4u;
            // 0x3b66d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b66d4) {
            ctx->pc = 0x3B6740u;
            goto label_3b6740;
        }
    }
    ctx->pc = 0x3B66DCu;
label_3b66dc:
    // 0x3b66dc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3b66dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3b66e0:
    // 0x3b66e0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3b66e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3b66e4:
    // 0x3b66e4: 0x24638b40  addiu       $v1, $v1, -0x74C0
    ctx->pc = 0x3b66e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937408));
label_3b66e8:
    // 0x3b66e8: 0x24428b78  addiu       $v0, $v0, -0x7488
    ctx->pc = 0x3b66e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937464));
label_3b66ec:
    // 0x3b66ec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3b66ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3b66f0:
    // 0x3b66f0: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_3b66f4:
    if (ctx->pc == 0x3B66F4u) {
        ctx->pc = 0x3B66F4u;
            // 0x3b66f4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x3B66F8u;
        goto label_3b66f8;
    }
    ctx->pc = 0x3B66F0u;
    {
        const bool branch_taken_0x3b66f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B66F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B66F0u;
            // 0x3b66f4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b66f0) {
            ctx->pc = 0x3B6728u;
            goto label_3b6728;
        }
    }
    ctx->pc = 0x3B66F8u;
label_3b66f8:
    // 0x3b66f8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3b66f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3b66fc:
    // 0x3b66fc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3b66fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3b6700:
    // 0x3b6700: 0x246307f0  addiu       $v1, $v1, 0x7F0
    ctx->pc = 0x3b6700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2032));
label_3b6704:
    // 0x3b6704: 0x24420828  addiu       $v0, $v0, 0x828
    ctx->pc = 0x3b6704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2088));
label_3b6708:
    // 0x3b6708: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3b6708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3b670c:
    // 0x3b670c: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x3b670cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_3b6710:
    // 0x3b6710: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x3b6710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_3b6714:
    // 0x3b6714: 0xc0aed1c  jal         func_2BB470
label_3b6718:
    if (ctx->pc == 0x3B6718u) {
        ctx->pc = 0x3B6718u;
            // 0x3b6718: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B671Cu;
        goto label_3b671c;
    }
    ctx->pc = 0x3B6714u;
    SET_GPR_U32(ctx, 31, 0x3B671Cu);
    ctx->pc = 0x3B6718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6714u;
            // 0x3b6718: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB470u;
    if (runtime->hasFunction(0x2BB470u)) {
        auto targetFn = runtime->lookupFunction(0x2BB470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B671Cu; }
        if (ctx->pc != 0x3B671Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB470_0x2bb470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B671Cu; }
        if (ctx->pc != 0x3B671Cu) { return; }
    }
    ctx->pc = 0x3B671Cu;
label_3b671c:
    // 0x3b671c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b671cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b6720:
    // 0x3b6720: 0xc0b207c  jal         func_2C81F0
label_3b6724:
    if (ctx->pc == 0x3B6724u) {
        ctx->pc = 0x3B6724u;
            // 0x3b6724: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B6728u;
        goto label_3b6728;
    }
    ctx->pc = 0x3B6720u;
    SET_GPR_U32(ctx, 31, 0x3B6728u);
    ctx->pc = 0x3B6724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6720u;
            // 0x3b6724: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C81F0u;
    if (runtime->hasFunction(0x2C81F0u)) {
        auto targetFn = runtime->lookupFunction(0x2C81F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B6728u; }
        if (ctx->pc != 0x3B6728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C81F0_0x2c81f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B6728u; }
        if (ctx->pc != 0x3B6728u) { return; }
    }
    ctx->pc = 0x3B6728u;
label_3b6728:
    // 0x3b6728: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x3b6728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_3b672c:
    // 0x3b672c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3b672cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3b6730:
    // 0x3b6730: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3b6734:
    if (ctx->pc == 0x3B6734u) {
        ctx->pc = 0x3B6734u;
            // 0x3b6734: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B6738u;
        goto label_3b6738;
    }
    ctx->pc = 0x3B6730u;
    {
        const bool branch_taken_0x3b6730 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3b6730) {
            ctx->pc = 0x3B6734u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6730u;
            // 0x3b6734: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B6744u;
            goto label_3b6744;
        }
    }
    ctx->pc = 0x3B6738u;
label_3b6738:
    // 0x3b6738: 0xc0400a8  jal         func_1002A0
label_3b673c:
    if (ctx->pc == 0x3B673Cu) {
        ctx->pc = 0x3B673Cu;
            // 0x3b673c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B6740u;
        goto label_3b6740;
    }
    ctx->pc = 0x3B6738u;
    SET_GPR_U32(ctx, 31, 0x3B6740u);
    ctx->pc = 0x3B673Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6738u;
            // 0x3b673c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B6740u; }
        if (ctx->pc != 0x3B6740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B6740u; }
        if (ctx->pc != 0x3B6740u) { return; }
    }
    ctx->pc = 0x3B6740u;
label_3b6740:
    // 0x3b6740: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b6740u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b6744:
    // 0x3b6744: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3b6744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3b6748:
    // 0x3b6748: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b6748u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b674c:
    // 0x3b674c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b674cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3b6750:
    // 0x3b6750: 0x3e00008  jr          $ra
label_3b6754:
    if (ctx->pc == 0x3B6754u) {
        ctx->pc = 0x3B6754u;
            // 0x3b6754: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3B6758u;
        goto label_3b6758;
    }
    ctx->pc = 0x3B6750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B6754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6750u;
            // 0x3b6754: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B6758u;
label_3b6758:
    // 0x3b6758: 0x0  nop
    ctx->pc = 0x3b6758u;
    // NOP
label_3b675c:
    // 0x3b675c: 0x0  nop
    ctx->pc = 0x3b675cu;
    // NOP
label_3b6760:
    // 0x3b6760: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x3b6760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
label_3b6764:
    // 0x3b6764: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3b6764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3b6768:
    // 0x3b6768: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x3b6768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_3b676c:
    // 0x3b676c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x3b676cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_3b6770:
    // 0x3b6770: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x3b6770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_3b6774:
    // 0x3b6774: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3b6774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_3b6778:
    // 0x3b6778: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3b6778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3b677c:
    // 0x3b677c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3b677cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3b6780:
    // 0x3b6780: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3b6780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3b6784:
    // 0x3b6784: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3b6784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3b6788:
    // 0x3b6788: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3b6788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3b678c:
    // 0x3b678c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3b678cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3b6790:
    // 0x3b6790: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3b6790u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3b6794:
    // 0x3b6794: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x3b6794u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3b6798:
    // 0x3b6798: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_3b679c:
    if (ctx->pc == 0x3B679Cu) {
        ctx->pc = 0x3B679Cu;
            // 0x3b679c: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B67A0u;
        goto label_3b67a0;
    }
    ctx->pc = 0x3B6798u;
    {
        const bool branch_taken_0x3b6798 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3B679Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6798u;
            // 0x3b679c: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6798) {
            ctx->pc = 0x3B67E8u;
            goto label_3b67e8;
        }
    }
    ctx->pc = 0x3B67A0u;
label_3b67a0:
    // 0x3b67a0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3b67a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3b67a4:
    // 0x3b67a4: 0x50a300ab  beql        $a1, $v1, . + 4 + (0xAB << 2)
label_3b67a8:
    if (ctx->pc == 0x3B67A8u) {
        ctx->pc = 0x3B67A8u;
            // 0x3b67a8: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x3B67ACu;
        goto label_3b67ac;
    }
    ctx->pc = 0x3B67A4u;
    {
        const bool branch_taken_0x3b67a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b67a4) {
            ctx->pc = 0x3B67A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B67A4u;
            // 0x3b67a8: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B6A54u;
            goto label_3b6a54;
        }
    }
    ctx->pc = 0x3B67ACu;
label_3b67ac:
    // 0x3b67ac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3b67acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3b67b0:
    // 0x3b67b0: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_3b67b4:
    if (ctx->pc == 0x3B67B4u) {
        ctx->pc = 0x3B67B8u;
        goto label_3b67b8;
    }
    ctx->pc = 0x3B67B0u;
    {
        const bool branch_taken_0x3b67b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b67b0) {
            ctx->pc = 0x3B67C0u;
            goto label_3b67c0;
        }
    }
    ctx->pc = 0x3B67B8u;
label_3b67b8:
    // 0x3b67b8: 0x100000a5  b           . + 4 + (0xA5 << 2)
label_3b67bc:
    if (ctx->pc == 0x3B67BCu) {
        ctx->pc = 0x3B67C0u;
        goto label_3b67c0;
    }
    ctx->pc = 0x3B67B8u;
    {
        const bool branch_taken_0x3b67b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b67b8) {
            ctx->pc = 0x3B6A50u;
            goto label_3b6a50;
        }
    }
    ctx->pc = 0x3B67C0u;
label_3b67c0:
    // 0x3b67c0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3b67c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3b67c4:
    // 0x3b67c4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3b67c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3b67c8:
    // 0x3b67c8: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3b67c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3b67cc:
    // 0x3b67cc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x3b67ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_3b67d0:
    // 0x3b67d0: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x3b67d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_3b67d4:
    // 0x3b67d4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3b67d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3b67d8:
    // 0x3b67d8: 0x320f809  jalr        $t9
label_3b67dc:
    if (ctx->pc == 0x3B67DCu) {
        ctx->pc = 0x3B67DCu;
            // 0x3b67dc: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x3B67E0u;
        goto label_3b67e0;
    }
    ctx->pc = 0x3B67D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3B67E0u);
        ctx->pc = 0x3B67DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B67D8u;
            // 0x3b67dc: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3B67E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3B67E0u; }
            if (ctx->pc != 0x3B67E0u) { return; }
        }
        }
    }
    ctx->pc = 0x3B67E0u;
label_3b67e0:
    // 0x3b67e0: 0x1000009b  b           . + 4 + (0x9B << 2)
label_3b67e4:
    if (ctx->pc == 0x3B67E4u) {
        ctx->pc = 0x3B67E8u;
        goto label_3b67e8;
    }
    ctx->pc = 0x3B67E0u;
    {
        const bool branch_taken_0x3b67e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b67e0) {
            ctx->pc = 0x3B6A50u;
            goto label_3b6a50;
        }
    }
    ctx->pc = 0x3B67E8u;
label_3b67e8:
    // 0x3b67e8: 0x8ea30070  lw          $v1, 0x70($s5)
    ctx->pc = 0x3b67e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_3b67ec:
    // 0x3b67ec: 0x10600098  beqz        $v1, . + 4 + (0x98 << 2)
label_3b67f0:
    if (ctx->pc == 0x3B67F0u) {
        ctx->pc = 0x3B67F0u;
            // 0x3b67f0: 0x7fa300e0  sq          $v1, 0xE0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 3));
        ctx->pc = 0x3B67F4u;
        goto label_3b67f4;
    }
    ctx->pc = 0x3B67ECu;
    {
        const bool branch_taken_0x3b67ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B67F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B67ECu;
            // 0x3b67f0: 0x7fa300e0  sq          $v1, 0xE0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b67ec) {
            ctx->pc = 0x3B6A50u;
            goto label_3b6a50;
        }
    }
    ctx->pc = 0x3B67F4u;
label_3b67f4:
    // 0x3b67f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3b67f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3b67f8:
    // 0x3b67f8: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x3b67f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_3b67fc:
    // 0x3b67fc: 0x8c42e378  lw          $v0, -0x1C88($v0)
    ctx->pc = 0x3b67fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_3b6800:
    // 0x3b6800: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3b6800u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3b6804:
    // 0x3b6804: 0x8c66d130  lw          $a2, -0x2ED0($v1)
    ctx->pc = 0x3b6804u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_3b6808:
    // 0x3b6808: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x3b6808u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b680c:
    // 0x3b680c: 0x8ebe0088  lw          $fp, 0x88($s5)
    ctx->pc = 0x3b680cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
label_3b6810:
    // 0x3b6810: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3b6810u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b6814:
    // 0x3b6814: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x3b6814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_3b6818:
    // 0x3b6818: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3b6818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3b681c:
    // 0x3b681c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3b681cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3b6820:
    // 0x3b6820: 0x8c45d120  lw          $a1, -0x2EE0($v0)
    ctx->pc = 0x3b6820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_3b6824:
    // 0x3b6824: 0x26a20090  addiu       $v0, $s5, 0x90
    ctx->pc = 0x3b6824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
label_3b6828:
    // 0x3b6828: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x3b6828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_3b682c:
    // 0x3b682c: 0x8c62e370  lw          $v0, -0x1C90($v1)
    ctx->pc = 0x3b682cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959984)));
label_3b6830:
    // 0x3b6830: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x3b6830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_3b6834:
    // 0x3b6834: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3b6834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3b6838:
    // 0x3b6838: 0x8cc20130  lw          $v0, 0x130($a2)
    ctx->pc = 0x3b6838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 304)));
label_3b683c:
    // 0x3b683c: 0x8ca60010  lw          $a2, 0x10($a1)
    ctx->pc = 0x3b683cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_3b6840:
    // 0x3b6840: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x3b6840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_3b6844:
    // 0x3b6844: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3b6844u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3b6848:
    // 0x3b6848: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x3b6848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_3b684c:
    // 0x3b684c: 0x8ea50084  lw          $a1, 0x84($s5)
    ctx->pc = 0x3b684cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
label_3b6850:
    // 0x3b6850: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3b6850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3b6854:
    // 0x3b6854: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x3b6854u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3b6858:
    // 0x3b6858: 0xc45481d0  lwc1        $f20, -0x7E30($v0)
    ctx->pc = 0x3b6858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294934992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3b685c:
    // 0x3b685c: 0xaea50090  sw          $a1, 0x90($s5)
    ctx->pc = 0x3b685cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 144), GPR_U32(ctx, 5));
label_3b6860:
    // 0x3b6860: 0x24c20010  addiu       $v0, $a2, 0x10
    ctx->pc = 0x3b6860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_3b6864:
    // 0x3b6864: 0xac80e3d8  sw          $zero, -0x1C28($a0)
    ctx->pc = 0x3b6864u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294960088), GPR_U32(ctx, 0));
label_3b6868:
    // 0x3b6868: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x3b6868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_3b686c:
    // 0x3b686c: 0xac60e3c0  sw          $zero, -0x1C40($v1)
    ctx->pc = 0x3b686cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 0));
label_3b6870:
    // 0x3b6870: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x3b6870u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3b6874:
    // 0x3b6874: 0xafa201ac  sw          $v0, 0x1AC($sp)
    ctx->pc = 0x3b6874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 2));
label_3b6878:
    // 0x3b6878: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x3b6878u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3b687c:
    // 0x3b687c: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x3b687cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
label_3b6880:
    // 0x3b6880: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x3b6880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_3b6884:
    // 0x3b6884: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x3b6884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_3b6888:
    // 0x3b6888: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x3b6888u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3b688c:
    // 0x3b688c: 0xc0d1c14  jal         func_347050
label_3b6890:
    if (ctx->pc == 0x3B6890u) {
        ctx->pc = 0x3B6890u;
            // 0x3b6890: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B6894u;
        goto label_3b6894;
    }
    ctx->pc = 0x3B688Cu;
    SET_GPR_U32(ctx, 31, 0x3B6894u);
    ctx->pc = 0x3B6890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B688Cu;
            // 0x3b6890: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B6894u; }
        if (ctx->pc != 0x3B6894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B6894u; }
        if (ctx->pc != 0x3B6894u) { return; }
    }
    ctx->pc = 0x3B6894u;
label_3b6894:
    // 0x3b6894: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3b6894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b6898:
    // 0x3b6898: 0xc04f278  jal         func_13C9E0
label_3b689c:
    if (ctx->pc == 0x3B689Cu) {
        ctx->pc = 0x3B689Cu;
            // 0x3b689c: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x3B68A0u;
        goto label_3b68a0;
    }
    ctx->pc = 0x3B6898u;
    SET_GPR_U32(ctx, 31, 0x3B68A0u);
    ctx->pc = 0x3B689Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6898u;
            // 0x3b689c: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B68A0u; }
        if (ctx->pc != 0x3B68A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B68A0u; }
        if (ctx->pc != 0x3B68A0u) { return; }
    }
    ctx->pc = 0x3B68A0u;
label_3b68a0:
    // 0x3b68a0: 0xc0d1dc8  jal         func_347720
label_3b68a4:
    if (ctx->pc == 0x3B68A4u) {
        ctx->pc = 0x3B68A4u;
            // 0x3b68a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B68A8u;
        goto label_3b68a8;
    }
    ctx->pc = 0x3B68A0u;
    SET_GPR_U32(ctx, 31, 0x3B68A8u);
    ctx->pc = 0x3B68A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B68A0u;
            // 0x3b68a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347720u;
    if (runtime->hasFunction(0x347720u)) {
        auto targetFn = runtime->lookupFunction(0x347720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B68A8u; }
        if (ctx->pc != 0x3B68A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347720_0x347720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B68A8u; }
        if (ctx->pc != 0x3B68A8u) { return; }
    }
    ctx->pc = 0x3B68A8u;
label_3b68a8:
    // 0x3b68a8: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x3b68a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3b68ac:
    // 0x3b68ac: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x3b68acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_3b68b0:
    // 0x3b68b0: 0xc44d0004  lwc1        $f13, 0x4($v0)
    ctx->pc = 0x3b68b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3b68b4:
    // 0x3b68b4: 0xc44e0008  lwc1        $f14, 0x8($v0)
    ctx->pc = 0x3b68b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_3b68b8:
    // 0x3b68b8: 0xc04ce50  jal         func_133940
label_3b68bc:
    if (ctx->pc == 0x3B68BCu) {
        ctx->pc = 0x3B68BCu;
            // 0x3b68bc: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x3B68C0u;
        goto label_3b68c0;
    }
    ctx->pc = 0x3B68B8u;
    SET_GPR_U32(ctx, 31, 0x3B68C0u);
    ctx->pc = 0x3B68BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B68B8u;
            // 0x3b68bc: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B68C0u; }
        if (ctx->pc != 0x3B68C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B68C0u; }
        if (ctx->pc != 0x3B68C0u) { return; }
    }
    ctx->pc = 0x3B68C0u;
label_3b68c0:
    // 0x3b68c0: 0xc0d1c10  jal         func_347040
label_3b68c4:
    if (ctx->pc == 0x3B68C4u) {
        ctx->pc = 0x3B68C4u;
            // 0x3b68c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B68C8u;
        goto label_3b68c8;
    }
    ctx->pc = 0x3B68C0u;
    SET_GPR_U32(ctx, 31, 0x3B68C8u);
    ctx->pc = 0x3B68C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B68C0u;
            // 0x3b68c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B68C8u; }
        if (ctx->pc != 0x3B68C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B68C8u; }
        if (ctx->pc != 0x3B68C8u) { return; }
    }
    ctx->pc = 0x3B68C8u;
label_3b68c8:
    // 0x3b68c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3b68c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b68cc:
    // 0x3b68cc: 0xc04ce80  jal         func_133A00
label_3b68d0:
    if (ctx->pc == 0x3B68D0u) {
        ctx->pc = 0x3B68D0u;
            // 0x3b68d0: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x3B68D4u;
        goto label_3b68d4;
    }
    ctx->pc = 0x3B68CCu;
    SET_GPR_U32(ctx, 31, 0x3B68D4u);
    ctx->pc = 0x3B68D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B68CCu;
            // 0x3b68d0: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B68D4u; }
        if (ctx->pc != 0x3B68D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B68D4u; }
        if (ctx->pc != 0x3B68D4u) { return; }
    }
    ctx->pc = 0x3B68D4u;
label_3b68d4:
    // 0x3b68d4: 0xc0d63d8  jal         func_358F60
label_3b68d8:
    if (ctx->pc == 0x3B68D8u) {
        ctx->pc = 0x3B68D8u;
            // 0x3b68d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B68DCu;
        goto label_3b68dc;
    }
    ctx->pc = 0x3B68D4u;
    SET_GPR_U32(ctx, 31, 0x3B68DCu);
    ctx->pc = 0x3B68D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B68D4u;
            // 0x3b68d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358F60u;
    if (runtime->hasFunction(0x358F60u)) {
        auto targetFn = runtime->lookupFunction(0x358F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B68DCu; }
        if (ctx->pc != 0x3B68DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358F60_0x358f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B68DCu; }
        if (ctx->pc != 0x3B68DCu) { return; }
    }
    ctx->pc = 0x3B68DCu;
label_3b68dc:
    // 0x3b68dc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3b68dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b68e0:
    // 0x3b68e0: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x3b68e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
label_3b68e4:
    // 0x3b68e4: 0x3c29821  addu        $s3, $fp, $v0
    ctx->pc = 0x3b68e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_3b68e8:
    // 0x3b68e8: 0xc0d4108  jal         func_350420
label_3b68ec:
    if (ctx->pc == 0x3B68ECu) {
        ctx->pc = 0x3B68ECu;
            // 0x3b68ec: 0x8e720000  lw          $s2, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x3B68F0u;
        goto label_3b68f0;
    }
    ctx->pc = 0x3B68E8u;
    SET_GPR_U32(ctx, 31, 0x3B68F0u);
    ctx->pc = 0x3B68ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B68E8u;
            // 0x3b68ec: 0x8e720000  lw          $s2, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B68F0u; }
        if (ctx->pc != 0x3B68F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B68F0u; }
        if (ctx->pc != 0x3B68F0u) { return; }
    }
    ctx->pc = 0x3B68F0u;
label_3b68f0:
    // 0x3b68f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b68f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b68f4:
    // 0x3b68f4: 0xc0d4104  jal         func_350410
label_3b68f8:
    if (ctx->pc == 0x3B68F8u) {
        ctx->pc = 0x3B68F8u;
            // 0x3b68f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B68FCu;
        goto label_3b68fc;
    }
    ctx->pc = 0x3B68F4u;
    SET_GPR_U32(ctx, 31, 0x3B68FCu);
    ctx->pc = 0x3B68F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B68F4u;
            // 0x3b68f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B68FCu; }
        if (ctx->pc != 0x3B68FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B68FCu; }
        if (ctx->pc != 0x3B68FCu) { return; }
    }
    ctx->pc = 0x3B68FCu;
label_3b68fc:
    // 0x3b68fc: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x3b68fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_3b6900:
    // 0x3b6900: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b6900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b6904:
    // 0x3b6904: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3b6904u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b6908:
    // 0x3b6908: 0x27a70160  addiu       $a3, $sp, 0x160
    ctx->pc = 0x3b6908u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_3b690c:
    // 0x3b690c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3b690cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b6910:
    // 0x3b6910: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3b6910u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b6914:
    // 0x3b6914: 0xc0d40ac  jal         func_3502B0
label_3b6918:
    if (ctx->pc == 0x3B6918u) {
        ctx->pc = 0x3B6918u;
            // 0x3b6918: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x3B691Cu;
        goto label_3b691c;
    }
    ctx->pc = 0x3B6914u;
    SET_GPR_U32(ctx, 31, 0x3B691Cu);
    ctx->pc = 0x3B6918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6914u;
            // 0x3b6918: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B691Cu; }
        if (ctx->pc != 0x3B691Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B691Cu; }
        if (ctx->pc != 0x3B691Cu) { return; }
    }
    ctx->pc = 0x3B691Cu;
label_3b691c:
    // 0x3b691c: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x3b691cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_3b6920:
    // 0x3b6920: 0x10200033  beqz        $at, . + 4 + (0x33 << 2)
label_3b6924:
    if (ctx->pc == 0x3B6924u) {
        ctx->pc = 0x3B6924u;
            // 0x3b6924: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x3B6928u;
        goto label_3b6928;
    }
    ctx->pc = 0x3B6920u;
    {
        const bool branch_taken_0x3b6920 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6920u;
            // 0x3b6924: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6920) {
            ctx->pc = 0x3B69F0u;
            goto label_3b69f0;
        }
    }
    ctx->pc = 0x3B6928u;
label_3b6928:
    // 0x3b6928: 0xc0d63d0  jal         func_358F40
label_3b692c:
    if (ctx->pc == 0x3B692Cu) {
        ctx->pc = 0x3B692Cu;
            // 0x3b692c: 0x26a40090  addiu       $a0, $s5, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
        ctx->pc = 0x3B6930u;
        goto label_3b6930;
    }
    ctx->pc = 0x3B6928u;
    SET_GPR_U32(ctx, 31, 0x3B6930u);
    ctx->pc = 0x3B692Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6928u;
            // 0x3b692c: 0x26a40090  addiu       $a0, $s5, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358F40u;
    if (runtime->hasFunction(0x358F40u)) {
        auto targetFn = runtime->lookupFunction(0x358F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B6930u; }
        if (ctx->pc != 0x3B6930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358F40_0x358f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B6930u; }
        if (ctx->pc != 0x3B6930u) { return; }
    }
    ctx->pc = 0x3B6930u;
label_3b6930:
    // 0x3b6930: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b6930u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b6934:
    // 0x3b6934: 0x12140014  beq         $s0, $s4, . + 4 + (0x14 << 2)
label_3b6938:
    if (ctx->pc == 0x3B6938u) {
        ctx->pc = 0x3B693Cu;
        goto label_3b693c;
    }
    ctx->pc = 0x3B6934u;
    {
        const bool branch_taken_0x3b6934 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        if (branch_taken_0x3b6934) {
            ctx->pc = 0x3B6988u;
            goto label_3b6988;
        }
    }
    ctx->pc = 0x3B693Cu;
label_3b693c:
    // 0x3b693c: 0xc0edaec  jal         func_3B6BB0
label_3b6940:
    if (ctx->pc == 0x3B6940u) {
        ctx->pc = 0x3B6940u;
            // 0x3b6940: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B6944u;
        goto label_3b6944;
    }
    ctx->pc = 0x3B693Cu;
    SET_GPR_U32(ctx, 31, 0x3B6944u);
    ctx->pc = 0x3B6940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B693Cu;
            // 0x3b6940: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B6BB0u;
    if (runtime->hasFunction(0x3B6BB0u)) {
        auto targetFn = runtime->lookupFunction(0x3B6BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B6944u; }
        if (ctx->pc != 0x3B6944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B6BB0_0x3b6bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B6944u; }
        if (ctx->pc != 0x3B6944u) { return; }
    }
    ctx->pc = 0x3B6944u;
label_3b6944:
    // 0x3b6944: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x3b6944u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3b6948:
    // 0x3b6948: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_3b694c:
    if (ctx->pc == 0x3B694Cu) {
        ctx->pc = 0x3B6950u;
        goto label_3b6950;
    }
    ctx->pc = 0x3B6948u;
    {
        const bool branch_taken_0x3b6948 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b6948) {
            ctx->pc = 0x3B6968u;
            goto label_3b6968;
        }
    }
    ctx->pc = 0x3B6950u;
label_3b6950:
    // 0x3b6950: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x3b6950u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_3b6954:
    // 0x3b6954: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x3b6954u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_3b6958:
    // 0x3b6958: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x3b6958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_3b695c:
    // 0x3b695c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3b695cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3b6960:
    // 0x3b6960: 0xc0edad4  jal         func_3B6B50
label_3b6964:
    if (ctx->pc == 0x3B6964u) {
        ctx->pc = 0x3B6964u;
            // 0x3b6964: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x3B6968u;
        goto label_3b6968;
    }
    ctx->pc = 0x3B6960u;
    SET_GPR_U32(ctx, 31, 0x3B6968u);
    ctx->pc = 0x3B6964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6960u;
            // 0x3b6964: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B6B50u;
    if (runtime->hasFunction(0x3B6B50u)) {
        auto targetFn = runtime->lookupFunction(0x3B6B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B6968u; }
        if (ctx->pc != 0x3B6968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B6B50_0x3b6b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B6968u; }
        if (ctx->pc != 0x3B6968u) { return; }
    }
    ctx->pc = 0x3B6968u;
label_3b6968:
    // 0x3b6968: 0xc0edacc  jal         func_3B6B30
label_3b696c:
    if (ctx->pc == 0x3B696Cu) {
        ctx->pc = 0x3B6970u;
        goto label_3b6970;
    }
    ctx->pc = 0x3B6968u;
    SET_GPR_U32(ctx, 31, 0x3B6970u);
    ctx->pc = 0x3B6B30u;
    if (runtime->hasFunction(0x3B6B30u)) {
        auto targetFn = runtime->lookupFunction(0x3B6B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B6970u; }
        if (ctx->pc != 0x3B6970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B6B30_0x3b6b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B6970u; }
        if (ctx->pc != 0x3B6970u) { return; }
    }
    ctx->pc = 0x3B6970u;
label_3b6970:
    // 0x3b6970: 0xc04e738  jal         func_139CE0
label_3b6974:
    if (ctx->pc == 0x3B6974u) {
        ctx->pc = 0x3B6974u;
            // 0x3b6974: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->pc = 0x3B6978u;
        goto label_3b6978;
    }
    ctx->pc = 0x3B6970u;
    SET_GPR_U32(ctx, 31, 0x3B6978u);
    ctx->pc = 0x3B6974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6970u;
            // 0x3b6974: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B6978u; }
        if (ctx->pc != 0x3B6978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B6978u; }
        if (ctx->pc != 0x3B6978u) { return; }
    }
    ctx->pc = 0x3B6978u;
label_3b6978:
    // 0x3b6978: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3b6978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b697c:
    // 0x3b697c: 0xc0d63a8  jal         func_358EA0
label_3b6980:
    if (ctx->pc == 0x3B6980u) {
        ctx->pc = 0x3B6980u;
            // 0x3b6980: 0x26a40090  addiu       $a0, $s5, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
        ctx->pc = 0x3B6984u;
        goto label_3b6984;
    }
    ctx->pc = 0x3B697Cu;
    SET_GPR_U32(ctx, 31, 0x3B6984u);
    ctx->pc = 0x3B6980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B697Cu;
            // 0x3b6980: 0x26a40090  addiu       $a0, $s5, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358EA0u;
    if (runtime->hasFunction(0x358EA0u)) {
        auto targetFn = runtime->lookupFunction(0x358EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B6984u; }
        if (ctx->pc != 0x3B6984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358EA0_0x358ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B6984u; }
        if (ctx->pc != 0x3B6984u) { return; }
    }
    ctx->pc = 0x3B6984u;
label_3b6984:
    // 0x3b6984: 0x0  nop
    ctx->pc = 0x3b6984u;
    // NOP
label_3b6988:
    // 0x3b6988: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b6988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b698c:
    // 0x3b698c: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x3b698cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_3b6990:
    // 0x3b6990: 0xc0edaa4  jal         func_3B6A90
label_3b6994:
    if (ctx->pc == 0x3B6994u) {
        ctx->pc = 0x3B6994u;
            // 0x3b6994: 0x27a601ac  addiu       $a2, $sp, 0x1AC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 428));
        ctx->pc = 0x3B6998u;
        goto label_3b6998;
    }
    ctx->pc = 0x3B6990u;
    SET_GPR_U32(ctx, 31, 0x3B6998u);
    ctx->pc = 0x3B6994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6990u;
            // 0x3b6994: 0x27a601ac  addiu       $a2, $sp, 0x1AC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 428));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B6A90u;
    if (runtime->hasFunction(0x3B6A90u)) {
        auto targetFn = runtime->lookupFunction(0x3B6A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B6998u; }
        if (ctx->pc != 0x3B6998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B6A90_0x3b6a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B6998u; }
        if (ctx->pc != 0x3B6998u) { return; }
    }
    ctx->pc = 0x3B6998u;
label_3b6998:
    // 0x3b6998: 0x8fa401ac  lw          $a0, 0x1AC($sp)
    ctx->pc = 0x3b6998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
label_3b699c:
    // 0x3b699c: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x3b699cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_3b69a0:
    // 0x3b69a0: 0xc04e4a4  jal         func_139290
label_3b69a4:
    if (ctx->pc == 0x3B69A4u) {
        ctx->pc = 0x3B69A4u;
            // 0x3b69a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B69A8u;
        goto label_3b69a8;
    }
    ctx->pc = 0x3B69A0u;
    SET_GPR_U32(ctx, 31, 0x3B69A8u);
    ctx->pc = 0x3B69A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B69A0u;
            // 0x3b69a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B69A8u; }
        if (ctx->pc != 0x3B69A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B69A8u; }
        if (ctx->pc != 0x3B69A8u) { return; }
    }
    ctx->pc = 0x3B69A8u;
label_3b69a8:
    // 0x3b69a8: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x3b69a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_3b69ac:
    // 0x3b69ac: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x3b69acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_3b69b0:
    // 0x3b69b0: 0xc04cd60  jal         func_133580
label_3b69b4:
    if (ctx->pc == 0x3B69B4u) {
        ctx->pc = 0x3B69B4u;
            // 0x3b69b4: 0x27a60160  addiu       $a2, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x3B69B8u;
        goto label_3b69b8;
    }
    ctx->pc = 0x3B69B0u;
    SET_GPR_U32(ctx, 31, 0x3B69B8u);
    ctx->pc = 0x3B69B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B69B0u;
            // 0x3b69b4: 0x27a60160  addiu       $a2, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B69B8u; }
        if (ctx->pc != 0x3B69B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B69B8u; }
        if (ctx->pc != 0x3B69B8u) { return; }
    }
    ctx->pc = 0x3B69B8u;
label_3b69b8:
    // 0x3b69b8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x3b69b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3b69bc:
    // 0x3b69bc: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x3b69bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_3b69c0:
    // 0x3b69c0: 0x320f809  jalr        $t9
label_3b69c4:
    if (ctx->pc == 0x3B69C4u) {
        ctx->pc = 0x3B69C4u;
            // 0x3b69c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B69C8u;
        goto label_3b69c8;
    }
    ctx->pc = 0x3B69C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3B69C8u);
        ctx->pc = 0x3B69C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B69C0u;
            // 0x3b69c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3B69C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3B69C8u; }
            if (ctx->pc != 0x3B69C8u) { return; }
        }
        }
    }
    ctx->pc = 0x3B69C8u;
label_3b69c8:
    // 0x3b69c8: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x3b69c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_3b69cc:
    // 0x3b69cc: 0xc66c000c  lwc1        $f12, 0xC($s3)
    ctx->pc = 0x3b69ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3b69d0:
    // 0x3b69d0: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x3b69d0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_3b69d4:
    // 0x3b69d4: 0x8fa501ac  lw          $a1, 0x1AC($sp)
    ctx->pc = 0x3b69d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
label_3b69d8:
    // 0x3b69d8: 0x8e670008  lw          $a3, 0x8($s3)
    ctx->pc = 0x3b69d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_3b69dc:
    // 0x3b69dc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3b69dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b69e0:
    // 0x3b69e0: 0x27a80110  addiu       $t0, $sp, 0x110
    ctx->pc = 0x3b69e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_3b69e4:
    // 0x3b69e4: 0x2529e350  addiu       $t1, $t1, -0x1CB0
    ctx->pc = 0x3b69e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
label_3b69e8:
    // 0x3b69e8: 0xc04cff4  jal         func_133FD0
label_3b69ec:
    if (ctx->pc == 0x3B69ECu) {
        ctx->pc = 0x3B69ECu;
            // 0x3b69ec: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B69F0u;
        goto label_3b69f0;
    }
    ctx->pc = 0x3B69E8u;
    SET_GPR_U32(ctx, 31, 0x3B69F0u);
    ctx->pc = 0x3B69ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B69E8u;
            // 0x3b69ec: 0x40502d  daddu       $t2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B69F0u; }
        if (ctx->pc != 0x3B69F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B69F0u; }
        if (ctx->pc != 0x3B69F0u) { return; }
    }
    ctx->pc = 0x3B69F0u;
label_3b69f0:
    // 0x3b69f0: 0x7ba300e0  lq          $v1, 0xE0($sp)
    ctx->pc = 0x3b69f0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3b69f4:
    // 0x3b69f4: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x3b69f4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3b69f8:
    // 0x3b69f8: 0x2c3182b  sltu        $v1, $s6, $v1
    ctx->pc = 0x3b69f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3b69fc:
    // 0x3b69fc: 0x1460ff9c  bnez        $v1, . + 4 + (-0x64 << 2)
label_3b6a00:
    if (ctx->pc == 0x3B6A00u) {
        ctx->pc = 0x3B6A00u;
            // 0x3b6a00: 0x26f70004  addiu       $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->pc = 0x3B6A04u;
        goto label_3b6a04;
    }
    ctx->pc = 0x3B69FCu;
    {
        const bool branch_taken_0x3b69fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B6A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B69FCu;
            // 0x3b6a00: 0x26f70004  addiu       $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b69fc) {
            ctx->pc = 0x3B6870u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3b6870;
        }
    }
    ctx->pc = 0x3B6A04u;
label_3b6a04:
    // 0x3b6a04: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x3b6a04u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3b6a08:
    // 0x3b6a08: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3b6a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3b6a0c:
    // 0x3b6a0c: 0x8ea30084  lw          $v1, 0x84($s5)
    ctx->pc = 0x3b6a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
label_3b6a10:
    // 0x3b6a10: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
label_3b6a14:
    if (ctx->pc == 0x3B6A14u) {
        ctx->pc = 0x3B6A18u;
        goto label_3b6a18;
    }
    ctx->pc = 0x3B6A10u;
    {
        const bool branch_taken_0x3b6a10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b6a10) {
            ctx->pc = 0x3B6A50u;
            goto label_3b6a50;
        }
    }
    ctx->pc = 0x3B6A18u;
label_3b6a18:
    // 0x3b6a18: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x3b6a18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_3b6a1c:
    // 0x3b6a1c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3b6a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3b6a20:
    // 0x3b6a20: 0x3c42021  addu        $a0, $fp, $a0
    ctx->pc = 0x3b6a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
label_3b6a24:
    // 0x3b6a24: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x3b6a24u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_3b6a28:
    // 0x3b6a28: 0x19200009  blez        $t1, . + 4 + (0x9 << 2)
label_3b6a2c:
    if (ctx->pc == 0x3B6A2Cu) {
        ctx->pc = 0x3B6A2Cu;
            // 0x3b6a2c: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3B6A30u;
        goto label_3b6a30;
    }
    ctx->pc = 0x3B6A28u;
    {
        const bool branch_taken_0x3b6a28 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x3B6A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6A28u;
            // 0x3b6a2c: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6a28) {
            ctx->pc = 0x3B6A50u;
            goto label_3b6a50;
        }
    }
    ctx->pc = 0x3B6A30u;
label_3b6a30:
    // 0x3b6a30: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3b6a30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3b6a34:
    // 0x3b6a34: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3b6a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3b6a38:
    // 0x3b6a38: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x3b6a38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_3b6a3c:
    // 0x3b6a3c: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x3b6a3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_3b6a40:
    // 0x3b6a40: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x3b6a40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_3b6a44:
    // 0x3b6a44: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x3b6a44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_3b6a48:
    // 0x3b6a48: 0xc055ea8  jal         func_157AA0
label_3b6a4c:
    if (ctx->pc == 0x3B6A4Cu) {
        ctx->pc = 0x3B6A4Cu;
            // 0x3b6a4c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B6A50u;
        goto label_3b6a50;
    }
    ctx->pc = 0x3B6A48u;
    SET_GPR_U32(ctx, 31, 0x3B6A50u);
    ctx->pc = 0x3B6A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6A48u;
            // 0x3b6a4c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157AA0u;
    if (runtime->hasFunction(0x157AA0u)) {
        auto targetFn = runtime->lookupFunction(0x157AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B6A50u; }
        if (ctx->pc != 0x3B6A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157AA0_0x157aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B6A50u; }
        if (ctx->pc != 0x3B6A50u) { return; }
    }
    ctx->pc = 0x3B6A50u;
label_3b6a50:
    // 0x3b6a50: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x3b6a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_3b6a54:
    // 0x3b6a54: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3b6a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3b6a58:
    // 0x3b6a58: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x3b6a58u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b6a5c:
    // 0x3b6a5c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x3b6a5cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b6a60:
    // 0x3b6a60: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3b6a60u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3b6a64:
    // 0x3b6a64: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3b6a64u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3b6a68:
    // 0x3b6a68: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3b6a68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3b6a6c:
    // 0x3b6a6c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3b6a6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3b6a70:
    // 0x3b6a70: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3b6a70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3b6a74:
    // 0x3b6a74: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3b6a74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b6a78:
    // 0x3b6a78: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3b6a78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b6a7c:
    // 0x3b6a7c: 0x3e00008  jr          $ra
label_3b6a80:
    if (ctx->pc == 0x3B6A80u) {
        ctx->pc = 0x3B6A80u;
            // 0x3b6a80: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = 0x3B6A84u;
        goto label_3b6a84;
    }
    ctx->pc = 0x3B6A7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B6A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B6A7Cu;
            // 0x3b6a80: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B6A84u;
label_3b6a84:
    // 0x3b6a84: 0x0  nop
    ctx->pc = 0x3b6a84u;
    // NOP
label_3b6a88:
    // 0x3b6a88: 0x0  nop
    ctx->pc = 0x3b6a88u;
    // NOP
label_3b6a8c:
    // 0x3b6a8c: 0x0  nop
    ctx->pc = 0x3b6a8cu;
    // NOP
}
