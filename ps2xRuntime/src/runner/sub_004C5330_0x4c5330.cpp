#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004C5330
// Address: 0x4c5330 - 0x4c58c0
void sub_004C5330_0x4c5330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C5330_0x4c5330");
#endif

    switch (ctx->pc) {
        case 0x4c5330u: goto label_4c5330;
        case 0x4c5334u: goto label_4c5334;
        case 0x4c5338u: goto label_4c5338;
        case 0x4c533cu: goto label_4c533c;
        case 0x4c5340u: goto label_4c5340;
        case 0x4c5344u: goto label_4c5344;
        case 0x4c5348u: goto label_4c5348;
        case 0x4c534cu: goto label_4c534c;
        case 0x4c5350u: goto label_4c5350;
        case 0x4c5354u: goto label_4c5354;
        case 0x4c5358u: goto label_4c5358;
        case 0x4c535cu: goto label_4c535c;
        case 0x4c5360u: goto label_4c5360;
        case 0x4c5364u: goto label_4c5364;
        case 0x4c5368u: goto label_4c5368;
        case 0x4c536cu: goto label_4c536c;
        case 0x4c5370u: goto label_4c5370;
        case 0x4c5374u: goto label_4c5374;
        case 0x4c5378u: goto label_4c5378;
        case 0x4c537cu: goto label_4c537c;
        case 0x4c5380u: goto label_4c5380;
        case 0x4c5384u: goto label_4c5384;
        case 0x4c5388u: goto label_4c5388;
        case 0x4c538cu: goto label_4c538c;
        case 0x4c5390u: goto label_4c5390;
        case 0x4c5394u: goto label_4c5394;
        case 0x4c5398u: goto label_4c5398;
        case 0x4c539cu: goto label_4c539c;
        case 0x4c53a0u: goto label_4c53a0;
        case 0x4c53a4u: goto label_4c53a4;
        case 0x4c53a8u: goto label_4c53a8;
        case 0x4c53acu: goto label_4c53ac;
        case 0x4c53b0u: goto label_4c53b0;
        case 0x4c53b4u: goto label_4c53b4;
        case 0x4c53b8u: goto label_4c53b8;
        case 0x4c53bcu: goto label_4c53bc;
        case 0x4c53c0u: goto label_4c53c0;
        case 0x4c53c4u: goto label_4c53c4;
        case 0x4c53c8u: goto label_4c53c8;
        case 0x4c53ccu: goto label_4c53cc;
        case 0x4c53d0u: goto label_4c53d0;
        case 0x4c53d4u: goto label_4c53d4;
        case 0x4c53d8u: goto label_4c53d8;
        case 0x4c53dcu: goto label_4c53dc;
        case 0x4c53e0u: goto label_4c53e0;
        case 0x4c53e4u: goto label_4c53e4;
        case 0x4c53e8u: goto label_4c53e8;
        case 0x4c53ecu: goto label_4c53ec;
        case 0x4c53f0u: goto label_4c53f0;
        case 0x4c53f4u: goto label_4c53f4;
        case 0x4c53f8u: goto label_4c53f8;
        case 0x4c53fcu: goto label_4c53fc;
        case 0x4c5400u: goto label_4c5400;
        case 0x4c5404u: goto label_4c5404;
        case 0x4c5408u: goto label_4c5408;
        case 0x4c540cu: goto label_4c540c;
        case 0x4c5410u: goto label_4c5410;
        case 0x4c5414u: goto label_4c5414;
        case 0x4c5418u: goto label_4c5418;
        case 0x4c541cu: goto label_4c541c;
        case 0x4c5420u: goto label_4c5420;
        case 0x4c5424u: goto label_4c5424;
        case 0x4c5428u: goto label_4c5428;
        case 0x4c542cu: goto label_4c542c;
        case 0x4c5430u: goto label_4c5430;
        case 0x4c5434u: goto label_4c5434;
        case 0x4c5438u: goto label_4c5438;
        case 0x4c543cu: goto label_4c543c;
        case 0x4c5440u: goto label_4c5440;
        case 0x4c5444u: goto label_4c5444;
        case 0x4c5448u: goto label_4c5448;
        case 0x4c544cu: goto label_4c544c;
        case 0x4c5450u: goto label_4c5450;
        case 0x4c5454u: goto label_4c5454;
        case 0x4c5458u: goto label_4c5458;
        case 0x4c545cu: goto label_4c545c;
        case 0x4c5460u: goto label_4c5460;
        case 0x4c5464u: goto label_4c5464;
        case 0x4c5468u: goto label_4c5468;
        case 0x4c546cu: goto label_4c546c;
        case 0x4c5470u: goto label_4c5470;
        case 0x4c5474u: goto label_4c5474;
        case 0x4c5478u: goto label_4c5478;
        case 0x4c547cu: goto label_4c547c;
        case 0x4c5480u: goto label_4c5480;
        case 0x4c5484u: goto label_4c5484;
        case 0x4c5488u: goto label_4c5488;
        case 0x4c548cu: goto label_4c548c;
        case 0x4c5490u: goto label_4c5490;
        case 0x4c5494u: goto label_4c5494;
        case 0x4c5498u: goto label_4c5498;
        case 0x4c549cu: goto label_4c549c;
        case 0x4c54a0u: goto label_4c54a0;
        case 0x4c54a4u: goto label_4c54a4;
        case 0x4c54a8u: goto label_4c54a8;
        case 0x4c54acu: goto label_4c54ac;
        case 0x4c54b0u: goto label_4c54b0;
        case 0x4c54b4u: goto label_4c54b4;
        case 0x4c54b8u: goto label_4c54b8;
        case 0x4c54bcu: goto label_4c54bc;
        case 0x4c54c0u: goto label_4c54c0;
        case 0x4c54c4u: goto label_4c54c4;
        case 0x4c54c8u: goto label_4c54c8;
        case 0x4c54ccu: goto label_4c54cc;
        case 0x4c54d0u: goto label_4c54d0;
        case 0x4c54d4u: goto label_4c54d4;
        case 0x4c54d8u: goto label_4c54d8;
        case 0x4c54dcu: goto label_4c54dc;
        case 0x4c54e0u: goto label_4c54e0;
        case 0x4c54e4u: goto label_4c54e4;
        case 0x4c54e8u: goto label_4c54e8;
        case 0x4c54ecu: goto label_4c54ec;
        case 0x4c54f0u: goto label_4c54f0;
        case 0x4c54f4u: goto label_4c54f4;
        case 0x4c54f8u: goto label_4c54f8;
        case 0x4c54fcu: goto label_4c54fc;
        case 0x4c5500u: goto label_4c5500;
        case 0x4c5504u: goto label_4c5504;
        case 0x4c5508u: goto label_4c5508;
        case 0x4c550cu: goto label_4c550c;
        case 0x4c5510u: goto label_4c5510;
        case 0x4c5514u: goto label_4c5514;
        case 0x4c5518u: goto label_4c5518;
        case 0x4c551cu: goto label_4c551c;
        case 0x4c5520u: goto label_4c5520;
        case 0x4c5524u: goto label_4c5524;
        case 0x4c5528u: goto label_4c5528;
        case 0x4c552cu: goto label_4c552c;
        case 0x4c5530u: goto label_4c5530;
        case 0x4c5534u: goto label_4c5534;
        case 0x4c5538u: goto label_4c5538;
        case 0x4c553cu: goto label_4c553c;
        case 0x4c5540u: goto label_4c5540;
        case 0x4c5544u: goto label_4c5544;
        case 0x4c5548u: goto label_4c5548;
        case 0x4c554cu: goto label_4c554c;
        case 0x4c5550u: goto label_4c5550;
        case 0x4c5554u: goto label_4c5554;
        case 0x4c5558u: goto label_4c5558;
        case 0x4c555cu: goto label_4c555c;
        case 0x4c5560u: goto label_4c5560;
        case 0x4c5564u: goto label_4c5564;
        case 0x4c5568u: goto label_4c5568;
        case 0x4c556cu: goto label_4c556c;
        case 0x4c5570u: goto label_4c5570;
        case 0x4c5574u: goto label_4c5574;
        case 0x4c5578u: goto label_4c5578;
        case 0x4c557cu: goto label_4c557c;
        case 0x4c5580u: goto label_4c5580;
        case 0x4c5584u: goto label_4c5584;
        case 0x4c5588u: goto label_4c5588;
        case 0x4c558cu: goto label_4c558c;
        case 0x4c5590u: goto label_4c5590;
        case 0x4c5594u: goto label_4c5594;
        case 0x4c5598u: goto label_4c5598;
        case 0x4c559cu: goto label_4c559c;
        case 0x4c55a0u: goto label_4c55a0;
        case 0x4c55a4u: goto label_4c55a4;
        case 0x4c55a8u: goto label_4c55a8;
        case 0x4c55acu: goto label_4c55ac;
        case 0x4c55b0u: goto label_4c55b0;
        case 0x4c55b4u: goto label_4c55b4;
        case 0x4c55b8u: goto label_4c55b8;
        case 0x4c55bcu: goto label_4c55bc;
        case 0x4c55c0u: goto label_4c55c0;
        case 0x4c55c4u: goto label_4c55c4;
        case 0x4c55c8u: goto label_4c55c8;
        case 0x4c55ccu: goto label_4c55cc;
        case 0x4c55d0u: goto label_4c55d0;
        case 0x4c55d4u: goto label_4c55d4;
        case 0x4c55d8u: goto label_4c55d8;
        case 0x4c55dcu: goto label_4c55dc;
        case 0x4c55e0u: goto label_4c55e0;
        case 0x4c55e4u: goto label_4c55e4;
        case 0x4c55e8u: goto label_4c55e8;
        case 0x4c55ecu: goto label_4c55ec;
        case 0x4c55f0u: goto label_4c55f0;
        case 0x4c55f4u: goto label_4c55f4;
        case 0x4c55f8u: goto label_4c55f8;
        case 0x4c55fcu: goto label_4c55fc;
        case 0x4c5600u: goto label_4c5600;
        case 0x4c5604u: goto label_4c5604;
        case 0x4c5608u: goto label_4c5608;
        case 0x4c560cu: goto label_4c560c;
        case 0x4c5610u: goto label_4c5610;
        case 0x4c5614u: goto label_4c5614;
        case 0x4c5618u: goto label_4c5618;
        case 0x4c561cu: goto label_4c561c;
        case 0x4c5620u: goto label_4c5620;
        case 0x4c5624u: goto label_4c5624;
        case 0x4c5628u: goto label_4c5628;
        case 0x4c562cu: goto label_4c562c;
        case 0x4c5630u: goto label_4c5630;
        case 0x4c5634u: goto label_4c5634;
        case 0x4c5638u: goto label_4c5638;
        case 0x4c563cu: goto label_4c563c;
        case 0x4c5640u: goto label_4c5640;
        case 0x4c5644u: goto label_4c5644;
        case 0x4c5648u: goto label_4c5648;
        case 0x4c564cu: goto label_4c564c;
        case 0x4c5650u: goto label_4c5650;
        case 0x4c5654u: goto label_4c5654;
        case 0x4c5658u: goto label_4c5658;
        case 0x4c565cu: goto label_4c565c;
        case 0x4c5660u: goto label_4c5660;
        case 0x4c5664u: goto label_4c5664;
        case 0x4c5668u: goto label_4c5668;
        case 0x4c566cu: goto label_4c566c;
        case 0x4c5670u: goto label_4c5670;
        case 0x4c5674u: goto label_4c5674;
        case 0x4c5678u: goto label_4c5678;
        case 0x4c567cu: goto label_4c567c;
        case 0x4c5680u: goto label_4c5680;
        case 0x4c5684u: goto label_4c5684;
        case 0x4c5688u: goto label_4c5688;
        case 0x4c568cu: goto label_4c568c;
        case 0x4c5690u: goto label_4c5690;
        case 0x4c5694u: goto label_4c5694;
        case 0x4c5698u: goto label_4c5698;
        case 0x4c569cu: goto label_4c569c;
        case 0x4c56a0u: goto label_4c56a0;
        case 0x4c56a4u: goto label_4c56a4;
        case 0x4c56a8u: goto label_4c56a8;
        case 0x4c56acu: goto label_4c56ac;
        case 0x4c56b0u: goto label_4c56b0;
        case 0x4c56b4u: goto label_4c56b4;
        case 0x4c56b8u: goto label_4c56b8;
        case 0x4c56bcu: goto label_4c56bc;
        case 0x4c56c0u: goto label_4c56c0;
        case 0x4c56c4u: goto label_4c56c4;
        case 0x4c56c8u: goto label_4c56c8;
        case 0x4c56ccu: goto label_4c56cc;
        case 0x4c56d0u: goto label_4c56d0;
        case 0x4c56d4u: goto label_4c56d4;
        case 0x4c56d8u: goto label_4c56d8;
        case 0x4c56dcu: goto label_4c56dc;
        case 0x4c56e0u: goto label_4c56e0;
        case 0x4c56e4u: goto label_4c56e4;
        case 0x4c56e8u: goto label_4c56e8;
        case 0x4c56ecu: goto label_4c56ec;
        case 0x4c56f0u: goto label_4c56f0;
        case 0x4c56f4u: goto label_4c56f4;
        case 0x4c56f8u: goto label_4c56f8;
        case 0x4c56fcu: goto label_4c56fc;
        case 0x4c5700u: goto label_4c5700;
        case 0x4c5704u: goto label_4c5704;
        case 0x4c5708u: goto label_4c5708;
        case 0x4c570cu: goto label_4c570c;
        case 0x4c5710u: goto label_4c5710;
        case 0x4c5714u: goto label_4c5714;
        case 0x4c5718u: goto label_4c5718;
        case 0x4c571cu: goto label_4c571c;
        case 0x4c5720u: goto label_4c5720;
        case 0x4c5724u: goto label_4c5724;
        case 0x4c5728u: goto label_4c5728;
        case 0x4c572cu: goto label_4c572c;
        case 0x4c5730u: goto label_4c5730;
        case 0x4c5734u: goto label_4c5734;
        case 0x4c5738u: goto label_4c5738;
        case 0x4c573cu: goto label_4c573c;
        case 0x4c5740u: goto label_4c5740;
        case 0x4c5744u: goto label_4c5744;
        case 0x4c5748u: goto label_4c5748;
        case 0x4c574cu: goto label_4c574c;
        case 0x4c5750u: goto label_4c5750;
        case 0x4c5754u: goto label_4c5754;
        case 0x4c5758u: goto label_4c5758;
        case 0x4c575cu: goto label_4c575c;
        case 0x4c5760u: goto label_4c5760;
        case 0x4c5764u: goto label_4c5764;
        case 0x4c5768u: goto label_4c5768;
        case 0x4c576cu: goto label_4c576c;
        case 0x4c5770u: goto label_4c5770;
        case 0x4c5774u: goto label_4c5774;
        case 0x4c5778u: goto label_4c5778;
        case 0x4c577cu: goto label_4c577c;
        case 0x4c5780u: goto label_4c5780;
        case 0x4c5784u: goto label_4c5784;
        case 0x4c5788u: goto label_4c5788;
        case 0x4c578cu: goto label_4c578c;
        case 0x4c5790u: goto label_4c5790;
        case 0x4c5794u: goto label_4c5794;
        case 0x4c5798u: goto label_4c5798;
        case 0x4c579cu: goto label_4c579c;
        case 0x4c57a0u: goto label_4c57a0;
        case 0x4c57a4u: goto label_4c57a4;
        case 0x4c57a8u: goto label_4c57a8;
        case 0x4c57acu: goto label_4c57ac;
        case 0x4c57b0u: goto label_4c57b0;
        case 0x4c57b4u: goto label_4c57b4;
        case 0x4c57b8u: goto label_4c57b8;
        case 0x4c57bcu: goto label_4c57bc;
        case 0x4c57c0u: goto label_4c57c0;
        case 0x4c57c4u: goto label_4c57c4;
        case 0x4c57c8u: goto label_4c57c8;
        case 0x4c57ccu: goto label_4c57cc;
        case 0x4c57d0u: goto label_4c57d0;
        case 0x4c57d4u: goto label_4c57d4;
        case 0x4c57d8u: goto label_4c57d8;
        case 0x4c57dcu: goto label_4c57dc;
        case 0x4c57e0u: goto label_4c57e0;
        case 0x4c57e4u: goto label_4c57e4;
        case 0x4c57e8u: goto label_4c57e8;
        case 0x4c57ecu: goto label_4c57ec;
        case 0x4c57f0u: goto label_4c57f0;
        case 0x4c57f4u: goto label_4c57f4;
        case 0x4c57f8u: goto label_4c57f8;
        case 0x4c57fcu: goto label_4c57fc;
        case 0x4c5800u: goto label_4c5800;
        case 0x4c5804u: goto label_4c5804;
        case 0x4c5808u: goto label_4c5808;
        case 0x4c580cu: goto label_4c580c;
        case 0x4c5810u: goto label_4c5810;
        case 0x4c5814u: goto label_4c5814;
        case 0x4c5818u: goto label_4c5818;
        case 0x4c581cu: goto label_4c581c;
        case 0x4c5820u: goto label_4c5820;
        case 0x4c5824u: goto label_4c5824;
        case 0x4c5828u: goto label_4c5828;
        case 0x4c582cu: goto label_4c582c;
        case 0x4c5830u: goto label_4c5830;
        case 0x4c5834u: goto label_4c5834;
        case 0x4c5838u: goto label_4c5838;
        case 0x4c583cu: goto label_4c583c;
        case 0x4c5840u: goto label_4c5840;
        case 0x4c5844u: goto label_4c5844;
        case 0x4c5848u: goto label_4c5848;
        case 0x4c584cu: goto label_4c584c;
        case 0x4c5850u: goto label_4c5850;
        case 0x4c5854u: goto label_4c5854;
        case 0x4c5858u: goto label_4c5858;
        case 0x4c585cu: goto label_4c585c;
        case 0x4c5860u: goto label_4c5860;
        case 0x4c5864u: goto label_4c5864;
        case 0x4c5868u: goto label_4c5868;
        case 0x4c586cu: goto label_4c586c;
        case 0x4c5870u: goto label_4c5870;
        case 0x4c5874u: goto label_4c5874;
        case 0x4c5878u: goto label_4c5878;
        case 0x4c587cu: goto label_4c587c;
        case 0x4c5880u: goto label_4c5880;
        case 0x4c5884u: goto label_4c5884;
        case 0x4c5888u: goto label_4c5888;
        case 0x4c588cu: goto label_4c588c;
        case 0x4c5890u: goto label_4c5890;
        case 0x4c5894u: goto label_4c5894;
        case 0x4c5898u: goto label_4c5898;
        case 0x4c589cu: goto label_4c589c;
        case 0x4c58a0u: goto label_4c58a0;
        case 0x4c58a4u: goto label_4c58a4;
        case 0x4c58a8u: goto label_4c58a8;
        case 0x4c58acu: goto label_4c58ac;
        case 0x4c58b0u: goto label_4c58b0;
        case 0x4c58b4u: goto label_4c58b4;
        case 0x4c58b8u: goto label_4c58b8;
        case 0x4c58bcu: goto label_4c58bc;
        default: break;
    }

    ctx->pc = 0x4c5330u;

