#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0048C2B0
// Address: 0x48c2b0 - 0x48c8c0
void sub_0048C2B0_0x48c2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048C2B0_0x48c2b0");
#endif

    switch (ctx->pc) {
        case 0x48c2b0u: goto label_48c2b0;
        case 0x48c2b4u: goto label_48c2b4;
        case 0x48c2b8u: goto label_48c2b8;
        case 0x48c2bcu: goto label_48c2bc;
        case 0x48c2c0u: goto label_48c2c0;
        case 0x48c2c4u: goto label_48c2c4;
        case 0x48c2c8u: goto label_48c2c8;
        case 0x48c2ccu: goto label_48c2cc;
        case 0x48c2d0u: goto label_48c2d0;
        case 0x48c2d4u: goto label_48c2d4;
        case 0x48c2d8u: goto label_48c2d8;
        case 0x48c2dcu: goto label_48c2dc;
        case 0x48c2e0u: goto label_48c2e0;
        case 0x48c2e4u: goto label_48c2e4;
        case 0x48c2e8u: goto label_48c2e8;
        case 0x48c2ecu: goto label_48c2ec;
        case 0x48c2f0u: goto label_48c2f0;
        case 0x48c2f4u: goto label_48c2f4;
        case 0x48c2f8u: goto label_48c2f8;
        case 0x48c2fcu: goto label_48c2fc;
        case 0x48c300u: goto label_48c300;
        case 0x48c304u: goto label_48c304;
        case 0x48c308u: goto label_48c308;
        case 0x48c30cu: goto label_48c30c;
        case 0x48c310u: goto label_48c310;
        case 0x48c314u: goto label_48c314;
        case 0x48c318u: goto label_48c318;
        case 0x48c31cu: goto label_48c31c;
        case 0x48c320u: goto label_48c320;
        case 0x48c324u: goto label_48c324;
        case 0x48c328u: goto label_48c328;
        case 0x48c32cu: goto label_48c32c;
        case 0x48c330u: goto label_48c330;
        case 0x48c334u: goto label_48c334;
        case 0x48c338u: goto label_48c338;
        case 0x48c33cu: goto label_48c33c;
        case 0x48c340u: goto label_48c340;
        case 0x48c344u: goto label_48c344;
        case 0x48c348u: goto label_48c348;
        case 0x48c34cu: goto label_48c34c;
        case 0x48c350u: goto label_48c350;
        case 0x48c354u: goto label_48c354;
        case 0x48c358u: goto label_48c358;
        case 0x48c35cu: goto label_48c35c;
        case 0x48c360u: goto label_48c360;
        case 0x48c364u: goto label_48c364;
        case 0x48c368u: goto label_48c368;
        case 0x48c36cu: goto label_48c36c;
        case 0x48c370u: goto label_48c370;
        case 0x48c374u: goto label_48c374;
        case 0x48c378u: goto label_48c378;
        case 0x48c37cu: goto label_48c37c;
        case 0x48c380u: goto label_48c380;
        case 0x48c384u: goto label_48c384;
        case 0x48c388u: goto label_48c388;
        case 0x48c38cu: goto label_48c38c;
        case 0x48c390u: goto label_48c390;
        case 0x48c394u: goto label_48c394;
        case 0x48c398u: goto label_48c398;
        case 0x48c39cu: goto label_48c39c;
        case 0x48c3a0u: goto label_48c3a0;
        case 0x48c3a4u: goto label_48c3a4;
        case 0x48c3a8u: goto label_48c3a8;
        case 0x48c3acu: goto label_48c3ac;
        case 0x48c3b0u: goto label_48c3b0;
        case 0x48c3b4u: goto label_48c3b4;
        case 0x48c3b8u: goto label_48c3b8;
        case 0x48c3bcu: goto label_48c3bc;
        case 0x48c3c0u: goto label_48c3c0;
        case 0x48c3c4u: goto label_48c3c4;
        case 0x48c3c8u: goto label_48c3c8;
        case 0x48c3ccu: goto label_48c3cc;
        case 0x48c3d0u: goto label_48c3d0;
        case 0x48c3d4u: goto label_48c3d4;
        case 0x48c3d8u: goto label_48c3d8;
        case 0x48c3dcu: goto label_48c3dc;
        case 0x48c3e0u: goto label_48c3e0;
        case 0x48c3e4u: goto label_48c3e4;
        case 0x48c3e8u: goto label_48c3e8;
        case 0x48c3ecu: goto label_48c3ec;
        case 0x48c3f0u: goto label_48c3f0;
        case 0x48c3f4u: goto label_48c3f4;
        case 0x48c3f8u: goto label_48c3f8;
        case 0x48c3fcu: goto label_48c3fc;
        case 0x48c400u: goto label_48c400;
        case 0x48c404u: goto label_48c404;
        case 0x48c408u: goto label_48c408;
        case 0x48c40cu: goto label_48c40c;
        case 0x48c410u: goto label_48c410;
        case 0x48c414u: goto label_48c414;
        case 0x48c418u: goto label_48c418;
        case 0x48c41cu: goto label_48c41c;
        case 0x48c420u: goto label_48c420;
        case 0x48c424u: goto label_48c424;
        case 0x48c428u: goto label_48c428;
        case 0x48c42cu: goto label_48c42c;
        case 0x48c430u: goto label_48c430;
        case 0x48c434u: goto label_48c434;
        case 0x48c438u: goto label_48c438;
        case 0x48c43cu: goto label_48c43c;
        case 0x48c440u: goto label_48c440;
        case 0x48c444u: goto label_48c444;
        case 0x48c448u: goto label_48c448;
        case 0x48c44cu: goto label_48c44c;
        case 0x48c450u: goto label_48c450;
        case 0x48c454u: goto label_48c454;
        case 0x48c458u: goto label_48c458;
        case 0x48c45cu: goto label_48c45c;
        case 0x48c460u: goto label_48c460;
        case 0x48c464u: goto label_48c464;
        case 0x48c468u: goto label_48c468;
        case 0x48c46cu: goto label_48c46c;
        case 0x48c470u: goto label_48c470;
        case 0x48c474u: goto label_48c474;
        case 0x48c478u: goto label_48c478;
        case 0x48c47cu: goto label_48c47c;
        case 0x48c480u: goto label_48c480;
        case 0x48c484u: goto label_48c484;
        case 0x48c488u: goto label_48c488;
        case 0x48c48cu: goto label_48c48c;
        case 0x48c490u: goto label_48c490;
        case 0x48c494u: goto label_48c494;
        case 0x48c498u: goto label_48c498;
        case 0x48c49cu: goto label_48c49c;
        case 0x48c4a0u: goto label_48c4a0;
        case 0x48c4a4u: goto label_48c4a4;
        case 0x48c4a8u: goto label_48c4a8;
        case 0x48c4acu: goto label_48c4ac;
        case 0x48c4b0u: goto label_48c4b0;
        case 0x48c4b4u: goto label_48c4b4;
        case 0x48c4b8u: goto label_48c4b8;
        case 0x48c4bcu: goto label_48c4bc;
        case 0x48c4c0u: goto label_48c4c0;
        case 0x48c4c4u: goto label_48c4c4;
        case 0x48c4c8u: goto label_48c4c8;
        case 0x48c4ccu: goto label_48c4cc;
        case 0x48c4d0u: goto label_48c4d0;
        case 0x48c4d4u: goto label_48c4d4;
        case 0x48c4d8u: goto label_48c4d8;
        case 0x48c4dcu: goto label_48c4dc;
        case 0x48c4e0u: goto label_48c4e0;
        case 0x48c4e4u: goto label_48c4e4;
        case 0x48c4e8u: goto label_48c4e8;
        case 0x48c4ecu: goto label_48c4ec;
        case 0x48c4f0u: goto label_48c4f0;
        case 0x48c4f4u: goto label_48c4f4;
        case 0x48c4f8u: goto label_48c4f8;
        case 0x48c4fcu: goto label_48c4fc;
        case 0x48c500u: goto label_48c500;
        case 0x48c504u: goto label_48c504;
        case 0x48c508u: goto label_48c508;
        case 0x48c50cu: goto label_48c50c;
        case 0x48c510u: goto label_48c510;
        case 0x48c514u: goto label_48c514;
        case 0x48c518u: goto label_48c518;
        case 0x48c51cu: goto label_48c51c;
        case 0x48c520u: goto label_48c520;
        case 0x48c524u: goto label_48c524;
        case 0x48c528u: goto label_48c528;
        case 0x48c52cu: goto label_48c52c;
        case 0x48c530u: goto label_48c530;
        case 0x48c534u: goto label_48c534;
        case 0x48c538u: goto label_48c538;
        case 0x48c53cu: goto label_48c53c;
        case 0x48c540u: goto label_48c540;
        case 0x48c544u: goto label_48c544;
        case 0x48c548u: goto label_48c548;
        case 0x48c54cu: goto label_48c54c;
        case 0x48c550u: goto label_48c550;
        case 0x48c554u: goto label_48c554;
        case 0x48c558u: goto label_48c558;
        case 0x48c55cu: goto label_48c55c;
        case 0x48c560u: goto label_48c560;
        case 0x48c564u: goto label_48c564;
        case 0x48c568u: goto label_48c568;
        case 0x48c56cu: goto label_48c56c;
        case 0x48c570u: goto label_48c570;
        case 0x48c574u: goto label_48c574;
        case 0x48c578u: goto label_48c578;
        case 0x48c57cu: goto label_48c57c;
        case 0x48c580u: goto label_48c580;
        case 0x48c584u: goto label_48c584;
        case 0x48c588u: goto label_48c588;
        case 0x48c58cu: goto label_48c58c;
        case 0x48c590u: goto label_48c590;
        case 0x48c594u: goto label_48c594;
        case 0x48c598u: goto label_48c598;
        case 0x48c59cu: goto label_48c59c;
        case 0x48c5a0u: goto label_48c5a0;
        case 0x48c5a4u: goto label_48c5a4;
        case 0x48c5a8u: goto label_48c5a8;
        case 0x48c5acu: goto label_48c5ac;
        case 0x48c5b0u: goto label_48c5b0;
        case 0x48c5b4u: goto label_48c5b4;
        case 0x48c5b8u: goto label_48c5b8;
        case 0x48c5bcu: goto label_48c5bc;
        case 0x48c5c0u: goto label_48c5c0;
        case 0x48c5c4u: goto label_48c5c4;
        case 0x48c5c8u: goto label_48c5c8;
        case 0x48c5ccu: goto label_48c5cc;
        case 0x48c5d0u: goto label_48c5d0;
        case 0x48c5d4u: goto label_48c5d4;
        case 0x48c5d8u: goto label_48c5d8;
        case 0x48c5dcu: goto label_48c5dc;
        case 0x48c5e0u: goto label_48c5e0;
        case 0x48c5e4u: goto label_48c5e4;
        case 0x48c5e8u: goto label_48c5e8;
        case 0x48c5ecu: goto label_48c5ec;
        case 0x48c5f0u: goto label_48c5f0;
        case 0x48c5f4u: goto label_48c5f4;
        case 0x48c5f8u: goto label_48c5f8;
        case 0x48c5fcu: goto label_48c5fc;
        case 0x48c600u: goto label_48c600;
        case 0x48c604u: goto label_48c604;
        case 0x48c608u: goto label_48c608;
        case 0x48c60cu: goto label_48c60c;
        case 0x48c610u: goto label_48c610;
        case 0x48c614u: goto label_48c614;
        case 0x48c618u: goto label_48c618;
        case 0x48c61cu: goto label_48c61c;
        case 0x48c620u: goto label_48c620;
        case 0x48c624u: goto label_48c624;
        case 0x48c628u: goto label_48c628;
        case 0x48c62cu: goto label_48c62c;
        case 0x48c630u: goto label_48c630;
        case 0x48c634u: goto label_48c634;
        case 0x48c638u: goto label_48c638;
        case 0x48c63cu: goto label_48c63c;
        case 0x48c640u: goto label_48c640;
        case 0x48c644u: goto label_48c644;
        case 0x48c648u: goto label_48c648;
        case 0x48c64cu: goto label_48c64c;
        case 0x48c650u: goto label_48c650;
        case 0x48c654u: goto label_48c654;
        case 0x48c658u: goto label_48c658;
        case 0x48c65cu: goto label_48c65c;
        case 0x48c660u: goto label_48c660;
        case 0x48c664u: goto label_48c664;
        case 0x48c668u: goto label_48c668;
        case 0x48c66cu: goto label_48c66c;
        case 0x48c670u: goto label_48c670;
        case 0x48c674u: goto label_48c674;
        case 0x48c678u: goto label_48c678;
        case 0x48c67cu: goto label_48c67c;
        case 0x48c680u: goto label_48c680;
        case 0x48c684u: goto label_48c684;
        case 0x48c688u: goto label_48c688;
        case 0x48c68cu: goto label_48c68c;
        case 0x48c690u: goto label_48c690;
        case 0x48c694u: goto label_48c694;
        case 0x48c698u: goto label_48c698;
        case 0x48c69cu: goto label_48c69c;
        case 0x48c6a0u: goto label_48c6a0;
        case 0x48c6a4u: goto label_48c6a4;
        case 0x48c6a8u: goto label_48c6a8;
        case 0x48c6acu: goto label_48c6ac;
        case 0x48c6b0u: goto label_48c6b0;
        case 0x48c6b4u: goto label_48c6b4;
        case 0x48c6b8u: goto label_48c6b8;
        case 0x48c6bcu: goto label_48c6bc;
        case 0x48c6c0u: goto label_48c6c0;
        case 0x48c6c4u: goto label_48c6c4;
        case 0x48c6c8u: goto label_48c6c8;
        case 0x48c6ccu: goto label_48c6cc;
        case 0x48c6d0u: goto label_48c6d0;
        case 0x48c6d4u: goto label_48c6d4;
        case 0x48c6d8u: goto label_48c6d8;
        case 0x48c6dcu: goto label_48c6dc;
        case 0x48c6e0u: goto label_48c6e0;
        case 0x48c6e4u: goto label_48c6e4;
        case 0x48c6e8u: goto label_48c6e8;
        case 0x48c6ecu: goto label_48c6ec;
        case 0x48c6f0u: goto label_48c6f0;
        case 0x48c6f4u: goto label_48c6f4;
        case 0x48c6f8u: goto label_48c6f8;
        case 0x48c6fcu: goto label_48c6fc;
        case 0x48c700u: goto label_48c700;
        case 0x48c704u: goto label_48c704;
        case 0x48c708u: goto label_48c708;
        case 0x48c70cu: goto label_48c70c;
        case 0x48c710u: goto label_48c710;
        case 0x48c714u: goto label_48c714;
        case 0x48c718u: goto label_48c718;
        case 0x48c71cu: goto label_48c71c;
        case 0x48c720u: goto label_48c720;
        case 0x48c724u: goto label_48c724;
        case 0x48c728u: goto label_48c728;
        case 0x48c72cu: goto label_48c72c;
        case 0x48c730u: goto label_48c730;
        case 0x48c734u: goto label_48c734;
        case 0x48c738u: goto label_48c738;
        case 0x48c73cu: goto label_48c73c;
        case 0x48c740u: goto label_48c740;
        case 0x48c744u: goto label_48c744;
        case 0x48c748u: goto label_48c748;
        case 0x48c74cu: goto label_48c74c;
        case 0x48c750u: goto label_48c750;
        case 0x48c754u: goto label_48c754;
        case 0x48c758u: goto label_48c758;
        case 0x48c75cu: goto label_48c75c;
        case 0x48c760u: goto label_48c760;
        case 0x48c764u: goto label_48c764;
        case 0x48c768u: goto label_48c768;
        case 0x48c76cu: goto label_48c76c;
        case 0x48c770u: goto label_48c770;
        case 0x48c774u: goto label_48c774;
        case 0x48c778u: goto label_48c778;
        case 0x48c77cu: goto label_48c77c;
        case 0x48c780u: goto label_48c780;
        case 0x48c784u: goto label_48c784;
        case 0x48c788u: goto label_48c788;
        case 0x48c78cu: goto label_48c78c;
        case 0x48c790u: goto label_48c790;
        case 0x48c794u: goto label_48c794;
        case 0x48c798u: goto label_48c798;
        case 0x48c79cu: goto label_48c79c;
        case 0x48c7a0u: goto label_48c7a0;
        case 0x48c7a4u: goto label_48c7a4;
        case 0x48c7a8u: goto label_48c7a8;
        case 0x48c7acu: goto label_48c7ac;
        case 0x48c7b0u: goto label_48c7b0;
        case 0x48c7b4u: goto label_48c7b4;
        case 0x48c7b8u: goto label_48c7b8;
        case 0x48c7bcu: goto label_48c7bc;
        case 0x48c7c0u: goto label_48c7c0;
        case 0x48c7c4u: goto label_48c7c4;
        case 0x48c7c8u: goto label_48c7c8;
        case 0x48c7ccu: goto label_48c7cc;
        case 0x48c7d0u: goto label_48c7d0;
        case 0x48c7d4u: goto label_48c7d4;
        case 0x48c7d8u: goto label_48c7d8;
        case 0x48c7dcu: goto label_48c7dc;
        case 0x48c7e0u: goto label_48c7e0;
        case 0x48c7e4u: goto label_48c7e4;
        case 0x48c7e8u: goto label_48c7e8;
        case 0x48c7ecu: goto label_48c7ec;
        case 0x48c7f0u: goto label_48c7f0;
        case 0x48c7f4u: goto label_48c7f4;
        case 0x48c7f8u: goto label_48c7f8;
        case 0x48c7fcu: goto label_48c7fc;
        case 0x48c800u: goto label_48c800;
        case 0x48c804u: goto label_48c804;
        case 0x48c808u: goto label_48c808;
        case 0x48c80cu: goto label_48c80c;
        case 0x48c810u: goto label_48c810;
        case 0x48c814u: goto label_48c814;
        case 0x48c818u: goto label_48c818;
        case 0x48c81cu: goto label_48c81c;
        case 0x48c820u: goto label_48c820;
        case 0x48c824u: goto label_48c824;
        case 0x48c828u: goto label_48c828;
        case 0x48c82cu: goto label_48c82c;
        case 0x48c830u: goto label_48c830;
        case 0x48c834u: goto label_48c834;
        case 0x48c838u: goto label_48c838;
        case 0x48c83cu: goto label_48c83c;
        case 0x48c840u: goto label_48c840;
        case 0x48c844u: goto label_48c844;
        case 0x48c848u: goto label_48c848;
        case 0x48c84cu: goto label_48c84c;
        case 0x48c850u: goto label_48c850;
        case 0x48c854u: goto label_48c854;
        case 0x48c858u: goto label_48c858;
        case 0x48c85cu: goto label_48c85c;
        case 0x48c860u: goto label_48c860;
        case 0x48c864u: goto label_48c864;
        case 0x48c868u: goto label_48c868;
        case 0x48c86cu: goto label_48c86c;
        case 0x48c870u: goto label_48c870;
        case 0x48c874u: goto label_48c874;
        case 0x48c878u: goto label_48c878;
        case 0x48c87cu: goto label_48c87c;
        case 0x48c880u: goto label_48c880;
        case 0x48c884u: goto label_48c884;
        case 0x48c888u: goto label_48c888;
        case 0x48c88cu: goto label_48c88c;
        case 0x48c890u: goto label_48c890;
        case 0x48c894u: goto label_48c894;
        case 0x48c898u: goto label_48c898;
        case 0x48c89cu: goto label_48c89c;
        case 0x48c8a0u: goto label_48c8a0;
        case 0x48c8a4u: goto label_48c8a4;
        case 0x48c8a8u: goto label_48c8a8;
        case 0x48c8acu: goto label_48c8ac;
        case 0x48c8b0u: goto label_48c8b0;
        case 0x48c8b4u: goto label_48c8b4;
        case 0x48c8b8u: goto label_48c8b8;
        case 0x48c8bcu: goto label_48c8bc;
        default: break;
    }

    ctx->pc = 0x48c2b0u;

