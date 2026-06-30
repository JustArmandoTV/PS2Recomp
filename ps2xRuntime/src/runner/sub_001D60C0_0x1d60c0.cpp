#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D60C0
// Address: 0x1d60c0 - 0x1d6910
void sub_001D60C0_0x1d60c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D60C0_0x1d60c0");
#endif

    switch (ctx->pc) {
        case 0x1d60c0u: goto label_1d60c0;
        case 0x1d60c4u: goto label_1d60c4;
        case 0x1d60c8u: goto label_1d60c8;
        case 0x1d60ccu: goto label_1d60cc;
        case 0x1d60d0u: goto label_1d60d0;
        case 0x1d60d4u: goto label_1d60d4;
        case 0x1d60d8u: goto label_1d60d8;
        case 0x1d60dcu: goto label_1d60dc;
        case 0x1d60e0u: goto label_1d60e0;
        case 0x1d60e4u: goto label_1d60e4;
        case 0x1d60e8u: goto label_1d60e8;
        case 0x1d60ecu: goto label_1d60ec;
        case 0x1d60f0u: goto label_1d60f0;
        case 0x1d60f4u: goto label_1d60f4;
        case 0x1d60f8u: goto label_1d60f8;
        case 0x1d60fcu: goto label_1d60fc;
        case 0x1d6100u: goto label_1d6100;
        case 0x1d6104u: goto label_1d6104;
        case 0x1d6108u: goto label_1d6108;
        case 0x1d610cu: goto label_1d610c;
        case 0x1d6110u: goto label_1d6110;
        case 0x1d6114u: goto label_1d6114;
        case 0x1d6118u: goto label_1d6118;
        case 0x1d611cu: goto label_1d611c;
        case 0x1d6120u: goto label_1d6120;
        case 0x1d6124u: goto label_1d6124;
        case 0x1d6128u: goto label_1d6128;
        case 0x1d612cu: goto label_1d612c;
        case 0x1d6130u: goto label_1d6130;
        case 0x1d6134u: goto label_1d6134;
        case 0x1d6138u: goto label_1d6138;
        case 0x1d613cu: goto label_1d613c;
        case 0x1d6140u: goto label_1d6140;
        case 0x1d6144u: goto label_1d6144;
        case 0x1d6148u: goto label_1d6148;
        case 0x1d614cu: goto label_1d614c;
        case 0x1d6150u: goto label_1d6150;
        case 0x1d6154u: goto label_1d6154;
        case 0x1d6158u: goto label_1d6158;
        case 0x1d615cu: goto label_1d615c;
        case 0x1d6160u: goto label_1d6160;
        case 0x1d6164u: goto label_1d6164;
        case 0x1d6168u: goto label_1d6168;
        case 0x1d616cu: goto label_1d616c;
        case 0x1d6170u: goto label_1d6170;
        case 0x1d6174u: goto label_1d6174;
        case 0x1d6178u: goto label_1d6178;
        case 0x1d617cu: goto label_1d617c;
        case 0x1d6180u: goto label_1d6180;
        case 0x1d6184u: goto label_1d6184;
        case 0x1d6188u: goto label_1d6188;
        case 0x1d618cu: goto label_1d618c;
        case 0x1d6190u: goto label_1d6190;
        case 0x1d6194u: goto label_1d6194;
        case 0x1d6198u: goto label_1d6198;
        case 0x1d619cu: goto label_1d619c;
        case 0x1d61a0u: goto label_1d61a0;
        case 0x1d61a4u: goto label_1d61a4;
        case 0x1d61a8u: goto label_1d61a8;
        case 0x1d61acu: goto label_1d61ac;
        case 0x1d61b0u: goto label_1d61b0;
        case 0x1d61b4u: goto label_1d61b4;
        case 0x1d61b8u: goto label_1d61b8;
        case 0x1d61bcu: goto label_1d61bc;
        case 0x1d61c0u: goto label_1d61c0;
        case 0x1d61c4u: goto label_1d61c4;
        case 0x1d61c8u: goto label_1d61c8;
        case 0x1d61ccu: goto label_1d61cc;
        case 0x1d61d0u: goto label_1d61d0;
        case 0x1d61d4u: goto label_1d61d4;
        case 0x1d61d8u: goto label_1d61d8;
        case 0x1d61dcu: goto label_1d61dc;
        case 0x1d61e0u: goto label_1d61e0;
        case 0x1d61e4u: goto label_1d61e4;
        case 0x1d61e8u: goto label_1d61e8;
        case 0x1d61ecu: goto label_1d61ec;
        case 0x1d61f0u: goto label_1d61f0;
        case 0x1d61f4u: goto label_1d61f4;
        case 0x1d61f8u: goto label_1d61f8;
        case 0x1d61fcu: goto label_1d61fc;
        case 0x1d6200u: goto label_1d6200;
        case 0x1d6204u: goto label_1d6204;
        case 0x1d6208u: goto label_1d6208;
        case 0x1d620cu: goto label_1d620c;
        case 0x1d6210u: goto label_1d6210;
        case 0x1d6214u: goto label_1d6214;
        case 0x1d6218u: goto label_1d6218;
        case 0x1d621cu: goto label_1d621c;
        case 0x1d6220u: goto label_1d6220;
        case 0x1d6224u: goto label_1d6224;
        case 0x1d6228u: goto label_1d6228;
        case 0x1d622cu: goto label_1d622c;
        case 0x1d6230u: goto label_1d6230;
        case 0x1d6234u: goto label_1d6234;
        case 0x1d6238u: goto label_1d6238;
        case 0x1d623cu: goto label_1d623c;
        case 0x1d6240u: goto label_1d6240;
        case 0x1d6244u: goto label_1d6244;
        case 0x1d6248u: goto label_1d6248;
        case 0x1d624cu: goto label_1d624c;
        case 0x1d6250u: goto label_1d6250;
        case 0x1d6254u: goto label_1d6254;
        case 0x1d6258u: goto label_1d6258;
        case 0x1d625cu: goto label_1d625c;
        case 0x1d6260u: goto label_1d6260;
        case 0x1d6264u: goto label_1d6264;
        case 0x1d6268u: goto label_1d6268;
        case 0x1d626cu: goto label_1d626c;
        case 0x1d6270u: goto label_1d6270;
        case 0x1d6274u: goto label_1d6274;
        case 0x1d6278u: goto label_1d6278;
        case 0x1d627cu: goto label_1d627c;
        case 0x1d6280u: goto label_1d6280;
        case 0x1d6284u: goto label_1d6284;
        case 0x1d6288u: goto label_1d6288;
        case 0x1d628cu: goto label_1d628c;
        case 0x1d6290u: goto label_1d6290;
        case 0x1d6294u: goto label_1d6294;
        case 0x1d6298u: goto label_1d6298;
        case 0x1d629cu: goto label_1d629c;
        case 0x1d62a0u: goto label_1d62a0;
        case 0x1d62a4u: goto label_1d62a4;
        case 0x1d62a8u: goto label_1d62a8;
        case 0x1d62acu: goto label_1d62ac;
        case 0x1d62b0u: goto label_1d62b0;
        case 0x1d62b4u: goto label_1d62b4;
        case 0x1d62b8u: goto label_1d62b8;
        case 0x1d62bcu: goto label_1d62bc;
        case 0x1d62c0u: goto label_1d62c0;
        case 0x1d62c4u: goto label_1d62c4;
        case 0x1d62c8u: goto label_1d62c8;
        case 0x1d62ccu: goto label_1d62cc;
        case 0x1d62d0u: goto label_1d62d0;
        case 0x1d62d4u: goto label_1d62d4;
        case 0x1d62d8u: goto label_1d62d8;
        case 0x1d62dcu: goto label_1d62dc;
        case 0x1d62e0u: goto label_1d62e0;
        case 0x1d62e4u: goto label_1d62e4;
        case 0x1d62e8u: goto label_1d62e8;
        case 0x1d62ecu: goto label_1d62ec;
        case 0x1d62f0u: goto label_1d62f0;
        case 0x1d62f4u: goto label_1d62f4;
        case 0x1d62f8u: goto label_1d62f8;
        case 0x1d62fcu: goto label_1d62fc;
        case 0x1d6300u: goto label_1d6300;
        case 0x1d6304u: goto label_1d6304;
        case 0x1d6308u: goto label_1d6308;
        case 0x1d630cu: goto label_1d630c;
        case 0x1d6310u: goto label_1d6310;
        case 0x1d6314u: goto label_1d6314;
        case 0x1d6318u: goto label_1d6318;
        case 0x1d631cu: goto label_1d631c;
        case 0x1d6320u: goto label_1d6320;
        case 0x1d6324u: goto label_1d6324;
        case 0x1d6328u: goto label_1d6328;
        case 0x1d632cu: goto label_1d632c;
        case 0x1d6330u: goto label_1d6330;
        case 0x1d6334u: goto label_1d6334;
        case 0x1d6338u: goto label_1d6338;
        case 0x1d633cu: goto label_1d633c;
        case 0x1d6340u: goto label_1d6340;
        case 0x1d6344u: goto label_1d6344;
        case 0x1d6348u: goto label_1d6348;
        case 0x1d634cu: goto label_1d634c;
        case 0x1d6350u: goto label_1d6350;
        case 0x1d6354u: goto label_1d6354;
        case 0x1d6358u: goto label_1d6358;
        case 0x1d635cu: goto label_1d635c;
        case 0x1d6360u: goto label_1d6360;
        case 0x1d6364u: goto label_1d6364;
        case 0x1d6368u: goto label_1d6368;
        case 0x1d636cu: goto label_1d636c;
        case 0x1d6370u: goto label_1d6370;
        case 0x1d6374u: goto label_1d6374;
        case 0x1d6378u: goto label_1d6378;
        case 0x1d637cu: goto label_1d637c;
        case 0x1d6380u: goto label_1d6380;
        case 0x1d6384u: goto label_1d6384;
        case 0x1d6388u: goto label_1d6388;
        case 0x1d638cu: goto label_1d638c;
        case 0x1d6390u: goto label_1d6390;
        case 0x1d6394u: goto label_1d6394;
        case 0x1d6398u: goto label_1d6398;
        case 0x1d639cu: goto label_1d639c;
        case 0x1d63a0u: goto label_1d63a0;
        case 0x1d63a4u: goto label_1d63a4;
        case 0x1d63a8u: goto label_1d63a8;
        case 0x1d63acu: goto label_1d63ac;
        case 0x1d63b0u: goto label_1d63b0;
        case 0x1d63b4u: goto label_1d63b4;
        case 0x1d63b8u: goto label_1d63b8;
        case 0x1d63bcu: goto label_1d63bc;
        case 0x1d63c0u: goto label_1d63c0;
        case 0x1d63c4u: goto label_1d63c4;
        case 0x1d63c8u: goto label_1d63c8;
        case 0x1d63ccu: goto label_1d63cc;
        case 0x1d63d0u: goto label_1d63d0;
        case 0x1d63d4u: goto label_1d63d4;
        case 0x1d63d8u: goto label_1d63d8;
        case 0x1d63dcu: goto label_1d63dc;
        case 0x1d63e0u: goto label_1d63e0;
        case 0x1d63e4u: goto label_1d63e4;
        case 0x1d63e8u: goto label_1d63e8;
        case 0x1d63ecu: goto label_1d63ec;
        case 0x1d63f0u: goto label_1d63f0;
        case 0x1d63f4u: goto label_1d63f4;
        case 0x1d63f8u: goto label_1d63f8;
        case 0x1d63fcu: goto label_1d63fc;
        case 0x1d6400u: goto label_1d6400;
        case 0x1d6404u: goto label_1d6404;
        case 0x1d6408u: goto label_1d6408;
        case 0x1d640cu: goto label_1d640c;
        case 0x1d6410u: goto label_1d6410;
        case 0x1d6414u: goto label_1d6414;
        case 0x1d6418u: goto label_1d6418;
        case 0x1d641cu: goto label_1d641c;
        case 0x1d6420u: goto label_1d6420;
        case 0x1d6424u: goto label_1d6424;
        case 0x1d6428u: goto label_1d6428;
        case 0x1d642cu: goto label_1d642c;
        case 0x1d6430u: goto label_1d6430;
        case 0x1d6434u: goto label_1d6434;
        case 0x1d6438u: goto label_1d6438;
        case 0x1d643cu: goto label_1d643c;
        case 0x1d6440u: goto label_1d6440;
        case 0x1d6444u: goto label_1d6444;
        case 0x1d6448u: goto label_1d6448;
        case 0x1d644cu: goto label_1d644c;
        case 0x1d6450u: goto label_1d6450;
        case 0x1d6454u: goto label_1d6454;
        case 0x1d6458u: goto label_1d6458;
        case 0x1d645cu: goto label_1d645c;
        case 0x1d6460u: goto label_1d6460;
        case 0x1d6464u: goto label_1d6464;
        case 0x1d6468u: goto label_1d6468;
        case 0x1d646cu: goto label_1d646c;
        case 0x1d6470u: goto label_1d6470;
        case 0x1d6474u: goto label_1d6474;
        case 0x1d6478u: goto label_1d6478;
        case 0x1d647cu: goto label_1d647c;
        case 0x1d6480u: goto label_1d6480;
        case 0x1d6484u: goto label_1d6484;
        case 0x1d6488u: goto label_1d6488;
        case 0x1d648cu: goto label_1d648c;
        case 0x1d6490u: goto label_1d6490;
        case 0x1d6494u: goto label_1d6494;
        case 0x1d6498u: goto label_1d6498;
        case 0x1d649cu: goto label_1d649c;
        case 0x1d64a0u: goto label_1d64a0;
        case 0x1d64a4u: goto label_1d64a4;
        case 0x1d64a8u: goto label_1d64a8;
        case 0x1d64acu: goto label_1d64ac;
        case 0x1d64b0u: goto label_1d64b0;
        case 0x1d64b4u: goto label_1d64b4;
        case 0x1d64b8u: goto label_1d64b8;
        case 0x1d64bcu: goto label_1d64bc;
        case 0x1d64c0u: goto label_1d64c0;
        case 0x1d64c4u: goto label_1d64c4;
        case 0x1d64c8u: goto label_1d64c8;
        case 0x1d64ccu: goto label_1d64cc;
        case 0x1d64d0u: goto label_1d64d0;
        case 0x1d64d4u: goto label_1d64d4;
        case 0x1d64d8u: goto label_1d64d8;
        case 0x1d64dcu: goto label_1d64dc;
        case 0x1d64e0u: goto label_1d64e0;
        case 0x1d64e4u: goto label_1d64e4;
        case 0x1d64e8u: goto label_1d64e8;
        case 0x1d64ecu: goto label_1d64ec;
        case 0x1d64f0u: goto label_1d64f0;
        case 0x1d64f4u: goto label_1d64f4;
        case 0x1d64f8u: goto label_1d64f8;
        case 0x1d64fcu: goto label_1d64fc;
        case 0x1d6500u: goto label_1d6500;
        case 0x1d6504u: goto label_1d6504;
        case 0x1d6508u: goto label_1d6508;
        case 0x1d650cu: goto label_1d650c;
        case 0x1d6510u: goto label_1d6510;
        case 0x1d6514u: goto label_1d6514;
        case 0x1d6518u: goto label_1d6518;
        case 0x1d651cu: goto label_1d651c;
        case 0x1d6520u: goto label_1d6520;
        case 0x1d6524u: goto label_1d6524;
        case 0x1d6528u: goto label_1d6528;
        case 0x1d652cu: goto label_1d652c;
        case 0x1d6530u: goto label_1d6530;
        case 0x1d6534u: goto label_1d6534;
        case 0x1d6538u: goto label_1d6538;
        case 0x1d653cu: goto label_1d653c;
        case 0x1d6540u: goto label_1d6540;
        case 0x1d6544u: goto label_1d6544;
        case 0x1d6548u: goto label_1d6548;
        case 0x1d654cu: goto label_1d654c;
        case 0x1d6550u: goto label_1d6550;
        case 0x1d6554u: goto label_1d6554;
        case 0x1d6558u: goto label_1d6558;
        case 0x1d655cu: goto label_1d655c;
        case 0x1d6560u: goto label_1d6560;
        case 0x1d6564u: goto label_1d6564;
        case 0x1d6568u: goto label_1d6568;
        case 0x1d656cu: goto label_1d656c;
        case 0x1d6570u: goto label_1d6570;
        case 0x1d6574u: goto label_1d6574;
        case 0x1d6578u: goto label_1d6578;
        case 0x1d657cu: goto label_1d657c;
        case 0x1d6580u: goto label_1d6580;
        case 0x1d6584u: goto label_1d6584;
        case 0x1d6588u: goto label_1d6588;
        case 0x1d658cu: goto label_1d658c;
        case 0x1d6590u: goto label_1d6590;
        case 0x1d6594u: goto label_1d6594;
        case 0x1d6598u: goto label_1d6598;
        case 0x1d659cu: goto label_1d659c;
        case 0x1d65a0u: goto label_1d65a0;
        case 0x1d65a4u: goto label_1d65a4;
        case 0x1d65a8u: goto label_1d65a8;
        case 0x1d65acu: goto label_1d65ac;
        case 0x1d65b0u: goto label_1d65b0;
        case 0x1d65b4u: goto label_1d65b4;
        case 0x1d65b8u: goto label_1d65b8;
        case 0x1d65bcu: goto label_1d65bc;
        case 0x1d65c0u: goto label_1d65c0;
        case 0x1d65c4u: goto label_1d65c4;
        case 0x1d65c8u: goto label_1d65c8;
        case 0x1d65ccu: goto label_1d65cc;
        case 0x1d65d0u: goto label_1d65d0;
        case 0x1d65d4u: goto label_1d65d4;
        case 0x1d65d8u: goto label_1d65d8;
        case 0x1d65dcu: goto label_1d65dc;
        case 0x1d65e0u: goto label_1d65e0;
        case 0x1d65e4u: goto label_1d65e4;
        case 0x1d65e8u: goto label_1d65e8;
        case 0x1d65ecu: goto label_1d65ec;
        case 0x1d65f0u: goto label_1d65f0;
        case 0x1d65f4u: goto label_1d65f4;
        case 0x1d65f8u: goto label_1d65f8;
        case 0x1d65fcu: goto label_1d65fc;
        case 0x1d6600u: goto label_1d6600;
        case 0x1d6604u: goto label_1d6604;
        case 0x1d6608u: goto label_1d6608;
        case 0x1d660cu: goto label_1d660c;
        case 0x1d6610u: goto label_1d6610;
        case 0x1d6614u: goto label_1d6614;
        case 0x1d6618u: goto label_1d6618;
        case 0x1d661cu: goto label_1d661c;
        case 0x1d6620u: goto label_1d6620;
        case 0x1d6624u: goto label_1d6624;
        case 0x1d6628u: goto label_1d6628;
        case 0x1d662cu: goto label_1d662c;
        case 0x1d6630u: goto label_1d6630;
        case 0x1d6634u: goto label_1d6634;
        case 0x1d6638u: goto label_1d6638;
        case 0x1d663cu: goto label_1d663c;
        case 0x1d6640u: goto label_1d6640;
        case 0x1d6644u: goto label_1d6644;
        case 0x1d6648u: goto label_1d6648;
        case 0x1d664cu: goto label_1d664c;
        case 0x1d6650u: goto label_1d6650;
        case 0x1d6654u: goto label_1d6654;
        case 0x1d6658u: goto label_1d6658;
        case 0x1d665cu: goto label_1d665c;
        case 0x1d6660u: goto label_1d6660;
        case 0x1d6664u: goto label_1d6664;
        case 0x1d6668u: goto label_1d6668;
        case 0x1d666cu: goto label_1d666c;
        case 0x1d6670u: goto label_1d6670;
        case 0x1d6674u: goto label_1d6674;
        case 0x1d6678u: goto label_1d6678;
        case 0x1d667cu: goto label_1d667c;
        case 0x1d6680u: goto label_1d6680;
        case 0x1d6684u: goto label_1d6684;
        case 0x1d6688u: goto label_1d6688;
        case 0x1d668cu: goto label_1d668c;
        case 0x1d6690u: goto label_1d6690;
        case 0x1d6694u: goto label_1d6694;
        case 0x1d6698u: goto label_1d6698;
        case 0x1d669cu: goto label_1d669c;
        case 0x1d66a0u: goto label_1d66a0;
        case 0x1d66a4u: goto label_1d66a4;
        case 0x1d66a8u: goto label_1d66a8;
        case 0x1d66acu: goto label_1d66ac;
        case 0x1d66b0u: goto label_1d66b0;
        case 0x1d66b4u: goto label_1d66b4;
        case 0x1d66b8u: goto label_1d66b8;
        case 0x1d66bcu: goto label_1d66bc;
        case 0x1d66c0u: goto label_1d66c0;
        case 0x1d66c4u: goto label_1d66c4;
        case 0x1d66c8u: goto label_1d66c8;
        case 0x1d66ccu: goto label_1d66cc;
        case 0x1d66d0u: goto label_1d66d0;
        case 0x1d66d4u: goto label_1d66d4;
        case 0x1d66d8u: goto label_1d66d8;
        case 0x1d66dcu: goto label_1d66dc;
        case 0x1d66e0u: goto label_1d66e0;
        case 0x1d66e4u: goto label_1d66e4;
        case 0x1d66e8u: goto label_1d66e8;
        case 0x1d66ecu: goto label_1d66ec;
        case 0x1d66f0u: goto label_1d66f0;
        case 0x1d66f4u: goto label_1d66f4;
        case 0x1d66f8u: goto label_1d66f8;
        case 0x1d66fcu: goto label_1d66fc;
        case 0x1d6700u: goto label_1d6700;
        case 0x1d6704u: goto label_1d6704;
        case 0x1d6708u: goto label_1d6708;
        case 0x1d670cu: goto label_1d670c;
        case 0x1d6710u: goto label_1d6710;
        case 0x1d6714u: goto label_1d6714;
        case 0x1d6718u: goto label_1d6718;
        case 0x1d671cu: goto label_1d671c;
        case 0x1d6720u: goto label_1d6720;
        case 0x1d6724u: goto label_1d6724;
        case 0x1d6728u: goto label_1d6728;
        case 0x1d672cu: goto label_1d672c;
        case 0x1d6730u: goto label_1d6730;
        case 0x1d6734u: goto label_1d6734;
        case 0x1d6738u: goto label_1d6738;
        case 0x1d673cu: goto label_1d673c;
        case 0x1d6740u: goto label_1d6740;
        case 0x1d6744u: goto label_1d6744;
        case 0x1d6748u: goto label_1d6748;
        case 0x1d674cu: goto label_1d674c;
        case 0x1d6750u: goto label_1d6750;
        case 0x1d6754u: goto label_1d6754;
        case 0x1d6758u: goto label_1d6758;
        case 0x1d675cu: goto label_1d675c;
        case 0x1d6760u: goto label_1d6760;
        case 0x1d6764u: goto label_1d6764;
        case 0x1d6768u: goto label_1d6768;
        case 0x1d676cu: goto label_1d676c;
        case 0x1d6770u: goto label_1d6770;
        case 0x1d6774u: goto label_1d6774;
        case 0x1d6778u: goto label_1d6778;
        case 0x1d677cu: goto label_1d677c;
        case 0x1d6780u: goto label_1d6780;
        case 0x1d6784u: goto label_1d6784;
        case 0x1d6788u: goto label_1d6788;
        case 0x1d678cu: goto label_1d678c;
        case 0x1d6790u: goto label_1d6790;
        case 0x1d6794u: goto label_1d6794;
        case 0x1d6798u: goto label_1d6798;
        case 0x1d679cu: goto label_1d679c;
        case 0x1d67a0u: goto label_1d67a0;
        case 0x1d67a4u: goto label_1d67a4;
        case 0x1d67a8u: goto label_1d67a8;
        case 0x1d67acu: goto label_1d67ac;
        case 0x1d67b0u: goto label_1d67b0;
        case 0x1d67b4u: goto label_1d67b4;
        case 0x1d67b8u: goto label_1d67b8;
        case 0x1d67bcu: goto label_1d67bc;
        case 0x1d67c0u: goto label_1d67c0;
        case 0x1d67c4u: goto label_1d67c4;
        case 0x1d67c8u: goto label_1d67c8;
        case 0x1d67ccu: goto label_1d67cc;
        case 0x1d67d0u: goto label_1d67d0;
        case 0x1d67d4u: goto label_1d67d4;
        case 0x1d67d8u: goto label_1d67d8;
        case 0x1d67dcu: goto label_1d67dc;
        case 0x1d67e0u: goto label_1d67e0;
        case 0x1d67e4u: goto label_1d67e4;
        case 0x1d67e8u: goto label_1d67e8;
        case 0x1d67ecu: goto label_1d67ec;
        case 0x1d67f0u: goto label_1d67f0;
        case 0x1d67f4u: goto label_1d67f4;
        case 0x1d67f8u: goto label_1d67f8;
        case 0x1d67fcu: goto label_1d67fc;
        case 0x1d6800u: goto label_1d6800;
        case 0x1d6804u: goto label_1d6804;
        case 0x1d6808u: goto label_1d6808;
        case 0x1d680cu: goto label_1d680c;
        case 0x1d6810u: goto label_1d6810;
        case 0x1d6814u: goto label_1d6814;
        case 0x1d6818u: goto label_1d6818;
        case 0x1d681cu: goto label_1d681c;
        case 0x1d6820u: goto label_1d6820;
        case 0x1d6824u: goto label_1d6824;
        case 0x1d6828u: goto label_1d6828;
        case 0x1d682cu: goto label_1d682c;
        case 0x1d6830u: goto label_1d6830;
        case 0x1d6834u: goto label_1d6834;
        case 0x1d6838u: goto label_1d6838;
        case 0x1d683cu: goto label_1d683c;
        case 0x1d6840u: goto label_1d6840;
        case 0x1d6844u: goto label_1d6844;
        case 0x1d6848u: goto label_1d6848;
        case 0x1d684cu: goto label_1d684c;
        case 0x1d6850u: goto label_1d6850;
        case 0x1d6854u: goto label_1d6854;
        case 0x1d6858u: goto label_1d6858;
        case 0x1d685cu: goto label_1d685c;
        case 0x1d6860u: goto label_1d6860;
        case 0x1d6864u: goto label_1d6864;
        case 0x1d6868u: goto label_1d6868;
        case 0x1d686cu: goto label_1d686c;
        case 0x1d6870u: goto label_1d6870;
        case 0x1d6874u: goto label_1d6874;
        case 0x1d6878u: goto label_1d6878;
        case 0x1d687cu: goto label_1d687c;
        case 0x1d6880u: goto label_1d6880;
        case 0x1d6884u: goto label_1d6884;
        case 0x1d6888u: goto label_1d6888;
        case 0x1d688cu: goto label_1d688c;
        case 0x1d6890u: goto label_1d6890;
        case 0x1d6894u: goto label_1d6894;
        case 0x1d6898u: goto label_1d6898;
        case 0x1d689cu: goto label_1d689c;
        case 0x1d68a0u: goto label_1d68a0;
        case 0x1d68a4u: goto label_1d68a4;
        case 0x1d68a8u: goto label_1d68a8;
        case 0x1d68acu: goto label_1d68ac;
        case 0x1d68b0u: goto label_1d68b0;
        case 0x1d68b4u: goto label_1d68b4;
        case 0x1d68b8u: goto label_1d68b8;
        case 0x1d68bcu: goto label_1d68bc;
        case 0x1d68c0u: goto label_1d68c0;
        case 0x1d68c4u: goto label_1d68c4;
        case 0x1d68c8u: goto label_1d68c8;
        case 0x1d68ccu: goto label_1d68cc;
        case 0x1d68d0u: goto label_1d68d0;
        case 0x1d68d4u: goto label_1d68d4;
        case 0x1d68d8u: goto label_1d68d8;
        case 0x1d68dcu: goto label_1d68dc;
        case 0x1d68e0u: goto label_1d68e0;
        case 0x1d68e4u: goto label_1d68e4;
        case 0x1d68e8u: goto label_1d68e8;
        case 0x1d68ecu: goto label_1d68ec;
        case 0x1d68f0u: goto label_1d68f0;
        case 0x1d68f4u: goto label_1d68f4;
        case 0x1d68f8u: goto label_1d68f8;
        case 0x1d68fcu: goto label_1d68fc;
        case 0x1d6900u: goto label_1d6900;
        case 0x1d6904u: goto label_1d6904;
        case 0x1d6908u: goto label_1d6908;
        case 0x1d690cu: goto label_1d690c;
        default: break;
    }

    ctx->pc = 0x1d60c0u;