label_4c5330:
    // 0x4c5330: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4c5330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_4c5334:
    // 0x4c5334: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4c5334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4c5338:
    // 0x4c5338: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x4c5338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_4c533c:
    // 0x4c533c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x4c533cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_4c5340:
    // 0x4c5340: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4c5340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_4c5344:
    // 0x4c5344: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4c5344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4c5348:
    // 0x4c5348: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4c5348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4c534c:
    // 0x4c534c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4c534cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4c5350:
    // 0x4c5350: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4c5350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4c5354:
    // 0x4c5354: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4c5354u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4c5358:
    // 0x4c5358: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4c5358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4c535c:
    // 0x4c535c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4c535cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4c5360:
    // 0x4c5360: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x4c5360u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_4c5364:
    // 0x4c5364: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x4c5364u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_4c5368:
    // 0x4c5368: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x4c5368u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_4c536c:
    // 0x4c536c: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x4c536cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4c5370:
    // 0x4c5370: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x4c5370u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_4c5374:
    // 0x4c5374: 0x24840e84  addiu       $a0, $a0, 0xE84
    ctx->pc = 0x4c5374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3716));
label_4c5378:
    // 0x4c5378: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4c5378u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4c537c:
    // 0x4c537c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4c537cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4c5380:
    // 0x4c5380: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x4c5380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