label_48c2b0:
    // 0x48c2b0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x48c2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_48c2b4:
    // 0x48c2b4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x48c2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_48c2b8:
    // 0x48c2b8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x48c2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_48c2bc:
    // 0x48c2bc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x48c2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_48c2c0:
    // 0x48c2c0: 0x27b7009c  addiu       $s7, $sp, 0x9C
    ctx->pc = 0x48c2c0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_48c2c4:
    // 0x48c2c4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x48c2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_48c2c8:
    // 0x48c2c8: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x48c2c8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_48c2cc:
    // 0x48c2cc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x48c2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_48c2d0:
    // 0x48c2d0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x48c2d0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_48c2d4:
    // 0x48c2d4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x48c2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_48c2d8:
    // 0x48c2d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x48c2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_48c2dc:
    // 0x48c2dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48c2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_48c2e0:
    // 0x48c2e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48c2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_48c2e4:
    // 0x48c2e4: 0x8c940004  lw          $s4, 0x4($a0)
    ctx->pc = 0x48c2e4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_48c2e8:
    // 0x48c2e8: 0x12e00003  beqz        $s7, . + 4 + (0x3 << 2)
label_48c2ec:
    if (ctx->pc == 0x48C2ECu) {
        ctx->pc = 0x48C2ECu;
            // 0x48c2ec: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48C2F0u;
        goto label_48c2f0;
    }
    ctx->pc = 0x48C2E8u;
    {
        const bool branch_taken_0x48c2e8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x48C2ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48C2E8u;
            // 0x48c2ec: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c2e8) {
            ctx->pc = 0x48C2F8u;
            goto label_48c2f8;
        }
    }
    ctx->pc = 0x48C2F0u;