label_1d60c0:
    // 0x1d60c0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1d60c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_1d60c4:
    // 0x1d60c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d60c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d60c8:
    // 0x1d60c8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1d60c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1d60cc:
    // 0x1d60cc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1d60ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1d60d0:
    // 0x1d60d0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1d60d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1d60d4:
    // 0x1d60d4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1d60d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1d60d8:
    // 0x1d60d8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1d60d8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d60dc:
    // 0x1d60dc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1d60dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1d60e0:
    // 0x1d60e0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d60e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1d60e4:
    // 0x1d60e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d60e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1d60e8:
    // 0x1d60e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d60e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d60ec:
    // 0x1d60ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d60ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d60f0:
    // 0x1d60f0: 0x8c920008  lw          $s2, 0x8($a0)
    ctx->pc = 0x1d60f0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1d60f4:
    // 0x1d60f4: 0x8e430e30  lw          $v1, 0xE30($s2)
    ctx->pc = 0x1d60f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3632)));
label_1d60f8:
    // 0x1d60f8: 0x8e510550  lw          $s1, 0x550($s2)
    ctx->pc = 0x1d60f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1360)));
label_1d60fc:
    // 0x1d60fc: 0x14650051  bne         $v1, $a1, . + 4 + (0x51 << 2)
label_1d6100:
    if (ctx->pc == 0x1D6100u) {
        ctx->pc = 0x1D6100u;
            // 0x1d6100: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D6104u;
        goto label_1d6104;
    }
    ctx->pc = 0x1D60FCu;
    {
        const bool branch_taken_0x1d60fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1D6100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D60FCu;
            // 0x1d6100: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d60fc) {
            ctx->pc = 0x1D6244u;
            goto label_1d6244;
        }
    }
    ctx->pc = 0x1D6104u;
