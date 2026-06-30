#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004B51C0
// Address: 0x4b51c0 - 0x4b6170
void sub_004B51C0_0x4b51c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B51C0_0x4b51c0");
#endif

    switch (ctx->pc) {
        case 0x4b51c0u: goto label_4b51c0;
        case 0x4b51c4u: goto label_4b51c4;
        case 0x4b51c8u: goto label_4b51c8;
        case 0x4b51ccu: goto label_4b51cc;
        case 0x4b51d0u: goto label_4b51d0;
        case 0x4b51d4u: goto label_4b51d4;
        case 0x4b51d8u: goto label_4b51d8;
        case 0x4b51dcu: goto label_4b51dc;
        case 0x4b51e0u: goto label_4b51e0;
        case 0x4b51e4u: goto label_4b51e4;
        case 0x4b51e8u: goto label_4b51e8;
        case 0x4b51ecu: goto label_4b51ec;
        case 0x4b51f0u: goto label_4b51f0;
        case 0x4b51f4u: goto label_4b51f4;
        case 0x4b51f8u: goto label_4b51f8;
        case 0x4b51fcu: goto label_4b51fc;
        case 0x4b5200u: goto label_4b5200;
        case 0x4b5204u: goto label_4b5204;
        case 0x4b5208u: goto label_4b5208;
        case 0x4b520cu: goto label_4b520c;
        case 0x4b5210u: goto label_4b5210;
        case 0x4b5214u: goto label_4b5214;
        case 0x4b5218u: goto label_4b5218;
        case 0x4b521cu: goto label_4b521c;
        case 0x4b5220u: goto label_4b5220;
        case 0x4b5224u: goto label_4b5224;
        case 0x4b5228u: goto label_4b5228;
        case 0x4b522cu: goto label_4b522c;
        case 0x4b5230u: goto label_4b5230;
        case 0x4b5234u: goto label_4b5234;
        case 0x4b5238u: goto label_4b5238;
        case 0x4b523cu: goto label_4b523c;
        case 0x4b5240u: goto label_4b5240;
        case 0x4b5244u: goto label_4b5244;
        case 0x4b5248u: goto label_4b5248;
        case 0x4b524cu: goto label_4b524c;
        case 0x4b5250u: goto label_4b5250;
        case 0x4b5254u: goto label_4b5254;
        case 0x4b5258u: goto label_4b5258;
        case 0x4b525cu: goto label_4b525c;
        case 0x4b5260u: goto label_4b5260;
        case 0x4b5264u: goto label_4b5264;
        case 0x4b5268u: goto label_4b5268;
        case 0x4b526cu: goto label_4b526c;
        case 0x4b5270u: goto label_4b5270;
        case 0x4b5274u: goto label_4b5274;
        case 0x4b5278u: goto label_4b5278;
        case 0x4b527cu: goto label_4b527c;
        case 0x4b5280u: goto label_4b5280;
        case 0x4b5284u: goto label_4b5284;
        case 0x4b5288u: goto label_4b5288;
        case 0x4b528cu: goto label_4b528c;
        case 0x4b5290u: goto label_4b5290;
        case 0x4b5294u: goto label_4b5294;
        case 0x4b5298u: goto label_4b5298;
        case 0x4b529cu: goto label_4b529c;
        case 0x4b52a0u: goto label_4b52a0;
        case 0x4b52a4u: goto label_4b52a4;
        case 0x4b52a8u: goto label_4b52a8;
        case 0x4b52acu: goto label_4b52ac;
        case 0x4b52b0u: goto label_4b52b0;
        case 0x4b52b4u: goto label_4b52b4;
        case 0x4b52b8u: goto label_4b52b8;
        case 0x4b52bcu: goto label_4b52bc;
        case 0x4b52c0u: goto label_4b52c0;
        case 0x4b52c4u: goto label_4b52c4;
        case 0x4b52c8u: goto label_4b52c8;
        case 0x4b52ccu: goto label_4b52cc;
        case 0x4b52d0u: goto label_4b52d0;
        case 0x4b52d4u: goto label_4b52d4;
        case 0x4b52d8u: goto label_4b52d8;
        case 0x4b52dcu: goto label_4b52dc;
        case 0x4b52e0u: goto label_4b52e0;
        case 0x4b52e4u: goto label_4b52e4;
        case 0x4b52e8u: goto label_4b52e8;
        case 0x4b52ecu: goto label_4b52ec;
        case 0x4b52f0u: goto label_4b52f0;
        case 0x4b52f4u: goto label_4b52f4;
        case 0x4b52f8u: goto label_4b52f8;
        case 0x4b52fcu: goto label_4b52fc;
        case 0x4b5300u: goto label_4b5300;
        case 0x4b5304u: goto label_4b5304;
        case 0x4b5308u: goto label_4b5308;
        case 0x4b530cu: goto label_4b530c;
        case 0x4b5310u: goto label_4b5310;
        case 0x4b5314u: goto label_4b5314;
        case 0x4b5318u: goto label_4b5318;
        case 0x4b531cu: goto label_4b531c;
        case 0x4b5320u: goto label_4b5320;
        case 0x4b5324u: goto label_4b5324;
        case 0x4b5328u: goto label_4b5328;
        case 0x4b532cu: goto label_4b532c;
        case 0x4b5330u: goto label_4b5330;
        case 0x4b5334u: goto label_4b5334;
        case 0x4b5338u: goto label_4b5338;
        case 0x4b533cu: goto label_4b533c;
        case 0x4b5340u: goto label_4b5340;
        case 0x4b5344u: goto label_4b5344;
        case 0x4b5348u: goto label_4b5348;
        case 0x4b534cu: goto label_4b534c;
        case 0x4b5350u: goto label_4b5350;
        case 0x4b5354u: goto label_4b5354;
        case 0x4b5358u: goto label_4b5358;
        case 0x4b535cu: goto label_4b535c;
        case 0x4b5360u: goto label_4b5360;
        case 0x4b5364u: goto label_4b5364;
        case 0x4b5368u: goto label_4b5368;
        case 0x4b536cu: goto label_4b536c;
        case 0x4b5370u: goto label_4b5370;
        case 0x4b5374u: goto label_4b5374;
        case 0x4b5378u: goto label_4b5378;
        case 0x4b537cu: goto label_4b537c;
        case 0x4b5380u: goto label_4b5380;
        case 0x4b5384u: goto label_4b5384;
        case 0x4b5388u: goto label_4b5388;
        case 0x4b538cu: goto label_4b538c;
        case 0x4b5390u: goto label_4b5390;
        case 0x4b5394u: goto label_4b5394;
        case 0x4b5398u: goto label_4b5398;
        case 0x4b539cu: goto label_4b539c;
        case 0x4b53a0u: goto label_4b53a0;
        case 0x4b53a4u: goto label_4b53a4;
        case 0x4b53a8u: goto label_4b53a8;
        case 0x4b53acu: goto label_4b53ac;
        case 0x4b53b0u: goto label_4b53b0;
        case 0x4b53b4u: goto label_4b53b4;
        case 0x4b53b8u: goto label_4b53b8;
        case 0x4b53bcu: goto label_4b53bc;
        case 0x4b53c0u: goto label_4b53c0;
        case 0x4b53c4u: goto label_4b53c4;
        case 0x4b53c8u: goto label_4b53c8;
        case 0x4b53ccu: goto label_4b53cc;
        case 0x4b53d0u: goto label_4b53d0;
        case 0x4b53d4u: goto label_4b53d4;
        case 0x4b53d8u: goto label_4b53d8;
        case 0x4b53dcu: goto label_4b53dc;
        case 0x4b53e0u: goto label_4b53e0;
        case 0x4b53e4u: goto label_4b53e4;
        case 0x4b53e8u: goto label_4b53e8;
        case 0x4b53ecu: goto label_4b53ec;
        case 0x4b53f0u: goto label_4b53f0;
        case 0x4b53f4u: goto label_4b53f4;
        case 0x4b53f8u: goto label_4b53f8;
        case 0x4b53fcu: goto label_4b53fc;
        case 0x4b5400u: goto label_4b5400;
        case 0x4b5404u: goto label_4b5404;
        case 0x4b5408u: goto label_4b5408;
        case 0x4b540cu: goto label_4b540c;
        case 0x4b5410u: goto label_4b5410;
        case 0x4b5414u: goto label_4b5414;
        case 0x4b5418u: goto label_4b5418;
        case 0x4b541cu: goto label_4b541c;
        case 0x4b5420u: goto label_4b5420;
        case 0x4b5424u: goto label_4b5424;
        case 0x4b5428u: goto label_4b5428;
        case 0x4b542cu: goto label_4b542c;
        case 0x4b5430u: goto label_4b5430;
        case 0x4b5434u: goto label_4b5434;
        case 0x4b5438u: goto label_4b5438;
        case 0x4b543cu: goto label_4b543c;
        case 0x4b5440u: goto label_4b5440;
        case 0x4b5444u: goto label_4b5444;
        case 0x4b5448u: goto label_4b5448;
        case 0x4b544cu: goto label_4b544c;
        case 0x4b5450u: goto label_4b5450;
        case 0x4b5454u: goto label_4b5454;
        case 0x4b5458u: goto label_4b5458;
        case 0x4b545cu: goto label_4b545c;
        case 0x4b5460u: goto label_4b5460;
        case 0x4b5464u: goto label_4b5464;
        case 0x4b5468u: goto label_4b5468;
        case 0x4b546cu: goto label_4b546c;
        case 0x4b5470u: goto label_4b5470;
        case 0x4b5474u: goto label_4b5474;
        case 0x4b5478u: goto label_4b5478;
        case 0x4b547cu: goto label_4b547c;
        case 0x4b5480u: goto label_4b5480;
        case 0x4b5484u: goto label_4b5484;
        case 0x4b5488u: goto label_4b5488;
        case 0x4b548cu: goto label_4b548c;
        case 0x4b5490u: goto label_4b5490;
        case 0x4b5494u: goto label_4b5494;
        case 0x4b5498u: goto label_4b5498;
        case 0x4b549cu: goto label_4b549c;
        case 0x4b54a0u: goto label_4b54a0;
        case 0x4b54a4u: goto label_4b54a4;
        case 0x4b54a8u: goto label_4b54a8;
        case 0x4b54acu: goto label_4b54ac;
        case 0x4b54b0u: goto label_4b54b0;
        case 0x4b54b4u: goto label_4b54b4;
        case 0x4b54b8u: goto label_4b54b8;
        case 0x4b54bcu: goto label_4b54bc;
        case 0x4b54c0u: goto label_4b54c0;
        case 0x4b54c4u: goto label_4b54c4;
        case 0x4b54c8u: goto label_4b54c8;
        case 0x4b54ccu: goto label_4b54cc;
        case 0x4b54d0u: goto label_4b54d0;
        case 0x4b54d4u: goto label_4b54d4;
        case 0x4b54d8u: goto label_4b54d8;
        case 0x4b54dcu: goto label_4b54dc;
        case 0x4b54e0u: goto label_4b54e0;
        case 0x4b54e4u: goto label_4b54e4;
        case 0x4b54e8u: goto label_4b54e8;
        case 0x4b54ecu: goto label_4b54ec;
        case 0x4b54f0u: goto label_4b54f0;
        case 0x4b54f4u: goto label_4b54f4;
        case 0x4b54f8u: goto label_4b54f8;
        case 0x4b54fcu: goto label_4b54fc;
        case 0x4b5500u: goto label_4b5500;
        case 0x4b5504u: goto label_4b5504;
        case 0x4b5508u: goto label_4b5508;
        case 0x4b550cu: goto label_4b550c;
        case 0x4b5510u: goto label_4b5510;
        case 0x4b5514u: goto label_4b5514;
        case 0x4b5518u: goto label_4b5518;
        case 0x4b551cu: goto label_4b551c;
        case 0x4b5520u: goto label_4b5520;
        case 0x4b5524u: goto label_4b5524;
        case 0x4b5528u: goto label_4b5528;
        case 0x4b552cu: goto label_4b552c;
        case 0x4b5530u: goto label_4b5530;
        case 0x4b5534u: goto label_4b5534;
        case 0x4b5538u: goto label_4b5538;
        case 0x4b553cu: goto label_4b553c;
        case 0x4b5540u: goto label_4b5540;
        case 0x4b5544u: goto label_4b5544;
        case 0x4b5548u: goto label_4b5548;
        case 0x4b554cu: goto label_4b554c;
        case 0x4b5550u: goto label_4b5550;
        case 0x4b5554u: goto label_4b5554;
        case 0x4b5558u: goto label_4b5558;
        case 0x4b555cu: goto label_4b555c;
        case 0x4b5560u: goto label_4b5560;
        case 0x4b5564u: goto label_4b5564;
        case 0x4b5568u: goto label_4b5568;
        case 0x4b556cu: goto label_4b556c;
        case 0x4b5570u: goto label_4b5570;
        case 0x4b5574u: goto label_4b5574;
        case 0x4b5578u: goto label_4b5578;
        case 0x4b557cu: goto label_4b557c;
        case 0x4b5580u: goto label_4b5580;
        case 0x4b5584u: goto label_4b5584;
        case 0x4b5588u: goto label_4b5588;
        case 0x4b558cu: goto label_4b558c;
        case 0x4b5590u: goto label_4b5590;
        case 0x4b5594u: goto label_4b5594;
        case 0x4b5598u: goto label_4b5598;
        case 0x4b559cu: goto label_4b559c;
        case 0x4b55a0u: goto label_4b55a0;
        case 0x4b55a4u: goto label_4b55a4;
        case 0x4b55a8u: goto label_4b55a8;
        case 0x4b55acu: goto label_4b55ac;
        case 0x4b55b0u: goto label_4b55b0;
        case 0x4b55b4u: goto label_4b55b4;
        case 0x4b55b8u: goto label_4b55b8;
        case 0x4b55bcu: goto label_4b55bc;
        case 0x4b55c0u: goto label_4b55c0;
        case 0x4b55c4u: goto label_4b55c4;
        case 0x4b55c8u: goto label_4b55c8;
        case 0x4b55ccu: goto label_4b55cc;
        case 0x4b55d0u: goto label_4b55d0;
        case 0x4b55d4u: goto label_4b55d4;
        case 0x4b55d8u: goto label_4b55d8;
        case 0x4b55dcu: goto label_4b55dc;
        case 0x4b55e0u: goto label_4b55e0;
        case 0x4b55e4u: goto label_4b55e4;
        case 0x4b55e8u: goto label_4b55e8;
        case 0x4b55ecu: goto label_4b55ec;
        case 0x4b55f0u: goto label_4b55f0;
        case 0x4b55f4u: goto label_4b55f4;
        case 0x4b55f8u: goto label_4b55f8;
        case 0x4b55fcu: goto label_4b55fc;
        case 0x4b5600u: goto label_4b5600;
        case 0x4b5604u: goto label_4b5604;
        case 0x4b5608u: goto label_4b5608;
        case 0x4b560cu: goto label_4b560c;
        case 0x4b5610u: goto label_4b5610;
        case 0x4b5614u: goto label_4b5614;
        case 0x4b5618u: goto label_4b5618;
        case 0x4b561cu: goto label_4b561c;
        case 0x4b5620u: goto label_4b5620;
        case 0x4b5624u: goto label_4b5624;
        case 0x4b5628u: goto label_4b5628;
        case 0x4b562cu: goto label_4b562c;
        case 0x4b5630u: goto label_4b5630;
        case 0x4b5634u: goto label_4b5634;
        case 0x4b5638u: goto label_4b5638;
        case 0x4b563cu: goto label_4b563c;
        case 0x4b5640u: goto label_4b5640;
        case 0x4b5644u: goto label_4b5644;
        case 0x4b5648u: goto label_4b5648;
        case 0x4b564cu: goto label_4b564c;
        case 0x4b5650u: goto label_4b5650;
        case 0x4b5654u: goto label_4b5654;
        case 0x4b5658u: goto label_4b5658;
        case 0x4b565cu: goto label_4b565c;
        case 0x4b5660u: goto label_4b5660;
        case 0x4b5664u: goto label_4b5664;
        case 0x4b5668u: goto label_4b5668;
        case 0x4b566cu: goto label_4b566c;
        case 0x4b5670u: goto label_4b5670;
        case 0x4b5674u: goto label_4b5674;
        case 0x4b5678u: goto label_4b5678;
        case 0x4b567cu: goto label_4b567c;
        case 0x4b5680u: goto label_4b5680;
        case 0x4b5684u: goto label_4b5684;
        case 0x4b5688u: goto label_4b5688;
        case 0x4b568cu: goto label_4b568c;
        case 0x4b5690u: goto label_4b5690;
        case 0x4b5694u: goto label_4b5694;
        case 0x4b5698u: goto label_4b5698;
        case 0x4b569cu: goto label_4b569c;
        case 0x4b56a0u: goto label_4b56a0;
        case 0x4b56a4u: goto label_4b56a4;
        case 0x4b56a8u: goto label_4b56a8;
        case 0x4b56acu: goto label_4b56ac;
        case 0x4b56b0u: goto label_4b56b0;
        case 0x4b56b4u: goto label_4b56b4;
        case 0x4b56b8u: goto label_4b56b8;
        case 0x4b56bcu: goto label_4b56bc;
        case 0x4b56c0u: goto label_4b56c0;
        case 0x4b56c4u: goto label_4b56c4;
        case 0x4b56c8u: goto label_4b56c8;
        case 0x4b56ccu: goto label_4b56cc;
        case 0x4b56d0u: goto label_4b56d0;
        case 0x4b56d4u: goto label_4b56d4;
        case 0x4b56d8u: goto label_4b56d8;
        case 0x4b56dcu: goto label_4b56dc;
        case 0x4b56e0u: goto label_4b56e0;
        case 0x4b56e4u: goto label_4b56e4;
        case 0x4b56e8u: goto label_4b56e8;
        case 0x4b56ecu: goto label_4b56ec;
        case 0x4b56f0u: goto label_4b56f0;
        case 0x4b56f4u: goto label_4b56f4;
        case 0x4b56f8u: goto label_4b56f8;
        case 0x4b56fcu: goto label_4b56fc;
        case 0x4b5700u: goto label_4b5700;
        case 0x4b5704u: goto label_4b5704;
        case 0x4b5708u: goto label_4b5708;
        case 0x4b570cu: goto label_4b570c;
        case 0x4b5710u: goto label_4b5710;
        case 0x4b5714u: goto label_4b5714;
        case 0x4b5718u: goto label_4b5718;
        case 0x4b571cu: goto label_4b571c;
        case 0x4b5720u: goto label_4b5720;
        case 0x4b5724u: goto label_4b5724;
        case 0x4b5728u: goto label_4b5728;
        case 0x4b572cu: goto label_4b572c;
        case 0x4b5730u: goto label_4b5730;
        case 0x4b5734u: goto label_4b5734;
        case 0x4b5738u: goto label_4b5738;
        case 0x4b573cu: goto label_4b573c;
        case 0x4b5740u: goto label_4b5740;
        case 0x4b5744u: goto label_4b5744;
        case 0x4b5748u: goto label_4b5748;
        case 0x4b574cu: goto label_4b574c;
        case 0x4b5750u: goto label_4b5750;
        case 0x4b5754u: goto label_4b5754;
        case 0x4b5758u: goto label_4b5758;
        case 0x4b575cu: goto label_4b575c;
        case 0x4b5760u: goto label_4b5760;
        case 0x4b5764u: goto label_4b5764;
        case 0x4b5768u: goto label_4b5768;
        case 0x4b576cu: goto label_4b576c;
        case 0x4b5770u: goto label_4b5770;
        case 0x4b5774u: goto label_4b5774;
        case 0x4b5778u: goto label_4b5778;
        case 0x4b577cu: goto label_4b577c;
        case 0x4b5780u: goto label_4b5780;
        case 0x4b5784u: goto label_4b5784;
        case 0x4b5788u: goto label_4b5788;
        case 0x4b578cu: goto label_4b578c;
        case 0x4b5790u: goto label_4b5790;
        case 0x4b5794u: goto label_4b5794;
        case 0x4b5798u: goto label_4b5798;
        case 0x4b579cu: goto label_4b579c;
        case 0x4b57a0u: goto label_4b57a0;
        case 0x4b57a4u: goto label_4b57a4;
        case 0x4b57a8u: goto label_4b57a8;
        case 0x4b57acu: goto label_4b57ac;
        case 0x4b57b0u: goto label_4b57b0;
        case 0x4b57b4u: goto label_4b57b4;
        case 0x4b57b8u: goto label_4b57b8;
        case 0x4b57bcu: goto label_4b57bc;
        case 0x4b57c0u: goto label_4b57c0;
        case 0x4b57c4u: goto label_4b57c4;
        case 0x4b57c8u: goto label_4b57c8;
        case 0x4b57ccu: goto label_4b57cc;
        case 0x4b57d0u: goto label_4b57d0;
        case 0x4b57d4u: goto label_4b57d4;
        case 0x4b57d8u: goto label_4b57d8;
        case 0x4b57dcu: goto label_4b57dc;
        case 0x4b57e0u: goto label_4b57e0;
        case 0x4b57e4u: goto label_4b57e4;
        case 0x4b57e8u: goto label_4b57e8;
        case 0x4b57ecu: goto label_4b57ec;
        case 0x4b57f0u: goto label_4b57f0;
        case 0x4b57f4u: goto label_4b57f4;
        case 0x4b57f8u: goto label_4b57f8;
        case 0x4b57fcu: goto label_4b57fc;
        case 0x4b5800u: goto label_4b5800;
        case 0x4b5804u: goto label_4b5804;
        case 0x4b5808u: goto label_4b5808;
        case 0x4b580cu: goto label_4b580c;
        case 0x4b5810u: goto label_4b5810;
        case 0x4b5814u: goto label_4b5814;
        case 0x4b5818u: goto label_4b5818;
        case 0x4b581cu: goto label_4b581c;
        case 0x4b5820u: goto label_4b5820;
        case 0x4b5824u: goto label_4b5824;
        case 0x4b5828u: goto label_4b5828;
        case 0x4b582cu: goto label_4b582c;
        case 0x4b5830u: goto label_4b5830;
        case 0x4b5834u: goto label_4b5834;
        case 0x4b5838u: goto label_4b5838;
        case 0x4b583cu: goto label_4b583c;
        case 0x4b5840u: goto label_4b5840;
        case 0x4b5844u: goto label_4b5844;
        case 0x4b5848u: goto label_4b5848;
        case 0x4b584cu: goto label_4b584c;
        case 0x4b5850u: goto label_4b5850;
        case 0x4b5854u: goto label_4b5854;
        case 0x4b5858u: goto label_4b5858;
        case 0x4b585cu: goto label_4b585c;
        case 0x4b5860u: goto label_4b5860;
        case 0x4b5864u: goto label_4b5864;
        case 0x4b5868u: goto label_4b5868;
        case 0x4b586cu: goto label_4b586c;
        case 0x4b5870u: goto label_4b5870;
        case 0x4b5874u: goto label_4b5874;
        case 0x4b5878u: goto label_4b5878;
        case 0x4b587cu: goto label_4b587c;
        case 0x4b5880u: goto label_4b5880;
        case 0x4b5884u: goto label_4b5884;
        case 0x4b5888u: goto label_4b5888;
        case 0x4b588cu: goto label_4b588c;
        case 0x4b5890u: goto label_4b5890;
        case 0x4b5894u: goto label_4b5894;
        case 0x4b5898u: goto label_4b5898;
        case 0x4b589cu: goto label_4b589c;
        case 0x4b58a0u: goto label_4b58a0;
        case 0x4b58a4u: goto label_4b58a4;
        case 0x4b58a8u: goto label_4b58a8;
        case 0x4b58acu: goto label_4b58ac;
        case 0x4b58b0u: goto label_4b58b0;
        case 0x4b58b4u: goto label_4b58b4;
        case 0x4b58b8u: goto label_4b58b8;
        case 0x4b58bcu: goto label_4b58bc;
        case 0x4b58c0u: goto label_4b58c0;
        case 0x4b58c4u: goto label_4b58c4;
        case 0x4b58c8u: goto label_4b58c8;
        case 0x4b58ccu: goto label_4b58cc;
        case 0x4b58d0u: goto label_4b58d0;
        case 0x4b58d4u: goto label_4b58d4;
        case 0x4b58d8u: goto label_4b58d8;
        case 0x4b58dcu: goto label_4b58dc;
        case 0x4b58e0u: goto label_4b58e0;
        case 0x4b58e4u: goto label_4b58e4;
        case 0x4b58e8u: goto label_4b58e8;
        case 0x4b58ecu: goto label_4b58ec;
        case 0x4b58f0u: goto label_4b58f0;
        case 0x4b58f4u: goto label_4b58f4;
        case 0x4b58f8u: goto label_4b58f8;
        case 0x4b58fcu: goto label_4b58fc;
        case 0x4b5900u: goto label_4b5900;
        case 0x4b5904u: goto label_4b5904;
        case 0x4b5908u: goto label_4b5908;
        case 0x4b590cu: goto label_4b590c;
        case 0x4b5910u: goto label_4b5910;
        case 0x4b5914u: goto label_4b5914;
        case 0x4b5918u: goto label_4b5918;
        case 0x4b591cu: goto label_4b591c;
        case 0x4b5920u: goto label_4b5920;
        case 0x4b5924u: goto label_4b5924;
        case 0x4b5928u: goto label_4b5928;
        case 0x4b592cu: goto label_4b592c;
        case 0x4b5930u: goto label_4b5930;
        case 0x4b5934u: goto label_4b5934;
        case 0x4b5938u: goto label_4b5938;
        case 0x4b593cu: goto label_4b593c;
        case 0x4b5940u: goto label_4b5940;
        case 0x4b5944u: goto label_4b5944;
        case 0x4b5948u: goto label_4b5948;
        case 0x4b594cu: goto label_4b594c;
        case 0x4b5950u: goto label_4b5950;
        case 0x4b5954u: goto label_4b5954;
        case 0x4b5958u: goto label_4b5958;
        case 0x4b595cu: goto label_4b595c;
        case 0x4b5960u: goto label_4b5960;
        case 0x4b5964u: goto label_4b5964;
        case 0x4b5968u: goto label_4b5968;
        case 0x4b596cu: goto label_4b596c;
        case 0x4b5970u: goto label_4b5970;
        case 0x4b5974u: goto label_4b5974;
        case 0x4b5978u: goto label_4b5978;
        case 0x4b597cu: goto label_4b597c;
        case 0x4b5980u: goto label_4b5980;
        case 0x4b5984u: goto label_4b5984;
        case 0x4b5988u: goto label_4b5988;
        case 0x4b598cu: goto label_4b598c;
        case 0x4b5990u: goto label_4b5990;
        case 0x4b5994u: goto label_4b5994;
        case 0x4b5998u: goto label_4b5998;
        case 0x4b599cu: goto label_4b599c;
        case 0x4b59a0u: goto label_4b59a0;
        case 0x4b59a4u: goto label_4b59a4;
        case 0x4b59a8u: goto label_4b59a8;
        case 0x4b59acu: goto label_4b59ac;
        case 0x4b59b0u: goto label_4b59b0;
        case 0x4b59b4u: goto label_4b59b4;
        case 0x4b59b8u: goto label_4b59b8;
        case 0x4b59bcu: goto label_4b59bc;
        case 0x4b59c0u: goto label_4b59c0;
        case 0x4b59c4u: goto label_4b59c4;
        case 0x4b59c8u: goto label_4b59c8;
        case 0x4b59ccu: goto label_4b59cc;
        case 0x4b59d0u: goto label_4b59d0;
        case 0x4b59d4u: goto label_4b59d4;
        case 0x4b59d8u: goto label_4b59d8;
        case 0x4b59dcu: goto label_4b59dc;
        case 0x4b59e0u: goto label_4b59e0;
        case 0x4b59e4u: goto label_4b59e4;
        case 0x4b59e8u: goto label_4b59e8;
        case 0x4b59ecu: goto label_4b59ec;
        case 0x4b59f0u: goto label_4b59f0;
        case 0x4b59f4u: goto label_4b59f4;
        case 0x4b59f8u: goto label_4b59f8;
        case 0x4b59fcu: goto label_4b59fc;
        case 0x4b5a00u: goto label_4b5a00;
        case 0x4b5a04u: goto label_4b5a04;
        case 0x4b5a08u: goto label_4b5a08;
        case 0x4b5a0cu: goto label_4b5a0c;
        case 0x4b5a10u: goto label_4b5a10;
        case 0x4b5a14u: goto label_4b5a14;
        case 0x4b5a18u: goto label_4b5a18;
        case 0x4b5a1cu: goto label_4b5a1c;
        case 0x4b5a20u: goto label_4b5a20;
        case 0x4b5a24u: goto label_4b5a24;
        case 0x4b5a28u: goto label_4b5a28;
        case 0x4b5a2cu: goto label_4b5a2c;
        case 0x4b5a30u: goto label_4b5a30;
        case 0x4b5a34u: goto label_4b5a34;
        case 0x4b5a38u: goto label_4b5a38;
        case 0x4b5a3cu: goto label_4b5a3c;
        case 0x4b5a40u: goto label_4b5a40;
        case 0x4b5a44u: goto label_4b5a44;
        case 0x4b5a48u: goto label_4b5a48;
        case 0x4b5a4cu: goto label_4b5a4c;
        case 0x4b5a50u: goto label_4b5a50;
        case 0x4b5a54u: goto label_4b5a54;
        case 0x4b5a58u: goto label_4b5a58;
        case 0x4b5a5cu: goto label_4b5a5c;
        case 0x4b5a60u: goto label_4b5a60;
        case 0x4b5a64u: goto label_4b5a64;
        case 0x4b5a68u: goto label_4b5a68;
        case 0x4b5a6cu: goto label_4b5a6c;
        case 0x4b5a70u: goto label_4b5a70;
        case 0x4b5a74u: goto label_4b5a74;
        case 0x4b5a78u: goto label_4b5a78;
        case 0x4b5a7cu: goto label_4b5a7c;
        case 0x4b5a80u: goto label_4b5a80;
        case 0x4b5a84u: goto label_4b5a84;
        case 0x4b5a88u: goto label_4b5a88;
        case 0x4b5a8cu: goto label_4b5a8c;
        case 0x4b5a90u: goto label_4b5a90;
        case 0x4b5a94u: goto label_4b5a94;
        case 0x4b5a98u: goto label_4b5a98;
        case 0x4b5a9cu: goto label_4b5a9c;
        case 0x4b5aa0u: goto label_4b5aa0;
        case 0x4b5aa4u: goto label_4b5aa4;
        case 0x4b5aa8u: goto label_4b5aa8;
        case 0x4b5aacu: goto label_4b5aac;
        case 0x4b5ab0u: goto label_4b5ab0;
        case 0x4b5ab4u: goto label_4b5ab4;
        case 0x4b5ab8u: goto label_4b5ab8;
        case 0x4b5abcu: goto label_4b5abc;
        case 0x4b5ac0u: goto label_4b5ac0;
        case 0x4b5ac4u: goto label_4b5ac4;
        case 0x4b5ac8u: goto label_4b5ac8;
        case 0x4b5accu: goto label_4b5acc;
        case 0x4b5ad0u: goto label_4b5ad0;
        case 0x4b5ad4u: goto label_4b5ad4;
        case 0x4b5ad8u: goto label_4b5ad8;
        case 0x4b5adcu: goto label_4b5adc;
        case 0x4b5ae0u: goto label_4b5ae0;
        case 0x4b5ae4u: goto label_4b5ae4;
        case 0x4b5ae8u: goto label_4b5ae8;
        case 0x4b5aecu: goto label_4b5aec;
        case 0x4b5af0u: goto label_4b5af0;
        case 0x4b5af4u: goto label_4b5af4;
        case 0x4b5af8u: goto label_4b5af8;
        case 0x4b5afcu: goto label_4b5afc;
        case 0x4b5b00u: goto label_4b5b00;
        case 0x4b5b04u: goto label_4b5b04;
        case 0x4b5b08u: goto label_4b5b08;
        case 0x4b5b0cu: goto label_4b5b0c;
        case 0x4b5b10u: goto label_4b5b10;
        case 0x4b5b14u: goto label_4b5b14;
        case 0x4b5b18u: goto label_4b5b18;
        case 0x4b5b1cu: goto label_4b5b1c;
        case 0x4b5b20u: goto label_4b5b20;
        case 0x4b5b24u: goto label_4b5b24;
        case 0x4b5b28u: goto label_4b5b28;
        case 0x4b5b2cu: goto label_4b5b2c;
        case 0x4b5b30u: goto label_4b5b30;
        case 0x4b5b34u: goto label_4b5b34;
        case 0x4b5b38u: goto label_4b5b38;
        case 0x4b5b3cu: goto label_4b5b3c;
        case 0x4b5b40u: goto label_4b5b40;
        case 0x4b5b44u: goto label_4b5b44;
        case 0x4b5b48u: goto label_4b5b48;
        case 0x4b5b4cu: goto label_4b5b4c;
        case 0x4b5b50u: goto label_4b5b50;
        case 0x4b5b54u: goto label_4b5b54;
        case 0x4b5b58u: goto label_4b5b58;
        case 0x4b5b5cu: goto label_4b5b5c;
        case 0x4b5b60u: goto label_4b5b60;
        case 0x4b5b64u: goto label_4b5b64;
        case 0x4b5b68u: goto label_4b5b68;
        case 0x4b5b6cu: goto label_4b5b6c;
        case 0x4b5b70u: goto label_4b5b70;
        case 0x4b5b74u: goto label_4b5b74;
        case 0x4b5b78u: goto label_4b5b78;
        case 0x4b5b7cu: goto label_4b5b7c;
        case 0x4b5b80u: goto label_4b5b80;
        case 0x4b5b84u: goto label_4b5b84;
        case 0x4b5b88u: goto label_4b5b88;
        case 0x4b5b8cu: goto label_4b5b8c;
        case 0x4b5b90u: goto label_4b5b90;
        case 0x4b5b94u: goto label_4b5b94;
        case 0x4b5b98u: goto label_4b5b98;
        case 0x4b5b9cu: goto label_4b5b9c;
        case 0x4b5ba0u: goto label_4b5ba0;
        case 0x4b5ba4u: goto label_4b5ba4;
        case 0x4b5ba8u: goto label_4b5ba8;
        case 0x4b5bacu: goto label_4b5bac;
        case 0x4b5bb0u: goto label_4b5bb0;
        case 0x4b5bb4u: goto label_4b5bb4;
        case 0x4b5bb8u: goto label_4b5bb8;
        case 0x4b5bbcu: goto label_4b5bbc;
        case 0x4b5bc0u: goto label_4b5bc0;
        case 0x4b5bc4u: goto label_4b5bc4;
        case 0x4b5bc8u: goto label_4b5bc8;
        case 0x4b5bccu: goto label_4b5bcc;
        case 0x4b5bd0u: goto label_4b5bd0;
        case 0x4b5bd4u: goto label_4b5bd4;
        case 0x4b5bd8u: goto label_4b5bd8;
        case 0x4b5bdcu: goto label_4b5bdc;
        case 0x4b5be0u: goto label_4b5be0;
        case 0x4b5be4u: goto label_4b5be4;
        case 0x4b5be8u: goto label_4b5be8;
        case 0x4b5becu: goto label_4b5bec;
        case 0x4b5bf0u: goto label_4b5bf0;
        case 0x4b5bf4u: goto label_4b5bf4;
        case 0x4b5bf8u: goto label_4b5bf8;
        case 0x4b5bfcu: goto label_4b5bfc;
        case 0x4b5c00u: goto label_4b5c00;
        case 0x4b5c04u: goto label_4b5c04;
        case 0x4b5c08u: goto label_4b5c08;
        case 0x4b5c0cu: goto label_4b5c0c;
        case 0x4b5c10u: goto label_4b5c10;
        case 0x4b5c14u: goto label_4b5c14;
        case 0x4b5c18u: goto label_4b5c18;
        case 0x4b5c1cu: goto label_4b5c1c;
        case 0x4b5c20u: goto label_4b5c20;
        case 0x4b5c24u: goto label_4b5c24;
        case 0x4b5c28u: goto label_4b5c28;
        case 0x4b5c2cu: goto label_4b5c2c;
        case 0x4b5c30u: goto label_4b5c30;
        case 0x4b5c34u: goto label_4b5c34;
        case 0x4b5c38u: goto label_4b5c38;
        case 0x4b5c3cu: goto label_4b5c3c;
        case 0x4b5c40u: goto label_4b5c40;
        case 0x4b5c44u: goto label_4b5c44;
        case 0x4b5c48u: goto label_4b5c48;
        case 0x4b5c4cu: goto label_4b5c4c;
        case 0x4b5c50u: goto label_4b5c50;
        case 0x4b5c54u: goto label_4b5c54;
        case 0x4b5c58u: goto label_4b5c58;
        case 0x4b5c5cu: goto label_4b5c5c;
        case 0x4b5c60u: goto label_4b5c60;
        case 0x4b5c64u: goto label_4b5c64;
        case 0x4b5c68u: goto label_4b5c68;
        case 0x4b5c6cu: goto label_4b5c6c;
        case 0x4b5c70u: goto label_4b5c70;
        case 0x4b5c74u: goto label_4b5c74;
        case 0x4b5c78u: goto label_4b5c78;
        case 0x4b5c7cu: goto label_4b5c7c;
        case 0x4b5c80u: goto label_4b5c80;
        case 0x4b5c84u: goto label_4b5c84;
        case 0x4b5c88u: goto label_4b5c88;
        case 0x4b5c8cu: goto label_4b5c8c;
        case 0x4b5c90u: goto label_4b5c90;
        case 0x4b5c94u: goto label_4b5c94;
        case 0x4b5c98u: goto label_4b5c98;
        case 0x4b5c9cu: goto label_4b5c9c;
        case 0x4b5ca0u: goto label_4b5ca0;
        case 0x4b5ca4u: goto label_4b5ca4;
        case 0x4b5ca8u: goto label_4b5ca8;
        case 0x4b5cacu: goto label_4b5cac;
        case 0x4b5cb0u: goto label_4b5cb0;
        case 0x4b5cb4u: goto label_4b5cb4;
        case 0x4b5cb8u: goto label_4b5cb8;
        case 0x4b5cbcu: goto label_4b5cbc;
        case 0x4b5cc0u: goto label_4b5cc0;
        case 0x4b5cc4u: goto label_4b5cc4;
        case 0x4b5cc8u: goto label_4b5cc8;
        case 0x4b5cccu: goto label_4b5ccc;
        case 0x4b5cd0u: goto label_4b5cd0;
        case 0x4b5cd4u: goto label_4b5cd4;
        case 0x4b5cd8u: goto label_4b5cd8;
        case 0x4b5cdcu: goto label_4b5cdc;
        case 0x4b5ce0u: goto label_4b5ce0;
        case 0x4b5ce4u: goto label_4b5ce4;
        case 0x4b5ce8u: goto label_4b5ce8;
        case 0x4b5cecu: goto label_4b5cec;
        case 0x4b5cf0u: goto label_4b5cf0;
        case 0x4b5cf4u: goto label_4b5cf4;
        case 0x4b5cf8u: goto label_4b5cf8;
        case 0x4b5cfcu: goto label_4b5cfc;
        case 0x4b5d00u: goto label_4b5d00;
        case 0x4b5d04u: goto label_4b5d04;
        case 0x4b5d08u: goto label_4b5d08;
        case 0x4b5d0cu: goto label_4b5d0c;
        case 0x4b5d10u: goto label_4b5d10;
        case 0x4b5d14u: goto label_4b5d14;
        case 0x4b5d18u: goto label_4b5d18;
        case 0x4b5d1cu: goto label_4b5d1c;
        case 0x4b5d20u: goto label_4b5d20;
        case 0x4b5d24u: goto label_4b5d24;
        case 0x4b5d28u: goto label_4b5d28;
        case 0x4b5d2cu: goto label_4b5d2c;
        case 0x4b5d30u: goto label_4b5d30;
        case 0x4b5d34u: goto label_4b5d34;
        case 0x4b5d38u: goto label_4b5d38;
        case 0x4b5d3cu: goto label_4b5d3c;
        case 0x4b5d40u: goto label_4b5d40;
        case 0x4b5d44u: goto label_4b5d44;
        case 0x4b5d48u: goto label_4b5d48;
        case 0x4b5d4cu: goto label_4b5d4c;
        case 0x4b5d50u: goto label_4b5d50;
        case 0x4b5d54u: goto label_4b5d54;
        case 0x4b5d58u: goto label_4b5d58;
        case 0x4b5d5cu: goto label_4b5d5c;
        case 0x4b5d60u: goto label_4b5d60;
        case 0x4b5d64u: goto label_4b5d64;
        case 0x4b5d68u: goto label_4b5d68;
        case 0x4b5d6cu: goto label_4b5d6c;
        case 0x4b5d70u: goto label_4b5d70;
        case 0x4b5d74u: goto label_4b5d74;
        case 0x4b5d78u: goto label_4b5d78;
        case 0x4b5d7cu: goto label_4b5d7c;
        case 0x4b5d80u: goto label_4b5d80;
        case 0x4b5d84u: goto label_4b5d84;
        case 0x4b5d88u: goto label_4b5d88;
        case 0x4b5d8cu: goto label_4b5d8c;
        case 0x4b5d90u: goto label_4b5d90;
        case 0x4b5d94u: goto label_4b5d94;
        case 0x4b5d98u: goto label_4b5d98;
        case 0x4b5d9cu: goto label_4b5d9c;
        case 0x4b5da0u: goto label_4b5da0;
        case 0x4b5da4u: goto label_4b5da4;
        case 0x4b5da8u: goto label_4b5da8;
        case 0x4b5dacu: goto label_4b5dac;
        case 0x4b5db0u: goto label_4b5db0;
        case 0x4b5db4u: goto label_4b5db4;
        case 0x4b5db8u: goto label_4b5db8;
        case 0x4b5dbcu: goto label_4b5dbc;
        case 0x4b5dc0u: goto label_4b5dc0;
        case 0x4b5dc4u: goto label_4b5dc4;
        case 0x4b5dc8u: goto label_4b5dc8;
        case 0x4b5dccu: goto label_4b5dcc;
        case 0x4b5dd0u: goto label_4b5dd0;
        case 0x4b5dd4u: goto label_4b5dd4;
        case 0x4b5dd8u: goto label_4b5dd8;
        case 0x4b5ddcu: goto label_4b5ddc;
        case 0x4b5de0u: goto label_4b5de0;
        case 0x4b5de4u: goto label_4b5de4;
        case 0x4b5de8u: goto label_4b5de8;
        case 0x4b5decu: goto label_4b5dec;
        case 0x4b5df0u: goto label_4b5df0;
        case 0x4b5df4u: goto label_4b5df4;
        case 0x4b5df8u: goto label_4b5df8;
        case 0x4b5dfcu: goto label_4b5dfc;
        case 0x4b5e00u: goto label_4b5e00;
        case 0x4b5e04u: goto label_4b5e04;
        case 0x4b5e08u: goto label_4b5e08;
        case 0x4b5e0cu: goto label_4b5e0c;
        case 0x4b5e10u: goto label_4b5e10;
        case 0x4b5e14u: goto label_4b5e14;
        case 0x4b5e18u: goto label_4b5e18;
        case 0x4b5e1cu: goto label_4b5e1c;
        case 0x4b5e20u: goto label_4b5e20;
        case 0x4b5e24u: goto label_4b5e24;
        case 0x4b5e28u: goto label_4b5e28;
        case 0x4b5e2cu: goto label_4b5e2c;
        case 0x4b5e30u: goto label_4b5e30;
        case 0x4b5e34u: goto label_4b5e34;
        case 0x4b5e38u: goto label_4b5e38;
        case 0x4b5e3cu: goto label_4b5e3c;
        case 0x4b5e40u: goto label_4b5e40;
        case 0x4b5e44u: goto label_4b5e44;
        case 0x4b5e48u: goto label_4b5e48;
        case 0x4b5e4cu: goto label_4b5e4c;
        case 0x4b5e50u: goto label_4b5e50;
        case 0x4b5e54u: goto label_4b5e54;
        case 0x4b5e58u: goto label_4b5e58;
        case 0x4b5e5cu: goto label_4b5e5c;
        case 0x4b5e60u: goto label_4b5e60;
        case 0x4b5e64u: goto label_4b5e64;
        case 0x4b5e68u: goto label_4b5e68;
        case 0x4b5e6cu: goto label_4b5e6c;
        case 0x4b5e70u: goto label_4b5e70;
        case 0x4b5e74u: goto label_4b5e74;
        case 0x4b5e78u: goto label_4b5e78;
        case 0x4b5e7cu: goto label_4b5e7c;
        case 0x4b5e80u: goto label_4b5e80;
        case 0x4b5e84u: goto label_4b5e84;
        case 0x4b5e88u: goto label_4b5e88;
        case 0x4b5e8cu: goto label_4b5e8c;
        case 0x4b5e90u: goto label_4b5e90;
        case 0x4b5e94u: goto label_4b5e94;
        case 0x4b5e98u: goto label_4b5e98;
        case 0x4b5e9cu: goto label_4b5e9c;
        case 0x4b5ea0u: goto label_4b5ea0;
        case 0x4b5ea4u: goto label_4b5ea4;
        case 0x4b5ea8u: goto label_4b5ea8;
        case 0x4b5eacu: goto label_4b5eac;
        case 0x4b5eb0u: goto label_4b5eb0;
        case 0x4b5eb4u: goto label_4b5eb4;
        case 0x4b5eb8u: goto label_4b5eb8;
        case 0x4b5ebcu: goto label_4b5ebc;
        case 0x4b5ec0u: goto label_4b5ec0;
        case 0x4b5ec4u: goto label_4b5ec4;
        case 0x4b5ec8u: goto label_4b5ec8;
        case 0x4b5eccu: goto label_4b5ecc;
        case 0x4b5ed0u: goto label_4b5ed0;
        case 0x4b5ed4u: goto label_4b5ed4;
        case 0x4b5ed8u: goto label_4b5ed8;
        case 0x4b5edcu: goto label_4b5edc;
        case 0x4b5ee0u: goto label_4b5ee0;
        case 0x4b5ee4u: goto label_4b5ee4;
        case 0x4b5ee8u: goto label_4b5ee8;
        case 0x4b5eecu: goto label_4b5eec;
        case 0x4b5ef0u: goto label_4b5ef0;
        case 0x4b5ef4u: goto label_4b5ef4;
        case 0x4b5ef8u: goto label_4b5ef8;
        case 0x4b5efcu: goto label_4b5efc;
        case 0x4b5f00u: goto label_4b5f00;
        case 0x4b5f04u: goto label_4b5f04;
        case 0x4b5f08u: goto label_4b5f08;
        case 0x4b5f0cu: goto label_4b5f0c;
        case 0x4b5f10u: goto label_4b5f10;
        case 0x4b5f14u: goto label_4b5f14;
        case 0x4b5f18u: goto label_4b5f18;
        case 0x4b5f1cu: goto label_4b5f1c;
        case 0x4b5f20u: goto label_4b5f20;
        case 0x4b5f24u: goto label_4b5f24;
        case 0x4b5f28u: goto label_4b5f28;
        case 0x4b5f2cu: goto label_4b5f2c;
        case 0x4b5f30u: goto label_4b5f30;
        case 0x4b5f34u: goto label_4b5f34;
        case 0x4b5f38u: goto label_4b5f38;
        case 0x4b5f3cu: goto label_4b5f3c;
        case 0x4b5f40u: goto label_4b5f40;
        case 0x4b5f44u: goto label_4b5f44;
        case 0x4b5f48u: goto label_4b5f48;
        case 0x4b5f4cu: goto label_4b5f4c;
        case 0x4b5f50u: goto label_4b5f50;
        case 0x4b5f54u: goto label_4b5f54;
        case 0x4b5f58u: goto label_4b5f58;
        case 0x4b5f5cu: goto label_4b5f5c;
        case 0x4b5f60u: goto label_4b5f60;
        case 0x4b5f64u: goto label_4b5f64;
        case 0x4b5f68u: goto label_4b5f68;
        case 0x4b5f6cu: goto label_4b5f6c;
        case 0x4b5f70u: goto label_4b5f70;
        case 0x4b5f74u: goto label_4b5f74;
        case 0x4b5f78u: goto label_4b5f78;
        case 0x4b5f7cu: goto label_4b5f7c;
        case 0x4b5f80u: goto label_4b5f80;
        case 0x4b5f84u: goto label_4b5f84;
        case 0x4b5f88u: goto label_4b5f88;
        case 0x4b5f8cu: goto label_4b5f8c;
        case 0x4b5f90u: goto label_4b5f90;
        case 0x4b5f94u: goto label_4b5f94;
        case 0x4b5f98u: goto label_4b5f98;
        case 0x4b5f9cu: goto label_4b5f9c;
        case 0x4b5fa0u: goto label_4b5fa0;
        case 0x4b5fa4u: goto label_4b5fa4;
        case 0x4b5fa8u: goto label_4b5fa8;
        case 0x4b5facu: goto label_4b5fac;
        case 0x4b5fb0u: goto label_4b5fb0;
        case 0x4b5fb4u: goto label_4b5fb4;
        case 0x4b5fb8u: goto label_4b5fb8;
        case 0x4b5fbcu: goto label_4b5fbc;
        case 0x4b5fc0u: goto label_4b5fc0;
        case 0x4b5fc4u: goto label_4b5fc4;
        case 0x4b5fc8u: goto label_4b5fc8;
        case 0x4b5fccu: goto label_4b5fcc;
        case 0x4b5fd0u: goto label_4b5fd0;
        case 0x4b5fd4u: goto label_4b5fd4;
        case 0x4b5fd8u: goto label_4b5fd8;
        case 0x4b5fdcu: goto label_4b5fdc;
        case 0x4b5fe0u: goto label_4b5fe0;
        case 0x4b5fe4u: goto label_4b5fe4;
        case 0x4b5fe8u: goto label_4b5fe8;
        case 0x4b5fecu: goto label_4b5fec;
        case 0x4b5ff0u: goto label_4b5ff0;
        case 0x4b5ff4u: goto label_4b5ff4;
        case 0x4b5ff8u: goto label_4b5ff8;
        case 0x4b5ffcu: goto label_4b5ffc;
        case 0x4b6000u: goto label_4b6000;
        case 0x4b6004u: goto label_4b6004;
        case 0x4b6008u: goto label_4b6008;
        case 0x4b600cu: goto label_4b600c;
        case 0x4b6010u: goto label_4b6010;
        case 0x4b6014u: goto label_4b6014;
        case 0x4b6018u: goto label_4b6018;
        case 0x4b601cu: goto label_4b601c;
        case 0x4b6020u: goto label_4b6020;
        case 0x4b6024u: goto label_4b6024;
        case 0x4b6028u: goto label_4b6028;
        case 0x4b602cu: goto label_4b602c;
        case 0x4b6030u: goto label_4b6030;
        case 0x4b6034u: goto label_4b6034;
        case 0x4b6038u: goto label_4b6038;
        case 0x4b603cu: goto label_4b603c;
        case 0x4b6040u: goto label_4b6040;
        case 0x4b6044u: goto label_4b6044;
        case 0x4b6048u: goto label_4b6048;
        case 0x4b604cu: goto label_4b604c;
        case 0x4b6050u: goto label_4b6050;
        case 0x4b6054u: goto label_4b6054;
        case 0x4b6058u: goto label_4b6058;
        case 0x4b605cu: goto label_4b605c;
        case 0x4b6060u: goto label_4b6060;
        case 0x4b6064u: goto label_4b6064;
        case 0x4b6068u: goto label_4b6068;
        case 0x4b606cu: goto label_4b606c;
        case 0x4b6070u: goto label_4b6070;
        case 0x4b6074u: goto label_4b6074;
        case 0x4b6078u: goto label_4b6078;
        case 0x4b607cu: goto label_4b607c;
        case 0x4b6080u: goto label_4b6080;
        case 0x4b6084u: goto label_4b6084;
        case 0x4b6088u: goto label_4b6088;
        case 0x4b608cu: goto label_4b608c;
        case 0x4b6090u: goto label_4b6090;
        case 0x4b6094u: goto label_4b6094;
        case 0x4b6098u: goto label_4b6098;
        case 0x4b609cu: goto label_4b609c;
        case 0x4b60a0u: goto label_4b60a0;
        case 0x4b60a4u: goto label_4b60a4;
        case 0x4b60a8u: goto label_4b60a8;
        case 0x4b60acu: goto label_4b60ac;
        case 0x4b60b0u: goto label_4b60b0;
        case 0x4b60b4u: goto label_4b60b4;
        case 0x4b60b8u: goto label_4b60b8;
        case 0x4b60bcu: goto label_4b60bc;
        case 0x4b60c0u: goto label_4b60c0;
        case 0x4b60c4u: goto label_4b60c4;
        case 0x4b60c8u: goto label_4b60c8;
        case 0x4b60ccu: goto label_4b60cc;
        case 0x4b60d0u: goto label_4b60d0;
        case 0x4b60d4u: goto label_4b60d4;
        case 0x4b60d8u: goto label_4b60d8;
        case 0x4b60dcu: goto label_4b60dc;
        case 0x4b60e0u: goto label_4b60e0;
        case 0x4b60e4u: goto label_4b60e4;
        case 0x4b60e8u: goto label_4b60e8;
        case 0x4b60ecu: goto label_4b60ec;
        case 0x4b60f0u: goto label_4b60f0;
        case 0x4b60f4u: goto label_4b60f4;
        case 0x4b60f8u: goto label_4b60f8;
        case 0x4b60fcu: goto label_4b60fc;
        case 0x4b6100u: goto label_4b6100;
        case 0x4b6104u: goto label_4b6104;
        case 0x4b6108u: goto label_4b6108;
        case 0x4b610cu: goto label_4b610c;
        case 0x4b6110u: goto label_4b6110;
        case 0x4b6114u: goto label_4b6114;
        case 0x4b6118u: goto label_4b6118;
        case 0x4b611cu: goto label_4b611c;
        case 0x4b6120u: goto label_4b6120;
        case 0x4b6124u: goto label_4b6124;
        case 0x4b6128u: goto label_4b6128;
        case 0x4b612cu: goto label_4b612c;
        case 0x4b6130u: goto label_4b6130;
        case 0x4b6134u: goto label_4b6134;
        case 0x4b6138u: goto label_4b6138;
        case 0x4b613cu: goto label_4b613c;
        case 0x4b6140u: goto label_4b6140;
        case 0x4b6144u: goto label_4b6144;
        case 0x4b6148u: goto label_4b6148;
        case 0x4b614cu: goto label_4b614c;
        case 0x4b6150u: goto label_4b6150;
        case 0x4b6154u: goto label_4b6154;
        case 0x4b6158u: goto label_4b6158;
        case 0x4b615cu: goto label_4b615c;
        case 0x4b6160u: goto label_4b6160;
        case 0x4b6164u: goto label_4b6164;
        case 0x4b6168u: goto label_4b6168;
        case 0x4b616cu: goto label_4b616c;
        default: break;
    }

    ctx->pc = 0x4b51c0u;

