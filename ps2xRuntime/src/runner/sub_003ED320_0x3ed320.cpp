#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003ED320
// Address: 0x3ed320 - 0x3ed910
void sub_003ED320_0x3ed320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ED320_0x3ed320");
#endif

    switch (ctx->pc) {
        case 0x3ed320u: goto label_3ed320;
        case 0x3ed324u: goto label_3ed324;
        case 0x3ed328u: goto label_3ed328;
        case 0x3ed32cu: goto label_3ed32c;
        case 0x3ed330u: goto label_3ed330;
        case 0x3ed334u: goto label_3ed334;
        case 0x3ed338u: goto label_3ed338;
        case 0x3ed33cu: goto label_3ed33c;
        case 0x3ed340u: goto label_3ed340;
        case 0x3ed344u: goto label_3ed344;
        case 0x3ed348u: goto label_3ed348;
        case 0x3ed34cu: goto label_3ed34c;
        case 0x3ed350u: goto label_3ed350;
        case 0x3ed354u: goto label_3ed354;
        case 0x3ed358u: goto label_3ed358;
        case 0x3ed35cu: goto label_3ed35c;
        case 0x3ed360u: goto label_3ed360;
        case 0x3ed364u: goto label_3ed364;
        case 0x3ed368u: goto label_3ed368;
        case 0x3ed36cu: goto label_3ed36c;
        case 0x3ed370u: goto label_3ed370;
        case 0x3ed374u: goto label_3ed374;
        case 0x3ed378u: goto label_3ed378;
        case 0x3ed37cu: goto label_3ed37c;
        case 0x3ed380u: goto label_3ed380;
        case 0x3ed384u: goto label_3ed384;
        case 0x3ed388u: goto label_3ed388;
        case 0x3ed38cu: goto label_3ed38c;
        case 0x3ed390u: goto label_3ed390;
        case 0x3ed394u: goto label_3ed394;
        case 0x3ed398u: goto label_3ed398;
        case 0x3ed39cu: goto label_3ed39c;
        case 0x3ed3a0u: goto label_3ed3a0;
        case 0x3ed3a4u: goto label_3ed3a4;
        case 0x3ed3a8u: goto label_3ed3a8;
        case 0x3ed3acu: goto label_3ed3ac;
        case 0x3ed3b0u: goto label_3ed3b0;
        case 0x3ed3b4u: goto label_3ed3b4;
        case 0x3ed3b8u: goto label_3ed3b8;
        case 0x3ed3bcu: goto label_3ed3bc;
        case 0x3ed3c0u: goto label_3ed3c0;
        case 0x3ed3c4u: goto label_3ed3c4;
        case 0x3ed3c8u: goto label_3ed3c8;
        case 0x3ed3ccu: goto label_3ed3cc;
        case 0x3ed3d0u: goto label_3ed3d0;
        case 0x3ed3d4u: goto label_3ed3d4;
        case 0x3ed3d8u: goto label_3ed3d8;
        case 0x3ed3dcu: goto label_3ed3dc;
        case 0x3ed3e0u: goto label_3ed3e0;
        case 0x3ed3e4u: goto label_3ed3e4;
        case 0x3ed3e8u: goto label_3ed3e8;
        case 0x3ed3ecu: goto label_3ed3ec;
        case 0x3ed3f0u: goto label_3ed3f0;
        case 0x3ed3f4u: goto label_3ed3f4;
        case 0x3ed3f8u: goto label_3ed3f8;
        case 0x3ed3fcu: goto label_3ed3fc;
        case 0x3ed400u: goto label_3ed400;
        case 0x3ed404u: goto label_3ed404;
        case 0x3ed408u: goto label_3ed408;
        case 0x3ed40cu: goto label_3ed40c;
        case 0x3ed410u: goto label_3ed410;
        case 0x3ed414u: goto label_3ed414;
        case 0x3ed418u: goto label_3ed418;
        case 0x3ed41cu: goto label_3ed41c;
        case 0x3ed420u: goto label_3ed420;
        case 0x3ed424u: goto label_3ed424;
        case 0x3ed428u: goto label_3ed428;
        case 0x3ed42cu: goto label_3ed42c;
        case 0x3ed430u: goto label_3ed430;
        case 0x3ed434u: goto label_3ed434;
        case 0x3ed438u: goto label_3ed438;
        case 0x3ed43cu: goto label_3ed43c;
        case 0x3ed440u: goto label_3ed440;
        case 0x3ed444u: goto label_3ed444;
        case 0x3ed448u: goto label_3ed448;
        case 0x3ed44cu: goto label_3ed44c;
        case 0x3ed450u: goto label_3ed450;
        case 0x3ed454u: goto label_3ed454;
        case 0x3ed458u: goto label_3ed458;
        case 0x3ed45cu: goto label_3ed45c;
        case 0x3ed460u: goto label_3ed460;
        case 0x3ed464u: goto label_3ed464;
        case 0x3ed468u: goto label_3ed468;
        case 0x3ed46cu: goto label_3ed46c;
        case 0x3ed470u: goto label_3ed470;
        case 0x3ed474u: goto label_3ed474;
        case 0x3ed478u: goto label_3ed478;
        case 0x3ed47cu: goto label_3ed47c;
        case 0x3ed480u: goto label_3ed480;
        case 0x3ed484u: goto label_3ed484;
        case 0x3ed488u: goto label_3ed488;
        case 0x3ed48cu: goto label_3ed48c;
        case 0x3ed490u: goto label_3ed490;
        case 0x3ed494u: goto label_3ed494;
        case 0x3ed498u: goto label_3ed498;
        case 0x3ed49cu: goto label_3ed49c;
        case 0x3ed4a0u: goto label_3ed4a0;
        case 0x3ed4a4u: goto label_3ed4a4;
        case 0x3ed4a8u: goto label_3ed4a8;
        case 0x3ed4acu: goto label_3ed4ac;
        case 0x3ed4b0u: goto label_3ed4b0;
        case 0x3ed4b4u: goto label_3ed4b4;
        case 0x3ed4b8u: goto label_3ed4b8;
        case 0x3ed4bcu: goto label_3ed4bc;
        case 0x3ed4c0u: goto label_3ed4c0;
        case 0x3ed4c4u: goto label_3ed4c4;
        case 0x3ed4c8u: goto label_3ed4c8;
        case 0x3ed4ccu: goto label_3ed4cc;
        case 0x3ed4d0u: goto label_3ed4d0;
        case 0x3ed4d4u: goto label_3ed4d4;
        case 0x3ed4d8u: goto label_3ed4d8;
        case 0x3ed4dcu: goto label_3ed4dc;
        case 0x3ed4e0u: goto label_3ed4e0;
        case 0x3ed4e4u: goto label_3ed4e4;
        case 0x3ed4e8u: goto label_3ed4e8;
        case 0x3ed4ecu: goto label_3ed4ec;
        case 0x3ed4f0u: goto label_3ed4f0;
        case 0x3ed4f4u: goto label_3ed4f4;
        case 0x3ed4f8u: goto label_3ed4f8;
        case 0x3ed4fcu: goto label_3ed4fc;
        case 0x3ed500u: goto label_3ed500;
        case 0x3ed504u: goto label_3ed504;
        case 0x3ed508u: goto label_3ed508;
        case 0x3ed50cu: goto label_3ed50c;
        case 0x3ed510u: goto label_3ed510;
        case 0x3ed514u: goto label_3ed514;
        case 0x3ed518u: goto label_3ed518;
        case 0x3ed51cu: goto label_3ed51c;
        case 0x3ed520u: goto label_3ed520;
        case 0x3ed524u: goto label_3ed524;
        case 0x3ed528u: goto label_3ed528;
        case 0x3ed52cu: goto label_3ed52c;
        case 0x3ed530u: goto label_3ed530;
        case 0x3ed534u: goto label_3ed534;
        case 0x3ed538u: goto label_3ed538;
        case 0x3ed53cu: goto label_3ed53c;
        case 0x3ed540u: goto label_3ed540;
        case 0x3ed544u: goto label_3ed544;
        case 0x3ed548u: goto label_3ed548;
        case 0x3ed54cu: goto label_3ed54c;
        case 0x3ed550u: goto label_3ed550;
        case 0x3ed554u: goto label_3ed554;
        case 0x3ed558u: goto label_3ed558;
        case 0x3ed55cu: goto label_3ed55c;
        case 0x3ed560u: goto label_3ed560;
        case 0x3ed564u: goto label_3ed564;
        case 0x3ed568u: goto label_3ed568;
        case 0x3ed56cu: goto label_3ed56c;
        case 0x3ed570u: goto label_3ed570;
        case 0x3ed574u: goto label_3ed574;
        case 0x3ed578u: goto label_3ed578;
        case 0x3ed57cu: goto label_3ed57c;
        case 0x3ed580u: goto label_3ed580;
        case 0x3ed584u: goto label_3ed584;
        case 0x3ed588u: goto label_3ed588;
        case 0x3ed58cu: goto label_3ed58c;
        case 0x3ed590u: goto label_3ed590;
        case 0x3ed594u: goto label_3ed594;
        case 0x3ed598u: goto label_3ed598;
        case 0x3ed59cu: goto label_3ed59c;
        case 0x3ed5a0u: goto label_3ed5a0;
        case 0x3ed5a4u: goto label_3ed5a4;
        case 0x3ed5a8u: goto label_3ed5a8;
        case 0x3ed5acu: goto label_3ed5ac;
        case 0x3ed5b0u: goto label_3ed5b0;
        case 0x3ed5b4u: goto label_3ed5b4;
        case 0x3ed5b8u: goto label_3ed5b8;
        case 0x3ed5bcu: goto label_3ed5bc;
        case 0x3ed5c0u: goto label_3ed5c0;
        case 0x3ed5c4u: goto label_3ed5c4;
        case 0x3ed5c8u: goto label_3ed5c8;
        case 0x3ed5ccu: goto label_3ed5cc;
        case 0x3ed5d0u: goto label_3ed5d0;
        case 0x3ed5d4u: goto label_3ed5d4;
        case 0x3ed5d8u: goto label_3ed5d8;
        case 0x3ed5dcu: goto label_3ed5dc;
        case 0x3ed5e0u: goto label_3ed5e0;
        case 0x3ed5e4u: goto label_3ed5e4;
        case 0x3ed5e8u: goto label_3ed5e8;
        case 0x3ed5ecu: goto label_3ed5ec;
        case 0x3ed5f0u: goto label_3ed5f0;
        case 0x3ed5f4u: goto label_3ed5f4;
        case 0x3ed5f8u: goto label_3ed5f8;
        case 0x3ed5fcu: goto label_3ed5fc;
        case 0x3ed600u: goto label_3ed600;
        case 0x3ed604u: goto label_3ed604;
        case 0x3ed608u: goto label_3ed608;
        case 0x3ed60cu: goto label_3ed60c;
        case 0x3ed610u: goto label_3ed610;
        case 0x3ed614u: goto label_3ed614;
        case 0x3ed618u: goto label_3ed618;
        case 0x3ed61cu: goto label_3ed61c;
        case 0x3ed620u: goto label_3ed620;
        case 0x3ed624u: goto label_3ed624;
        case 0x3ed628u: goto label_3ed628;
        case 0x3ed62cu: goto label_3ed62c;
        case 0x3ed630u: goto label_3ed630;
        case 0x3ed634u: goto label_3ed634;
        case 0x3ed638u: goto label_3ed638;
        case 0x3ed63cu: goto label_3ed63c;
        case 0x3ed640u: goto label_3ed640;
        case 0x3ed644u: goto label_3ed644;
        case 0x3ed648u: goto label_3ed648;
        case 0x3ed64cu: goto label_3ed64c;
        case 0x3ed650u: goto label_3ed650;
        case 0x3ed654u: goto label_3ed654;
        case 0x3ed658u: goto label_3ed658;
        case 0x3ed65cu: goto label_3ed65c;
        case 0x3ed660u: goto label_3ed660;
        case 0x3ed664u: goto label_3ed664;
        case 0x3ed668u: goto label_3ed668;
        case 0x3ed66cu: goto label_3ed66c;
        case 0x3ed670u: goto label_3ed670;
        case 0x3ed674u: goto label_3ed674;
        case 0x3ed678u: goto label_3ed678;
        case 0x3ed67cu: goto label_3ed67c;
        case 0x3ed680u: goto label_3ed680;
        case 0x3ed684u: goto label_3ed684;
        case 0x3ed688u: goto label_3ed688;
        case 0x3ed68cu: goto label_3ed68c;
        case 0x3ed690u: goto label_3ed690;
        case 0x3ed694u: goto label_3ed694;
        case 0x3ed698u: goto label_3ed698;
        case 0x3ed69cu: goto label_3ed69c;
        case 0x3ed6a0u: goto label_3ed6a0;
        case 0x3ed6a4u: goto label_3ed6a4;
        case 0x3ed6a8u: goto label_3ed6a8;
        case 0x3ed6acu: goto label_3ed6ac;
        case 0x3ed6b0u: goto label_3ed6b0;
        case 0x3ed6b4u: goto label_3ed6b4;
        case 0x3ed6b8u: goto label_3ed6b8;
        case 0x3ed6bcu: goto label_3ed6bc;
        case 0x3ed6c0u: goto label_3ed6c0;
        case 0x3ed6c4u: goto label_3ed6c4;
        case 0x3ed6c8u: goto label_3ed6c8;
        case 0x3ed6ccu: goto label_3ed6cc;
        case 0x3ed6d0u: goto label_3ed6d0;
        case 0x3ed6d4u: goto label_3ed6d4;
        case 0x3ed6d8u: goto label_3ed6d8;
        case 0x3ed6dcu: goto label_3ed6dc;
        case 0x3ed6e0u: goto label_3ed6e0;
        case 0x3ed6e4u: goto label_3ed6e4;
        case 0x3ed6e8u: goto label_3ed6e8;
        case 0x3ed6ecu: goto label_3ed6ec;
        case 0x3ed6f0u: goto label_3ed6f0;
        case 0x3ed6f4u: goto label_3ed6f4;
        case 0x3ed6f8u: goto label_3ed6f8;
        case 0x3ed6fcu: goto label_3ed6fc;
        case 0x3ed700u: goto label_3ed700;
        case 0x3ed704u: goto label_3ed704;
        case 0x3ed708u: goto label_3ed708;
        case 0x3ed70cu: goto label_3ed70c;
        case 0x3ed710u: goto label_3ed710;
        case 0x3ed714u: goto label_3ed714;
        case 0x3ed718u: goto label_3ed718;
        case 0x3ed71cu: goto label_3ed71c;
        case 0x3ed720u: goto label_3ed720;
        case 0x3ed724u: goto label_3ed724;
        case 0x3ed728u: goto label_3ed728;
        case 0x3ed72cu: goto label_3ed72c;
        case 0x3ed730u: goto label_3ed730;
        case 0x3ed734u: goto label_3ed734;
        case 0x3ed738u: goto label_3ed738;
        case 0x3ed73cu: goto label_3ed73c;
        case 0x3ed740u: goto label_3ed740;
        case 0x3ed744u: goto label_3ed744;
        case 0x3ed748u: goto label_3ed748;
        case 0x3ed74cu: goto label_3ed74c;
        case 0x3ed750u: goto label_3ed750;
        case 0x3ed754u: goto label_3ed754;
        case 0x3ed758u: goto label_3ed758;
        case 0x3ed75cu: goto label_3ed75c;
        case 0x3ed760u: goto label_3ed760;
        case 0x3ed764u: goto label_3ed764;
        case 0x3ed768u: goto label_3ed768;
        case 0x3ed76cu: goto label_3ed76c;
        case 0x3ed770u: goto label_3ed770;
        case 0x3ed774u: goto label_3ed774;
        case 0x3ed778u: goto label_3ed778;
        case 0x3ed77cu: goto label_3ed77c;
        case 0x3ed780u: goto label_3ed780;
        case 0x3ed784u: goto label_3ed784;
        case 0x3ed788u: goto label_3ed788;
        case 0x3ed78cu: goto label_3ed78c;
        case 0x3ed790u: goto label_3ed790;
        case 0x3ed794u: goto label_3ed794;
        case 0x3ed798u: goto label_3ed798;
        case 0x3ed79cu: goto label_3ed79c;
        case 0x3ed7a0u: goto label_3ed7a0;
        case 0x3ed7a4u: goto label_3ed7a4;
        case 0x3ed7a8u: goto label_3ed7a8;
        case 0x3ed7acu: goto label_3ed7ac;
        case 0x3ed7b0u: goto label_3ed7b0;
        case 0x3ed7b4u: goto label_3ed7b4;
        case 0x3ed7b8u: goto label_3ed7b8;
        case 0x3ed7bcu: goto label_3ed7bc;
        case 0x3ed7c0u: goto label_3ed7c0;
        case 0x3ed7c4u: goto label_3ed7c4;
        case 0x3ed7c8u: goto label_3ed7c8;
        case 0x3ed7ccu: goto label_3ed7cc;
        case 0x3ed7d0u: goto label_3ed7d0;
        case 0x3ed7d4u: goto label_3ed7d4;
        case 0x3ed7d8u: goto label_3ed7d8;
        case 0x3ed7dcu: goto label_3ed7dc;
        case 0x3ed7e0u: goto label_3ed7e0;
        case 0x3ed7e4u: goto label_3ed7e4;
        case 0x3ed7e8u: goto label_3ed7e8;
        case 0x3ed7ecu: goto label_3ed7ec;
        case 0x3ed7f0u: goto label_3ed7f0;
        case 0x3ed7f4u: goto label_3ed7f4;
        case 0x3ed7f8u: goto label_3ed7f8;
        case 0x3ed7fcu: goto label_3ed7fc;
        case 0x3ed800u: goto label_3ed800;
        case 0x3ed804u: goto label_3ed804;
        case 0x3ed808u: goto label_3ed808;
        case 0x3ed80cu: goto label_3ed80c;
        case 0x3ed810u: goto label_3ed810;
        case 0x3ed814u: goto label_3ed814;
        case 0x3ed818u: goto label_3ed818;
        case 0x3ed81cu: goto label_3ed81c;
        case 0x3ed820u: goto label_3ed820;
        case 0x3ed824u: goto label_3ed824;
        case 0x3ed828u: goto label_3ed828;
        case 0x3ed82cu: goto label_3ed82c;
        case 0x3ed830u: goto label_3ed830;
        case 0x3ed834u: goto label_3ed834;
        case 0x3ed838u: goto label_3ed838;
        case 0x3ed83cu: goto label_3ed83c;
        case 0x3ed840u: goto label_3ed840;
        case 0x3ed844u: goto label_3ed844;
        case 0x3ed848u: goto label_3ed848;
        case 0x3ed84cu: goto label_3ed84c;
        case 0x3ed850u: goto label_3ed850;
        case 0x3ed854u: goto label_3ed854;
        case 0x3ed858u: goto label_3ed858;
        case 0x3ed85cu: goto label_3ed85c;
        case 0x3ed860u: goto label_3ed860;
        case 0x3ed864u: goto label_3ed864;
        case 0x3ed868u: goto label_3ed868;
        case 0x3ed86cu: goto label_3ed86c;
        case 0x3ed870u: goto label_3ed870;
        case 0x3ed874u: goto label_3ed874;
        case 0x3ed878u: goto label_3ed878;
        case 0x3ed87cu: goto label_3ed87c;
        case 0x3ed880u: goto label_3ed880;
        case 0x3ed884u: goto label_3ed884;
        case 0x3ed888u: goto label_3ed888;
        case 0x3ed88cu: goto label_3ed88c;
        case 0x3ed890u: goto label_3ed890;
        case 0x3ed894u: goto label_3ed894;
        case 0x3ed898u: goto label_3ed898;
        case 0x3ed89cu: goto label_3ed89c;
        case 0x3ed8a0u: goto label_3ed8a0;
        case 0x3ed8a4u: goto label_3ed8a4;
        case 0x3ed8a8u: goto label_3ed8a8;
        case 0x3ed8acu: goto label_3ed8ac;
        case 0x3ed8b0u: goto label_3ed8b0;
        case 0x3ed8b4u: goto label_3ed8b4;
        case 0x3ed8b8u: goto label_3ed8b8;
        case 0x3ed8bcu: goto label_3ed8bc;
        case 0x3ed8c0u: goto label_3ed8c0;
        case 0x3ed8c4u: goto label_3ed8c4;
        case 0x3ed8c8u: goto label_3ed8c8;
        case 0x3ed8ccu: goto label_3ed8cc;
        case 0x3ed8d0u: goto label_3ed8d0;
        case 0x3ed8d4u: goto label_3ed8d4;
        case 0x3ed8d8u: goto label_3ed8d8;
        case 0x3ed8dcu: goto label_3ed8dc;
        case 0x3ed8e0u: goto label_3ed8e0;
        case 0x3ed8e4u: goto label_3ed8e4;
        case 0x3ed8e8u: goto label_3ed8e8;
        case 0x3ed8ecu: goto label_3ed8ec;
        case 0x3ed8f0u: goto label_3ed8f0;
        case 0x3ed8f4u: goto label_3ed8f4;
        case 0x3ed8f8u: goto label_3ed8f8;
        case 0x3ed8fcu: goto label_3ed8fc;
        case 0x3ed900u: goto label_3ed900;
        case 0x3ed904u: goto label_3ed904;
        case 0x3ed908u: goto label_3ed908;
        case 0x3ed90cu: goto label_3ed90c;
        default: break;
    }

    ctx->pc = 0x3ed320u;