label_1d6104:
    // 0x1d6104: 0x824311ad  lb          $v1, 0x11AD($s2)
    ctx->pc = 0x1d6104u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4525)));
label_1d6108:
    // 0x1d6108: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d6108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d610c:
    // 0x1d610c: 0x506201cd  beql        $v1, $v0, . + 4 + (0x1CD << 2)
label_1d6110:
    if (ctx->pc == 0x1D6110u) {
        ctx->pc = 0x1D6110u;
            // 0x1d6110: 0xc641118c  lwc1        $f1, 0x118C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x1D6114u;
        goto label_1d6114;
    }
    ctx->pc = 0x1D610Cu;
    {
        const bool branch_taken_0x1d610c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d610c) {
            ctx->pc = 0x1D6110u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D610Cu;
            // 0x1d6110: 0xc641118c  lwc1        $f1, 0x118C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D6844u;
            goto label_1d6844;
        }
    }
    ctx->pc = 0x1D6114u;
label_1d6114:
    // 0x1d6114: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1d6114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_1d6118:
    // 0x1d6118: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d6118u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d611c:
    // 0x1d611c: 0x24420e84  addiu       $v0, $v0, 0xE84
    ctx->pc = 0x1d611cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3716));
label_1d6120:
    // 0x1d6120: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1d6120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1d6124:
    // 0x1d6124: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d6124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d6128:
    // 0x1d6128: 0x264602c0  addiu       $a2, $s2, 0x2C0
    ctx->pc = 0x1d6128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
label_1d612c:
    // 0x1d612c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1d612cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d6130:
    // 0x1d6130: 0xc04cc90  jal         func_133240
label_1d6134:
    if (ctx->pc == 0x1D6134u) {
        ctx->pc = 0x1D6134u;
            // 0x1d6134: 0x260502c0  addiu       $a1, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->pc = 0x1D6138u;
        goto label_1d6138;
    }
    ctx->pc = 0x1D6130u;
    SET_GPR_U32(ctx, 31, 0x1D6138u);
    ctx->pc = 0x1D6134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6130u;
            // 0x1d6134: 0x260502c0  addiu       $a1, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6138u; }
        if (ctx->pc != 0x1D6138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6138u; }
        if (ctx->pc != 0x1D6138u) { return; }
    }
    ctx->pc = 0x1D6138u;
label_1d6138:
    // 0x1d6138: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1d6138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1d613c:
    // 0x1d613c: 0xc04ccf4  jal         func_1333D0
label_1d6140:
    if (ctx->pc == 0x1D6140u) {
        ctx->pc = 0x1D6140u;
            // 0x1d6140: 0x264507e0  addiu       $a1, $s2, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 2016));
        ctx->pc = 0x1D6144u;
        goto label_1d6144;
    }
    ctx->pc = 0x1D613Cu;
    SET_GPR_U32(ctx, 31, 0x1D6144u);
    ctx->pc = 0x1D6140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D613Cu;
            // 0x1d6140: 0x264507e0  addiu       $a1, $s2, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6144u; }
        if (ctx->pc != 0x1D6144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6144u; }
        if (ctx->pc != 0x1D6144u) { return; }
    }
    ctx->pc = 0x1D6144u;
label_1d6144:
    // 0x1d6144: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x1d6144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1d6148:
    // 0x1d6148: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1d6148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1d614c:
    // 0x1d614c: 0xc04cca0  jal         func_133280
label_1d6150:
    if (ctx->pc == 0x1D6150u) {
        ctx->pc = 0x1D6150u;
            // 0x1d6150: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D6154u;
        goto label_1d6154;
    }
    ctx->pc = 0x1D614Cu;
    SET_GPR_U32(ctx, 31, 0x1D6154u);
    ctx->pc = 0x1D6150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D614Cu;
            // 0x1d6150: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6154u; }
        if (ctx->pc != 0x1D6154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6154u; }
        if (ctx->pc != 0x1D6154u) { return; }
    }
    ctx->pc = 0x1D6154u;
label_1d6154:
    // 0x1d6154: 0xc6400de4  lwc1        $f0, 0xDE4($s2)
    ctx->pc = 0x1d6154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d6158:
    // 0x1d6158: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x1d6158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_1d615c:
    // 0x1d615c: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x1d615cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_1d6160:
    // 0x1d6160: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1d6160u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1d6164:
    // 0x1d6164: 0xe64011b0  swc1        $f0, 0x11B0($s2)
    ctx->pc = 0x1d6164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4528), bits); }
label_1d6168:
    // 0x1d6168: 0xc6400de8  lwc1        $f0, 0xDE8($s2)
    ctx->pc = 0x1d6168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d616c:
    // 0x1d616c: 0xe64011b4  swc1        $f0, 0x11B4($s2)
    ctx->pc = 0x1d616cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4532), bits); }
label_1d6170:
    // 0x1d6170: 0xc6400dec  lwc1        $f0, 0xDEC($s2)
    ctx->pc = 0x1d6170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d6174:
    // 0x1d6174: 0xe64011b8  swc1        $f0, 0x11B8($s2)
    ctx->pc = 0x1d6174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4536), bits); }
label_1d6178:
    // 0x1d6178: 0xc6000de4  lwc1        $f0, 0xDE4($s0)
    ctx->pc = 0x1d6178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d617c:
    // 0x1d617c: 0xe6400de4  swc1        $f0, 0xDE4($s2)
    ctx->pc = 0x1d617cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3556), bits); }
label_1d6180:
    // 0x1d6180: 0xc6000dec  lwc1        $f0, 0xDEC($s0)
    ctx->pc = 0x1d6180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d6184:
    // 0x1d6184: 0xe6400dec  swc1        $f0, 0xDEC($s2)
    ctx->pc = 0x1d6184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3564), bits); }
label_1d6188:
    // 0x1d6188: 0xc6000de8  lwc1        $f0, 0xDE8($s0)
    ctx->pc = 0x1d6188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d618c:
    // 0x1d618c: 0xe6400de8  swc1        $f0, 0xDE8($s2)
    ctx->pc = 0x1d618cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3560), bits); }
label_1d6190:
    // 0x1d6190: 0x8e440db8  lw          $a0, 0xDB8($s2)
    ctx->pc = 0x1d6190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3512)));
label_1d6194:
    // 0x1d6194: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x1d6194u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
label_1d6198:
    // 0x1d6198: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1d6198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1d619c:
    // 0x1d619c: 0xae440db8  sw          $a0, 0xDB8($s2)
    ctx->pc = 0x1d619cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3512), GPR_U32(ctx, 4));
label_1d61a0:
    // 0x1d61a0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d61a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1d61a4:
    // 0x1d61a4: 0xae430db8  sw          $v1, 0xDB8($s2)
    ctx->pc = 0x1d61a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3512), GPR_U32(ctx, 3));
label_1d61a8:
    // 0x1d61a8: 0xae420db8  sw          $v0, 0xDB8($s2)
    ctx->pc = 0x1d61a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3512), GPR_U32(ctx, 2));
label_1d61ac:
    // 0x1d61ac: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x1d61acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d61b0:
    // 0x1d61b0: 0x460d0036  c.le.s      $f0, $f13
    ctx->pc = 0x1d61b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d61b4:
    // 0x1d61b4: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
label_1d61b8:
    if (ctx->pc == 0x1D61B8u) {
        ctx->pc = 0x1D61B8u;
            // 0x1d61b8: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x1D61BCu;
        goto label_1d61bc;
    }
    ctx->pc = 0x1D61B4u;
    {
        const bool branch_taken_0x1d61b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d61b4) {
            ctx->pc = 0x1D61B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D61B4u;
            // 0x1d61b8: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D61D8u;
            goto label_1d61d8;
        }
    }
    ctx->pc = 0x1D61BCu;
label_1d61bc:
    // 0x1d61bc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1d61bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1d61c0:
    // 0x1d61c0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1d61c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1d61c4:
    // 0x1d61c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d61c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d61c8:
    // 0x1d61c8: 0xc04cbd8  jal         func_132F60
label_1d61cc:
    if (ctx->pc == 0x1D61CCu) {
        ctx->pc = 0x1D61CCu;
            // 0x1d61cc: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x1D61D0u;
        goto label_1d61d0;
    }
    ctx->pc = 0x1D61C8u;
    SET_GPR_U32(ctx, 31, 0x1D61D0u);
    ctx->pc = 0x1D61CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D61C8u;
            // 0x1d61cc: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D61D0u; }
        if (ctx->pc != 0x1D61D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D61D0u; }
        if (ctx->pc != 0x1D61D0u) { return; }
    }
    ctx->pc = 0x1D61D0u;
label_1d61d0:
    // 0x1d61d0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1d61d4:
    if (ctx->pc == 0x1D61D4u) {
        ctx->pc = 0x1D61D4u;
            // 0x1d61d4: 0xae4011bc  sw          $zero, 0x11BC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4540), GPR_U32(ctx, 0));
        ctx->pc = 0x1D61D8u;
        goto label_1d61d8;
    }
    ctx->pc = 0x1D61D0u;
    {
        const bool branch_taken_0x1d61d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D61D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D61D0u;
            // 0x1d61d4: 0xae4011bc  sw          $zero, 0x11BC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4540), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d61d0) {
            ctx->pc = 0x1D61F0u;
            goto label_1d61f0;
        }
    }
    ctx->pc = 0x1D61D8u;
label_1d61d8:
    // 0x1d61d8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1d61d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1d61dc:
    // 0x1d61dc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d61dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d61e0:
    // 0x1d61e0: 0xc04cbd8  jal         func_132F60
label_1d61e4:
    if (ctx->pc == 0x1D61E4u) {
        ctx->pc = 0x1D61E4u;
            // 0x1d61e4: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x1D61E8u;
        goto label_1d61e8;
    }
    ctx->pc = 0x1D61E0u;
    SET_GPR_U32(ctx, 31, 0x1D61E8u);
    ctx->pc = 0x1D61E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D61E0u;
            // 0x1d61e4: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D61E8u; }
        if (ctx->pc != 0x1D61E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D61E8u; }
        if (ctx->pc != 0x1D61E8u) { return; }
    }
    ctx->pc = 0x1D61E8u;
label_1d61e8:
    // 0x1d61e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d61e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d61ec:
    // 0x1d61ec: 0xae4211bc  sw          $v0, 0x11BC($s2)
    ctx->pc = 0x1d61ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4540), GPR_U32(ctx, 2));
label_1d61f0:
    // 0x1d61f0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1d61f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1d61f4:
    // 0x1d61f4: 0x260507e0  addiu       $a1, $s0, 0x7E0
    ctx->pc = 0x1d61f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2016));
label_1d61f8:
    // 0x1d61f8: 0xc04cca0  jal         func_133280
label_1d61fc:
    if (ctx->pc == 0x1D61FCu) {
        ctx->pc = 0x1D61FCu;
            // 0x1d61fc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D6200u;
        goto label_1d6200;
    }
    ctx->pc = 0x1D61F8u;
    SET_GPR_U32(ctx, 31, 0x1D6200u);
    ctx->pc = 0x1D61FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D61F8u;
            // 0x1d61fc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6200u; }
        if (ctx->pc != 0x1D6200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6200u; }
        if (ctx->pc != 0x1D6200u) { return; }
    }
    ctx->pc = 0x1D6200u;
label_1d6200:
    // 0x1d6200: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1d6200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1d6204:
    // 0x1d6204: 0x260502c0  addiu       $a1, $s0, 0x2C0
    ctx->pc = 0x1d6204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
label_1d6208:
    // 0x1d6208: 0xc04cbe0  jal         func_132F80
label_1d620c:
    if (ctx->pc == 0x1D620Cu) {
        ctx->pc = 0x1D620Cu;
            // 0x1d620c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D6210u;
        goto label_1d6210;
    }
    ctx->pc = 0x1D6208u;
    SET_GPR_U32(ctx, 31, 0x1D6210u);
    ctx->pc = 0x1D620Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6208u;
            // 0x1d620c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6210u; }
        if (ctx->pc != 0x1D6210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6210u; }
        if (ctx->pc != 0x1D6210u) { return; }
    }
    ctx->pc = 0x1D6210u;
label_1d6210:
    // 0x1d6210: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1d6210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1d6214:
    // 0x1d6214: 0x264602c0  addiu       $a2, $s2, 0x2C0
    ctx->pc = 0x1d6214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
label_1d6218:
    // 0x1d6218: 0xc04cc90  jal         func_133240
label_1d621c:
    if (ctx->pc == 0x1D621Cu) {
        ctx->pc = 0x1D621Cu;
            // 0x1d621c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D6220u;
        goto label_1d6220;
    }
    ctx->pc = 0x1D6218u;
    SET_GPR_U32(ctx, 31, 0x1D6220u);
    ctx->pc = 0x1D621Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6218u;
            // 0x1d621c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6220u; }
        if (ctx->pc != 0x1D6220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6220u; }
        if (ctx->pc != 0x1D6220u) { return; }
    }
    ctx->pc = 0x1D6220u;
label_1d6220:
    // 0x1d6220: 0x26440330  addiu       $a0, $s2, 0x330
    ctx->pc = 0x1d6220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 816));
label_1d6224:
    // 0x1d6224: 0xc04cc04  jal         func_133010
label_1d6228:
    if (ctx->pc == 0x1D6228u) {
        ctx->pc = 0x1D6228u;
            // 0x1d6228: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x1D622Cu;
        goto label_1d622c;
    }
    ctx->pc = 0x1D6224u;
    SET_GPR_U32(ctx, 31, 0x1D622Cu);
    ctx->pc = 0x1D6228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6224u;
            // 0x1d6228: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D622Cu; }
        if (ctx->pc != 0x1D622Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D622Cu; }
        if (ctx->pc != 0x1D622Cu) { return; }
    }
    ctx->pc = 0x1D622Cu;