label_4c5384:
    // 0x4c5384: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x4c5384u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c5388:
    // 0x4c5388: 0x8c760084  lw          $s6, 0x84($v1)
    ctx->pc = 0x4c5388u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_4c538c:
    // 0x4c538c: 0x920311a1  lbu         $v1, 0x11A1($s0)
    ctx->pc = 0x4c538cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4513)));
label_4c5390:
    // 0x4c5390: 0x5060011e  beql        $v1, $zero, . + 4 + (0x11E << 2)
label_4c5394:
    if (ctx->pc == 0x4C5394u) {
        ctx->pc = 0x4C5394u;
            // 0x4c5394: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x4C5398u;
        goto label_4c5398;
    }
    ctx->pc = 0x4C5390u;
    {
        const bool branch_taken_0x4c5390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c5390) {
            ctx->pc = 0x4C5394u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C5390u;
            // 0x4c5394: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C580Cu;
            goto label_4c580c;
        }
    }
    ctx->pc = 0x4C5398u;
label_4c5398:
    // 0x4c5398: 0x8e050da0  lw          $a1, 0xDA0($s0)
    ctx->pc = 0x4c5398u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3488)));
label_4c539c:
    // 0x4c539c: 0x30a30010  andi        $v1, $a1, 0x10
    ctx->pc = 0x4c539cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16);
label_4c53a0:
    // 0x4c53a0: 0x14600119  bnez        $v1, . + 4 + (0x119 << 2)
label_4c53a4:
    if (ctx->pc == 0x4C53A4u) {
        ctx->pc = 0x4C53A8u;
        goto label_4c53a8;
    }
    ctx->pc = 0x4C53A0u;
    {
        const bool branch_taken_0x4c53a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c53a0) {
            ctx->pc = 0x4C5808u;
            goto label_4c5808;
        }
    }
    ctx->pc = 0x4C53A8u;
label_4c53a8:
    // 0x4c53a8: 0x8e030e34  lw          $v1, 0xE34($s0)
    ctx->pc = 0x4c53a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_4c53ac:
    // 0x4c53ac: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x4c53acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4c53b0:
    // 0x4c53b0: 0x10640115  beq         $v1, $a0, . + 4 + (0x115 << 2)
label_4c53b4:
    if (ctx->pc == 0x4C53B4u) {
        ctx->pc = 0x4C53B8u;
        goto label_4c53b8;
    }
    ctx->pc = 0x4C53B0u;
    {
        const bool branch_taken_0x4c53b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x4c53b0) {
            ctx->pc = 0x4C5808u;
            goto label_4c5808;
        }
    }
    ctx->pc = 0x4C53B8u;
label_4c53b8:
    // 0x4c53b8: 0x30a30080  andi        $v1, $a1, 0x80
    ctx->pc = 0x4c53b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
label_4c53bc:
    // 0x4c53bc: 0x14600112  bnez        $v1, . + 4 + (0x112 << 2)
label_4c53c0:
    if (ctx->pc == 0x4C53C0u) {
        ctx->pc = 0x4C53C4u;
        goto label_4c53c4;
    }
    ctx->pc = 0x4C53BCu;
    {
        const bool branch_taken_0x4c53bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c53bc) {
            ctx->pc = 0x4C5808u;
            goto label_4c5808;
        }
    }
    ctx->pc = 0x4C53C4u;
label_4c53c4:
    // 0x4c53c4: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x4c53c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_4c53c8:
    // 0x4c53c8: 0x8e060d74  lw          $a2, 0xD74($s0)
    ctx->pc = 0x4c53c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3444)));
label_4c53cc:
    // 0x4c53cc: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x4c53ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_4c53d0:
    // 0x4c53d0: 0x8e050db8  lw          $a1, 0xDB8($s0)
    ctx->pc = 0x4c53d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3512)));
label_4c53d4:
    // 0x4c53d4: 0x24730014  addiu       $s3, $v1, 0x14
    ctx->pc = 0x4c53d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
label_4c53d8:
    // 0x4c53d8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4c53d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4c53dc:
    // 0x4c53dc: 0x90c302c5  lbu         $v1, 0x2C5($a2)
    ctx->pc = 0x4c53dcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 709)));
label_4c53e0:
    // 0x4c53e0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4c53e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c53e4:
    // 0x4c53e4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x4c53e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_4c53e8:
    // 0x4c53e8: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x4c53e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_4c53ec:
    // 0x4c53ec: 0x24c30280  addiu       $v1, $a2, 0x280
    ctx->pc = 0x4c53ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 640));
label_4c53f0:
    // 0x4c53f0: 0x90c60281  lbu         $a2, 0x281($a2)
    ctx->pc = 0x4c53f0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 641)));
label_4c53f4:
    // 0x4c53f4: 0x38c60005  xori        $a2, $a2, 0x5
    ctx->pc = 0x4c53f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)5);
label_4c53f8:
    // 0x4c53f8: 0x10a70103  beq         $a1, $a3, . + 4 + (0x103 << 2)
label_4c53fc:
    if (ctx->pc == 0x4C53FCu) {
        ctx->pc = 0x4C53FCu;
            // 0x4c53fc: 0x2cd50001  sltiu       $s5, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->pc = 0x4C5400u;
        goto label_4c5400;
    }
    ctx->pc = 0x4C53F8u;
    {
        const bool branch_taken_0x4c53f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        ctx->pc = 0x4C53FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C53F8u;
            // 0x4c53fc: 0x2cd50001  sltiu       $s5, $a2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c53f8) {
            ctx->pc = 0x4C5808u;
            goto label_4c5808;
        }
    }
    ctx->pc = 0x4C5400u;
label_4c5400:
    // 0x4c5400: 0x8e060550  lw          $a2, 0x550($s0)
    ctx->pc = 0x4c5400u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
label_4c5404:
    // 0x4c5404: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x4c5404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4c5408:
    // 0x4c5408: 0x80c6010f  lb          $a2, 0x10F($a2)
    ctx->pc = 0x4c5408u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 271)));
label_4c540c:
    // 0x4c540c: 0x10c500fe  beq         $a2, $a1, . + 4 + (0xFE << 2)
label_4c5410:
    if (ctx->pc == 0x4C5410u) {
        ctx->pc = 0x4C5414u;
        goto label_4c5414;
    }
    ctx->pc = 0x4C540Cu;
    {
        const bool branch_taken_0x4c540c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x4c540c) {
            ctx->pc = 0x4C5808u;
            goto label_4c5808;
        }
    }
    ctx->pc = 0x4C5414u;
label_4c5414:
    // 0x4c5414: 0x8e060db0  lw          $a2, 0xDB0($s0)
    ctx->pc = 0x4c5414u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
label_4c5418:
    // 0x4c5418: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x4c5418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_4c541c:
    // 0x4c541c: 0x10c500fa  beq         $a2, $a1, . + 4 + (0xFA << 2)
label_4c5420:
    if (ctx->pc == 0x4C5420u) {
        ctx->pc = 0x4C5424u;
        goto label_4c5424;
    }
    ctx->pc = 0x4C541Cu;
    {
        const bool branch_taken_0x4c541c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x4c541c) {
            ctx->pc = 0x4C5808u;
            goto label_4c5808;
        }
    }
    ctx->pc = 0x4C5424u;
label_4c5424:
    // 0x4c5424: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x4c5424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_4c5428:
    // 0x4c5428: 0x10c500f7  beq         $a2, $a1, . + 4 + (0xF7 << 2)
label_4c542c:
    if (ctx->pc == 0x4C542Cu) {
        ctx->pc = 0x4C5430u;
        goto label_4c5430;
    }
    ctx->pc = 0x4C5428u;
    {
        const bool branch_taken_0x4c5428 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x4c5428) {
            ctx->pc = 0x4C5808u;
            goto label_4c5808;
        }
    }
    ctx->pc = 0x4C5430u;
label_4c5430:
    // 0x4c5430: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x4c5430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_4c5434:
    // 0x4c5434: 0x10c500f4  beq         $a2, $a1, . + 4 + (0xF4 << 2)
label_4c5438:
    if (ctx->pc == 0x4C5438u) {
        ctx->pc = 0x4C543Cu;
        goto label_4c543c;
    }
    ctx->pc = 0x4C5434u;
    {
        const bool branch_taken_0x4c5434 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x4c5434) {
            ctx->pc = 0x4C5808u;
            goto label_4c5808;
        }
    }
    ctx->pc = 0x4C543Cu;
