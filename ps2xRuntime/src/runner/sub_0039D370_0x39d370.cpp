#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0039D370
// Address: 0x39d370 - 0x39da40
void sub_0039D370_0x39d370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039D370_0x39d370");
#endif

    switch (ctx->pc) {
        case 0x39d370u: goto label_39d370;
        case 0x39d374u: goto label_39d374;
        case 0x39d378u: goto label_39d378;
        case 0x39d37cu: goto label_39d37c;
        case 0x39d380u: goto label_39d380;
        case 0x39d384u: goto label_39d384;
        case 0x39d388u: goto label_39d388;
        case 0x39d38cu: goto label_39d38c;
        case 0x39d390u: goto label_39d390;
        case 0x39d394u: goto label_39d394;
        case 0x39d398u: goto label_39d398;
        case 0x39d39cu: goto label_39d39c;
        case 0x39d3a0u: goto label_39d3a0;
        case 0x39d3a4u: goto label_39d3a4;
        case 0x39d3a8u: goto label_39d3a8;
        case 0x39d3acu: goto label_39d3ac;
        case 0x39d3b0u: goto label_39d3b0;
        case 0x39d3b4u: goto label_39d3b4;
        case 0x39d3b8u: goto label_39d3b8;
        case 0x39d3bcu: goto label_39d3bc;
        case 0x39d3c0u: goto label_39d3c0;
        case 0x39d3c4u: goto label_39d3c4;
        case 0x39d3c8u: goto label_39d3c8;
        case 0x39d3ccu: goto label_39d3cc;
        case 0x39d3d0u: goto label_39d3d0;
        case 0x39d3d4u: goto label_39d3d4;
        case 0x39d3d8u: goto label_39d3d8;
        case 0x39d3dcu: goto label_39d3dc;
        case 0x39d3e0u: goto label_39d3e0;
        case 0x39d3e4u: goto label_39d3e4;
        case 0x39d3e8u: goto label_39d3e8;
        case 0x39d3ecu: goto label_39d3ec;
        case 0x39d3f0u: goto label_39d3f0;
        case 0x39d3f4u: goto label_39d3f4;
        case 0x39d3f8u: goto label_39d3f8;
        case 0x39d3fcu: goto label_39d3fc;
        case 0x39d400u: goto label_39d400;
        case 0x39d404u: goto label_39d404;
        case 0x39d408u: goto label_39d408;
        case 0x39d40cu: goto label_39d40c;
        case 0x39d410u: goto label_39d410;
        case 0x39d414u: goto label_39d414;
        case 0x39d418u: goto label_39d418;
        case 0x39d41cu: goto label_39d41c;
        case 0x39d420u: goto label_39d420;
        case 0x39d424u: goto label_39d424;
        case 0x39d428u: goto label_39d428;
        case 0x39d42cu: goto label_39d42c;
        case 0x39d430u: goto label_39d430;
        case 0x39d434u: goto label_39d434;
        case 0x39d438u: goto label_39d438;
        case 0x39d43cu: goto label_39d43c;
        case 0x39d440u: goto label_39d440;
        case 0x39d444u: goto label_39d444;
        case 0x39d448u: goto label_39d448;
        case 0x39d44cu: goto label_39d44c;
        case 0x39d450u: goto label_39d450;
        case 0x39d454u: goto label_39d454;
        case 0x39d458u: goto label_39d458;
        case 0x39d45cu: goto label_39d45c;
        case 0x39d460u: goto label_39d460;
        case 0x39d464u: goto label_39d464;
        case 0x39d468u: goto label_39d468;
        case 0x39d46cu: goto label_39d46c;
        case 0x39d470u: goto label_39d470;
        case 0x39d474u: goto label_39d474;
        case 0x39d478u: goto label_39d478;
        case 0x39d47cu: goto label_39d47c;
        case 0x39d480u: goto label_39d480;
        case 0x39d484u: goto label_39d484;
        case 0x39d488u: goto label_39d488;
        case 0x39d48cu: goto label_39d48c;
        case 0x39d490u: goto label_39d490;
        case 0x39d494u: goto label_39d494;
        case 0x39d498u: goto label_39d498;
        case 0x39d49cu: goto label_39d49c;
        case 0x39d4a0u: goto label_39d4a0;
        case 0x39d4a4u: goto label_39d4a4;
        case 0x39d4a8u: goto label_39d4a8;
        case 0x39d4acu: goto label_39d4ac;
        case 0x39d4b0u: goto label_39d4b0;
        case 0x39d4b4u: goto label_39d4b4;
        case 0x39d4b8u: goto label_39d4b8;
        case 0x39d4bcu: goto label_39d4bc;
        case 0x39d4c0u: goto label_39d4c0;
        case 0x39d4c4u: goto label_39d4c4;
        case 0x39d4c8u: goto label_39d4c8;
        case 0x39d4ccu: goto label_39d4cc;
        case 0x39d4d0u: goto label_39d4d0;
        case 0x39d4d4u: goto label_39d4d4;
        case 0x39d4d8u: goto label_39d4d8;
        case 0x39d4dcu: goto label_39d4dc;
        case 0x39d4e0u: goto label_39d4e0;
        case 0x39d4e4u: goto label_39d4e4;
        case 0x39d4e8u: goto label_39d4e8;
        case 0x39d4ecu: goto label_39d4ec;
        case 0x39d4f0u: goto label_39d4f0;
        case 0x39d4f4u: goto label_39d4f4;
        case 0x39d4f8u: goto label_39d4f8;
        case 0x39d4fcu: goto label_39d4fc;
        case 0x39d500u: goto label_39d500;
        case 0x39d504u: goto label_39d504;
        case 0x39d508u: goto label_39d508;
        case 0x39d50cu: goto label_39d50c;
        case 0x39d510u: goto label_39d510;
        case 0x39d514u: goto label_39d514;
        case 0x39d518u: goto label_39d518;
        case 0x39d51cu: goto label_39d51c;
        case 0x39d520u: goto label_39d520;
        case 0x39d524u: goto label_39d524;
        case 0x39d528u: goto label_39d528;
        case 0x39d52cu: goto label_39d52c;
        case 0x39d530u: goto label_39d530;
        case 0x39d534u: goto label_39d534;
        case 0x39d538u: goto label_39d538;
        case 0x39d53cu: goto label_39d53c;
        case 0x39d540u: goto label_39d540;
        case 0x39d544u: goto label_39d544;
        case 0x39d548u: goto label_39d548;
        case 0x39d54cu: goto label_39d54c;
        case 0x39d550u: goto label_39d550;
        case 0x39d554u: goto label_39d554;
        case 0x39d558u: goto label_39d558;
        case 0x39d55cu: goto label_39d55c;
        case 0x39d560u: goto label_39d560;
        case 0x39d564u: goto label_39d564;
        case 0x39d568u: goto label_39d568;
        case 0x39d56cu: goto label_39d56c;
        case 0x39d570u: goto label_39d570;
        case 0x39d574u: goto label_39d574;
        case 0x39d578u: goto label_39d578;
        case 0x39d57cu: goto label_39d57c;
        case 0x39d580u: goto label_39d580;
        case 0x39d584u: goto label_39d584;
        case 0x39d588u: goto label_39d588;
        case 0x39d58cu: goto label_39d58c;
        case 0x39d590u: goto label_39d590;
        case 0x39d594u: goto label_39d594;
        case 0x39d598u: goto label_39d598;
        case 0x39d59cu: goto label_39d59c;
        case 0x39d5a0u: goto label_39d5a0;
        case 0x39d5a4u: goto label_39d5a4;
        case 0x39d5a8u: goto label_39d5a8;
        case 0x39d5acu: goto label_39d5ac;
        case 0x39d5b0u: goto label_39d5b0;
        case 0x39d5b4u: goto label_39d5b4;
        case 0x39d5b8u: goto label_39d5b8;
        case 0x39d5bcu: goto label_39d5bc;
        case 0x39d5c0u: goto label_39d5c0;
        case 0x39d5c4u: goto label_39d5c4;
        case 0x39d5c8u: goto label_39d5c8;
        case 0x39d5ccu: goto label_39d5cc;
        case 0x39d5d0u: goto label_39d5d0;
        case 0x39d5d4u: goto label_39d5d4;
        case 0x39d5d8u: goto label_39d5d8;
        case 0x39d5dcu: goto label_39d5dc;
        case 0x39d5e0u: goto label_39d5e0;
        case 0x39d5e4u: goto label_39d5e4;
        case 0x39d5e8u: goto label_39d5e8;
        case 0x39d5ecu: goto label_39d5ec;
        case 0x39d5f0u: goto label_39d5f0;
        case 0x39d5f4u: goto label_39d5f4;
        case 0x39d5f8u: goto label_39d5f8;
        case 0x39d5fcu: goto label_39d5fc;
        case 0x39d600u: goto label_39d600;
        case 0x39d604u: goto label_39d604;
        case 0x39d608u: goto label_39d608;
        case 0x39d60cu: goto label_39d60c;
        case 0x39d610u: goto label_39d610;
        case 0x39d614u: goto label_39d614;
        case 0x39d618u: goto label_39d618;
        case 0x39d61cu: goto label_39d61c;
        case 0x39d620u: goto label_39d620;
        case 0x39d624u: goto label_39d624;
        case 0x39d628u: goto label_39d628;
        case 0x39d62cu: goto label_39d62c;
        case 0x39d630u: goto label_39d630;
        case 0x39d634u: goto label_39d634;
        case 0x39d638u: goto label_39d638;
        case 0x39d63cu: goto label_39d63c;
        case 0x39d640u: goto label_39d640;
        case 0x39d644u: goto label_39d644;
        case 0x39d648u: goto label_39d648;
        case 0x39d64cu: goto label_39d64c;
        case 0x39d650u: goto label_39d650;
        case 0x39d654u: goto label_39d654;
        case 0x39d658u: goto label_39d658;
        case 0x39d65cu: goto label_39d65c;
        case 0x39d660u: goto label_39d660;
        case 0x39d664u: goto label_39d664;
        case 0x39d668u: goto label_39d668;
        case 0x39d66cu: goto label_39d66c;
        case 0x39d670u: goto label_39d670;
        case 0x39d674u: goto label_39d674;
        case 0x39d678u: goto label_39d678;
        case 0x39d67cu: goto label_39d67c;
        case 0x39d680u: goto label_39d680;
        case 0x39d684u: goto label_39d684;
        case 0x39d688u: goto label_39d688;
        case 0x39d68cu: goto label_39d68c;
        case 0x39d690u: goto label_39d690;
        case 0x39d694u: goto label_39d694;
        case 0x39d698u: goto label_39d698;
        case 0x39d69cu: goto label_39d69c;
        case 0x39d6a0u: goto label_39d6a0;
        case 0x39d6a4u: goto label_39d6a4;
        case 0x39d6a8u: goto label_39d6a8;
        case 0x39d6acu: goto label_39d6ac;
        case 0x39d6b0u: goto label_39d6b0;
        case 0x39d6b4u: goto label_39d6b4;
        case 0x39d6b8u: goto label_39d6b8;
        case 0x39d6bcu: goto label_39d6bc;
        case 0x39d6c0u: goto label_39d6c0;
        case 0x39d6c4u: goto label_39d6c4;
        case 0x39d6c8u: goto label_39d6c8;
        case 0x39d6ccu: goto label_39d6cc;
        case 0x39d6d0u: goto label_39d6d0;
        case 0x39d6d4u: goto label_39d6d4;
        case 0x39d6d8u: goto label_39d6d8;
        case 0x39d6dcu: goto label_39d6dc;
        case 0x39d6e0u: goto label_39d6e0;
        case 0x39d6e4u: goto label_39d6e4;
        case 0x39d6e8u: goto label_39d6e8;
        case 0x39d6ecu: goto label_39d6ec;
        case 0x39d6f0u: goto label_39d6f0;
        case 0x39d6f4u: goto label_39d6f4;
        case 0x39d6f8u: goto label_39d6f8;
        case 0x39d6fcu: goto label_39d6fc;
        case 0x39d700u: goto label_39d700;
        case 0x39d704u: goto label_39d704;
        case 0x39d708u: goto label_39d708;
        case 0x39d70cu: goto label_39d70c;
        case 0x39d710u: goto label_39d710;
        case 0x39d714u: goto label_39d714;
        case 0x39d718u: goto label_39d718;
        case 0x39d71cu: goto label_39d71c;
        case 0x39d720u: goto label_39d720;
        case 0x39d724u: goto label_39d724;
        case 0x39d728u: goto label_39d728;
        case 0x39d72cu: goto label_39d72c;
        case 0x39d730u: goto label_39d730;
        case 0x39d734u: goto label_39d734;
        case 0x39d738u: goto label_39d738;
        case 0x39d73cu: goto label_39d73c;
        case 0x39d740u: goto label_39d740;
        case 0x39d744u: goto label_39d744;
        case 0x39d748u: goto label_39d748;
        case 0x39d74cu: goto label_39d74c;
        case 0x39d750u: goto label_39d750;
        case 0x39d754u: goto label_39d754;
        case 0x39d758u: goto label_39d758;
        case 0x39d75cu: goto label_39d75c;
        case 0x39d760u: goto label_39d760;
        case 0x39d764u: goto label_39d764;
        case 0x39d768u: goto label_39d768;
        case 0x39d76cu: goto label_39d76c;
        case 0x39d770u: goto label_39d770;
        case 0x39d774u: goto label_39d774;
        case 0x39d778u: goto label_39d778;
        case 0x39d77cu: goto label_39d77c;
        case 0x39d780u: goto label_39d780;
        case 0x39d784u: goto label_39d784;
        case 0x39d788u: goto label_39d788;
        case 0x39d78cu: goto label_39d78c;
        case 0x39d790u: goto label_39d790;
        case 0x39d794u: goto label_39d794;
        case 0x39d798u: goto label_39d798;
        case 0x39d79cu: goto label_39d79c;
        case 0x39d7a0u: goto label_39d7a0;
        case 0x39d7a4u: goto label_39d7a4;
        case 0x39d7a8u: goto label_39d7a8;
        case 0x39d7acu: goto label_39d7ac;
        case 0x39d7b0u: goto label_39d7b0;
        case 0x39d7b4u: goto label_39d7b4;
        case 0x39d7b8u: goto label_39d7b8;
        case 0x39d7bcu: goto label_39d7bc;
        case 0x39d7c0u: goto label_39d7c0;
        case 0x39d7c4u: goto label_39d7c4;
        case 0x39d7c8u: goto label_39d7c8;
        case 0x39d7ccu: goto label_39d7cc;
        case 0x39d7d0u: goto label_39d7d0;
        case 0x39d7d4u: goto label_39d7d4;
        case 0x39d7d8u: goto label_39d7d8;
        case 0x39d7dcu: goto label_39d7dc;
        case 0x39d7e0u: goto label_39d7e0;
        case 0x39d7e4u: goto label_39d7e4;
        case 0x39d7e8u: goto label_39d7e8;
        case 0x39d7ecu: goto label_39d7ec;
        case 0x39d7f0u: goto label_39d7f0;
        case 0x39d7f4u: goto label_39d7f4;
        case 0x39d7f8u: goto label_39d7f8;
        case 0x39d7fcu: goto label_39d7fc;
        case 0x39d800u: goto label_39d800;
        case 0x39d804u: goto label_39d804;
        case 0x39d808u: goto label_39d808;
        case 0x39d80cu: goto label_39d80c;
        case 0x39d810u: goto label_39d810;
        case 0x39d814u: goto label_39d814;
        case 0x39d818u: goto label_39d818;
        case 0x39d81cu: goto label_39d81c;
        case 0x39d820u: goto label_39d820;
        case 0x39d824u: goto label_39d824;
        case 0x39d828u: goto label_39d828;
        case 0x39d82cu: goto label_39d82c;
        case 0x39d830u: goto label_39d830;
        case 0x39d834u: goto label_39d834;
        case 0x39d838u: goto label_39d838;
        case 0x39d83cu: goto label_39d83c;
        case 0x39d840u: goto label_39d840;
        case 0x39d844u: goto label_39d844;
        case 0x39d848u: goto label_39d848;
        case 0x39d84cu: goto label_39d84c;
        case 0x39d850u: goto label_39d850;
        case 0x39d854u: goto label_39d854;
        case 0x39d858u: goto label_39d858;
        case 0x39d85cu: goto label_39d85c;
        case 0x39d860u: goto label_39d860;
        case 0x39d864u: goto label_39d864;
        case 0x39d868u: goto label_39d868;
        case 0x39d86cu: goto label_39d86c;
        case 0x39d870u: goto label_39d870;
        case 0x39d874u: goto label_39d874;
        case 0x39d878u: goto label_39d878;
        case 0x39d87cu: goto label_39d87c;
        case 0x39d880u: goto label_39d880;
        case 0x39d884u: goto label_39d884;
        case 0x39d888u: goto label_39d888;
        case 0x39d88cu: goto label_39d88c;
        case 0x39d890u: goto label_39d890;
        case 0x39d894u: goto label_39d894;
        case 0x39d898u: goto label_39d898;
        case 0x39d89cu: goto label_39d89c;
        case 0x39d8a0u: goto label_39d8a0;
        case 0x39d8a4u: goto label_39d8a4;
        case 0x39d8a8u: goto label_39d8a8;
        case 0x39d8acu: goto label_39d8ac;
        case 0x39d8b0u: goto label_39d8b0;
        case 0x39d8b4u: goto label_39d8b4;
        case 0x39d8b8u: goto label_39d8b8;
        case 0x39d8bcu: goto label_39d8bc;
        case 0x39d8c0u: goto label_39d8c0;
        case 0x39d8c4u: goto label_39d8c4;
        case 0x39d8c8u: goto label_39d8c8;
        case 0x39d8ccu: goto label_39d8cc;
        case 0x39d8d0u: goto label_39d8d0;
        case 0x39d8d4u: goto label_39d8d4;
        case 0x39d8d8u: goto label_39d8d8;
        case 0x39d8dcu: goto label_39d8dc;
        case 0x39d8e0u: goto label_39d8e0;
        case 0x39d8e4u: goto label_39d8e4;
        case 0x39d8e8u: goto label_39d8e8;
        case 0x39d8ecu: goto label_39d8ec;
        case 0x39d8f0u: goto label_39d8f0;
        case 0x39d8f4u: goto label_39d8f4;
        case 0x39d8f8u: goto label_39d8f8;
        case 0x39d8fcu: goto label_39d8fc;
        case 0x39d900u: goto label_39d900;
        case 0x39d904u: goto label_39d904;
        case 0x39d908u: goto label_39d908;
        case 0x39d90cu: goto label_39d90c;
        case 0x39d910u: goto label_39d910;
        case 0x39d914u: goto label_39d914;
        case 0x39d918u: goto label_39d918;
        case 0x39d91cu: goto label_39d91c;
        case 0x39d920u: goto label_39d920;
        case 0x39d924u: goto label_39d924;
        case 0x39d928u: goto label_39d928;
        case 0x39d92cu: goto label_39d92c;
        case 0x39d930u: goto label_39d930;
        case 0x39d934u: goto label_39d934;
        case 0x39d938u: goto label_39d938;
        case 0x39d93cu: goto label_39d93c;
        case 0x39d940u: goto label_39d940;
        case 0x39d944u: goto label_39d944;
        case 0x39d948u: goto label_39d948;
        case 0x39d94cu: goto label_39d94c;
        case 0x39d950u: goto label_39d950;
        case 0x39d954u: goto label_39d954;
        case 0x39d958u: goto label_39d958;
        case 0x39d95cu: goto label_39d95c;
        case 0x39d960u: goto label_39d960;
        case 0x39d964u: goto label_39d964;
        case 0x39d968u: goto label_39d968;
        case 0x39d96cu: goto label_39d96c;
        case 0x39d970u: goto label_39d970;
        case 0x39d974u: goto label_39d974;
        case 0x39d978u: goto label_39d978;
        case 0x39d97cu: goto label_39d97c;
        case 0x39d980u: goto label_39d980;
        case 0x39d984u: goto label_39d984;
        case 0x39d988u: goto label_39d988;
        case 0x39d98cu: goto label_39d98c;
        case 0x39d990u: goto label_39d990;
        case 0x39d994u: goto label_39d994;
        case 0x39d998u: goto label_39d998;
        case 0x39d99cu: goto label_39d99c;
        case 0x39d9a0u: goto label_39d9a0;
        case 0x39d9a4u: goto label_39d9a4;
        case 0x39d9a8u: goto label_39d9a8;
        case 0x39d9acu: goto label_39d9ac;
        case 0x39d9b0u: goto label_39d9b0;
        case 0x39d9b4u: goto label_39d9b4;
        case 0x39d9b8u: goto label_39d9b8;
        case 0x39d9bcu: goto label_39d9bc;
        case 0x39d9c0u: goto label_39d9c0;
        case 0x39d9c4u: goto label_39d9c4;
        case 0x39d9c8u: goto label_39d9c8;
        case 0x39d9ccu: goto label_39d9cc;
        case 0x39d9d0u: goto label_39d9d0;
        case 0x39d9d4u: goto label_39d9d4;
        case 0x39d9d8u: goto label_39d9d8;
        case 0x39d9dcu: goto label_39d9dc;
        case 0x39d9e0u: goto label_39d9e0;
        case 0x39d9e4u: goto label_39d9e4;
        case 0x39d9e8u: goto label_39d9e8;
        case 0x39d9ecu: goto label_39d9ec;
        case 0x39d9f0u: goto label_39d9f0;
        case 0x39d9f4u: goto label_39d9f4;
        case 0x39d9f8u: goto label_39d9f8;
        case 0x39d9fcu: goto label_39d9fc;
        case 0x39da00u: goto label_39da00;
        case 0x39da04u: goto label_39da04;
        case 0x39da08u: goto label_39da08;
        case 0x39da0cu: goto label_39da0c;
        case 0x39da10u: goto label_39da10;
        case 0x39da14u: goto label_39da14;
        case 0x39da18u: goto label_39da18;
        case 0x39da1cu: goto label_39da1c;
        case 0x39da20u: goto label_39da20;
        case 0x39da24u: goto label_39da24;
        case 0x39da28u: goto label_39da28;
        case 0x39da2cu: goto label_39da2c;
        case 0x39da30u: goto label_39da30;
        case 0x39da34u: goto label_39da34;
        case 0x39da38u: goto label_39da38;
        case 0x39da3cu: goto label_39da3c;
        default: break;
    }

    ctx->pc = 0x39d370u;