label_3ed320:
    // 0x3ed320: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3ed320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3ed324:
    // 0x3ed324: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x3ed324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_3ed328:
    // 0x3ed328: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3ed328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3ed32c:
    // 0x3ed32c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3ed32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3ed330:
    // 0x3ed330: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3ed330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3ed334:
    // 0x3ed334: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3ed334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3ed338:
    // 0x3ed338: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3ed338u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ed33c:
    // 0x3ed33c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3ed33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3ed340:
    // 0x3ed340: 0x3c040009  lui         $a0, 0x9
    ctx->pc = 0x3ed340u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)9 << 16));
label_3ed344:
    // 0x3ed344: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3ed344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3ed348:
    // 0x3ed348: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3ed348u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3ed34c:
    // 0x3ed34c: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x3ed34cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_3ed350:
    // 0x3ed350: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x3ed350u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3ed354:
    // 0x3ed354: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x3ed354u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3ed358:
    // 0x3ed358: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x3ed358u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3ed35c:
    // 0x3ed35c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3ed35cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3ed360:
    // 0x3ed360: 0x3485282e  ori         $a1, $a0, 0x282E
    ctx->pc = 0x3ed360u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)10286);
label_3ed364:
    // 0x3ed364: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3ed364u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3ed368:
    // 0x3ed368: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x3ed368u;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