label_4c543c:
    // 0x4c543c: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x4c543cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_4c5440:
    // 0x4c5440: 0x10c500f1  beq         $a2, $a1, . + 4 + (0xF1 << 2)
label_4c5444:
    if (ctx->pc == 0x4C5444u) {
        ctx->pc = 0x4C5448u;
        goto label_4c5448;
    }
    ctx->pc = 0x4C5440u;
    {
        const bool branch_taken_0x4c5440 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x4c5440) {
            ctx->pc = 0x4C5808u;
            goto label_4c5808;
        }
    }
    ctx->pc = 0x4C5448u;
label_4c5448:
    // 0x4c5448: 0x10c700ef  beq         $a2, $a3, . + 4 + (0xEF << 2)
label_4c544c:
    if (ctx->pc == 0x4C544Cu) {
        ctx->pc = 0x4C5450u;
        goto label_4c5450;
    }
    ctx->pc = 0x4C5448u;
    {
        const bool branch_taken_0x4c5448 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        if (branch_taken_0x4c5448) {
            ctx->pc = 0x4C5808u;
            goto label_4c5808;
        }
    }
    ctx->pc = 0x4C5450u;
label_4c5450:
    // 0x4c5450: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x4c5450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_4c5454:
    // 0x4c5454: 0x10c500ec  beq         $a2, $a1, . + 4 + (0xEC << 2)
label_4c5458:
    if (ctx->pc == 0x4C5458u) {
        ctx->pc = 0x4C545Cu;
        goto label_4c545c;
    }
    ctx->pc = 0x4C5454u;
    {
        const bool branch_taken_0x4c5454 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x4c5454) {
            ctx->pc = 0x4C5808u;
            goto label_4c5808;
        }
    }
    ctx->pc = 0x4C545Cu;
label_4c545c:
    // 0x4c545c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x4c545cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_4c5460:
    // 0x4c5460: 0x10c500e9  beq         $a2, $a1, . + 4 + (0xE9 << 2)
label_4c5464:
    if (ctx->pc == 0x4C5464u) {
        ctx->pc = 0x4C5468u;
        goto label_4c5468;
    }
    ctx->pc = 0x4C5460u;
    {
        const bool branch_taken_0x4c5460 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x4c5460) {
            ctx->pc = 0x4C5808u;
            goto label_4c5808;
        }
    }
    ctx->pc = 0x4C5468u;
label_4c5468:
    // 0x4c5468: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x4c5468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4c546c:
    // 0x4c546c: 0x10c500e6  beq         $a2, $a1, . + 4 + (0xE6 << 2)
label_4c5470:
    if (ctx->pc == 0x4C5470u) {
        ctx->pc = 0x4C5474u;
        goto label_4c5474;
    }
    ctx->pc = 0x4C546Cu;
    {
        const bool branch_taken_0x4c546c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x4c546c) {
            ctx->pc = 0x4C5808u;
            goto label_4c5808;
        }
    }
    ctx->pc = 0x4C5474u;
label_4c5474:
    // 0x4c5474: 0x10c000e4  beqz        $a2, . + 4 + (0xE4 << 2)
label_4c5478:
    if (ctx->pc == 0x4C5478u) {
        ctx->pc = 0x4C547Cu;
        goto label_4c547c;
    }
    ctx->pc = 0x4C5474u;
    {
        const bool branch_taken_0x4c5474 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c5474) {
            ctx->pc = 0x4C5808u;
            goto label_4c5808;
        }
    }
    ctx->pc = 0x4C547Cu;
label_4c547c:
    // 0x4c547c: 0x52a00014  beql        $s5, $zero, . + 4 + (0x14 << 2)
label_4c5480:
    if (ctx->pc == 0x4C5480u) {
        ctx->pc = 0x4C5480u;
            // 0x4c5480: 0x8e040d70  lw          $a0, 0xD70($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3440)));
        ctx->pc = 0x4C5484u;
        goto label_4c5484;
    }
    ctx->pc = 0x4C547Cu;
    {
        const bool branch_taken_0x4c547c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c547c) {
            ctx->pc = 0x4C5480u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C547Cu;
            // 0x4c5480: 0x8e040d70  lw          $a0, 0xD70($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3440)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C54D0u;
            goto label_4c54d0;
        }
    }
    ctx->pc = 0x4C5484u;
label_4c5484:
    // 0x4c5484: 0x90630004  lbu         $v1, 0x4($v1)
    ctx->pc = 0x4c5484u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
label_4c5488:
    // 0x4c5488: 0x50640010  beql        $v1, $a0, . + 4 + (0x10 << 2)
label_4c548c:
    if (ctx->pc == 0x4C548Cu) {
        ctx->pc = 0x4C548Cu;
            // 0x4c548c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C5490u;
        goto label_4c5490;
    }
    ctx->pc = 0x4C5488u;
    {
        const bool branch_taken_0x4c5488 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x4c5488) {
            ctx->pc = 0x4C548Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C5488u;
            // 0x4c548c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C54CCu;
            goto label_4c54cc;
        }
    }
    ctx->pc = 0x4C5490u;
label_4c5490:
    // 0x4c5490: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4c5490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4c5494:
    // 0x4c5494: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_4c5498:
    if (ctx->pc == 0x4C5498u) {
        ctx->pc = 0x4C549Cu;
        goto label_4c549c;
    }
    ctx->pc = 0x4C5494u;
    {
        const bool branch_taken_0x4c5494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4c5494) {
            ctx->pc = 0x4C54C8u;
            goto label_4c54c8;
        }
    }
    ctx->pc = 0x4C549Cu;
label_4c549c:
    // 0x4c549c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x4c549cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4c54a0:
    // 0x4c54a0: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_4c54a4:
    if (ctx->pc == 0x4C54A4u) {
        ctx->pc = 0x4C54A8u;
        goto label_4c54a8;
    }
    ctx->pc = 0x4C54A0u;
    {
        const bool branch_taken_0x4c54a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4c54a0) {
            ctx->pc = 0x4C54CCu;
            goto label_4c54cc;
        }
    }
    ctx->pc = 0x4C54A8u;
label_4c54a8:
    // 0x4c54a8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4c54a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4c54ac:
    // 0x4c54ac: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_4c54b0:
    if (ctx->pc == 0x4C54B0u) {
        ctx->pc = 0x4C54B4u;
        goto label_4c54b4;
    }
    ctx->pc = 0x4C54ACu;
    {
        const bool branch_taken_0x4c54ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4c54ac) {
            ctx->pc = 0x4C54CCu;
            goto label_4c54cc;
        }
    }
    ctx->pc = 0x4C54B4u;
label_4c54b4:
    // 0x4c54b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x4c54b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4c54b8:
    // 0x4c54b8: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_4c54bc:
    if (ctx->pc == 0x4C54BCu) {
        ctx->pc = 0x4C54C0u;
        goto label_4c54c0;
    }
    ctx->pc = 0x4C54B8u;
    {
        const bool branch_taken_0x4c54b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4c54b8) {
            ctx->pc = 0x4C54CCu;
            goto label_4c54cc;
        }
    }
    ctx->pc = 0x4C54C0u;
label_4c54c0:
    // 0x4c54c0: 0x10000002  b           . + 4 + (0x2 << 2)
label_4c54c4:
    if (ctx->pc == 0x4C54C4u) {
        ctx->pc = 0x4C54C8u;
        goto label_4c54c8;
    }
    ctx->pc = 0x4C54C0u;
    {
        const bool branch_taken_0x4c54c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c54c0) {
            ctx->pc = 0x4C54CCu;
            goto label_4c54cc;
        }
    }
    ctx->pc = 0x4C54C8u;
label_4c54c8:
    // 0x4c54c8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x4c54c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c54cc:
    // 0x4c54cc: 0x8e040d70  lw          $a0, 0xD70($s0)
    ctx->pc = 0x4c54ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3440)));
label_4c54d0:
    // 0x4c54d0: 0xc0bd780  jal         func_2F5E00
label_4c54d4:
    if (ctx->pc == 0x4C54D4u) {
        ctx->pc = 0x4C54D8u;
        goto label_4c54d8;
    }
    ctx->pc = 0x4C54D0u;
    SET_GPR_U32(ctx, 31, 0x4C54D8u);
    ctx->pc = 0x2F5E00u;
    if (runtime->hasFunction(0x2F5E00u)) {
        auto targetFn = runtime->lookupFunction(0x2F5E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C54D8u; }
        if (ctx->pc != 0x4C54D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F5E00_0x2f5e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C54D8u; }
        if (ctx->pc != 0x4C54D8u) { return; }
    }
    ctx->pc = 0x4C54D8u;
label_4c54d8:
    // 0x4c54d8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4c54d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4c54dc:
    // 0x4c54dc: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
label_4c54e0:
    if (ctx->pc == 0x4C54E0u) {
        ctx->pc = 0x4C54E0u;
            // 0x4c54e0: 0x64140001  daddiu      $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x4C54E4u;
        goto label_4c54e4;
    }
    ctx->pc = 0x4C54DCu;
    {
        const bool branch_taken_0x4c54dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x4c54dc) {
            ctx->pc = 0x4C54E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C54DCu;
            // 0x4c54e0: 0x64140001  daddiu      $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C54F0u;
            goto label_4c54f0;
        }
    }
    ctx->pc = 0x4C54E4u;
label_4c54e4:
    // 0x4c54e4: 0x10000003  b           . + 4 + (0x3 << 2)
label_4c54e8:
    if (ctx->pc == 0x4C54E8u) {
        ctx->pc = 0x4C54E8u;
            // 0x4c54e8: 0x8e040d6c  lw          $a0, 0xD6C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3436)));
        ctx->pc = 0x4C54ECu;
        goto label_4c54ec;
    }
    ctx->pc = 0x4C54E4u;
    {
        const bool branch_taken_0x4c54e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C54E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C54E4u;
            // 0x4c54e8: 0x8e040d6c  lw          $a0, 0xD6C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c54e4) {
            ctx->pc = 0x4C54F4u;
            goto label_4c54f4;
        }
    }
    ctx->pc = 0x4C54ECu;