label_1d622c:
    // 0x1d622c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1d622cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1d6230:
    // 0x1d6230: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d6230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d6234:
    // 0x1d6234: 0xae430e24  sw          $v1, 0xE24($s2)
    ctx->pc = 0x1d6234u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3620), GPR_U32(ctx, 3));
label_1d6238:
    // 0x1d6238: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1d6238u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d623c:
    // 0x1d623c: 0x10000180  b           . + 4 + (0x180 << 2)
label_1d6240:
    if (ctx->pc == 0x1D6240u) {
        ctx->pc = 0x1D6240u;
            // 0x1d6240: 0xae420e30  sw          $v0, 0xE30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3632), GPR_U32(ctx, 2));
        ctx->pc = 0x1D6244u;
        goto label_1d6244;
    }
    ctx->pc = 0x1D623Cu;
    {
        const bool branch_taken_0x1d623c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D623Cu;
            // 0x1d6240: 0xae420e30  sw          $v0, 0xE30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3632), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d623c) {
            ctx->pc = 0x1D6840u;
            goto label_1d6840;
        }
    }
    ctx->pc = 0x1D6244u;
label_1d6244:
    // 0x1d6244: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d6244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d6248:
    // 0x1d6248: 0x54620046  bnel        $v1, $v0, . + 4 + (0x46 << 2)
label_1d624c:
    if (ctx->pc == 0x1D624Cu) {
        ctx->pc = 0x1D624Cu;
            // 0x1d624c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1D6250u;
        goto label_1d6250;
    }
    ctx->pc = 0x1D6248u;
    {
        const bool branch_taken_0x1d6248 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d6248) {
            ctx->pc = 0x1D624Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6248u;
            // 0x1d624c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D6364u;
            goto label_1d6364;
        }
    }
    ctx->pc = 0x1D6250u;
label_1d6250:
    // 0x1d6250: 0x824511ad  lb          $a1, 0x11AD($s2)
    ctx->pc = 0x1d6250u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4525)));
label_1d6254:
    // 0x1d6254: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x1d6254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_1d6258:
    // 0x1d6258: 0x8e420db8  lw          $v0, 0xDB8($s2)
    ctx->pc = 0x1d6258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3512)));
label_1d625c:
    // 0x1d625c: 0x24630e84  addiu       $v1, $v1, 0xE84
    ctx->pc = 0x1d625cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3716));
label_1d6260:
    // 0x1d6260: 0x26440330  addiu       $a0, $s2, 0x330
    ctx->pc = 0x1d6260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 816));
label_1d6264:
    // 0x1d6264: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1d6264u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1d6268:
    // 0x1d6268: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1d6268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1d626c:
    // 0x1d626c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1d626cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_1d6270:
    // 0x1d6270: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1d6270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d6274:
    // 0x1d6274: 0xae420db8  sw          $v0, 0xDB8($s2)
    ctx->pc = 0x1d6274u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3512), GPR_U32(ctx, 2));
label_1d6278:
    // 0x1d6278: 0xc04cc04  jal         func_133010
label_1d627c:
    if (ctx->pc == 0x1D627Cu) {
        ctx->pc = 0x1D627Cu;
            // 0x1d627c: 0x24650330  addiu       $a1, $v1, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 816));
        ctx->pc = 0x1D6280u;
        goto label_1d6280;
    }
    ctx->pc = 0x1D6278u;
    SET_GPR_U32(ctx, 31, 0x1D6280u);
    ctx->pc = 0x1D627Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6278u;
            // 0x1d627c: 0x24650330  addiu       $a1, $v1, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6280u; }
        if (ctx->pc != 0x1D6280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6280u; }
        if (ctx->pc != 0x1D6280u) { return; }
    }
    ctx->pc = 0x1D6280u;
label_1d6280:
    // 0x1d6280: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1d6280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1d6284:
    // 0x1d6284: 0x8c438a08  lw          $v1, -0x75F8($v0)
    ctx->pc = 0x1d6284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_1d6288:
    // 0x1d6288: 0xc6420e24  lwc1        $f2, 0xE24($s2)
    ctx->pc = 0x1d6288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d628c:
    // 0x1d628c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1d628cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d6290:
    // 0x1d6290: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d6290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d6294:
    // 0x1d6294: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d6294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d6298:
    // 0x1d6298: 0x0  nop
    ctx->pc = 0x1d6298u;
    // NOP
label_1d629c:
    // 0x1d629c: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1d629cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1d62a0:
    // 0x1d62a0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d62a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d62a4:
    // 0x1d62a4: 0x45010166  bc1t        . + 4 + (0x166 << 2)
label_1d62a8:
    if (ctx->pc == 0x1D62A8u) {
        ctx->pc = 0x1D62A8u;
            // 0x1d62a8: 0xe6410e24  swc1        $f1, 0xE24($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3620), bits); }
        ctx->pc = 0x1D62ACu;
        goto label_1d62ac;
    }
    ctx->pc = 0x1D62A4u;
    {
        const bool branch_taken_0x1d62a4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D62A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D62A4u;
            // 0x1d62a8: 0xe6410e24  swc1        $f1, 0xE24($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3620), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d62a4) {
            ctx->pc = 0x1D6840u;
            goto label_1d6840;
        }
    }
    ctx->pc = 0x1D62ACu;
label_1d62ac:
    // 0x1d62ac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d62acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d62b0:
    // 0x1d62b0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1d62b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d62b4:
    // 0x1d62b4: 0xae420e30  sw          $v0, 0xE30($s2)
    ctx->pc = 0x1d62b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3632), GPR_U32(ctx, 2));
label_1d62b8:
    // 0x1d62b8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d62b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d62bc:
    // 0x1d62bc: 0xae400e24  sw          $zero, 0xE24($s2)
    ctx->pc = 0x1d62bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3620), GPR_U32(ctx, 0));
label_1d62c0:
    // 0x1d62c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d62c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d62c4:
    // 0x1d62c4: 0x8223010c  lb          $v1, 0x10C($s1)
    ctx->pc = 0x1d62c4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 268)));
label_1d62c8:
    // 0x1d62c8: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x1d62c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d62cc:
    // 0x1d62cc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1d62ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1d62d0:
    // 0x1d62d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d62d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d62d4:
    // 0x1d62d4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1d62d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1d62d8:
    // 0x1d62d8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d62d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1d62dc:
    // 0x1d62dc: 0xac440080  sw          $a0, 0x80($v0)
    ctx->pc = 0x1d62dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 4));
label_1d62e0:
    // 0x1d62e0: 0x8e4211bc  lw          $v0, 0x11BC($s2)
    ctx->pc = 0x1d62e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4540)));
label_1d62e4:
    // 0x1d62e4: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_1d62e8:
    if (ctx->pc == 0x1D62E8u) {
        ctx->pc = 0x1D62E8u;
            // 0x1d62e8: 0x8e390058  lw          $t9, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->pc = 0x1D62ECu;
        goto label_1d62ec;
    }
    ctx->pc = 0x1D62E4u;
    {
        const bool branch_taken_0x1d62e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d62e4) {
            ctx->pc = 0x1D62E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D62E4u;
            // 0x1d62e8: 0x8e390058  lw          $t9, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D631Cu;
            goto label_1d631c;
        }
    }
    ctx->pc = 0x1D62ECu;
label_1d62ec:
    // 0x1d62ec: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x1d62ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_1d62f0:
    // 0x1d62f0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1d62f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_1d62f4:
    // 0x1d62f4: 0x8225010d  lb          $a1, 0x10D($s1)
    ctx->pc = 0x1d62f4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 269)));
label_1d62f8:
    // 0x1d62f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d62f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d62fc:
    // 0x1d62fc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1d62fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1d6300:
    // 0x1d6300: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x1d6300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1d6304:
    // 0x1d6304: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x1d6304u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_1d6308:
    // 0x1d6308: 0x320f809  jalr        $t9
label_1d630c:
    if (ctx->pc == 0x1D630Cu) {
        ctx->pc = 0x1D630Cu;
            // 0x1d630c: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x1D6310u;
        goto label_1d6310;
    }
    ctx->pc = 0x1D6308u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D6310u);
        ctx->pc = 0x1D630Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6308u;
            // 0x1d630c: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D6310u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D6310u; }
            if (ctx->pc != 0x1D6310u) { return; }
        }
        }
    }
    ctx->pc = 0x1D6310u;
label_1d6310:
    // 0x1d6310: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d6310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d6314:
    // 0x1d6314: 0x1000000b  b           . + 4 + (0xB << 2)
label_1d6318:
    if (ctx->pc == 0x1D6318u) {
        ctx->pc = 0x1D6318u;
            // 0x1d6318: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
        ctx->pc = 0x1D631Cu;
        goto label_1d631c;
    }
    ctx->pc = 0x1D6314u;
    {
        const bool branch_taken_0x1d6314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6314u;
            // 0x1d6318: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6314) {
            ctx->pc = 0x1D6344u;
            goto label_1d6344;
        }
    }
    ctx->pc = 0x1D631Cu;
label_1d631c:
    // 0x1d631c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1d631cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_1d6320:
    // 0x1d6320: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1d6320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1d6324:
    // 0x1d6324: 0x8225010d  lb          $a1, 0x10D($s1)
    ctx->pc = 0x1d6324u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 269)));
label_1d6328:
    // 0x1d6328: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d6328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d632c:
    // 0x1d632c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x1d632cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_1d6330:
    // 0x1d6330: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1d6330u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1d6334:
    // 0x1d6334: 0x320f809  jalr        $t9
label_1d6338:
    if (ctx->pc == 0x1D6338u) {
        ctx->pc = 0x1D6338u;
            // 0x1d6338: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D633Cu;
        goto label_1d633c;
    }
    ctx->pc = 0x1D6334u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D633Cu);
        ctx->pc = 0x1D6338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6334u;
            // 0x1d6338: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D633Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D633Cu; }
            if (ctx->pc != 0x1D633Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1D633Cu;
label_1d633c:
    // 0x1d633c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d633cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d6340:
    // 0x1d6340: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x1d6340u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
label_1d6344:
    // 0x1d6344: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x1d6344u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_1d6348:
    // 0x1d6348: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1d6348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d634c:
    // 0x1d634c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d634cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d6350:
    // 0x1d6350: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1d6350u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_1d6354:
    // 0x1d6354: 0x320f809  jalr        $t9
label_1d6358:
    if (ctx->pc == 0x1D6358u) {
        ctx->pc = 0x1D6358u;
            // 0x1d6358: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D635Cu;
        goto label_1d635c;
    }
    ctx->pc = 0x1D6354u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D635Cu);
        ctx->pc = 0x1D6358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6354u;
            // 0x1d6358: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D635Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D635Cu; }
            if (ctx->pc != 0x1D635Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1D635Cu;
label_1d635c:
    // 0x1d635c: 0x10000138  b           . + 4 + (0x138 << 2)
label_1d6360:
    if (ctx->pc == 0x1D6360u) {
        ctx->pc = 0x1D6360u;
            // 0x1d6360: 0x24150002  addiu       $s5, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1D6364u;
        goto label_1d6364;
    }
    ctx->pc = 0x1D635Cu;
    {
        const bool branch_taken_0x1d635c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D635Cu;
            // 0x1d6360: 0x24150002  addiu       $s5, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d635c) {
            ctx->pc = 0x1D6840u;
            goto label_1d6840;
        }
    }
    ctx->pc = 0x1D6364u;
label_1d6364:
    // 0x1d6364: 0x14620136  bne         $v1, $v0, . + 4 + (0x136 << 2)
label_1d6368:
    if (ctx->pc == 0x1D6368u) {
        ctx->pc = 0x1D636Cu;
        goto label_1d636c;
    }
    ctx->pc = 0x1D6364u;
    {
        const bool branch_taken_0x1d6364 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d6364) {
            ctx->pc = 0x1D6840u;
            goto label_1d6840;
        }
    }
    ctx->pc = 0x1D636Cu;
label_1d636c:
    // 0x1d636c: 0x824411ad  lb          $a0, 0x11AD($s2)
    ctx->pc = 0x1d636cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4525)));
label_1d6370:
    // 0x1d6370: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x1d6370u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_1d6374:
    // 0x1d6374: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1d6374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1d6378:
    // 0x1d6378: 0x24630e84  addiu       $v1, $v1, 0xE84
    ctx->pc = 0x1d6378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3716));
label_1d637c:
    // 0x1d637c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1d637cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1d6380:
    // 0x1d6380: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d6380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1d6384:
    // 0x1d6384: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d6384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d6388:
    // 0x1d6388: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
label_1d638c:
    if (ctx->pc == 0x1D638Cu) {
        ctx->pc = 0x1D638Cu;
            // 0x1d638c: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x1D6390u;
        goto label_1d6390;
    }
    ctx->pc = 0x1D6388u;
    {
        const bool branch_taken_0x1d6388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D638Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6388u;
            // 0x1d638c: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6388) {
            ctx->pc = 0x1D64B8u;
            goto label_1d64b8;
        }
    }
    ctx->pc = 0x1D6390u;
label_1d6390:
    // 0x1d6390: 0x8223010c  lb          $v1, 0x10C($s1)
    ctx->pc = 0x1d6390u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 268)));
label_1d6394:
    // 0x1d6394: 0x3c023eed  lui         $v0, 0x3EED
    ctx->pc = 0x1d6394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16109 << 16));
label_1d6398:
    // 0x1d6398: 0x3442097b  ori         $v0, $v0, 0x97B
    ctx->pc = 0x1d6398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_1d639c:
    // 0x1d639c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1d639cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d63a0:
    // 0x1d63a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d63a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d63a4:
    // 0x1d63a4: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x1d63a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1d63a8:
    // 0x1d63a8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1d63a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1d63ac:
    // 0x1d63ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d63acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d63b0:
    // 0x1d63b0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1d63b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1d63b4:
    // 0x1d63b4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1d63b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1d63b8:
    // 0x1d63b8: 0xac440080  sw          $a0, 0x80($v0)
    ctx->pc = 0x1d63b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 4));
label_1d63bc:
    // 0x1d63bc: 0xc6410de4  lwc1        $f1, 0xDE4($s2)
    ctx->pc = 0x1d63bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d63c0:
    // 0x1d63c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d63c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d63c4:
    // 0x1d63c4: 0x4502000d  bc1fl       . + 4 + (0xD << 2)