label_48c2f0:
    // 0x48c2f0: 0x10000003  b           . + 4 + (0x3 << 2)
label_48c2f4:
    if (ctx->pc == 0x48C2F4u) {
        ctx->pc = 0x48C2F4u;
            // 0x48c2f4: 0x8e840008  lw          $a0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->pc = 0x48C2F8u;
        goto label_48c2f8;
    }
    ctx->pc = 0x48C2F0u;
    {
        const bool branch_taken_0x48c2f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48C2F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48C2F0u;
            // 0x48c2f4: 0x8e840008  lw          $a0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c2f0) {
            ctx->pc = 0x48C300u;
            goto label_48c300;
        }
    }
    ctx->pc = 0x48C2F8u;
label_48c2f8:
    // 0x48c2f8: 0x27b70098  addiu       $s7, $sp, 0x98
    ctx->pc = 0x48c2f8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
label_48c2fc:
    // 0x48c2fc: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x48c2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_48c300:
    // 0x48c300: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x48c300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_48c304:
    // 0x48c304: 0x10600026  beqz        $v1, . + 4 + (0x26 << 2)
label_48c308:
    if (ctx->pc == 0x48C308u) {
        ctx->pc = 0x48C30Cu;
        goto label_48c30c;
    }
    ctx->pc = 0x48C304u;
    {
        const bool branch_taken_0x48c304 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x48c304) {
            ctx->pc = 0x48C3A0u;
            goto label_48c3a0;
        }
    }
    ctx->pc = 0x48C30Cu;
label_48c30c:
    // 0x48c30c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x48c30cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48c310:
    // 0x48c310: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x48c310u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48c314:
    // 0x48c314: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x48c314u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48c318:
    // 0x48c318: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x48c318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_48c31c:
    // 0x48c31c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x48c31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_48c320:
    // 0x48c320: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x48c320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_48c324:
    // 0x48c324: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x48c324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_48c328:
    // 0x48c328: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x48c328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_48c32c:
    // 0x48c32c: 0xc04af96  jal         func_12BE58
label_48c330:
    if (ctx->pc == 0x48C330u) {
        ctx->pc = 0x48C330u;
            // 0x48c330: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48C334u;
        goto label_48c334;
    }
    ctx->pc = 0x48C32Cu;
    SET_GPR_U32(ctx, 31, 0x48C334u);
    ctx->pc = 0x48C330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48C32Cu;
            // 0x48c330: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48C334u; }
        if (ctx->pc != 0x48C334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48C334u; }
        if (ctx->pc != 0x48C334u) { return; }
    }
    ctx->pc = 0x48C334u;
label_48c334:
    // 0x48c334: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_48c338:
    if (ctx->pc == 0x48C338u) {
        ctx->pc = 0x48C338u;
            // 0x48c338: 0x8e840008  lw          $a0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->pc = 0x48C33Cu;
        goto label_48c33c;
    }
    ctx->pc = 0x48C334u;
    {
        const bool branch_taken_0x48c334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48c334) {
            ctx->pc = 0x48C338u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48C334u;
            // 0x48c338: 0x8e840008  lw          $a0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48C370u;
            goto label_48c370;
        }
    }
    ctx->pc = 0x48C33Cu;
label_48c33c:
    // 0x48c33c: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x48c33cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_48c340:
    // 0x48c340: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x48c340u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_48c344:
    // 0x48c344: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x48c344u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
label_48c348:
    // 0x48c348: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x48c348u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_48c34c:
    // 0x48c34c: 0x8ca50038  lw          $a1, 0x38($a1)
    ctx->pc = 0x48c34cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
label_48c350:
    // 0x48c350: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x48c350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_48c354:
    // 0x48c354: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x48c354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_48c358:
    // 0x48c358: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48c358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_48c35c:
    // 0x48c35c: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x48c35cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_48c360:
    // 0x48c360: 0xc12398c  jal         func_48E630
label_48c364:
    if (ctx->pc == 0x48C364u) {
        ctx->pc = 0x48C364u;
            // 0x48c364: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48C368u;
        goto label_48c368;
    }
    ctx->pc = 0x48C360u;
    SET_GPR_U32(ctx, 31, 0x48C368u);
    ctx->pc = 0x48C364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48C360u;
            // 0x48c364: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48E630u;
    if (runtime->hasFunction(0x48E630u)) {
        auto targetFn = runtime->lookupFunction(0x48E630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48C368u; }
        if (ctx->pc != 0x48C368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048E630_0x48e630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48C368u; }
        if (ctx->pc != 0x48C368u) { return; }
    }
    ctx->pc = 0x48C368u;
label_48c368:
    // 0x48c368: 0x1000000e  b           . + 4 + (0xE << 2)
label_48c36c:
    if (ctx->pc == 0x48C36Cu) {
        ctx->pc = 0x48C36Cu;
            // 0x48c36c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48C370u;
        goto label_48c370;
    }
    ctx->pc = 0x48C368u;
    {
        const bool branch_taken_0x48c368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48C36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48C368u;
            // 0x48c36c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c368) {
            ctx->pc = 0x48C3A4u;
            goto label_48c3a4;
        }
    }
    ctx->pc = 0x48C370u;
label_48c370:
    // 0x48c370: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x48c370u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_48c374:
    // 0x48c374: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x48c374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_48c378:
    // 0x48c378: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x48c378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_48c37c:
    // 0x48c37c: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x48c37cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_48c380:
    // 0x48c380: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x48c380u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_48c384:
    // 0x48c384: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
label_48c388:
    if (ctx->pc == 0x48C388u) {
        ctx->pc = 0x48C388u;
            // 0x48c388: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->pc = 0x48C38Cu;
        goto label_48c38c;
    }
    ctx->pc = 0x48C384u;
    {
        const bool branch_taken_0x48c384 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x48C388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48C384u;
            // 0x48c388: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c384) {
            ctx->pc = 0x48C318u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48c318;
        }
    }
    ctx->pc = 0x48C38Cu;