label_4c54ec:
    // 0x4c54ec: 0x64140001  daddiu      $s4, $zero, 0x1
    ctx->pc = 0x4c54ecu;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4c54f0:
    // 0x4c54f0: 0x8e040d6c  lw          $a0, 0xD6C($s0)
    ctx->pc = 0x4c54f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3436)));
label_4c54f4:
    // 0x4c54f4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x4c54f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4c54f8:
    // 0x4c54f8: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x4c54f8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4c54fc:
    // 0x4c54fc: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_4c5500:
    if (ctx->pc == 0x4C5500u) {
        ctx->pc = 0x4C5500u;
            // 0x4c5500: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x4C5504u;
        goto label_4c5504;
    }
    ctx->pc = 0x4C54FCu;
    {
        const bool branch_taken_0x4c54fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4c54fc) {
            ctx->pc = 0x4C5500u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C54FCu;
            // 0x4c5500: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C550Cu;
            goto label_4c550c;
        }
    }
    ctx->pc = 0x4C5504u;
label_4c5504:
    // 0x4c5504: 0x64140001  daddiu      $s4, $zero, 0x1
    ctx->pc = 0x4c5504u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4c5508:
    // 0x4c5508: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x4c5508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4c550c:
    // 0x4c550c: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x4c550cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
label_4c5510:
    // 0x4c5510: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
label_4c5514:
    if (ctx->pc == 0x4C5514u) {
        ctx->pc = 0x4C5514u;
            // 0x4c5514: 0x30830020  andi        $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->pc = 0x4C5518u;
        goto label_4c5518;
    }
    ctx->pc = 0x4C5510u;
    {
        const bool branch_taken_0x4c5510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c5510) {
            ctx->pc = 0x4C5514u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C5510u;
            // 0x4c5514: 0x30830020  andi        $v1, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C5534u;
            goto label_4c5534;
        }
    }
    ctx->pc = 0x4C5518u;
label_4c5518:
    // 0x4c5518: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4c5518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4c551c:
    // 0x4c551c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4c551cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c5520:
    // 0x4c5520: 0xc13181c  jal         func_4C6070
label_4c5524:
    if (ctx->pc == 0x4C5524u) {
        ctx->pc = 0x4C5524u;
            // 0x4c5524: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C5528u;
        goto label_4c5528;
    }
    ctx->pc = 0x4C5520u;
    SET_GPR_U32(ctx, 31, 0x4C5528u);
    ctx->pc = 0x4C5524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C5520u;
            // 0x4c5524: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C6070u;
    if (runtime->hasFunction(0x4C6070u)) {
        auto targetFn = runtime->lookupFunction(0x4C6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C5528u; }
        if (ctx->pc != 0x4C5528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C6070_0x4c6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C5528u; }
        if (ctx->pc != 0x4C5528u) { return; }
    }
    ctx->pc = 0x4C5528u;
label_4c5528:
    // 0x4c5528: 0x100000b1  b           . + 4 + (0xB1 << 2)
label_4c552c:
    if (ctx->pc == 0x4C552Cu) {
        ctx->pc = 0x4C552Cu;
            // 0x4c552c: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x4C5530u;
        goto label_4c5530;
    }
    ctx->pc = 0x4C5528u;
    {
        const bool branch_taken_0x4c5528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4C552Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C5528u;
            // 0x4c552c: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5528) {
            ctx->pc = 0x4C57F0u;
            goto label_4c57f0;
        }
    }
    ctx->pc = 0x4C5530u;
label_4c5530:
    // 0x4c5530: 0x30830020  andi        $v1, $a0, 0x20
    ctx->pc = 0x4c5530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
label_4c5534:
    // 0x4c5534: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
label_4c5538:
    if (ctx->pc == 0x4C5538u) {
        ctx->pc = 0x4C5538u;
            // 0x4c5538: 0x30830010  andi        $v1, $a0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
        ctx->pc = 0x4C553Cu;
        goto label_4c553c;
    }
    ctx->pc = 0x4C5534u;
    {
        const bool branch_taken_0x4c5534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c5534) {
            ctx->pc = 0x4C5538u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C5534u;
            // 0x4c5538: 0x30830010  andi        $v1, $a0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C5558u;
            goto label_4c5558;
        }
    }
    ctx->pc = 0x4C553Cu;
label_4c553c:
    // 0x4c553c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4c553cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4c5540:
    // 0x4c5540: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4c5540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c5544:
    // 0x4c5544: 0xc131694  jal         func_4C5A50
label_4c5548:
    if (ctx->pc == 0x4C5548u) {
        ctx->pc = 0x4C5548u;
            // 0x4c5548: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C554Cu;
        goto label_4c554c;
    }
    ctx->pc = 0x4C5544u;
    SET_GPR_U32(ctx, 31, 0x4C554Cu);
    ctx->pc = 0x4C5548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C5544u;
            // 0x4c5548: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C5A50u;
    if (runtime->hasFunction(0x4C5A50u)) {
        auto targetFn = runtime->lookupFunction(0x4C5A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C554Cu; }
        if (ctx->pc != 0x4C554Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C5A50_0x4c5a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C554Cu; }
        if (ctx->pc != 0x4C554Cu) { return; }
    }
    ctx->pc = 0x4C554Cu;
label_4c554c:
    // 0x4c554c: 0x100000a7  b           . + 4 + (0xA7 << 2)
label_4c5550:
    if (ctx->pc == 0x4C5550u) {
        ctx->pc = 0x4C5554u;
        goto label_4c5554;
    }
    ctx->pc = 0x4C554Cu;
    {
        const bool branch_taken_0x4c554c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c554c) {
            ctx->pc = 0x4C57ECu;
            goto label_4c57ec;
        }
    }
    ctx->pc = 0x4C5554u;
label_4c5554:
    // 0x4c5554: 0x30830010  andi        $v1, $a0, 0x10
    ctx->pc = 0x4c5554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
label_4c5558:
    // 0x4c5558: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_4c555c:
    if (ctx->pc == 0x4C555Cu) {
        ctx->pc = 0x4C5560u;
        goto label_4c5560;
    }
    ctx->pc = 0x4C5558u;
    {
        const bool branch_taken_0x4c5558 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c5558) {
            ctx->pc = 0x4C5578u;
            goto label_4c5578;
        }
    }
    ctx->pc = 0x4C5560u;
label_4c5560:
    // 0x4c5560: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4c5560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4c5564:
    // 0x4c5564: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4c5564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c5568:
    // 0x4c5568: 0xc131758  jal         func_4C5D60
label_4c556c:
    if (ctx->pc == 0x4C556Cu) {
        ctx->pc = 0x4C556Cu;
            // 0x4c556c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C5570u;
        goto label_4c5570;
    }
    ctx->pc = 0x4C5568u;
    SET_GPR_U32(ctx, 31, 0x4C5570u);
    ctx->pc = 0x4C556Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C5568u;
            // 0x4c556c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C5D60u;
    if (runtime->hasFunction(0x4C5D60u)) {
        auto targetFn = runtime->lookupFunction(0x4C5D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C5570u; }
        if (ctx->pc != 0x4C5570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C5D60_0x4c5d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C5570u; }
        if (ctx->pc != 0x4C5570u) { return; }
    }
    ctx->pc = 0x4C5570u;
label_4c5570:
    // 0x4c5570: 0x1000009e  b           . + 4 + (0x9E << 2)
label_4c5574:
    if (ctx->pc == 0x4C5574u) {
        ctx->pc = 0x4C5578u;
        goto label_4c5578;
    }
    ctx->pc = 0x4C5570u;
    {
        const bool branch_taken_0x4c5570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c5570) {
            ctx->pc = 0x4C57ECu;
            goto label_4c57ec;
        }
    }
    ctx->pc = 0x4C5578u;
label_4c5578:
    // 0x4c5578: 0x52a00041  beql        $s5, $zero, . + 4 + (0x41 << 2)
label_4c557c:
    if (ctx->pc == 0x4C557Cu) {
        ctx->pc = 0x4C557Cu;
            // 0x4c557c: 0x30830001  andi        $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x4C5580u;
        goto label_4c5580;
    }
    ctx->pc = 0x4C5578u;
    {
        const bool branch_taken_0x4c5578 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c5578) {
            ctx->pc = 0x4C557Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C5578u;
            // 0x4c557c: 0x30830001  andi        $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C5680u;
            goto label_4c5680;
        }
    }
    ctx->pc = 0x4C5580u;
label_4c5580:
    // 0x4c5580: 0x86620004  lh          $v0, 0x4($s3)
    ctx->pc = 0x4c5580u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
label_4c5584:
    // 0x4c5584: 0xc642000c  lwc1        $f2, 0xC($s2)
    ctx->pc = 0x4c5584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c5588:
    // 0x4c5588: 0x86660006  lh          $a2, 0x6($s3)
    ctx->pc = 0x4c5588u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
label_4c558c:
    // 0x4c558c: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x4c558cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c5590:
    // 0x4c5590: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x4c5590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4c5594:
    // 0x4c5594: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x4c5594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4c5598:
    // 0x4c5598: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4c5598u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c559c:
    // 0x4c559c: 0x0  nop
    ctx->pc = 0x4c559cu;
    // NOP
label_4c55a0:
    // 0x4c55a0: 0x468005e0  cvt.s.w     $f23, $f0
    ctx->pc = 0x4c55a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
label_4c55a4:
    // 0x4c55a4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4c55a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4c55a8:
    // 0x4c55a8: 0x3c130064  lui         $s3, 0x64
    ctx->pc = 0x4c55a8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)100 << 16));