label_39d370:
    // 0x39d370: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x39d370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_39d374:
    // 0x39d374: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x39d374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_39d378:
    // 0x39d378: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x39d378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_39d37c:
    // 0x39d37c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x39d37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_39d380:
    // 0x39d380: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x39d380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_39d384:
    // 0x39d384: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x39d384u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39d388:
    // 0x39d388: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x39d388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_39d38c:
    // 0x39d38c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x39d38cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_39d390:
    // 0x39d390: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x39d390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_39d394:
    // 0x39d394: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x39d394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39d398:
    // 0x39d398: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39d398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_39d39c:
    // 0x39d39c: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x39d39cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_39d3a0:
    // 0x39d3a0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39d3a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_39d3a4:
    // 0x39d3a4: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x39d3a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_39d3a8:
    // 0x39d3a8: 0x2258004  sllv        $s0, $a1, $s1
    ctx->pc = 0x39d3a8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 17) & 0x1F));
label_39d3ac:
    // 0x39d3ac: 0x9083004d  lbu         $v1, 0x4D($a0)
    ctx->pc = 0x39d3acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 77)));
label_39d3b0:
    // 0x39d3b0: 0x2002827  not         $a1, $s0
    ctx->pc = 0x39d3b0u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 16) | GPR_U64(ctx, 0)));