label_48c38c:
    // 0x48c38c: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x48c38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_48c390:
    // 0x48c390: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x48c390u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_48c394:
    // 0x48c394: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x48c394u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_48c398:
    // 0x48c398: 0x1460ffdd  bnez        $v1, . + 4 + (-0x23 << 2)
label_48c39c:
    if (ctx->pc == 0x48C39Cu) {
        ctx->pc = 0x48C39Cu;
            // 0x48c39c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->pc = 0x48C3A0u;
        goto label_48c3a0;
    }
    ctx->pc = 0x48C398u;
    {
        const bool branch_taken_0x48c398 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x48C39Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48C398u;
            // 0x48c39c: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c398) {
            ctx->pc = 0x48C310u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48c310;
        }
    }
    ctx->pc = 0x48C3A0u;
label_48c3a0:
    // 0x48c3a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x48c3a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48c3a4:
    // 0x48c3a4: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_48c3a8:
    if (ctx->pc == 0x48C3A8u) {
        ctx->pc = 0x48C3A8u;
            // 0x48c3a8: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x48C3ACu;
        goto label_48c3ac;
    }
    ctx->pc = 0x48C3A4u;
    {
        const bool branch_taken_0x48c3a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x48c3a4) {
            ctx->pc = 0x48C3A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48C3A4u;
            // 0x48c3a8: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48C3C4u;
            goto label_48c3c4;
        }
    }
    ctx->pc = 0x48C3ACu;
label_48c3ac:
    // 0x48c3ac: 0xaed50008  sw          $s5, 0x8($s6)
    ctx->pc = 0x48c3acu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 21));
label_48c3b0:
    // 0x48c3b0: 0x8fa3009c  lw          $v1, 0x9C($sp)
    ctx->pc = 0x48c3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_48c3b4:
    // 0x48c3b4: 0xaec3000c  sw          $v1, 0xC($s6)
    ctx->pc = 0x48c3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 12), GPR_U32(ctx, 3));
label_48c3b8:
    // 0x48c3b8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x48c3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_48c3bc:
    // 0x48c3bc: 0xaec30010  sw          $v1, 0x10($s6)
    ctx->pc = 0x48c3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 16), GPR_U32(ctx, 3));
label_48c3c0:
    // 0x48c3c0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x48c3c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_48c3c4:
    // 0x48c3c4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x48c3c4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_48c3c8:
    // 0x48c3c8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x48c3c8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_48c3cc:
    // 0x48c3cc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x48c3ccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_48c3d0:
    // 0x48c3d0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x48c3d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_48c3d4:
    // 0x48c3d4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x48c3d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_48c3d8:
    // 0x48c3d8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x48c3d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_48c3dc:
    // 0x48c3dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48c3dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_48c3e0:
    // 0x48c3e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48c3e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48c3e4:
    // 0x48c3e4: 0x3e00008  jr          $ra
label_48c3e8:
    if (ctx->pc == 0x48C3E8u) {
        ctx->pc = 0x48C3E8u;
            // 0x48c3e8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x48C3ECu;
        goto label_48c3ec;
    }
    ctx->pc = 0x48C3E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48C3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48C3E4u;
            // 0x48c3e8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48C3ECu;
label_48c3ec:
    // 0x48c3ec: 0x0  nop
    ctx->pc = 0x48c3ecu;
    // NOP
label_48c3f0:
    // 0x48c3f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x48c3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_48c3f4:
    // 0x48c3f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x48c3f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_48c3f8:
    // 0x48c3f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48c3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_48c3fc:
    // 0x48c3fc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x48c3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_48c400:
    // 0x48c400: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x48c400u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_48c404:
    // 0x48c404: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x48c404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_48c408:
    // 0x48c408: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x48c408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_48c40c:
    // 0x48c40c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x48c40cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_48c410:
    // 0x48c410: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48c410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_48c414:
    // 0x48c414: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x48c414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48c418:
    // 0x48c418: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x48c418u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_48c41c:
    // 0x48c41c: 0x8f390060  lw          $t9, 0x60($t9)
    ctx->pc = 0x48c41cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 96)));
label_48c420:
    // 0x48c420: 0x320f809  jalr        $t9
label_48c424:
    if (ctx->pc == 0x48C424u) {
        ctx->pc = 0x48C424u;
            // 0x48c424: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x48C428u;
        goto label_48c428;
    }
    ctx->pc = 0x48C420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48C428u);
        ctx->pc = 0x48C424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48C420u;
            // 0x48c424: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48C428u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48C428u; }
            if (ctx->pc != 0x48C428u) { return; }
        }
        }
    }
    ctx->pc = 0x48C428u;
label_48c428:
    // 0x48c428: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x48c428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_48c42c:
    // 0x48c42c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x48c42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_48c430:
    // 0x48c430: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x48c430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_48c434:
    // 0x48c434: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x48c434u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_48c438:
    // 0x48c438: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48c438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_48c43c:
    // 0x48c43c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x48c43cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48c440:
    // 0x48c440: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x48c440u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_48c444:
    // 0x48c444: 0x8f390068  lw          $t9, 0x68($t9)
    ctx->pc = 0x48c444u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 104)));
label_48c448:
    // 0x48c448: 0x320f809  jalr        $t9
label_48c44c:
    if (ctx->pc == 0x48C44Cu) {
        ctx->pc = 0x48C450u;
        goto label_48c450;
    }
    ctx->pc = 0x48C448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48C450u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x48C450u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48C450u; }
            if (ctx->pc != 0x48C450u) { return; }
        }
        }
    }
    ctx->pc = 0x48C450u;
label_48c450:
    // 0x48c450: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x48c450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_48c454:
    // 0x48c454: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x48c454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_48c458:
    // 0x48c458: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x48c458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_48c45c:
    // 0x48c45c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x48c45cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_48c460:
    // 0x48c460: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x48c460u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_48c464:
    // 0x48c464: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48c464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_48c468:
    // 0x48c468: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x48c468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48c46c:
    // 0x48c46c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x48c46cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_48c470:
    // 0x48c470: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x48c470u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_48c474:
    // 0x48c474: 0x320f809  jalr        $t9
label_48c478:
    if (ctx->pc == 0x48C478u) {
        ctx->pc = 0x48C478u;
            // 0x48c478: 0x8e050018  lw          $a1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->pc = 0x48C47Cu;
        goto label_48c47c;
    }
    ctx->pc = 0x48C474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48C47Cu);
        ctx->pc = 0x48C478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48C474u;
            // 0x48c478: 0x8e050018  lw          $a1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48C47Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48C47Cu; }
            if (ctx->pc != 0x48C47Cu) { return; }
        }
        }
    }
    ctx->pc = 0x48C47Cu;
label_48c47c:
    // 0x48c47c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x48c47cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_48c480:
    // 0x48c480: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48c480u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48c484:
    // 0x48c484: 0x3e00008  jr          $ra
label_48c488:
    if (ctx->pc == 0x48C488u) {
        ctx->pc = 0x48C488u;
            // 0x48c488: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x48C48Cu;
        goto label_48c48c;
    }
    ctx->pc = 0x48C484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48C488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48C484u;
            // 0x48c488: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48C48Cu;
label_48c48c:
    // 0x48c48c: 0x0  nop
    ctx->pc = 0x48c48cu;
    // NOP
label_48c490:
    // 0x48c490: 0x3e00008  jr          $ra
label_48c494:
    if (ctx->pc == 0x48C494u) {
        ctx->pc = 0x48C498u;
        goto label_48c498;
    }
    ctx->pc = 0x48C490u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48C498u;
label_48c498:
    // 0x48c498: 0x0  nop
    ctx->pc = 0x48c498u;
    // NOP
label_48c49c:
    // 0x48c49c: 0x0  nop
    ctx->pc = 0x48c49cu;
    // NOP
label_48c4a0:
    // 0x48c4a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x48c4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_48c4a4:
    // 0x48c4a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x48c4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_48c4a8:
    // 0x48c4a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48c4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_48c4ac:
    // 0x48c4ac: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x48c4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_48c4b0:
    // 0x48c4b0: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
label_48c4b4:
    if (ctx->pc == 0x48C4B4u) {
        ctx->pc = 0x48C4B4u;
            // 0x48c4b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48C4B8u;
        goto label_48c4b8;
    }
    ctx->pc = 0x48C4B0u;
    {
        const bool branch_taken_0x48c4b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x48C4B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48C4B0u;
            // 0x48c4b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c4b0) {
            ctx->pc = 0x48C574u;
            goto label_48c574;
        }
    }
    ctx->pc = 0x48C4B8u;
label_48c4b8:
    // 0x48c4b8: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x48c4b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_48c4bc:
    // 0x48c4bc: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x48c4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_48c4c0:
    // 0x48c4c0: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x48c4c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_48c4c4:
    // 0x48c4c4: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x48c4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_48c4c8:
    // 0x48c4c8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x48c4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48c4cc:
    // 0x48c4cc: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x48c4ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_48c4d0:
    // 0x48c4d0: 0x8ce600d4  lw          $a2, 0xD4($a3)
    ctx->pc = 0x48c4d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 212)));