label_4c55ac:
    // 0x4c55ac: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x4c55acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_4c55b0:
    // 0x4c55b0: 0x90740116  lbu         $s4, 0x116($v1)
    ctx->pc = 0x4c55b0u;
    SET_GPR_U32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 278)));
label_4c55b4:
    // 0x4c55b4: 0x26732120  addiu       $s3, $s3, 0x2120
    ctx->pc = 0x4c55b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8480));
label_4c55b8:
    // 0x4c55b8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x4c55b8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c55bc:
    // 0x4c55bc: 0x0  nop
    ctx->pc = 0x4c55bcu;
    // NOP
label_4c55c0:
    // 0x4c55c0: 0x468005a0  cvt.s.w     $f22, $f0
    ctx->pc = 0x4c55c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
label_4c55c4:
    // 0x4c55c4: 0xc0506ac  jal         func_141AB0
label_4c55c8:
    if (ctx->pc == 0x4C55C8u) {
        ctx->pc = 0x4C55C8u;
            // 0x4c55c8: 0x46011502  mul.s       $f20, $f2, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
        ctx->pc = 0x4C55CCu;
        goto label_4c55cc;
    }
    ctx->pc = 0x4C55C4u;
    SET_GPR_U32(ctx, 31, 0x4C55CCu);
    ctx->pc = 0x4C55C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C55C4u;
            // 0x4c55c8: 0x46011502  mul.s       $f20, $f2, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C55CCu; }
        if (ctx->pc != 0x4C55CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C55CCu; }
        if (ctx->pc != 0x4C55CCu) { return; }
    }
    ctx->pc = 0x4C55CCu;
label_4c55cc:
    // 0x4c55cc: 0x3c150067  lui         $s5, 0x67
    ctx->pc = 0x4c55ccu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)103 << 16));
label_4c55d0:
    // 0x4c55d0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x4c55d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_4c55d4:
    // 0x4c55d4: 0x26b5a520  addiu       $s5, $s5, -0x5AE0
    ctx->pc = 0x4c55d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294944032));
label_4c55d8:
    // 0x4c55d8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x4c55d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4c55dc:
    // 0x4c55dc: 0xc6a20008  lwc1        $f2, 0x8($s5)
    ctx->pc = 0x4c55dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c55e0:
    // 0x4c55e0: 0xc6a0000c  lwc1        $f0, 0xC($s5)
    ctx->pc = 0x4c55e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c55e4:
    // 0x4c55e4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4c55e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4c55e8:
    // 0x4c55e8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4c55e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4c55ec:
    // 0x4c55ec: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x4c55ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
label_4c55f0:
    // 0x4c55f0: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x4c55f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_4c55f4:
    // 0x4c55f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4c55f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c55f8:
    // 0x4c55f8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x4c55f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_4c55fc:
    // 0x4c55fc: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4c55fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4c5600:
    // 0x4c5600: 0x46020d42  mul.s       $f21, $f1, $f2
    ctx->pc = 0x4c5600u;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_4c5604:
    // 0x4c5604: 0x320f809  jalr        $t9
label_4c5608:
    if (ctx->pc == 0x4C5608u) {
        ctx->pc = 0x4C5608u;
            // 0x4c5608: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4C560Cu;
        goto label_4c560c;
    }
    ctx->pc = 0x4C5604u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C560Cu);
        ctx->pc = 0x4C5608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C5604u;
            // 0x4c5608: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C560Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C560Cu; }
            if (ctx->pc != 0x4C560Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4C560Cu;
label_4c560c:
    // 0x4c560c: 0x86690000  lh          $t1, 0x0($s3)
    ctx->pc = 0x4c560cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_4c5610:
    // 0x4c5610: 0x328300ff  andi        $v1, $s4, 0xFF
    ctx->pc = 0x4c5610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_4c5614:
    // 0x4c5614: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4c5614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_4c5618:
    // 0x4c5618: 0x86680002  lh          $t0, 0x2($s3)
    ctx->pc = 0x4c5618u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_4c561c:
    // 0x4c561c: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x4c561cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4c5620:
    // 0x4c5620: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4c5620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4c5624:
    // 0x4c5624: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x4c5624u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c5628:
    // 0x4c5628: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4c5628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4c562c:
    // 0x4c562c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4c562cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4c5630:
    // 0x4c5630: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4c5630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4c5634:
    // 0x4c5634: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4c5634u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c5638:
    // 0x4c5638: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4c5638u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c563c:
    // 0x4c563c: 0x0  nop
    ctx->pc = 0x4c563cu;
    // NOP
label_4c5640:
    // 0x4c5640: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4c5640u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4c5644:
    // 0x4c5644: 0x4615bb01  sub.s       $f12, $f23, $f21
    ctx->pc = 0x4c5644u;
    ctx->f[12] = FPU_SUB_S(ctx->f[23], ctx->f[21]);
label_4c5648:
    // 0x4c5648: 0x4615bb80  add.s       $f14, $f23, $f21
    ctx->pc = 0x4c5648u;
    ctx->f[14] = FPU_ADD_S(ctx->f[23], ctx->f[21]);
label_4c564c:
    // 0x4c564c: 0x4614b341  sub.s       $f13, $f22, $f20
    ctx->pc = 0x4c564cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[22], ctx->f[20]);
label_4c5650:
    // 0x4c5650: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4c5650u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4c5654:
    // 0x4c5654: 0xc0bc284  jal         func_2F0A10
label_4c5658:
    if (ctx->pc == 0x4C5658u) {
        ctx->pc = 0x4C5658u;
            // 0x4c5658: 0x4614b3c0  add.s       $f15, $f22, $f20 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[22], ctx->f[20]);
        ctx->pc = 0x4C565Cu;
        goto label_4c565c;
    }
    ctx->pc = 0x4C5654u;
    SET_GPR_U32(ctx, 31, 0x4C565Cu);
    ctx->pc = 0x4C5658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C5654u;
            // 0x4c5658: 0x4614b3c0  add.s       $f15, $f22, $f20 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[22], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C565Cu; }
        if (ctx->pc != 0x4C565Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C565Cu; }
        if (ctx->pc != 0x4C565Cu) { return; }
    }
    ctx->pc = 0x4C565Cu;
label_4c565c:
    // 0x4c565c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4c565cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4c5660:
    // 0x4c5660: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x4c5660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_4c5664:
    // 0x4c5664: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4c5664u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c5668:
    // 0x4c5668: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4c5668u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4c566c:
    // 0x4c566c: 0x320f809  jalr        $t9
label_4c5670:
    if (ctx->pc == 0x4C5670u) {
        ctx->pc = 0x4C5674u;
        goto label_4c5674;
    }
    ctx->pc = 0x4C566Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C5674u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C5674u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C5674u; }
            if (ctx->pc != 0x4C5674u) { return; }
        }
        }
    }
    ctx->pc = 0x4C5674u;
label_4c5674:
    // 0x4c5674: 0x1000005d  b           . + 4 + (0x5D << 2)
label_4c5678:
    if (ctx->pc == 0x4C5678u) {
        ctx->pc = 0x4C567Cu;
        goto label_4c567c;
    }
    ctx->pc = 0x4C5674u;
    {
        const bool branch_taken_0x4c5674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c5674) {
            ctx->pc = 0x4C57ECu;
            goto label_4c57ec;
        }
    }
    ctx->pc = 0x4C567Cu;
label_4c567c:
    // 0x4c567c: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x4c567cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_4c5680:
    // 0x4c5680: 0x50600047  beql        $v1, $zero, . + 4 + (0x47 << 2)
label_4c5684:
    if (ctx->pc == 0x4C5684u) {
        ctx->pc = 0x4C5684u;
            // 0x4c5684: 0x30830004  andi        $v1, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->pc = 0x4C5688u;
        goto label_4c5688;
    }
    ctx->pc = 0x4C5680u;
    {
        const bool branch_taken_0x4c5680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c5680) {
            ctx->pc = 0x4C5684u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C5680u;
            // 0x4c5684: 0x30830004  andi        $v1, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C57A0u;
            goto label_4c57a0;
        }
    }
    ctx->pc = 0x4C5688u;
label_4c5688:
    // 0x4c5688: 0xc6010a7c  lwc1        $f1, 0xA7C($s0)
    ctx->pc = 0x4c5688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c568c:
    // 0x4c568c: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x4c568cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
label_4c5690:
    // 0x4c5690: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4c5690u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c5694:
    // 0x4c5694: 0x0  nop
    ctx->pc = 0x4c5694u;
    // NOP
label_4c5698:
    // 0x4c5698: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4c5698u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4c569c:
    // 0x4c569c: 0x45010053  bc1t        . + 4 + (0x53 << 2)
label_4c56a0:
    if (ctx->pc == 0x4C56A0u) {
        ctx->pc = 0x4C56A4u;
        goto label_4c56a4;
    }
    ctx->pc = 0x4C569Cu;
    {
        const bool branch_taken_0x4c569c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4c569c) {
            ctx->pc = 0x4C57ECu;
            goto label_4c57ec;
        }
    }
    ctx->pc = 0x4C56A4u;
label_4c56a4:
    // 0x4c56a4: 0x86640004  lh          $a0, 0x4($s3)
    ctx->pc = 0x4c56a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
label_4c56a8:
    // 0x4c56a8: 0x3c140064  lui         $s4, 0x64
    ctx->pc = 0x4c56a8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)100 << 16));
label_4c56ac:
    // 0x4c56ac: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4c56acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4c56b0:
    // 0x4c56b0: 0xc642000c  lwc1        $f2, 0xC($s2)
    ctx->pc = 0x4c56b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c56b4:
    // 0x4c56b4: 0x86630006  lh          $v1, 0x6($s3)
    ctx->pc = 0x4c56b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 6)));