label_4b51c0:
    // 0x4b51c0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x4b51c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_4b51c4:
    // 0x4b51c4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x4b51c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_4b51c8:
    // 0x4b51c8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4b51c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4b51cc:
    // 0x4b51cc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4b51ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4b51d0:
    // 0x4b51d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4b51d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4b51d4:
    // 0x4b51d4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4b51d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b51d8:
    // 0x4b51d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4b51d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4b51dc:
    // 0x4b51dc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4b51dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4b51e0:
    // 0x4b51e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b51e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4b51e4:
    // 0x4b51e4: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x4b51e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_4b51e8:
    // 0x4b51e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b51e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4b51ec:
    // 0x4b51ec: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x4b51ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4b51f0:
    // 0x4b51f0: 0x90830090  lbu         $v1, 0x90($a0)
    ctx->pc = 0x4b51f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 144)));
label_4b51f4:
    // 0x4b51f4: 0x1060007c  beqz        $v1, . + 4 + (0x7C << 2)
label_4b51f8:
    if (ctx->pc == 0x4B51F8u) {
        ctx->pc = 0x4B51F8u;
            // 0x4b51f8: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B51FCu;
        goto label_4b51fc;
    }
    ctx->pc = 0x4B51F4u;
    {
        const bool branch_taken_0x4b51f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B51F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B51F4u;
            // 0x4b51f8: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b51f4) {
            ctx->pc = 0x4B53E8u;
            goto label_4b53e8;
        }
    }
    ctx->pc = 0x4B51FCu;