label_48c4d4:
    // 0x48c4d4: 0x50c3000a  beql        $a2, $v1, . + 4 + (0xA << 2)
label_48c4d8:
    if (ctx->pc == 0x48C4D8u) {
        ctx->pc = 0x48C4D8u;
            // 0x48c4d8: 0x92030014  lbu         $v1, 0x14($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = 0x48C4DCu;
        goto label_48c4dc;
    }
    ctx->pc = 0x48C4D4u;
    {
        const bool branch_taken_0x48c4d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x48c4d4) {
            ctx->pc = 0x48C4D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48C4D4u;
            // 0x48c4d8: 0x92030014  lbu         $v1, 0x14($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48C500u;
            goto label_48c500;
        }
    }
    ctx->pc = 0x48C4DCu;
label_48c4dc:
    // 0x48c4dc: 0x8ce500dc  lw          $a1, 0xDC($a3)
    ctx->pc = 0x48c4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 220)));
label_48c4e0:
    // 0x48c4e0: 0xace300d4  sw          $v1, 0xD4($a3)
    ctx->pc = 0x48c4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 212), GPR_U32(ctx, 3));
label_48c4e4:
    // 0x48c4e4: 0xace000dc  sw          $zero, 0xDC($a3)
    ctx->pc = 0x48c4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 220), GPR_U32(ctx, 0));
label_48c4e8:
    // 0x48c4e8: 0xace000d8  sw          $zero, 0xD8($a3)
    ctx->pc = 0x48c4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 216), GPR_U32(ctx, 0));
label_48c4ec:
    // 0x48c4ec: 0xc123020  jal         func_48C080
label_48c4f0:
    if (ctx->pc == 0x48C4F0u) {
        ctx->pc = 0x48C4F0u;
            // 0x48c4f0: 0xae06000c  sw          $a2, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x48C4F4u;
        goto label_48c4f4;
    }
    ctx->pc = 0x48C4ECu;
    SET_GPR_U32(ctx, 31, 0x48C4F4u);
    ctx->pc = 0x48C4F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48C4ECu;
            // 0x48c4f0: 0xae06000c  sw          $a2, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C080u;
    if (runtime->hasFunction(0x48C080u)) {
        auto targetFn = runtime->lookupFunction(0x48C080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48C4F4u; }
        if (ctx->pc != 0x48C4F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C080_0x48c080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48C4F4u; }
        if (ctx->pc != 0x48C4F4u) { return; }
    }
    ctx->pc = 0x48C4F4u;
label_48c4f4:
    // 0x48c4f4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x48c4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_48c4f8:
    // 0x48c4f8: 0xa2000015  sb          $zero, 0x15($s0)
    ctx->pc = 0x48c4f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 21), (uint8_t)GPR_U32(ctx, 0));
label_48c4fc:
    // 0x48c4fc: 0x92030014  lbu         $v1, 0x14($s0)
    ctx->pc = 0x48c4fcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
label_48c500:
    // 0x48c500: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
label_48c504:
    if (ctx->pc == 0x48C504u) {
        ctx->pc = 0x48C504u;
            // 0x48c504: 0xa2000014  sb          $zero, 0x14($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x48C508u;
        goto label_48c508;
    }
    ctx->pc = 0x48C500u;
    {
        const bool branch_taken_0x48c500 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x48c500) {
            ctx->pc = 0x48C504u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48C500u;
            // 0x48c504: 0xa2000014  sb          $zero, 0x14($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48C530u;
            goto label_48c530;
        }
    }
    ctx->pc = 0x48C508u;
label_48c508:
    // 0x48c508: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x48c508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_48c50c:
    // 0x48c50c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x48c50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_48c510:
    // 0x48c510: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x48c510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_48c514:
    // 0x48c514: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x48c514u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_48c518:
    // 0x48c518: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48c518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_48c51c:
    // 0x48c51c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x48c51cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48c520:
    // 0x48c520: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x48c520u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_48c524:
    // 0x48c524: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x48c524u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_48c528:
    // 0x48c528: 0x320f809  jalr        $t9
label_48c52c:
    if (ctx->pc == 0x48C52Cu) {
        ctx->pc = 0x48C52Cu;
            // 0x48c52c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48C530u;
        goto label_48c530;
    }
    ctx->pc = 0x48C528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48C530u);
        ctx->pc = 0x48C52Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48C528u;
            // 0x48c52c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48C530u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48C530u; }
            if (ctx->pc != 0x48C530u) { return; }
        }
        }
    }
    ctx->pc = 0x48C530u;
label_48c530:
    // 0x48c530: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x48c530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_48c534:
    // 0x48c534: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x48c534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48c538:
    // 0x48c538: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x48c538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_48c53c:
    // 0x48c53c: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x48c53cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_48c540:
    // 0x48c540: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x48c540u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_48c544:
    // 0x48c544: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x48c544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_48c548:
    // 0x48c548: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x48c548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_48c54c:
    // 0x48c54c: 0x8c8500d4  lw          $a1, 0xD4($a0)
    ctx->pc = 0x48c54cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
label_48c550:
    // 0x48c550: 0x54a30009  bnel        $a1, $v1, . + 4 + (0x9 << 2)
label_48c554:
    if (ctx->pc == 0x48C554u) {
        ctx->pc = 0x48C554u;
            // 0x48c554: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x48C558u;
        goto label_48c558;
    }
    ctx->pc = 0x48C550u;
    {
        const bool branch_taken_0x48c550 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x48c550) {
            ctx->pc = 0x48C554u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48C550u;
            // 0x48c554: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48C578u;
            goto label_48c578;
        }
    }
    ctx->pc = 0x48C558u;
label_48c558:
    // 0x48c558: 0x92030015  lbu         $v1, 0x15($s0)
    ctx->pc = 0x48c558u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 21)));
label_48c55c:
    // 0x48c55c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_48c560:
    if (ctx->pc == 0x48C560u) {
        ctx->pc = 0x48C564u;
        goto label_48c564;
    }
    ctx->pc = 0x48C55Cu;
    {
        const bool branch_taken_0x48c55c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x48c55c) {
            ctx->pc = 0x48C574u;
            goto label_48c574;
        }
    }
    ctx->pc = 0x48C564u;
label_48c564:
    // 0x48c564: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x48c564u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_48c568:
    // 0x48c568: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x48c568u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_48c56c:
    // 0x48c56c: 0x320f809  jalr        $t9
label_48c570:
    if (ctx->pc == 0x48C570u) {
        ctx->pc = 0x48C574u;
        goto label_48c574;
    }
    ctx->pc = 0x48C56Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48C574u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x48C574u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48C574u; }
            if (ctx->pc != 0x48C574u) { return; }
        }
        }
    }
    ctx->pc = 0x48C574u;
label_48c574:
    // 0x48c574: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x48c574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_48c578:
    // 0x48c578: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48c578u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48c57c:
    // 0x48c57c: 0x3e00008  jr          $ra
label_48c580:
    if (ctx->pc == 0x48C580u) {
        ctx->pc = 0x48C580u;
            // 0x48c580: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x48C584u;
        goto label_48c584;
    }
    ctx->pc = 0x48C57Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48C580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48C57Cu;
            // 0x48c580: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48C584u;
label_48c584:
    // 0x48c584: 0x0  nop
    ctx->pc = 0x48c584u;
    // NOP
label_48c588:
    // 0x48c588: 0x0  nop
    ctx->pc = 0x48c588u;
    // NOP
label_48c58c:
    // 0x48c58c: 0x0  nop
    ctx->pc = 0x48c58cu;
    // NOP
label_48c590:
    // 0x48c590: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x48c590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_48c594:
    // 0x48c594: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x48c594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_48c598:
    // 0x48c598: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48c598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_48c59c:
    // 0x48c59c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48c59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_48c5a0:
    // 0x48c5a0: 0x94820046  lhu         $v0, 0x46($a0)
    ctx->pc = 0x48c5a0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 70)));
label_48c5a4:
    // 0x48c5a4: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_48c5a8:
    if (ctx->pc == 0x48C5A8u) {
        ctx->pc = 0x48C5A8u;
            // 0x48c5a8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48C5ACu;
        goto label_48c5ac;
    }
    ctx->pc = 0x48C5A4u;
    {
        const bool branch_taken_0x48c5a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48C5A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48C5A4u;
            // 0x48c5a8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c5a4) {
            ctx->pc = 0x48C620u;
            goto label_48c620;
        }
    }
    ctx->pc = 0x48C5ACu;
label_48c5ac:
    // 0x48c5ac: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x48c5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_48c5b0:
    // 0x48c5b0: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x48c5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_48c5b4:
    // 0x48c5b4: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x48c5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
label_48c5b8:
    // 0x48c5b8: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x48c5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_48c5bc:
    // 0x48c5bc: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x48c5bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_48c5c0:
    // 0x48c5c0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_48c5c4:
    if (ctx->pc == 0x48C5C4u) {
        ctx->pc = 0x48C5C4u;
            // 0x48c5c4: 0xae2000a8  sw          $zero, 0xA8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 0));
        ctx->pc = 0x48C5C8u;
        goto label_48c5c8;
    }
    ctx->pc = 0x48C5C0u;
    {
        const bool branch_taken_0x48c5c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48c5c0) {
            ctx->pc = 0x48C5C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48C5C0u;
            // 0x48c5c4: 0xae2000a8  sw          $zero, 0xA8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48C5E4u;
            goto label_48c5e4;
        }
    }
    ctx->pc = 0x48C5C8u;