label_4c56b8:
    // 0x4c56b8: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x4c56b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4c56bc:
    // 0x4c56bc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4c56bcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c56c0:
    // 0x4c56c0: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x4c56c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4c56c4:
    // 0x4c56c4: 0x468005e0  cvt.s.w     $f23, $f0
    ctx->pc = 0x4c56c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
label_4c56c8:
    // 0x4c56c8: 0x26942120  addiu       $s4, $s4, 0x2120
    ctx->pc = 0x4c56c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8480));
label_4c56cc:
    // 0x4c56cc: 0x90530116  lbu         $s3, 0x116($v0)
    ctx->pc = 0x4c56ccu;
    SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 278)));
label_4c56d0:
    // 0x4c56d0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4c56d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4c56d4:
    // 0x4c56d4: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x4c56d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_4c56d8:
    // 0x4c56d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4c56d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c56dc:
    // 0x4c56dc: 0x0  nop
    ctx->pc = 0x4c56dcu;
    // NOP
label_4c56e0:
    // 0x4c56e0: 0x468005a0  cvt.s.w     $f22, $f0
    ctx->pc = 0x4c56e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
label_4c56e4:
    // 0x4c56e4: 0xc0506ac  jal         func_141AB0
label_4c56e8:
    if (ctx->pc == 0x4C56E8u) {
        ctx->pc = 0x4C56E8u;
            // 0x4c56e8: 0x46011502  mul.s       $f20, $f2, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
        ctx->pc = 0x4C56ECu;
        goto label_4c56ec;
    }
    ctx->pc = 0x4C56E4u;
    SET_GPR_U32(ctx, 31, 0x4C56ECu);
    ctx->pc = 0x4C56E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C56E4u;
            // 0x4c56e8: 0x46011502  mul.s       $f20, $f2, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C56ECu; }
        if (ctx->pc != 0x4C56ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C56ECu; }
        if (ctx->pc != 0x4C56ECu) { return; }
    }
    ctx->pc = 0x4C56ECu;
label_4c56ec:
    // 0x4c56ec: 0x3c150067  lui         $s5, 0x67
    ctx->pc = 0x4c56ecu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)103 << 16));
label_4c56f0:
    // 0x4c56f0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x4c56f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_4c56f4:
    // 0x4c56f4: 0x26b5a540  addiu       $s5, $s5, -0x5AC0
    ctx->pc = 0x4c56f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294944064));
label_4c56f8:
    // 0x4c56f8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x4c56f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4c56fc:
    // 0x4c56fc: 0xc6a20008  lwc1        $f2, 0x8($s5)
    ctx->pc = 0x4c56fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4c5700:
    // 0x4c5700: 0xc6a0000c  lwc1        $f0, 0xC($s5)
    ctx->pc = 0x4c5700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4c5704:
    // 0x4c5704: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4c5704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4c5708:
    // 0x4c5708: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4c5708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4c570c:
    // 0x4c570c: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x4c570cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
label_4c5710:
    // 0x4c5710: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x4c5710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_4c5714:
    // 0x4c5714: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4c5714u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c5718:
    // 0x4c5718: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x4c5718u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_4c571c:
    // 0x4c571c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4c571cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4c5720:
    // 0x4c5720: 0x46020d42  mul.s       $f21, $f1, $f2
    ctx->pc = 0x4c5720u;
    ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_4c5724:
    // 0x4c5724: 0x320f809  jalr        $t9
label_4c5728:
    if (ctx->pc == 0x4C5728u) {
        ctx->pc = 0x4C5728u;
            // 0x4c5728: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4C572Cu;
        goto label_4c572c;
    }
    ctx->pc = 0x4C5724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C572Cu);
        ctx->pc = 0x4C5728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C5724u;
            // 0x4c5728: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C572Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C572Cu; }
            if (ctx->pc != 0x4C572Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4C572Cu;
label_4c572c:
    // 0x4c572c: 0x86890000  lh          $t1, 0x0($s4)
    ctx->pc = 0x4c572cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_4c5730:
    // 0x4c5730: 0x326300ff  andi        $v1, $s3, 0xFF
    ctx->pc = 0x4c5730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_4c5734:
    // 0x4c5734: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4c5734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_4c5738:
    // 0x4c5738: 0x86880002  lh          $t0, 0x2($s4)
    ctx->pc = 0x4c5738u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_4c573c:
    // 0x4c573c: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x4c573cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4c5740:
    // 0x4c5740: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x4c5740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4c5744:
    // 0x4c5744: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x4c5744u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c5748:
    // 0x4c5748: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4c5748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4c574c:
    // 0x4c574c: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4c574cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4c5750:
    // 0x4c5750: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4c5750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4c5754:
    // 0x4c5754: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4c5754u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c5758:
    // 0x4c5758: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4c5758u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4c575c:
    // 0x4c575c: 0x0  nop
    ctx->pc = 0x4c575cu;
    // NOP
label_4c5760:
    // 0x4c5760: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4c5760u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4c5764:
    // 0x4c5764: 0x4615bb01  sub.s       $f12, $f23, $f21
    ctx->pc = 0x4c5764u;
    ctx->f[12] = FPU_SUB_S(ctx->f[23], ctx->f[21]);
label_4c5768:
    // 0x4c5768: 0x4615bb80  add.s       $f14, $f23, $f21
    ctx->pc = 0x4c5768u;
    ctx->f[14] = FPU_ADD_S(ctx->f[23], ctx->f[21]);
label_4c576c:
    // 0x4c576c: 0x4614b341  sub.s       $f13, $f22, $f20
    ctx->pc = 0x4c576cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[22], ctx->f[20]);
label_4c5770:
    // 0x4c5770: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4c5770u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4c5774:
    // 0x4c5774: 0xc0bc284  jal         func_2F0A10
label_4c5778:
    if (ctx->pc == 0x4C5778u) {
        ctx->pc = 0x4C5778u;
            // 0x4c5778: 0x4614b3c0  add.s       $f15, $f22, $f20 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[22], ctx->f[20]);
        ctx->pc = 0x4C577Cu;
        goto label_4c577c;
    }
    ctx->pc = 0x4C5774u;
    SET_GPR_U32(ctx, 31, 0x4C577Cu);
    ctx->pc = 0x4C5778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C5774u;
            // 0x4c5778: 0x4614b3c0  add.s       $f15, $f22, $f20 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[22], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C577Cu; }
        if (ctx->pc != 0x4C577Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C577Cu; }
        if (ctx->pc != 0x4C577Cu) { return; }
    }
    ctx->pc = 0x4C577Cu;
label_4c577c:
    // 0x4c577c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4c577cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4c5780:
    // 0x4c5780: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x4c5780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_4c5784:
    // 0x4c5784: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4c5784u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4c5788:
    // 0x4c5788: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4c5788u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4c578c:
    // 0x4c578c: 0x320f809  jalr        $t9
label_4c5790:
    if (ctx->pc == 0x4C5790u) {
        ctx->pc = 0x4C5794u;
        goto label_4c5794;
    }
    ctx->pc = 0x4C578Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4C5794u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4C5794u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4C5794u; }
            if (ctx->pc != 0x4C5794u) { return; }
        }
        }
    }
    ctx->pc = 0x4C5794u;
label_4c5794:
    // 0x4c5794: 0x10000015  b           . + 4 + (0x15 << 2)
label_4c5798:
    if (ctx->pc == 0x4C5798u) {
        ctx->pc = 0x4C579Cu;
        goto label_4c579c;
    }
    ctx->pc = 0x4C5794u;
    {
        const bool branch_taken_0x4c5794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c5794) {
            ctx->pc = 0x4C57ECu;
            goto label_4c57ec;
        }
    }
    ctx->pc = 0x4C579Cu;
label_4c579c:
    // 0x4c579c: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x4c579cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_4c57a0:
    // 0x4c57a0: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
label_4c57a4:
    if (ctx->pc == 0x4C57A4u) {
        ctx->pc = 0x4C57A4u;
            // 0x4c57a4: 0x30830008  andi        $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
        ctx->pc = 0x4C57A8u;
        goto label_4c57a8;
    }
    ctx->pc = 0x4C57A0u;
    {
        const bool branch_taken_0x4c57a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c57a0) {
            ctx->pc = 0x4C57A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C57A0u;
            // 0x4c57a4: 0x30830008  andi        $v1, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C57CCu;
            goto label_4c57cc;
        }
    }
    ctx->pc = 0x4C57A8u;
label_4c57a8:
    // 0x4c57a8: 0x16800010  bnez        $s4, . + 4 + (0x10 << 2)
label_4c57ac:
    if (ctx->pc == 0x4C57ACu) {
        ctx->pc = 0x4C57B0u;
        goto label_4c57b0;
    }
    ctx->pc = 0x4C57A8u;
    {
        const bool branch_taken_0x4c57a8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c57a8) {
            ctx->pc = 0x4C57ECu;
            goto label_4c57ec;
        }
    }
    ctx->pc = 0x4C57B0u;
label_4c57b0:
    // 0x4c57b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4c57b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4c57b4:
    // 0x4c57b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4c57b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c57b8:
    // 0x4c57b8: 0xc131694  jal         func_4C5A50
label_4c57bc:
    if (ctx->pc == 0x4C57BCu) {
        ctx->pc = 0x4C57BCu;
            // 0x4c57bc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C57C0u;
        goto label_4c57c0;
    }
    ctx->pc = 0x4C57B8u;
    SET_GPR_U32(ctx, 31, 0x4C57C0u);
    ctx->pc = 0x4C57BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C57B8u;
            // 0x4c57bc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C5A50u;
    if (runtime->hasFunction(0x4C5A50u)) {
        auto targetFn = runtime->lookupFunction(0x4C5A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C57C0u; }
        if (ctx->pc != 0x4C57C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C5A50_0x4c5a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C57C0u; }
        if (ctx->pc != 0x4C57C0u) { return; }
    }
    ctx->pc = 0x4C57C0u;