label_1d63c8:
    if (ctx->pc == 0x1D63C8u) {
        ctx->pc = 0x1D63C8u;
            // 0x1d63c8: 0x8e390058  lw          $t9, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->pc = 0x1D63CCu;
        goto label_1d63cc;
    }
    ctx->pc = 0x1D63C4u;
    {
        const bool branch_taken_0x1d63c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d63c4) {
            ctx->pc = 0x1D63C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D63C4u;
            // 0x1d63c8: 0x8e390058  lw          $t9, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D63FCu;
            goto label_1d63fc;
        }
    }
    ctx->pc = 0x1D63CCu;
label_1d63cc:
    // 0x1d63cc: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x1d63ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_1d63d0:
    // 0x1d63d0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1d63d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_1d63d4:
    // 0x1d63d4: 0x8225010d  lb          $a1, 0x10D($s1)
    ctx->pc = 0x1d63d4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 269)));
label_1d63d8:
    // 0x1d63d8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d63d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d63dc:
    // 0x1d63dc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1d63dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1d63e0:
    // 0x1d63e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d63e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d63e4:
    // 0x1d63e4: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x1d63e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_1d63e8:
    // 0x1d63e8: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x1d63e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1d63ec:
    // 0x1d63ec: 0x320f809  jalr        $t9
label_1d63f0:
    if (ctx->pc == 0x1D63F0u) {
        ctx->pc = 0x1D63F0u;
            // 0x1d63f0: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x1D63F4u;
        goto label_1d63f4;
    }
    ctx->pc = 0x1D63ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D63F4u);
        ctx->pc = 0x1D63F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D63ECu;
            // 0x1d63f0: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D63F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D63F4u; }
            if (ctx->pc != 0x1D63F4u) { return; }
        }
        }
    }
    ctx->pc = 0x1D63F4u;
label_1d63f4:
    // 0x1d63f4: 0x1000000b  b           . + 4 + (0xB << 2)
label_1d63f8:
    if (ctx->pc == 0x1D63F8u) {
        ctx->pc = 0x1D63F8u;
            // 0x1d63f8: 0x8e390058  lw          $t9, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->pc = 0x1D63FCu;
        goto label_1d63fc;
    }
    ctx->pc = 0x1D63F4u;
    {
        const bool branch_taken_0x1d63f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D63F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D63F4u;
            // 0x1d63f8: 0x8e390058  lw          $t9, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d63f4) {
            ctx->pc = 0x1D6424u;
            goto label_1d6424;
        }
    }
    ctx->pc = 0x1D63FCu;
label_1d63fc:
    // 0x1d63fc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1d63fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_1d6400:
    // 0x1d6400: 0x8225010d  lb          $a1, 0x10D($s1)
    ctx->pc = 0x1d6400u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 269)));
label_1d6404:
    // 0x1d6404: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d6404u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d6408:
    // 0x1d6408: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1d6408u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1d640c:
    // 0x1d640c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d640cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d6410:
    // 0x1d6410: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x1d6410u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_1d6414:
    // 0x1d6414: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x1d6414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1d6418:
    // 0x1d6418: 0x320f809  jalr        $t9
label_1d641c:
    if (ctx->pc == 0x1D641Cu) {
        ctx->pc = 0x1D641Cu;
            // 0x1d641c: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x1D6420u;
        goto label_1d6420;
    }
    ctx->pc = 0x1D6418u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D6420u);
        ctx->pc = 0x1D641Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6418u;
            // 0x1d641c: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D6420u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D6420u; }
            if (ctx->pc != 0x1D6420u) { return; }
        }
        }
    }
    ctx->pc = 0x1D6420u;
label_1d6420:
    // 0x1d6420: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x1d6420u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_1d6424:
    // 0x1d6424: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d6424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d6428:
    // 0x1d6428: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1d6428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1d642c:
    // 0x1d642c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1d642cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_1d6430:
    // 0x1d6430: 0x320f809  jalr        $t9
label_1d6434:
    if (ctx->pc == 0x1D6434u) {
        ctx->pc = 0x1D6434u;
            // 0x1d6434: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1D6438u;
        goto label_1d6438;
    }
    ctx->pc = 0x1D6430u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D6438u);
        ctx->pc = 0x1D6434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6430u;
            // 0x1d6434: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D6438u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D6438u; }
            if (ctx->pc != 0x1D6438u) { return; }
        }
        }
    }
    ctx->pc = 0x1D6438u;
label_1d6438:
    // 0x1d6438: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d6438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d643c:
    // 0x1d643c: 0xae420e30  sw          $v0, 0xE30($s2)
    ctx->pc = 0x1d643cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3632), GPR_U32(ctx, 2));
label_1d6440:
    // 0x1d6440: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d6440u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d6444:
    // 0x1d6444: 0xc6010e20  lwc1        $f1, 0xE20($s0)
    ctx->pc = 0x1d6444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d6448:
    // 0x1d6448: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1d6448u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d644c:
    // 0x1d644c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_1d6450:
    if (ctx->pc == 0x1D6450u) {
        ctx->pc = 0x1D6450u;
            // 0x1d6450: 0x8e420db8  lw          $v0, 0xDB8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3512)));
        ctx->pc = 0x1D6454u;
        goto label_1d6454;
    }
    ctx->pc = 0x1D644Cu;
    {
        const bool branch_taken_0x1d644c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d644c) {
            ctx->pc = 0x1D6450u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D644Cu;
            // 0x1d6450: 0x8e420db8  lw          $v0, 0xDB8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3512)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D6460u;
            goto label_1d6460;
        }
    }
    ctx->pc = 0x1D6454u;
label_1d6454:
    // 0x1d6454: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d6454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d6458:
    // 0x1d6458: 0xae020e20  sw          $v0, 0xE20($s0)
    ctx->pc = 0x1d6458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3616), GPR_U32(ctx, 2));
label_1d645c:
    // 0x1d645c: 0x8e420db8  lw          $v0, 0xDB8($s2)
    ctx->pc = 0x1d645cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3512)));
label_1d6460:
    // 0x1d6460: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d6460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d6464:
    // 0x1d6464: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_1d6468:
    if (ctx->pc == 0x1D6468u) {
        ctx->pc = 0x1D6468u;
            // 0x1d6468: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1D646Cu;
        goto label_1d646c;
    }
    ctx->pc = 0x1D6464u;
    {
        const bool branch_taken_0x1d6464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6464) {
            ctx->pc = 0x1D6468u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6464u;
            // 0x1d6468: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D648Cu;
            goto label_1d648c;
        }
    }
    ctx->pc = 0x1D646Cu;
label_1d646c:
    // 0x1d646c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d646cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d6470:
    // 0x1d6470: 0x26440330  addiu       $a0, $s2, 0x330
    ctx->pc = 0x1d6470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 816));
label_1d6474:
    // 0x1d6474: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1d6474u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1d6478:
    // 0x1d6478: 0xc04cbd8  jal         func_132F60
label_1d647c:
    if (ctx->pc == 0x1D647Cu) {
        ctx->pc = 0x1D647Cu;
            // 0x1d647c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1D6480u;
        goto label_1d6480;
    }
    ctx->pc = 0x1D6478u;
    SET_GPR_U32(ctx, 31, 0x1D6480u);
    ctx->pc = 0x1D647Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6478u;
            // 0x1d647c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6480u; }
        if (ctx->pc != 0x1D6480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6480u; }
        if (ctx->pc != 0x1D6480u) { return; }
    }
    ctx->pc = 0x1D6480u;
label_1d6480:
    // 0x1d6480: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x1d6480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_1d6484:
    // 0x1d6484: 0xae420db8  sw          $v0, 0xDB8($s2)
    ctx->pc = 0x1d6484u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3512), GPR_U32(ctx, 2));
label_1d6488:
    // 0x1d6488: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d6488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d648c:
    // 0x1d648c: 0x24150005  addiu       $s5, $zero, 0x5
    ctx->pc = 0x1d648cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1d6490:
    // 0x1d6490: 0xa24211ad  sb          $v0, 0x11AD($s2)
    ctx->pc = 0x1d6490u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4525), (uint8_t)GPR_U32(ctx, 2));
label_1d6494:
    // 0x1d6494: 0xae400e20  sw          $zero, 0xE20($s2)
    ctx->pc = 0x1d6494u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3616), GPR_U32(ctx, 0));
label_1d6498:
    // 0x1d6498: 0xae400e24  sw          $zero, 0xE24($s2)
    ctx->pc = 0x1d6498u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3620), GPR_U32(ctx, 0));
label_1d649c:
    // 0x1d649c: 0xc64011b0  lwc1        $f0, 0x11B0($s2)
    ctx->pc = 0x1d649cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d64a0:
    // 0x1d64a0: 0xe6400de4  swc1        $f0, 0xDE4($s2)
    ctx->pc = 0x1d64a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3556), bits); }
label_1d64a4:
    // 0x1d64a4: 0xc64011b4  lwc1        $f0, 0x11B4($s2)
    ctx->pc = 0x1d64a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d64a8:
    // 0x1d64a8: 0xe6400de8  swc1        $f0, 0xDE8($s2)
    ctx->pc = 0x1d64a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3560), bits); }
label_1d64ac:
    // 0x1d64ac: 0xc64011b8  lwc1        $f0, 0x11B8($s2)
    ctx->pc = 0x1d64acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d64b0:
    // 0x1d64b0: 0x100000e3  b           . + 4 + (0xE3 << 2)
label_1d64b4:
    if (ctx->pc == 0x1D64B4u) {
        ctx->pc = 0x1D64B4u;
            // 0x1d64b4: 0xe6400dec  swc1        $f0, 0xDEC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3564), bits); }
        ctx->pc = 0x1D64B8u;
        goto label_1d64b8;
    }
    ctx->pc = 0x1D64B0u;
    {
        const bool branch_taken_0x1d64b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D64B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D64B0u;
            // 0x1d64b4: 0xe6400dec  swc1        $f0, 0xDEC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3564), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d64b0) {
            ctx->pc = 0x1D6840u;
            goto label_1d6840;
        }
    }
    ctx->pc = 0x1D64B8u;
label_1d64b8:
    // 0x1d64b8: 0x8e420e34  lw          $v0, 0xE34($s2)
    ctx->pc = 0x1d64b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3636)));
label_1d64bc:
    // 0x1d64bc: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x1d64bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d64c0:
    // 0x1d64c0: 0x30b700ff  andi        $s7, $a1, 0xFF
    ctx->pc = 0x1d64c0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1d64c4:
    // 0x1d64c4: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x1d64c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d64c8:
    // 0x1d64c8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_1d64cc:
    if (ctx->pc == 0x1D64CCu) {
        ctx->pc = 0x1D64CCu;
            // 0x1d64cc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D64D0u;
        goto label_1d64d0;
    }
    ctx->pc = 0x1D64C8u;
    {
        const bool branch_taken_0x1d64c8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1D64CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D64C8u;
            // 0x1d64cc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d64c8) {
            ctx->pc = 0x1D64E0u;
            goto label_1d64e0;
        }
    }
    ctx->pc = 0x1D64D0u;
label_1d64d0:
    // 0x1d64d0: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x1d64d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_1d64d4:
    // 0x1d64d4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1d64d8:
    if (ctx->pc == 0x1D64D8u) {
        ctx->pc = 0x1D64DCu;
        goto label_1d64dc;
    }
    ctx->pc = 0x1D64D4u;
    {
        const bool branch_taken_0x1d64d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d64d4) {
            ctx->pc = 0x1D64E0u;
            goto label_1d64e0;
        }
    }
    ctx->pc = 0x1D64DCu;
label_1d64dc:
    // 0x1d64dc: 0x2e0182d  daddu       $v1, $s7, $zero
    ctx->pc = 0x1d64dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1d64e0:
    // 0x1d64e0: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_1d64e4:
    if (ctx->pc == 0x1D64E4u) {
        ctx->pc = 0x1D64E8u;
        goto label_1d64e8;
    }
    ctx->pc = 0x1D64E0u;
    {
        const bool branch_taken_0x1d64e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d64e0) {
            ctx->pc = 0x1D64FCu;
            goto label_1d64fc;
        }
    }
    ctx->pc = 0x1D64E8u;
label_1d64e8:
    // 0x1d64e8: 0xc075eb4  jal         func_1D7AD0
label_1d64ec:
    if (ctx->pc == 0x1D64ECu) {
        ctx->pc = 0x1D64ECu;
            // 0x1d64ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D64F0u;
        goto label_1d64f0;
    }
    ctx->pc = 0x1D64E8u;
    SET_GPR_U32(ctx, 31, 0x1D64F0u);
    ctx->pc = 0x1D64ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D64E8u;
            // 0x1d64ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D64F0u; }
        if (ctx->pc != 0x1D64F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D64F0u; }
        if (ctx->pc != 0x1D64F0u) { return; }
    }
    ctx->pc = 0x1D64F0u;
label_1d64f0:
    // 0x1d64f0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1d64f4:
    if (ctx->pc == 0x1D64F4u) {
        ctx->pc = 0x1D64F8u;
        goto label_1d64f8;
    }
    ctx->pc = 0x1D64F0u;
    {
        const bool branch_taken_0x1d64f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d64f0) {
            ctx->pc = 0x1D64FCu;
            goto label_1d64fc;
        }
    }
    ctx->pc = 0x1D64F8u;
label_1d64f8:
    // 0x1d64f8: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1d64f8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d64fc:
    // 0x1d64fc: 0x56e00006  bnel        $s7, $zero, . + 4 + (0x6 << 2)
label_1d6500:
    if (ctx->pc == 0x1D6500u) {
        ctx->pc = 0x1D6500u;
            // 0x1d6500: 0x825411aa  lb          $s4, 0x11AA($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4522)));
        ctx->pc = 0x1D6504u;
        goto label_1d6504;
    }
    ctx->pc = 0x1D64FCu;
    {
        const bool branch_taken_0x1d64fc = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d64fc) {
            ctx->pc = 0x1D6500u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D64FCu;
            // 0x1d6500: 0x825411aa  lb          $s4, 0x11AA($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4522)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D6518u;
            goto label_1d6518;
        }
    }
    ctx->pc = 0x1D6504u;
label_1d6504:
    // 0x1d6504: 0x8e430e34  lw          $v1, 0xE34($s2)
    ctx->pc = 0x1d6504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3636)));
label_1d6508:
    // 0x1d6508: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1d6508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1d650c:
    // 0x1d650c: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
label_1d6510:
    if (ctx->pc == 0x1D6510u) {
        ctx->pc = 0x1D6510u;
            // 0x1d6510: 0x8e020e34  lw          $v0, 0xE34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
        ctx->pc = 0x1D6514u;
        goto label_1d6514;
    }
    ctx->pc = 0x1D650Cu;
    {
        const bool branch_taken_0x1d650c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d650c) {
            ctx->pc = 0x1D6510u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D650Cu;
            // 0x1d6510: 0x8e020e34  lw          $v0, 0xE34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D651Cu;
            goto label_1d651c;
        }
    }
    ctx->pc = 0x1D6514u;