label_4b51fc:
    // 0x4b51fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b51fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b5200:
    // 0x4b5200: 0xc04f278  jal         func_13C9E0
label_4b5204:
    if (ctx->pc == 0x4B5204u) {
        ctx->pc = 0x4B5204u;
            // 0x4b5204: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->pc = 0x4B5208u;
        goto label_4b5208;
    }
    ctx->pc = 0x4B5200u;
    SET_GPR_U32(ctx, 31, 0x4B5208u);
    ctx->pc = 0x4B5204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5200u;
            // 0x4b5204: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5208u; }
        if (ctx->pc != 0x4B5208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5208u; }
        if (ctx->pc != 0x4B5208u) { return; }
    }
    ctx->pc = 0x4B5208u;
label_4b5208:
    // 0x4b5208: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b5208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b520c:
    // 0x4b520c: 0xc04ce80  jal         func_133A00
label_4b5210:
    if (ctx->pc == 0x4B5210u) {
        ctx->pc = 0x4B5210u;
            // 0x4b5210: 0x26850010  addiu       $a1, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->pc = 0x4B5214u;
        goto label_4b5214;
    }
    ctx->pc = 0x4B520Cu;
    SET_GPR_U32(ctx, 31, 0x4B5214u);
    ctx->pc = 0x4B5210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B520Cu;
            // 0x4b5210: 0x26850010  addiu       $a1, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5214u; }
        if (ctx->pc != 0x4B5214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5214u; }
        if (ctx->pc != 0x4B5214u) { return; }
    }
    ctx->pc = 0x4B5214u;
label_4b5214:
    // 0x4b5214: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4b5214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4b5218:
    // 0x4b5218: 0x9286004c  lbu         $a2, 0x4C($s4)
    ctx->pc = 0x4b5218u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 76)));
label_4b521c:
    // 0x4b521c: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x4b521cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_4b5220:
    // 0x4b5220: 0x8e750000  lw          $s5, 0x0($s3)
    ctx->pc = 0x4b5220u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4b5224:
    // 0x4b5224: 0xc07698c  jal         func_1DA630
label_4b5228:
    if (ctx->pc == 0x4B5228u) {
        ctx->pc = 0x4B5228u;
            // 0x4b5228: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B522Cu;
        goto label_4b522c;
    }
    ctx->pc = 0x4B5224u;
    SET_GPR_U32(ctx, 31, 0x4B522Cu);
    ctx->pc = 0x4B5228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5224u;
            // 0x4b5228: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B522Cu; }
        if (ctx->pc != 0x4B522Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B522Cu; }
        if (ctx->pc != 0x4B522Cu) { return; }
    }
    ctx->pc = 0x4B522Cu;
label_4b522c:
    // 0x4b522c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4b522cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4b5230:
    // 0x4b5230: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_4b5234:
    if (ctx->pc == 0x4B5234u) {
        ctx->pc = 0x4B5238u;
        goto label_4b5238;
    }
    ctx->pc = 0x4B5230u;
    {
        const bool branch_taken_0x4b5230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4b5230) {
            ctx->pc = 0x4B5240u;
            goto label_4b5240;
        }
    }
    ctx->pc = 0x4B5238u;
label_4b5238:
    // 0x4b5238: 0x10000033  b           . + 4 + (0x33 << 2)
label_4b523c:
    if (ctx->pc == 0x4B523Cu) {
        ctx->pc = 0x4B523Cu;
            // 0x4b523c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4B5240u;
        goto label_4b5240;
    }
    ctx->pc = 0x4B5238u;
    {
        const bool branch_taken_0x4b5238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B523Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5238u;
            // 0x4b523c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5238) {
            ctx->pc = 0x4B5308u;
            goto label_4b5308;
        }
    }
    ctx->pc = 0x4B5240u;
label_4b5240:
    // 0x4b5240: 0xc0576f4  jal         func_15DBD0
label_4b5244:
    if (ctx->pc == 0x4B5244u) {
        ctx->pc = 0x4B5248u;
        goto label_4b5248;
    }
    ctx->pc = 0x4B5240u;
    SET_GPR_U32(ctx, 31, 0x4B5248u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5248u; }
        if (ctx->pc != 0x4B5248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5248u; }
        if (ctx->pc != 0x4B5248u) { return; }
    }
    ctx->pc = 0x4B5248u;
label_4b5248:
    // 0x4b5248: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4b5248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4b524c:
    // 0x4b524c: 0xc076984  jal         func_1DA610
label_4b5250:
    if (ctx->pc == 0x4B5250u) {
        ctx->pc = 0x4B5250u;
            // 0x4b5250: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B5254u;
        goto label_4b5254;
    }
    ctx->pc = 0x4B524Cu;
    SET_GPR_U32(ctx, 31, 0x4B5254u);
    ctx->pc = 0x4B5250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B524Cu;
            // 0x4b5250: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5254u; }
        if (ctx->pc != 0x4B5254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5254u; }
        if (ctx->pc != 0x4B5254u) { return; }
    }
    ctx->pc = 0x4B5254u;
label_4b5254:
    // 0x4b5254: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4b5254u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b5258:
    // 0x4b5258: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x4b5258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4b525c:
    // 0x4b525c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4b525cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4b5260:
    // 0x4b5260: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4b5260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b5264:
    // 0x4b5264: 0xc442c680  lwc1        $f2, -0x3980($v0)
    ctx->pc = 0x4b5264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4b5268:
    // 0x4b5268: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4b5268u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b526c:
    // 0x4b526c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4b526cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4b5270:
    // 0x4b5270: 0xc441c688  lwc1        $f1, -0x3978($v0)
    ctx->pc = 0x4b5270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b5274:
    // 0x4b5274: 0xe7a200b0  swc1        $f2, 0xB0($sp)
    ctx->pc = 0x4b5274u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_4b5278:
    // 0x4b5278: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4b5278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4b527c:
    // 0x4b527c: 0xc440c68c  lwc1        $f0, -0x3974($v0)
    ctx->pc = 0x4b527cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b5280:
    // 0x4b5280: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x4b5280u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_4b5284:
    // 0x4b5284: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4b5284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4b5288:
    // 0x4b5288: 0x8c42c684  lw          $v0, -0x397C($v0)
    ctx->pc = 0x4b5288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952580)));
label_4b528c:
    // 0x4b528c: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x4b528cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_4b5290:
    // 0x4b5290: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x4b5290u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_4b5294:
    // 0x4b5294: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x4b5294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b5298:
    // 0x4b5298: 0xc04cca0  jal         func_133280
label_4b529c:
    if (ctx->pc == 0x4B529Cu) {
        ctx->pc = 0x4B529Cu;
            // 0x4b529c: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->pc = 0x4B52A0u;
        goto label_4b52a0;
    }
    ctx->pc = 0x4B5298u;
    SET_GPR_U32(ctx, 31, 0x4B52A0u);
    ctx->pc = 0x4B529Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5298u;
            // 0x4b529c: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B52A0u; }
        if (ctx->pc != 0x4B52A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B52A0u; }
        if (ctx->pc != 0x4B52A0u) { return; }
    }
    ctx->pc = 0x4B52A0u;
label_4b52a0:
    // 0x4b52a0: 0xc076980  jal         func_1DA600
label_4b52a4:
    if (ctx->pc == 0x4B52A4u) {
        ctx->pc = 0x4B52A4u;
            // 0x4b52a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B52A8u;
        goto label_4b52a8;
    }
    ctx->pc = 0x4B52A0u;
    SET_GPR_U32(ctx, 31, 0x4B52A8u);
    ctx->pc = 0x4B52A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B52A0u;
            // 0x4b52a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B52A8u; }
        if (ctx->pc != 0x4B52A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B52A8u; }
        if (ctx->pc != 0x4B52A8u) { return; }
    }
    ctx->pc = 0x4B52A8u;
label_4b52a8:
    // 0x4b52a8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x4b52a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4b52ac:
    // 0x4b52ac: 0xc04cc34  jal         func_1330D0
label_4b52b0:
    if (ctx->pc == 0x4B52B0u) {
        ctx->pc = 0x4B52B0u;
            // 0x4b52b0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B52B4u;
        goto label_4b52b4;
    }
    ctx->pc = 0x4B52ACu;
    SET_GPR_U32(ctx, 31, 0x4B52B4u);
    ctx->pc = 0x4B52B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B52ACu;
            // 0x4b52b0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B52B4u; }
        if (ctx->pc != 0x4B52B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B52B4u; }
        if (ctx->pc != 0x4B52B4u) { return; }
    }
    ctx->pc = 0x4B52B4u;
label_4b52b4:
    // 0x4b52b4: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4b52b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_4b52b8:
    // 0x4b52b8: 0xc46159f0  lwc1        $f1, 0x59F0($v1)
    ctx->pc = 0x4b52b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 23024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b52bc:
    // 0x4b52bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4b52bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b52c0:
    // 0x4b52c0: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_4b52c4:
    if (ctx->pc == 0x4B52C4u) {
        ctx->pc = 0x4B52C4u;
            // 0x4b52c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B52C8u;
        goto label_4b52c8;
    }
    ctx->pc = 0x4B52C0u;
    {
        const bool branch_taken_0x4b52c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4b52c0) {
            ctx->pc = 0x4B52C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B52C0u;
            // 0x4b52c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B52D0u;
            goto label_4b52d0;
        }
    }
    ctx->pc = 0x4B52C8u;
label_4b52c8:
    // 0x4b52c8: 0x1000000f  b           . + 4 + (0xF << 2)
label_4b52cc:
    if (ctx->pc == 0x4B52CCu) {
        ctx->pc = 0x4B52CCu;
            // 0x4b52cc: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4B52D0u;
        goto label_4b52d0;
    }
    ctx->pc = 0x4B52C8u;
    {
        const bool branch_taken_0x4b52c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B52CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B52C8u;
            // 0x4b52cc: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b52c8) {
            ctx->pc = 0x4B5308u;
            goto label_4b5308;
        }
    }
    ctx->pc = 0x4B52D0u;
label_4b52d0:
    // 0x4b52d0: 0xc07697c  jal         func_1DA5F0
label_4b52d4:
    if (ctx->pc == 0x4B52D4u) {
        ctx->pc = 0x4B52D8u;
        goto label_4b52d8;
    }
    ctx->pc = 0x4B52D0u;
    SET_GPR_U32(ctx, 31, 0x4B52D8u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B52D8u; }
        if (ctx->pc != 0x4B52D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B52D8u; }
        if (ctx->pc != 0x4B52D8u) { return; }
    }
    ctx->pc = 0x4B52D8u;
label_4b52d8:
    // 0x4b52d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4b52d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b52dc:
    // 0x4b52dc: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x4b52dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4b52e0:
    // 0x4b52e0: 0xc04cd60  jal         func_133580
label_4b52e4:
    if (ctx->pc == 0x4B52E4u) {
        ctx->pc = 0x4B52E4u;
            // 0x4b52e4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B52E8u;
        goto label_4b52e8;
    }
    ctx->pc = 0x4B52E0u;
    SET_GPR_U32(ctx, 31, 0x4B52E8u);
    ctx->pc = 0x4B52E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B52E0u;
            // 0x4b52e4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B52E8u; }
        if (ctx->pc != 0x4B52E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B52E8u; }
        if (ctx->pc != 0x4B52E8u) { return; }
    }
    ctx->pc = 0x4B52E8u;
label_4b52e8:
    // 0x4b52e8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4b52e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4b52ec:
    // 0x4b52ec: 0xc04c650  jal         func_131940
label_4b52f0:
    if (ctx->pc == 0x4B52F0u) {
        ctx->pc = 0x4B52F0u;
            // 0x4b52f0: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4B52F4u;
        goto label_4b52f4;
    }
    ctx->pc = 0x4B52ECu;
    SET_GPR_U32(ctx, 31, 0x4B52F4u);
    ctx->pc = 0x4B52F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B52ECu;
            // 0x4b52f0: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B52F4u; }
        if (ctx->pc != 0x4B52F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B52F4u; }
        if (ctx->pc != 0x4B52F4u) { return; }
    }
    ctx->pc = 0x4B52F4u;
label_4b52f4:
    // 0x4b52f4: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x4b52f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_4b52f8:
    // 0x4b52f8: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x4b52f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4b52fc:
    // 0x4b52fc: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x4b52fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
label_4b5300:
    // 0x4b5300: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4b5300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4b5304:
    // 0x4b5304: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4b5304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4b5308:
    // 0x4b5308: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x4b5308u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_4b530c:
    // 0x4b530c: 0x10200036  beqz        $at, . + 4 + (0x36 << 2)
label_4b5310:
    if (ctx->pc == 0x4B5310u) {
        ctx->pc = 0x4B5310u;
            // 0x4b5310: 0xae830044  sw          $v1, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 3));
        ctx->pc = 0x4B5314u;
        goto label_4b5314;
    }
    ctx->pc = 0x4B530Cu;
    {
        const bool branch_taken_0x4b530c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B5310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B530Cu;
            // 0x4b5310: 0xae830044  sw          $v1, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b530c) {
            ctx->pc = 0x4B53E8u;
            goto label_4b53e8;
        }
    }
    ctx->pc = 0x4B5314u;
label_4b5314:
    // 0x4b5314: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4b5314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4b5318:
    // 0x4b5318: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4b5318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4b531c:
    // 0x4b531c: 0x8c66e3c0  lw          $a2, -0x1C40($v1)
    ctx->pc = 0x4b531cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4b5320:
    // 0x4b5320: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x4b5320u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_4b5324:
    // 0x4b5324: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x4b5324u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_4b5328:
    // 0x4b5328: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4b5328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4b532c:
    // 0x4b532c: 0x65880  sll         $t3, $a2, 2
    ctx->pc = 0x4b532cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4b5330:
    // 0x4b5330: 0x8c65e3d8  lw          $a1, -0x1C28($v1)
    ctx->pc = 0x4b5330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_4b5334:
    // 0x4b5334: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4b5334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4b5338:
    // 0x4b5338: 0x53180  sll         $a2, $a1, 6
    ctx->pc = 0x4b5338u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_4b533c:
    // 0x4b533c: 0x8c64e360  lw          $a0, -0x1CA0($v1)
    ctx->pc = 0x4b533cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_4b5340:
    // 0x4b5340: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x4b5340u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_4b5344:
    // 0x4b5344: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4b5344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4b5348:
    // 0x4b5348: 0x869021  addu        $s2, $a0, $a2
    ctx->pc = 0x4b5348u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_4b534c:
    // 0x4b534c: 0x8c63e3b0  lw          $v1, -0x1C50($v1)
    ctx->pc = 0x4b534cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_4b5350:
    // 0x4b5350: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x4b5350u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_4b5354:
    // 0x4b5354: 0x6b3021  addu        $a2, $v1, $t3
    ctx->pc = 0x4b5354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_4b5358:
    // 0x4b5358: 0xacd20000  sw          $s2, 0x0($a2)
    ctx->pc = 0x4b5358u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 18));
label_4b535c:
    // 0x4b535c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4b535cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4b5360:
    // 0x4b5360: 0x8c89e378  lw          $t1, -0x1C88($a0)
    ctx->pc = 0x4b5360u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294959992)));
label_4b5364:
    // 0x4b5364: 0x8ca6e3d8  lw          $a2, -0x1C28($a1)
    ctx->pc = 0x4b5364u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960088)));
label_4b5368:
    // 0x4b5368: 0x8c64e3b8  lw          $a0, -0x1C48($v1)
    ctx->pc = 0x4b5368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960056)));
label_4b536c:
    // 0x4b536c: 0x65080  sll         $t2, $a2, 2
    ctx->pc = 0x4b536cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4b5370:
    // 0x4b5370: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x4b5370u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_4b5374:
    // 0x4b5374: 0x12aa821  addu        $s5, $t1, $t2
    ctx->pc = 0x4b5374u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_4b5378:
    // 0x4b5378: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4b5378u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b537c:
    // 0x4b537c: 0x8b4821  addu        $t1, $a0, $t3
    ctx->pc = 0x4b537cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_4b5380:
    // 0x4b5380: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4b5380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4b5384:
    // 0x4b5384: 0xad350000  sw          $s5, 0x0($t1)
    ctx->pc = 0x4b5384u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 21));
label_4b5388:
    // 0x4b5388: 0x8c490028  lw          $t1, 0x28($v0)
    ctx->pc = 0x4b5388u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_4b538c:
    // 0x4b538c: 0x8d08e3d8  lw          $t0, -0x1C28($t0)
    ctx->pc = 0x4b538cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_4b5390:
    // 0x4b5390: 0x8ca2e3c0  lw          $v0, -0x1C40($a1)
    ctx->pc = 0x4b5390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
label_4b5394:
    // 0x4b5394: 0x1092821  addu        $a1, $t0, $t1
    ctx->pc = 0x4b5394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_4b5398:
    // 0x4b5398: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4b5398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4b539c:
    // 0x4b539c: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x4b539cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
label_4b53a0:
    // 0x4b53a0: 0xac62e3c0  sw          $v0, -0x1C40($v1)
    ctx->pc = 0x4b53a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 2));