label_4c57c0:
    // 0x4c57c0: 0x1000000a  b           . + 4 + (0xA << 2)
label_4c57c4:
    if (ctx->pc == 0x4C57C4u) {
        ctx->pc = 0x4C57C8u;
        goto label_4c57c8;
    }
    ctx->pc = 0x4C57C0u;
    {
        const bool branch_taken_0x4c57c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c57c0) {
            ctx->pc = 0x4C57ECu;
            goto label_4c57ec;
        }
    }
    ctx->pc = 0x4C57C8u;
label_4c57c8:
    // 0x4c57c8: 0x30830008  andi        $v1, $a0, 0x8
    ctx->pc = 0x4c57c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
label_4c57cc:
    // 0x4c57cc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_4c57d0:
    if (ctx->pc == 0x4C57D0u) {
        ctx->pc = 0x4C57D4u;
        goto label_4c57d4;
    }
    ctx->pc = 0x4C57CCu;
    {
        const bool branch_taken_0x4c57cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c57cc) {
            ctx->pc = 0x4C57ECu;
            goto label_4c57ec;
        }
    }
    ctx->pc = 0x4C57D4u;
label_4c57d4:
    // 0x4c57d4: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
label_4c57d8:
    if (ctx->pc == 0x4C57D8u) {
        ctx->pc = 0x4C57DCu;
        goto label_4c57dc;
    }
    ctx->pc = 0x4C57D4u;
    {
        const bool branch_taken_0x4c57d4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c57d4) {
            ctx->pc = 0x4C57ECu;
            goto label_4c57ec;
        }
    }
    ctx->pc = 0x4C57DCu;
label_4c57dc:
    // 0x4c57dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4c57dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4c57e0:
    // 0x4c57e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4c57e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c57e4:
    // 0x4c57e4: 0xc131758  jal         func_4C5D60
label_4c57e8:
    if (ctx->pc == 0x4C57E8u) {
        ctx->pc = 0x4C57E8u;
            // 0x4c57e8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C57ECu;
        goto label_4c57ec;
    }
    ctx->pc = 0x4C57E4u;
    SET_GPR_U32(ctx, 31, 0x4C57ECu);
    ctx->pc = 0x4C57E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C57E4u;
            // 0x4c57e8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C5D60u;
    if (runtime->hasFunction(0x4C5D60u)) {
        auto targetFn = runtime->lookupFunction(0x4C5D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C57ECu; }
        if (ctx->pc != 0x4C57ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C5D60_0x4c5d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C57ECu; }
        if (ctx->pc != 0x4C57ECu) { return; }
    }
    ctx->pc = 0x4C57ECu;
label_4c57ec:
    // 0x4c57ec: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x4c57ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4c57f0:
    // 0x4c57f0: 0x16c30005  bne         $s6, $v1, . + 4 + (0x5 << 2)
label_4c57f4:
    if (ctx->pc == 0x4C57F4u) {
        ctx->pc = 0x4C57F8u;
        goto label_4c57f8;
    }
    ctx->pc = 0x4C57F0u;
    {
        const bool branch_taken_0x4c57f0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 3));
        if (branch_taken_0x4c57f0) {
            ctx->pc = 0x4C5808u;
            goto label_4c5808;
        }
    }
    ctx->pc = 0x4C57F8u;
label_4c57f8:
    // 0x4c57f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4c57f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4c57fc:
    // 0x4c57fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4c57fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c5800:
    // 0x4c5800: 0xc131630  jal         func_4C58C0
label_4c5804:
    if (ctx->pc == 0x4C5804u) {
        ctx->pc = 0x4C5804u;
            // 0x4c5804: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C5808u;
        goto label_4c5808;
    }
    ctx->pc = 0x4C5800u;
    SET_GPR_U32(ctx, 31, 0x4C5808u);
    ctx->pc = 0x4C5804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C5800u;
            // 0x4c5804: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C58C0u;
    if (runtime->hasFunction(0x4C58C0u)) {
        auto targetFn = runtime->lookupFunction(0x4C58C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C5808u; }
        if (ctx->pc != 0x4C5808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004C58C0_0x4c58c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4C5808u; }
        if (ctx->pc != 0x4C5808u) { return; }
    }
    ctx->pc = 0x4C5808u;
label_4c5808:
    // 0x4c5808: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x4c5808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_4c580c:
    // 0x4c580c: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x4c580cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_4c5810:
    // 0x4c5810: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x4c5810u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4c5814:
    // 0x4c5814: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x4c5814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_4c5818:
    // 0x4c5818: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4c5818u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4c581c:
    // 0x4c581c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x4c581cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4c5820:
    // 0x4c5820: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4c5820u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4c5824:
    // 0x4c5824: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4c5824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4c5828:
    // 0x4c5828: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4c5828u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4c582c:
    // 0x4c582c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4c582cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4c5830:
    // 0x4c5830: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4c5830u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4c5834:
    // 0x4c5834: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4c5834u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c5838:
    // 0x4c5838: 0x3e00008  jr          $ra
label_4c583c:
    if (ctx->pc == 0x4C583Cu) {
        ctx->pc = 0x4C583Cu;
            // 0x4c583c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4C5840u;
        goto label_4c5840;
    }
    ctx->pc = 0x4C5838u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C583Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C5838u;
            // 0x4c583c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C5840u;
label_4c5840:
    // 0x4c5840: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4c5840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4c5844:
    // 0x4c5844: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4c5844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4c5848:
    // 0x4c5848: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4c5848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4c584c:
    // 0x4c584c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4c584cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4c5850:
    // 0x4c5850: 0x90830009  lbu         $v1, 0x9($a0)
    ctx->pc = 0x4c5850u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
label_4c5854:
    // 0x4c5854: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
label_4c5858:
    if (ctx->pc == 0x4C5858u) {
        ctx->pc = 0x4C5858u;
            // 0x4c5858: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C585Cu;
        goto label_4c585c;
    }
    ctx->pc = 0x4C5854u;
    {
        const bool branch_taken_0x4c5854 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4C5858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C5854u;
            // 0x4c5858: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c5854) {
            ctx->pc = 0x4C58A0u;
            goto label_4c58a0;
        }
    }
    ctx->pc = 0x4C585Cu;
label_4c585c:
    // 0x4c585c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4c585cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4c5860:
    // 0x4c5860: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x4c5860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4c5864:
    // 0x4c5864: 0x8c630960  lw          $v1, 0x960($v1)
    ctx->pc = 0x4c5864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2400)));
label_4c5868:
    // 0x4c5868: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x4c5868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_4c586c:
    // 0x4c586c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_4c5870:
    if (ctx->pc == 0x4C5870u) {
        ctx->pc = 0x4C5874u;
        goto label_4c5874;
    }
    ctx->pc = 0x4C586Cu;
    {
        const bool branch_taken_0x4c586c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4c586c) {
            ctx->pc = 0x4C58A0u;
            goto label_4c58a0;
        }
    }
    ctx->pc = 0x4C5874u;
label_4c5874:
    // 0x4c5874: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4c5874u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4c5878:
    // 0x4c5878: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4c5878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4c587c:
    // 0x4c587c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4c587cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4c5880:
    // 0x4c5880: 0xc1314cc  jal         func_4C5330
label_4c5884:
    if (ctx->pc == 0x4C5884u) {
        ctx->pc = 0x4C5884u;
            // 0x4c5884: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C5888u;
        goto label_4c5888;
    }
    ctx->pc = 0x4C5880u;
    SET_GPR_U32(ctx, 31, 0x4C5888u);
    ctx->pc = 0x4C5884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4C5880u;
            // 0x4c5884: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4C5330u;
    goto label_4c5330;
    ctx->pc = 0x4C5888u;
label_4c5888:
    // 0x4c5888: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x4c5888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4c588c:
    // 0x4c588c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4c588cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4c5890:
    // 0x4c5890: 0x8c630110  lw          $v1, 0x110($v1)
    ctx->pc = 0x4c5890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
label_4c5894:
    // 0x4c5894: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x4c5894u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_4c5898:
    // 0x4c5898: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
label_4c589c:
    if (ctx->pc == 0x4C589Cu) {
        ctx->pc = 0x4C589Cu;
            // 0x4c589c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4C58A0u;
        goto label_4c58a0;
    }
    ctx->pc = 0x4C5898u;
    {
        const bool branch_taken_0x4c5898 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4c5898) {
            ctx->pc = 0x4C589Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4C5898u;
            // 0x4c589c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4C587Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4c587c;
        }
    }
    ctx->pc = 0x4C58A0u;
label_4c58a0:
    // 0x4c58a0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4c58a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4c58a4:
    // 0x4c58a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4c58a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4c58a8:
    // 0x4c58a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4c58a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4c58ac:
    // 0x4c58ac: 0x3e00008  jr          $ra
label_4c58b0:
    if (ctx->pc == 0x4C58B0u) {
        ctx->pc = 0x4C58B0u;
            // 0x4c58b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4C58B4u;
        goto label_4c58b4;
    }
    ctx->pc = 0x4C58ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C58B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4C58ACu;
            // 0x4c58b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4C58B4u;
label_4c58b4:
    // 0x4c58b4: 0x0  nop
    ctx->pc = 0x4c58b4u;
    // NOP
label_4c58b8:
    // 0x4c58b8: 0x0  nop
    ctx->pc = 0x4c58b8u;
    // NOP
label_4c58bc:
    // 0x4c58bc: 0x0  nop
    ctx->pc = 0x4c58bcu;
    // NOP
}