label_1d6514:
    // 0x1d6514: 0x825411aa  lb          $s4, 0x11AA($s2)
    ctx->pc = 0x1d6514u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4522)));
label_1d6518:
    // 0x1d6518: 0x8e020e34  lw          $v0, 0xE34($s0)
    ctx->pc = 0x1d6518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_1d651c:
    // 0x1d651c: 0x64170001  daddiu      $s7, $zero, 0x1
    ctx->pc = 0x1d651cu;
    SET_GPR_S64(ctx, 23, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1d6520:
    // 0x1d6520: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_1d6524:
    if (ctx->pc == 0x1D6524u) {
        ctx->pc = 0x1D6524u;
            // 0x1d6524: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D6528u;
        goto label_1d6528;
    }
    ctx->pc = 0x1D6520u;
    {
        const bool branch_taken_0x1d6520 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1D6524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6520u;
            // 0x1d6524: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6520) {
            ctx->pc = 0x1D6538u;
            goto label_1d6538;
        }
    }
    ctx->pc = 0x1D6528u;
label_1d6528:
    // 0x1d6528: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x1d6528u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_1d652c:
    // 0x1d652c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1d6530:
    if (ctx->pc == 0x1D6530u) {
        ctx->pc = 0x1D6534u;
        goto label_1d6534;
    }
    ctx->pc = 0x1D652Cu;
    {
        const bool branch_taken_0x1d652c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d652c) {
            ctx->pc = 0x1D6538u;
            goto label_1d6538;
        }
    }
    ctx->pc = 0x1D6534u;
label_1d6534:
    // 0x1d6534: 0x2e0182d  daddu       $v1, $s7, $zero
    ctx->pc = 0x1d6534u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1d6538:
    // 0x1d6538: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_1d653c:
    if (ctx->pc == 0x1D653Cu) {
        ctx->pc = 0x1D6540u;
        goto label_1d6540;
    }
    ctx->pc = 0x1D6538u;
    {
        const bool branch_taken_0x1d6538 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6538) {
            ctx->pc = 0x1D6554u;
            goto label_1d6554;
        }
    }
    ctx->pc = 0x1D6540u;
label_1d6540:
    // 0x1d6540: 0xc075eb4  jal         func_1D7AD0
label_1d6544:
    if (ctx->pc == 0x1D6544u) {
        ctx->pc = 0x1D6544u;
            // 0x1d6544: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D6548u;
        goto label_1d6548;
    }
    ctx->pc = 0x1D6540u;
    SET_GPR_U32(ctx, 31, 0x1D6548u);
    ctx->pc = 0x1D6544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6540u;
            // 0x1d6544: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6548u; }
        if (ctx->pc != 0x1D6548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6548u; }
        if (ctx->pc != 0x1D6548u) { return; }
    }
    ctx->pc = 0x1D6548u;
label_1d6548:
    // 0x1d6548: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1d654c:
    if (ctx->pc == 0x1D654Cu) {
        ctx->pc = 0x1D6550u;
        goto label_1d6550;
    }
    ctx->pc = 0x1D6548u;
    {
        const bool branch_taken_0x1d6548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6548) {
            ctx->pc = 0x1D6554u;
            goto label_1d6554;
        }
    }
    ctx->pc = 0x1D6550u;
label_1d6550:
    // 0x1d6550: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1d6550u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d6554:
    // 0x1d6554: 0x56e00006  bnel        $s7, $zero, . + 4 + (0x6 << 2)
label_1d6558:
    if (ctx->pc == 0x1D6558u) {
        ctx->pc = 0x1D6558u;
            // 0x1d6558: 0x821311aa  lb          $s3, 0x11AA($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
        ctx->pc = 0x1D655Cu;
        goto label_1d655c;
    }
    ctx->pc = 0x1D6554u;
    {
        const bool branch_taken_0x1d6554 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6554) {
            ctx->pc = 0x1D6558u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6554u;
            // 0x1d6558: 0x821311aa  lb          $s3, 0x11AA($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D6570u;
            goto label_1d6570;
        }
    }
    ctx->pc = 0x1D655Cu;
label_1d655c:
    // 0x1d655c: 0x8e030e34  lw          $v1, 0xE34($s0)
    ctx->pc = 0x1d655cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_1d6560:
    // 0x1d6560: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1d6560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1d6564:
    // 0x1d6564: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
label_1d6568:
    if (ctx->pc == 0x1D6568u) {
        ctx->pc = 0x1D6568u;
            // 0x1d6568: 0xc6400e24  lwc1        $f0, 0xE24($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x1D656Cu;
        goto label_1d656c;
    }
    ctx->pc = 0x1D6564u;
    {
        const bool branch_taken_0x1d6564 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d6564) {
            ctx->pc = 0x1D6568u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6564u;
            // 0x1d6568: 0xc6400e24  lwc1        $f0, 0xE24($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D6574u;
            goto label_1d6574;
        }
    }
    ctx->pc = 0x1D656Cu;
label_1d656c:
    // 0x1d656c: 0x821311aa  lb          $s3, 0x11AA($s0)
    ctx->pc = 0x1d656cu;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
label_1d6570:
    // 0x1d6570: 0xc6400e24  lwc1        $f0, 0xE24($s2)
    ctx->pc = 0x1d6570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d6574:
    // 0x1d6574: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d6574u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d6578:
    // 0x1d6578: 0x0  nop
    ctx->pc = 0x1d6578u;
    // NOP
label_1d657c:
    // 0x1d657c: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x1d657cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d6580:
    // 0x1d6580: 0x4502007b  bc1fl       . + 4 + (0x7B << 2)
label_1d6584:
    if (ctx->pc == 0x1D6584u) {
        ctx->pc = 0x1D6584u;
            // 0x1d6584: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x1D6588u;
        goto label_1d6588;
    }
    ctx->pc = 0x1D6580u;
    {
        const bool branch_taken_0x1d6580 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d6580) {
            ctx->pc = 0x1D6584u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6580u;
            // 0x1d6584: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D6770u;
            goto label_1d6770;
        }
    }
    ctx->pc = 0x1D6588u;
label_1d6588:
    // 0x1d6588: 0x8e4211bc  lw          $v0, 0x11BC($s2)
    ctx->pc = 0x1d6588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4540)));
label_1d658c:
    // 0x1d658c: 0x5440003d  bnel        $v0, $zero, . + 4 + (0x3D << 2)
label_1d6590:
    if (ctx->pc == 0x1D6590u) {
        ctx->pc = 0x1D6590u;
            // 0x1d6590: 0x92c40010  lbu         $a0, 0x10($s6) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 16)));
        ctx->pc = 0x1D6594u;
        goto label_1d6594;
    }
    ctx->pc = 0x1D658Cu;
    {
        const bool branch_taken_0x1d658c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d658c) {
            ctx->pc = 0x1D6590u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D658Cu;
            // 0x1d6590: 0x92c40010  lbu         $a0, 0x10($s6) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D6684u;
            goto label_1d6684;
        }
    }
    ctx->pc = 0x1D6594u;
label_1d6594:
    // 0x1d6594: 0x92c40010  lbu         $a0, 0x10($s6)
    ctx->pc = 0x1d6594u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 16)));
label_1d6598:
    // 0x1d6598: 0x3c0240d0  lui         $v0, 0x40D0
    ctx->pc = 0x1d6598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16592 << 16));
label_1d659c:
    // 0x1d659c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d659cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d65a0:
    // 0x1d65a0: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x1d65a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_1d65a4:
    // 0x1d65a4: 0x2463cafc  addiu       $v1, $v1, -0x3504
    ctx->pc = 0x1d65a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953724));
label_1d65a8:
    // 0x1d65a8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1d65a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1d65ac:
    // 0x1d65ac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d65acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1d65b0:
    // 0x1d65b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d65b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d65b4:
    // 0x1d65b4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1d65b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d65b8:
    // 0x1d65b8: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1d65b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d65bc:
    // 0x1d65bc: 0xc620003c  lwc1        $f0, 0x3C($s1)
    ctx->pc = 0x1d65bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d65c0:
    // 0x1d65c0: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1d65c0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1d65c4:
    // 0x1d65c4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1d65c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d65c8:
    // 0x1d65c8: 0x4501009d  bc1t        . + 4 + (0x9D << 2)
label_1d65cc:
    if (ctx->pc == 0x1D65CCu) {
        ctx->pc = 0x1D65D0u;
        goto label_1d65d0;
    }
    ctx->pc = 0x1D65C8u;
    {
        const bool branch_taken_0x1d65c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d65c8) {
            ctx->pc = 0x1D6840u;
            goto label_1d6840;
        }
    }
    ctx->pc = 0x1D65D0u;
label_1d65d0:
    // 0x1d65d0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1d65d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_1d65d4:
    // 0x1d65d4: 0x141e3c  dsll32      $v1, $s4, 24
    ctx->pc = 0x1d65d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 24));
label_1d65d8:
    // 0x1d65d8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1d65d8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_1d65dc:
    // 0x1d65dc: 0x4600011  bltz        $v1, . + 4 + (0x11 << 2)
label_1d65e0:
    if (ctx->pc == 0x1D65E0u) {
        ctx->pc = 0x1D65E0u;
            // 0x1d65e0: 0x8c510e80  lw          $s1, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->pc = 0x1D65E4u;
        goto label_1d65e4;
    }
    ctx->pc = 0x1D65DCu;
    {
        const bool branch_taken_0x1d65dc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1D65E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D65DCu;
            // 0x1d65e0: 0x8c510e80  lw          $s1, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d65dc) {
            ctx->pc = 0x1D6624u;
            goto label_1d6624;
        }
    }
    ctx->pc = 0x1D65E4u;
label_1d65e4:
    // 0x1d65e4: 0xc040180  jal         func_100600
label_1d65e8:
    if (ctx->pc == 0x1D65E8u) {
        ctx->pc = 0x1D65E8u;
            // 0x1d65e8: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->pc = 0x1D65ECu;
        goto label_1d65ec;
    }
    ctx->pc = 0x1D65E4u;
    SET_GPR_U32(ctx, 31, 0x1D65ECu);
    ctx->pc = 0x1D65E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D65E4u;
            // 0x1d65e8: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D65ECu; }
        if (ctx->pc != 0x1D65ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D65ECu; }
        if (ctx->pc != 0x1D65ECu) { return; }
    }
    ctx->pc = 0x1D65ECu;
label_1d65ec:
    // 0x1d65ec: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_1d65f0:
    if (ctx->pc == 0x1D65F0u) {
        ctx->pc = 0x1D65F0u;
            // 0x1d65f0: 0x13163c  dsll32      $v0, $s3, 24 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 24));
        ctx->pc = 0x1D65F4u;
        goto label_1d65f4;
    }
    ctx->pc = 0x1D65ECu;
    {
        const bool branch_taken_0x1d65ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d65ec) {
            ctx->pc = 0x1D65F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D65ECu;
            // 0x1d65f0: 0x13163c  dsll32      $v0, $s3, 24 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D6628u;
            goto label_1d6628;
        }
    }
    ctx->pc = 0x1D65F4u;
label_1d65f4:
    // 0x1d65f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d65f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d65f8:
    // 0x1d65f8: 0x8e0a0d98  lw          $t2, 0xD98($s0)
    ctx->pc = 0x1d65f8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_1d65fc:
    // 0x1d65fc: 0x144e3c  dsll32      $t1, $s4, 24
    ctx->pc = 0x1d65fcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 20) << (32 + 24));
label_1d6600:
    // 0x1d6600: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x1d6600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_1d6604:
    // 0x1d6604: 0x94e3f  dsra32      $t1, $t1, 24
    ctx->pc = 0x1d6604u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 24));
label_1d6608:
    // 0x1d6608: 0x3445abec  ori         $a1, $v0, 0xABEC
    ctx->pc = 0x1d6608u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44012);
label_1d660c:
    // 0x1d660c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d660cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d6610:
    // 0x1d6610: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1d6610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1d6614:
    // 0x1d6614: 0x26270458  addiu       $a3, $s1, 0x458
    ctx->pc = 0x1d6614u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 1112));
label_1d6618:
    // 0x1d6618: 0x24080081  addiu       $t0, $zero, 0x81
    ctx->pc = 0x1d6618u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
label_1d661c:
    // 0x1d661c: 0xc0b9404  jal         func_2E5010
label_1d6620:
    if (ctx->pc == 0x1D6620u) {
        ctx->pc = 0x1D6620u;
            // 0x1d6620: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D6624u;
        goto label_1d6624;
    }
    ctx->pc = 0x1D661Cu;
    SET_GPR_U32(ctx, 31, 0x1D6624u);
    ctx->pc = 0x1D6620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D661Cu;
            // 0x1d6620: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5010u;
    if (runtime->hasFunction(0x2E5010u)) {
        auto targetFn = runtime->lookupFunction(0x2E5010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6624u; }
        if (ctx->pc != 0x1D6624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5010_0x2e5010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6624u; }
        if (ctx->pc != 0x1D6624u) { return; }
    }
    ctx->pc = 0x1D6624u;
label_1d6624:
    // 0x1d6624: 0x13163c  dsll32      $v0, $s3, 24
    ctx->pc = 0x1d6624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 24));
label_1d6628:
    // 0x1d6628: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1d6628u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_1d662c:
    // 0x1d662c: 0x4420012  bltzl       $v0, . + 4 + (0x12 << 2)
label_1d6630:
    if (ctx->pc == 0x1D6630u) {
        ctx->pc = 0x1D6630u;
            // 0x1d6630: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x1D6634u;
        goto label_1d6634;
    }
    ctx->pc = 0x1D662Cu;
    {
        const bool branch_taken_0x1d662c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1d662c) {
            ctx->pc = 0x1D6630u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D662Cu;
            // 0x1d6630: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D6678u;
            goto label_1d6678;
        }
    }
    ctx->pc = 0x1D6634u;
label_1d6634:
    // 0x1d6634: 0xc040180  jal         func_100600
label_1d6638:
    if (ctx->pc == 0x1D6638u) {
        ctx->pc = 0x1D6638u;
            // 0x1d6638: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->pc = 0x1D663Cu;
        goto label_1d663c;
    }
    ctx->pc = 0x1D6634u;
    SET_GPR_U32(ctx, 31, 0x1D663Cu);
    ctx->pc = 0x1D6638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6634u;
            // 0x1d6638: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D663Cu; }
        if (ctx->pc != 0x1D663Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D663Cu; }
        if (ctx->pc != 0x1D663Cu) { return; }
    }
    ctx->pc = 0x1D663Cu;