label_3ed36c:
    // 0x3ed36c: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x3ed36cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
label_3ed370:
    // 0x3ed370: 0x46007546  mov.s       $f21, $f14
    ctx->pc = 0x3ed370u;
    ctx->f[21] = FPU_MOV_S(ctx->f[14]);
label_3ed374:
    // 0x3ed374: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_3ed378:
    if (ctx->pc == 0x3ED378u) {
        ctx->pc = 0x3ED378u;
            // 0x3ed378: 0x46007d06  mov.s       $f20, $f15 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[15]);
        ctx->pc = 0x3ED37Cu;
        goto label_3ed37c;
    }
    ctx->pc = 0x3ED374u;
    {
        const bool branch_taken_0x3ed374 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3ED378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED374u;
            // 0x3ed378: 0x46007d06  mov.s       $f20, $f15 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed374) {
            ctx->pc = 0x3ED3A0u;
            goto label_3ed3a0;
        }
    }
    ctx->pc = 0x3ED37Cu;
label_3ed37c:
    // 0x3ed37c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3ed37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3ed380:
    // 0x3ed380: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
label_3ed384:
    if (ctx->pc == 0x3ED384u) {
        ctx->pc = 0x3ED384u;
            // 0x3ed384: 0x3c02000a  lui         $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
        ctx->pc = 0x3ED388u;
        goto label_3ed388;
    }
    ctx->pc = 0x3ED380u;
    {
        const bool branch_taken_0x3ed380 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ed380) {
            ctx->pc = 0x3ED384u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED380u;
            // 0x3ed384: 0x3c02000a  lui         $v0, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ED398u;
            goto label_3ed398;
        }
    }
    ctx->pc = 0x3ED388u;
label_3ed388:
    // 0x3ed388: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
label_3ed38c:
    if (ctx->pc == 0x3ED38Cu) {
        ctx->pc = 0x3ED38Cu;
            // 0x3ed38c: 0x24053c8d  addiu       $a1, $zero, 0x3C8D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15501));
        ctx->pc = 0x3ED390u;
        goto label_3ed390;
    }
    ctx->pc = 0x3ED388u;
    {
        const bool branch_taken_0x3ed388 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ed388) {
            ctx->pc = 0x3ED38Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED388u;
            // 0x3ed38c: 0x24053c8d  addiu       $a1, $zero, 0x3C8D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15501));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ED3A4u;
            goto label_3ed3a4;
        }
    }
    ctx->pc = 0x3ED390u;
label_3ed390:
    // 0x3ed390: 0x10000005  b           . + 4 + (0x5 << 2)
label_3ed394:
    if (ctx->pc == 0x3ED394u) {
        ctx->pc = 0x3ED394u;
            // 0x3ed394: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3ED398u;
        goto label_3ed398;
    }
    ctx->pc = 0x3ED390u;
    {
        const bool branch_taken_0x3ed390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED390u;
            // 0x3ed394: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed390) {
            ctx->pc = 0x3ED3A8u;
            goto label_3ed3a8;
        }
    }
    ctx->pc = 0x3ED398u;
label_3ed398:
    // 0x3ed398: 0x10000002  b           . + 4 + (0x2 << 2)
label_3ed39c:
    if (ctx->pc == 0x3ED39Cu) {
        ctx->pc = 0x3ED39Cu;
            // 0x3ed39c: 0x3445d570  ori         $a1, $v0, 0xD570 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54640);
        ctx->pc = 0x3ED3A0u;
        goto label_3ed3a0;
    }
    ctx->pc = 0x3ED398u;
    {
        const bool branch_taken_0x3ed398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED39Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED398u;
            // 0x3ed39c: 0x3445d570  ori         $a1, $v0, 0xD570 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54640);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed398) {
            ctx->pc = 0x3ED3A4u;
            goto label_3ed3a4;
        }
    }
    ctx->pc = 0x3ED3A0u;
label_3ed3a0:
    // 0x3ed3a0: 0x24052ee0  addiu       $a1, $zero, 0x2EE0
    ctx->pc = 0x3ed3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12000));
label_3ed3a4:
    // 0x3ed3a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3ed3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ed3a8:
    // 0x3ed3a8: 0xc0d1570  jal         func_3455C0
label_3ed3ac:
    if (ctx->pc == 0x3ED3ACu) {
        ctx->pc = 0x3ED3ACu;
            // 0x3ed3ac: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x3ED3B0u;
        goto label_3ed3b0;
    }
    ctx->pc = 0x3ED3A8u;
    SET_GPR_U32(ctx, 31, 0x3ED3B0u);
    ctx->pc = 0x3ED3ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED3A8u;
            // 0x3ed3ac: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3455C0u;
    if (runtime->hasFunction(0x3455C0u)) {
        auto targetFn = runtime->lookupFunction(0x3455C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ED3B0u; }
        if (ctx->pc != 0x3ED3B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003455C0_0x3455c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ED3B0u; }
        if (ctx->pc != 0x3ED3B0u) { return; }
    }
    ctx->pc = 0x3ED3B0u;
label_3ed3b0:
    // 0x3ed3b0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3ed3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_3ed3b4:
    // 0x3ed3b4: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3ed3b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ed3b8:
    // 0x3ed3b8: 0x24639e40  addiu       $v1, $v1, -0x61C0
    ctx->pc = 0x3ed3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942272));
label_3ed3bc:
    // 0x3ed3bc: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x3ed3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_3ed3c0:
    // 0x3ed3c0: 0xa27200d0  sb          $s2, 0xD0($s3)
    ctx->pc = 0x3ed3c0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 208), (uint8_t)GPR_U32(ctx, 18));
label_3ed3c4:
    // 0x3ed3c4: 0xa27100d1  sb          $s1, 0xD1($s3)
    ctx->pc = 0x3ed3c4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 209), (uint8_t)GPR_U32(ctx, 17));
label_3ed3c8:
    // 0x3ed3c8: 0xe67700d4  swc1        $f23, 0xD4($s3)
    ctx->pc = 0x3ed3c8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 212), bits); }
label_3ed3cc:
    // 0x3ed3cc: 0xe67600d8  swc1        $f22, 0xD8($s3)
    ctx->pc = 0x3ed3ccu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 216), bits); }
label_3ed3d0:
    // 0x3ed3d0: 0xe67500dc  swc1        $f21, 0xDC($s3)
    ctx->pc = 0x3ed3d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 220), bits); }
label_3ed3d4:
    // 0x3ed3d4: 0xe67400e0  swc1        $f20, 0xE0($s3)
    ctx->pc = 0x3ed3d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 224), bits); }
label_3ed3d8:
    // 0x3ed3d8: 0xa26000e4  sb          $zero, 0xE4($s3)
    ctx->pc = 0x3ed3d8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 228), (uint8_t)GPR_U32(ctx, 0));
label_3ed3dc:
    // 0x3ed3dc: 0xa66000e6  sh          $zero, 0xE6($s3)
    ctx->pc = 0x3ed3dcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 230), (uint16_t)GPR_U32(ctx, 0));
label_3ed3e0:
    // 0x3ed3e0: 0xae7000e8  sw          $s0, 0xE8($s3)
    ctx->pc = 0x3ed3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 232), GPR_U32(ctx, 16));
label_3ed3e4:
    // 0x3ed3e4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3ed3e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3ed3e8:
    // 0x3ed3e8: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x3ed3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3ed3ec:
    // 0x3ed3ec: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3ed3ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ed3f0:
    // 0x3ed3f0: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x3ed3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3ed3f4:
    // 0x3ed3f4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3ed3f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ed3f8:
    // 0x3ed3f8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3ed3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3ed3fc:
    // 0x3ed3fc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3ed3fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ed400:
    // 0x3ed400: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3ed400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3ed404:
    // 0x3ed404: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3ed404u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ed408:
    // 0x3ed408: 0x3e00008  jr          $ra
label_3ed40c:
    if (ctx->pc == 0x3ED40Cu) {
        ctx->pc = 0x3ED40Cu;
            // 0x3ed40c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3ED410u;
        goto label_3ed410;
    }
    ctx->pc = 0x3ED408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ED40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED408u;
            // 0x3ed40c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3ED410u;
label_3ed410:
    // 0x3ed410: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3ed410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3ed414:
    // 0x3ed414: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3ed414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3ed418:
    // 0x3ed418: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ed418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3ed41c:
    // 0x3ed41c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ed41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3ed420:
    // 0x3ed420: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ed420u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ed424:
    // 0x3ed424: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_3ed428:
    if (ctx->pc == 0x3ED428u) {
        ctx->pc = 0x3ED428u;
            // 0x3ed428: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3ED42Cu;
        goto label_3ed42c;
    }
    ctx->pc = 0x3ED424u;
    {
        const bool branch_taken_0x3ed424 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED424u;
            // 0x3ed428: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed424) {
            ctx->pc = 0x3ED478u;
            goto label_3ed478;
        }
    }
    ctx->pc = 0x3ED42Cu;
label_3ed42c:
    // 0x3ed42c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3ed42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3ed430:
    // 0x3ed430: 0x24429e40  addiu       $v0, $v0, -0x61C0
    ctx->pc = 0x3ed430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942272));
label_3ed434:
    // 0x3ed434: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
label_3ed438:
    if (ctx->pc == 0x3ED438u) {
        ctx->pc = 0x3ED438u;
            // 0x3ed438: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3ED43Cu;
        goto label_3ed43c;
    }
    ctx->pc = 0x3ED434u;
    {
        const bool branch_taken_0x3ed434 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED434u;
            // 0x3ed438: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed434) {
            ctx->pc = 0x3ED460u;
            goto label_3ed460;
        }
    }
    ctx->pc = 0x3ED43Cu;