label_4b53a4:
    // 0x4b53a4: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x4b53a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4b53a8:
    // 0x4b53a8: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x4b53a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_4b53ac:
    // 0x4b53ac: 0xc04e4a4  jal         func_139290
label_4b53b0:
    if (ctx->pc == 0x4B53B0u) {
        ctx->pc = 0x4B53B0u;
            // 0x4b53b0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B53B4u;
        goto label_4b53b4;
    }
    ctx->pc = 0x4B53ACu;
    SET_GPR_U32(ctx, 31, 0x4B53B4u);
    ctx->pc = 0x4B53B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B53ACu;
            // 0x4b53b0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B53B4u; }
        if (ctx->pc != 0x4B53B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B53B4u; }
        if (ctx->pc != 0x4B53B4u) { return; }
    }
    ctx->pc = 0x4B53B4u;
label_4b53b4:
    // 0x4b53b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4b53b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b53b8:
    // 0x4b53b8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4b53b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b53bc:
    // 0x4b53bc: 0xc04cd60  jal         func_133580
label_4b53c0:
    if (ctx->pc == 0x4B53C0u) {
        ctx->pc = 0x4B53C0u;
            // 0x4b53c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B53C4u;
        goto label_4b53c4;
    }
    ctx->pc = 0x4B53BCu;
    SET_GPR_U32(ctx, 31, 0x4B53C4u);
    ctx->pc = 0x4B53C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B53BCu;
            // 0x4b53c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B53C4u; }
        if (ctx->pc != 0x4B53C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B53C4u; }
        if (ctx->pc != 0x4B53C4u) { return; }
    }
    ctx->pc = 0x4B53C4u;
label_4b53c4:
    // 0x4b53c4: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x4b53c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4b53c8:
    // 0x4b53c8: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x4b53c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_4b53cc:
    // 0x4b53cc: 0x320f809  jalr        $t9
label_4b53d0:
    if (ctx->pc == 0x4B53D0u) {
        ctx->pc = 0x4B53D0u;
            // 0x4b53d0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B53D4u;
        goto label_4b53d4;
    }
    ctx->pc = 0x4B53CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B53D4u);
        ctx->pc = 0x4B53D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B53CCu;
            // 0x4b53d0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B53D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B53D4u; }
            if (ctx->pc != 0x4B53D4u) { return; }
        }
        }
    }
    ctx->pc = 0x4B53D4u;
label_4b53d4:
    // 0x4b53d4: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x4b53d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4b53d8:
    // 0x4b53d8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4b53d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4b53dc:
    // 0x4b53dc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4b53dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4b53e0:
    // 0x4b53e0: 0xc054fd4  jal         func_153F50
label_4b53e4:
    if (ctx->pc == 0x4B53E4u) {
        ctx->pc = 0x4B53E4u;
            // 0x4b53e4: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B53E8u;
        goto label_4b53e8;
    }
    ctx->pc = 0x4B53E0u;
    SET_GPR_U32(ctx, 31, 0x4B53E8u);
    ctx->pc = 0x4B53E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B53E0u;
            // 0x4b53e4: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B53E8u; }
        if (ctx->pc != 0x4B53E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B53E8u; }
        if (ctx->pc != 0x4B53E8u) { return; }
    }
    ctx->pc = 0x4B53E8u;
label_4b53e8:
    // 0x4b53e8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4b53e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_4b53ec:
    // 0x4b53ec: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4b53ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4b53f0:
    // 0x4b53f0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4b53f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4b53f4:
    // 0x4b53f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4b53f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4b53f8:
    // 0x4b53f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4b53f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4b53fc:
    // 0x4b53fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b53fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4b5400:
    // 0x4b5400: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b5400u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4b5404:
    // 0x4b5404: 0x3e00008  jr          $ra
label_4b5408:
    if (ctx->pc == 0x4B5408u) {
        ctx->pc = 0x4B5408u;
            // 0x4b5408: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x4B540Cu;
        goto label_4b540c;
    }
    ctx->pc = 0x4B5404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B5408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5404u;
            // 0x4b5408: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B540Cu;
label_4b540c:
    // 0x4b540c: 0x0  nop
    ctx->pc = 0x4b540cu;
    // NOP
label_4b5410:
    // 0x4b5410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b5410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4b5414:
    // 0x4b5414: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b5414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b5418:
    // 0x4b5418: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b5418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4b541c:
    // 0x4b541c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b541cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4b5420:
    // 0x4b5420: 0x8c8500d0  lw          $a1, 0xD0($a0)
    ctx->pc = 0x4b5420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_4b5424:
    // 0x4b5424: 0x10a3000a  beq         $a1, $v1, . + 4 + (0xA << 2)
label_4b5428:
    if (ctx->pc == 0x4B5428u) {
        ctx->pc = 0x4B5428u;
            // 0x4b5428: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B542Cu;
        goto label_4b542c;
    }
    ctx->pc = 0x4B5424u;
    {
        const bool branch_taken_0x4b5424 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4B5428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5424u;
            // 0x4b5428: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5424) {
            ctx->pc = 0x4B5450u;
            goto label_4b5450;
        }
    }
    ctx->pc = 0x4B542Cu;
label_4b542c:
    // 0x4b542c: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
label_4b5430:
    if (ctx->pc == 0x4B5430u) {
        ctx->pc = 0x4B5430u;
            // 0x4b5430: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4B5434u;
        goto label_4b5434;
    }
    ctx->pc = 0x4B542Cu;
    {
        const bool branch_taken_0x4b542c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b542c) {
            ctx->pc = 0x4B5430u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B542Cu;
            // 0x4b5430: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B543Cu;
            goto label_4b543c;
        }
    }
    ctx->pc = 0x4B5434u;
label_4b5434:
    // 0x4b5434: 0x10000007  b           . + 4 + (0x7 << 2)
label_4b5438:
    if (ctx->pc == 0x4B5438u) {
        ctx->pc = 0x4B5438u;
            // 0x4b5438: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4B543Cu;
        goto label_4b543c;
    }
    ctx->pc = 0x4B5434u;
    {
        const bool branch_taken_0x4b5434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B5438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5434u;
            // 0x4b5438: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5434) {
            ctx->pc = 0x4B5454u;
            goto label_4b5454;
        }
    }
    ctx->pc = 0x4B543Cu;
label_4b543c:
    // 0x4b543c: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x4b543cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_4b5440:
    // 0x4b5440: 0x320f809  jalr        $t9
label_4b5444:
    if (ctx->pc == 0x4B5444u) {
        ctx->pc = 0x4B5448u;
        goto label_4b5448;
    }
    ctx->pc = 0x4B5440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B5448u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B5448u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B5448u; }
            if (ctx->pc != 0x4B5448u) { return; }
        }
        }
    }
    ctx->pc = 0x4B5448u;
label_4b5448:
    // 0x4b5448: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b5448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b544c:
    // 0x4b544c: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x4b544cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
label_4b5450:
    // 0x4b5450: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b5450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4b5454:
    // 0x4b5454: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b5454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4b5458:
    // 0x4b5458: 0x3e00008  jr          $ra
label_4b545c:
    if (ctx->pc == 0x4B545Cu) {
        ctx->pc = 0x4B545Cu;
            // 0x4b545c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4B5460u;
        goto label_4b5460;
    }
    ctx->pc = 0x4B5458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B545Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5458u;
            // 0x4b545c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B5460u;
label_4b5460:
    // 0x4b5460: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b5460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4b5464:
    // 0x4b5464: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b5464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4b5468:
    // 0x4b5468: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b5468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4b546c:
    // 0x4b546c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b546cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b5470:
    // 0x4b5470: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x4b5470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_4b5474:
    // 0x4b5474: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4b5478:
    if (ctx->pc == 0x4B5478u) {
        ctx->pc = 0x4B5478u;
            // 0x4b5478: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x4B547Cu;
        goto label_4b547c;
    }
    ctx->pc = 0x4B5474u;
    {
        const bool branch_taken_0x4b5474 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b5474) {
            ctx->pc = 0x4B5478u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5474u;
            // 0x4b5478: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B5490u;
            goto label_4b5490;
        }
    }
    ctx->pc = 0x4B547Cu;
label_4b547c:
    // 0x4b547c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4b547cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4b5480:
    // 0x4b5480: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4b5480u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4b5484:
    // 0x4b5484: 0x320f809  jalr        $t9
label_4b5488:
    if (ctx->pc == 0x4B5488u) {
        ctx->pc = 0x4B5488u;
            // 0x4b5488: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4B548Cu;
        goto label_4b548c;
    }
    ctx->pc = 0x4B5484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B548Cu);
        ctx->pc = 0x4B5488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5484u;
            // 0x4b5488: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B548Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B548Cu; }
            if (ctx->pc != 0x4B548Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4B548Cu;
label_4b548c:
    // 0x4b548c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x4b548cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_4b5490:
    // 0x4b5490: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b5490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4b5494:
    // 0x4b5494: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b5494u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4b5498:
    // 0x4b5498: 0x3e00008  jr          $ra
label_4b549c:
    if (ctx->pc == 0x4B549Cu) {
        ctx->pc = 0x4B549Cu;
            // 0x4b549c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4B54A0u;
        goto label_4b54a0;
    }
    ctx->pc = 0x4B5498u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B549Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5498u;
            // 0x4b549c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B54A0u;
label_4b54a0:
    // 0x4b54a0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x4b54a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_4b54a4:
    // 0x4b54a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4b54a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4b54a8:
    // 0x4b54a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4b54a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4b54ac:
    // 0x4b54ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b54acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4b54b0:
    // 0x4b54b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4b54b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b54b4:
    // 0x4b54b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b54b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4b54b8:
    // 0x4b54b8: 0xc0892d0  jal         func_224B40
label_4b54bc:
    if (ctx->pc == 0x4B54BCu) {
        ctx->pc = 0x4B54BCu;
            // 0x4b54bc: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x4B54C0u;
        goto label_4b54c0;
    }
    ctx->pc = 0x4B54B8u;
    SET_GPR_U32(ctx, 31, 0x4B54C0u);
    ctx->pc = 0x4B54BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B54B8u;
            // 0x4b54bc: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B54C0u; }
        if (ctx->pc != 0x4B54C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B54C0u; }
        if (ctx->pc != 0x4B54C0u) { return; }
    }
    ctx->pc = 0x4B54C0u;
label_4b54c0:
    // 0x4b54c0: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4b54c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4b54c4:
    // 0x4b54c4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x4b54c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4b54c8:
    // 0x4b54c8: 0x8c42a9a0  lw          $v0, -0x5660($v0)
    ctx->pc = 0x4b54c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945184)));
label_4b54cc:
    // 0x4b54cc: 0x8c500060  lw          $s0, 0x60($v0)
    ctx->pc = 0x4b54ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_4b54d0:
    // 0x4b54d0: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x4b54d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_4b54d4:
    // 0x4b54d4: 0xc0b6e68  jal         func_2DB9A0
label_4b54d8:
    if (ctx->pc == 0x4B54D8u) {
        ctx->pc = 0x4B54D8u;
            // 0x4b54d8: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x4B54DCu;
        goto label_4b54dc;
    }
    ctx->pc = 0x4B54D4u;
    SET_GPR_U32(ctx, 31, 0x4B54DCu);
    ctx->pc = 0x4B54D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B54D4u;
            // 0x4b54d8: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B54DCu; }
        if (ctx->pc != 0x4B54DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B54DCu; }
        if (ctx->pc != 0x4B54DCu) { return; }
    }
    ctx->pc = 0x4B54DCu;
label_4b54dc:
    // 0x4b54dc: 0xc0b6dac  jal         func_2DB6B0
label_4b54e0:
    if (ctx->pc == 0x4B54E0u) {
        ctx->pc = 0x4B54E0u;
            // 0x4b54e0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4B54E4u;
        goto label_4b54e4;
    }
    ctx->pc = 0x4B54DCu;
    SET_GPR_U32(ctx, 31, 0x4B54E4u);
    ctx->pc = 0x4B54E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B54DCu;
            // 0x4b54e0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B54E4u; }
        if (ctx->pc != 0x4B54E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B54E4u; }
        if (ctx->pc != 0x4B54E4u) { return; }
    }
    ctx->pc = 0x4B54E4u;
label_4b54e4:
    // 0x4b54e4: 0xc0cac94  jal         func_32B250
label_4b54e8:
    if (ctx->pc == 0x4B54E8u) {
        ctx->pc = 0x4B54E8u;
            // 0x4b54e8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4B54ECu;
        goto label_4b54ec;
    }
    ctx->pc = 0x4B54E4u;
    SET_GPR_U32(ctx, 31, 0x4B54ECu);
    ctx->pc = 0x4B54E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B54E4u;
            // 0x4b54e8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B54ECu; }
        if (ctx->pc != 0x4B54ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B54ECu; }
        if (ctx->pc != 0x4B54ECu) { return; }
    }
    ctx->pc = 0x4B54ECu;
label_4b54ec:
    // 0x4b54ec: 0xc0cac84  jal         func_32B210
label_4b54f0:
    if (ctx->pc == 0x4B54F0u) {
        ctx->pc = 0x4B54F0u;
            // 0x4b54f0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4B54F4u;
        goto label_4b54f4;
    }
    ctx->pc = 0x4B54ECu;
    SET_GPR_U32(ctx, 31, 0x4B54F4u);
    ctx->pc = 0x4B54F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B54ECu;
            // 0x4b54f0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B54F4u; }
        if (ctx->pc != 0x4B54F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B54F4u; }
        if (ctx->pc != 0x4B54F4u) { return; }
    }
    ctx->pc = 0x4B54F4u;
label_4b54f4:
    // 0x4b54f4: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x4b54f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_4b54f8:
    // 0x4b54f8: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x4b54f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_4b54fc:
    // 0x4b54fc: 0xc44cc910  lwc1        $f12, -0x36F0($v0)
    ctx->pc = 0x4b54fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4b5500:
    // 0x4b5500: 0xc0a5a68  jal         func_2969A0
label_4b5504:
    if (ctx->pc == 0x4B5504u) {
        ctx->pc = 0x4B5504u;
            // 0x4b5504: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4B5508u;
        goto label_4b5508;
    }
    ctx->pc = 0x4B5500u;
    SET_GPR_U32(ctx, 31, 0x4B5508u);
    ctx->pc = 0x4B5504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5500u;
            // 0x4b5504: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5508u; }
        if (ctx->pc != 0x4B5508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5508u; }
        if (ctx->pc != 0x4B5508u) { return; }
    }
    ctx->pc = 0x4B5508u;
label_4b5508:
    // 0x4b5508: 0xafb000c4  sw          $s0, 0xC4($sp)
    ctx->pc = 0x4b5508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 16));
label_4b550c:
    // 0x4b550c: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x4b550cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_4b5510:
    // 0x4b5510: 0xc6250018  lwc1        $f5, 0x18($s1)
    ctx->pc = 0x4b5510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_4b5514:
    // 0x4b5514: 0x34430020  ori         $v1, $v0, 0x20
    ctx->pc = 0x4b5514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_4b5518:
    // 0x4b5518: 0xc6240014  lwc1        $f4, 0x14($s1)
    ctx->pc = 0x4b5518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4b551c:
    // 0x4b551c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4b551cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4b5520:
    // 0x4b5520: 0xc6230010  lwc1        $f3, 0x10($s1)
    ctx->pc = 0x4b5520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4b5524:
    // 0x4b5524: 0x3c0642c8  lui         $a2, 0x42C8
    ctx->pc = 0x4b5524u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17096 << 16));
label_4b5528:
    // 0x4b5528: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x4b5528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b552c:
    // 0x4b552c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x4b552cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b5530:
    // 0x4b5530: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x4b5530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b5534:
    // 0x4b5534: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x4b5534u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
label_4b5538:
    // 0x4b5538: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x4b5538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4b553c:
    // 0x4b553c: 0xafa60168  sw          $a2, 0x168($sp)
    ctx->pc = 0x4b553cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 6));
label_4b5540:
    // 0x4b5540: 0xe7a10114  swc1        $f1, 0x114($sp)
    ctx->pc = 0x4b5540u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_4b5544:
    // 0x4b5544: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b5544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b5548:
    // 0x4b5548: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x4b5548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_4b554c:
    // 0x4b554c: 0xa3a40172  sb          $a0, 0x172($sp)
    ctx->pc = 0x4b554cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 370), (uint8_t)GPR_U32(ctx, 4));
label_4b5550:
    // 0x4b5550: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x4b5550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b5554:
    // 0x4b5554: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4b5554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4b5558:
    // 0x4b5558: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x4b5558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b555c:
    // 0x4b555c: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x4b555cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_4b5560:
    // 0x4b5560: 0xe7a20110  swc1        $f2, 0x110($sp)
    ctx->pc = 0x4b5560u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_4b5564:
    // 0x4b5564: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x4b5564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_4b5568:
    // 0x4b5568: 0xe7a10120  swc1        $f1, 0x120($sp)
    ctx->pc = 0x4b5568u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_4b556c:
    // 0x4b556c: 0xa3a80170  sb          $t0, 0x170($sp)
    ctx->pc = 0x4b556cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 368), (uint8_t)GPR_U32(ctx, 8));
label_4b5570:
    // 0x4b5570: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x4b5570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_4b5574:
    // 0x4b5574: 0xafa7016c  sw          $a3, 0x16C($sp)
    ctx->pc = 0x4b5574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 7));
label_4b5578:
    // 0x4b5578: 0xc7a2009c  lwc1        $f2, 0x9C($sp)
    ctx->pc = 0x4b5578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4b557c:
    // 0x4b557c: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x4b557cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_4b5580:
    // 0x4b5580: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x4b5580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b5584:
    // 0x4b5584: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x4b5584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_4b5588:
    // 0x4b5588: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x4b5588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b558c:
    // 0x4b558c: 0xe7a2011c  swc1        $f2, 0x11C($sp)
    ctx->pc = 0x4b558cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_4b5590:
    // 0x4b5590: 0xe7a1012c  swc1        $f1, 0x12C($sp)
    ctx->pc = 0x4b5590u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_4b5594:
    // 0x4b5594: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x4b5594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_4b5598:
    // 0x4b5598: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x4b5598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4b559c:
    // 0x4b559c: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x4b559cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b55a0:
    // 0x4b55a0: 0xc7a000bc  lwc1        $f0, 0xBC($sp)
    ctx->pc = 0x4b55a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b55a4:
    // 0x4b55a4: 0xe7a20128  swc1        $f2, 0x128($sp)
    ctx->pc = 0x4b55a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_4b55a8:
    // 0x4b55a8: 0xe7a10138  swc1        $f1, 0x138($sp)
    ctx->pc = 0x4b55a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_4b55ac:
    // 0x4b55ac: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x4b55acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_4b55b0:
    // 0x4b55b0: 0xc7a200b4  lwc1        $f2, 0xB4($sp)
    ctx->pc = 0x4b55b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4b55b4:
    // 0x4b55b4: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x4b55b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b55b8:
    // 0x4b55b8: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x4b55b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b55bc:
    // 0x4b55bc: 0xe7a20134  swc1        $f2, 0x134($sp)
    ctx->pc = 0x4b55bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_4b55c0:
    // 0x4b55c0: 0xe7a10144  swc1        $f1, 0x144($sp)
    ctx->pc = 0x4b55c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_4b55c4:
    // 0x4b55c4: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x4b55c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_4b55c8:
    // 0x4b55c8: 0xc7a20080  lwc1        $f2, 0x80($sp)
    ctx->pc = 0x4b55c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4b55cc:
    // 0x4b55cc: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x4b55ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b55d0:
    // 0x4b55d0: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x4b55d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b55d4:
    // 0x4b55d4: 0xe7a300d0  swc1        $f3, 0xD0($sp)
    ctx->pc = 0x4b55d4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_4b55d8:
    // 0x4b55d8: 0xe7a400d4  swc1        $f4, 0xD4($sp)
    ctx->pc = 0x4b55d8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_4b55dc:
    // 0x4b55dc: 0xe7a500d8  swc1        $f5, 0xD8($sp)
    ctx->pc = 0x4b55dcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_4b55e0:
    // 0x4b55e0: 0xe7a20140  swc1        $f2, 0x140($sp)
    ctx->pc = 0x4b55e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_4b55e4:
    // 0x4b55e4: 0xe7a1014c  swc1        $f1, 0x14C($sp)
    ctx->pc = 0x4b55e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_4b55e8:
    // 0x4b55e8: 0xc0a7a88  jal         func_29EA20
label_4b55ec:
    if (ctx->pc == 0x4B55ECu) {
        ctx->pc = 0x4B55ECu;
            // 0x4b55ec: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->pc = 0x4B55F0u;
        goto label_4b55f0;
    }
    ctx->pc = 0x4B55E8u;
    SET_GPR_U32(ctx, 31, 0x4B55F0u);
    ctx->pc = 0x4B55ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B55E8u;
            // 0x4b55ec: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B55F0u; }
        if (ctx->pc != 0x4B55F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B55F0u; }
        if (ctx->pc != 0x4B55F0u) { return; }
    }
    ctx->pc = 0x4B55F0u;
label_4b55f0:
    // 0x4b55f0: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x4b55f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_4b55f4:
    // 0x4b55f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4b55f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b55f8:
    // 0x4b55f8: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_4b55fc:
    if (ctx->pc == 0x4B55FCu) {
        ctx->pc = 0x4B55FCu;
            // 0x4b55fc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4B5600u;
        goto label_4b5600;
    }
    ctx->pc = 0x4B55F8u;
    {
        const bool branch_taken_0x4b55f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B55FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B55F8u;
            // 0x4b55fc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b55f8) {
            ctx->pc = 0x4B5648u;
            goto label_4b5648;
        }
    }
    ctx->pc = 0x4B5600u;
label_4b5600:
    // 0x4b5600: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b5600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b5604:
    // 0x4b5604: 0xc088ef4  jal         func_223BD0
label_4b5608:
    if (ctx->pc == 0x4B5608u) {
        ctx->pc = 0x4B5608u;
            // 0x4b5608: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x4B560Cu;
        goto label_4b560c;
    }
    ctx->pc = 0x4B5604u;
    SET_GPR_U32(ctx, 31, 0x4B560Cu);
    ctx->pc = 0x4B5608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5604u;
            // 0x4b5608: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B560Cu; }
        if (ctx->pc != 0x4B560Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B560Cu; }
        if (ctx->pc != 0x4B560Cu) { return; }
    }
    ctx->pc = 0x4B560Cu;
label_4b560c:
    // 0x4b560c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4b560cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4b5610:
    // 0x4b5610: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4b5610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4b5614:
    // 0x4b5614: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x4b5614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_4b5618:
    // 0x4b5618: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x4b5618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_4b561c:
    // 0x4b561c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4b561cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4b5620:
    // 0x4b5620: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x4b5620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_4b5624:
    // 0x4b5624: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b5624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b5628:
    // 0x4b5628: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b5628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4b562c:
    // 0x4b562c: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x4b562cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_4b5630:
    // 0x4b5630: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x4b5630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_4b5634:
    // 0x4b5634: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x4b5634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_4b5638:
    // 0x4b5638: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4b5638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4b563c:
    // 0x4b563c: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x4b563cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4b5640:
    // 0x4b5640: 0xc088b38  jal         func_222CE0
label_4b5644:
    if (ctx->pc == 0x4B5644u) {
        ctx->pc = 0x4B5644u;
            // 0x4b5644: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B5648u;
        goto label_4b5648;
    }
    ctx->pc = 0x4B5640u;
    SET_GPR_U32(ctx, 31, 0x4B5648u);
    ctx->pc = 0x4B5644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5640u;
            // 0x4b5644: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5648u; }
        if (ctx->pc != 0x4B5648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5648u; }
        if (ctx->pc != 0x4B5648u) { return; }
    }
    ctx->pc = 0x4B5648u;
label_4b5648:
    // 0x4b5648: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b5648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b564c:
    // 0x4b564c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4b564cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4b5650:
    // 0x4b5650: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4b5650u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b5654:
    // 0x4b5654: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4b5654u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b5658:
    // 0x4b5658: 0xc08914c  jal         func_224530
label_4b565c:
    if (ctx->pc == 0x4B565Cu) {
        ctx->pc = 0x4B565Cu;
            // 0x4b565c: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->pc = 0x4B5660u;
        goto label_4b5660;
    }
    ctx->pc = 0x4B5658u;
    SET_GPR_U32(ctx, 31, 0x4B5660u);
    ctx->pc = 0x4B565Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5658u;
            // 0x4b565c: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5660u; }
        if (ctx->pc != 0x4B5660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5660u; }
        if (ctx->pc != 0x4B5660u) { return; }
    }
    ctx->pc = 0x4B5660u;