label_39d3b4:
    // 0x39d3b4: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x39d3b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_39d3b8:
    // 0x39d3b8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x39d3b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_39d3bc:
    // 0x39d3bc: 0xa083004d  sb          $v1, 0x4D($a0)
    ctx->pc = 0x39d3bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 3));
label_39d3c0:
    // 0x39d3c0: 0x8c830140  lw          $v1, 0x140($a0)
    ctx->pc = 0x39d3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 320)));
label_39d3c4:
    // 0x39d3c4: 0x1860006e  blez        $v1, . + 4 + (0x6E << 2)
label_39d3c8:
    if (ctx->pc == 0x39D3C8u) {
        ctx->pc = 0x39D3C8u;
            // 0x39d3c8: 0x120902d  daddu       $s2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39D3CCu;
        goto label_39d3cc;
    }
    ctx->pc = 0x39D3C4u;
    {
        const bool branch_taken_0x39d3c4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x39D3C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39D3C4u;
            // 0x39d3c8: 0x120902d  daddu       $s2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d3c4) {
            ctx->pc = 0x39D580u;
            goto label_39d580;
        }
    }
    ctx->pc = 0x39D3CCu;
label_39d3cc:
    // 0x39d3cc: 0x92a30090  lbu         $v1, 0x90($s5)
    ctx->pc = 0x39d3ccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 144)));
label_39d3d0:
    // 0x39d3d0: 0x5060006c  beql        $v1, $zero, . + 4 + (0x6C << 2)
label_39d3d4:
    if (ctx->pc == 0x39D3D4u) {
        ctx->pc = 0x39D3D4u;
            // 0x39d3d4: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x39D3D8u;
        goto label_39d3d8;
    }
    ctx->pc = 0x39D3D0u;
    {
        const bool branch_taken_0x39d3d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x39d3d0) {
            ctx->pc = 0x39D3D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39D3D0u;
            // 0x39d3d4: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39D584u;
            goto label_39d584;
        }
    }
    ctx->pc = 0x39D3D8u;
label_39d3d8:
    // 0x39d3d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39d3d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39d3dc:
    // 0x39d3dc: 0xc04f278  jal         func_13C9E0
label_39d3e0:
    if (ctx->pc == 0x39D3E0u) {
        ctx->pc = 0x39D3E0u;
            // 0x39d3e0: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->pc = 0x39D3E4u;
        goto label_39d3e4;
    }
    ctx->pc = 0x39D3DCu;
    SET_GPR_U32(ctx, 31, 0x39D3E4u);
    ctx->pc = 0x39D3E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39D3DCu;
            // 0x39d3e0: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D3E4u; }
        if (ctx->pc != 0x39D3E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D3E4u; }
        if (ctx->pc != 0x39D3E4u) { return; }
    }
    ctx->pc = 0x39D3E4u;
label_39d3e4:
    // 0x39d3e4: 0x8ea30144  lw          $v1, 0x144($s5)
    ctx->pc = 0x39d3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 324)));
label_39d3e8:
    // 0x39d3e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x39d3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_39d3ec:
    // 0x39d3ec: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_39d3f0:
    if (ctx->pc == 0x39D3F0u) {
        ctx->pc = 0x39D3F0u;
            // 0x39d3f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39D3F4u;
        goto label_39d3f4;
    }
    ctx->pc = 0x39D3ECu;
    {
        const bool branch_taken_0x39d3ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x39d3ec) {
            ctx->pc = 0x39D3F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39D3ECu;
            // 0x39d3f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39D408u;
            goto label_39d408;
        }
    }
    ctx->pc = 0x39D3F4u;
label_39d3f4:
    // 0x39d3f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39d3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39d3f8:
    // 0x39d3f8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x39d3f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39d3fc:
    // 0x39d3fc: 0xc04cdd0  jal         func_133740
label_39d400:
    if (ctx->pc == 0x39D400u) {
        ctx->pc = 0x39D400u;
            // 0x39d400: 0x24067fff  addiu       $a2, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->pc = 0x39D404u;
        goto label_39d404;
    }
    ctx->pc = 0x39D3FCu;
    SET_GPR_U32(ctx, 31, 0x39D404u);
    ctx->pc = 0x39D400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39D3FCu;
            // 0x39d400: 0x24067fff  addiu       $a2, $zero, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133740u;
    if (runtime->hasFunction(0x133740u)) {
        auto targetFn = runtime->lookupFunction(0x133740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D404u; }
        if (ctx->pc != 0x39D404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133740_0x133740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D404u; }
        if (ctx->pc != 0x39D404u) { return; }
    }
    ctx->pc = 0x39D404u;
label_39d404:
    // 0x39d404: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x39d404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39d408:
    // 0x39d408: 0xc04ce80  jal         func_133A00
label_39d40c:
    if (ctx->pc == 0x39D40Cu) {
        ctx->pc = 0x39D40Cu;
            // 0x39d40c: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->pc = 0x39D410u;
        goto label_39d410;
    }
    ctx->pc = 0x39D408u;
    SET_GPR_U32(ctx, 31, 0x39D410u);
    ctx->pc = 0x39D40Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39D408u;
            // 0x39d40c: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D410u; }
        if (ctx->pc != 0x39D410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D410u; }
        if (ctx->pc != 0x39D410u) { return; }
    }
    ctx->pc = 0x39D410u;
label_39d410:
    // 0x39d410: 0xc0d4108  jal         func_350420
label_39d414:
    if (ctx->pc == 0x39D414u) {
        ctx->pc = 0x39D418u;
        goto label_39d418;
    }
    ctx->pc = 0x39D410u;
    SET_GPR_U32(ctx, 31, 0x39D418u);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D418u; }
        if (ctx->pc != 0x39D418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D418u; }
        if (ctx->pc != 0x39D418u) { return; }
    }
    ctx->pc = 0x39D418u;
label_39d418:
    // 0x39d418: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x39d418u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39d41c:
    // 0x39d41c: 0xc0d4104  jal         func_350410
label_39d420:
    if (ctx->pc == 0x39D420u) {
        ctx->pc = 0x39D420u;
            // 0x39d420: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39D424u;
        goto label_39d424;
    }
    ctx->pc = 0x39D41Cu;
    SET_GPR_U32(ctx, 31, 0x39D424u);
    ctx->pc = 0x39D420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39D41Cu;
            // 0x39d420: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D424u; }
        if (ctx->pc != 0x39D424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D424u; }
        if (ctx->pc != 0x39D424u) { return; }
    }
    ctx->pc = 0x39D424u;
label_39d424:
    // 0x39d424: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x39d424u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_39d428:
    // 0x39d428: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x39d428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_39d42c:
    // 0x39d42c: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x39d42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_39d430:
    // 0x39d430: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x39d430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39d434:
    // 0x39d434: 0xc44c7140  lwc1        $f12, 0x7140($v0)
    ctx->pc = 0x39d434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_39d438:
    // 0x39d438: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x39d438u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_39d43c:
    // 0x39d43c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x39d43cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39d440:
    // 0x39d440: 0xc0d40ac  jal         func_3502B0
label_39d444:
    if (ctx->pc == 0x39D444u) {
        ctx->pc = 0x39D444u;
            // 0x39d444: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39D448u;
        goto label_39d448;
    }
    ctx->pc = 0x39D440u;
    SET_GPR_U32(ctx, 31, 0x39D448u);
    ctx->pc = 0x39D444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39D440u;
            // 0x39d444: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D448u; }
        if (ctx->pc != 0x39D448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D448u; }
        if (ctx->pc != 0x39D448u) { return; }
    }
    ctx->pc = 0x39D448u;
label_39d448:
    // 0x39d448: 0xaea20044  sw          $v0, 0x44($s5)
    ctx->pc = 0x39d448u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 2));
label_39d44c:
    // 0x39d44c: 0x28510002  slti        $s1, $v0, 0x2
    ctx->pc = 0x39d44cu;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_39d450:
    // 0x39d450: 0x2111018  mult        $v0, $s0, $s1
    ctx->pc = 0x39d450u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_39d454:
    // 0x39d454: 0x26a4004d  addiu       $a0, $s5, 0x4D
    ctx->pc = 0x39d454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 77));