label_3ed43c:
    // 0x3ed43c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3ed43cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3ed440:
    // 0x3ed440: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x3ed440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_3ed444:
    // 0x3ed444: 0x24425710  addiu       $v0, $v0, 0x5710
    ctx->pc = 0x3ed444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22288));
label_3ed448:
    // 0x3ed448: 0x2484d370  addiu       $a0, $a0, -0x2C90
    ctx->pc = 0x3ed448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955888));
label_3ed44c:
    // 0x3ed44c: 0xc0ad6c4  jal         func_2B5B10
label_3ed450:
    if (ctx->pc == 0x3ED450u) {
        ctx->pc = 0x3ED450u;
            // 0x3ed450: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3ED454u;
        goto label_3ed454;
    }
    ctx->pc = 0x3ED44Cu;
    SET_GPR_U32(ctx, 31, 0x3ED454u);
    ctx->pc = 0x3ED450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED44Cu;
            // 0x3ed450: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B10u;
    if (runtime->hasFunction(0x2B5B10u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ED454u; }
        if (ctx->pc != 0x3ED454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B5B10_0x2b5b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ED454u; }
        if (ctx->pc != 0x3ED454u) { return; }
    }
    ctx->pc = 0x3ED454u;
label_3ed454:
    // 0x3ed454: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ed454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ed458:
    // 0x3ed458: 0xc0cd2cc  jal         func_334B30
label_3ed45c:
    if (ctx->pc == 0x3ED45Cu) {
        ctx->pc = 0x3ED45Cu;
            // 0x3ed45c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3ED460u;
        goto label_3ed460;
    }
    ctx->pc = 0x3ED458u;
    SET_GPR_U32(ctx, 31, 0x3ED460u);
    ctx->pc = 0x3ED45Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED458u;
            // 0x3ed45c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x334B30u;
    if (runtime->hasFunction(0x334B30u)) {
        auto targetFn = runtime->lookupFunction(0x334B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ED460u; }
        if (ctx->pc != 0x3ED460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00334B30_0x334b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ED460u; }
        if (ctx->pc != 0x3ED460u) { return; }
    }
    ctx->pc = 0x3ED460u;
label_3ed460:
    // 0x3ed460: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3ed460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3ed464:
    // 0x3ed464: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3ed464u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3ed468:
    // 0x3ed468: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3ed46c:
    if (ctx->pc == 0x3ED46Cu) {
        ctx->pc = 0x3ED46Cu;
            // 0x3ed46c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3ED470u;
        goto label_3ed470;
    }
    ctx->pc = 0x3ED468u;
    {
        const bool branch_taken_0x3ed468 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3ed468) {
            ctx->pc = 0x3ED46Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED468u;
            // 0x3ed46c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ED47Cu;
            goto label_3ed47c;
        }
    }
    ctx->pc = 0x3ED470u;
label_3ed470:
    // 0x3ed470: 0xc0400a8  jal         func_1002A0
label_3ed474:
    if (ctx->pc == 0x3ED474u) {
        ctx->pc = 0x3ED474u;
            // 0x3ed474: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3ED478u;
        goto label_3ed478;
    }
    ctx->pc = 0x3ED470u;
    SET_GPR_U32(ctx, 31, 0x3ED478u);
    ctx->pc = 0x3ED474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED470u;
            // 0x3ed474: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ED478u; }
        if (ctx->pc != 0x3ED478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ED478u; }
        if (ctx->pc != 0x3ED478u) { return; }
    }
    ctx->pc = 0x3ED478u;
label_3ed478:
    // 0x3ed478: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3ed478u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ed47c:
    // 0x3ed47c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3ed47cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3ed480:
    // 0x3ed480: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ed480u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ed484:
    // 0x3ed484: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ed484u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ed488:
    // 0x3ed488: 0x3e00008  jr          $ra
label_3ed48c:
    if (ctx->pc == 0x3ED48Cu) {
        ctx->pc = 0x3ED48Cu;
            // 0x3ed48c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3ED490u;
        goto label_3ed490;
    }
    ctx->pc = 0x3ED488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ED48Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED488u;
            // 0x3ed48c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3ED490u;
label_3ed490:
    // 0x3ed490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3ed490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3ed494:
    // 0x3ed494: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3ed494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3ed498:
    // 0x3ed498: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ed498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3ed49c:
    // 0x3ed49c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ed49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3ed4a0:
    // 0x3ed4a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ed4a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ed4a4:
    // 0x3ed4a4: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
label_3ed4a8:
    if (ctx->pc == 0x3ED4A8u) {
        ctx->pc = 0x3ED4A8u;
            // 0x3ed4a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3ED4ACu;
        goto label_3ed4ac;
    }
    ctx->pc = 0x3ED4A4u;
    {
        const bool branch_taken_0x3ed4a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED4A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED4A4u;
            // 0x3ed4a8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed4a4) {
            ctx->pc = 0x3ED4F8u;
            goto label_3ed4f8;
        }
    }
    ctx->pc = 0x3ED4ACu;
label_3ed4ac:
    // 0x3ed4ac: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3ed4acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3ed4b0:
    // 0x3ed4b0: 0x24429e80  addiu       $v0, $v0, -0x6180
    ctx->pc = 0x3ed4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942336));
label_3ed4b4:
    // 0x3ed4b4: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
label_3ed4b8:
    if (ctx->pc == 0x3ED4B8u) {
        ctx->pc = 0x3ED4B8u;
            // 0x3ed4b8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3ED4BCu;
        goto label_3ed4bc;
    }
    ctx->pc = 0x3ED4B4u;
    {
        const bool branch_taken_0x3ed4b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED4B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED4B4u;
            // 0x3ed4b8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed4b4) {
            ctx->pc = 0x3ED4E0u;
            goto label_3ed4e0;
        }
    }
    ctx->pc = 0x3ED4BCu;
label_3ed4bc:
    // 0x3ed4bc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3ed4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3ed4c0:
    // 0x3ed4c0: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x3ed4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_3ed4c4:
    // 0x3ed4c4: 0x24425680  addiu       $v0, $v0, 0x5680
    ctx->pc = 0x3ed4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22144));
label_3ed4c8:
    // 0x3ed4c8: 0x2484a1e8  addiu       $a0, $a0, -0x5E18
    ctx->pc = 0x3ed4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943208));
label_3ed4cc:
    // 0x3ed4cc: 0xc0ad6c4  jal         func_2B5B10
label_3ed4d0:
    if (ctx->pc == 0x3ED4D0u) {
        ctx->pc = 0x3ED4D0u;
            // 0x3ed4d0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3ED4D4u;
        goto label_3ed4d4;
    }
    ctx->pc = 0x3ED4CCu;
    SET_GPR_U32(ctx, 31, 0x3ED4D4u);
    ctx->pc = 0x3ED4D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED4CCu;
            // 0x3ed4d0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B10u;
    if (runtime->hasFunction(0x2B5B10u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ED4D4u; }
        if (ctx->pc != 0x3ED4D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B5B10_0x2b5b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ED4D4u; }
        if (ctx->pc != 0x3ED4D4u) { return; }
    }
    ctx->pc = 0x3ED4D4u;
label_3ed4d4:
    // 0x3ed4d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ed4d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ed4d8:
    // 0x3ed4d8: 0xc075bf8  jal         func_1D6FE0
label_3ed4dc:
    if (ctx->pc == 0x3ED4DCu) {
        ctx->pc = 0x3ED4DCu;
            // 0x3ed4dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3ED4E0u;
        goto label_3ed4e0;
    }
    ctx->pc = 0x3ED4D8u;
    SET_GPR_U32(ctx, 31, 0x3ED4E0u);
    ctx->pc = 0x3ED4DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED4D8u;
            // 0x3ed4dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ED4E0u; }
        if (ctx->pc != 0x3ED4E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ED4E0u; }
        if (ctx->pc != 0x3ED4E0u) { return; }
    }
    ctx->pc = 0x3ED4E0u;
label_3ed4e0:
    // 0x3ed4e0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3ed4e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3ed4e4:
    // 0x3ed4e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3ed4e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3ed4e8:
    // 0x3ed4e8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3ed4ec:
    if (ctx->pc == 0x3ED4ECu) {
        ctx->pc = 0x3ED4ECu;
            // 0x3ed4ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3ED4F0u;
        goto label_3ed4f0;
    }
    ctx->pc = 0x3ED4E8u;
    {
        const bool branch_taken_0x3ed4e8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3ed4e8) {
            ctx->pc = 0x3ED4ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED4E8u;
            // 0x3ed4ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ED4FCu;
            goto label_3ed4fc;
        }
    }
    ctx->pc = 0x3ED4F0u;
label_3ed4f0:
    // 0x3ed4f0: 0xc0400a8  jal         func_1002A0
label_3ed4f4:
    if (ctx->pc == 0x3ED4F4u) {
        ctx->pc = 0x3ED4F4u;
            // 0x3ed4f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3ED4F8u;
        goto label_3ed4f8;
    }
    ctx->pc = 0x3ED4F0u;
    SET_GPR_U32(ctx, 31, 0x3ED4F8u);
    ctx->pc = 0x3ED4F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED4F0u;
            // 0x3ed4f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ED4F8u; }
        if (ctx->pc != 0x3ED4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ED4F8u; }
        if (ctx->pc != 0x3ED4F8u) { return; }
    }
    ctx->pc = 0x3ED4F8u;
label_3ed4f8:
    // 0x3ed4f8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3ed4f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ed4fc:
    // 0x3ed4fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3ed4fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3ed500:
    // 0x3ed500: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ed500u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ed504:
    // 0x3ed504: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ed504u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ed508:
    // 0x3ed508: 0x3e00008  jr          $ra
label_3ed50c:
    if (ctx->pc == 0x3ED50Cu) {
        ctx->pc = 0x3ED50Cu;
            // 0x3ed50c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3ED510u;
        goto label_3ed510;
    }
    ctx->pc = 0x3ED508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ED50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED508u;
            // 0x3ed50c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3ED510u;
label_3ed510:
    // 0x3ed510: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3ed510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3ed514:
    // 0x3ed514: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3ed514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3ed518:
    // 0x3ed518: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3ed518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3ed51c:
    // 0x3ed51c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3ed51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3ed520:
    // 0x3ed520: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ed520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3ed524:
    // 0x3ed524: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ed524u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ed528:
    // 0x3ed528: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3ed528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3ed52c:
    // 0x3ed52c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_3ed530:
    if (ctx->pc == 0x3ED530u) {
        ctx->pc = 0x3ED530u;
            // 0x3ed530: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3ED534u;
        goto label_3ed534;
    }
    ctx->pc = 0x3ED52Cu;
    {
        const bool branch_taken_0x3ed52c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED52Cu;
            // 0x3ed530: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed52c) {
            ctx->pc = 0x3ED540u;
            goto label_3ed540;
        }
    }
    ctx->pc = 0x3ED534u;