label_48c5c8:
    // 0x48c5c8: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x48c5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_48c5cc:
    // 0x48c5cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48c5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48c5d0:
    // 0x48c5d0: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x48c5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_48c5d4:
    // 0x48c5d4: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
label_48c5d8:
    if (ctx->pc == 0x48C5D8u) {
        ctx->pc = 0x48C5DCu;
        goto label_48c5dc;
    }
    ctx->pc = 0x48C5D4u;
    {
        const bool branch_taken_0x48c5d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x48c5d4) {
            ctx->pc = 0x48C5E0u;
            goto label_48c5e0;
        }
    }
    ctx->pc = 0x48C5DCu;
label_48c5dc:
    // 0x48c5dc: 0xa222001c  sb          $v0, 0x1C($s1)
    ctx->pc = 0x48c5dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 28), (uint8_t)GPR_U32(ctx, 2));
label_48c5e0:
    // 0x48c5e0: 0xae2000a8  sw          $zero, 0xA8($s1)
    ctx->pc = 0x48c5e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 0));
label_48c5e4:
    // 0x48c5e4: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x48c5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_48c5e8:
    // 0x48c5e8: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_48c5ec:
    if (ctx->pc == 0x48C5ECu) {
        ctx->pc = 0x48C5ECu;
            // 0x48c5ec: 0x8e220028  lw          $v0, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->pc = 0x48C5F0u;
        goto label_48c5f0;
    }
    ctx->pc = 0x48C5E8u;
    {
        const bool branch_taken_0x48c5e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48c5e8) {
            ctx->pc = 0x48C5ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48C5E8u;
            // 0x48c5ec: 0x8e220028  lw          $v0, 0x28($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48C624u;
            goto label_48c624;
        }
    }
    ctx->pc = 0x48C5F0u;
label_48c5f0:
    // 0x48c5f0: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x48c5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_48c5f4:
    // 0x48c5f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x48c5f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48c5f8:
    // 0x48c5f8: 0x8e2400b8  lw          $a0, 0xB8($s1)
    ctx->pc = 0x48c5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_48c5fc:
    // 0x48c5fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x48c5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48c600:
    // 0x48c600: 0xc04a576  jal         func_1295D8
label_48c604:
    if (ctx->pc == 0x48C604u) {
        ctx->pc = 0x48C604u;
            // 0x48c604: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x48C608u;
        goto label_48c608;
    }
    ctx->pc = 0x48C600u;
    SET_GPR_U32(ctx, 31, 0x48C608u);
    ctx->pc = 0x48C604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48C600u;
            // 0x48c604: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48C608u; }
        if (ctx->pc != 0x48C608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48C608u; }
        if (ctx->pc != 0x48C608u) { return; }
    }
    ctx->pc = 0x48C608u;
label_48c608:
    // 0x48c608: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x48c608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_48c60c:
    // 0x48c60c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x48c60cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48c610:
    // 0x48c610: 0x8e2400bc  lw          $a0, 0xBC($s1)
    ctx->pc = 0x48c610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_48c614:
    // 0x48c614: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x48c614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48c618:
    // 0x48c618: 0xc04a576  jal         func_1295D8
label_48c61c:
    if (ctx->pc == 0x48C61Cu) {
        ctx->pc = 0x48C61Cu;
            // 0x48c61c: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x48C620u;
        goto label_48c620;
    }
    ctx->pc = 0x48C618u;
    SET_GPR_U32(ctx, 31, 0x48C620u);
    ctx->pc = 0x48C61Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48C618u;
            // 0x48c61c: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48C620u; }
        if (ctx->pc != 0x48C620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48C620u; }
        if (ctx->pc != 0x48C620u) { return; }
    }
    ctx->pc = 0x48C620u;
label_48c620:
    // 0x48c620: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x48c620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_48c624:
    // 0x48c624: 0x8e30002c  lw          $s0, 0x2C($s1)
    ctx->pc = 0x48c624u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_48c628:
    // 0x48c628: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x48c628u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_48c62c:
    // 0x48c62c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x48c62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_48c630:
    // 0x48c630: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x48c630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
label_48c634:
    // 0x48c634: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x48c634u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_48c638:
    // 0x48c638: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x48c638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_48c63c:
    // 0x48c63c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_48c640:
    if (ctx->pc == 0x48C640u) {
        ctx->pc = 0x48C644u;
        goto label_48c644;
    }
    ctx->pc = 0x48C63Cu;
    {
        const bool branch_taken_0x48c63c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48c63c) {
            ctx->pc = 0x48C6E0u;
            goto label_48c6e0;
        }
    }
    ctx->pc = 0x48C644u;
label_48c644:
    // 0x48c644: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x48c644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_48c648:
    // 0x48c648: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x48c648u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_48c64c:
    // 0x48c64c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x48c64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48c650:
    // 0x48c650: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x48c650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_48c654:
    // 0x48c654: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
label_48c658:
    if (ctx->pc == 0x48C658u) {
        ctx->pc = 0x48C65Cu;
        goto label_48c65c;
    }
    ctx->pc = 0x48C654u;
    {
        const bool branch_taken_0x48c654 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x48c654) {
            ctx->pc = 0x48C6B0u;
            goto label_48c6b0;
        }
    }
    ctx->pc = 0x48C65Cu;
label_48c65c:
    // 0x48c65c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x48c65cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_48c660:
    // 0x48c660: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x48c660u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_48c664:
    // 0x48c664: 0x320f809  jalr        $t9
label_48c668:
    if (ctx->pc == 0x48C668u) {
        ctx->pc = 0x48C66Cu;
        goto label_48c66c;
    }
    ctx->pc = 0x48C664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48C66Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x48C66Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48C66Cu; }
            if (ctx->pc != 0x48C66Cu) { return; }
        }
        }
    }
    ctx->pc = 0x48C66Cu;
label_48c66c:
    // 0x48c66c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_48c670:
    if (ctx->pc == 0x48C670u) {
        ctx->pc = 0x48C674u;
        goto label_48c674;
    }
    ctx->pc = 0x48C66Cu;
    {
        const bool branch_taken_0x48c66c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x48c66c) {
            ctx->pc = 0x48C6B0u;
            goto label_48c6b0;
        }
    }
    ctx->pc = 0x48C674u;
label_48c674:
    // 0x48c674: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x48c674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_48c678:
    // 0x48c678: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x48c678u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_48c67c:
    // 0x48c67c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x48c67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48c680:
    // 0x48c680: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x48c680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_48c684:
    // 0x48c684: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_48c688:
    if (ctx->pc == 0x48C688u) {
        ctx->pc = 0x48C68Cu;
        goto label_48c68c;
    }
    ctx->pc = 0x48C684u;
    {
        const bool branch_taken_0x48c684 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x48c684) {
            ctx->pc = 0x48C6A0u;
            goto label_48c6a0;
        }
    }
    ctx->pc = 0x48C68Cu;
label_48c68c:
    // 0x48c68c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x48c68cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_48c690:
    // 0x48c690: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x48c690u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_48c694:
    // 0x48c694: 0x320f809  jalr        $t9
label_48c698:
    if (ctx->pc == 0x48C698u) {
        ctx->pc = 0x48C698u;
            // 0x48c698: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x48C69Cu;
        goto label_48c69c;
    }
    ctx->pc = 0x48C694u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48C69Cu);
        ctx->pc = 0x48C698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48C694u;
            // 0x48c698: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48C69Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48C69Cu; }
            if (ctx->pc != 0x48C69Cu) { return; }
        }
        }
    }
    ctx->pc = 0x48C69Cu;
label_48c69c:
    // 0x48c69c: 0x0  nop
    ctx->pc = 0x48c69cu;
    // NOP
label_48c6a0:
    // 0x48c6a0: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x48c6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_48c6a4:
    // 0x48c6a4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x48c6a4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_48c6a8:
    // 0x48c6a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x48c6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48c6ac:
    // 0x48c6ac: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x48c6acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_48c6b0:
    // 0x48c6b0: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x48c6b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_48c6b4:
    // 0x48c6b4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x48c6b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_48c6b8:
    // 0x48c6b8: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x48c6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_48c6bc:
    // 0x48c6bc: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x48c6bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_48c6c0:
    // 0x48c6c0: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x48c6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_48c6c4:
    // 0x48c6c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x48c6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_48c6c8:
    // 0x48c6c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48c6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_48c6cc:
    // 0x48c6cc: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x48c6ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
label_48c6d0:
    // 0x48c6d0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x48c6d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_48c6d4:
    // 0x48c6d4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x48c6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_48c6d8:
    // 0x48c6d8: 0x5440ffdb  bnel        $v0, $zero, . + 4 + (-0x25 << 2)