label_39d458:
    // 0x39d458: 0x27a5008c  addiu       $a1, $sp, 0x8C
    ctx->pc = 0x39d458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
label_39d45c:
    // 0x39d45c: 0xc0d590c  jal         func_356430
label_39d460:
    if (ctx->pc == 0x39D460u) {
        ctx->pc = 0x39D460u;
            // 0x39d460: 0xafa2008c  sw          $v0, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
        ctx->pc = 0x39D464u;
        goto label_39d464;
    }
    ctx->pc = 0x39D45Cu;
    SET_GPR_U32(ctx, 31, 0x39D464u);
    ctx->pc = 0x39D460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39D45Cu;
            // 0x39d460: 0xafa2008c  sw          $v0, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x356430u;
    if (runtime->hasFunction(0x356430u)) {
        auto targetFn = runtime->lookupFunction(0x356430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D464u; }
        if (ctx->pc != 0x39D464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00356430_0x356430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D464u; }
        if (ctx->pc != 0x39D464u) { return; }
    }
    ctx->pc = 0x39D464u;
label_39d464:
    // 0x39d464: 0x12200046  beqz        $s1, . + 4 + (0x46 << 2)
label_39d468:
    if (ctx->pc == 0x39D468u) {
        ctx->pc = 0x39D46Cu;
        goto label_39d46c;
    }
    ctx->pc = 0x39D464u;
    {
        const bool branch_taken_0x39d464 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x39d464) {
            ctx->pc = 0x39D580u;
            goto label_39d580;
        }
    }
    ctx->pc = 0x39D46Cu;
label_39d46c:
    // 0x39d46c: 0x8ea20144  lw          $v0, 0x144($s5)
    ctx->pc = 0x39d46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 324)));
label_39d470:
    // 0x39d470: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_39d474:
    if (ctx->pc == 0x39D474u) {
        ctx->pc = 0x39D478u;
        goto label_39d478;
    }
    ctx->pc = 0x39D470u;
    {
        const bool branch_taken_0x39d470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39d470) {
            ctx->pc = 0x39D4A4u;
            goto label_39d4a4;
        }
    }
    ctx->pc = 0x39D478u;
label_39d478:
    // 0x39d478: 0x8ea301a0  lw          $v1, 0x1A0($s5)
    ctx->pc = 0x39d478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 416)));
label_39d47c:
    // 0x39d47c: 0x26a40160  addiu       $a0, $s5, 0x160
    ctx->pc = 0x39d47cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 352));
label_39d480:
    // 0x39d480: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x39d480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39d484:
    // 0x39d484: 0x94620064  lhu         $v0, 0x64($v1)
    ctx->pc = 0x39d484u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
label_39d488:
    // 0x39d488: 0x3042feff  andi        $v0, $v0, 0xFEFF
    ctx->pc = 0x39d488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65279);
label_39d48c:
    // 0x39d48c: 0xa4620064  sh          $v0, 0x64($v1)
    ctx->pc = 0x39d48cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
label_39d490:
    // 0x39d490: 0x8ea301a4  lw          $v1, 0x1A4($s5)
    ctx->pc = 0x39d490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 420)));
label_39d494:
    // 0x39d494: 0x94620064  lhu         $v0, 0x64($v1)
    ctx->pc = 0x39d494u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 100)));
label_39d498:
    // 0x39d498: 0x3042feff  andi        $v0, $v0, 0xFEFF
    ctx->pc = 0x39d498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65279);
label_39d49c:
    // 0x39d49c: 0xc04cce8  jal         func_1333A0
label_39d4a0:
    if (ctx->pc == 0x39D4A0u) {
        ctx->pc = 0x39D4A0u;
            // 0x39d4a0: 0xa4620064  sh          $v0, 0x64($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x39D4A4u;
        goto label_39d4a4;
    }
    ctx->pc = 0x39D49Cu;
    SET_GPR_U32(ctx, 31, 0x39D4A4u);
    ctx->pc = 0x39D4A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39D49Cu;
            // 0x39d4a0: 0xa4620064  sh          $v0, 0x64($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 100), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D4A4u; }
        if (ctx->pc != 0x39D4A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D4A4u; }
        if (ctx->pc != 0x39D4A4u) { return; }
    }
    ctx->pc = 0x39D4A4u;
label_39d4a4:
    // 0x39d4a4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x39d4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_39d4a8:
    // 0x39d4a8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39d4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39d4ac:
    // 0x39d4ac: 0x8c65e3c0  lw          $a1, -0x1C40($v1)
    ctx->pc = 0x39d4acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_39d4b0:
    // 0x39d4b0: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x39d4b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_39d4b4:
    // 0x39d4b4: 0x8c46e3d8  lw          $a2, -0x1C28($v0)
    ctx->pc = 0x39d4b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960088)));
label_39d4b8:
    // 0x39d4b8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x39d4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_39d4bc:
    // 0x39d4bc: 0x55080  sll         $t2, $a1, 2
    ctx->pc = 0x39d4bcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_39d4c0:
    // 0x39d4c0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39d4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39d4c4:
    // 0x39d4c4: 0x8c64e360  lw          $a0, -0x1CA0($v1)
    ctx->pc = 0x39d4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_39d4c8:
    // 0x39d4c8: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x39d4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_39d4cc:
    // 0x39d4cc: 0x63180  sll         $a2, $a2, 6
    ctx->pc = 0x39d4ccu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
label_39d4d0:
    // 0x39d4d0: 0x868821  addu        $s1, $a0, $a2
    ctx->pc = 0x39d4d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_39d4d4:
    // 0x39d4d4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x39d4d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_39d4d8:
    // 0x39d4d8: 0xaa2821  addu        $a1, $a1, $t2
    ctx->pc = 0x39d4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_39d4dc:
    // 0x39d4dc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39d4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39d4e0:
    // 0x39d4e0: 0xacb10000  sw          $s1, 0x0($a1)
    ctx->pc = 0x39d4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 17));
label_39d4e4:
    // 0x39d4e4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x39d4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_39d4e8:
    // 0x39d4e8: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x39d4e8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_39d4ec:
    // 0x39d4ec: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x39d4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_39d4f0:
    // 0x39d4f0: 0x8c48e378  lw          $t0, -0x1C88($v0)
    ctx->pc = 0x39d4f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_39d4f4:
    // 0x39d4f4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x39d4f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39d4f8:
    // 0x39d4f8: 0x8c84e3b8  lw          $a0, -0x1C48($a0)
    ctx->pc = 0x39d4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960056)));
label_39d4fc:
    // 0x39d4fc: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x39d4fcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_39d500:
    // 0x39d500: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x39d500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_39d504:
    // 0x39d504: 0x1098021  addu        $s0, $t0, $t1
    ctx->pc = 0x39d504u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_39d508:
    // 0x39d508: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39d508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39d50c:
    // 0x39d50c: 0x8a4021  addu        $t0, $a0, $t2
    ctx->pc = 0x39d50cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
label_39d510:
    // 0x39d510: 0xad100000  sw          $s0, 0x0($t0)
    ctx->pc = 0x39d510u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 16));
label_39d514:
    // 0x39d514: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x39d514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_39d518:
    // 0x39d518: 0x8e880028  lw          $t0, 0x28($s4)
    ctx->pc = 0x39d518u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_39d51c:
    // 0x39d51c: 0x8ce7e3d8  lw          $a3, -0x1C28($a3)
    ctx->pc = 0x39d51cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960088)));
label_39d520:
    // 0x39d520: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x39d520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_39d524:
    // 0x39d524: 0xac43e3c0  sw          $v1, -0x1C40($v0)
    ctx->pc = 0x39d524u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 3));
label_39d528:
    // 0x39d528: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x39d528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_39d52c:
    // 0x39d52c: 0xaca2e3d8  sw          $v0, -0x1C28($a1)
    ctx->pc = 0x39d52cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960088), GPR_U32(ctx, 2));
label_39d530:
    // 0x39d530: 0x8e850028  lw          $a1, 0x28($s4)
    ctx->pc = 0x39d530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_39d534:
    // 0x39d534: 0xc04e4a4  jal         func_139290
label_39d538:
    if (ctx->pc == 0x39D538u) {
        ctx->pc = 0x39D538u;
            // 0x39d538: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39D53Cu;
        goto label_39d53c;
    }
    ctx->pc = 0x39D534u;
    SET_GPR_U32(ctx, 31, 0x39D53Cu);
    ctx->pc = 0x39D538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39D534u;
            // 0x39d538: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D53Cu; }
        if (ctx->pc != 0x39D53Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D53Cu; }
        if (ctx->pc != 0x39D53Cu) { return; }
    }
    ctx->pc = 0x39D53Cu;
label_39d53c:
    // 0x39d53c: 0x8ea30144  lw          $v1, 0x144($s5)
    ctx->pc = 0x39d53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 324)));
label_39d540:
    // 0x39d540: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39d540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39d544:
    // 0x39d544: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_39d548:
    if (ctx->pc == 0x39D548u) {
        ctx->pc = 0x39D548u;
            // 0x39d548: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->pc = 0x39D54Cu;
        goto label_39d54c;
    }
    ctx->pc = 0x39D544u;
    {
        const bool branch_taken_0x39d544 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x39d544) {
            ctx->pc = 0x39D548u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39D544u;
            // 0x39d548: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39D558u;
            goto label_39d558;
        }
    }
    ctx->pc = 0x39D54Cu;
label_39d54c:
    // 0x39d54c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x39d54cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_39d550:
    // 0x39d550: 0x10000002  b           . + 4 + (0x2 << 2)
label_39d554:
    if (ctx->pc == 0x39D554u) {
        ctx->pc = 0x39D554u;
            // 0x39d554: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->pc = 0x39D558u;
        goto label_39d558;
    }
    ctx->pc = 0x39D550u;
    {
        const bool branch_taken_0x39d550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39D550u;
            // 0x39d554: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d550) {
            ctx->pc = 0x39D55Cu;
            goto label_39d55c;
        }
    }
    ctx->pc = 0x39D558u;
label_39d558:
    // 0x39d558: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x39d558u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_39d55c:
    // 0x39d55c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x39d55cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_39d560:
    // 0x39d560: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x39d560u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_39d564:
    // 0x39d564: 0xc04cd60  jal         func_133580
label_39d568:
    if (ctx->pc == 0x39D568u) {
        ctx->pc = 0x39D568u;
            // 0x39d568: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39D56Cu;
        goto label_39d56c;
    }
    ctx->pc = 0x39D564u;
    SET_GPR_U32(ctx, 31, 0x39D56Cu);
    ctx->pc = 0x39D568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39D564u;
            // 0x39d568: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D56Cu; }
        if (ctx->pc != 0x39D56Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D56Cu; }
        if (ctx->pc != 0x39D56Cu) { return; }
    }
    ctx->pc = 0x39D56Cu;