label_4b5660:
    // 0x4b5660: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x4b5660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4b5664:
    // 0x4b5664: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b5664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b5668:
    // 0x4b5668: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x4b5668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b566c:
    // 0x4b566c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x4b566cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4b5670:
    // 0x4b5670: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x4b5670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b5674:
    // 0x4b5674: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x4b5674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4b5678:
    // 0x4b5678: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x4b5678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_4b567c:
    // 0x4b567c: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x4b567cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_4b5680:
    // 0x4b5680: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x4b5680u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_4b5684:
    // 0x4b5684: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x4b5684u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_4b5688:
    // 0x4b5688: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x4b5688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4b568c:
    // 0x4b568c: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x4b568cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4b5690:
    // 0x4b5690: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x4b5690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4b5694:
    // 0x4b5694: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x4b5694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b5698:
    // 0x4b5698: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x4b5698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_4b569c:
    // 0x4b569c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x4b569cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_4b56a0:
    // 0x4b56a0: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x4b56a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_4b56a4:
    // 0x4b56a4: 0xc0892b0  jal         func_224AC0
label_4b56a8:
    if (ctx->pc == 0x4B56A8u) {
        ctx->pc = 0x4B56A8u;
            // 0x4b56a8: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x4B56ACu;
        goto label_4b56ac;
    }
    ctx->pc = 0x4B56A4u;
    SET_GPR_U32(ctx, 31, 0x4B56ACu);
    ctx->pc = 0x4B56A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B56A4u;
            // 0x4b56a8: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B56ACu; }
        if (ctx->pc != 0x4B56ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B56ACu; }
        if (ctx->pc != 0x4B56ACu) { return; }
    }
    ctx->pc = 0x4B56ACu;
label_4b56ac:
    // 0x4b56ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b56acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b56b0:
    // 0x4b56b0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x4b56b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4b56b4:
    // 0x4b56b4: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x4b56b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_4b56b8:
    // 0x4b56b8: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x4b56b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_4b56bc:
    // 0x4b56bc: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x4b56bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_4b56c0:
    // 0x4b56c0: 0xc0891d8  jal         func_224760
label_4b56c4:
    if (ctx->pc == 0x4B56C4u) {
        ctx->pc = 0x4B56C4u;
            // 0x4b56c4: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x4B56C8u;
        goto label_4b56c8;
    }
    ctx->pc = 0x4B56C0u;
    SET_GPR_U32(ctx, 31, 0x4B56C8u);
    ctx->pc = 0x4B56C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B56C0u;
            // 0x4b56c4: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B56C8u; }
        if (ctx->pc != 0x4B56C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B56C8u; }
        if (ctx->pc != 0x4B56C8u) { return; }
    }
    ctx->pc = 0x4B56C8u;
label_4b56c8:
    // 0x4b56c8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b56c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b56cc:
    // 0x4b56cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4b56ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b56d0:
    // 0x4b56d0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4b56d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4b56d4:
    // 0x4b56d4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4b56d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4b56d8:
    // 0x4b56d8: 0xc08c164  jal         func_230590
label_4b56dc:
    if (ctx->pc == 0x4B56DCu) {
        ctx->pc = 0x4B56DCu;
            // 0x4b56dc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4B56E0u;
        goto label_4b56e0;
    }
    ctx->pc = 0x4B56D8u;
    SET_GPR_U32(ctx, 31, 0x4B56E0u);
    ctx->pc = 0x4B56DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B56D8u;
            // 0x4b56dc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B56E0u; }
        if (ctx->pc != 0x4B56E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B56E0u; }
        if (ctx->pc != 0x4B56E0u) { return; }
    }
    ctx->pc = 0x4B56E0u;
label_4b56e0:
    // 0x4b56e0: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x4b56e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_4b56e4:
    // 0x4b56e4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b56e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b56e8:
    // 0x4b56e8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4b56e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4b56ec:
    // 0x4b56ec: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x4b56ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4b56f0:
    // 0x4b56f0: 0xc0a7a88  jal         func_29EA20
label_4b56f4:
    if (ctx->pc == 0x4B56F4u) {
        ctx->pc = 0x4B56F4u;
            // 0x4b56f4: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x4B56F8u;
        goto label_4b56f8;
    }
    ctx->pc = 0x4B56F0u;
    SET_GPR_U32(ctx, 31, 0x4B56F8u);
    ctx->pc = 0x4B56F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B56F0u;
            // 0x4b56f4: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B56F8u; }
        if (ctx->pc != 0x4B56F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B56F8u; }
        if (ctx->pc != 0x4B56F8u) { return; }
    }
    ctx->pc = 0x4B56F8u;
label_4b56f8:
    // 0x4b56f8: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x4b56f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4b56fc:
    // 0x4b56fc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4b56fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b5700:
    // 0x4b5700: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_4b5704:
    if (ctx->pc == 0x4B5704u) {
        ctx->pc = 0x4B5704u;
            // 0x4b5704: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4B5708u;
        goto label_4b5708;
    }
    ctx->pc = 0x4B5700u;
    {
        const bool branch_taken_0x4b5700 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B5704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5700u;
            // 0x4b5704: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5700) {
            ctx->pc = 0x4B5724u;
            goto label_4b5724;
        }
    }
    ctx->pc = 0x4B5708u;
label_4b5708:
    // 0x4b5708: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4b5708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4b570c:
    // 0x4b570c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4b570cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b5710:
    // 0x4b5710: 0xc0869d0  jal         func_21A740
label_4b5714:
    if (ctx->pc == 0x4B5714u) {
        ctx->pc = 0x4B5714u;
            // 0x4b5714: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B5718u;
        goto label_4b5718;
    }
    ctx->pc = 0x4B5710u;
    SET_GPR_U32(ctx, 31, 0x4B5718u);
    ctx->pc = 0x4B5714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5710u;
            // 0x4b5714: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5718u; }
        if (ctx->pc != 0x4B5718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5718u; }
        if (ctx->pc != 0x4B5718u) { return; }
    }
    ctx->pc = 0x4B5718u;
label_4b5718:
    // 0x4b5718: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4b5718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4b571c:
    // 0x4b571c: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x4b571cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_4b5720:
    // 0x4b5720: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4b5720u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_4b5724:
    // 0x4b5724: 0xae120210  sw          $s2, 0x210($s0)
    ctx->pc = 0x4b5724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 18));
label_4b5728:
    // 0x4b5728: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b5728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b572c:
    // 0x4b572c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4b572cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4b5730:
    // 0x4b5730: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4b5730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4b5734:
    // 0x4b5734: 0xc08c650  jal         func_231940
label_4b5738:
    if (ctx->pc == 0x4B5738u) {
        ctx->pc = 0x4B5738u;
            // 0x4b5738: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B573Cu;
        goto label_4b573c;
    }
    ctx->pc = 0x4B5734u;
    SET_GPR_U32(ctx, 31, 0x4B573Cu);
    ctx->pc = 0x4B5738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5734u;
            // 0x4b5738: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B573Cu; }
        if (ctx->pc != 0x4B573Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B573Cu; }
        if (ctx->pc != 0x4B573Cu) { return; }
    }
    ctx->pc = 0x4B573Cu;
label_4b573c:
    // 0x4b573c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4b573cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4b5740:
    // 0x4b5740: 0xa2230064  sb          $v1, 0x64($s1)
    ctx->pc = 0x4b5740u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 100), (uint8_t)GPR_U32(ctx, 3));
label_4b5744:
    // 0x4b5744: 0xa2200065  sb          $zero, 0x65($s1)
    ctx->pc = 0x4b5744u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 101), (uint8_t)GPR_U32(ctx, 0));
label_4b5748:
    // 0x4b5748: 0xa2230066  sb          $v1, 0x66($s1)
    ctx->pc = 0x4b5748u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 102), (uint8_t)GPR_U32(ctx, 3));
label_4b574c:
    // 0x4b574c: 0xa2200067  sb          $zero, 0x67($s1)
    ctx->pc = 0x4b574cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 103), (uint8_t)GPR_U32(ctx, 0));
label_4b5750:
    // 0x4b5750: 0xa2230068  sb          $v1, 0x68($s1)
    ctx->pc = 0x4b5750u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 104), (uint8_t)GPR_U32(ctx, 3));
label_4b5754:
    // 0x4b5754: 0xa2200069  sb          $zero, 0x69($s1)
    ctx->pc = 0x4b5754u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 105), (uint8_t)GPR_U32(ctx, 0));
label_4b5758:
    // 0x4b5758: 0xa223006a  sb          $v1, 0x6A($s1)
    ctx->pc = 0x4b5758u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 106), (uint8_t)GPR_U32(ctx, 3));
label_4b575c:
    // 0x4b575c: 0xa220006b  sb          $zero, 0x6B($s1)
    ctx->pc = 0x4b575cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 107), (uint8_t)GPR_U32(ctx, 0));
label_4b5760:
    // 0x4b5760: 0xae2000b0  sw          $zero, 0xB0($s1)
    ctx->pc = 0x4b5760u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 0));
label_4b5764:
    // 0x4b5764: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4b5764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4b5768:
    // 0x4b5768: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4b5768u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4b576c:
    // 0x4b576c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b576cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4b5770:
    // 0x4b5770: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b5770u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4b5774:
    // 0x4b5774: 0x3e00008  jr          $ra
label_4b5778:
    if (ctx->pc == 0x4B5778u) {
        ctx->pc = 0x4B5778u;
            // 0x4b5778: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x4B577Cu;
        goto label_4b577c;
    }
    ctx->pc = 0x4B5774u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B5778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5774u;
            // 0x4b5778: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B577Cu;
label_4b577c:
    // 0x4b577c: 0x0  nop
    ctx->pc = 0x4b577cu;
    // NOP
label_4b5780:
    // 0x4b5780: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b5780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4b5784:
    // 0x4b5784: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b5784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4b5788:
    // 0x4b5788: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b5788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4b578c:
    // 0x4b578c: 0xc0e3580  jal         func_38D600
label_4b5790:
    if (ctx->pc == 0x4B5790u) {
        ctx->pc = 0x4B5790u;
            // 0x4b5790: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B5794u;
        goto label_4b5794;
    }
    ctx->pc = 0x4B578Cu;
    SET_GPR_U32(ctx, 31, 0x4B5794u);
    ctx->pc = 0x4B5790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B578Cu;
            // 0x4b5790: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D600u;
    if (runtime->hasFunction(0x38D600u)) {
        auto targetFn = runtime->lookupFunction(0x38D600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5794u; }
        if (ctx->pc != 0x4B5794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D600_0x38d600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5794u; }
        if (ctx->pc != 0x4B5794u) { return; }
    }
    ctx->pc = 0x4B5794u;
label_4b5794:
    // 0x4b5794: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4b5794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4b5798:
    // 0x4b5798: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x4b5798u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
label_4b579c:
    // 0x4b579c: 0xa20300cc  sb          $v1, 0xCC($s0)
    ctx->pc = 0x4b579cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 3));
label_4b57a0:
    // 0x4b57a0: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x4b57a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
label_4b57a4:
    // 0x4b57a4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4b57a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4b57a8:
    // 0x4b57a8: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4b57a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4b57ac:
    // 0x4b57ac: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x4b57acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_4b57b0:
    // 0x4b57b0: 0x24845f60  addiu       $a0, $a0, 0x5F60
    ctx->pc = 0x4b57b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24416));
label_4b57b4:
    // 0x4b57b4: 0x8063007a  lb          $v1, 0x7A($v1)
    ctx->pc = 0x4b57b4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 122)));
label_4b57b8:
    // 0x4b57b8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x4b57b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_4b57bc:
    // 0x4b57bc: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x4b57bcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_4b57c0:
    // 0x4b57c0: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x4b57c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_4b57c4:
    // 0x4b57c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b57c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4b57c8:
    // 0x4b57c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b57c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4b57cc:
    // 0x4b57cc: 0x3e00008  jr          $ra
label_4b57d0:
    if (ctx->pc == 0x4B57D0u) {
        ctx->pc = 0x4B57D0u;
            // 0x4b57d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4B57D4u;
        goto label_4b57d4;
    }
    ctx->pc = 0x4B57CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B57D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B57CCu;
            // 0x4b57d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B57D4u;
label_4b57d4:
    // 0x4b57d4: 0x0  nop
    ctx->pc = 0x4b57d4u;
    // NOP
label_4b57d8:
    // 0x4b57d8: 0x0  nop
    ctx->pc = 0x4b57d8u;
    // NOP
label_4b57dc:
    // 0x4b57dc: 0x0  nop
    ctx->pc = 0x4b57dcu;
    // NOP
label_4b57e0:
    // 0x4b57e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b57e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4b57e4:
    // 0x4b57e4: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x4b57e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_4b57e8:
    // 0x4b57e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b57e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4b57ec:
    // 0x4b57ec: 0x34430020  ori         $v1, $v0, 0x20
    ctx->pc = 0x4b57ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_4b57f0:
    // 0x4b57f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b57f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4b57f4:
    // 0x4b57f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b57f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b57f8:
    // 0x4b57f8: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x4b57f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_4b57fc:
    // 0x4b57fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b57fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b5800:
    // 0x4b5800: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4b5800u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b5804:
    // 0x4b5804: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x4b5804u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_4b5808:
    // 0x4b5808: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4b5808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4b580c:
    // 0x4b580c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4b580cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4b5810:
    // 0x4b5810: 0xc08bff0  jal         func_22FFC0
label_4b5814:
    if (ctx->pc == 0x4B5814u) {
        ctx->pc = 0x4B5814u;
            // 0x4b5814: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B5818u;
        goto label_4b5818;
    }
    ctx->pc = 0x4B5810u;
    SET_GPR_U32(ctx, 31, 0x4B5818u);
    ctx->pc = 0x4B5814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5810u;
            // 0x4b5814: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5818u; }
        if (ctx->pc != 0x4B5818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5818u; }
        if (ctx->pc != 0x4B5818u) { return; }
    }
    ctx->pc = 0x4B5818u;
label_4b5818:
    // 0x4b5818: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x4b5818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4b581c:
    // 0x4b581c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4b581cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4b5820:
    // 0x4b5820: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4b5820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b5824:
    // 0x4b5824: 0xc08914c  jal         func_224530
label_4b5828:
    if (ctx->pc == 0x4B5828u) {
        ctx->pc = 0x4B5828u;
            // 0x4b5828: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B582Cu;
        goto label_4b582c;
    }
    ctx->pc = 0x4B5824u;
    SET_GPR_U32(ctx, 31, 0x4B582Cu);
    ctx->pc = 0x4B5828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5824u;
            // 0x4b5828: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B582Cu; }
        if (ctx->pc != 0x4B582Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B582Cu; }
        if (ctx->pc != 0x4B582Cu) { return; }
    }
    ctx->pc = 0x4B582Cu;
label_4b582c:
    // 0x4b582c: 0xc0e393c  jal         func_38E4F0
label_4b5830:
    if (ctx->pc == 0x4B5830u) {
        ctx->pc = 0x4B5830u;
            // 0x4b5830: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B5834u;
        goto label_4b5834;
    }
    ctx->pc = 0x4B582Cu;
    SET_GPR_U32(ctx, 31, 0x4B5834u);
    ctx->pc = 0x4B5830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B582Cu;
            // 0x4b5830: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5834u; }
        if (ctx->pc != 0x4B5834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5834u; }
        if (ctx->pc != 0x4B5834u) { return; }
    }
    ctx->pc = 0x4B5834u;
label_4b5834:
    // 0x4b5834: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b5834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4b5838:
    // 0x4b5838: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b5838u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4b583c:
    // 0x4b583c: 0x3e00008  jr          $ra
label_4b5840:
    if (ctx->pc == 0x4B5840u) {
        ctx->pc = 0x4B5840u;
            // 0x4b5840: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4B5844u;
        goto label_4b5844;
    }
    ctx->pc = 0x4B583Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B5840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B583Cu;
            // 0x4b5840: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B5844u;
label_4b5844:
    // 0x4b5844: 0x0  nop
    ctx->pc = 0x4b5844u;
    // NOP
label_4b5848:
    // 0x4b5848: 0x0  nop
    ctx->pc = 0x4b5848u;
    // NOP
label_4b584c:
    // 0x4b584c: 0x0  nop
    ctx->pc = 0x4b584cu;
    // NOP
label_4b5850:
    // 0x4b5850: 0x3e00008  jr          $ra
label_4b5854:
    if (ctx->pc == 0x4B5854u) {
        ctx->pc = 0x4B5858u;
        goto label_4b5858;
    }
    ctx->pc = 0x4B5850u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B5858u;
label_4b5858:
    // 0x4b5858: 0x0  nop
    ctx->pc = 0x4b5858u;
    // NOP
label_4b585c:
    // 0x4b585c: 0x0  nop
    ctx->pc = 0x4b585cu;
    // NOP
label_4b5860:
    // 0x4b5860: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b5860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4b5864:
    // 0x4b5864: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4b5864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4b5868:
    // 0x4b5868: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b5868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4b586c:
    // 0x4b586c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b586cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4b5870:
    // 0x4b5870: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b5870u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b5874:
    // 0x4b5874: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_4b5878:
    if (ctx->pc == 0x4B5878u) {
        ctx->pc = 0x4B5878u;
            // 0x4b5878: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B587Cu;
        goto label_4b587c;
    }
    ctx->pc = 0x4B5874u;
    {
        const bool branch_taken_0x4b5874 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B5878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5874u;
            // 0x4b5878: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5874) {
            ctx->pc = 0x4B58D0u;
            goto label_4b58d0;
        }
    }
    ctx->pc = 0x4B587Cu;
label_4b587c:
    // 0x4b587c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4b587cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4b5880:
    // 0x4b5880: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4b5880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4b5884:
    // 0x4b5884: 0x246309e0  addiu       $v1, $v1, 0x9E0
    ctx->pc = 0x4b5884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2528));
label_4b5888:
    // 0x4b5888: 0x24420a18  addiu       $v0, $v0, 0xA18
    ctx->pc = 0x4b5888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2584));
label_4b588c:
    // 0x4b588c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b588cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4b5890:
    // 0x4b5890: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_4b5894:
    if (ctx->pc == 0x4B5894u) {
        ctx->pc = 0x4B5894u;
            // 0x4b5894: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4B5898u;
        goto label_4b5898;
    }
    ctx->pc = 0x4B5890u;
    {
        const bool branch_taken_0x4b5890 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B5894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5890u;
            // 0x4b5894: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5890) {
            ctx->pc = 0x4B58B8u;
            goto label_4b58b8;
        }
    }
    ctx->pc = 0x4B5898u;
label_4b5898:
    // 0x4b5898: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4b5898u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4b589c:
    // 0x4b589c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4b589cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4b58a0:
    // 0x4b58a0: 0x24630a30  addiu       $v1, $v1, 0xA30
    ctx->pc = 0x4b58a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2608));
label_4b58a4:
    // 0x4b58a4: 0x24420a68  addiu       $v0, $v0, 0xA68
    ctx->pc = 0x4b58a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2664));
label_4b58a8:
    // 0x4b58a8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b58a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4b58ac:
    // 0x4b58ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b58acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b58b0:
    // 0x4b58b0: 0xc12d374  jal         func_4B4DD0
label_4b58b4:
    if (ctx->pc == 0x4B58B4u) {
        ctx->pc = 0x4B58B4u;
            // 0x4b58b4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4B58B8u;
        goto label_4b58b8;
    }
    ctx->pc = 0x4B58B0u;
    SET_GPR_U32(ctx, 31, 0x4B58B8u);
    ctx->pc = 0x4B58B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B58B0u;
            // 0x4b58b4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B4DD0u;
    if (runtime->hasFunction(0x4B4DD0u)) {
        auto targetFn = runtime->lookupFunction(0x4B4DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B58B8u; }
        if (ctx->pc != 0x4B58B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B4DD0_0x4b4dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B58B8u; }
        if (ctx->pc != 0x4B58B8u) { return; }
    }
    ctx->pc = 0x4B58B8u;
label_4b58b8:
    // 0x4b58b8: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4b58b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4b58bc:
    // 0x4b58bc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4b58bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4b58c0:
    // 0x4b58c0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4b58c4:
    if (ctx->pc == 0x4B58C4u) {
        ctx->pc = 0x4B58C4u;
            // 0x4b58c4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B58C8u;
        goto label_4b58c8;
    }
    ctx->pc = 0x4B58C0u;
    {
        const bool branch_taken_0x4b58c0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4b58c0) {
            ctx->pc = 0x4B58C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B58C0u;
            // 0x4b58c4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B58D4u;
            goto label_4b58d4;
        }
    }
    ctx->pc = 0x4B58C8u;
label_4b58c8:
    // 0x4b58c8: 0xc0400a8  jal         func_1002A0
label_4b58cc:
    if (ctx->pc == 0x4B58CCu) {
        ctx->pc = 0x4B58CCu;
            // 0x4b58cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B58D0u;
        goto label_4b58d0;
    }
    ctx->pc = 0x4B58C8u;
    SET_GPR_U32(ctx, 31, 0x4B58D0u);
    ctx->pc = 0x4B58CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B58C8u;
            // 0x4b58cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B58D0u; }
        if (ctx->pc != 0x4B58D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B58D0u; }
        if (ctx->pc != 0x4B58D0u) { return; }
    }
    ctx->pc = 0x4B58D0u;
label_4b58d0:
    // 0x4b58d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4b58d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b58d4:
    // 0x4b58d4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4b58d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4b58d8:
    // 0x4b58d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b58d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4b58dc:
    // 0x4b58dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b58dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4b58e0:
    // 0x4b58e0: 0x3e00008  jr          $ra
label_4b58e4:
    if (ctx->pc == 0x4B58E4u) {
        ctx->pc = 0x4B58E4u;
            // 0x4b58e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4B58E8u;
        goto label_4b58e8;
    }
    ctx->pc = 0x4B58E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B58E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B58E0u;
            // 0x4b58e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B58E8u;
label_4b58e8:
    // 0x4b58e8: 0x0  nop
    ctx->pc = 0x4b58e8u;
    // NOP
label_4b58ec:
    // 0x4b58ec: 0x0  nop
    ctx->pc = 0x4b58ecu;
    // NOP
label_4b58f0:
    // 0x4b58f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4b58f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4b58f4:
    // 0x4b58f4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4b58f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4b58f8:
    // 0x4b58f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4b58f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4b58fc:
    // 0x4b58fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4b58fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4b5900:
    // 0x4b5900: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4b5900u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b5904:
    // 0x4b5904: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4b5904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4b5908:
    // 0x4b5908: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b5908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4b590c:
    // 0x4b590c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b590cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4b5910:
    // 0x4b5910: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x4b5910u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4b5914:
    // 0x4b5914: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_4b5918:
    if (ctx->pc == 0x4B5918u) {
        ctx->pc = 0x4B5918u;
            // 0x4b5918: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B591Cu;
        goto label_4b591c;
    }
    ctx->pc = 0x4B5914u;
    {
        const bool branch_taken_0x4b5914 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B5918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5914u;
            // 0x4b5918: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5914) {
            ctx->pc = 0x4B5958u;
            goto label_4b5958;
        }
    }
    ctx->pc = 0x4B591Cu;
label_4b591c:
    // 0x4b591c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4b591cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b5920:
    // 0x4b5920: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4b5920u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b5924:
    // 0x4b5924: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4b5924u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b5928:
    // 0x4b5928: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x4b5928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_4b592c:
    // 0x4b592c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4b592cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4b5930:
    // 0x4b5930: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4b5930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4b5934:
    // 0x4b5934: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4b5934u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4b5938:
    // 0x4b5938: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4b5938u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4b593c:
    // 0x4b593c: 0x320f809  jalr        $t9
label_4b5940:
    if (ctx->pc == 0x4B5940u) {
        ctx->pc = 0x4B5944u;
        goto label_4b5944;
    }
    ctx->pc = 0x4B593Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B5944u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B5944u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B5944u; }
            if (ctx->pc != 0x4B5944u) { return; }
        }
        }
    }
    ctx->pc = 0x4B5944u;
label_4b5944:
    // 0x4b5944: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x4b5944u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4b5948:
    // 0x4b5948: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4b5948u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4b594c:
    // 0x4b594c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x4b594cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4b5950:
    // 0x4b5950: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_4b5954:
    if (ctx->pc == 0x4B5954u) {
        ctx->pc = 0x4B5954u;
            // 0x4b5954: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4B5958u;
        goto label_4b5958;
    }
    ctx->pc = 0x4B5950u;
    {
        const bool branch_taken_0x4b5950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B5954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5950u;
            // 0x4b5954: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5950) {
            ctx->pc = 0x4B5928u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4b5928;
        }
    }
    ctx->pc = 0x4B5958u;