label_3ed534:
    // 0x3ed534: 0x90630c76  lbu         $v1, 0xC76($v1)
    ctx->pc = 0x3ed534u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3190)));
label_3ed538:
    // 0x3ed538: 0x5460002b  bnel        $v1, $zero, . + 4 + (0x2B << 2)
label_3ed53c:
    if (ctx->pc == 0x3ED53Cu) {
        ctx->pc = 0x3ED53Cu;
            // 0x3ed53c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x3ED540u;
        goto label_3ed540;
    }
    ctx->pc = 0x3ED538u;
    {
        const bool branch_taken_0x3ed538 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ed538) {
            ctx->pc = 0x3ED53Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED538u;
            // 0x3ed53c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ED5E8u;
            goto label_3ed5e8;
        }
    }
    ctx->pc = 0x3ED540u;
label_3ed540:
    // 0x3ed540: 0x92240010  lbu         $a0, 0x10($s1)
    ctx->pc = 0x3ed540u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
label_3ed544:
    // 0x3ed544: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3ed544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3ed548:
    // 0x3ed548: 0x14830026  bne         $a0, $v1, . + 4 + (0x26 << 2)
label_3ed54c:
    if (ctx->pc == 0x3ED54Cu) {
        ctx->pc = 0x3ED550u;
        goto label_3ed550;
    }
    ctx->pc = 0x3ED548u;
    {
        const bool branch_taken_0x3ed548 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3ed548) {
            ctx->pc = 0x3ED5E4u;
            goto label_3ed5e4;
        }
    }
    ctx->pc = 0x3ED550u;
label_3ed550:
    // 0x3ed550: 0x9223007c  lbu         $v1, 0x7C($s1)
    ctx->pc = 0x3ed550u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 124)));
label_3ed554:
    // 0x3ed554: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3ed554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3ed558:
    // 0x3ed558: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
label_3ed55c:
    if (ctx->pc == 0x3ED55Cu) {
        ctx->pc = 0x3ED560u;
        goto label_3ed560;
    }
    ctx->pc = 0x3ED558u;
    {
        const bool branch_taken_0x3ed558 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ed558) {
            ctx->pc = 0x3ED5C0u;
            goto label_3ed5c0;
        }
    }
    ctx->pc = 0x3ED560u;
label_3ed560:
    // 0x3ed560: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3ed560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3ed564:
    // 0x3ed564: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_3ed568:
    if (ctx->pc == 0x3ED568u) {
        ctx->pc = 0x3ED56Cu;
        goto label_3ed56c;
    }
    ctx->pc = 0x3ED564u;
    {
        const bool branch_taken_0x3ed564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ed564) {
            ctx->pc = 0x3ED5B0u;
            goto label_3ed5b0;
        }
    }
    ctx->pc = 0x3ED56Cu;
label_3ed56c:
    // 0x3ed56c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3ed56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3ed570:
    // 0x3ed570: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_3ed574:
    if (ctx->pc == 0x3ED574u) {
        ctx->pc = 0x3ED578u;
        goto label_3ed578;
    }
    ctx->pc = 0x3ED570u;
    {
        const bool branch_taken_0x3ed570 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ed570) {
            ctx->pc = 0x3ED590u;
            goto label_3ed590;
        }
    }
    ctx->pc = 0x3ED578u;
label_3ed578:
    // 0x3ed578: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3ed578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ed57c:
    // 0x3ed57c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_3ed580:
    if (ctx->pc == 0x3ED580u) {
        ctx->pc = 0x3ED584u;
        goto label_3ed584;
    }
    ctx->pc = 0x3ED57Cu;
    {
        const bool branch_taken_0x3ed57c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ed57c) {
            ctx->pc = 0x3ED590u;
            goto label_3ed590;
        }
    }
    ctx->pc = 0x3ED584u;
label_3ed584:
    // 0x3ed584: 0x1000000e  b           . + 4 + (0xE << 2)
label_3ed588:
    if (ctx->pc == 0x3ED588u) {
        ctx->pc = 0x3ED58Cu;
        goto label_3ed58c;
    }
    ctx->pc = 0x3ED584u;
    {
        const bool branch_taken_0x3ed584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ed584) {
            ctx->pc = 0x3ED5C0u;
            goto label_3ed5c0;
        }
    }
    ctx->pc = 0x3ED58Cu;
label_3ed58c:
    // 0x3ed58c: 0x0  nop
    ctx->pc = 0x3ed58cu;
    // NOP
label_3ed590:
    // 0x3ed590: 0x9226007d  lbu         $a2, 0x7D($s1)
    ctx->pc = 0x3ed590u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 125)));
label_3ed594:
    // 0x3ed594: 0xc62c0088  lwc1        $f12, 0x88($s1)
    ctx->pc = 0x3ed594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3ed598:
    // 0x3ed598: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ed598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ed59c:
    // 0x3ed59c: 0xc0d0b3c  jal         func_342CF0
label_3ed5a0:
    if (ctx->pc == 0x3ED5A0u) {
        ctx->pc = 0x3ED5A0u;
            // 0x3ed5a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3ED5A4u;
        goto label_3ed5a4;
    }
    ctx->pc = 0x3ED59Cu;
    SET_GPR_U32(ctx, 31, 0x3ED5A4u);
    ctx->pc = 0x3ED5A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED59Cu;
            // 0x3ed5a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x342CF0u;
    if (runtime->hasFunction(0x342CF0u)) {
        auto targetFn = runtime->lookupFunction(0x342CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ED5A4u; }
        if (ctx->pc != 0x3ED5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00342CF0_0x342cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ED5A4u; }
        if (ctx->pc != 0x3ED5A4u) { return; }
    }
    ctx->pc = 0x3ED5A4u;
label_3ed5a4:
    // 0x3ed5a4: 0x10000006  b           . + 4 + (0x6 << 2)
label_3ed5a8:
    if (ctx->pc == 0x3ED5A8u) {
        ctx->pc = 0x3ED5ACu;
        goto label_3ed5ac;
    }
    ctx->pc = 0x3ED5A4u;
    {
        const bool branch_taken_0x3ed5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ed5a4) {
            ctx->pc = 0x3ED5C0u;
            goto label_3ed5c0;
        }
    }
    ctx->pc = 0x3ED5ACu;
label_3ed5ac:
    // 0x3ed5ac: 0x0  nop
    ctx->pc = 0x3ed5acu;
    // NOP
label_3ed5b0:
    // 0x3ed5b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ed5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ed5b4:
    // 0x3ed5b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ed5b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ed5b8:
    // 0x3ed5b8: 0xc0d091c  jal         func_342470
label_3ed5bc:
    if (ctx->pc == 0x3ED5BCu) {
        ctx->pc = 0x3ED5BCu;
            // 0x3ed5bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3ED5C0u;
        goto label_3ed5c0;
    }
    ctx->pc = 0x3ED5B8u;
    SET_GPR_U32(ctx, 31, 0x3ED5C0u);
    ctx->pc = 0x3ED5BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED5B8u;
            // 0x3ed5bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x342470u;
    if (runtime->hasFunction(0x342470u)) {
        auto targetFn = runtime->lookupFunction(0x342470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ED5C0u; }
        if (ctx->pc != 0x3ED5C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00342470_0x342470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ED5C0u; }
        if (ctx->pc != 0x3ED5C0u) { return; }
    }
    ctx->pc = 0x3ED5C0u;
label_3ed5c0:
    // 0x3ed5c0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3ed5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3ed5c4:
    // 0x3ed5c4: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x3ed5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_3ed5c8:
    // 0x3ed5c8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3ed5c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3ed5cc:
    // 0x3ed5cc: 0x8042007a  lb          $v0, 0x7A($v0)
    ctx->pc = 0x3ed5ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 122)));
label_3ed5d0:
    // 0x3ed5d0: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x3ed5d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3ed5d4:
    // 0x3ed5d4: 0x5440ffdf  bnel        $v0, $zero, . + 4 + (-0x21 << 2)
label_3ed5d8:
    if (ctx->pc == 0x3ED5D8u) {
        ctx->pc = 0x3ED5D8u;
            // 0x3ed5d8: 0x9223007c  lbu         $v1, 0x7C($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 124)));
        ctx->pc = 0x3ED5DCu;
        goto label_3ed5dc;
    }
    ctx->pc = 0x3ED5D4u;
    {
        const bool branch_taken_0x3ed5d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ed5d4) {
            ctx->pc = 0x3ED5D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED5D4u;
            // 0x3ed5d8: 0x9223007c  lbu         $v1, 0x7C($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 124)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ED554u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ed554;
        }
    }
    ctx->pc = 0x3ED5DCu;
label_3ed5dc:
    // 0x3ed5dc: 0xc0d0e3c  jal         func_3438F0
label_3ed5e0:
    if (ctx->pc == 0x3ED5E0u) {
        ctx->pc = 0x3ED5E0u;
            // 0x3ed5e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3ED5E4u;
        goto label_3ed5e4;
    }
    ctx->pc = 0x3ED5DCu;
    SET_GPR_U32(ctx, 31, 0x3ED5E4u);
    ctx->pc = 0x3ED5E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED5DCu;
            // 0x3ed5e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3438F0u;
    if (runtime->hasFunction(0x3438F0u)) {
        auto targetFn = runtime->lookupFunction(0x3438F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ED5E4u; }
        if (ctx->pc != 0x3ED5E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003438F0_0x3438f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3ED5E4u; }
        if (ctx->pc != 0x3ED5E4u) { return; }
    }
    ctx->pc = 0x3ED5E4u;
label_3ed5e4:
    // 0x3ed5e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3ed5e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3ed5e8:
    // 0x3ed5e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3ed5e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ed5ec:
    // 0x3ed5ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ed5ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ed5f0:
    // 0x3ed5f0: 0x3e00008  jr          $ra
label_3ed5f4:
    if (ctx->pc == 0x3ED5F4u) {
        ctx->pc = 0x3ED5F4u;
            // 0x3ed5f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3ED5F8u;
        goto label_3ed5f8;
    }
    ctx->pc = 0x3ED5F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ED5F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED5F0u;
            // 0x3ed5f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3ED5F8u;
label_3ed5f8:
    // 0x3ed5f8: 0x0  nop
    ctx->pc = 0x3ed5f8u;
    // NOP
label_3ed5fc:
    // 0x3ed5fc: 0x0  nop
    ctx->pc = 0x3ed5fcu;
    // NOP
label_3ed600:
    // 0x3ed600: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ed600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3ed604:
    // 0x3ed604: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3ed604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3ed608:
    // 0x3ed608: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3ed608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3ed60c:
    // 0x3ed60c: 0x8c8300a0  lw          $v1, 0xA0($a0)
    ctx->pc = 0x3ed60cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