label_39d56c:
    // 0x39d56c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39d56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39d570:
    // 0x39d570: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x39d570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_39d574:
    // 0x39d574: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x39d574u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39d578:
    // 0x39d578: 0xc054fd4  jal         func_153F50
label_39d57c:
    if (ctx->pc == 0x39D57Cu) {
        ctx->pc = 0x39D57Cu;
            // 0x39d57c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39D580u;
        goto label_39d580;
    }
    ctx->pc = 0x39D578u;
    SET_GPR_U32(ctx, 31, 0x39D580u);
    ctx->pc = 0x39D57Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39D578u;
            // 0x39d57c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D580u; }
        if (ctx->pc != 0x39D580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D580u; }
        if (ctx->pc != 0x39D580u) { return; }
    }
    ctx->pc = 0x39D580u;
label_39d580:
    // 0x39d580: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x39d580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_39d584:
    // 0x39d584: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x39d584u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_39d588:
    // 0x39d588: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x39d588u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_39d58c:
    // 0x39d58c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x39d58cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_39d590:
    // 0x39d590: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x39d590u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_39d594:
    // 0x39d594: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x39d594u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39d598:
    // 0x39d598: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39d598u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39d59c:
    // 0x39d59c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39d59cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_39d5a0:
    // 0x39d5a0: 0x3e00008  jr          $ra
label_39d5a4:
    if (ctx->pc == 0x39D5A4u) {
        ctx->pc = 0x39D5A4u;
            // 0x39d5a4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x39D5A8u;
        goto label_39d5a8;
    }
    ctx->pc = 0x39D5A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39D5A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39D5A0u;
            // 0x39d5a4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39D5A8u;
label_39d5a8:
    // 0x39d5a8: 0x0  nop
    ctx->pc = 0x39d5a8u;
    // NOP
label_39d5ac:
    // 0x39d5ac: 0x0  nop
    ctx->pc = 0x39d5acu;
    // NOP
label_39d5b0:
    // 0x39d5b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39d5b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_39d5b4:
    // 0x39d5b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39d5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_39d5b8:
    // 0x39d5b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39d5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_39d5bc:
    // 0x39d5bc: 0xc0b1370  jal         func_2C4DC0
label_39d5c0:
    if (ctx->pc == 0x39D5C0u) {
        ctx->pc = 0x39D5C0u;
            // 0x39d5c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39D5C4u;
        goto label_39d5c4;
    }
    ctx->pc = 0x39D5BCu;
    SET_GPR_U32(ctx, 31, 0x39D5C4u);
    ctx->pc = 0x39D5C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39D5BCu;
            // 0x39d5c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C4DC0u;
    if (runtime->hasFunction(0x2C4DC0u)) {
        auto targetFn = runtime->lookupFunction(0x2C4DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D5C4u; }
        if (ctx->pc != 0x39D5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C4DC0_0x2c4dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D5C4u; }
        if (ctx->pc != 0x39D5C4u) { return; }
    }
    ctx->pc = 0x39D5C4u;
label_39d5c4:
    // 0x39d5c4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x39d5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_39d5c8:
    // 0x39d5c8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x39d5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_39d5cc:
    // 0x39d5cc: 0x24638470  addiu       $v1, $v1, -0x7B90
    ctx->pc = 0x39d5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935664));
label_39d5d0:
    // 0x39d5d0: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x39d5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
label_39d5d4:
    // 0x39d5d4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x39d5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_39d5d8:
    // 0x39d5d8: 0x244284b0  addiu       $v0, $v0, -0x7B50
    ctx->pc = 0x39d5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935728));
label_39d5dc:
    // 0x39d5dc: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x39d5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_39d5e0:
    // 0x39d5e0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x39d5e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_39d5e4:
    // 0x39d5e4: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x39d5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_39d5e8:
    // 0x39d5e8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x39d5e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_39d5ec:
    // 0x39d5ec: 0xa20000d4  sb          $zero, 0xD4($s0)
    ctx->pc = 0x39d5ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 212), (uint8_t)GPR_U32(ctx, 0));
label_39d5f0:
    // 0x39d5f0: 0x24a58520  addiu       $a1, $a1, -0x7AE0
    ctx->pc = 0x39d5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935840));
label_39d5f4:
    // 0x39d5f4: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x39d5f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
label_39d5f8:
    // 0x39d5f8: 0x24638560  addiu       $v1, $v1, -0x7AA0
    ctx->pc = 0x39d5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935904));
label_39d5fc:
    // 0x39d5fc: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x39d5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_39d600:
    // 0x39d600: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x39d600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_39d604:
    // 0x39d604: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x39d604u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_39d608:
    // 0x39d608: 0x260400e0  addiu       $a0, $s0, 0xE0
    ctx->pc = 0x39d608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
label_39d60c:
    // 0x39d60c: 0xae000120  sw          $zero, 0x120($s0)
    ctx->pc = 0x39d60cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
label_39d610:
    // 0x39d610: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x39d610u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_39d614:
    // 0x39d614: 0xae000124  sw          $zero, 0x124($s0)
    ctx->pc = 0x39d614u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 0));
label_39d618:
    // 0x39d618: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x39d618u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_39d61c:
    // 0x39d61c: 0xae000128  sw          $zero, 0x128($s0)
    ctx->pc = 0x39d61cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 0));
label_39d620:
    // 0x39d620: 0xa6000130  sh          $zero, 0x130($s0)
    ctx->pc = 0x39d620u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 304), (uint16_t)GPR_U32(ctx, 0));
label_39d624:
    // 0x39d624: 0xa6000132  sh          $zero, 0x132($s0)
    ctx->pc = 0x39d624u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 306), (uint16_t)GPR_U32(ctx, 0));
label_39d628:
    // 0x39d628: 0xa6020134  sh          $v0, 0x134($s0)
    ctx->pc = 0x39d628u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 308), (uint16_t)GPR_U32(ctx, 2));
label_39d62c:
    // 0x39d62c: 0xc04cbd8  jal         func_132F60
label_39d630:
    if (ctx->pc == 0x39D630u) {
        ctx->pc = 0x39D630u;
            // 0x39d630: 0xa6000136  sh          $zero, 0x136($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 310), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x39D634u;
        goto label_39d634;
    }
    ctx->pc = 0x39D62Cu;
    SET_GPR_U32(ctx, 31, 0x39D634u);
    ctx->pc = 0x39D630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39D62Cu;
            // 0x39d630: 0xa6000136  sh          $zero, 0x136($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 310), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D634u; }
        if (ctx->pc != 0x39D634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D634u; }
        if (ctx->pc != 0x39D634u) { return; }
    }
    ctx->pc = 0x39D634u;
label_39d634:
    // 0x39d634: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x39d634u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_39d638:
    // 0x39d638: 0x260400f0  addiu       $a0, $s0, 0xF0
    ctx->pc = 0x39d638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
label_39d63c:
    // 0x39d63c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x39d63cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_39d640:
    // 0x39d640: 0xc04cbd8  jal         func_132F60
label_39d644:
    if (ctx->pc == 0x39D644u) {
        ctx->pc = 0x39D644u;
            // 0x39d644: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x39D648u;
        goto label_39d648;
    }
    ctx->pc = 0x39D640u;
    SET_GPR_U32(ctx, 31, 0x39D648u);
    ctx->pc = 0x39D644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39D640u;
            // 0x39d644: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D648u; }
        if (ctx->pc != 0x39D648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D648u; }
        if (ctx->pc != 0x39D648u) { return; }
    }
    ctx->pc = 0x39D648u;
label_39d648:
    // 0x39d648: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x39d648u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_39d64c:
    // 0x39d64c: 0x26040100  addiu       $a0, $s0, 0x100
    ctx->pc = 0x39d64cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_39d650:
    // 0x39d650: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x39d650u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_39d654:
    // 0x39d654: 0xc04cbd8  jal         func_132F60
label_39d658:
    if (ctx->pc == 0x39D658u) {
        ctx->pc = 0x39D658u;
            // 0x39d658: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x39D65Cu;
        goto label_39d65c;
    }
    ctx->pc = 0x39D654u;
    SET_GPR_U32(ctx, 31, 0x39D65Cu);
    ctx->pc = 0x39D658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39D654u;
            // 0x39d658: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D65Cu; }
        if (ctx->pc != 0x39D65Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D65Cu; }
        if (ctx->pc != 0x39D65Cu) { return; }
    }
    ctx->pc = 0x39D65Cu;
label_39d65c:
    // 0x39d65c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x39d65cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_39d660:
    // 0x39d660: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x39d660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
label_39d664:
    // 0x39d664: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x39d664u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_39d668:
    // 0x39d668: 0xc04cbd8  jal         func_132F60
label_39d66c:
    if (ctx->pc == 0x39D66Cu) {
        ctx->pc = 0x39D66Cu;
            // 0x39d66c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x39D670u;
        goto label_39d670;
    }
    ctx->pc = 0x39D668u;
    SET_GPR_U32(ctx, 31, 0x39D670u);
    ctx->pc = 0x39D66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39D668u;
            // 0x39d66c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D670u; }
        if (ctx->pc != 0x39D670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D670u; }
        if (ctx->pc != 0x39D670u) { return; }
    }
    ctx->pc = 0x39D670u;
label_39d670:
    // 0x39d670: 0xae000140  sw          $zero, 0x140($s0)
    ctx->pc = 0x39d670u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 0));
label_39d674:
    // 0x39d674: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x39d674u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_39d678:
    // 0x39d678: 0xae000144  sw          $zero, 0x144($s0)
    ctx->pc = 0x39d678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 0));
label_39d67c:
    // 0x39d67c: 0x26040160  addiu       $a0, $s0, 0x160
    ctx->pc = 0x39d67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
label_39d680:
    // 0x39d680: 0xae000148  sw          $zero, 0x148($s0)
    ctx->pc = 0x39d680u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 0));
label_39d684:
    // 0x39d684: 0x24a571b0  addiu       $a1, $a1, 0x71B0
    ctx->pc = 0x39d684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29104));
label_39d688:
    // 0x39d688: 0xae00014c  sw          $zero, 0x14C($s0)
    ctx->pc = 0x39d688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 332), GPR_U32(ctx, 0));
label_39d68c:
    // 0x39d68c: 0xae000150  sw          $zero, 0x150($s0)
    ctx->pc = 0x39d68cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 0));
label_39d690:
    // 0x39d690: 0xae000154  sw          $zero, 0x154($s0)
    ctx->pc = 0x39d690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 0));
label_39d694:
    // 0x39d694: 0xc04cce8  jal         func_1333A0