label_48c6dc:
    if (ctx->pc == 0x48C6DCu) {
        ctx->pc = 0x48C6DCu;
            // 0x48c6dc: 0x10103c  dsll32      $v0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
        ctx->pc = 0x48C6E0u;
        goto label_48c6e0;
    }
    ctx->pc = 0x48C6D8u;
    {
        const bool branch_taken_0x48c6d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48c6d8) {
            ctx->pc = 0x48C6DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48C6D8u;
            // 0x48c6dc: 0x10103c  dsll32      $v0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48C648u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_48c648;
        }
    }
    ctx->pc = 0x48C6E0u;
label_48c6e0:
    // 0x48c6e0: 0x96230046  lhu         $v1, 0x46($s1)
    ctx->pc = 0x48c6e0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 70)));
label_48c6e4:
    // 0x48c6e4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x48c6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_48c6e8:
    // 0x48c6e8: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
label_48c6ec:
    if (ctx->pc == 0x48C6ECu) {
        ctx->pc = 0x48C6ECu;
            // 0x48c6ec: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x48C6F0u;
        goto label_48c6f0;
    }
    ctx->pc = 0x48C6E8u;
    {
        const bool branch_taken_0x48c6e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x48c6e8) {
            ctx->pc = 0x48C6ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48C6E8u;
            // 0x48c6ec: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48C6F8u;
            goto label_48c6f8;
        }
    }
    ctx->pc = 0x48C6F0u;
label_48c6f0:
    // 0x48c6f0: 0xa6200046  sh          $zero, 0x46($s1)
    ctx->pc = 0x48c6f0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 70), (uint16_t)GPR_U32(ctx, 0));
label_48c6f4:
    // 0x48c6f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x48c6f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_48c6f8:
    // 0x48c6f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x48c6f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48c6fc:
    // 0x48c6fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48c6fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_48c700:
    // 0x48c700: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48c700u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48c704:
    // 0x48c704: 0x3e00008  jr          $ra
label_48c708:
    if (ctx->pc == 0x48C708u) {
        ctx->pc = 0x48C708u;
            // 0x48c708: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x48C70Cu;
        goto label_48c70c;
    }
    ctx->pc = 0x48C704u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48C708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48C704u;
            // 0x48c708: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48C70Cu;
label_48c70c:
    // 0x48c70c: 0x0  nop
    ctx->pc = 0x48c70cu;
    // NOP
label_48c710:
    // 0x48c710: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x48c710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_48c714:
    // 0x48c714: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x48c714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_48c718:
    // 0x48c718: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48c718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_48c71c:
    // 0x48c71c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x48c71cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_48c720:
    // 0x48c720: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
label_48c724:
    if (ctx->pc == 0x48C724u) {
        ctx->pc = 0x48C724u;
            // 0x48c724: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48C728u;
        goto label_48c728;
    }
    ctx->pc = 0x48C720u;
    {
        const bool branch_taken_0x48c720 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x48c720) {
            ctx->pc = 0x48C724u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48C720u;
            // 0x48c724: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48C74Cu;
            goto label_48c74c;
        }
    }
    ctx->pc = 0x48C728u;
label_48c728:
    // 0x48c728: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x48c728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_48c72c:
    // 0x48c72c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x48c72cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_48c730:
    // 0x48c730: 0x2463f9c0  addiu       $v1, $v1, -0x640
    ctx->pc = 0x48c730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965696));
label_48c734:
    // 0x48c734: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x48c734u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_48c738:
    // 0x48c738: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_48c73c:
    if (ctx->pc == 0x48C73Cu) {
        ctx->pc = 0x48C73Cu;
            // 0x48c73c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x48C740u;
        goto label_48c740;
    }
    ctx->pc = 0x48C738u;
    {
        const bool branch_taken_0x48c738 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x48C73Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48C738u;
            // 0x48c73c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c738) {
            ctx->pc = 0x48C748u;
            goto label_48c748;
        }
    }
    ctx->pc = 0x48C740u;
label_48c740:
    // 0x48c740: 0xc0400a8  jal         func_1002A0
label_48c744:
    if (ctx->pc == 0x48C744u) {
        ctx->pc = 0x48C748u;
        goto label_48c748;
    }
    ctx->pc = 0x48C740u;
    SET_GPR_U32(ctx, 31, 0x48C748u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48C748u; }
        if (ctx->pc != 0x48C748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48C748u; }
        if (ctx->pc != 0x48C748u) { return; }
    }
    ctx->pc = 0x48C748u;
label_48c748:
    // 0x48c748: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x48c748u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_48c74c:
    // 0x48c74c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x48c74cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_48c750:
    // 0x48c750: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48c750u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48c754:
    // 0x48c754: 0x3e00008  jr          $ra
label_48c758:
    if (ctx->pc == 0x48C758u) {
        ctx->pc = 0x48C758u;
            // 0x48c758: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x48C75Cu;
        goto label_48c75c;
    }
    ctx->pc = 0x48C754u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48C758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48C754u;
            // 0x48c758: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48C75Cu;
label_48c75c:
    // 0x48c75c: 0x0  nop
    ctx->pc = 0x48c75cu;
    // NOP
label_48c760:
    // 0x48c760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x48c760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_48c764:
    // 0x48c764: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x48c764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_48c768:
    // 0x48c768: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48c768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_48c76c:
    // 0x48c76c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x48c76cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_48c770:
    // 0x48c770: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
label_48c774:
    if (ctx->pc == 0x48C774u) {
        ctx->pc = 0x48C774u;
            // 0x48c774: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48C778u;
        goto label_48c778;
    }
    ctx->pc = 0x48C770u;
    {
        const bool branch_taken_0x48c770 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x48C774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48C770u;
            // 0x48c774: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c770) {
            ctx->pc = 0x48C860u;
            goto label_48c860;
        }
    }
    ctx->pc = 0x48C778u;
label_48c778:
    // 0x48c778: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x48c778u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_48c77c:
    // 0x48c77c: 0x8c650014  lw          $a1, 0x14($v1)
    ctx->pc = 0x48c77cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_48c780:
    // 0x48c780: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x48c780u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_48c784:
    // 0x48c784: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x48c784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_48c788:
    // 0x48c788: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x48c788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48c78c:
    // 0x48c78c: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x48c78cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_48c790:
    // 0x48c790: 0x8ce600d4  lw          $a2, 0xD4($a3)
    ctx->pc = 0x48c790u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 212)));
label_48c794:
    // 0x48c794: 0x50c3000a  beql        $a2, $v1, . + 4 + (0xA << 2)
label_48c798:
    if (ctx->pc == 0x48C798u) {
        ctx->pc = 0x48C798u;
            // 0x48c798: 0x92030020  lbu         $v1, 0x20($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->pc = 0x48C79Cu;
        goto label_48c79c;
    }
    ctx->pc = 0x48C794u;
    {
        const bool branch_taken_0x48c794 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x48c794) {
            ctx->pc = 0x48C798u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48C794u;
            // 0x48c798: 0x92030020  lbu         $v1, 0x20($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48C7C0u;
            goto label_48c7c0;
        }
    }
    ctx->pc = 0x48C79Cu;
label_48c79c:
    // 0x48c79c: 0x8ce500dc  lw          $a1, 0xDC($a3)
    ctx->pc = 0x48c79cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 220)));
label_48c7a0:
    // 0x48c7a0: 0xace300d4  sw          $v1, 0xD4($a3)
    ctx->pc = 0x48c7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 212), GPR_U32(ctx, 3));
label_48c7a4:
    // 0x48c7a4: 0xace000dc  sw          $zero, 0xDC($a3)
    ctx->pc = 0x48c7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 220), GPR_U32(ctx, 0));
label_48c7a8:
    // 0x48c7a8: 0xace000d8  sw          $zero, 0xD8($a3)
    ctx->pc = 0x48c7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 216), GPR_U32(ctx, 0));
label_48c7ac:
    // 0x48c7ac: 0xc123020  jal         func_48C080
label_48c7b0:
    if (ctx->pc == 0x48C7B0u) {
        ctx->pc = 0x48C7B0u;
            // 0x48c7b0: 0xae06000c  sw          $a2, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x48C7B4u;
        goto label_48c7b4;
    }
    ctx->pc = 0x48C7ACu;
    SET_GPR_U32(ctx, 31, 0x48C7B4u);
    ctx->pc = 0x48C7B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48C7ACu;
            // 0x48c7b0: 0xae06000c  sw          $a2, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48C080u;
    if (runtime->hasFunction(0x48C080u)) {
        auto targetFn = runtime->lookupFunction(0x48C080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48C7B4u; }
        if (ctx->pc != 0x48C7B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048C080_0x48c080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48C7B4u; }
        if (ctx->pc != 0x48C7B4u) { return; }
    }
    ctx->pc = 0x48C7B4u;
label_48c7b4:
    // 0x48c7b4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x48c7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_48c7b8:
    // 0x48c7b8: 0xa2000015  sb          $zero, 0x15($s0)
    ctx->pc = 0x48c7b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 21), (uint8_t)GPR_U32(ctx, 0));
label_48c7bc:
    // 0x48c7bc: 0x92030020  lbu         $v1, 0x20($s0)
    ctx->pc = 0x48c7bcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
label_48c7c0:
    // 0x48c7c0: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