label_3ed610:
    // 0x3ed610: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_3ed614:
    if (ctx->pc == 0x3ED614u) {
        ctx->pc = 0x3ED614u;
            // 0x3ed614: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3ED618u;
        goto label_3ed618;
    }
    ctx->pc = 0x3ED610u;
    {
        const bool branch_taken_0x3ed610 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED610u;
            // 0x3ed614: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed610) {
            ctx->pc = 0x3ED63Cu;
            goto label_3ed63c;
        }
    }
    ctx->pc = 0x3ED618u;
label_3ed618:
    // 0x3ed618: 0x8c640790  lw          $a0, 0x790($v1)
    ctx->pc = 0x3ed618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1936)));
label_3ed61c:
    // 0x3ed61c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x3ed61cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_3ed620:
    // 0x3ed620: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3ed620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3ed624:
    // 0x3ed624: 0x546000a3  bnel        $v1, $zero, . + 4 + (0xA3 << 2)
label_3ed628:
    if (ctx->pc == 0x3ED628u) {
        ctx->pc = 0x3ED628u;
            // 0x3ed628: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x3ED62Cu;
        goto label_3ed62c;
    }
    ctx->pc = 0x3ED624u;
    {
        const bool branch_taken_0x3ed624 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ed624) {
            ctx->pc = 0x3ED628u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED624u;
            // 0x3ed628: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ED8B4u;
            goto label_3ed8b4;
        }
    }
    ctx->pc = 0x3ED62Cu;
label_3ed62c:
    // 0x3ed62c: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x3ed62cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
label_3ed630:
    // 0x3ed630: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3ed630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_3ed634:
    // 0x3ed634: 0x1460009e  bnez        $v1, . + 4 + (0x9E << 2)
label_3ed638:
    if (ctx->pc == 0x3ED638u) {
        ctx->pc = 0x3ED63Cu;
        goto label_3ed63c;
    }
    ctx->pc = 0x3ED634u;
    {
        const bool branch_taken_0x3ed634 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ed634) {
            ctx->pc = 0x3ED8B0u;
            goto label_3ed8b0;
        }
    }
    ctx->pc = 0x3ED63Cu;
label_3ed63c:
    // 0x3ed63c: 0x92040010  lbu         $a0, 0x10($s0)
    ctx->pc = 0x3ed63cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
label_3ed640:
    // 0x3ed640: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ed640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ed644:
    // 0x3ed644: 0x1083009a  beq         $a0, $v1, . + 4 + (0x9A << 2)
label_3ed648:
    if (ctx->pc == 0x3ED648u) {
        ctx->pc = 0x3ED64Cu;
        goto label_3ed64c;
    }
    ctx->pc = 0x3ED644u;
    {
        const bool branch_taken_0x3ed644 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ed644) {
            ctx->pc = 0x3ED8B0u;
            goto label_3ed8b0;
        }
    }
    ctx->pc = 0x3ED64Cu;
label_3ed64c:
    // 0x3ed64c: 0x10800098  beqz        $a0, . + 4 + (0x98 << 2)
label_3ed650:
    if (ctx->pc == 0x3ED650u) {
        ctx->pc = 0x3ED654u;
        goto label_3ed654;
    }
    ctx->pc = 0x3ED64Cu;
    {
        const bool branch_taken_0x3ed64c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ed64c) {
            ctx->pc = 0x3ED8B0u;
            goto label_3ed8b0;
        }
    }
    ctx->pc = 0x3ED654u;
label_3ed654:
    // 0x3ed654: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3ed654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3ed658:
    // 0x3ed658: 0x50830015  beql        $a0, $v1, . + 4 + (0x15 << 2)
label_3ed65c:
    if (ctx->pc == 0x3ED65Cu) {
        ctx->pc = 0x3ED65Cu;
            // 0x3ed65c: 0x9203009c  lbu         $v1, 0x9C($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 156)));
        ctx->pc = 0x3ED660u;
        goto label_3ed660;
    }
    ctx->pc = 0x3ED658u;
    {
        const bool branch_taken_0x3ed658 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ed658) {
            ctx->pc = 0x3ED65Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED658u;
            // 0x3ed65c: 0x9203009c  lbu         $v1, 0x9C($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 156)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ED6B0u;
            goto label_3ed6b0;
        }
    }
    ctx->pc = 0x3ED660u;
label_3ed660:
    // 0x3ed660: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3ed660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3ed664:
    // 0x3ed664: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
label_3ed668:
    if (ctx->pc == 0x3ED668u) {
        ctx->pc = 0x3ED668u;
            // 0x3ed668: 0xc6010084  lwc1        $f1, 0x84($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x3ED66Cu;
        goto label_3ed66c;
    }
    ctx->pc = 0x3ED664u;
    {
        const bool branch_taken_0x3ed664 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ed664) {
            ctx->pc = 0x3ED668u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED664u;
            // 0x3ed668: 0xc6010084  lwc1        $f1, 0x84($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ED674u;
            goto label_3ed674;
        }
    }
    ctx->pc = 0x3ED66Cu;
label_3ed66c:
    // 0x3ed66c: 0x10000090  b           . + 4 + (0x90 << 2)
label_3ed670:
    if (ctx->pc == 0x3ED670u) {
        ctx->pc = 0x3ED674u;
        goto label_3ed674;
    }
    ctx->pc = 0x3ED66Cu;
    {
        const bool branch_taken_0x3ed66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ed66c) {
            ctx->pc = 0x3ED8B0u;
            goto label_3ed8b0;
        }
    }
    ctx->pc = 0x3ED674u;
label_3ed674:
    // 0x3ed674: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3ed674u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ed678:
    // 0x3ed678: 0x0  nop
    ctx->pc = 0x3ed678u;
    // NOP
label_3ed67c:
    // 0x3ed67c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3ed67cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3ed680:
    // 0x3ed680: 0x45030007  bc1tl       . + 4 + (0x7 << 2)
label_3ed684:
    if (ctx->pc == 0x3ED684u) {
        ctx->pc = 0x3ED684u;
            // 0x3ed684: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x3ED688u;
        goto label_3ed688;
    }
    ctx->pc = 0x3ED680u;
    {
        const bool branch_taken_0x3ed680 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ed680) {
            ctx->pc = 0x3ED684u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED680u;
            // 0x3ed684: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ED6A0u;
            goto label_3ed6a0;
        }
    }
    ctx->pc = 0x3ED688u;
label_3ed688:
    // 0x3ed688: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3ed688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3ed68c:
    // 0x3ed68c: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3ed68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3ed690:
    // 0x3ed690: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x3ed690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ed694:
    // 0x3ed694: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3ed694u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3ed698:
    // 0x3ed698: 0x10000085  b           . + 4 + (0x85 << 2)
label_3ed69c:
    if (ctx->pc == 0x3ED69Cu) {
        ctx->pc = 0x3ED69Cu;
            // 0x3ed69c: 0xe6000084  swc1        $f0, 0x84($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
        ctx->pc = 0x3ED6A0u;
        goto label_3ed6a0;
    }
    ctx->pc = 0x3ED698u;
    {
        const bool branch_taken_0x3ed698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED698u;
            // 0x3ed69c: 0xe6000084  swc1        $f0, 0x84($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed698) {
            ctx->pc = 0x3ED8B0u;
            goto label_3ed8b0;
        }
    }
    ctx->pc = 0x3ED6A0u;
label_3ed6a0:
    // 0x3ed6a0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3ed6a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3ed6a4:
    // 0x3ed6a4: 0x320f809  jalr        $t9
label_3ed6a8:
    if (ctx->pc == 0x3ED6A8u) {
        ctx->pc = 0x3ED6A8u;
            // 0x3ed6a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3ED6ACu;
        goto label_3ed6ac;
    }
    ctx->pc = 0x3ED6A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3ED6ACu);
        ctx->pc = 0x3ED6A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED6A4u;
            // 0x3ed6a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3ED6ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3ED6ACu; }
            if (ctx->pc != 0x3ED6ACu) { return; }
        }
        }
    }
    ctx->pc = 0x3ED6ACu;
label_3ed6ac:
    // 0x3ed6ac: 0x9203009c  lbu         $v1, 0x9C($s0)
    ctx->pc = 0x3ed6acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 156)));
label_3ed6b0:
    // 0x3ed6b0: 0x50600012  beql        $v1, $zero, . + 4 + (0x12 << 2)
label_3ed6b4:
    if (ctx->pc == 0x3ED6B4u) {
        ctx->pc = 0x3ED6B4u;
            // 0x3ed6b4: 0x9204007c  lbu         $a0, 0x7C($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 124)));
        ctx->pc = 0x3ED6B8u;
        goto label_3ed6b8;
    }
    ctx->pc = 0x3ED6B0u;
    {
        const bool branch_taken_0x3ed6b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ed6b0) {
            ctx->pc = 0x3ED6B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED6B0u;
            // 0x3ed6b4: 0x9204007c  lbu         $a0, 0x7C($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 124)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ED6FCu;
            goto label_3ed6fc;
        }
    }
    ctx->pc = 0x3ED6B8u;
label_3ed6b8:
    // 0x3ed6b8: 0x8603009e  lh          $v1, 0x9E($s0)
    ctx->pc = 0x3ed6b8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 158)));
label_3ed6bc:
    // 0x3ed6bc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3ed6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3ed6c0:
    // 0x3ed6c0: 0xa603009e  sh          $v1, 0x9E($s0)
    ctx->pc = 0x3ed6c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 158), (uint16_t)GPR_U32(ctx, 3));
label_3ed6c4:
    // 0x3ed6c4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x3ed6c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_3ed6c8:
    // 0x3ed6c8: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x3ed6c8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_3ed6cc:
    // 0x3ed6cc: 0x1c60000a  bgtz        $v1, . + 4 + (0xA << 2)
label_3ed6d0:
    if (ctx->pc == 0x3ED6D0u) {
        ctx->pc = 0x3ED6D4u;
        goto label_3ed6d4;
    }
    ctx->pc = 0x3ED6CCu;
    {
        const bool branch_taken_0x3ed6cc = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x3ed6cc) {
            ctx->pc = 0x3ED6F8u;
            goto label_3ed6f8;
        }
    }
    ctx->pc = 0x3ED6D4u;
label_3ed6d4:
    // 0x3ed6d4: 0xa600009e  sh          $zero, 0x9E($s0)
    ctx->pc = 0x3ed6d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 158), (uint16_t)GPR_U32(ctx, 0));
label_3ed6d8:
    // 0x3ed6d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ed6d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ed6dc:
    // 0x3ed6dc: 0xa200009c  sb          $zero, 0x9C($s0)
    ctx->pc = 0x3ed6dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 156), (uint8_t)GPR_U32(ctx, 0));
label_3ed6e0:
    // 0x3ed6e0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3ed6e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ed6e4:
    // 0x3ed6e4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3ed6e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3ed6e8:
    // 0x3ed6e8: 0x320f809  jalr        $t9