label_39d698:
    if (ctx->pc == 0x39D698u) {
        ctx->pc = 0x39D698u;
            // 0x39d698: 0xa2000158  sb          $zero, 0x158($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 344), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x39D69Cu;
        goto label_39d69c;
    }
    ctx->pc = 0x39D694u;
    SET_GPR_U32(ctx, 31, 0x39D69Cu);
    ctx->pc = 0x39D698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39D694u;
            // 0x39d698: 0xa2000158  sb          $zero, 0x158($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 344), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D69Cu; }
        if (ctx->pc != 0x39D69Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D69Cu; }
        if (ctx->pc != 0x39D69Cu) { return; }
    }
    ctx->pc = 0x39D69Cu;
label_39d69c:
    // 0x39d69c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x39d69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39d6a0:
    // 0x39d6a0: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x39d6a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39d6a4:
    // 0x39d6a4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x39d6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_39d6a8:
    // 0x39d6a8: 0xac6001a0  sw          $zero, 0x1A0($v1)
    ctx->pc = 0x39d6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 416), GPR_U32(ctx, 0));
label_39d6ac:
    // 0x39d6ac: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x39d6acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_39d6b0:
    // 0x39d6b0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x39d6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_39d6b4:
    // 0x39d6b4: 0x0  nop
    ctx->pc = 0x39d6b4u;
    // NOP
label_39d6b8:
    // 0x39d6b8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_39d6bc:
    if (ctx->pc == 0x39D6BCu) {
        ctx->pc = 0x39D6C0u;
        goto label_39d6c0;
    }
    ctx->pc = 0x39D6B8u;
    {
        const bool branch_taken_0x39d6b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39d6b8) {
            ctx->pc = 0x39D6A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_39d6a4;
        }
    }
    ctx->pc = 0x39D6C0u;
label_39d6c0:
    // 0x39d6c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x39d6c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39d6c4:
    // 0x39d6c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39d6c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_39d6c8:
    // 0x39d6c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39d6c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_39d6cc:
    // 0x39d6cc: 0x3e00008  jr          $ra
label_39d6d0:
    if (ctx->pc == 0x39D6D0u) {
        ctx->pc = 0x39D6D0u;
            // 0x39d6d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x39D6D4u;
        goto label_39d6d4;
    }
    ctx->pc = 0x39D6CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39D6D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39D6CCu;
            // 0x39d6d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39D6D4u;
label_39d6d4:
    // 0x39d6d4: 0x0  nop
    ctx->pc = 0x39d6d4u;
    // NOP
label_39d6d8:
    // 0x39d6d8: 0x0  nop
    ctx->pc = 0x39d6d8u;
    // NOP
label_39d6dc:
    // 0x39d6dc: 0x0  nop
    ctx->pc = 0x39d6dcu;
    // NOP
label_39d6e0:
    // 0x39d6e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39d6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_39d6e4:
    // 0x39d6e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39d6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_39d6e8:
    // 0x39d6e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39d6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_39d6ec:
    // 0x39d6ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39d6ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39d6f0:
    // 0x39d6f0: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_39d6f4:
    if (ctx->pc == 0x39D6F4u) {
        ctx->pc = 0x39D6F4u;
            // 0x39d6f4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39D6F8u;
        goto label_39d6f8;
    }
    ctx->pc = 0x39D6F0u;
    {
        const bool branch_taken_0x39d6f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x39d6f0) {
            ctx->pc = 0x39D6F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39D6F0u;
            // 0x39d6f4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39D730u;
            goto label_39d730;
        }
    }
    ctx->pc = 0x39D6F8u;
label_39d6f8:
    // 0x39d6f8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x39d6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_39d6fc:
    // 0x39d6fc: 0x244285d0  addiu       $v0, $v0, -0x7A30
    ctx->pc = 0x39d6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936016));
label_39d700:
    // 0x39d700: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_39d704:
    if (ctx->pc == 0x39D704u) {
        ctx->pc = 0x39D704u;
            // 0x39d704: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
        ctx->pc = 0x39D708u;
        goto label_39d708;
    }
    ctx->pc = 0x39D700u;
    {
        const bool branch_taken_0x39d700 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39D700u;
            // 0x39d704: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d700) {
            ctx->pc = 0x39D714u;
            goto label_39d714;
        }
    }
    ctx->pc = 0x39D708u;
label_39d708:
    // 0x39d708: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x39d708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_39d70c:
    // 0x39d70c: 0x244221e0  addiu       $v0, $v0, 0x21E0
    ctx->pc = 0x39d70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8672));
label_39d710:
    // 0x39d710: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x39d710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
label_39d714:
    // 0x39d714: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x39d714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_39d718:
    // 0x39d718: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x39d718u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_39d71c:
    // 0x39d71c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_39d720:
    if (ctx->pc == 0x39D720u) {
        ctx->pc = 0x39D724u;
        goto label_39d724;
    }
    ctx->pc = 0x39D71Cu;
    {
        const bool branch_taken_0x39d71c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x39d71c) {
            ctx->pc = 0x39D72Cu;
            goto label_39d72c;
        }
    }
    ctx->pc = 0x39D724u;
label_39d724:
    // 0x39d724: 0xc0400a8  jal         func_1002A0
label_39d728:
    if (ctx->pc == 0x39D728u) {
        ctx->pc = 0x39D728u;
            // 0x39d728: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39D72Cu;
        goto label_39d72c;
    }
    ctx->pc = 0x39D724u;
    SET_GPR_U32(ctx, 31, 0x39D72Cu);
    ctx->pc = 0x39D728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39D724u;
            // 0x39d728: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D72Cu; }
        if (ctx->pc != 0x39D72Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D72Cu; }
        if (ctx->pc != 0x39D72Cu) { return; }
    }
    ctx->pc = 0x39D72Cu;
label_39d72c:
    // 0x39d72c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x39d72cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39d730:
    // 0x39d730: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39d730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_39d734:
    // 0x39d734: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39d734u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_39d738:
    // 0x39d738: 0x3e00008  jr          $ra
label_39d73c:
    if (ctx->pc == 0x39D73Cu) {
        ctx->pc = 0x39D73Cu;
            // 0x39d73c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x39D740u;
        goto label_39d740;
    }
    ctx->pc = 0x39D738u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39D73Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39D738u;
            // 0x39d73c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39D740u;
label_39d740:
    // 0x39d740: 0x8c850034  lw          $a1, 0x34($a0)
    ctx->pc = 0x39d740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_39d744:
    // 0x39d744: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x39d744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_39d748:
    // 0x39d748: 0x14a30011  bne         $a1, $v1, . + 4 + (0x11 << 2)
label_39d74c:
    if (ctx->pc == 0x39D74Cu) {
        ctx->pc = 0x39D74Cu;
            // 0x39d74c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39D750u;
        goto label_39d750;
    }
    ctx->pc = 0x39D748u;
    {
        const bool branch_taken_0x39d748 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x39D74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39D748u;
            // 0x39d74c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d748) {
            ctx->pc = 0x39D790u;
            goto label_39d790;
        }
    }
    ctx->pc = 0x39D750u;
label_39d750:
    // 0x39d750: 0xc4810028  lwc1        $f1, 0x28($a0)
    ctx->pc = 0x39d750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_39d754:
    // 0x39d754: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x39d754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_39d758:
    // 0x39d758: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x39d758u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39d75c:
    // 0x39d75c: 0x0  nop
    ctx->pc = 0x39d75cu;
    // NOP
label_39d760:
    // 0x39d760: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x39d760u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39d764:
    // 0x39d764: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_39d768:
    if (ctx->pc == 0x39D768u) {
        ctx->pc = 0x39D768u;
            // 0x39d768: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x39D76Cu;
        goto label_39d76c;
    }
    ctx->pc = 0x39D764u;
    {
        const bool branch_taken_0x39d764 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x39D768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39D764u;
            // 0x39d768: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d764) {
            ctx->pc = 0x39D784u;
            goto label_39d784;
        }
    }
    ctx->pc = 0x39D76Cu;
label_39d76c:
    // 0x39d76c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x39d76cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_39d770:
    // 0x39d770: 0x0  nop
    ctx->pc = 0x39d770u;
    // NOP
label_39d774:
    // 0x39d774: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x39d774u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_39d778:
    // 0x39d778: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_39d77c:
    if (ctx->pc == 0x39D77Cu) {
        ctx->pc = 0x39D780u;
        goto label_39d780;
    }
    ctx->pc = 0x39D778u;
    {
        const bool branch_taken_0x39d778 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x39d778) {
            ctx->pc = 0x39D784u;
            goto label_39d784;
        }
    }
    ctx->pc = 0x39D780u;
label_39d780:
    // 0x39d780: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x39d780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39d784:
    // 0x39d784: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
label_39d788:
    if (ctx->pc == 0x39D788u) {
        ctx->pc = 0x39D78Cu;
        goto label_39d78c;
    }
    ctx->pc = 0x39D784u;
    {
        const bool branch_taken_0x39d784 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39d784) {
            ctx->pc = 0x39D790u;
            goto label_39d790;
        }
    }
    ctx->pc = 0x39D78Cu;
label_39d78c:
    // 0x39d78c: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x39d78cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_39d790:
    // 0x39d790: 0x3e00008  jr          $ra
label_39d794:
    if (ctx->pc == 0x39D794u) {
        ctx->pc = 0x39D798u;
        goto label_39d798;
    }
    ctx->pc = 0x39D790u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39D798u;
label_39d798:
    // 0x39d798: 0x0  nop
    ctx->pc = 0x39d798u;
    // NOP
label_39d79c:
    // 0x39d79c: 0x0  nop
    ctx->pc = 0x39d79cu;
    // NOP
label_39d7a0:
    // 0x39d7a0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x39d7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_39d7a4:
    // 0x39d7a4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x39d7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_39d7a8:
    // 0x39d7a8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x39d7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_39d7ac:
    // 0x39d7ac: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x39d7acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_39d7b0:
    // 0x39d7b0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x39d7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_39d7b4:
    // 0x39d7b4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x39d7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_39d7b8:
    // 0x39d7b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x39d7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_39d7bc:
    // 0x39d7bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x39d7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_39d7c0:
    // 0x39d7c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39d7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_39d7c4:
    // 0x39d7c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39d7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_39d7c8:
    // 0x39d7c8: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x39d7c8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_39d7cc:
    // 0x39d7cc: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_39d7d0:
    if (ctx->pc == 0x39D7D0u) {
        ctx->pc = 0x39D7D0u;
            // 0x39d7d0: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39D7D4u;
        goto label_39d7d4;
    }
    ctx->pc = 0x39D7CCu;
    {
        const bool branch_taken_0x39d7cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x39D7D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39D7CCu;
            // 0x39d7d0: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d7cc) {
            ctx->pc = 0x39D81Cu;
            goto label_39d81c;
        }
    }
    ctx->pc = 0x39D7D4u;