label_1d663c:
    // 0x1d663c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1d6640:
    if (ctx->pc == 0x1D6640u) {
        ctx->pc = 0x1D6644u;
        goto label_1d6644;
    }
    ctx->pc = 0x1D663Cu;
    {
        const bool branch_taken_0x1d663c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d663c) {
            ctx->pc = 0x1D6674u;
            goto label_1d6674;
        }
    }
    ctx->pc = 0x1D6644u;
label_1d6644:
    // 0x1d6644: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d6644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d6648:
    // 0x1d6648: 0x8e0a0d98  lw          $t2, 0xD98($s0)
    ctx->pc = 0x1d6648u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_1d664c:
    // 0x1d664c: 0x134e3c  dsll32      $t1, $s3, 24
    ctx->pc = 0x1d664cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 19) << (32 + 24));
label_1d6650:
    // 0x1d6650: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x1d6650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_1d6654:
    // 0x1d6654: 0x94e3f  dsra32      $t1, $t1, 24
    ctx->pc = 0x1d6654u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 24));
label_1d6658:
    // 0x1d6658: 0x26270458  addiu       $a3, $s1, 0x458
    ctx->pc = 0x1d6658u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 1112));
label_1d665c:
    // 0x1d665c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d665cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d6660:
    // 0x1d6660: 0x3445abec  ori         $a1, $v0, 0xABEC
    ctx->pc = 0x1d6660u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44012);
label_1d6664:
    // 0x1d6664: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1d6664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1d6668:
    // 0x1d6668: 0x24080081  addiu       $t0, $zero, 0x81
    ctx->pc = 0x1d6668u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
label_1d666c:
    // 0x1d666c: 0xc0b9404  jal         func_2E5010
label_1d6670:
    if (ctx->pc == 0x1D6670u) {
        ctx->pc = 0x1D6670u;
            // 0x1d6670: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D6674u;
        goto label_1d6674;
    }
    ctx->pc = 0x1D666Cu;
    SET_GPR_U32(ctx, 31, 0x1D6674u);
    ctx->pc = 0x1D6670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D666Cu;
            // 0x1d6670: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5010u;
    if (runtime->hasFunction(0x2E5010u)) {
        auto targetFn = runtime->lookupFunction(0x2E5010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6674u; }
        if (ctx->pc != 0x1D6674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5010_0x2e5010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6674u; }
        if (ctx->pc != 0x1D6674u) { return; }
    }
    ctx->pc = 0x1D6674u;
label_1d6674:
    // 0x1d6674: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d6674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d6678:
    // 0x1d6678: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x1d6678u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d667c:
    // 0x1d667c: 0x10000070  b           . + 4 + (0x70 << 2)
label_1d6680:
    if (ctx->pc == 0x1D6680u) {
        ctx->pc = 0x1D6680u;
            // 0x1d6680: 0xae420e24  sw          $v0, 0xE24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3620), GPR_U32(ctx, 2));
        ctx->pc = 0x1D6684u;
        goto label_1d6684;
    }
    ctx->pc = 0x1D667Cu;
    {
        const bool branch_taken_0x1d667c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D667Cu;
            // 0x1d6680: 0xae420e24  sw          $v0, 0xE24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d667c) {
            ctx->pc = 0x1D6840u;
            goto label_1d6840;
        }
    }
    ctx->pc = 0x1D6684u;
label_1d6684:
    // 0x1d6684: 0x3c0240d0  lui         $v0, 0x40D0
    ctx->pc = 0x1d6684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16592 << 16));
label_1d6688:
    // 0x1d6688: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d6688u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d668c:
    // 0x1d668c: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x1d668cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_1d6690:
    // 0x1d6690: 0x2463cb00  addiu       $v1, $v1, -0x3500
    ctx->pc = 0x1d6690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953728));
label_1d6694:
    // 0x1d6694: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1d6694u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1d6698:
    // 0x1d6698: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d6698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1d669c:
    // 0x1d669c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d669cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d66a0:
    // 0x1d66a0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1d66a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d66a4:
    // 0x1d66a4: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x1d66a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d66a8:
    // 0x1d66a8: 0xc620003c  lwc1        $f0, 0x3C($s1)
    ctx->pc = 0x1d66a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d66ac:
    // 0x1d66ac: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x1d66acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_1d66b0:
    // 0x1d66b0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1d66b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d66b4:
    // 0x1d66b4: 0x45010062  bc1t        . + 4 + (0x62 << 2)
label_1d66b8:
    if (ctx->pc == 0x1D66B8u) {
        ctx->pc = 0x1D66BCu;
        goto label_1d66bc;
    }
    ctx->pc = 0x1D66B4u;
    {
        const bool branch_taken_0x1d66b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d66b4) {
            ctx->pc = 0x1D6840u;
            goto label_1d6840;
        }
    }
    ctx->pc = 0x1D66BCu;
label_1d66bc:
    // 0x1d66bc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1d66bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_1d66c0:
    // 0x1d66c0: 0x141e3c  dsll32      $v1, $s4, 24
    ctx->pc = 0x1d66c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) << (32 + 24));
label_1d66c4:
    // 0x1d66c4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1d66c4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_1d66c8:
    // 0x1d66c8: 0x4600011  bltz        $v1, . + 4 + (0x11 << 2)
label_1d66cc:
    if (ctx->pc == 0x1D66CCu) {
        ctx->pc = 0x1D66CCu;
            // 0x1d66cc: 0x8c510e80  lw          $s1, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->pc = 0x1D66D0u;
        goto label_1d66d0;
    }
    ctx->pc = 0x1D66C8u;
    {
        const bool branch_taken_0x1d66c8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1D66CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D66C8u;
            // 0x1d66cc: 0x8c510e80  lw          $s1, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d66c8) {
            ctx->pc = 0x1D6710u;
            goto label_1d6710;
        }
    }
    ctx->pc = 0x1D66D0u;
label_1d66d0:
    // 0x1d66d0: 0xc040180  jal         func_100600
label_1d66d4:
    if (ctx->pc == 0x1D66D4u) {
        ctx->pc = 0x1D66D4u;
            // 0x1d66d4: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->pc = 0x1D66D8u;
        goto label_1d66d8;
    }
    ctx->pc = 0x1D66D0u;
    SET_GPR_U32(ctx, 31, 0x1D66D8u);
    ctx->pc = 0x1D66D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D66D0u;
            // 0x1d66d4: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D66D8u; }
        if (ctx->pc != 0x1D66D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D66D8u; }
        if (ctx->pc != 0x1D66D8u) { return; }
    }
    ctx->pc = 0x1D66D8u;
label_1d66d8:
    // 0x1d66d8: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_1d66dc:
    if (ctx->pc == 0x1D66DCu) {
        ctx->pc = 0x1D66DCu;
            // 0x1d66dc: 0x13163c  dsll32      $v0, $s3, 24 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 24));
        ctx->pc = 0x1D66E0u;
        goto label_1d66e0;
    }
    ctx->pc = 0x1D66D8u;
    {
        const bool branch_taken_0x1d66d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d66d8) {
            ctx->pc = 0x1D66DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D66D8u;
            // 0x1d66dc: 0x13163c  dsll32      $v0, $s3, 24 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D6714u;
            goto label_1d6714;
        }
    }
    ctx->pc = 0x1D66E0u;
label_1d66e0:
    // 0x1d66e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d66e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d66e4:
    // 0x1d66e4: 0x8e0a0d98  lw          $t2, 0xD98($s0)
    ctx->pc = 0x1d66e4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_1d66e8:
    // 0x1d66e8: 0x144e3c  dsll32      $t1, $s4, 24
    ctx->pc = 0x1d66e8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 20) << (32 + 24));
label_1d66ec:
    // 0x1d66ec: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x1d66ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_1d66f0:
    // 0x1d66f0: 0x94e3f  dsra32      $t1, $t1, 24
    ctx->pc = 0x1d66f0u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 24));
label_1d66f4:
    // 0x1d66f4: 0x3445abec  ori         $a1, $v0, 0xABEC
    ctx->pc = 0x1d66f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44012);
label_1d66f8:
    // 0x1d66f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d66f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d66fc:
    // 0x1d66fc: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1d66fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1d6700:
    // 0x1d6700: 0x26270458  addiu       $a3, $s1, 0x458
    ctx->pc = 0x1d6700u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 1112));
label_1d6704:
    // 0x1d6704: 0x24080081  addiu       $t0, $zero, 0x81
    ctx->pc = 0x1d6704u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
label_1d6708:
    // 0x1d6708: 0xc0b9404  jal         func_2E5010
label_1d670c:
    if (ctx->pc == 0x1D670Cu) {
        ctx->pc = 0x1D670Cu;
            // 0x1d670c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D6710u;
        goto label_1d6710;
    }
    ctx->pc = 0x1D6708u;
    SET_GPR_U32(ctx, 31, 0x1D6710u);
    ctx->pc = 0x1D670Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6708u;
            // 0x1d670c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5010u;
    if (runtime->hasFunction(0x2E5010u)) {
        auto targetFn = runtime->lookupFunction(0x2E5010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6710u; }
        if (ctx->pc != 0x1D6710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5010_0x2e5010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6710u; }
        if (ctx->pc != 0x1D6710u) { return; }
    }
    ctx->pc = 0x1D6710u;
label_1d6710:
    // 0x1d6710: 0x13163c  dsll32      $v0, $s3, 24
    ctx->pc = 0x1d6710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) << (32 + 24));
label_1d6714:
    // 0x1d6714: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1d6714u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_1d6718:
    // 0x1d6718: 0x4420012  bltzl       $v0, . + 4 + (0x12 << 2)
label_1d671c:
    if (ctx->pc == 0x1D671Cu) {
        ctx->pc = 0x1D671Cu;
            // 0x1d671c: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x1D6720u;
        goto label_1d6720;
    }
    ctx->pc = 0x1D6718u;
    {
        const bool branch_taken_0x1d6718 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1d6718) {
            ctx->pc = 0x1D671Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6718u;
            // 0x1d671c: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D6764u;
            goto label_1d6764;
        }
    }
    ctx->pc = 0x1D6720u;
label_1d6720:
    // 0x1d6720: 0xc040180  jal         func_100600
label_1d6724:
    if (ctx->pc == 0x1D6724u) {
        ctx->pc = 0x1D6724u;
            // 0x1d6724: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->pc = 0x1D6728u;
        goto label_1d6728;
    }
    ctx->pc = 0x1D6720u;
    SET_GPR_U32(ctx, 31, 0x1D6728u);
    ctx->pc = 0x1D6724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6720u;
            // 0x1d6724: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6728u; }
        if (ctx->pc != 0x1D6728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6728u; }
        if (ctx->pc != 0x1D6728u) { return; }
    }
    ctx->pc = 0x1D6728u;
label_1d6728:
    // 0x1d6728: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1d672c:
    if (ctx->pc == 0x1D672Cu) {
        ctx->pc = 0x1D6730u;
        goto label_1d6730;
    }
    ctx->pc = 0x1D6728u;
    {
        const bool branch_taken_0x1d6728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6728) {
            ctx->pc = 0x1D6760u;
            goto label_1d6760;
        }
    }
    ctx->pc = 0x1D6730u;
label_1d6730:
    // 0x1d6730: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d6730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d6734:
    // 0x1d6734: 0x8e0a0d98  lw          $t2, 0xD98($s0)
    ctx->pc = 0x1d6734u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_1d6738:
    // 0x1d6738: 0x134e3c  dsll32      $t1, $s3, 24
    ctx->pc = 0x1d6738u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 19) << (32 + 24));
label_1d673c:
    // 0x1d673c: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x1d673cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_1d6740:
    // 0x1d6740: 0x94e3f  dsra32      $t1, $t1, 24
    ctx->pc = 0x1d6740u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 24));
label_1d6744:
    // 0x1d6744: 0x26270458  addiu       $a3, $s1, 0x458
    ctx->pc = 0x1d6744u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 1112));
label_1d6748:
    // 0x1d6748: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d6748u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d674c:
    // 0x1d674c: 0x3445abec  ori         $a1, $v0, 0xABEC
    ctx->pc = 0x1d674cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44012);
label_1d6750:
    // 0x1d6750: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x1d6750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1d6754:
    // 0x1d6754: 0x24080081  addiu       $t0, $zero, 0x81
    ctx->pc = 0x1d6754u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
label_1d6758:
    // 0x1d6758: 0xc0b9404  jal         func_2E5010
label_1d675c:
    if (ctx->pc == 0x1D675Cu) {
        ctx->pc = 0x1D675Cu;
            // 0x1d675c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D6760u;
        goto label_1d6760;
    }
    ctx->pc = 0x1D6758u;
    SET_GPR_U32(ctx, 31, 0x1D6760u);
    ctx->pc = 0x1D675Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6758u;
            // 0x1d675c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5010u;
    if (runtime->hasFunction(0x2E5010u)) {
        auto targetFn = runtime->lookupFunction(0x2E5010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6760u; }
        if (ctx->pc != 0x1D6760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5010_0x2e5010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6760u; }
        if (ctx->pc != 0x1D6760u) { return; }
    }
    ctx->pc = 0x1D6760u;
label_1d6760:
    // 0x1d6760: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d6760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d6764:
    // 0x1d6764: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x1d6764u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d6768:
    // 0x1d6768: 0x10000035  b           . + 4 + (0x35 << 2)
label_1d676c:
    if (ctx->pc == 0x1D676Cu) {
        ctx->pc = 0x1D676Cu;
            // 0x1d676c: 0xae420e24  sw          $v0, 0xE24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3620), GPR_U32(ctx, 2));
        ctx->pc = 0x1D6770u;
        goto label_1d6770;
    }
    ctx->pc = 0x1D6768u;
    {
        const bool branch_taken_0x1d6768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D676Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6768u;
            // 0x1d676c: 0xae420e24  sw          $v0, 0xE24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6768) {
            ctx->pc = 0x1D6840u;
            goto label_1d6840;
        }
    }
    ctx->pc = 0x1D6770u;
label_1d6770:
    // 0x1d6770: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1d6770u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1d6774:
    // 0x1d6774: 0x0  nop
    ctx->pc = 0x1d6774u;
    // NOP
label_1d6778:
    // 0x1d6778: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x1d6778u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d677c:
    // 0x1d677c: 0x45000030  bc1f        . + 4 + (0x30 << 2)
label_1d6780:
    if (ctx->pc == 0x1D6780u) {
        ctx->pc = 0x1D6784u;
        goto label_1d6784;
    }
    ctx->pc = 0x1D677Cu;
    {
        const bool branch_taken_0x1d677c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d677c) {
            ctx->pc = 0x1D6840u;
            goto label_1d6840;
        }
    }
    ctx->pc = 0x1D6784u;
label_1d6784:
    // 0x1d6784: 0x8e4211bc  lw          $v0, 0x11BC($s2)
    ctx->pc = 0x1d6784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4540)));
label_1d6788:
    // 0x1d6788: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