label_48c7c4:
    if (ctx->pc == 0x48C7C4u) {
        ctx->pc = 0x48C7C4u;
            // 0x48c7c4: 0x92030014  lbu         $v1, 0x14($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = 0x48C7C8u;
        goto label_48c7c8;
    }
    ctx->pc = 0x48C7C0u;
    {
        const bool branch_taken_0x48c7c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x48c7c0) {
            ctx->pc = 0x48C7C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48C7C0u;
            // 0x48c7c4: 0x92030014  lbu         $v1, 0x14($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48C7ECu;
            goto label_48c7ec;
        }
    }
    ctx->pc = 0x48C7C8u;
label_48c7c8:
    // 0x48c7c8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x48c7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_48c7cc:
    // 0x48c7cc: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x48c7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_48c7d0:
    // 0x48c7d0: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x48c7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_48c7d4:
    // 0x48c7d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x48c7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_48c7d8:
    // 0x48c7d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48c7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_48c7dc:
    // 0x48c7dc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x48c7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48c7e0:
    // 0x48c7e0: 0xc1234b8  jal         func_48D2E0
label_48c7e4:
    if (ctx->pc == 0x48C7E4u) {
        ctx->pc = 0x48C7E4u;
            // 0x48c7e4: 0x8c450008  lw          $a1, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->pc = 0x48C7E8u;
        goto label_48c7e8;
    }
    ctx->pc = 0x48C7E0u;
    SET_GPR_U32(ctx, 31, 0x48C7E8u);
    ctx->pc = 0x48C7E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48C7E0u;
            // 0x48c7e4: 0x8c450008  lw          $a1, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48D2E0u;
    if (runtime->hasFunction(0x48D2E0u)) {
        auto targetFn = runtime->lookupFunction(0x48D2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48C7E8u; }
        if (ctx->pc != 0x48C7E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048D2E0_0x48d2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48C7E8u; }
        if (ctx->pc != 0x48C7E8u) { return; }
    }
    ctx->pc = 0x48C7E8u;
label_48c7e8:
    // 0x48c7e8: 0x92030014  lbu         $v1, 0x14($s0)
    ctx->pc = 0x48c7e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
label_48c7ec:
    // 0x48c7ec: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
label_48c7f0:
    if (ctx->pc == 0x48C7F0u) {
        ctx->pc = 0x48C7F0u;
            // 0x48c7f0: 0xa2000014  sb          $zero, 0x14($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x48C7F4u;
        goto label_48c7f4;
    }
    ctx->pc = 0x48C7ECu;
    {
        const bool branch_taken_0x48c7ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x48c7ec) {
            ctx->pc = 0x48C7F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48C7ECu;
            // 0x48c7f0: 0xa2000014  sb          $zero, 0x14($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48C81Cu;
            goto label_48c81c;
        }
    }
    ctx->pc = 0x48C7F4u;
label_48c7f4:
    // 0x48c7f4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x48c7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_48c7f8:
    // 0x48c7f8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x48c7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_48c7fc:
    // 0x48c7fc: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x48c7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_48c800:
    // 0x48c800: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x48c800u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_48c804:
    // 0x48c804: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x48c804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_48c808:
    // 0x48c808: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x48c808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_48c80c:
    // 0x48c80c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x48c80cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_48c810:
    // 0x48c810: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x48c810u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_48c814:
    // 0x48c814: 0x320f809  jalr        $t9
label_48c818:
    if (ctx->pc == 0x48C818u) {
        ctx->pc = 0x48C818u;
            // 0x48c818: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48C81Cu;
        goto label_48c81c;
    }
    ctx->pc = 0x48C814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48C81Cu);
        ctx->pc = 0x48C818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48C814u;
            // 0x48c818: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48C81Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48C81Cu; }
            if (ctx->pc != 0x48C81Cu) { return; }
        }
        }
    }
    ctx->pc = 0x48C81Cu;
label_48c81c:
    // 0x48c81c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x48c81cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_48c820:
    // 0x48c820: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x48c820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_48c824:
    // 0x48c824: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x48c824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_48c828:
    // 0x48c828: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x48c828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_48c82c:
    // 0x48c82c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x48c82cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_48c830:
    // 0x48c830: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x48c830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_48c834:
    // 0x48c834: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x48c834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_48c838:
    // 0x48c838: 0x8c8500d4  lw          $a1, 0xD4($a0)
    ctx->pc = 0x48c838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
label_48c83c:
    // 0x48c83c: 0x54a30009  bnel        $a1, $v1, . + 4 + (0x9 << 2)
label_48c840:
    if (ctx->pc == 0x48C840u) {
        ctx->pc = 0x48C840u;
            // 0x48c840: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x48C844u;
        goto label_48c844;
    }
    ctx->pc = 0x48C83Cu;
    {
        const bool branch_taken_0x48c83c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x48c83c) {
            ctx->pc = 0x48C840u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48C83Cu;
            // 0x48c840: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48C864u;
            goto label_48c864;
        }
    }
    ctx->pc = 0x48C844u;
label_48c844:
    // 0x48c844: 0x92030015  lbu         $v1, 0x15($s0)
    ctx->pc = 0x48c844u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 21)));
label_48c848:
    // 0x48c848: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_48c84c:
    if (ctx->pc == 0x48C84Cu) {
        ctx->pc = 0x48C850u;
        goto label_48c850;
    }
    ctx->pc = 0x48C848u;
    {
        const bool branch_taken_0x48c848 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x48c848) {
            ctx->pc = 0x48C860u;
            goto label_48c860;
        }
    }
    ctx->pc = 0x48C850u;
label_48c850:
    // 0x48c850: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x48c850u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_48c854:
    // 0x48c854: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x48c854u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_48c858:
    // 0x48c858: 0x320f809  jalr        $t9
label_48c85c:
    if (ctx->pc == 0x48C85Cu) {
        ctx->pc = 0x48C860u;
        goto label_48c860;
    }
    ctx->pc = 0x48C858u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48C860u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x48C860u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48C860u; }
            if (ctx->pc != 0x48C860u) { return; }
        }
        }
    }
    ctx->pc = 0x48C860u;
label_48c860:
    // 0x48c860: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x48c860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_48c864:
    // 0x48c864: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48c864u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48c868:
    // 0x48c868: 0x3e00008  jr          $ra
label_48c86c:
    if (ctx->pc == 0x48C86Cu) {
        ctx->pc = 0x48C86Cu;
            // 0x48c86c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x48C870u;
        goto label_48c870;
    }
    ctx->pc = 0x48C868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48C86Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48C868u;
            // 0x48c86c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48C870u;
label_48c870:
    // 0x48c870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x48c870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_48c874:
    // 0x48c874: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x48c874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_48c878:
    // 0x48c878: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48c878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_48c87c:
    // 0x48c87c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x48c87cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_48c880:
    // 0x48c880: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
label_48c884:
    if (ctx->pc == 0x48C884u) {
        ctx->pc = 0x48C884u;
            // 0x48c884: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48C888u;
        goto label_48c888;
    }
    ctx->pc = 0x48C880u;
    {
        const bool branch_taken_0x48c880 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x48c880) {
            ctx->pc = 0x48C884u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x48C880u;
            // 0x48c884: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48C8ACu;
            goto label_48c8ac;
        }
    }
    ctx->pc = 0x48C888u;
label_48c888:
    // 0x48c888: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x48c888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_48c88c:
    // 0x48c88c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x48c88cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_48c890:
    // 0x48c890: 0x2463f950  addiu       $v1, $v1, -0x6B0
    ctx->pc = 0x48c890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965584));
label_48c894:
    // 0x48c894: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x48c894u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_48c898:
    // 0x48c898: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_48c89c:
    if (ctx->pc == 0x48C89Cu) {
        ctx->pc = 0x48C89Cu;
            // 0x48c89c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x48C8A0u;
        goto label_48c8a0;
    }
    ctx->pc = 0x48C898u;
    {
        const bool branch_taken_0x48c898 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x48C89Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48C898u;
            // 0x48c89c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c898) {
            ctx->pc = 0x48C8A8u;
            goto label_48c8a8;
        }
    }
    ctx->pc = 0x48C8A0u;
label_48c8a0:
    // 0x48c8a0: 0xc0400a8  jal         func_1002A0
label_48c8a4:
    if (ctx->pc == 0x48C8A4u) {
        ctx->pc = 0x48C8A8u;
        goto label_48c8a8;
    }
    ctx->pc = 0x48C8A0u;
    SET_GPR_U32(ctx, 31, 0x48C8A8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48C8A8u; }
        if (ctx->pc != 0x48C8A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48C8A8u; }
        if (ctx->pc != 0x48C8A8u) { return; }
    }
    ctx->pc = 0x48C8A8u;
label_48c8a8:
    // 0x48c8a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x48c8a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_48c8ac:
    // 0x48c8ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x48c8acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_48c8b0:
    // 0x48c8b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48c8b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48c8b4:
    // 0x48c8b4: 0x3e00008  jr          $ra
label_48c8b8:
    if (ctx->pc == 0x48C8B8u) {
        ctx->pc = 0x48C8B8u;
            // 0x48c8b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x48C8BCu;
        goto label_48c8bc;
    }
    ctx->pc = 0x48C8B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48C8B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48C8B4u;
            // 0x48c8b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x48C8BCu;
label_48c8bc:
    // 0x48c8bc: 0x0  nop
    ctx->pc = 0x48c8bcu;
    // NOP
}