label_39d7d4:
    // 0x39d7d4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x39d7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_39d7d8:
    // 0x39d7d8: 0x50a30042  beql        $a1, $v1, . + 4 + (0x42 << 2)
label_39d7dc:
    if (ctx->pc == 0x39D7DCu) {
        ctx->pc = 0x39D7DCu;
            // 0x39d7dc: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x39D7E0u;
        goto label_39d7e0;
    }
    ctx->pc = 0x39D7D8u;
    {
        const bool branch_taken_0x39d7d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x39d7d8) {
            ctx->pc = 0x39D7DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39D7D8u;
            // 0x39d7dc: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39D8E4u;
            goto label_39d8e4;
        }
    }
    ctx->pc = 0x39D7E0u;
label_39d7e0:
    // 0x39d7e0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x39d7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_39d7e4:
    // 0x39d7e4: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_39d7e8:
    if (ctx->pc == 0x39D7E8u) {
        ctx->pc = 0x39D7ECu;
        goto label_39d7ec;
    }
    ctx->pc = 0x39D7E4u;
    {
        const bool branch_taken_0x39d7e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x39d7e4) {
            ctx->pc = 0x39D7F4u;
            goto label_39d7f4;
        }
    }
    ctx->pc = 0x39D7ECu;
label_39d7ec:
    // 0x39d7ec: 0x1000003c  b           . + 4 + (0x3C << 2)
label_39d7f0:
    if (ctx->pc == 0x39D7F0u) {
        ctx->pc = 0x39D7F4u;
        goto label_39d7f4;
    }
    ctx->pc = 0x39D7ECu;
    {
        const bool branch_taken_0x39d7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39d7ec) {
            ctx->pc = 0x39D8E0u;
            goto label_39d8e0;
        }
    }
    ctx->pc = 0x39D7F4u;
label_39d7f4:
    // 0x39d7f4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x39d7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_39d7f8:
    // 0x39d7f8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x39d7f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39d7fc:
    // 0x39d7fc: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x39d7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_39d800:
    // 0x39d800: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x39d800u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_39d804:
    // 0x39d804: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x39d804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_39d808:
    // 0x39d808: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x39d808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_39d80c:
    // 0x39d80c: 0x320f809  jalr        $t9
label_39d810:
    if (ctx->pc == 0x39D810u) {
        ctx->pc = 0x39D810u;
            // 0x39d810: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x39D814u;
        goto label_39d814;
    }
    ctx->pc = 0x39D80Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39D814u);
        ctx->pc = 0x39D810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39D80Cu;
            // 0x39d810: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39D814u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39D814u; }
            if (ctx->pc != 0x39D814u) { return; }
        }
        }
    }
    ctx->pc = 0x39D814u;
label_39d814:
    // 0x39d814: 0x10000032  b           . + 4 + (0x32 << 2)
label_39d818:
    if (ctx->pc == 0x39D818u) {
        ctx->pc = 0x39D81Cu;
        goto label_39d81c;
    }
    ctx->pc = 0x39D814u;
    {
        const bool branch_taken_0x39d814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39d814) {
            ctx->pc = 0x39D8E0u;
            goto label_39d8e0;
        }
    }
    ctx->pc = 0x39D81Cu;
label_39d81c:
    // 0x39d81c: 0x8eb00070  lw          $s0, 0x70($s5)
    ctx->pc = 0x39d81cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_39d820:
    // 0x39d820: 0x1200002f  beqz        $s0, . + 4 + (0x2F << 2)
label_39d824:
    if (ctx->pc == 0x39D824u) {
        ctx->pc = 0x39D828u;
        goto label_39d828;
    }
    ctx->pc = 0x39D820u;
    {
        const bool branch_taken_0x39d820 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x39d820) {
            ctx->pc = 0x39D8E0u;
            goto label_39d8e0;
        }
    }
    ctx->pc = 0x39D828u;
label_39d828:
    // 0x39d828: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x39d828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_39d82c:
    // 0x39d82c: 0x8ea40088  lw          $a0, 0x88($s5)
    ctx->pc = 0x39d82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
label_39d830:
    // 0x39d830: 0x8c43d130  lw          $v1, -0x2ED0($v0)
    ctx->pc = 0x39d830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_39d834:
    // 0x39d834: 0x8eb40084  lw          $s4, 0x84($s5)
    ctx->pc = 0x39d834u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
label_39d838:
    // 0x39d838: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x39d838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_39d83c:
    // 0x39d83c: 0x8c730130  lw          $s3, 0x130($v1)
    ctx->pc = 0x39d83cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_39d840:
    // 0x39d840: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x39d840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_39d844:
    // 0x39d844: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x39d844u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_39d848:
    // 0x39d848: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x39d848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_39d84c:
    // 0x39d84c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39d84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_39d850:
    // 0x39d850: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x39d850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_39d854:
    // 0x39d854: 0xc04e738  jal         func_139CE0
label_39d858:
    if (ctx->pc == 0x39D858u) {
        ctx->pc = 0x39D858u;
            // 0x39d858: 0x24560010  addiu       $s6, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x39D85Cu;
        goto label_39d85c;
    }
    ctx->pc = 0x39D854u;
    SET_GPR_U32(ctx, 31, 0x39D85Cu);
    ctx->pc = 0x39D858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39D854u;
            // 0x39d858: 0x24560010  addiu       $s6, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D85Cu; }
        if (ctx->pc != 0x39D85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D85Cu; }
        if (ctx->pc != 0x39D85Cu) { return; }
    }
    ctx->pc = 0x39D85Cu;
label_39d85c:
    // 0x39d85c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x39d85cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_39d860:
    // 0x39d860: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39d860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39d864:
    // 0x39d864: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x39d864u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_39d868:
    // 0x39d868: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x39d868u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39d86c:
    // 0x39d86c: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x39d86cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_39d870:
    // 0x39d870: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x39d870u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39d874:
    // 0x39d874: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x39d874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_39d878:
    // 0x39d878: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x39d878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_39d87c:
    // 0x39d87c: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x39d87cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_39d880:
    // 0x39d880: 0x27a7010c  addiu       $a3, $sp, 0x10C
    ctx->pc = 0x39d880u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
label_39d884:
    // 0x39d884: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x39d884u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_39d888:
    // 0x39d888: 0x27a900c0  addiu       $t1, $sp, 0xC0
    ctx->pc = 0x39d888u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_39d88c:
    // 0x39d88c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x39d88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_39d890:
    // 0x39d890: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x39d890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_39d894:
    // 0x39d894: 0xc0e6f50  jal         func_39BD40
label_39d898:
    if (ctx->pc == 0x39D898u) {
        ctx->pc = 0x39D898u;
            // 0x39d898: 0x260502d  daddu       $t2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39D89Cu;
        goto label_39d89c;
    }
    ctx->pc = 0x39D894u;
    SET_GPR_U32(ctx, 31, 0x39D89Cu);
    ctx->pc = 0x39D898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39D894u;
            // 0x39d898: 0x260502d  daddu       $t2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39BD40u;
    if (runtime->hasFunction(0x39BD40u)) {
        auto targetFn = runtime->lookupFunction(0x39BD40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D89Cu; }
        if (ctx->pc != 0x39D89Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039BD40_0x39bd40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D89Cu; }
        if (ctx->pc != 0x39D89Cu) { return; }
    }
    ctx->pc = 0x39D89Cu;
label_39d89c:
    // 0x39d89c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x39d89cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_39d8a0:
    // 0x39d8a0: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x39d8a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_39d8a4:
    // 0x39d8a4: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_39d8a8:
    if (ctx->pc == 0x39D8A8u) {
        ctx->pc = 0x39D8A8u;
            // 0x39d8a8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x39D8ACu;
        goto label_39d8ac;
    }
    ctx->pc = 0x39D8A4u;
    {
        const bool branch_taken_0x39d8a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39D8A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39D8A4u;
            // 0x39d8a8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d8a4) {
            ctx->pc = 0x39D874u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_39d874;
        }
    }
    ctx->pc = 0x39D8ACu;
label_39d8ac:
    // 0x39d8ac: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x39d8acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_39d8b0:
    // 0x39d8b0: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x39d8b0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_39d8b4:
    // 0x39d8b4: 0x1920000a  blez        $t1, . + 4 + (0xA << 2)
label_39d8b8:
    if (ctx->pc == 0x39D8B8u) {
        ctx->pc = 0x39D8BCu;
        goto label_39d8bc;
    }
    ctx->pc = 0x39D8B4u;
    {
        const bool branch_taken_0x39d8b4 = (GPR_S32(ctx, 9) <= 0);
        if (branch_taken_0x39d8b4) {
            ctx->pc = 0x39D8E0u;
            goto label_39d8e0;
        }
    }
    ctx->pc = 0x39D8BCu;
label_39d8bc:
    // 0x39d8bc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39d8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39d8c0:
    // 0x39d8c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x39d8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_39d8c4:
    // 0x39d8c4: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x39d8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_39d8c8:
    // 0x39d8c8: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x39d8c8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_39d8cc:
    // 0x39d8cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x39d8ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39d8d0:
    // 0x39d8d0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x39d8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_39d8d4:
    // 0x39d8d4: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x39d8d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_39d8d8:
    // 0x39d8d8: 0xc055d28  jal         func_1574A0
label_39d8dc:
    if (ctx->pc == 0x39D8DCu) {
        ctx->pc = 0x39D8DCu;
            // 0x39d8dc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39D8E0u;
        goto label_39d8e0;
    }
    ctx->pc = 0x39D8D8u;
    SET_GPR_U32(ctx, 31, 0x39D8E0u);
    ctx->pc = 0x39D8DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39D8D8u;
            // 0x39d8dc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1574A0u;
    if (runtime->hasFunction(0x1574A0u)) {
        auto targetFn = runtime->lookupFunction(0x1574A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D8E0u; }
        if (ctx->pc != 0x39D8E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001574A0_0x1574a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D8E0u; }
        if (ctx->pc != 0x39D8E0u) { return; }
    }
    ctx->pc = 0x39D8E0u;
label_39d8e0:
    // 0x39d8e0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x39d8e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_39d8e4:
    // 0x39d8e4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x39d8e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_39d8e8:
    // 0x39d8e8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x39d8e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_39d8ec:
    // 0x39d8ec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x39d8ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_39d8f0:
    // 0x39d8f0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x39d8f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_39d8f4:
    // 0x39d8f4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x39d8f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39d8f8:
    // 0x39d8f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39d8f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39d8fc:
    // 0x39d8fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39d8fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_39d900:
    // 0x39d900: 0x3e00008  jr          $ra