label_4b5958:
    // 0x4b5958: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4b5958u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4b595c:
    // 0x4b595c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4b595cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4b5960:
    // 0x4b5960: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4b5960u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4b5964:
    // 0x4b5964: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4b5964u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4b5968:
    // 0x4b5968: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4b5968u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4b596c:
    // 0x4b596c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b596cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4b5970:
    // 0x4b5970: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b5970u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4b5974:
    // 0x4b5974: 0x3e00008  jr          $ra
label_4b5978:
    if (ctx->pc == 0x4B5978u) {
        ctx->pc = 0x4B5978u;
            // 0x4b5978: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4B597Cu;
        goto label_4b597c;
    }
    ctx->pc = 0x4B5974u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B5978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5974u;
            // 0x4b5978: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B597Cu;
label_4b597c:
    // 0x4b597c: 0x0  nop
    ctx->pc = 0x4b597cu;
    // NOP
label_4b5980:
    // 0x4b5980: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b5980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4b5984:
    // 0x4b5984: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4b5984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b5988:
    // 0x4b5988: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b5988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4b598c:
    // 0x4b598c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x4b598cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_4b5990:
    // 0x4b5990: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b5990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4b5994:
    // 0x4b5994: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x4b5994u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4b5998:
    // 0x4b5998: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4b5998u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4b599c:
    // 0x4b599c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x4b599cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_4b59a0:
    // 0x4b59a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4b59a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4b59a4:
    // 0x4b59a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4b59a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4b59a8:
    // 0x4b59a8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x4b59a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_4b59ac:
    // 0x4b59ac: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x4b59acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b59b0:
    // 0x4b59b0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x4b59b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_4b59b4:
    // 0x4b59b4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4b59b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4b59b8:
    // 0x4b59b8: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x4b59b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_4b59bc:
    // 0x4b59bc: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x4b59bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_4b59c0:
    // 0x4b59c0: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x4b59c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4b59c4:
    // 0x4b59c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4b59c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4b59c8:
    // 0x4b59c8: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x4b59c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_4b59cc:
    // 0x4b59cc: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x4b59ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4b59d0:
    // 0x4b59d0: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x4b59d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_4b59d4:
    // 0x4b59d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4b59d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4b59d8:
    // 0x4b59d8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x4b59d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4b59dc:
    // 0x4b59dc: 0xc0a997c  jal         func_2A65F0
label_4b59e0:
    if (ctx->pc == 0x4B59E0u) {
        ctx->pc = 0x4B59E0u;
            // 0x4b59e0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x4B59E4u;
        goto label_4b59e4;
    }
    ctx->pc = 0x4B59DCu;
    SET_GPR_U32(ctx, 31, 0x4B59E4u);
    ctx->pc = 0x4B59E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B59DCu;
            // 0x4b59e0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B59E4u; }
        if (ctx->pc != 0x4B59E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B59E4u; }
        if (ctx->pc != 0x4B59E4u) { return; }
    }
    ctx->pc = 0x4B59E4u;
label_4b59e4:
    // 0x4b59e4: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x4b59e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_4b59e8:
    // 0x4b59e8: 0xc0d879c  jal         func_361E70
label_4b59ec:
    if (ctx->pc == 0x4B59ECu) {
        ctx->pc = 0x4B59ECu;
            // 0x4b59ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B59F0u;
        goto label_4b59f0;
    }
    ctx->pc = 0x4B59E8u;
    SET_GPR_U32(ctx, 31, 0x4B59F0u);
    ctx->pc = 0x4B59ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B59E8u;
            // 0x4b59ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B59F0u; }
        if (ctx->pc != 0x4B59F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B59F0u; }
        if (ctx->pc != 0x4B59F0u) { return; }
    }
    ctx->pc = 0x4B59F0u;
label_4b59f0:
    // 0x4b59f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b59f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4b59f4:
    // 0x4b59f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b59f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4b59f8:
    // 0x4b59f8: 0x3e00008  jr          $ra
label_4b59fc:
    if (ctx->pc == 0x4B59FCu) {
        ctx->pc = 0x4B59FCu;
            // 0x4b59fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4B5A00u;
        goto label_4b5a00;
    }
    ctx->pc = 0x4B59F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B59FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B59F8u;
            // 0x4b59fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B5A00u;
label_4b5a00:
    // 0x4b5a00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b5a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4b5a04:
    // 0x4b5a04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b5a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4b5a08:
    // 0x4b5a08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b5a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4b5a0c:
    // 0x4b5a0c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x4b5a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_4b5a10:
    // 0x4b5a10: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_4b5a14:
    if (ctx->pc == 0x4B5A14u) {
        ctx->pc = 0x4B5A14u;
            // 0x4b5a14: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B5A18u;
        goto label_4b5a18;
    }
    ctx->pc = 0x4B5A10u;
    {
        const bool branch_taken_0x4b5a10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B5A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5A10u;
            // 0x4b5a14: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5a10) {
            ctx->pc = 0x4B5B30u;
            goto label_4b5b30;
        }
    }
    ctx->pc = 0x4B5A18u;
label_4b5a18:
    // 0x4b5a18: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4b5a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4b5a1c:
    // 0x4b5a1c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4b5a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_4b5a20:
    // 0x4b5a20: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4b5a20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4b5a24:
    // 0x4b5a24: 0xc075128  jal         func_1D44A0
label_4b5a28:
    if (ctx->pc == 0x4B5A28u) {
        ctx->pc = 0x4B5A28u;
            // 0x4b5a28: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x4B5A2Cu;
        goto label_4b5a2c;
    }
    ctx->pc = 0x4B5A24u;
    SET_GPR_U32(ctx, 31, 0x4B5A2Cu);
    ctx->pc = 0x4B5A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5A24u;
            // 0x4b5a28: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5A2Cu; }
        if (ctx->pc != 0x4B5A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5A2Cu; }
        if (ctx->pc != 0x4B5A2Cu) { return; }
    }
    ctx->pc = 0x4B5A2Cu;
label_4b5a2c:
    // 0x4b5a2c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x4b5a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4b5a30:
    // 0x4b5a30: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b5a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b5a34:
    // 0x4b5a34: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x4b5a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_4b5a38:
    // 0x4b5a38: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x4b5a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4b5a3c:
    // 0x4b5a3c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4b5a3cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4b5a40:
    // 0x4b5a40: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4b5a44:
    if (ctx->pc == 0x4B5A44u) {
        ctx->pc = 0x4B5A44u;
            // 0x4b5a44: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x4B5A48u;
        goto label_4b5a48;
    }
    ctx->pc = 0x4B5A40u;
    {
        const bool branch_taken_0x4b5a40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B5A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5A40u;
            // 0x4b5a44: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5a40) {
            ctx->pc = 0x4B5A50u;
            goto label_4b5a50;
        }
    }
    ctx->pc = 0x4B5A48u;
label_4b5a48:
    // 0x4b5a48: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b5a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b5a4c:
    // 0x4b5a4c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x4b5a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_4b5a50:
    // 0x4b5a50: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4b5a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4b5a54:
    // 0x4b5a54: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b5a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b5a58:
    // 0x4b5a58: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x4b5a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_4b5a5c:
    // 0x4b5a5c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4b5a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4b5a60:
    // 0x4b5a60: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4b5a60u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4b5a64:
    // 0x4b5a64: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4b5a68:
    if (ctx->pc == 0x4B5A68u) {
        ctx->pc = 0x4B5A68u;
            // 0x4b5a68: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4B5A6Cu;
        goto label_4b5a6c;
    }
    ctx->pc = 0x4B5A64u;
    {
        const bool branch_taken_0x4b5a64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b5a64) {
            ctx->pc = 0x4B5A68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5A64u;
            // 0x4b5a68: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B5A78u;
            goto label_4b5a78;
        }
    }
    ctx->pc = 0x4B5A6Cu;
label_4b5a6c:
    // 0x4b5a6c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b5a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b5a70:
    // 0x4b5a70: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x4b5a70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_4b5a74:
    // 0x4b5a74: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4b5a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4b5a78:
    // 0x4b5a78: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b5a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b5a7c:
    // 0x4b5a7c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x4b5a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_4b5a80:
    // 0x4b5a80: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4b5a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4b5a84:
    // 0x4b5a84: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4b5a84u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4b5a88:
    // 0x4b5a88: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4b5a8c:
    if (ctx->pc == 0x4B5A8Cu) {
        ctx->pc = 0x4B5A8Cu;
            // 0x4b5a8c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4B5A90u;
        goto label_4b5a90;
    }
    ctx->pc = 0x4B5A88u;
    {
        const bool branch_taken_0x4b5a88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b5a88) {
            ctx->pc = 0x4B5A8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5A88u;
            // 0x4b5a8c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B5A9Cu;
            goto label_4b5a9c;
        }
    }
    ctx->pc = 0x4B5A90u;
label_4b5a90:
    // 0x4b5a90: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b5a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b5a94:
    // 0x4b5a94: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x4b5a94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_4b5a98:
    // 0x4b5a98: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4b5a98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4b5a9c:
    // 0x4b5a9c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4b5a9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4b5aa0:
    // 0x4b5aa0: 0x320f809  jalr        $t9
label_4b5aa4:
    if (ctx->pc == 0x4B5AA4u) {
        ctx->pc = 0x4B5AA4u;
            // 0x4b5aa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B5AA8u;
        goto label_4b5aa8;
    }
    ctx->pc = 0x4B5AA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B5AA8u);
        ctx->pc = 0x4B5AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5AA0u;
            // 0x4b5aa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B5AA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B5AA8u; }
            if (ctx->pc != 0x4B5AA8u) { return; }
        }
        }
    }
    ctx->pc = 0x4B5AA8u;
label_4b5aa8:
    // 0x4b5aa8: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4b5aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4b5aac:
    // 0x4b5aac: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4b5aacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4b5ab0:
    // 0x4b5ab0: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x4b5ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_4b5ab4:
    // 0x4b5ab4: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4b5ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4b5ab8:
    // 0x4b5ab8: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4b5ab8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4b5abc:
    // 0x4b5abc: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4b5abcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4b5ac0:
    // 0x4b5ac0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4b5ac4:
    if (ctx->pc == 0x4B5AC4u) {
        ctx->pc = 0x4B5AC4u;
            // 0x4b5ac4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x4B5AC8u;
        goto label_4b5ac8;
    }
    ctx->pc = 0x4B5AC0u;
    {
        const bool branch_taken_0x4b5ac0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b5ac0) {
            ctx->pc = 0x4B5AC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5AC0u;
            // 0x4b5ac4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B5AD4u;
            goto label_4b5ad4;
        }
    }
    ctx->pc = 0x4B5AC8u;
label_4b5ac8:
    // 0x4b5ac8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4b5ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4b5acc:
    // 0x4b5acc: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x4b5accu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_4b5ad0:
    // 0x4b5ad0: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4b5ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4b5ad4:
    // 0x4b5ad4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4b5ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4b5ad8:
    // 0x4b5ad8: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x4b5ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_4b5adc:
    // 0x4b5adc: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4b5adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4b5ae0:
    // 0x4b5ae0: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4b5ae0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4b5ae4:
    // 0x4b5ae4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4b5ae4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4b5ae8:
    // 0x4b5ae8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4b5aec:
    if (ctx->pc == 0x4B5AECu) {
        ctx->pc = 0x4B5AF0u;
        goto label_4b5af0;
    }
    ctx->pc = 0x4B5AE8u;
    {
        const bool branch_taken_0x4b5ae8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b5ae8) {
            ctx->pc = 0x4B5AF8u;
            goto label_4b5af8;
        }
    }
    ctx->pc = 0x4B5AF0u;
label_4b5af0:
    // 0x4b5af0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4b5af0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4b5af4:
    // 0x4b5af4: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x4b5af4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_4b5af8:
    // 0x4b5af8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4b5af8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4b5afc:
    // 0x4b5afc: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x4b5afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_4b5b00:
    // 0x4b5b00: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4b5b00u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4b5b04:
    // 0x4b5b04: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4b5b08:
    if (ctx->pc == 0x4B5B08u) {
        ctx->pc = 0x4B5B0Cu;
        goto label_4b5b0c;
    }
    ctx->pc = 0x4B5B04u;
    {
        const bool branch_taken_0x4b5b04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b5b04) {
            ctx->pc = 0x4B5B14u;
            goto label_4b5b14;
        }
    }
    ctx->pc = 0x4B5B0Cu;
label_4b5b0c:
    // 0x4b5b0c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4b5b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4b5b10:
    // 0x4b5b10: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x4b5b10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_4b5b14:
    // 0x4b5b14: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4b5b14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4b5b18:
    // 0x4b5b18: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x4b5b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_4b5b1c:
    // 0x4b5b1c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4b5b1cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4b5b20:
    // 0x4b5b20: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4b5b24:
    if (ctx->pc == 0x4B5B24u) {
        ctx->pc = 0x4B5B24u;
            // 0x4b5b24: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4B5B28u;
        goto label_4b5b28;
    }
    ctx->pc = 0x4B5B20u;
    {
        const bool branch_taken_0x4b5b20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b5b20) {
            ctx->pc = 0x4B5B24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5B20u;
            // 0x4b5b24: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B5B34u;
            goto label_4b5b34;
        }
    }
    ctx->pc = 0x4B5B28u;
label_4b5b28:
    // 0x4b5b28: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4b5b28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4b5b2c:
    // 0x4b5b2c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x4b5b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_4b5b30:
    // 0x4b5b30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b5b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4b5b34:
    // 0x4b5b34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b5b34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4b5b38:
    // 0x4b5b38: 0x3e00008  jr          $ra
label_4b5b3c:
    if (ctx->pc == 0x4B5B3Cu) {
        ctx->pc = 0x4B5B3Cu;
            // 0x4b5b3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4B5B40u;
        goto label_4b5b40;
    }
    ctx->pc = 0x4B5B38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B5B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5B38u;
            // 0x4b5b3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B5B40u;
label_4b5b40:
    // 0x4b5b40: 0x812d30c  j           func_4B4C30
label_4b5b44:
    if (ctx->pc == 0x4B5B44u) {
        ctx->pc = 0x4B5B44u;
            // 0x4b5b44: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4B5B48u;
        goto label_4b5b48;
    }
    ctx->pc = 0x4B5B40u;
    ctx->pc = 0x4B5B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5B40u;
            // 0x4b5b44: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B4C30u;
    {
        auto targetFn = runtime->lookupFunction(0x4B4C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4B5B48u;
label_4b5b48:
    // 0x4b5b48: 0x0  nop
    ctx->pc = 0x4b5b48u;
    // NOP
label_4b5b4c:
    // 0x4b5b4c: 0x0  nop
    ctx->pc = 0x4b5b4cu;
    // NOP
label_4b5b50:
    // 0x4b5b50: 0x812d618  j           func_4B5860
label_4b5b54:
    if (ctx->pc == 0x4B5B54u) {
        ctx->pc = 0x4B5B54u;
            // 0x4b5b54: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4B5B58u;
        goto label_4b5b58;
    }
    ctx->pc = 0x4B5B50u;
    ctx->pc = 0x4B5B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5B50u;
            // 0x4b5b54: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B5860u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_4b5860;
    ctx->pc = 0x4B5B58u;
label_4b5b58:
    // 0x4b5b58: 0x0  nop
    ctx->pc = 0x4b5b58u;
    // NOP
label_4b5b5c:
    // 0x4b5b5c: 0x0  nop
    ctx->pc = 0x4b5b5cu;
    // NOP
label_4b5b60:
    // 0x4b5b60: 0x812d374  j           func_4B4DD0
label_4b5b64:
    if (ctx->pc == 0x4B5B64u) {
        ctx->pc = 0x4B5B64u;
            // 0x4b5b64: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4B5B68u;
        goto label_4b5b68;
    }
    ctx->pc = 0x4B5B60u;
    ctx->pc = 0x4B5B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5B60u;
            // 0x4b5b64: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B4DD0u;
    if (runtime->hasFunction(0x4B4DD0u)) {
        auto targetFn = runtime->lookupFunction(0x4B4DD0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_004B4DD0_0x4b4dd0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4B5B68u;
label_4b5b68:
    // 0x4b5b68: 0x0  nop
    ctx->pc = 0x4b5b68u;
    // NOP
label_4b5b6c:
    // 0x4b5b6c: 0x0  nop
    ctx->pc = 0x4b5b6cu;
    // NOP
label_4b5b70:
    // 0x4b5b70: 0x812d1e8  j           func_4B47A0
label_4b5b74:
    if (ctx->pc == 0x4B5B74u) {
        ctx->pc = 0x4B5B74u;
            // 0x4b5b74: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x4B5B78u;
        goto label_4b5b78;
    }
    ctx->pc = 0x4B5B70u;
    ctx->pc = 0x4B5B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5B70u;
            // 0x4b5b74: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B47A0u;
    {
        auto targetFn = runtime->lookupFunction(0x4B47A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4B5B78u;
label_4b5b78:
    // 0x4b5b78: 0x0  nop
    ctx->pc = 0x4b5b78u;
    // NOP
label_4b5b7c:
    // 0x4b5b7c: 0x0  nop
    ctx->pc = 0x4b5b7cu;
    // NOP
label_4b5b80:
    // 0x4b5b80: 0x3e00008  jr          $ra
label_4b5b84:
    if (ctx->pc == 0x4B5B84u) {
        ctx->pc = 0x4B5B84u;
            // 0x4b5b84: 0x24026591  addiu       $v0, $zero, 0x6591 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26001));
        ctx->pc = 0x4B5B88u;
        goto label_4b5b88;
    }
    ctx->pc = 0x4B5B80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B5B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5B80u;
            // 0x4b5b84: 0x24026591  addiu       $v0, $zero, 0x6591 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26001));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B5B88u;
label_4b5b88:
    // 0x4b5b88: 0x0  nop
    ctx->pc = 0x4b5b88u;
    // NOP
label_4b5b8c:
    // 0x4b5b8c: 0x0  nop
    ctx->pc = 0x4b5b8cu;
    // NOP
label_4b5b90:
    // 0x4b5b90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b5b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4b5b94:
    // 0x4b5b94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4b5b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4b5b98:
    // 0x4b5b98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b5b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4b5b9c:
    // 0x4b5b9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b5b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4b5ba0:
    // 0x4b5ba0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4b5ba0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b5ba4:
    // 0x4b5ba4: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_4b5ba8:
    if (ctx->pc == 0x4B5BA8u) {
        ctx->pc = 0x4B5BA8u;
            // 0x4b5ba8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B5BACu;
        goto label_4b5bac;
    }
    ctx->pc = 0x4B5BA4u;
    {
        const bool branch_taken_0x4b5ba4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B5BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5BA4u;
            // 0x4b5ba8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5ba4) {
            ctx->pc = 0x4B5C6Cu;
            goto label_4b5c6c;
        }
    }
    ctx->pc = 0x4B5BACu;
label_4b5bac:
    // 0x4b5bac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4b5bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4b5bb0:
    // 0x4b5bb0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4b5bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4b5bb4:
    // 0x4b5bb4: 0x24630a80  addiu       $v1, $v1, 0xA80
    ctx->pc = 0x4b5bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2688));
label_4b5bb8:
    // 0x4b5bb8: 0x24420ac0  addiu       $v0, $v0, 0xAC0
    ctx->pc = 0x4b5bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2752));
label_4b5bbc:
    // 0x4b5bbc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b5bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4b5bc0:
    // 0x4b5bc0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4b5bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4b5bc4:
    // 0x4b5bc4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4b5bc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4b5bc8:
    // 0x4b5bc8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4b5bc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4b5bcc:
    // 0x4b5bcc: 0x320f809  jalr        $t9
label_4b5bd0:
    if (ctx->pc == 0x4B5BD0u) {
        ctx->pc = 0x4B5BD4u;
        goto label_4b5bd4;
    }
    ctx->pc = 0x4B5BCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B5BD4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B5BD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B5BD4u; }
            if (ctx->pc != 0x4B5BD4u) { return; }
        }
        }
    }
    ctx->pc = 0x4B5BD4u;
label_4b5bd4:
    // 0x4b5bd4: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
label_4b5bd8:
    if (ctx->pc == 0x4B5BD8u) {
        ctx->pc = 0x4B5BD8u;
            // 0x4b5bd8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x4B5BDCu;
        goto label_4b5bdc;
    }
    ctx->pc = 0x4B5BD4u;
    {
        const bool branch_taken_0x4b5bd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b5bd4) {
            ctx->pc = 0x4B5BD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5BD4u;
            // 0x4b5bd8: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B5C58u;
            goto label_4b5c58;
        }
    }
    ctx->pc = 0x4B5BDCu;
label_4b5bdc:
    // 0x4b5bdc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4b5bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4b5be0:
    // 0x4b5be0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4b5be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4b5be4:
    // 0x4b5be4: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x4b5be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_4b5be8:
    // 0x4b5be8: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x4b5be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_4b5bec:
    // 0x4b5bec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b5becu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4b5bf0:
    // 0x4b5bf0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4b5bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4b5bf4:
    // 0x4b5bf4: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x4b5bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_4b5bf8:
    // 0x4b5bf8: 0xc0aecc4  jal         func_2BB310
label_4b5bfc:
    if (ctx->pc == 0x4B5BFCu) {
        ctx->pc = 0x4B5BFCu;
            // 0x4b5bfc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4B5C00u;
        goto label_4b5c00;
    }
    ctx->pc = 0x4B5BF8u;
    SET_GPR_U32(ctx, 31, 0x4B5C00u);
    ctx->pc = 0x4B5BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5BF8u;
            // 0x4b5bfc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5C00u; }
        if (ctx->pc != 0x4B5C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5C00u; }
        if (ctx->pc != 0x4B5C00u) { return; }
    }
    ctx->pc = 0x4B5C00u;
label_4b5c00:
    // 0x4b5c00: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x4b5c00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_4b5c04:
    // 0x4b5c04: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x4b5c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_4b5c08:
    // 0x4b5c08: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4b5c0c:
    if (ctx->pc == 0x4B5C0Cu) {
        ctx->pc = 0x4B5C0Cu;
            // 0x4b5c0c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x4B5C10u;
        goto label_4b5c10;
    }
    ctx->pc = 0x4B5C08u;
    {
        const bool branch_taken_0x4b5c08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b5c08) {
            ctx->pc = 0x4B5C0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5C08u;
            // 0x4b5c0c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B5C24u;
            goto label_4b5c24;
        }
    }
    ctx->pc = 0x4B5C10u;
label_4b5c10:
    // 0x4b5c10: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x4b5c10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_4b5c14:
    // 0x4b5c14: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4b5c14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4b5c18:
    // 0x4b5c18: 0x320f809  jalr        $t9
label_4b5c1c:
    if (ctx->pc == 0x4B5C1Cu) {
        ctx->pc = 0x4B5C1Cu;
            // 0x4b5c1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4B5C20u;
        goto label_4b5c20;
    }
    ctx->pc = 0x4B5C18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B5C20u);
        ctx->pc = 0x4B5C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5C18u;
            // 0x4b5c1c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B5C20u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B5C20u; }
            if (ctx->pc != 0x4B5C20u) { return; }
        }
        }
    }
    ctx->pc = 0x4B5C20u;
label_4b5c20:
    // 0x4b5c20: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x4b5c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_4b5c24:
    // 0x4b5c24: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4b5c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4b5c28:
    // 0x4b5c28: 0xc0aec9c  jal         func_2BB270
label_4b5c2c:
    if (ctx->pc == 0x4B5C2Cu) {
        ctx->pc = 0x4B5C2Cu;
            // 0x4b5c2c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x4B5C30u;
        goto label_4b5c30;
    }
    ctx->pc = 0x4B5C28u;
    SET_GPR_U32(ctx, 31, 0x4B5C30u);
    ctx->pc = 0x4B5C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5C28u;
            // 0x4b5c2c: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5C30u; }
        if (ctx->pc != 0x4B5C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5C30u; }
        if (ctx->pc != 0x4B5C30u) { return; }
    }
    ctx->pc = 0x4B5C30u;
label_4b5c30:
    // 0x4b5c30: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x4b5c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_4b5c34:
    // 0x4b5c34: 0xc0aec88  jal         func_2BB220
label_4b5c38:
    if (ctx->pc == 0x4B5C38u) {
        ctx->pc = 0x4B5C38u;
            // 0x4b5c38: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4B5C3Cu;
        goto label_4b5c3c;
    }
    ctx->pc = 0x4B5C34u;
    SET_GPR_U32(ctx, 31, 0x4B5C3Cu);
    ctx->pc = 0x4B5C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5C34u;
            // 0x4b5c38: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5C3Cu; }
        if (ctx->pc != 0x4B5C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5C3Cu; }
        if (ctx->pc != 0x4B5C3Cu) { return; }
    }
    ctx->pc = 0x4B5C3Cu;