label_3ed6ec:
    if (ctx->pc == 0x3ED6ECu) {
        ctx->pc = 0x3ED6ECu;
            // 0x3ed6ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3ED6F0u;
        goto label_3ed6f0;
    }
    ctx->pc = 0x3ED6E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3ED6F0u);
        ctx->pc = 0x3ED6ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED6E8u;
            // 0x3ed6ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3ED6F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3ED6F0u; }
            if (ctx->pc != 0x3ED6F0u) { return; }
        }
        }
    }
    ctx->pc = 0x3ED6F0u;
label_3ed6f0:
    // 0x3ed6f0: 0x1000006f  b           . + 4 + (0x6F << 2)
label_3ed6f4:
    if (ctx->pc == 0x3ED6F4u) {
        ctx->pc = 0x3ED6F8u;
        goto label_3ed6f8;
    }
    ctx->pc = 0x3ED6F0u;
    {
        const bool branch_taken_0x3ed6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ed6f0) {
            ctx->pc = 0x3ED8B0u;
            goto label_3ed8b0;
        }
    }
    ctx->pc = 0x3ED6F8u;
label_3ed6f8:
    // 0x3ed6f8: 0x9204007c  lbu         $a0, 0x7C($s0)
    ctx->pc = 0x3ed6f8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 124)));
label_3ed6fc:
    // 0x3ed6fc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3ed6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3ed700:
    // 0x3ed700: 0x1083006b  beq         $a0, $v1, . + 4 + (0x6B << 2)
label_3ed704:
    if (ctx->pc == 0x3ED704u) {
        ctx->pc = 0x3ED708u;
        goto label_3ed708;
    }
    ctx->pc = 0x3ED700u;
    {
        const bool branch_taken_0x3ed700 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ed700) {
            ctx->pc = 0x3ED8B0u;
            goto label_3ed8b0;
        }
    }
    ctx->pc = 0x3ED708u;
label_3ed708:
    // 0x3ed708: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3ed708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3ed70c:
    // 0x3ed70c: 0x10830029  beq         $a0, $v1, . + 4 + (0x29 << 2)
label_3ed710:
    if (ctx->pc == 0x3ED710u) {
        ctx->pc = 0x3ED714u;
        goto label_3ed714;
    }
    ctx->pc = 0x3ED70Cu;
    {
        const bool branch_taken_0x3ed70c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ed70c) {
            ctx->pc = 0x3ED7B4u;
            goto label_3ed7b4;
        }
    }
    ctx->pc = 0x3ED714u;
label_3ed714:
    // 0x3ed714: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3ed714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3ed718:
    // 0x3ed718: 0x50830006  beql        $a0, $v1, . + 4 + (0x6 << 2)
label_3ed71c:
    if (ctx->pc == 0x3ED71Cu) {
        ctx->pc = 0x3ED71Cu;
            // 0x3ed71c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3ED720u;
        goto label_3ed720;
    }
    ctx->pc = 0x3ED718u;
    {
        const bool branch_taken_0x3ed718 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ed718) {
            ctx->pc = 0x3ED71Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED718u;
            // 0x3ed71c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ED734u;
            goto label_3ed734;
        }
    }
    ctx->pc = 0x3ED720u;
label_3ed720:
    // 0x3ed720: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ed720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ed724:
    // 0x3ed724: 0x10830062  beq         $a0, $v1, . + 4 + (0x62 << 2)
label_3ed728:
    if (ctx->pc == 0x3ED728u) {
        ctx->pc = 0x3ED72Cu;
        goto label_3ed72c;
    }
    ctx->pc = 0x3ED724u;
    {
        const bool branch_taken_0x3ed724 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3ed724) {
            ctx->pc = 0x3ED8B0u;
            goto label_3ed8b0;
        }
    }
    ctx->pc = 0x3ED72Cu;
label_3ed72c:
    // 0x3ed72c: 0x10000060  b           . + 4 + (0x60 << 2)
label_3ed730:
    if (ctx->pc == 0x3ED730u) {
        ctx->pc = 0x3ED734u;
        goto label_3ed734;
    }
    ctx->pc = 0x3ED72Cu;
    {
        const bool branch_taken_0x3ed72c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ed72c) {
            ctx->pc = 0x3ED8B0u;
            goto label_3ed8b0;
        }
    }
    ctx->pc = 0x3ED734u;
label_3ed734:
    // 0x3ed734: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ed734u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ed738:
    // 0x3ed738: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3ed738u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ed73c:
    // 0x3ed73c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x3ed73cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_3ed740:
    // 0x3ed740: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3ed740u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3ed744:
    // 0x3ed744: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3ed744u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3ed748:
    // 0x3ed748: 0xc4c20054  lwc1        $f2, 0x54($a2)
    ctx->pc = 0x3ed748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3ed74c:
    // 0x3ed74c: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x3ed74cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3ed750:
    // 0x3ed750: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_3ed754:
    if (ctx->pc == 0x3ED754u) {
        ctx->pc = 0x3ED758u;
        goto label_3ed758;
    }
    ctx->pc = 0x3ED750u;
    {
        const bool branch_taken_0x3ed750 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ed750) {
            ctx->pc = 0x3ED770u;
            goto label_3ed770;
        }
    }
    ctx->pc = 0x3ED758u;
label_3ed758:
    // 0x3ed758: 0x8c858a08  lw          $a1, -0x75F8($a0)
    ctx->pc = 0x3ed758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294937096)));
label_3ed75c:
    // 0x3ed75c: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x3ed75cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ed760:
    // 0x3ed760: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x3ed760u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_3ed764:
    // 0x3ed764: 0x10000004  b           . + 4 + (0x4 << 2)
label_3ed768:
    if (ctx->pc == 0x3ED768u) {
        ctx->pc = 0x3ED768u;
            // 0x3ed768: 0xe4c00054  swc1        $f0, 0x54($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 84), bits); }
        ctx->pc = 0x3ED76Cu;
        goto label_3ed76c;
    }
    ctx->pc = 0x3ED764u;
    {
        const bool branch_taken_0x3ed764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED764u;
            // 0x3ed768: 0xe4c00054  swc1        $f0, 0x54($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed764) {
            ctx->pc = 0x3ED778u;
            goto label_3ed778;
        }
    }
    ctx->pc = 0x3ED76Cu;
label_3ed76c:
    // 0x3ed76c: 0x0  nop
    ctx->pc = 0x3ed76cu;
    // NOP
label_3ed770:
    // 0x3ed770: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x3ed770u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3ed774:
    // 0x3ed774: 0x0  nop
    ctx->pc = 0x3ed774u;
    // NOP
label_3ed778:
    // 0x3ed778: 0x8c658a08  lw          $a1, -0x75F8($v1)
    ctx->pc = 0x3ed778u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3ed77c:
    // 0x3ed77c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3ed77cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3ed780:
    // 0x3ed780: 0x80a5007a  lb          $a1, 0x7A($a1)
    ctx->pc = 0x3ed780u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 122)));
label_3ed784:
    // 0x3ed784: 0x105282b  sltu        $a1, $t0, $a1
    ctx->pc = 0x3ed784u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_3ed788:
    // 0x3ed788: 0x14a0ffef  bnez        $a1, . + 4 + (-0x11 << 2)
label_3ed78c:
    if (ctx->pc == 0x3ED78Cu) {
        ctx->pc = 0x3ED78Cu;
            // 0x3ed78c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->pc = 0x3ED790u;
        goto label_3ed790;
    }
    ctx->pc = 0x3ED788u;
    {
        const bool branch_taken_0x3ed788 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ED78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED788u;
            // 0x3ed78c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed788) {
            ctx->pc = 0x3ED748u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3ed748;
        }
    }
    ctx->pc = 0x3ED790u;
label_3ed790:
    // 0x3ed790: 0x14e80047  bne         $a3, $t0, . + 4 + (0x47 << 2)
label_3ed794:
    if (ctx->pc == 0x3ED794u) {
        ctx->pc = 0x3ED798u;
        goto label_3ed798;
    }
    ctx->pc = 0x3ED790u;
    {
        const bool branch_taken_0x3ed790 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 8));
        if (branch_taken_0x3ed790) {
            ctx->pc = 0x3ED8B0u;
            goto label_3ed8b0;
        }
    }
    ctx->pc = 0x3ED798u;
label_3ed798:
    // 0x3ed798: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x3ed798u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ed79c:
    // 0x3ed79c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ed79cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ed7a0:
    // 0x3ed7a0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3ed7a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3ed7a4:
    // 0x3ed7a4: 0x320f809  jalr        $t9
label_3ed7a8:
    if (ctx->pc == 0x3ED7A8u) {
        ctx->pc = 0x3ED7A8u;
            // 0x3ed7a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3ED7ACu;
        goto label_3ed7ac;
    }
    ctx->pc = 0x3ED7A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3ED7ACu);
        ctx->pc = 0x3ED7A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED7A4u;
            // 0x3ed7a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3ED7ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3ED7ACu; }
            if (ctx->pc != 0x3ED7ACu) { return; }
        }
        }
    }
    ctx->pc = 0x3ED7ACu;
label_3ed7ac:
    // 0x3ed7ac: 0x10000040  b           . + 4 + (0x40 << 2)
label_3ed7b0:
    if (ctx->pc == 0x3ED7B0u) {
        ctx->pc = 0x3ED7B4u;
        goto label_3ed7b4;
    }
    ctx->pc = 0x3ED7ACu;
    {
        const bool branch_taken_0x3ed7ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ed7ac) {
            ctx->pc = 0x3ED8B0u;
            goto label_3ed8b0;
        }
    }
    ctx->pc = 0x3ED7B4u;
label_3ed7b4:
    // 0x3ed7b4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3ed7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3ed7b8:
    // 0x3ed7b8: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3ed7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3ed7bc:
    // 0x3ed7bc: 0xc600008c  lwc1        $f0, 0x8C($s0)
    ctx->pc = 0x3ed7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ed7c0:
    // 0x3ed7c0: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x3ed7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3ed7c4:
    // 0x3ed7c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3ed7c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3ed7c8:
    // 0x3ed7c8: 0xe600008c  swc1        $f0, 0x8C($s0)
    ctx->pc = 0x3ed7c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
label_3ed7cc:
    // 0x3ed7cc: 0xc6010090  lwc1        $f1, 0x90($s0)
    ctx->pc = 0x3ed7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3ed7d0:
    // 0x3ed7d0: 0xc600008c  lwc1        $f0, 0x8C($s0)
    ctx->pc = 0x3ed7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ed7d4:
    // 0x3ed7d4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3ed7d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3ed7d8:
    // 0x3ed7d8: 0x45030003  bc1tl       . + 4 + (0x3 << 2)