label_39d904:
    if (ctx->pc == 0x39D904u) {
        ctx->pc = 0x39D904u;
            // 0x39d904: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x39D908u;
        goto label_39d908;
    }
    ctx->pc = 0x39D900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39D904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39D900u;
            // 0x39d904: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39D908u;
label_39d908:
    // 0x39d908: 0x0  nop
    ctx->pc = 0x39d908u;
    // NOP
label_39d90c:
    // 0x39d90c: 0x0  nop
    ctx->pc = 0x39d90cu;
    // NOP
label_39d910:
    // 0x39d910: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x39d910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_39d914:
    // 0x39d914: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x39d914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_39d918:
    // 0x39d918: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x39d918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_39d91c:
    // 0x39d91c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x39d91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_39d920:
    // 0x39d920: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x39d920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_39d924:
    // 0x39d924: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39d924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_39d928:
    // 0x39d928: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39d928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_39d92c:
    // 0x39d92c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x39d92cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_39d930:
    // 0x39d930: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_39d934:
    if (ctx->pc == 0x39D934u) {
        ctx->pc = 0x39D934u;
            // 0x39d934: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39D938u;
        goto label_39d938;
    }
    ctx->pc = 0x39D930u;
    {
        const bool branch_taken_0x39d930 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x39D934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39D930u;
            // 0x39d934: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d930) {
            ctx->pc = 0x39D964u;
            goto label_39d964;
        }
    }
    ctx->pc = 0x39D938u;
label_39d938:
    // 0x39d938: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x39d938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_39d93c:
    // 0x39d93c: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_39d940:
    if (ctx->pc == 0x39D940u) {
        ctx->pc = 0x39D940u;
            // 0x39d940: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x39D944u;
        goto label_39d944;
    }
    ctx->pc = 0x39D93Cu;
    {
        const bool branch_taken_0x39d93c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x39d93c) {
            ctx->pc = 0x39D940u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39D93Cu;
            // 0x39d940: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39D958u;
            goto label_39d958;
        }
    }
    ctx->pc = 0x39D944u;
label_39d944:
    // 0x39d944: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x39d944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_39d948:
    // 0x39d948: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_39d94c:
    if (ctx->pc == 0x39D94Cu) {
        ctx->pc = 0x39D950u;
        goto label_39d950;
    }
    ctx->pc = 0x39D948u;
    {
        const bool branch_taken_0x39d948 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x39d948) {
            ctx->pc = 0x39D998u;
            goto label_39d998;
        }
    }
    ctx->pc = 0x39D950u;
label_39d950:
    // 0x39d950: 0x10000011  b           . + 4 + (0x11 << 2)
label_39d954:
    if (ctx->pc == 0x39D954u) {
        ctx->pc = 0x39D958u;
        goto label_39d958;
    }
    ctx->pc = 0x39D950u;
    {
        const bool branch_taken_0x39d950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x39d950) {
            ctx->pc = 0x39D998u;
            goto label_39d998;
        }
    }
    ctx->pc = 0x39D958u;
label_39d958:
    // 0x39d958: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x39d958u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_39d95c:
    // 0x39d95c: 0x320f809  jalr        $t9
label_39d960:
    if (ctx->pc == 0x39D960u) {
        ctx->pc = 0x39D964u;
        goto label_39d964;
    }
    ctx->pc = 0x39D95Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39D964u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x39D964u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39D964u; }
            if (ctx->pc != 0x39D964u) { return; }
        }
        }
    }
    ctx->pc = 0x39D964u;
label_39d964:
    // 0x39d964: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x39d964u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_39d968:
    // 0x39d968: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_39d96c:
    if (ctx->pc == 0x39D96Cu) {
        ctx->pc = 0x39D970u;
        goto label_39d970;
    }
    ctx->pc = 0x39D968u;
    {
        const bool branch_taken_0x39d968 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x39d968) {
            ctx->pc = 0x39D998u;
            goto label_39d998;
        }
    }
    ctx->pc = 0x39D970u;
label_39d970:
    // 0x39d970: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x39d970u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39d974:
    // 0x39d974: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x39d974u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39d978:
    // 0x39d978: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x39d978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_39d97c:
    // 0x39d97c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x39d97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_39d980:
    // 0x39d980: 0xc0e6f78  jal         func_39BDE0
label_39d984:
    if (ctx->pc == 0x39D984u) {
        ctx->pc = 0x39D984u;
            // 0x39d984: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x39D988u;
        goto label_39d988;
    }
    ctx->pc = 0x39D980u;
    SET_GPR_U32(ctx, 31, 0x39D988u);
    ctx->pc = 0x39D984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39D980u;
            // 0x39d984: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39BDE0u;
    if (runtime->hasFunction(0x39BDE0u)) {
        auto targetFn = runtime->lookupFunction(0x39BDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D988u; }
        if (ctx->pc != 0x39D988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039BDE0_0x39bde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D988u; }
        if (ctx->pc != 0x39D988u) { return; }
    }
    ctx->pc = 0x39D988u;
label_39d988:
    // 0x39d988: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x39d988u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_39d98c:
    // 0x39d98c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x39d98cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_39d990:
    // 0x39d990: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_39d994:
    if (ctx->pc == 0x39D994u) {
        ctx->pc = 0x39D994u;
            // 0x39d994: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x39D998u;
        goto label_39d998;
    }
    ctx->pc = 0x39D990u;
    {
        const bool branch_taken_0x39d990 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39D994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39D990u;
            // 0x39d994: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d990) {
            ctx->pc = 0x39D978u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_39d978;
        }
    }
    ctx->pc = 0x39D998u;
label_39d998:
    // 0x39d998: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x39d998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_39d99c:
    // 0x39d99c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x39d99cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_39d9a0:
    // 0x39d9a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x39d9a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39d9a4:
    // 0x39d9a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39d9a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39d9a8:
    // 0x39d9a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39d9a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_39d9ac:
    // 0x39d9ac: 0x3e00008  jr          $ra
label_39d9b0:
    if (ctx->pc == 0x39D9B0u) {
        ctx->pc = 0x39D9B0u;
            // 0x39d9b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x39D9B4u;
        goto label_39d9b4;
    }
    ctx->pc = 0x39D9ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39D9B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39D9ACu;
            // 0x39d9b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39D9B4u;
label_39d9b4:
    // 0x39d9b4: 0x0  nop
    ctx->pc = 0x39d9b4u;
    // NOP
label_39d9b8:
    // 0x39d9b8: 0x0  nop
    ctx->pc = 0x39d9b8u;
    // NOP
label_39d9bc:
    // 0x39d9bc: 0x0  nop
    ctx->pc = 0x39d9bcu;
    // NOP
label_39d9c0:
    // 0x39d9c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x39d9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_39d9c4:
    // 0x39d9c4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x39d9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_39d9c8:
    // 0x39d9c8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x39d9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_39d9cc:
    // 0x39d9cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x39d9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_39d9d0:
    // 0x39d9d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39d9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_39d9d4:
    // 0x39d9d4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39d9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_39d9d8:
    // 0x39d9d8: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x39d9d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_39d9dc:
    // 0x39d9dc: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_39d9e0:
    if (ctx->pc == 0x39D9E0u) {
        ctx->pc = 0x39D9E0u;
            // 0x39d9e0: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39D9E4u;
        goto label_39d9e4;
    }
    ctx->pc = 0x39D9DCu;
    {
        const bool branch_taken_0x39d9dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D9E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39D9DCu;
            // 0x39d9e0: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d9dc) {
            ctx->pc = 0x39DA20u;
            goto label_39da20;
        }
    }
    ctx->pc = 0x39D9E4u;
label_39d9e4:
    // 0x39d9e4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x39d9e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39d9e8:
    // 0x39d9e8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x39d9e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39d9ec:
    // 0x39d9ec: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x39d9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_39d9f0:
    // 0x39d9f0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x39d9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_39d9f4:
    // 0x39d9f4: 0xc0e6f3c  jal         func_39BCF0
label_39d9f8:
    if (ctx->pc == 0x39D9F8u) {
        ctx->pc = 0x39D9F8u;
            // 0x39d9f8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x39D9FCu;
        goto label_39d9fc;
    }
    ctx->pc = 0x39D9F4u;
    SET_GPR_U32(ctx, 31, 0x39D9FCu);
    ctx->pc = 0x39D9F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39D9F4u;
            // 0x39d9f8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39BCF0u;
    if (runtime->hasFunction(0x39BCF0u)) {
        auto targetFn = runtime->lookupFunction(0x39BCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D9FCu; }
        if (ctx->pc != 0x39D9FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039BCF0_0x39bcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39D9FCu; }
        if (ctx->pc != 0x39D9FCu) { return; }
    }
    ctx->pc = 0x39D9FCu;
label_39d9fc:
    // 0x39d9fc: 0x8e630074  lw          $v1, 0x74($s3)
    ctx->pc = 0x39d9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_39da00:
    // 0x39da00: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x39da00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_39da04:
    // 0x39da04: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x39da04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_39da08:
    // 0x39da08: 0xa0720088  sb          $s2, 0x88($v1)
    ctx->pc = 0x39da08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 136), (uint8_t)GPR_U32(ctx, 18));
label_39da0c:
    // 0x39da0c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x39da0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_39da10:
    // 0x39da10: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x39da10u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_39da14:
    // 0x39da14: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_39da18:
    if (ctx->pc == 0x39DA18u) {
        ctx->pc = 0x39DA18u;
            // 0x39da18: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x39DA1Cu;
        goto label_39da1c;
    }
    ctx->pc = 0x39DA14u;
    {
        const bool branch_taken_0x39da14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39DA18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39DA14u;
            // 0x39da18: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39da14) {
            ctx->pc = 0x39D9ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_39d9ec;
        }
    }
    ctx->pc = 0x39DA1Cu;
label_39da1c:
    // 0x39da1c: 0x0  nop
    ctx->pc = 0x39da1cu;
    // NOP
label_39da20:
    // 0x39da20: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x39da20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_39da24:
    // 0x39da24: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x39da24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_39da28:
    // 0x39da28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x39da28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39da2c:
    // 0x39da2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39da2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39da30:
    // 0x39da30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39da30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_39da34:
    // 0x39da34: 0x3e00008  jr          $ra
label_39da38:
    if (ctx->pc == 0x39DA38u) {
        ctx->pc = 0x39DA38u;
            // 0x39da38: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x39DA3Cu;
        goto label_39da3c;
    }
    ctx->pc = 0x39DA34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39DA38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39DA34u;
            // 0x39da38: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x39DA3Cu;
label_39da3c:
    // 0x39da3c: 0x0  nop
    ctx->pc = 0x39da3cu;
    // NOP
}