label_4b5c3c:
    // 0x4b5c3c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x4b5c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_4b5c40:
    // 0x4b5c40: 0xc0aec0c  jal         func_2BB030
label_4b5c44:
    if (ctx->pc == 0x4B5C44u) {
        ctx->pc = 0x4B5C44u;
            // 0x4b5c44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B5C48u;
        goto label_4b5c48;
    }
    ctx->pc = 0x4B5C40u;
    SET_GPR_U32(ctx, 31, 0x4B5C48u);
    ctx->pc = 0x4B5C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5C40u;
            // 0x4b5c44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5C48u; }
        if (ctx->pc != 0x4B5C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5C48u; }
        if (ctx->pc != 0x4B5C48u) { return; }
    }
    ctx->pc = 0x4B5C48u;
label_4b5c48:
    // 0x4b5c48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4b5c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b5c4c:
    // 0x4b5c4c: 0xc0aeaa8  jal         func_2BAAA0
label_4b5c50:
    if (ctx->pc == 0x4B5C50u) {
        ctx->pc = 0x4B5C50u;
            // 0x4b5c50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B5C54u;
        goto label_4b5c54;
    }
    ctx->pc = 0x4B5C4Cu;
    SET_GPR_U32(ctx, 31, 0x4B5C54u);
    ctx->pc = 0x4B5C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5C4Cu;
            // 0x4b5c50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5C54u; }
        if (ctx->pc != 0x4B5C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5C54u; }
        if (ctx->pc != 0x4B5C54u) { return; }
    }
    ctx->pc = 0x4B5C54u;
label_4b5c54:
    // 0x4b5c54: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4b5c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4b5c58:
    // 0x4b5c58: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4b5c58u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4b5c5c:
    // 0x4b5c5c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4b5c60:
    if (ctx->pc == 0x4B5C60u) {
        ctx->pc = 0x4B5C60u;
            // 0x4b5c60: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B5C64u;
        goto label_4b5c64;
    }
    ctx->pc = 0x4B5C5Cu;
    {
        const bool branch_taken_0x4b5c5c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4b5c5c) {
            ctx->pc = 0x4B5C60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5C5Cu;
            // 0x4b5c60: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B5C70u;
            goto label_4b5c70;
        }
    }
    ctx->pc = 0x4B5C64u;
label_4b5c64:
    // 0x4b5c64: 0xc0400a8  jal         func_1002A0
label_4b5c68:
    if (ctx->pc == 0x4B5C68u) {
        ctx->pc = 0x4B5C68u;
            // 0x4b5c68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B5C6Cu;
        goto label_4b5c6c;
    }
    ctx->pc = 0x4B5C64u;
    SET_GPR_U32(ctx, 31, 0x4B5C6Cu);
    ctx->pc = 0x4B5C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5C64u;
            // 0x4b5c68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5C6Cu; }
        if (ctx->pc != 0x4B5C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5C6Cu; }
        if (ctx->pc != 0x4B5C6Cu) { return; }
    }
    ctx->pc = 0x4B5C6Cu;
label_4b5c6c:
    // 0x4b5c6c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4b5c6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b5c70:
    // 0x4b5c70: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4b5c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4b5c74:
    // 0x4b5c74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b5c74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4b5c78:
    // 0x4b5c78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b5c78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4b5c7c:
    // 0x4b5c7c: 0x3e00008  jr          $ra
label_4b5c80:
    if (ctx->pc == 0x4B5C80u) {
        ctx->pc = 0x4B5C80u;
            // 0x4b5c80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4B5C84u;
        goto label_4b5c84;
    }
    ctx->pc = 0x4B5C7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B5C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5C7Cu;
            // 0x4b5c80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B5C84u;
label_4b5c84:
    // 0x4b5c84: 0x0  nop
    ctx->pc = 0x4b5c84u;
    // NOP
label_4b5c88:
    // 0x4b5c88: 0x0  nop
    ctx->pc = 0x4b5c88u;
    // NOP
label_4b5c8c:
    // 0x4b5c8c: 0x0  nop
    ctx->pc = 0x4b5c8cu;
    // NOP
label_4b5c90:
    // 0x4b5c90: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x4b5c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_4b5c94:
    // 0x4b5c94: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4b5c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4b5c98:
    // 0x4b5c98: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x4b5c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_4b5c9c:
    // 0x4b5c9c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x4b5c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_4b5ca0:
    // 0x4b5ca0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4b5ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_4b5ca4:
    // 0x4b5ca4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4b5ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4b5ca8:
    // 0x4b5ca8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4b5ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4b5cac:
    // 0x4b5cac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4b5cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4b5cb0:
    // 0x4b5cb0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4b5cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4b5cb4:
    // 0x4b5cb4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4b5cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4b5cb8:
    // 0x4b5cb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b5cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4b5cbc:
    // 0x4b5cbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b5cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4b5cc0:
    // 0x4b5cc0: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4b5cc0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4b5cc4:
    // 0x4b5cc4: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_4b5cc8:
    if (ctx->pc == 0x4B5CC8u) {
        ctx->pc = 0x4B5CC8u;
            // 0x4b5cc8: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B5CCCu;
        goto label_4b5ccc;
    }
    ctx->pc = 0x4B5CC4u;
    {
        const bool branch_taken_0x4b5cc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4B5CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5CC4u;
            // 0x4b5cc8: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5cc4) {
            ctx->pc = 0x4B5D14u;
            goto label_4b5d14;
        }
    }
    ctx->pc = 0x4B5CCCu;
label_4b5ccc:
    // 0x4b5ccc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4b5cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4b5cd0:
    // 0x4b5cd0: 0x50a30047  beql        $a1, $v1, . + 4 + (0x47 << 2)
label_4b5cd4:
    if (ctx->pc == 0x4B5CD4u) {
        ctx->pc = 0x4B5CD4u;
            // 0x4b5cd4: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x4B5CD8u;
        goto label_4b5cd8;
    }
    ctx->pc = 0x4B5CD0u;
    {
        const bool branch_taken_0x4b5cd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4b5cd0) {
            ctx->pc = 0x4B5CD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5CD0u;
            // 0x4b5cd4: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B5DF0u;
            goto label_4b5df0;
        }
    }
    ctx->pc = 0x4B5CD8u;
label_4b5cd8:
    // 0x4b5cd8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4b5cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4b5cdc:
    // 0x4b5cdc: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_4b5ce0:
    if (ctx->pc == 0x4B5CE0u) {
        ctx->pc = 0x4B5CE4u;
        goto label_4b5ce4;
    }
    ctx->pc = 0x4B5CDCu;
    {
        const bool branch_taken_0x4b5cdc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4b5cdc) {
            ctx->pc = 0x4B5CECu;
            goto label_4b5cec;
        }
    }
    ctx->pc = 0x4B5CE4u;
label_4b5ce4:
    // 0x4b5ce4: 0x10000041  b           . + 4 + (0x41 << 2)
label_4b5ce8:
    if (ctx->pc == 0x4B5CE8u) {
        ctx->pc = 0x4B5CECu;
        goto label_4b5cec;
    }
    ctx->pc = 0x4B5CE4u;
    {
        const bool branch_taken_0x4b5ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b5ce4) {
            ctx->pc = 0x4B5DECu;
            goto label_4b5dec;
        }
    }
    ctx->pc = 0x4B5CECu;
label_4b5cec:
    // 0x4b5cec: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4b5cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4b5cf0:
    // 0x4b5cf0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4b5cf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4b5cf4:
    // 0x4b5cf4: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4b5cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4b5cf8:
    // 0x4b5cf8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x4b5cf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_4b5cfc:
    // 0x4b5cfc: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x4b5cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_4b5d00:
    // 0x4b5d00: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4b5d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4b5d04:
    // 0x4b5d04: 0x320f809  jalr        $t9
label_4b5d08:
    if (ctx->pc == 0x4B5D08u) {
        ctx->pc = 0x4B5D08u;
            // 0x4b5d08: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x4B5D0Cu;
        goto label_4b5d0c;
    }
    ctx->pc = 0x4B5D04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B5D0Cu);
        ctx->pc = 0x4B5D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5D04u;
            // 0x4b5d08: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B5D0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B5D0Cu; }
            if (ctx->pc != 0x4B5D0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4B5D0Cu;
label_4b5d0c:
    // 0x4b5d0c: 0x10000037  b           . + 4 + (0x37 << 2)
label_4b5d10:
    if (ctx->pc == 0x4B5D10u) {
        ctx->pc = 0x4B5D14u;
        goto label_4b5d14;
    }
    ctx->pc = 0x4B5D0Cu;
    {
        const bool branch_taken_0x4b5d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b5d0c) {
            ctx->pc = 0x4B5DECu;
            goto label_4b5dec;
        }
    }
    ctx->pc = 0x4B5D14u;
label_4b5d14:
    // 0x4b5d14: 0x8eb00070  lw          $s0, 0x70($s5)
    ctx->pc = 0x4b5d14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_4b5d18:
    // 0x4b5d18: 0x12000034  beqz        $s0, . + 4 + (0x34 << 2)
label_4b5d1c:
    if (ctx->pc == 0x4B5D1Cu) {
        ctx->pc = 0x4B5D20u;
        goto label_4b5d20;
    }
    ctx->pc = 0x4B5D18u;
    {
        const bool branch_taken_0x4b5d18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b5d18) {
            ctx->pc = 0x4B5DECu;
            goto label_4b5dec;
        }
    }
    ctx->pc = 0x4B5D20u;
label_4b5d20:
    // 0x4b5d20: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4b5d20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_4b5d24:
    // 0x4b5d24: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4b5d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4b5d28:
    // 0x4b5d28: 0x8c64d130  lw          $a0, -0x2ED0($v1)
    ctx->pc = 0x4b5d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_4b5d2c:
    // 0x4b5d2c: 0x26b30084  addiu       $s3, $s5, 0x84
    ctx->pc = 0x4b5d2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
label_4b5d30:
    // 0x4b5d30: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4b5d30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b5d34:
    // 0x4b5d34: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4b5d34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b5d38:
    // 0x4b5d38: 0x8c43d120  lw          $v1, -0x2EE0($v0)
    ctx->pc = 0x4b5d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_4b5d3c:
    // 0x4b5d3c: 0x8c940130  lw          $s4, 0x130($a0)
    ctx->pc = 0x4b5d3cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_4b5d40:
    // 0x4b5d40: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b5d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b5d44:
    // 0x4b5d44: 0x8c57e378  lw          $s7, -0x1C88($v0)
    ctx->pc = 0x4b5d44u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_4b5d48:
    // 0x4b5d48: 0x142880  sll         $a1, $s4, 2
    ctx->pc = 0x4b5d48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_4b5d4c:
    // 0x4b5d4c: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x4b5d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_4b5d50:
    // 0x4b5d50: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b5d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b5d54:
    // 0x4b5d54: 0x8c5ee370  lw          $fp, -0x1C90($v0)
    ctx->pc = 0x4b5d54u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_4b5d58:
    // 0x4b5d58: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4b5d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4b5d5c:
    // 0x4b5d5c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4b5d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4b5d60:
    // 0x4b5d60: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4b5d60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4b5d64:
    // 0x4b5d64: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b5d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b5d68:
    // 0x4b5d68: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x4b5d68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_4b5d6c:
    // 0x4b5d6c: 0x24960010  addiu       $s6, $a0, 0x10
    ctx->pc = 0x4b5d6cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_4b5d70:
    // 0x4b5d70: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x4b5d70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_4b5d74:
    // 0x4b5d74: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x4b5d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_4b5d78:
    // 0x4b5d78: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4b5d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4b5d7c:
    // 0x4b5d7c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x4b5d7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4b5d80:
    // 0x4b5d80: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x4b5d80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4b5d84:
    // 0x4b5d84: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x4b5d84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4b5d88:
    // 0x4b5d88: 0x27a900a0  addiu       $t1, $sp, 0xA0
    ctx->pc = 0x4b5d88u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_4b5d8c:
    // 0x4b5d8c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4b5d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4b5d90:
    // 0x4b5d90: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4b5d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4b5d94:
    // 0x4b5d94: 0xc12da48  jal         func_4B6920
label_4b5d98:
    if (ctx->pc == 0x4B5D98u) {
        ctx->pc = 0x4B5D98u;
            // 0x4b5d98: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B5D9Cu;
        goto label_4b5d9c;
    }
    ctx->pc = 0x4B5D94u;
    SET_GPR_U32(ctx, 31, 0x4B5D9Cu);
    ctx->pc = 0x4B5D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5D94u;
            // 0x4b5d98: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B6920u;
    if (runtime->hasFunction(0x4B6920u)) {
        auto targetFn = runtime->lookupFunction(0x4B6920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5D9Cu; }
        if (ctx->pc != 0x4B5D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B6920_0x4b6920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5D9Cu; }
        if (ctx->pc != 0x4B5D9Cu) { return; }
    }
    ctx->pc = 0x4B5D9Cu;
label_4b5d9c:
    // 0x4b5d9c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4b5d9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4b5da0:
    // 0x4b5da0: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x4b5da0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4b5da4:
    // 0x4b5da4: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_4b5da8:
    if (ctx->pc == 0x4B5DA8u) {
        ctx->pc = 0x4B5DA8u;
            // 0x4b5da8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4B5DACu;
        goto label_4b5dac;
    }
    ctx->pc = 0x4B5DA4u;
    {
        const bool branch_taken_0x4b5da4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B5DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5DA4u;
            // 0x4b5da8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5da4) {
            ctx->pc = 0x4B5D74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4b5d74;
        }
    }
    ctx->pc = 0x4B5DACu;
label_4b5dac:
    // 0x4b5dac: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4b5dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4b5db0:
    // 0x4b5db0: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x4b5db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4b5db4:
    // 0x4b5db4: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
label_4b5db8:
    if (ctx->pc == 0x4B5DB8u) {
        ctx->pc = 0x4B5DBCu;
        goto label_4b5dbc;
    }
    ctx->pc = 0x4B5DB4u;
    {
        const bool branch_taken_0x4b5db4 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x4b5db4) {
            ctx->pc = 0x4B5DECu;
            goto label_4b5dec;
        }
    }
    ctx->pc = 0x4B5DBCu;
label_4b5dbc:
    // 0x4b5dbc: 0xc04e738  jal         func_139CE0
label_4b5dc0:
    if (ctx->pc == 0x4B5DC0u) {
        ctx->pc = 0x4B5DC0u;
            // 0x4b5dc0: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->pc = 0x4B5DC4u;
        goto label_4b5dc4;
    }
    ctx->pc = 0x4B5DBCu;
    SET_GPR_U32(ctx, 31, 0x4B5DC4u);
    ctx->pc = 0x4B5DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5DBCu;
            // 0x4b5dc0: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5DC4u; }
        if (ctx->pc != 0x4B5DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5DC4u; }
        if (ctx->pc != 0x4B5DC4u) { return; }
    }
    ctx->pc = 0x4B5DC4u;
label_4b5dc4:
    // 0x4b5dc4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b5dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b5dc8:
    // 0x4b5dc8: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x4b5dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4b5dcc:
    // 0x4b5dcc: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x4b5dccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_4b5dd0:
    // 0x4b5dd0: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4b5dd0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_4b5dd4:
    // 0x4b5dd4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b5dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b5dd8:
    // 0x4b5dd8: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x4b5dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_4b5ddc:
    // 0x4b5ddc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4b5ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4b5de0:
    // 0x4b5de0: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x4b5de0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_4b5de4:
    // 0x4b5de4: 0xc055754  jal         func_155D50
label_4b5de8:
    if (ctx->pc == 0x4B5DE8u) {
        ctx->pc = 0x4B5DE8u;
            // 0x4b5de8: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x4B5DECu;
        goto label_4b5dec;
    }
    ctx->pc = 0x4B5DE4u;
    SET_GPR_U32(ctx, 31, 0x4B5DECu);
    ctx->pc = 0x4B5DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5DE4u;
            // 0x4b5de8: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155D50u;
    if (runtime->hasFunction(0x155D50u)) {
        auto targetFn = runtime->lookupFunction(0x155D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5DECu; }
        if (ctx->pc != 0x4B5DECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155D50_0x155d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5DECu; }
        if (ctx->pc != 0x4B5DECu) { return; }
    }
    ctx->pc = 0x4B5DECu;
label_4b5dec:
    // 0x4b5dec: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x4b5decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_4b5df0:
    // 0x4b5df0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x4b5df0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4b5df4:
    // 0x4b5df4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4b5df4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4b5df8:
    // 0x4b5df8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4b5df8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4b5dfc:
    // 0x4b5dfc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4b5dfcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4b5e00:
    // 0x4b5e00: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4b5e00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4b5e04:
    // 0x4b5e04: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4b5e04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4b5e08:
    // 0x4b5e08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4b5e08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4b5e0c:
    // 0x4b5e0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b5e0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4b5e10:
    // 0x4b5e10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b5e10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4b5e14:
    // 0x4b5e14: 0x3e00008  jr          $ra
label_4b5e18:
    if (ctx->pc == 0x4B5E18u) {
        ctx->pc = 0x4B5E18u;
            // 0x4b5e18: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x4B5E1Cu;
        goto label_4b5e1c;
    }
    ctx->pc = 0x4B5E14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B5E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5E14u;
            // 0x4b5e18: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B5E1Cu;
label_4b5e1c:
    // 0x4b5e1c: 0x0  nop
    ctx->pc = 0x4b5e1cu;
    // NOP
label_4b5e20:
    // 0x4b5e20: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x4b5e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_4b5e24:
    // 0x4b5e24: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4b5e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4b5e28:
    // 0x4b5e28: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x4b5e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_4b5e2c:
    // 0x4b5e2c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x4b5e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_4b5e30:
    // 0x4b5e30: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x4b5e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_4b5e34:
    // 0x4b5e34: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4b5e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_4b5e38:
    // 0x4b5e38: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4b5e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4b5e3c:
    // 0x4b5e3c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4b5e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4b5e40:
    // 0x4b5e40: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4b5e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4b5e44:
    // 0x4b5e44: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4b5e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4b5e48:
    // 0x4b5e48: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4b5e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4b5e4c:
    // 0x4b5e4c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4b5e4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4b5e50:
    // 0x4b5e50: 0x90860010  lbu         $a2, 0x10($a0)
    ctx->pc = 0x4b5e50u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4b5e54:
    // 0x4b5e54: 0x10c3002f  beq         $a2, $v1, . + 4 + (0x2F << 2)
label_4b5e58:
    if (ctx->pc == 0x4B5E58u) {
        ctx->pc = 0x4B5E58u;
            // 0x4b5e58: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B5E5Cu;
        goto label_4b5e5c;
    }
    ctx->pc = 0x4B5E54u;
    {
        const bool branch_taken_0x4b5e54 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x4B5E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5E54u;
            // 0x4b5e58: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b5e54) {
            ctx->pc = 0x4B5F14u;
            goto label_4b5f14;
        }
    }
    ctx->pc = 0x4B5E5Cu;
label_4b5e5c:
    // 0x4b5e5c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4b5e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4b5e60:
    // 0x4b5e60: 0x10c30006  beq         $a2, $v1, . + 4 + (0x6 << 2)
label_4b5e64:
    if (ctx->pc == 0x4B5E64u) {
        ctx->pc = 0x4B5E68u;
        goto label_4b5e68;
    }
    ctx->pc = 0x4B5E60u;
    {
        const bool branch_taken_0x4b5e60 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x4b5e60) {
            ctx->pc = 0x4B5E7Cu;
            goto label_4b5e7c;
        }
    }
    ctx->pc = 0x4B5E68u;
label_4b5e68:
    // 0x4b5e68: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4b5e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4b5e6c:
    // 0x4b5e6c: 0x10c30086  beq         $a2, $v1, . + 4 + (0x86 << 2)
label_4b5e70:
    if (ctx->pc == 0x4B5E70u) {
        ctx->pc = 0x4B5E74u;
        goto label_4b5e74;
    }
    ctx->pc = 0x4B5E6Cu;
    {
        const bool branch_taken_0x4b5e6c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x4b5e6c) {
            ctx->pc = 0x4B6088u;
            goto label_4b6088;
        }
    }
    ctx->pc = 0x4B5E74u;
label_4b5e74:
    // 0x4b5e74: 0x10000084  b           . + 4 + (0x84 << 2)
label_4b5e78:
    if (ctx->pc == 0x4B5E78u) {
        ctx->pc = 0x4B5E7Cu;
        goto label_4b5e7c;
    }
    ctx->pc = 0x4B5E74u;
    {
        const bool branch_taken_0x4b5e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b5e74) {
            ctx->pc = 0x4B6088u;
            goto label_4b6088;
        }
    }
    ctx->pc = 0x4B5E7Cu;
label_4b5e7c:
    // 0x4b5e7c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4b5e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4b5e80:
    // 0x4b5e80: 0x8ec80084  lw          $t0, 0x84($s6)
    ctx->pc = 0x4b5e80u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 132)));
label_4b5e84:
    // 0x4b5e84: 0x8c47c748  lw          $a3, -0x38B8($v0)
    ctx->pc = 0x4b5e84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952776)));
label_4b5e88:
    // 0x4b5e88: 0x3c060063  lui         $a2, 0x63
    ctx->pc = 0x4b5e88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)99 << 16));
label_4b5e8c:
    // 0x4b5e8c: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x4b5e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
label_4b5e90:
    // 0x4b5e90: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x4b5e90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_4b5e94:
    // 0x4b5e94: 0x24091fff  addiu       $t1, $zero, 0x1FFF
    ctx->pc = 0x4b5e94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8191));
label_4b5e98:
    // 0x4b5e98: 0x8d020030  lw          $v0, 0x30($t0)
    ctx->pc = 0x4b5e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 48)));
label_4b5e9c:
    // 0x4b5e9c: 0xe06027  not         $t4, $a3
    ctx->pc = 0x4b5e9cu;
    SET_GPR_U64(ctx, 12, ~(GPR_U64(ctx, 7) | GPR_U64(ctx, 0)));
label_4b5ea0:
    // 0x4b5ea0: 0x8c4b03f0  lw          $t3, 0x3F0($v0)
    ctx->pc = 0x4b5ea0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1008)));
label_4b5ea4:
    // 0x4b5ea4: 0x244a02e8  addiu       $t2, $v0, 0x2E8
    ctx->pc = 0x4b5ea4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 744));
label_4b5ea8:
    // 0x4b5ea8: 0x24480138  addiu       $t0, $v0, 0x138
    ctx->pc = 0x4b5ea8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 312));
label_4b5eac:
    // 0x4b5eac: 0x24470258  addiu       $a3, $v0, 0x258
    ctx->pc = 0x4b5eacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 600));
label_4b5eb0:
    // 0x4b5eb0: 0x16c5824  and         $t3, $t3, $t4
    ctx->pc = 0x4b5eb0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) & GPR_U64(ctx, 12));
label_4b5eb4:
    // 0x4b5eb4: 0xac4b03f0  sw          $t3, 0x3F0($v0)
    ctx->pc = 0x4b5eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1008), GPR_U32(ctx, 11));
label_4b5eb8:
    // 0x4b5eb8: 0x8ccbc750  lw          $t3, -0x38B0($a2)
    ctx->pc = 0x4b5eb8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294952784)));
label_4b5ebc:
    // 0x4b5ebc: 0x8c4602d0  lw          $a2, 0x2D0($v0)
    ctx->pc = 0x4b5ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
label_4b5ec0:
    // 0x4b5ec0: 0x1605827  not         $t3, $t3
    ctx->pc = 0x4b5ec0u;
    SET_GPR_U64(ctx, 11, ~(GPR_U64(ctx, 11) | GPR_U64(ctx, 0)));
label_4b5ec4:
    // 0x4b5ec4: 0xcb3024  and         $a2, $a2, $t3
    ctx->pc = 0x4b5ec4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 11));
label_4b5ec8:
    // 0x4b5ec8: 0xac4602d0  sw          $a2, 0x2D0($v0)
    ctx->pc = 0x4b5ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 720), GPR_U32(ctx, 6));
label_4b5ecc:
    // 0x4b5ecc: 0x8ca6c758  lw          $a2, -0x38A8($a1)
    ctx->pc = 0x4b5eccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294952792)));
label_4b5ed0:
    // 0x4b5ed0: 0x8c450120  lw          $a1, 0x120($v0)
    ctx->pc = 0x4b5ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
label_4b5ed4:
    // 0x4b5ed4: 0xc03027  not         $a2, $a2
    ctx->pc = 0x4b5ed4u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 6) | GPR_U64(ctx, 0)));
label_4b5ed8:
    // 0x4b5ed8: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x4b5ed8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