label_3ed7dc:
    if (ctx->pc == 0x3ED7DCu) {
        ctx->pc = 0x3ED7DCu;
            // 0x3ed7dc: 0x9205007e  lbu         $a1, 0x7E($s0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 126)));
        ctx->pc = 0x3ED7E0u;
        goto label_3ed7e0;
    }
    ctx->pc = 0x3ED7D8u;
    {
        const bool branch_taken_0x3ed7d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ed7d8) {
            ctx->pc = 0x3ED7DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED7D8u;
            // 0x3ed7dc: 0x9205007e  lbu         $a1, 0x7E($s0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 126)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ED7E8u;
            goto label_3ed7e8;
        }
    }
    ctx->pc = 0x3ED7E0u;
label_3ed7e0:
    // 0x3ed7e0: 0xe601008c  swc1        $f1, 0x8C($s0)
    ctx->pc = 0x3ed7e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
label_3ed7e4:
    // 0x3ed7e4: 0x9205007e  lbu         $a1, 0x7E($s0)
    ctx->pc = 0x3ed7e4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 126)));
label_3ed7e8:
    // 0x3ed7e8: 0xc601008c  lwc1        $f1, 0x8C($s0)
    ctx->pc = 0x3ed7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3ed7ec:
    // 0x3ed7ec: 0x9203007f  lbu         $v1, 0x7F($s0)
    ctx->pc = 0x3ed7ecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 127)));
label_3ed7f0:
    // 0x3ed7f0: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x3ed7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ed7f4:
    // 0x3ed7f4: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x3ed7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3ed7f8:
    // 0x3ed7f8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3ed7f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3ed7fc:
    // 0x3ed7fc: 0x0  nop
    ctx->pc = 0x3ed7fcu;
    // NOP
label_3ed800:
    // 0x3ed800: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3ed800u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3ed804:
    // 0x3ed804: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3ed804u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3ed808:
    // 0x3ed808: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x3ed808u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_3ed80c:
    // 0x3ed80c: 0x0  nop
    ctx->pc = 0x3ed80cu;
    // NOP
label_3ed810:
    // 0x3ed810: 0x0  nop
    ctx->pc = 0x3ed810u;
    // NOP
label_3ed814:
    // 0x3ed814: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
label_3ed818:
    if (ctx->pc == 0x3ED818u) {
        ctx->pc = 0x3ED81Cu;
        goto label_3ed81c;
    }
    ctx->pc = 0x3ED814u;
    {
        const bool branch_taken_0x3ed814 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x3ed814) {
            ctx->pc = 0x3ED828u;
            goto label_3ed828;
        }
    }
    ctx->pc = 0x3ED81Cu;
label_3ed81c:
    // 0x3ed81c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3ed81cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ed820:
    // 0x3ed820: 0x10000008  b           . + 4 + (0x8 << 2)
label_3ed824:
    if (ctx->pc == 0x3ED824u) {
        ctx->pc = 0x3ED824u;
            // 0x3ed824: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3ED828u;
        goto label_3ed828;
    }
    ctx->pc = 0x3ED820u;
    {
        const bool branch_taken_0x3ed820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED820u;
            // 0x3ed824: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed820) {
            ctx->pc = 0x3ED844u;
            goto label_3ed844;
        }
    }
    ctx->pc = 0x3ED828u;
label_3ed828:
    // 0x3ed828: 0x52042  srl         $a0, $a1, 1
    ctx->pc = 0x3ed828u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
label_3ed82c:
    // 0x3ed82c: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x3ed82cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_3ed830:
    // 0x3ed830: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3ed830u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3ed834:
    // 0x3ed834: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3ed834u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ed838:
    // 0x3ed838: 0x0  nop
    ctx->pc = 0x3ed838u;
    // NOP
label_3ed83c:
    // 0x3ed83c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3ed83cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3ed840:
    // 0x3ed840: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3ed840u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3ed844:
    // 0x3ed844: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x3ed844u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3ed848:
    // 0x3ed848: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x3ed848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_3ed84c:
    // 0x3ed84c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3ed84cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ed850:
    // 0x3ed850: 0x0  nop
    ctx->pc = 0x3ed850u;
    // NOP
label_3ed854:
    // 0x3ed854: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3ed854u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3ed858:
    // 0x3ed858: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_3ed85c:
    if (ctx->pc == 0x3ED85Cu) {
        ctx->pc = 0x3ED85Cu;
            // 0x3ed85c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3ED860u;
        goto label_3ed860;
    }
    ctx->pc = 0x3ED858u;
    {
        const bool branch_taken_0x3ed858 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3ed858) {
            ctx->pc = 0x3ED85Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED858u;
            // 0x3ed85c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3ED870u;
            goto label_3ed870;
        }
    }
    ctx->pc = 0x3ED860u;
label_3ed860:
    // 0x3ed860: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ed860u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3ed864:
    // 0x3ed864: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3ed864u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3ed868:
    // 0x3ed868: 0x10000007  b           . + 4 + (0x7 << 2)
label_3ed86c:
    if (ctx->pc == 0x3ED86Cu) {
        ctx->pc = 0x3ED86Cu;
            // 0x3ed86c: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3ED870u;
        goto label_3ed870;
    }
    ctx->pc = 0x3ED868u;
    {
        const bool branch_taken_0x3ed868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ED86Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED868u;
            // 0x3ed86c: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ed868) {
            ctx->pc = 0x3ED888u;
            goto label_3ed888;
        }
    }
    ctx->pc = 0x3ED870u;
label_3ed870:
    // 0x3ed870: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x3ed870u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_3ed874:
    // 0x3ed874: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3ed874u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3ed878:
    // 0x3ed878: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3ed878u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_3ed87c:
    // 0x3ed87c: 0x0  nop
    ctx->pc = 0x3ed87cu;
    // NOP
label_3ed880:
    // 0x3ed880: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3ed880u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_3ed884:
    // 0x3ed884: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x3ed884u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_3ed888:
    // 0x3ed888: 0xa204007d  sb          $a0, 0x7D($s0)
    ctx->pc = 0x3ed888u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 125), (uint8_t)GPR_U32(ctx, 4));
label_3ed88c:
    // 0x3ed88c: 0xc6030094  lwc1        $f3, 0x94($s0)
    ctx->pc = 0x3ed88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3ed890:
    // 0x3ed890: 0xc6020098  lwc1        $f2, 0x98($s0)
    ctx->pc = 0x3ed890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3ed894:
    // 0x3ed894: 0xc601008c  lwc1        $f1, 0x8C($s0)
    ctx->pc = 0x3ed894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3ed898:
    // 0x3ed898: 0xc6000090  lwc1        $f0, 0x90($s0)
    ctx->pc = 0x3ed898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3ed89c:
    // 0x3ed89c: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x3ed89cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_3ed8a0:
    // 0x3ed8a0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3ed8a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3ed8a4:
    // 0x3ed8a4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3ed8a4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_3ed8a8:
    // 0x3ed8a8: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x3ed8a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_3ed8ac:
    // 0x3ed8ac: 0xe6000088  swc1        $f0, 0x88($s0)
    ctx->pc = 0x3ed8acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
label_3ed8b0:
    // 0x3ed8b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ed8b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3ed8b4:
    // 0x3ed8b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3ed8b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3ed8b8:
    // 0x3ed8b8: 0x3e00008  jr          $ra
label_3ed8bc:
    if (ctx->pc == 0x3ED8BCu) {
        ctx->pc = 0x3ED8BCu;
            // 0x3ed8bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3ED8C0u;
        goto label_3ed8c0;
    }
    ctx->pc = 0x3ED8B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ED8BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED8B8u;
            // 0x3ed8bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3ED8C0u;
label_3ed8c0:
    // 0x3ed8c0: 0x84820014  lh          $v0, 0x14($a0)
    ctx->pc = 0x3ed8c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
label_3ed8c4:
    // 0x3ed8c4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3ed8c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ed8c8:
    // 0x3ed8c8: 0x80d2f2c  j           func_34BCB0
label_3ed8cc:
    if (ctx->pc == 0x3ED8CCu) {
        ctx->pc = 0x3ED8CCu;
            // 0x3ed8cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3ED8D0u;
        goto label_3ed8d0;
    }
    ctx->pc = 0x3ED8C8u;
    ctx->pc = 0x3ED8CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED8C8u;
            // 0x3ed8cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34BCB0u;
    {
        auto targetFn = runtime->lookupFunction(0x34BCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3ED8D0u;
label_3ed8d0:
    // 0x3ed8d0: 0x90820014  lbu         $v0, 0x14($a0)
    ctx->pc = 0x3ed8d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
label_3ed8d4:
    // 0x3ed8d4: 0xc48c0034  lwc1        $f12, 0x34($a0)
    ctx->pc = 0x3ed8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3ed8d8:
    // 0x3ed8d8: 0x90860024  lbu         $a2, 0x24($a0)
    ctx->pc = 0x3ed8d8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 36)));
label_3ed8dc:
    // 0x3ed8dc: 0xc48d0084  lwc1        $f13, 0x84($a0)
    ctx->pc = 0x3ed8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3ed8e0:
    // 0x3ed8e0: 0x90870064  lbu         $a3, 0x64($a0)
    ctx->pc = 0x3ed8e0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 100)));
label_3ed8e4:
    // 0x3ed8e4: 0xc48e0094  lwc1        $f14, 0x94($a0)
    ctx->pc = 0x3ed8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_3ed8e8:
    // 0x3ed8e8: 0x90880074  lbu         $t0, 0x74($a0)
    ctx->pc = 0x3ed8e8u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 116)));
label_3ed8ec:
    // 0x3ed8ec: 0xc48f0054  lwc1        $f15, 0x54($a0)
    ctx->pc = 0x3ed8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_3ed8f0:
    // 0x3ed8f0: 0xc4900044  lwc1        $f16, 0x44($a0)
    ctx->pc = 0x3ed8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_3ed8f4:
    // 0x3ed8f4: 0xc49100a4  lwc1        $f17, 0xA4($a0)
    ctx->pc = 0x3ed8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
label_3ed8f8:
    // 0x3ed8f8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3ed8f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ed8fc:
    // 0x3ed8fc: 0x80d2f30  j           func_34BCC0
label_3ed900:
    if (ctx->pc == 0x3ED900u) {
        ctx->pc = 0x3ED900u;
            // 0x3ed900: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3ED904u;
        goto label_3ed904;
    }
    ctx->pc = 0x3ED8FCu;
    ctx->pc = 0x3ED900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3ED8FCu;
            // 0x3ed900: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34BCC0u;
    {
        auto targetFn = runtime->lookupFunction(0x34BCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3ED904u;
label_3ed904:
    // 0x3ed904: 0x0  nop
    ctx->pc = 0x3ed904u;
    // NOP
label_3ed908:
    // 0x3ed908: 0x0  nop
    ctx->pc = 0x3ed908u;
    // NOP
label_3ed90c:
    // 0x3ed90c: 0x0  nop
    ctx->pc = 0x3ed90cu;
    // NOP
}