label_1d678c:
    if (ctx->pc == 0x1D678Cu) {
        ctx->pc = 0x1D678Cu;
            // 0x1d678c: 0x92c40010  lbu         $a0, 0x10($s6) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 16)));
        ctx->pc = 0x1D6790u;
        goto label_1d6790;
    }
    ctx->pc = 0x1D6788u;
    {
        const bool branch_taken_0x1d6788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6788) {
            ctx->pc = 0x1D678Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6788u;
            // 0x1d678c: 0x92c40010  lbu         $a0, 0x10($s6) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D67ECu;
            goto label_1d67ec;
        }
    }
    ctx->pc = 0x1D6790u;
label_1d6790:
    // 0x1d6790: 0x92c40010  lbu         $a0, 0x10($s6)
    ctx->pc = 0x1d6790u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 16)));
label_1d6794:
    // 0x1d6794: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1d6794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_1d6798:
    // 0x1d6798: 0x2442cafc  addiu       $v0, $v0, -0x3504
    ctx->pc = 0x1d6798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953724));
label_1d679c:
    // 0x1d679c: 0xc620003c  lwc1        $f0, 0x3C($s1)
    ctx->pc = 0x1d679cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d67a0:
    // 0x1d67a0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1d67a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1d67a4:
    // 0x1d67a4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d67a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1d67a8:
    // 0x1d67a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d67a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d67ac:
    // 0x1d67ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d67acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d67b0:
    // 0x1d67b0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1d67b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d67b4:
    // 0x1d67b4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1d67b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d67b8:
    // 0x1d67b8: 0x45010021  bc1t        . + 4 + (0x21 << 2)
label_1d67bc:
    if (ctx->pc == 0x1D67BCu) {
        ctx->pc = 0x1D67C0u;
        goto label_1d67c0;
    }
    ctx->pc = 0x1D67B8u;
    {
        const bool branch_taken_0x1d67b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d67b8) {
            ctx->pc = 0x1D6840u;
            goto label_1d6840;
        }
    }
    ctx->pc = 0x1D67C0u;
label_1d67c0:
    // 0x1d67c0: 0xe6020e20  swc1        $f2, 0xE20($s0)
    ctx->pc = 0x1d67c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3616), bits); }
label_1d67c4:
    // 0x1d67c4: 0x26440330  addiu       $a0, $s2, 0x330
    ctx->pc = 0x1d67c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 816));
label_1d67c8:
    // 0x1d67c8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1d67c8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1d67cc:
    // 0x1d67cc: 0xc04cbd8  jal         func_132F60
label_1d67d0:
    if (ctx->pc == 0x1D67D0u) {
        ctx->pc = 0x1D67D0u;
            // 0x1d67d0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1D67D4u;
        goto label_1d67d4;
    }
    ctx->pc = 0x1D67CCu;
    SET_GPR_U32(ctx, 31, 0x1D67D4u);
    ctx->pc = 0x1D67D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D67CCu;
            // 0x1d67d0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D67D4u; }
        if (ctx->pc != 0x1D67D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D67D4u; }
        if (ctx->pc != 0x1D67D4u) { return; }
    }
    ctx->pc = 0x1D67D4u;
label_1d67d4:
    // 0x1d67d4: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x1d67d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_1d67d8:
    // 0x1d67d8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1d67d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1d67dc:
    // 0x1d67dc: 0xae430db8  sw          $v1, 0xDB8($s2)
    ctx->pc = 0x1d67dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3512), GPR_U32(ctx, 3));
label_1d67e0:
    // 0x1d67e0: 0x24150004  addiu       $s5, $zero, 0x4
    ctx->pc = 0x1d67e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d67e4:
    // 0x1d67e4: 0x10000016  b           . + 4 + (0x16 << 2)
label_1d67e8:
    if (ctx->pc == 0x1D67E8u) {
        ctx->pc = 0x1D67E8u;
            // 0x1d67e8: 0xae420e24  sw          $v0, 0xE24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3620), GPR_U32(ctx, 2));
        ctx->pc = 0x1D67ECu;
        goto label_1d67ec;
    }
    ctx->pc = 0x1D67E4u;
    {
        const bool branch_taken_0x1d67e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D67E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D67E4u;
            // 0x1d67e8: 0xae420e24  sw          $v0, 0xE24($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d67e4) {
            ctx->pc = 0x1D6840u;
            goto label_1d6840;
        }
    }
    ctx->pc = 0x1D67ECu;
label_1d67ec:
    // 0x1d67ec: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1d67ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_1d67f0:
    // 0x1d67f0: 0x2442cb00  addiu       $v0, $v0, -0x3500
    ctx->pc = 0x1d67f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953728));
label_1d67f4:
    // 0x1d67f4: 0xc620003c  lwc1        $f0, 0x3C($s1)
    ctx->pc = 0x1d67f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d67f8:
    // 0x1d67f8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1d67f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1d67fc:
    // 0x1d67fc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d67fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1d6800:
    // 0x1d6800: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d6800u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d6804:
    // 0x1d6804: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d6804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d6808:
    // 0x1d6808: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1d6808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d680c:
    // 0x1d680c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1d680cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d6810:
    // 0x1d6810: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_1d6814:
    if (ctx->pc == 0x1D6814u) {
        ctx->pc = 0x1D6818u;
        goto label_1d6818;
    }
    ctx->pc = 0x1D6810u;
    {
        const bool branch_taken_0x1d6810 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d6810) {
            ctx->pc = 0x1D6840u;
            goto label_1d6840;
        }
    }
    ctx->pc = 0x1D6818u;
label_1d6818:
    // 0x1d6818: 0xe6020e20  swc1        $f2, 0xE20($s0)
    ctx->pc = 0x1d6818u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3616), bits); }
label_1d681c:
    // 0x1d681c: 0x26440330  addiu       $a0, $s2, 0x330
    ctx->pc = 0x1d681cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 816));
label_1d6820:
    // 0x1d6820: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1d6820u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1d6824:
    // 0x1d6824: 0xc04cbd8  jal         func_132F60
label_1d6828:
    if (ctx->pc == 0x1D6828u) {
        ctx->pc = 0x1D6828u;
            // 0x1d6828: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1D682Cu;
        goto label_1d682c;
    }
    ctx->pc = 0x1D6824u;
    SET_GPR_U32(ctx, 31, 0x1D682Cu);
    ctx->pc = 0x1D6828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6824u;
            // 0x1d6828: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D682Cu; }
        if (ctx->pc != 0x1D682Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D682Cu; }
        if (ctx->pc != 0x1D682Cu) { return; }
    }
    ctx->pc = 0x1D682Cu;
label_1d682c:
    // 0x1d682c: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x1d682cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_1d6830:
    // 0x1d6830: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1d6830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1d6834:
    // 0x1d6834: 0xae430db8  sw          $v1, 0xDB8($s2)
    ctx->pc = 0x1d6834u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3512), GPR_U32(ctx, 3));
label_1d6838:
    // 0x1d6838: 0x24150004  addiu       $s5, $zero, 0x4
    ctx->pc = 0x1d6838u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d683c:
    // 0x1d683c: 0xae420e24  sw          $v0, 0xE24($s2)
    ctx->pc = 0x1d683cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3620), GPR_U32(ctx, 2));
label_1d6840:
    // 0x1d6840: 0xc641118c  lwc1        $f1, 0x118C($s2)
    ctx->pc = 0x1d6840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d6844:
    // 0x1d6844: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d6844u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d6848:
    // 0x1d6848: 0x0  nop
    ctx->pc = 0x1d6848u;
    // NOP
label_1d684c:
    // 0x1d684c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1d684cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d6850:
    // 0x1d6850: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_1d6854:
    if (ctx->pc == 0x1D6854u) {
        ctx->pc = 0x1D6858u;
        goto label_1d6858;
    }
    ctx->pc = 0x1D6850u;
    {
        const bool branch_taken_0x1d6850 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d6850) {
            ctx->pc = 0x1D6868u;
            goto label_1d6868;
        }
    }
    ctx->pc = 0x1D6858u;
label_1d6858:
    // 0x1d6858: 0x8e430db0  lw          $v1, 0xDB0($s2)
    ctx->pc = 0x1d6858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3504)));
label_1d685c:
    // 0x1d685c: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1d685cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1d6860:
    // 0x1d6860: 0x5062001d  beql        $v1, $v0, . + 4 + (0x1D << 2)
label_1d6864:
    if (ctx->pc == 0x1D6864u) {
        ctx->pc = 0x1D6864u;
            // 0x1d6864: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D6868u;
        goto label_1d6868;
    }
    ctx->pc = 0x1D6860u;
    {
        const bool branch_taken_0x1d6860 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d6860) {
            ctx->pc = 0x1D6864u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D6860u;
            // 0x1d6864: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D68D8u;
            goto label_1d68d8;
        }
    }
    ctx->pc = 0x1D6868u;
label_1d6868:
    // 0x1d6868: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d6868u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d686c:
    // 0x1d686c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d686cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d6870:
    // 0x1d6870: 0x26440330  addiu       $a0, $s2, 0x330
    ctx->pc = 0x1d6870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 816));
label_1d6874:
    // 0x1d6874: 0xa24211ad  sb          $v0, 0x11AD($s2)
    ctx->pc = 0x1d6874u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4525), (uint8_t)GPR_U32(ctx, 2));
label_1d6878:
    // 0x1d6878: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1d6878u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1d687c:
    // 0x1d687c: 0xc04cbd8  jal         func_132F60
label_1d6880:
    if (ctx->pc == 0x1D6880u) {
        ctx->pc = 0x1D6880u;
            // 0x1d6880: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1D6884u;
        goto label_1d6884;
    }
    ctx->pc = 0x1D687Cu;
    SET_GPR_U32(ctx, 31, 0x1D6884u);
    ctx->pc = 0x1D6880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D687Cu;
            // 0x1d6880: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6884u; }
        if (ctx->pc != 0x1D6884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D6884u; }
        if (ctx->pc != 0x1D6884u) { return; }
    }
    ctx->pc = 0x1D6884u;
label_1d6884:
    // 0x1d6884: 0xae400e20  sw          $zero, 0xE20($s2)
    ctx->pc = 0x1d6884u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3616), GPR_U32(ctx, 0));
label_1d6888:
    // 0x1d6888: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x1d6888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_1d688c:
    // 0x1d688c: 0xae400e24  sw          $zero, 0xE24($s2)
    ctx->pc = 0x1d688cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3620), GPR_U32(ctx, 0));
label_1d6890:
    // 0x1d6890: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d6890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d6894:
    // 0x1d6894: 0xae430db8  sw          $v1, 0xDB8($s2)
    ctx->pc = 0x1d6894u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3512), GPR_U32(ctx, 3));
label_1d6898:
    // 0x1d6898: 0x824311ad  lb          $v1, 0x11AD($s2)
    ctx->pc = 0x1d6898u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4525)));
label_1d689c:
    // 0x1d689c: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
label_1d68a0:
    if (ctx->pc == 0x1D68A0u) {
        ctx->pc = 0x1D68A0u;
            // 0x1d68a0: 0x24150006  addiu       $s5, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x1D68A4u;
        goto label_1d68a4;
    }
    ctx->pc = 0x1D689Cu;
    {
        const bool branch_taken_0x1d689c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d689c) {
            ctx->pc = 0x1D68A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D689Cu;
            // 0x1d68a0: 0x24150006  addiu       $s5, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D68D4u;
            goto label_1d68d4;
        }
    }
    ctx->pc = 0x1D68A4u;
label_1d68a4:
    // 0x1d68a4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1d68a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_1d68a8:
    // 0x1d68a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d68a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d68ac:
    // 0x1d68ac: 0x24420e84  addiu       $v0, $v0, 0xE84
    ctx->pc = 0x1d68acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3716));
label_1d68b0:
    // 0x1d68b0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1d68b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d68b4:
    // 0x1d68b4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d68b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d68b8:
    // 0x1d68b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d68b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d68bc:
    // 0x1d68bc: 0x8c830e30  lw          $v1, 0xE30($a0)
    ctx->pc = 0x1d68bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3632)));
label_1d68c0:
    // 0x1d68c0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1d68c4:
    if (ctx->pc == 0x1D68C4u) {
        ctx->pc = 0x1D68C8u;
        goto label_1d68c8;
    }
    ctx->pc = 0x1D68C0u;
    {
        const bool branch_taken_0x1d68c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d68c0) {
            ctx->pc = 0x1D68D0u;
            goto label_1d68d0;
        }
    }
    ctx->pc = 0x1D68C8u;
label_1d68c8:
    // 0x1d68c8: 0xc1293fc  jal         func_4A4FF0
label_1d68cc:
    if (ctx->pc == 0x1D68CCu) {
        ctx->pc = 0x1D68D0u;
        goto label_1d68d0;
    }
    ctx->pc = 0x1D68C8u;
    SET_GPR_U32(ctx, 31, 0x1D68D0u);
    ctx->pc = 0x4A4FF0u;
    if (runtime->hasFunction(0x4A4FF0u)) {
        auto targetFn = runtime->lookupFunction(0x4A4FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D68D0u; }
        if (ctx->pc != 0x1D68D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A4FF0_0x4a4ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D68D0u; }
        if (ctx->pc != 0x1D68D0u) { return; }
    }
    ctx->pc = 0x1D68D0u;
label_1d68d0:
    // 0x1d68d0: 0x24150006  addiu       $s5, $zero, 0x6
    ctx->pc = 0x1d68d0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1d68d4:
    // 0x1d68d4: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x1d68d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1d68d8:
    // 0x1d68d8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1d68d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1d68dc:
    // 0x1d68dc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1d68dcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1d68e0:
    // 0x1d68e0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1d68e0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1d68e4:
    // 0x1d68e4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1d68e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1d68e8:
    // 0x1d68e8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d68e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d68ec:
    // 0x1d68ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d68ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d68f0:
    // 0x1d68f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d68f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d68f4:
    // 0x1d68f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d68f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d68f8:
    // 0x1d68f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d68f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d68fc:
    // 0x1d68fc: 0x3e00008  jr          $ra
label_1d6900:
    if (ctx->pc == 0x1D6900u) {
        ctx->pc = 0x1D6900u;
            // 0x1d6900: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x1D6904u;
        goto label_1d6904;
    }
    ctx->pc = 0x1D68FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D68FCu;
            // 0x1d6900: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D6904u;
label_1d6904:
    // 0x1d6904: 0x0  nop
    ctx->pc = 0x1d6904u;
    // NOP
label_1d6908:
    // 0x1d6908: 0x0  nop
    ctx->pc = 0x1d6908u;
    // NOP
label_1d690c:
    // 0x1d690c: 0x0  nop
    ctx->pc = 0x1d690cu;
    // NOP
}