label_4b5edc:
    // 0x4b5edc: 0xac450120  sw          $a1, 0x120($v0)
    ctx->pc = 0x4b5edcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 288), GPR_U32(ctx, 5));
label_4b5ee0:
    // 0x4b5ee0: 0x8c65c760  lw          $a1, -0x38A0($v1)
    ctx->pc = 0x4b5ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952800)));
label_4b5ee4:
    // 0x4b5ee4: 0x8c430240  lw          $v1, 0x240($v0)
    ctx->pc = 0x4b5ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 576)));
label_4b5ee8:
    // 0x4b5ee8: 0xa02827  not         $a1, $a1
    ctx->pc = 0x4b5ee8u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 5) | GPR_U64(ctx, 0)));
label_4b5eec:
    // 0x4b5eec: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x4b5eecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_4b5ef0:
    // 0x4b5ef0: 0xac430240  sw          $v1, 0x240($v0)
    ctx->pc = 0x4b5ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 576), GPR_U32(ctx, 3));
label_4b5ef4:
    // 0x4b5ef4: 0xaeca0098  sw          $t2, 0x98($s6)
    ctx->pc = 0x4b5ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 152), GPR_U32(ctx, 10));
label_4b5ef8:
    // 0x4b5ef8: 0xac4902e8  sw          $t1, 0x2E8($v0)
    ctx->pc = 0x4b5ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 744), GPR_U32(ctx, 9));
label_4b5efc:
    // 0x4b5efc: 0xaec800a0  sw          $t0, 0xA0($s6)
    ctx->pc = 0x4b5efcu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 160), GPR_U32(ctx, 8));
label_4b5f00:
    // 0x4b5f00: 0xaec700a4  sw          $a3, 0xA4($s6)
    ctx->pc = 0x4b5f00u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 164), GPR_U32(ctx, 7));
label_4b5f04:
    // 0x4b5f04: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4b5f04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4b5f08:
    // 0x4b5f08: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x4b5f08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_4b5f0c:
    // 0x4b5f0c: 0x320f809  jalr        $t9
label_4b5f10:
    if (ctx->pc == 0x4B5F10u) {
        ctx->pc = 0x4B5F14u;
        goto label_4b5f14;
    }
    ctx->pc = 0x4B5F0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B5F14u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B5F14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B5F14u; }
            if (ctx->pc != 0x4B5F14u) { return; }
        }
        }
    }
    ctx->pc = 0x4B5F14u;
label_4b5f14:
    // 0x4b5f14: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4b5f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4b5f18:
    // 0x4b5f18: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x4b5f18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
label_4b5f1c:
    // 0x4b5f1c: 0x8c468a08  lw          $a2, -0x75F8($v0)
    ctx->pc = 0x4b5f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4b5f20:
    // 0x4b5f20: 0xc6c2009c  lwc1        $f2, 0x9C($s6)
    ctx->pc = 0x4b5f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4b5f24:
    // 0x4b5f24: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4b5f24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4b5f28:
    // 0x4b5f28: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x4b5f28u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4b5f2c:
    // 0x4b5f2c: 0xc4d40018  lwc1        $f20, 0x18($a2)
    ctx->pc = 0x4b5f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4b5f30:
    // 0x4b5f30: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x4b5f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
label_4b5f34:
    // 0x4b5f34: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x4b5f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_4b5f38:
    // 0x4b5f38: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x4b5f38u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_4b5f3c:
    // 0x4b5f3c: 0x4614185c  madd.s      $f1, $f3, $f20
    ctx->pc = 0x4b5f3cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[20]));
label_4b5f40:
    // 0x4b5f40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4b5f40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b5f44:
    // 0x4b5f44: 0x0  nop
    ctx->pc = 0x4b5f44u;
    // NOP
label_4b5f48:
    // 0x4b5f48: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x4b5f48u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_4b5f4c:
    // 0x4b5f4c: 0xc049514  jal         func_125450
label_4b5f50:
    if (ctx->pc == 0x4B5F50u) {
        ctx->pc = 0x4B5F50u;
            // 0x4b5f50: 0xe6c1009c  swc1        $f1, 0x9C($s6) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 156), bits); }
        ctx->pc = 0x4B5F54u;
        goto label_4b5f54;
    }
    ctx->pc = 0x4B5F4Cu;
    SET_GPR_U32(ctx, 31, 0x4B5F54u);
    ctx->pc = 0x4B5F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5F4Cu;
            // 0x4b5f50: 0xe6c1009c  swc1        $f1, 0x9C($s6) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 156), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5F54u; }
        if (ctx->pc != 0x4B5F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5F54u; }
        if (ctx->pc != 0x4B5F54u) { return; }
    }
    ctx->pc = 0x4B5F54u;
label_4b5f54:
    // 0x4b5f54: 0xc04761e  jal         func_11D878
label_4b5f58:
    if (ctx->pc == 0x4B5F58u) {
        ctx->pc = 0x4B5F58u;
            // 0x4b5f58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B5F5Cu;
        goto label_4b5f5c;
    }
    ctx->pc = 0x4B5F54u;
    SET_GPR_U32(ctx, 31, 0x4B5F5Cu);
    ctx->pc = 0x4B5F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5F54u;
            // 0x4b5f58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D878u;
    if (runtime->hasFunction(0x11D878u)) {
        auto targetFn = runtime->lookupFunction(0x11D878u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5F5Cu; }
        if (ctx->pc != 0x4B5F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D878_0x11d878(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5F5Cu; }
        if (ctx->pc != 0x4B5F5Cu) { return; }
    }
    ctx->pc = 0x4B5F5Cu;
label_4b5f5c:
    // 0x4b5f5c: 0x3c0340ac  lui         $v1, 0x40AC
    ctx->pc = 0x4b5f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16556 << 16));
label_4b5f60:
    // 0x4b5f60: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4b5f60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4b5f64:
    // 0x4b5f64: 0x34627000  ori         $v0, $v1, 0x7000
    ctx->pc = 0x4b5f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28672);
label_4b5f68:
    // 0x4b5f68: 0xc04963e  jal         func_1258F8
label_4b5f6c:
    if (ctx->pc == 0x4B5F6Cu) {
        ctx->pc = 0x4B5F6Cu;
            // 0x4b5f6c: 0x2203c  dsll32      $a0, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
        ctx->pc = 0x4B5F70u;
        goto label_4b5f70;
    }
    ctx->pc = 0x4B5F68u;
    SET_GPR_U32(ctx, 31, 0x4B5F70u);
    ctx->pc = 0x4B5F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5F68u;
            // 0x4b5f6c: 0x2203c  dsll32      $a0, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5F70u; }
        if (ctx->pc != 0x4B5F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5F70u; }
        if (ctx->pc != 0x4B5F70u) { return; }
    }
    ctx->pc = 0x4B5F70u;
label_4b5f70:
    // 0x4b5f70: 0xc0497a2  jal         func_125E88
label_4b5f74:
    if (ctx->pc == 0x4B5F74u) {
        ctx->pc = 0x4B5F74u;
            // 0x4b5f74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B5F78u;
        goto label_4b5f78;
    }
    ctx->pc = 0x4B5F70u;
    SET_GPR_U32(ctx, 31, 0x4B5F78u);
    ctx->pc = 0x4B5F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B5F70u;
            // 0x4b5f74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125E88u;
    if (runtime->hasFunction(0x125E88u)) {
        auto targetFn = runtime->lookupFunction(0x125E88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5F78u; }
        if (ctx->pc != 0x4B5F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125E88_0x125e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B5F78u; }
        if (ctx->pc != 0x4B5F78u) { return; }
    }
    ctx->pc = 0x4B5F78u;
label_4b5f78:
    // 0x4b5f78: 0x3c034563  lui         $v1, 0x4563
    ctx->pc = 0x4b5f78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17763 << 16));
label_4b5f7c:
    // 0x4b5f7c: 0x8ec40098  lw          $a0, 0x98($s6)
    ctx->pc = 0x4b5f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 152)));
label_4b5f80:
    // 0x4b5f80: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x4b5f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
label_4b5f84:
    // 0x4b5f84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4b5f84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b5f88:
    // 0x4b5f88: 0x0  nop
    ctx->pc = 0x4b5f88u;
    // NOP
label_4b5f8c:
    // 0x4b5f8c: 0x46140042  mul.s       $f1, $f0, $f20
    ctx->pc = 0x4b5f8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_4b5f90:
    // 0x4b5f90: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x4b5f90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_4b5f94:
    // 0x4b5f94: 0x8ec400a0  lw          $a0, 0xA0($s6)
    ctx->pc = 0x4b5f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 160)));
label_4b5f98:
    // 0x4b5f98: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x4b5f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b5f9c:
    // 0x4b5f9c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4b5f9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4b5fa0:
    // 0x4b5fa0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4b5fa0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4b5fa4:
    // 0x4b5fa4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4b5fa4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4b5fa8:
    // 0x4b5fa8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4b5fa8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4b5fac:
    // 0x4b5fac: 0x0  nop
    ctx->pc = 0x4b5facu;
    // NOP
label_4b5fb0:
    // 0x4b5fb0: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x4b5fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_4b5fb4:
    // 0x4b5fb4: 0x8ec400a4  lw          $a0, 0xA4($s6)
    ctx->pc = 0x4b5fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 164)));
label_4b5fb8:
    // 0x4b5fb8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x4b5fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b5fbc:
    // 0x4b5fbc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4b5fbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4b5fc0:
    // 0x4b5fc0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4b5fc0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4b5fc4:
    // 0x4b5fc4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4b5fc4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4b5fc8:
    // 0x4b5fc8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4b5fc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4b5fcc:
    // 0x4b5fcc: 0x0  nop
    ctx->pc = 0x4b5fccu;
    // NOP
label_4b5fd0:
    // 0x4b5fd0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4b5fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_4b5fd4:
    // 0x4b5fd4: 0x8ed70070  lw          $s7, 0x70($s6)
    ctx->pc = 0x4b5fd4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
label_4b5fd8:
    // 0x4b5fd8: 0x12e0002b  beqz        $s7, . + 4 + (0x2B << 2)
label_4b5fdc:
    if (ctx->pc == 0x4B5FDCu) {
        ctx->pc = 0x4B5FE0u;
        goto label_4b5fe0;
    }
    ctx->pc = 0x4B5FD8u;
    {
        const bool branch_taken_0x4b5fd8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b5fd8) {
            ctx->pc = 0x4B6088u;
            goto label_4b6088;
        }
    }
    ctx->pc = 0x4B5FE0u;
label_4b5fe0:
    // 0x4b5fe0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x4b5fe0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b5fe4:
    // 0x4b5fe4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4b5fe4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b5fe8:
    // 0x4b5fe8: 0x8ec40074  lw          $a0, 0x74($s6)
    ctx->pc = 0x4b5fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
label_4b5fec:
    // 0x4b5fec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4b5fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4b5ff0:
    // 0x4b5ff0: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x4b5ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_4b5ff4:
    // 0x4b5ff4: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x4b5ff4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4b5ff8:
    // 0x4b5ff8: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x4b5ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_4b5ffc:
    // 0x4b5ffc: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
label_4b6000:
    if (ctx->pc == 0x4B6000u) {
        ctx->pc = 0x4B6004u;
        goto label_4b6004;
    }
    ctx->pc = 0x4B5FFCu;
    {
        const bool branch_taken_0x4b5ffc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4b5ffc) {
            ctx->pc = 0x4B6028u;
            goto label_4b6028;
        }
    }
    ctx->pc = 0x4B6004u;
label_4b6004:
    // 0x4b6004: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b6004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b6008:
    // 0x4b6008: 0x1083001b  beq         $a0, $v1, . + 4 + (0x1B << 2)
label_4b600c:
    if (ctx->pc == 0x4B600Cu) {
        ctx->pc = 0x4B6010u;
        goto label_4b6010;
    }
    ctx->pc = 0x4B6008u;
    {
        const bool branch_taken_0x4b6008 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4b6008) {
            ctx->pc = 0x4B6078u;
            goto label_4b6078;
        }
    }
    ctx->pc = 0x4B6010u;
label_4b6010:
    // 0x4b6010: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4b6014:
    if (ctx->pc == 0x4B6014u) {
        ctx->pc = 0x4B6018u;
        goto label_4b6018;
    }
    ctx->pc = 0x4B6010u;
    {
        const bool branch_taken_0x4b6010 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b6010) {
            ctx->pc = 0x4B6020u;
            goto label_4b6020;
        }
    }
    ctx->pc = 0x4B6018u;
label_4b6018:
    // 0x4b6018: 0x10000017  b           . + 4 + (0x17 << 2)
label_4b601c:
    if (ctx->pc == 0x4B601Cu) {
        ctx->pc = 0x4B6020u;
        goto label_4b6020;
    }
    ctx->pc = 0x4B6018u;
    {
        const bool branch_taken_0x4b6018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b6018) {
            ctx->pc = 0x4B6078u;
            goto label_4b6078;
        }
    }
    ctx->pc = 0x4B6020u;
label_4b6020:
    // 0x4b6020: 0x10000015  b           . + 4 + (0x15 << 2)
label_4b6024:
    if (ctx->pc == 0x4B6024u) {
        ctx->pc = 0x4B6024u;
            // 0x4b6024: 0xae030060  sw          $v1, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
        ctx->pc = 0x4B6028u;
        goto label_4b6028;
    }
    ctx->pc = 0x4B6020u;
    {
        const bool branch_taken_0x4b6020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B6024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6020u;
            // 0x4b6024: 0xae030060  sw          $v1, 0x60($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6020) {
            ctx->pc = 0x4B6078u;
            goto label_4b6078;
        }
    }
    ctx->pc = 0x4B6028u;
label_4b6028:
    // 0x4b6028: 0x8e14006c  lw          $s4, 0x6C($s0)
    ctx->pc = 0x4b6028u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_4b602c:
    // 0x4b602c: 0x12800012  beqz        $s4, . + 4 + (0x12 << 2)
label_4b6030:
    if (ctx->pc == 0x4B6030u) {
        ctx->pc = 0x4B6034u;
        goto label_4b6034;
    }
    ctx->pc = 0x4B602Cu;
    {
        const bool branch_taken_0x4b602c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b602c) {
            ctx->pc = 0x4B6078u;
            goto label_4b6078;
        }
    }
    ctx->pc = 0x4B6034u;
label_4b6034:
    // 0x4b6034: 0x8e130064  lw          $s3, 0x64($s0)
    ctx->pc = 0x4b6034u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_4b6038:
    // 0x4b6038: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4b6038u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b603c:
    // 0x4b603c: 0x0  nop
    ctx->pc = 0x4b603cu;
    // NOP
label_4b6040:
    // 0x4b6040: 0xc0e3658  jal         func_38D960
label_4b6044:
    if (ctx->pc == 0x4B6044u) {
        ctx->pc = 0x4B6044u;
            // 0x4b6044: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B6048u;
        goto label_4b6048;
    }
    ctx->pc = 0x4B6040u;
    SET_GPR_U32(ctx, 31, 0x4B6048u);
    ctx->pc = 0x4B6044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6040u;
            // 0x4b6044: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6048u; }
        if (ctx->pc != 0x4B6048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B6048u; }
        if (ctx->pc != 0x4B6048u) { return; }
    }
    ctx->pc = 0x4B6048u;
label_4b6048:
    // 0x4b6048: 0x8e6300d0  lw          $v1, 0xD0($s3)
    ctx->pc = 0x4b6048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 208)));
label_4b604c:
    // 0x4b604c: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x4b604cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_4b6050:
    // 0x4b6050: 0x38630003  xori        $v1, $v1, 0x3
    ctx->pc = 0x4b6050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
label_4b6054:
    // 0x4b6054: 0x26730190  addiu       $s3, $s3, 0x190
    ctx->pc = 0x4b6054u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 400));
label_4b6058:
    // 0x4b6058: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x4b6058u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4b605c:
    // 0x4b605c: 0x1680fff8  bnez        $s4, . + 4 + (-0x8 << 2)
label_4b6060:
    if (ctx->pc == 0x4B6060u) {
        ctx->pc = 0x4B6060u;
            // 0x4b6060: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->pc = 0x4B6064u;
        goto label_4b6064;
    }
    ctx->pc = 0x4B605Cu;
    {
        const bool branch_taken_0x4b605c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B6060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B605Cu;
            // 0x4b6060: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b605c) {
            ctx->pc = 0x4B6040u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4b6040;
        }
    }
    ctx->pc = 0x4B6064u;
label_4b6064:
    // 0x4b6064: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x4b6064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_4b6068:
    // 0x4b6068: 0x16430003  bne         $s2, $v1, . + 4 + (0x3 << 2)
label_4b606c:
    if (ctx->pc == 0x4B606Cu) {
        ctx->pc = 0x4B6070u;
        goto label_4b6070;
    }
    ctx->pc = 0x4B6068u;
    {
        const bool branch_taken_0x4b6068 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x4b6068) {
            ctx->pc = 0x4B6078u;
            goto label_4b6078;
        }
    }
    ctx->pc = 0x4B6070u;
label_4b6070:
    // 0x4b6070: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b6070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b6074:
    // 0x4b6074: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x4b6074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
label_4b6078:
    // 0x4b6078: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x4b6078u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_4b607c:
    // 0x4b607c: 0x2b7182b  sltu        $v1, $s5, $s7
    ctx->pc = 0x4b607cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
label_4b6080:
    // 0x4b6080: 0x1460ffd9  bnez        $v1, . + 4 + (-0x27 << 2)
label_4b6084:
    if (ctx->pc == 0x4B6084u) {
        ctx->pc = 0x4B6084u;
            // 0x4b6084: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4B6088u;
        goto label_4b6088;
    }
    ctx->pc = 0x4B6080u;
    {
        const bool branch_taken_0x4b6080 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B6084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6080u;
            // 0x4b6084: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6080) {
            ctx->pc = 0x4B5FE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4b5fe8;
        }
    }
    ctx->pc = 0x4B6088u;
label_4b6088:
    // 0x4b6088: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x4b6088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_4b608c:
    // 0x4b608c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x4b608cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4b6090:
    // 0x4b6090: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4b6090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4b6094:
    // 0x4b6094: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x4b6094u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4b6098:
    // 0x4b6098: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4b6098u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4b609c:
    // 0x4b609c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4b609cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4b60a0:
    // 0x4b60a0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4b60a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4b60a4:
    // 0x4b60a4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4b60a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4b60a8:
    // 0x4b60a8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4b60a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4b60ac:
    // 0x4b60ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4b60acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4b60b0:
    // 0x4b60b0: 0x3e00008  jr          $ra
label_4b60b4:
    if (ctx->pc == 0x4B60B4u) {
        ctx->pc = 0x4B60B4u;
            // 0x4b60b4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x4B60B8u;
        goto label_4b60b8;
    }
    ctx->pc = 0x4B60B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B60B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B60B0u;
            // 0x4b60b4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B60B8u;
label_4b60b8:
    // 0x4b60b8: 0x0  nop
    ctx->pc = 0x4b60b8u;
    // NOP
label_4b60bc:
    // 0x4b60bc: 0x0  nop
    ctx->pc = 0x4b60bcu;
    // NOP
label_4b60c0:
    // 0x4b60c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4b60c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_4b60c4:
    // 0x4b60c4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x4b60c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_4b60c8:
    // 0x4b60c8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4b60c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4b60cc:
    // 0x4b60cc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4b60ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4b60d0:
    // 0x4b60d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4b60d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4b60d4:
    // 0x4b60d4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4b60d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4b60d8:
    // 0x4b60d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b60d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4b60dc:
    // 0x4b60dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b60dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4b60e0:
    // 0x4b60e0: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x4b60e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4b60e4:
    // 0x4b60e4: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
label_4b60e8:
    if (ctx->pc == 0x4B60E8u) {
        ctx->pc = 0x4B60E8u;
            // 0x4b60e8: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B60ECu;
        goto label_4b60ec;
    }
    ctx->pc = 0x4B60E4u;
    {
        const bool branch_taken_0x4b60e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B60E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B60E4u;
            // 0x4b60e8: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b60e4) {
            ctx->pc = 0x4B6148u;
            goto label_4b6148;
        }
    }
    ctx->pc = 0x4B60ECu;
label_4b60ec:
    // 0x4b60ec: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4b60ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b60f0:
    // 0x4b60f0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4b60f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b60f4:
    // 0x4b60f4: 0x8e840074  lw          $a0, 0x74($s4)
    ctx->pc = 0x4b60f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_4b60f8:
    // 0x4b60f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b60f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b60fc:
    // 0x4b60fc: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x4b60fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_4b6100:
    // 0x4b6100: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4b6100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4b6104:
    // 0x4b6104: 0xac830060  sw          $v1, 0x60($a0)
    ctx->pc = 0x4b6104u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 3));
label_4b6108:
    // 0x4b6108: 0x8c92006c  lw          $s2, 0x6C($a0)
    ctx->pc = 0x4b6108u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
label_4b610c:
    // 0x4b610c: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
label_4b6110:
    if (ctx->pc == 0x4B6110u) {
        ctx->pc = 0x4B6114u;
        goto label_4b6114;
    }
    ctx->pc = 0x4B610Cu;
    {
        const bool branch_taken_0x4b610c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b610c) {
            ctx->pc = 0x4B6138u;
            goto label_4b6138;
        }
    }
    ctx->pc = 0x4B6114u;
label_4b6114:
    // 0x4b6114: 0x8c950064  lw          $s5, 0x64($a0)
    ctx->pc = 0x4b6114u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
label_4b6118:
    // 0x4b6118: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x4b6118u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4b611c:
    // 0x4b611c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x4b611cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_4b6120:
    // 0x4b6120: 0x320f809  jalr        $t9
label_4b6124:
    if (ctx->pc == 0x4B6124u) {
        ctx->pc = 0x4B6124u;
            // 0x4b6124: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B6128u;
        goto label_4b6128;
    }
    ctx->pc = 0x4B6120u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B6128u);
        ctx->pc = 0x4B6124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6120u;
            // 0x4b6124: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B6128u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B6128u; }
            if (ctx->pc != 0x4B6128u) { return; }
        }
        }
    }
    ctx->pc = 0x4B6128u;
label_4b6128:
    // 0x4b6128: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x4b6128u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_4b612c:
    // 0x4b612c: 0x1640fffa  bnez        $s2, . + 4 + (-0x6 << 2)
label_4b6130:
    if (ctx->pc == 0x4B6130u) {
        ctx->pc = 0x4B6130u;
            // 0x4b6130: 0x26b50190  addiu       $s5, $s5, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 400));
        ctx->pc = 0x4B6134u;
        goto label_4b6134;
    }
    ctx->pc = 0x4B612Cu;
    {
        const bool branch_taken_0x4b612c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B6130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B612Cu;
            // 0x4b6130: 0x26b50190  addiu       $s5, $s5, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b612c) {
            ctx->pc = 0x4B6118u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4b6118;
        }
    }
    ctx->pc = 0x4B6134u;
label_4b6134:
    // 0x4b6134: 0x0  nop
    ctx->pc = 0x4b6134u;
    // NOP
label_4b6138:
    // 0x4b6138: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4b6138u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4b613c:
    // 0x4b613c: 0x270182b  sltu        $v1, $s3, $s0
    ctx->pc = 0x4b613cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4b6140:
    // 0x4b6140: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
label_4b6144:
    if (ctx->pc == 0x4B6144u) {
        ctx->pc = 0x4B6144u;
            // 0x4b6144: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4B6148u;
        goto label_4b6148;
    }
    ctx->pc = 0x4B6140u;
    {
        const bool branch_taken_0x4b6140 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B6144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6140u;
            // 0x4b6144: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b6140) {
            ctx->pc = 0x4B60F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4b60f4;
        }
    }
    ctx->pc = 0x4B6148u;
label_4b6148:
    // 0x4b6148: 0xae800090  sw          $zero, 0x90($s4)
    ctx->pc = 0x4b6148u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 144), GPR_U32(ctx, 0));
label_4b614c:
    // 0x4b614c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4b614cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_4b6150:
    // 0x4b6150: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4b6150u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4b6154:
    // 0x4b6154: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4b6154u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4b6158:
    // 0x4b6158: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4b6158u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4b615c:
    // 0x4b615c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4b615cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4b6160:
    // 0x4b6160: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b6160u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4b6164:
    // 0x4b6164: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b6164u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4b6168:
    // 0x4b6168: 0x3e00008  jr          $ra
label_4b616c:
    if (ctx->pc == 0x4B616Cu) {
        ctx->pc = 0x4B616Cu;
            // 0x4b616c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4B6170u;
        goto label_fallthrough_0x4b6168;
    }
    ctx->pc = 0x4B6168u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B616Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B6168u;
            // 0x4b616c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x4b6168:
    ctx->pc = 0x4B6170u;
}
