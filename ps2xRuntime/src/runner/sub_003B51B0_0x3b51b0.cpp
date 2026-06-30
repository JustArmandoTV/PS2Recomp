#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B51B0
// Address: 0x3b51b0 - 0x3b5f60
void sub_003B51B0_0x3b51b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B51B0_0x3b51b0");
#endif

    switch (ctx->pc) {
        case 0x3b51b0u: goto label_3b51b0;
        case 0x3b51b4u: goto label_3b51b4;
        case 0x3b51b8u: goto label_3b51b8;
        case 0x3b51bcu: goto label_3b51bc;
        case 0x3b51c0u: goto label_3b51c0;
        case 0x3b51c4u: goto label_3b51c4;
        case 0x3b51c8u: goto label_3b51c8;
        case 0x3b51ccu: goto label_3b51cc;
        case 0x3b51d0u: goto label_3b51d0;
        case 0x3b51d4u: goto label_3b51d4;
        case 0x3b51d8u: goto label_3b51d8;
        case 0x3b51dcu: goto label_3b51dc;
        case 0x3b51e0u: goto label_3b51e0;
        case 0x3b51e4u: goto label_3b51e4;
        case 0x3b51e8u: goto label_3b51e8;
        case 0x3b51ecu: goto label_3b51ec;
        case 0x3b51f0u: goto label_3b51f0;
        case 0x3b51f4u: goto label_3b51f4;
        case 0x3b51f8u: goto label_3b51f8;
        case 0x3b51fcu: goto label_3b51fc;
        case 0x3b5200u: goto label_3b5200;
        case 0x3b5204u: goto label_3b5204;
        case 0x3b5208u: goto label_3b5208;
        case 0x3b520cu: goto label_3b520c;
        case 0x3b5210u: goto label_3b5210;
        case 0x3b5214u: goto label_3b5214;
        case 0x3b5218u: goto label_3b5218;
        case 0x3b521cu: goto label_3b521c;
        case 0x3b5220u: goto label_3b5220;
        case 0x3b5224u: goto label_3b5224;
        case 0x3b5228u: goto label_3b5228;
        case 0x3b522cu: goto label_3b522c;
        case 0x3b5230u: goto label_3b5230;
        case 0x3b5234u: goto label_3b5234;
        case 0x3b5238u: goto label_3b5238;
        case 0x3b523cu: goto label_3b523c;
        case 0x3b5240u: goto label_3b5240;
        case 0x3b5244u: goto label_3b5244;
        case 0x3b5248u: goto label_3b5248;
        case 0x3b524cu: goto label_3b524c;
        case 0x3b5250u: goto label_3b5250;
        case 0x3b5254u: goto label_3b5254;
        case 0x3b5258u: goto label_3b5258;
        case 0x3b525cu: goto label_3b525c;
        case 0x3b5260u: goto label_3b5260;
        case 0x3b5264u: goto label_3b5264;
        case 0x3b5268u: goto label_3b5268;
        case 0x3b526cu: goto label_3b526c;
        case 0x3b5270u: goto label_3b5270;
        case 0x3b5274u: goto label_3b5274;
        case 0x3b5278u: goto label_3b5278;
        case 0x3b527cu: goto label_3b527c;
        case 0x3b5280u: goto label_3b5280;
        case 0x3b5284u: goto label_3b5284;
        case 0x3b5288u: goto label_3b5288;
        case 0x3b528cu: goto label_3b528c;
        case 0x3b5290u: goto label_3b5290;
        case 0x3b5294u: goto label_3b5294;
        case 0x3b5298u: goto label_3b5298;
        case 0x3b529cu: goto label_3b529c;
        case 0x3b52a0u: goto label_3b52a0;
        case 0x3b52a4u: goto label_3b52a4;
        case 0x3b52a8u: goto label_3b52a8;
        case 0x3b52acu: goto label_3b52ac;
        case 0x3b52b0u: goto label_3b52b0;
        case 0x3b52b4u: goto label_3b52b4;
        case 0x3b52b8u: goto label_3b52b8;
        case 0x3b52bcu: goto label_3b52bc;
        case 0x3b52c0u: goto label_3b52c0;
        case 0x3b52c4u: goto label_3b52c4;
        case 0x3b52c8u: goto label_3b52c8;
        case 0x3b52ccu: goto label_3b52cc;
        case 0x3b52d0u: goto label_3b52d0;
        case 0x3b52d4u: goto label_3b52d4;
        case 0x3b52d8u: goto label_3b52d8;
        case 0x3b52dcu: goto label_3b52dc;
        case 0x3b52e0u: goto label_3b52e0;
        case 0x3b52e4u: goto label_3b52e4;
        case 0x3b52e8u: goto label_3b52e8;
        case 0x3b52ecu: goto label_3b52ec;
        case 0x3b52f0u: goto label_3b52f0;
        case 0x3b52f4u: goto label_3b52f4;
        case 0x3b52f8u: goto label_3b52f8;
        case 0x3b52fcu: goto label_3b52fc;
        case 0x3b5300u: goto label_3b5300;
        case 0x3b5304u: goto label_3b5304;
        case 0x3b5308u: goto label_3b5308;
        case 0x3b530cu: goto label_3b530c;
        case 0x3b5310u: goto label_3b5310;
        case 0x3b5314u: goto label_3b5314;
        case 0x3b5318u: goto label_3b5318;
        case 0x3b531cu: goto label_3b531c;
        case 0x3b5320u: goto label_3b5320;
        case 0x3b5324u: goto label_3b5324;
        case 0x3b5328u: goto label_3b5328;
        case 0x3b532cu: goto label_3b532c;
        case 0x3b5330u: goto label_3b5330;
        case 0x3b5334u: goto label_3b5334;
        case 0x3b5338u: goto label_3b5338;
        case 0x3b533cu: goto label_3b533c;
        case 0x3b5340u: goto label_3b5340;
        case 0x3b5344u: goto label_3b5344;
        case 0x3b5348u: goto label_3b5348;
        case 0x3b534cu: goto label_3b534c;
        case 0x3b5350u: goto label_3b5350;
        case 0x3b5354u: goto label_3b5354;
        case 0x3b5358u: goto label_3b5358;
        case 0x3b535cu: goto label_3b535c;
        case 0x3b5360u: goto label_3b5360;
        case 0x3b5364u: goto label_3b5364;
        case 0x3b5368u: goto label_3b5368;
        case 0x3b536cu: goto label_3b536c;
        case 0x3b5370u: goto label_3b5370;
        case 0x3b5374u: goto label_3b5374;
        case 0x3b5378u: goto label_3b5378;
        case 0x3b537cu: goto label_3b537c;
        case 0x3b5380u: goto label_3b5380;
        case 0x3b5384u: goto label_3b5384;
        case 0x3b5388u: goto label_3b5388;
        case 0x3b538cu: goto label_3b538c;
        case 0x3b5390u: goto label_3b5390;
        case 0x3b5394u: goto label_3b5394;
        case 0x3b5398u: goto label_3b5398;
        case 0x3b539cu: goto label_3b539c;
        case 0x3b53a0u: goto label_3b53a0;
        case 0x3b53a4u: goto label_3b53a4;
        case 0x3b53a8u: goto label_3b53a8;
        case 0x3b53acu: goto label_3b53ac;
        case 0x3b53b0u: goto label_3b53b0;
        case 0x3b53b4u: goto label_3b53b4;
        case 0x3b53b8u: goto label_3b53b8;
        case 0x3b53bcu: goto label_3b53bc;
        case 0x3b53c0u: goto label_3b53c0;
        case 0x3b53c4u: goto label_3b53c4;
        case 0x3b53c8u: goto label_3b53c8;
        case 0x3b53ccu: goto label_3b53cc;
        case 0x3b53d0u: goto label_3b53d0;
        case 0x3b53d4u: goto label_3b53d4;
        case 0x3b53d8u: goto label_3b53d8;
        case 0x3b53dcu: goto label_3b53dc;
        case 0x3b53e0u: goto label_3b53e0;
        case 0x3b53e4u: goto label_3b53e4;
        case 0x3b53e8u: goto label_3b53e8;
        case 0x3b53ecu: goto label_3b53ec;
        case 0x3b53f0u: goto label_3b53f0;
        case 0x3b53f4u: goto label_3b53f4;
        case 0x3b53f8u: goto label_3b53f8;
        case 0x3b53fcu: goto label_3b53fc;
        case 0x3b5400u: goto label_3b5400;
        case 0x3b5404u: goto label_3b5404;
        case 0x3b5408u: goto label_3b5408;
        case 0x3b540cu: goto label_3b540c;
        case 0x3b5410u: goto label_3b5410;
        case 0x3b5414u: goto label_3b5414;
        case 0x3b5418u: goto label_3b5418;
        case 0x3b541cu: goto label_3b541c;
        case 0x3b5420u: goto label_3b5420;
        case 0x3b5424u: goto label_3b5424;
        case 0x3b5428u: goto label_3b5428;
        case 0x3b542cu: goto label_3b542c;
        case 0x3b5430u: goto label_3b5430;
        case 0x3b5434u: goto label_3b5434;
        case 0x3b5438u: goto label_3b5438;
        case 0x3b543cu: goto label_3b543c;
        case 0x3b5440u: goto label_3b5440;
        case 0x3b5444u: goto label_3b5444;
        case 0x3b5448u: goto label_3b5448;
        case 0x3b544cu: goto label_3b544c;
        case 0x3b5450u: goto label_3b5450;
        case 0x3b5454u: goto label_3b5454;
        case 0x3b5458u: goto label_3b5458;
        case 0x3b545cu: goto label_3b545c;
        case 0x3b5460u: goto label_3b5460;
        case 0x3b5464u: goto label_3b5464;
        case 0x3b5468u: goto label_3b5468;
        case 0x3b546cu: goto label_3b546c;
        case 0x3b5470u: goto label_3b5470;
        case 0x3b5474u: goto label_3b5474;
        case 0x3b5478u: goto label_3b5478;
        case 0x3b547cu: goto label_3b547c;
        case 0x3b5480u: goto label_3b5480;
        case 0x3b5484u: goto label_3b5484;
        case 0x3b5488u: goto label_3b5488;
        case 0x3b548cu: goto label_3b548c;
        case 0x3b5490u: goto label_3b5490;
        case 0x3b5494u: goto label_3b5494;
        case 0x3b5498u: goto label_3b5498;
        case 0x3b549cu: goto label_3b549c;
        case 0x3b54a0u: goto label_3b54a0;
        case 0x3b54a4u: goto label_3b54a4;
        case 0x3b54a8u: goto label_3b54a8;
        case 0x3b54acu: goto label_3b54ac;
        case 0x3b54b0u: goto label_3b54b0;
        case 0x3b54b4u: goto label_3b54b4;
        case 0x3b54b8u: goto label_3b54b8;
        case 0x3b54bcu: goto label_3b54bc;
        case 0x3b54c0u: goto label_3b54c0;
        case 0x3b54c4u: goto label_3b54c4;
        case 0x3b54c8u: goto label_3b54c8;
        case 0x3b54ccu: goto label_3b54cc;
        case 0x3b54d0u: goto label_3b54d0;
        case 0x3b54d4u: goto label_3b54d4;
        case 0x3b54d8u: goto label_3b54d8;
        case 0x3b54dcu: goto label_3b54dc;
        case 0x3b54e0u: goto label_3b54e0;
        case 0x3b54e4u: goto label_3b54e4;
        case 0x3b54e8u: goto label_3b54e8;
        case 0x3b54ecu: goto label_3b54ec;
        case 0x3b54f0u: goto label_3b54f0;
        case 0x3b54f4u: goto label_3b54f4;
        case 0x3b54f8u: goto label_3b54f8;
        case 0x3b54fcu: goto label_3b54fc;
        case 0x3b5500u: goto label_3b5500;
        case 0x3b5504u: goto label_3b5504;
        case 0x3b5508u: goto label_3b5508;
        case 0x3b550cu: goto label_3b550c;
        case 0x3b5510u: goto label_3b5510;
        case 0x3b5514u: goto label_3b5514;
        case 0x3b5518u: goto label_3b5518;
        case 0x3b551cu: goto label_3b551c;
        case 0x3b5520u: goto label_3b5520;
        case 0x3b5524u: goto label_3b5524;
        case 0x3b5528u: goto label_3b5528;
        case 0x3b552cu: goto label_3b552c;
        case 0x3b5530u: goto label_3b5530;
        case 0x3b5534u: goto label_3b5534;
        case 0x3b5538u: goto label_3b5538;
        case 0x3b553cu: goto label_3b553c;
        case 0x3b5540u: goto label_3b5540;
        case 0x3b5544u: goto label_3b5544;
        case 0x3b5548u: goto label_3b5548;
        case 0x3b554cu: goto label_3b554c;
        case 0x3b5550u: goto label_3b5550;
        case 0x3b5554u: goto label_3b5554;
        case 0x3b5558u: goto label_3b5558;
        case 0x3b555cu: goto label_3b555c;
        case 0x3b5560u: goto label_3b5560;
        case 0x3b5564u: goto label_3b5564;
        case 0x3b5568u: goto label_3b5568;
        case 0x3b556cu: goto label_3b556c;
        case 0x3b5570u: goto label_3b5570;
        case 0x3b5574u: goto label_3b5574;
        case 0x3b5578u: goto label_3b5578;
        case 0x3b557cu: goto label_3b557c;
        case 0x3b5580u: goto label_3b5580;
        case 0x3b5584u: goto label_3b5584;
        case 0x3b5588u: goto label_3b5588;
        case 0x3b558cu: goto label_3b558c;
        case 0x3b5590u: goto label_3b5590;
        case 0x3b5594u: goto label_3b5594;
        case 0x3b5598u: goto label_3b5598;
        case 0x3b559cu: goto label_3b559c;
        case 0x3b55a0u: goto label_3b55a0;
        case 0x3b55a4u: goto label_3b55a4;
        case 0x3b55a8u: goto label_3b55a8;
        case 0x3b55acu: goto label_3b55ac;
        case 0x3b55b0u: goto label_3b55b0;
        case 0x3b55b4u: goto label_3b55b4;
        case 0x3b55b8u: goto label_3b55b8;
        case 0x3b55bcu: goto label_3b55bc;
        case 0x3b55c0u: goto label_3b55c0;
        case 0x3b55c4u: goto label_3b55c4;
        case 0x3b55c8u: goto label_3b55c8;
        case 0x3b55ccu: goto label_3b55cc;
        case 0x3b55d0u: goto label_3b55d0;
        case 0x3b55d4u: goto label_3b55d4;
        case 0x3b55d8u: goto label_3b55d8;
        case 0x3b55dcu: goto label_3b55dc;
        case 0x3b55e0u: goto label_3b55e0;
        case 0x3b55e4u: goto label_3b55e4;
        case 0x3b55e8u: goto label_3b55e8;
        case 0x3b55ecu: goto label_3b55ec;
        case 0x3b55f0u: goto label_3b55f0;
        case 0x3b55f4u: goto label_3b55f4;
        case 0x3b55f8u: goto label_3b55f8;
        case 0x3b55fcu: goto label_3b55fc;
        case 0x3b5600u: goto label_3b5600;
        case 0x3b5604u: goto label_3b5604;
        case 0x3b5608u: goto label_3b5608;
        case 0x3b560cu: goto label_3b560c;
        case 0x3b5610u: goto label_3b5610;
        case 0x3b5614u: goto label_3b5614;
        case 0x3b5618u: goto label_3b5618;
        case 0x3b561cu: goto label_3b561c;
        case 0x3b5620u: goto label_3b5620;
        case 0x3b5624u: goto label_3b5624;
        case 0x3b5628u: goto label_3b5628;
        case 0x3b562cu: goto label_3b562c;
        case 0x3b5630u: goto label_3b5630;
        case 0x3b5634u: goto label_3b5634;
        case 0x3b5638u: goto label_3b5638;
        case 0x3b563cu: goto label_3b563c;
        case 0x3b5640u: goto label_3b5640;
        case 0x3b5644u: goto label_3b5644;
        case 0x3b5648u: goto label_3b5648;
        case 0x3b564cu: goto label_3b564c;
        case 0x3b5650u: goto label_3b5650;
        case 0x3b5654u: goto label_3b5654;
        case 0x3b5658u: goto label_3b5658;
        case 0x3b565cu: goto label_3b565c;
        case 0x3b5660u: goto label_3b5660;
        case 0x3b5664u: goto label_3b5664;
        case 0x3b5668u: goto label_3b5668;
        case 0x3b566cu: goto label_3b566c;
        case 0x3b5670u: goto label_3b5670;
        case 0x3b5674u: goto label_3b5674;
        case 0x3b5678u: goto label_3b5678;
        case 0x3b567cu: goto label_3b567c;
        case 0x3b5680u: goto label_3b5680;
        case 0x3b5684u: goto label_3b5684;
        case 0x3b5688u: goto label_3b5688;
        case 0x3b568cu: goto label_3b568c;
        case 0x3b5690u: goto label_3b5690;
        case 0x3b5694u: goto label_3b5694;
        case 0x3b5698u: goto label_3b5698;
        case 0x3b569cu: goto label_3b569c;
        case 0x3b56a0u: goto label_3b56a0;
        case 0x3b56a4u: goto label_3b56a4;
        case 0x3b56a8u: goto label_3b56a8;
        case 0x3b56acu: goto label_3b56ac;
        case 0x3b56b0u: goto label_3b56b0;
        case 0x3b56b4u: goto label_3b56b4;
        case 0x3b56b8u: goto label_3b56b8;
        case 0x3b56bcu: goto label_3b56bc;
        case 0x3b56c0u: goto label_3b56c0;
        case 0x3b56c4u: goto label_3b56c4;
        case 0x3b56c8u: goto label_3b56c8;
        case 0x3b56ccu: goto label_3b56cc;
        case 0x3b56d0u: goto label_3b56d0;
        case 0x3b56d4u: goto label_3b56d4;
        case 0x3b56d8u: goto label_3b56d8;
        case 0x3b56dcu: goto label_3b56dc;
        case 0x3b56e0u: goto label_3b56e0;
        case 0x3b56e4u: goto label_3b56e4;
        case 0x3b56e8u: goto label_3b56e8;
        case 0x3b56ecu: goto label_3b56ec;
        case 0x3b56f0u: goto label_3b56f0;
        case 0x3b56f4u: goto label_3b56f4;
        case 0x3b56f8u: goto label_3b56f8;
        case 0x3b56fcu: goto label_3b56fc;
        case 0x3b5700u: goto label_3b5700;
        case 0x3b5704u: goto label_3b5704;
        case 0x3b5708u: goto label_3b5708;
        case 0x3b570cu: goto label_3b570c;
        case 0x3b5710u: goto label_3b5710;
        case 0x3b5714u: goto label_3b5714;
        case 0x3b5718u: goto label_3b5718;
        case 0x3b571cu: goto label_3b571c;
        case 0x3b5720u: goto label_3b5720;
        case 0x3b5724u: goto label_3b5724;
        case 0x3b5728u: goto label_3b5728;
        case 0x3b572cu: goto label_3b572c;
        case 0x3b5730u: goto label_3b5730;
        case 0x3b5734u: goto label_3b5734;
        case 0x3b5738u: goto label_3b5738;
        case 0x3b573cu: goto label_3b573c;
        case 0x3b5740u: goto label_3b5740;
        case 0x3b5744u: goto label_3b5744;
        case 0x3b5748u: goto label_3b5748;
        case 0x3b574cu: goto label_3b574c;
        case 0x3b5750u: goto label_3b5750;
        case 0x3b5754u: goto label_3b5754;
        case 0x3b5758u: goto label_3b5758;
        case 0x3b575cu: goto label_3b575c;
        case 0x3b5760u: goto label_3b5760;
        case 0x3b5764u: goto label_3b5764;
        case 0x3b5768u: goto label_3b5768;
        case 0x3b576cu: goto label_3b576c;
        case 0x3b5770u: goto label_3b5770;
        case 0x3b5774u: goto label_3b5774;
        case 0x3b5778u: goto label_3b5778;
        case 0x3b577cu: goto label_3b577c;
        case 0x3b5780u: goto label_3b5780;
        case 0x3b5784u: goto label_3b5784;
        case 0x3b5788u: goto label_3b5788;
        case 0x3b578cu: goto label_3b578c;
        case 0x3b5790u: goto label_3b5790;
        case 0x3b5794u: goto label_3b5794;
        case 0x3b5798u: goto label_3b5798;
        case 0x3b579cu: goto label_3b579c;
        case 0x3b57a0u: goto label_3b57a0;
        case 0x3b57a4u: goto label_3b57a4;
        case 0x3b57a8u: goto label_3b57a8;
        case 0x3b57acu: goto label_3b57ac;
        case 0x3b57b0u: goto label_3b57b0;
        case 0x3b57b4u: goto label_3b57b4;
        case 0x3b57b8u: goto label_3b57b8;
        case 0x3b57bcu: goto label_3b57bc;
        case 0x3b57c0u: goto label_3b57c0;
        case 0x3b57c4u: goto label_3b57c4;
        case 0x3b57c8u: goto label_3b57c8;
        case 0x3b57ccu: goto label_3b57cc;
        case 0x3b57d0u: goto label_3b57d0;
        case 0x3b57d4u: goto label_3b57d4;
        case 0x3b57d8u: goto label_3b57d8;
        case 0x3b57dcu: goto label_3b57dc;
        case 0x3b57e0u: goto label_3b57e0;
        case 0x3b57e4u: goto label_3b57e4;
        case 0x3b57e8u: goto label_3b57e8;
        case 0x3b57ecu: goto label_3b57ec;
        case 0x3b57f0u: goto label_3b57f0;
        case 0x3b57f4u: goto label_3b57f4;
        case 0x3b57f8u: goto label_3b57f8;
        case 0x3b57fcu: goto label_3b57fc;
        case 0x3b5800u: goto label_3b5800;
        case 0x3b5804u: goto label_3b5804;
        case 0x3b5808u: goto label_3b5808;
        case 0x3b580cu: goto label_3b580c;
        case 0x3b5810u: goto label_3b5810;
        case 0x3b5814u: goto label_3b5814;
        case 0x3b5818u: goto label_3b5818;
        case 0x3b581cu: goto label_3b581c;
        case 0x3b5820u: goto label_3b5820;
        case 0x3b5824u: goto label_3b5824;
        case 0x3b5828u: goto label_3b5828;
        case 0x3b582cu: goto label_3b582c;
        case 0x3b5830u: goto label_3b5830;
        case 0x3b5834u: goto label_3b5834;
        case 0x3b5838u: goto label_3b5838;
        case 0x3b583cu: goto label_3b583c;
        case 0x3b5840u: goto label_3b5840;
        case 0x3b5844u: goto label_3b5844;
        case 0x3b5848u: goto label_3b5848;
        case 0x3b584cu: goto label_3b584c;
        case 0x3b5850u: goto label_3b5850;
        case 0x3b5854u: goto label_3b5854;
        case 0x3b5858u: goto label_3b5858;
        case 0x3b585cu: goto label_3b585c;
        case 0x3b5860u: goto label_3b5860;
        case 0x3b5864u: goto label_3b5864;
        case 0x3b5868u: goto label_3b5868;
        case 0x3b586cu: goto label_3b586c;
        case 0x3b5870u: goto label_3b5870;
        case 0x3b5874u: goto label_3b5874;
        case 0x3b5878u: goto label_3b5878;
        case 0x3b587cu: goto label_3b587c;
        case 0x3b5880u: goto label_3b5880;
        case 0x3b5884u: goto label_3b5884;
        case 0x3b5888u: goto label_3b5888;
        case 0x3b588cu: goto label_3b588c;
        case 0x3b5890u: goto label_3b5890;
        case 0x3b5894u: goto label_3b5894;
        case 0x3b5898u: goto label_3b5898;
        case 0x3b589cu: goto label_3b589c;
        case 0x3b58a0u: goto label_3b58a0;
        case 0x3b58a4u: goto label_3b58a4;
        case 0x3b58a8u: goto label_3b58a8;
        case 0x3b58acu: goto label_3b58ac;
        case 0x3b58b0u: goto label_3b58b0;
        case 0x3b58b4u: goto label_3b58b4;
        case 0x3b58b8u: goto label_3b58b8;
        case 0x3b58bcu: goto label_3b58bc;
        case 0x3b58c0u: goto label_3b58c0;
        case 0x3b58c4u: goto label_3b58c4;
        case 0x3b58c8u: goto label_3b58c8;
        case 0x3b58ccu: goto label_3b58cc;
        case 0x3b58d0u: goto label_3b58d0;
        case 0x3b58d4u: goto label_3b58d4;
        case 0x3b58d8u: goto label_3b58d8;
        case 0x3b58dcu: goto label_3b58dc;
        case 0x3b58e0u: goto label_3b58e0;
        case 0x3b58e4u: goto label_3b58e4;
        case 0x3b58e8u: goto label_3b58e8;
        case 0x3b58ecu: goto label_3b58ec;
        case 0x3b58f0u: goto label_3b58f0;
        case 0x3b58f4u: goto label_3b58f4;
        case 0x3b58f8u: goto label_3b58f8;
        case 0x3b58fcu: goto label_3b58fc;
        case 0x3b5900u: goto label_3b5900;
        case 0x3b5904u: goto label_3b5904;
        case 0x3b5908u: goto label_3b5908;
        case 0x3b590cu: goto label_3b590c;
        case 0x3b5910u: goto label_3b5910;
        case 0x3b5914u: goto label_3b5914;
        case 0x3b5918u: goto label_3b5918;
        case 0x3b591cu: goto label_3b591c;
        case 0x3b5920u: goto label_3b5920;
        case 0x3b5924u: goto label_3b5924;
        case 0x3b5928u: goto label_3b5928;
        case 0x3b592cu: goto label_3b592c;
        case 0x3b5930u: goto label_3b5930;
        case 0x3b5934u: goto label_3b5934;
        case 0x3b5938u: goto label_3b5938;
        case 0x3b593cu: goto label_3b593c;
        case 0x3b5940u: goto label_3b5940;
        case 0x3b5944u: goto label_3b5944;
        case 0x3b5948u: goto label_3b5948;
        case 0x3b594cu: goto label_3b594c;
        case 0x3b5950u: goto label_3b5950;
        case 0x3b5954u: goto label_3b5954;
        case 0x3b5958u: goto label_3b5958;
        case 0x3b595cu: goto label_3b595c;
        case 0x3b5960u: goto label_3b5960;
        case 0x3b5964u: goto label_3b5964;
        case 0x3b5968u: goto label_3b5968;
        case 0x3b596cu: goto label_3b596c;
        case 0x3b5970u: goto label_3b5970;
        case 0x3b5974u: goto label_3b5974;
        case 0x3b5978u: goto label_3b5978;
        case 0x3b597cu: goto label_3b597c;
        case 0x3b5980u: goto label_3b5980;
        case 0x3b5984u: goto label_3b5984;
        case 0x3b5988u: goto label_3b5988;
        case 0x3b598cu: goto label_3b598c;
        case 0x3b5990u: goto label_3b5990;
        case 0x3b5994u: goto label_3b5994;
        case 0x3b5998u: goto label_3b5998;
        case 0x3b599cu: goto label_3b599c;
        case 0x3b59a0u: goto label_3b59a0;
        case 0x3b59a4u: goto label_3b59a4;
        case 0x3b59a8u: goto label_3b59a8;
        case 0x3b59acu: goto label_3b59ac;
        case 0x3b59b0u: goto label_3b59b0;
        case 0x3b59b4u: goto label_3b59b4;
        case 0x3b59b8u: goto label_3b59b8;
        case 0x3b59bcu: goto label_3b59bc;
        case 0x3b59c0u: goto label_3b59c0;
        case 0x3b59c4u: goto label_3b59c4;
        case 0x3b59c8u: goto label_3b59c8;
        case 0x3b59ccu: goto label_3b59cc;
        case 0x3b59d0u: goto label_3b59d0;
        case 0x3b59d4u: goto label_3b59d4;
        case 0x3b59d8u: goto label_3b59d8;
        case 0x3b59dcu: goto label_3b59dc;
        case 0x3b59e0u: goto label_3b59e0;
        case 0x3b59e4u: goto label_3b59e4;
        case 0x3b59e8u: goto label_3b59e8;
        case 0x3b59ecu: goto label_3b59ec;
        case 0x3b59f0u: goto label_3b59f0;
        case 0x3b59f4u: goto label_3b59f4;
        case 0x3b59f8u: goto label_3b59f8;
        case 0x3b59fcu: goto label_3b59fc;
        case 0x3b5a00u: goto label_3b5a00;
        case 0x3b5a04u: goto label_3b5a04;
        case 0x3b5a08u: goto label_3b5a08;
        case 0x3b5a0cu: goto label_3b5a0c;
        case 0x3b5a10u: goto label_3b5a10;
        case 0x3b5a14u: goto label_3b5a14;
        case 0x3b5a18u: goto label_3b5a18;
        case 0x3b5a1cu: goto label_3b5a1c;
        case 0x3b5a20u: goto label_3b5a20;
        case 0x3b5a24u: goto label_3b5a24;
        case 0x3b5a28u: goto label_3b5a28;
        case 0x3b5a2cu: goto label_3b5a2c;
        case 0x3b5a30u: goto label_3b5a30;
        case 0x3b5a34u: goto label_3b5a34;
        case 0x3b5a38u: goto label_3b5a38;
        case 0x3b5a3cu: goto label_3b5a3c;
        case 0x3b5a40u: goto label_3b5a40;
        case 0x3b5a44u: goto label_3b5a44;
        case 0x3b5a48u: goto label_3b5a48;
        case 0x3b5a4cu: goto label_3b5a4c;
        case 0x3b5a50u: goto label_3b5a50;
        case 0x3b5a54u: goto label_3b5a54;
        case 0x3b5a58u: goto label_3b5a58;
        case 0x3b5a5cu: goto label_3b5a5c;
        case 0x3b5a60u: goto label_3b5a60;
        case 0x3b5a64u: goto label_3b5a64;
        case 0x3b5a68u: goto label_3b5a68;
        case 0x3b5a6cu: goto label_3b5a6c;
        case 0x3b5a70u: goto label_3b5a70;
        case 0x3b5a74u: goto label_3b5a74;
        case 0x3b5a78u: goto label_3b5a78;
        case 0x3b5a7cu: goto label_3b5a7c;
        case 0x3b5a80u: goto label_3b5a80;
        case 0x3b5a84u: goto label_3b5a84;
        case 0x3b5a88u: goto label_3b5a88;
        case 0x3b5a8cu: goto label_3b5a8c;
        case 0x3b5a90u: goto label_3b5a90;
        case 0x3b5a94u: goto label_3b5a94;
        case 0x3b5a98u: goto label_3b5a98;
        case 0x3b5a9cu: goto label_3b5a9c;
        case 0x3b5aa0u: goto label_3b5aa0;
        case 0x3b5aa4u: goto label_3b5aa4;
        case 0x3b5aa8u: goto label_3b5aa8;
        case 0x3b5aacu: goto label_3b5aac;
        case 0x3b5ab0u: goto label_3b5ab0;
        case 0x3b5ab4u: goto label_3b5ab4;
        case 0x3b5ab8u: goto label_3b5ab8;
        case 0x3b5abcu: goto label_3b5abc;
        case 0x3b5ac0u: goto label_3b5ac0;
        case 0x3b5ac4u: goto label_3b5ac4;
        case 0x3b5ac8u: goto label_3b5ac8;
        case 0x3b5accu: goto label_3b5acc;
        case 0x3b5ad0u: goto label_3b5ad0;
        case 0x3b5ad4u: goto label_3b5ad4;
        case 0x3b5ad8u: goto label_3b5ad8;
        case 0x3b5adcu: goto label_3b5adc;
        case 0x3b5ae0u: goto label_3b5ae0;
        case 0x3b5ae4u: goto label_3b5ae4;
        case 0x3b5ae8u: goto label_3b5ae8;
        case 0x3b5aecu: goto label_3b5aec;
        case 0x3b5af0u: goto label_3b5af0;
        case 0x3b5af4u: goto label_3b5af4;
        case 0x3b5af8u: goto label_3b5af8;
        case 0x3b5afcu: goto label_3b5afc;
        case 0x3b5b00u: goto label_3b5b00;
        case 0x3b5b04u: goto label_3b5b04;
        case 0x3b5b08u: goto label_3b5b08;
        case 0x3b5b0cu: goto label_3b5b0c;
        case 0x3b5b10u: goto label_3b5b10;
        case 0x3b5b14u: goto label_3b5b14;
        case 0x3b5b18u: goto label_3b5b18;
        case 0x3b5b1cu: goto label_3b5b1c;
        case 0x3b5b20u: goto label_3b5b20;
        case 0x3b5b24u: goto label_3b5b24;
        case 0x3b5b28u: goto label_3b5b28;
        case 0x3b5b2cu: goto label_3b5b2c;
        case 0x3b5b30u: goto label_3b5b30;
        case 0x3b5b34u: goto label_3b5b34;
        case 0x3b5b38u: goto label_3b5b38;
        case 0x3b5b3cu: goto label_3b5b3c;
        case 0x3b5b40u: goto label_3b5b40;
        case 0x3b5b44u: goto label_3b5b44;
        case 0x3b5b48u: goto label_3b5b48;
        case 0x3b5b4cu: goto label_3b5b4c;
        case 0x3b5b50u: goto label_3b5b50;
        case 0x3b5b54u: goto label_3b5b54;
        case 0x3b5b58u: goto label_3b5b58;
        case 0x3b5b5cu: goto label_3b5b5c;
        case 0x3b5b60u: goto label_3b5b60;
        case 0x3b5b64u: goto label_3b5b64;
        case 0x3b5b68u: goto label_3b5b68;
        case 0x3b5b6cu: goto label_3b5b6c;
        case 0x3b5b70u: goto label_3b5b70;
        case 0x3b5b74u: goto label_3b5b74;
        case 0x3b5b78u: goto label_3b5b78;
        case 0x3b5b7cu: goto label_3b5b7c;
        case 0x3b5b80u: goto label_3b5b80;
        case 0x3b5b84u: goto label_3b5b84;
        case 0x3b5b88u: goto label_3b5b88;
        case 0x3b5b8cu: goto label_3b5b8c;
        case 0x3b5b90u: goto label_3b5b90;
        case 0x3b5b94u: goto label_3b5b94;
        case 0x3b5b98u: goto label_3b5b98;
        case 0x3b5b9cu: goto label_3b5b9c;
        case 0x3b5ba0u: goto label_3b5ba0;
        case 0x3b5ba4u: goto label_3b5ba4;
        case 0x3b5ba8u: goto label_3b5ba8;
        case 0x3b5bacu: goto label_3b5bac;
        case 0x3b5bb0u: goto label_3b5bb0;
        case 0x3b5bb4u: goto label_3b5bb4;
        case 0x3b5bb8u: goto label_3b5bb8;
        case 0x3b5bbcu: goto label_3b5bbc;
        case 0x3b5bc0u: goto label_3b5bc0;
        case 0x3b5bc4u: goto label_3b5bc4;
        case 0x3b5bc8u: goto label_3b5bc8;
        case 0x3b5bccu: goto label_3b5bcc;
        case 0x3b5bd0u: goto label_3b5bd0;
        case 0x3b5bd4u: goto label_3b5bd4;
        case 0x3b5bd8u: goto label_3b5bd8;
        case 0x3b5bdcu: goto label_3b5bdc;
        case 0x3b5be0u: goto label_3b5be0;
        case 0x3b5be4u: goto label_3b5be4;
        case 0x3b5be8u: goto label_3b5be8;
        case 0x3b5becu: goto label_3b5bec;
        case 0x3b5bf0u: goto label_3b5bf0;
        case 0x3b5bf4u: goto label_3b5bf4;
        case 0x3b5bf8u: goto label_3b5bf8;
        case 0x3b5bfcu: goto label_3b5bfc;
        case 0x3b5c00u: goto label_3b5c00;
        case 0x3b5c04u: goto label_3b5c04;
        case 0x3b5c08u: goto label_3b5c08;
        case 0x3b5c0cu: goto label_3b5c0c;
        case 0x3b5c10u: goto label_3b5c10;
        case 0x3b5c14u: goto label_3b5c14;
        case 0x3b5c18u: goto label_3b5c18;
        case 0x3b5c1cu: goto label_3b5c1c;
        case 0x3b5c20u: goto label_3b5c20;
        case 0x3b5c24u: goto label_3b5c24;
        case 0x3b5c28u: goto label_3b5c28;
        case 0x3b5c2cu: goto label_3b5c2c;
        case 0x3b5c30u: goto label_3b5c30;
        case 0x3b5c34u: goto label_3b5c34;
        case 0x3b5c38u: goto label_3b5c38;
        case 0x3b5c3cu: goto label_3b5c3c;
        case 0x3b5c40u: goto label_3b5c40;
        case 0x3b5c44u: goto label_3b5c44;
        case 0x3b5c48u: goto label_3b5c48;
        case 0x3b5c4cu: goto label_3b5c4c;
        case 0x3b5c50u: goto label_3b5c50;
        case 0x3b5c54u: goto label_3b5c54;
        case 0x3b5c58u: goto label_3b5c58;
        case 0x3b5c5cu: goto label_3b5c5c;
        case 0x3b5c60u: goto label_3b5c60;
        case 0x3b5c64u: goto label_3b5c64;
        case 0x3b5c68u: goto label_3b5c68;
        case 0x3b5c6cu: goto label_3b5c6c;
        case 0x3b5c70u: goto label_3b5c70;
        case 0x3b5c74u: goto label_3b5c74;
        case 0x3b5c78u: goto label_3b5c78;
        case 0x3b5c7cu: goto label_3b5c7c;
        case 0x3b5c80u: goto label_3b5c80;
        case 0x3b5c84u: goto label_3b5c84;
        case 0x3b5c88u: goto label_3b5c88;
        case 0x3b5c8cu: goto label_3b5c8c;
        case 0x3b5c90u: goto label_3b5c90;
        case 0x3b5c94u: goto label_3b5c94;
        case 0x3b5c98u: goto label_3b5c98;
        case 0x3b5c9cu: goto label_3b5c9c;
        case 0x3b5ca0u: goto label_3b5ca0;
        case 0x3b5ca4u: goto label_3b5ca4;
        case 0x3b5ca8u: goto label_3b5ca8;
        case 0x3b5cacu: goto label_3b5cac;
        case 0x3b5cb0u: goto label_3b5cb0;
        case 0x3b5cb4u: goto label_3b5cb4;
        case 0x3b5cb8u: goto label_3b5cb8;
        case 0x3b5cbcu: goto label_3b5cbc;
        case 0x3b5cc0u: goto label_3b5cc0;
        case 0x3b5cc4u: goto label_3b5cc4;
        case 0x3b5cc8u: goto label_3b5cc8;
        case 0x3b5cccu: goto label_3b5ccc;
        case 0x3b5cd0u: goto label_3b5cd0;
        case 0x3b5cd4u: goto label_3b5cd4;
        case 0x3b5cd8u: goto label_3b5cd8;
        case 0x3b5cdcu: goto label_3b5cdc;
        case 0x3b5ce0u: goto label_3b5ce0;
        case 0x3b5ce4u: goto label_3b5ce4;
        case 0x3b5ce8u: goto label_3b5ce8;
        case 0x3b5cecu: goto label_3b5cec;
        case 0x3b5cf0u: goto label_3b5cf0;
        case 0x3b5cf4u: goto label_3b5cf4;
        case 0x3b5cf8u: goto label_3b5cf8;
        case 0x3b5cfcu: goto label_3b5cfc;
        case 0x3b5d00u: goto label_3b5d00;
        case 0x3b5d04u: goto label_3b5d04;
        case 0x3b5d08u: goto label_3b5d08;
        case 0x3b5d0cu: goto label_3b5d0c;
        case 0x3b5d10u: goto label_3b5d10;
        case 0x3b5d14u: goto label_3b5d14;
        case 0x3b5d18u: goto label_3b5d18;
        case 0x3b5d1cu: goto label_3b5d1c;
        case 0x3b5d20u: goto label_3b5d20;
        case 0x3b5d24u: goto label_3b5d24;
        case 0x3b5d28u: goto label_3b5d28;
        case 0x3b5d2cu: goto label_3b5d2c;
        case 0x3b5d30u: goto label_3b5d30;
        case 0x3b5d34u: goto label_3b5d34;
        case 0x3b5d38u: goto label_3b5d38;
        case 0x3b5d3cu: goto label_3b5d3c;
        case 0x3b5d40u: goto label_3b5d40;
        case 0x3b5d44u: goto label_3b5d44;
        case 0x3b5d48u: goto label_3b5d48;
        case 0x3b5d4cu: goto label_3b5d4c;
        case 0x3b5d50u: goto label_3b5d50;
        case 0x3b5d54u: goto label_3b5d54;
        case 0x3b5d58u: goto label_3b5d58;
        case 0x3b5d5cu: goto label_3b5d5c;
        case 0x3b5d60u: goto label_3b5d60;
        case 0x3b5d64u: goto label_3b5d64;
        case 0x3b5d68u: goto label_3b5d68;
        case 0x3b5d6cu: goto label_3b5d6c;
        case 0x3b5d70u: goto label_3b5d70;
        case 0x3b5d74u: goto label_3b5d74;
        case 0x3b5d78u: goto label_3b5d78;
        case 0x3b5d7cu: goto label_3b5d7c;
        case 0x3b5d80u: goto label_3b5d80;
        case 0x3b5d84u: goto label_3b5d84;
        case 0x3b5d88u: goto label_3b5d88;
        case 0x3b5d8cu: goto label_3b5d8c;
        case 0x3b5d90u: goto label_3b5d90;
        case 0x3b5d94u: goto label_3b5d94;
        case 0x3b5d98u: goto label_3b5d98;
        case 0x3b5d9cu: goto label_3b5d9c;
        case 0x3b5da0u: goto label_3b5da0;
        case 0x3b5da4u: goto label_3b5da4;
        case 0x3b5da8u: goto label_3b5da8;
        case 0x3b5dacu: goto label_3b5dac;
        case 0x3b5db0u: goto label_3b5db0;
        case 0x3b5db4u: goto label_3b5db4;
        case 0x3b5db8u: goto label_3b5db8;
        case 0x3b5dbcu: goto label_3b5dbc;
        case 0x3b5dc0u: goto label_3b5dc0;
        case 0x3b5dc4u: goto label_3b5dc4;
        case 0x3b5dc8u: goto label_3b5dc8;
        case 0x3b5dccu: goto label_3b5dcc;
        case 0x3b5dd0u: goto label_3b5dd0;
        case 0x3b5dd4u: goto label_3b5dd4;
        case 0x3b5dd8u: goto label_3b5dd8;
        case 0x3b5ddcu: goto label_3b5ddc;
        case 0x3b5de0u: goto label_3b5de0;
        case 0x3b5de4u: goto label_3b5de4;
        case 0x3b5de8u: goto label_3b5de8;
        case 0x3b5decu: goto label_3b5dec;
        case 0x3b5df0u: goto label_3b5df0;
        case 0x3b5df4u: goto label_3b5df4;
        case 0x3b5df8u: goto label_3b5df8;
        case 0x3b5dfcu: goto label_3b5dfc;
        case 0x3b5e00u: goto label_3b5e00;
        case 0x3b5e04u: goto label_3b5e04;
        case 0x3b5e08u: goto label_3b5e08;
        case 0x3b5e0cu: goto label_3b5e0c;
        case 0x3b5e10u: goto label_3b5e10;
        case 0x3b5e14u: goto label_3b5e14;
        case 0x3b5e18u: goto label_3b5e18;
        case 0x3b5e1cu: goto label_3b5e1c;
        case 0x3b5e20u: goto label_3b5e20;
        case 0x3b5e24u: goto label_3b5e24;
        case 0x3b5e28u: goto label_3b5e28;
        case 0x3b5e2cu: goto label_3b5e2c;
        case 0x3b5e30u: goto label_3b5e30;
        case 0x3b5e34u: goto label_3b5e34;
        case 0x3b5e38u: goto label_3b5e38;
        case 0x3b5e3cu: goto label_3b5e3c;
        case 0x3b5e40u: goto label_3b5e40;
        case 0x3b5e44u: goto label_3b5e44;
        case 0x3b5e48u: goto label_3b5e48;
        case 0x3b5e4cu: goto label_3b5e4c;
        case 0x3b5e50u: goto label_3b5e50;
        case 0x3b5e54u: goto label_3b5e54;
        case 0x3b5e58u: goto label_3b5e58;
        case 0x3b5e5cu: goto label_3b5e5c;
        case 0x3b5e60u: goto label_3b5e60;
        case 0x3b5e64u: goto label_3b5e64;
        case 0x3b5e68u: goto label_3b5e68;
        case 0x3b5e6cu: goto label_3b5e6c;
        case 0x3b5e70u: goto label_3b5e70;
        case 0x3b5e74u: goto label_3b5e74;
        case 0x3b5e78u: goto label_3b5e78;
        case 0x3b5e7cu: goto label_3b5e7c;
        case 0x3b5e80u: goto label_3b5e80;
        case 0x3b5e84u: goto label_3b5e84;
        case 0x3b5e88u: goto label_3b5e88;
        case 0x3b5e8cu: goto label_3b5e8c;
        case 0x3b5e90u: goto label_3b5e90;
        case 0x3b5e94u: goto label_3b5e94;
        case 0x3b5e98u: goto label_3b5e98;
        case 0x3b5e9cu: goto label_3b5e9c;
        case 0x3b5ea0u: goto label_3b5ea0;
        case 0x3b5ea4u: goto label_3b5ea4;
        case 0x3b5ea8u: goto label_3b5ea8;
        case 0x3b5eacu: goto label_3b5eac;
        case 0x3b5eb0u: goto label_3b5eb0;
        case 0x3b5eb4u: goto label_3b5eb4;
        case 0x3b5eb8u: goto label_3b5eb8;
        case 0x3b5ebcu: goto label_3b5ebc;
        case 0x3b5ec0u: goto label_3b5ec0;
        case 0x3b5ec4u: goto label_3b5ec4;
        case 0x3b5ec8u: goto label_3b5ec8;
        case 0x3b5eccu: goto label_3b5ecc;
        case 0x3b5ed0u: goto label_3b5ed0;
        case 0x3b5ed4u: goto label_3b5ed4;
        case 0x3b5ed8u: goto label_3b5ed8;
        case 0x3b5edcu: goto label_3b5edc;
        case 0x3b5ee0u: goto label_3b5ee0;
        case 0x3b5ee4u: goto label_3b5ee4;
        case 0x3b5ee8u: goto label_3b5ee8;
        case 0x3b5eecu: goto label_3b5eec;
        case 0x3b5ef0u: goto label_3b5ef0;
        case 0x3b5ef4u: goto label_3b5ef4;
        case 0x3b5ef8u: goto label_3b5ef8;
        case 0x3b5efcu: goto label_3b5efc;
        case 0x3b5f00u: goto label_3b5f00;
        case 0x3b5f04u: goto label_3b5f04;
        case 0x3b5f08u: goto label_3b5f08;
        case 0x3b5f0cu: goto label_3b5f0c;
        case 0x3b5f10u: goto label_3b5f10;
        case 0x3b5f14u: goto label_3b5f14;
        case 0x3b5f18u: goto label_3b5f18;
        case 0x3b5f1cu: goto label_3b5f1c;
        case 0x3b5f20u: goto label_3b5f20;
        case 0x3b5f24u: goto label_3b5f24;
        case 0x3b5f28u: goto label_3b5f28;
        case 0x3b5f2cu: goto label_3b5f2c;
        case 0x3b5f30u: goto label_3b5f30;
        case 0x3b5f34u: goto label_3b5f34;
        case 0x3b5f38u: goto label_3b5f38;
        case 0x3b5f3cu: goto label_3b5f3c;
        case 0x3b5f40u: goto label_3b5f40;
        case 0x3b5f44u: goto label_3b5f44;
        case 0x3b5f48u: goto label_3b5f48;
        case 0x3b5f4cu: goto label_3b5f4c;
        case 0x3b5f50u: goto label_3b5f50;
        case 0x3b5f54u: goto label_3b5f54;
        case 0x3b5f58u: goto label_3b5f58;
        case 0x3b5f5cu: goto label_3b5f5c;
        default: break;
    }

    ctx->pc = 0x3b51b0u;

label_3b51b0:
    // 0x3b51b0: 0xa0800cb2  sb          $zero, 0xCB2($a0)
    ctx->pc = 0x3b51b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3250), (uint8_t)GPR_U32(ctx, 0));
label_3b51b4:
    // 0x3b51b4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3b51b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3b51b8:
    // 0x3b51b8: 0xa0800cb0  sb          $zero, 0xCB0($a0)
    ctx->pc = 0x3b51b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3248), (uint8_t)GPR_U32(ctx, 0));
label_3b51bc:
    // 0x3b51bc: 0xa0830cb1  sb          $v1, 0xCB1($a0)
    ctx->pc = 0x3b51bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3249), (uint8_t)GPR_U32(ctx, 3));
label_3b51c0:
    // 0x3b51c0: 0xac800ca4  sw          $zero, 0xCA4($a0)
    ctx->pc = 0x3b51c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3236), GPR_U32(ctx, 0));
label_3b51c4:
    // 0x3b51c4: 0x3e00008  jr          $ra
label_3b51c8:
    if (ctx->pc == 0x3B51C8u) {
        ctx->pc = 0x3B51C8u;
            // 0x3b51c8: 0xac800ca0  sw          $zero, 0xCA0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3232), GPR_U32(ctx, 0));
        ctx->pc = 0x3B51CCu;
        goto label_3b51cc;
    }
    ctx->pc = 0x3B51C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B51C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B51C4u;
            // 0x3b51c8: 0xac800ca0  sw          $zero, 0xCA0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B51CCu;
label_3b51cc:
    // 0x3b51cc: 0x0  nop
    ctx->pc = 0x3b51ccu;
    // NOP
label_3b51d0:
    // 0x3b51d0: 0x27bdfcd0  addiu       $sp, $sp, -0x330
    ctx->pc = 0x3b51d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966480));
label_3b51d4:
    // 0x3b51d4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3b51d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3b51d8:
    // 0x3b51d8: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x3b51d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_3b51dc:
    // 0x3b51dc: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x3b51dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
label_3b51e0:
    // 0x3b51e0: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x3b51e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_3b51e4:
    // 0x3b51e4: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x3b51e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_3b51e8:
    // 0x3b51e8: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x3b51e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_3b51ec:
    // 0x3b51ec: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x3b51ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_3b51f0:
    // 0x3b51f0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3b51f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b51f4:
    // 0x3b51f4: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3b51f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_3b51f8:
    // 0x3b51f8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3b51f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_3b51fc:
    // 0x3b51fc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3b51fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3b5200:
    // 0x3b5200: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3b5200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3b5204:
    // 0x3b5204: 0xe7bd0024  swc1        $f29, 0x24($sp)
    ctx->pc = 0x3b5204u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_3b5208:
    // 0x3b5208: 0xe7bc0020  swc1        $f28, 0x20($sp)
    ctx->pc = 0x3b5208u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3b520c:
    // 0x3b520c: 0xe7bb001c  swc1        $f27, 0x1C($sp)
    ctx->pc = 0x3b520cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_3b5210:
    // 0x3b5210: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x3b5210u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_3b5214:
    // 0x3b5214: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x3b5214u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_3b5218:
    // 0x3b5218: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x3b5218u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_3b521c:
    // 0x3b521c: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x3b521cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_3b5220:
    // 0x3b5220: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x3b5220u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3b5224:
    // 0x3b5224: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3b5224u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3b5228:
    // 0x3b5228: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3b5228u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3b522c:
    // 0x3b522c: 0x8c840cbc  lw          $a0, 0xCBC($a0)
    ctx->pc = 0x3b522cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3260)));
label_3b5230:
    // 0x3b5230: 0x50830007  beql        $a0, $v1, . + 4 + (0x7 << 2)
label_3b5234:
    if (ctx->pc == 0x3B5234u) {
        ctx->pc = 0x3B5234u;
            // 0x3b5234: 0x92a40010  lbu         $a0, 0x10($s5) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 16)));
        ctx->pc = 0x3B5238u;
        goto label_3b5238;
    }
    ctx->pc = 0x3B5230u;
    {
        const bool branch_taken_0x3b5230 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3b5230) {
            ctx->pc = 0x3B5234u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5230u;
            // 0x3b5234: 0x92a40010  lbu         $a0, 0x10($s5) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B5250u;
            goto label_3b5250;
        }
    }
    ctx->pc = 0x3B5238u;
label_3b5238:
    // 0x3b5238: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x3b5238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_3b523c:
    // 0x3b523c: 0x8c63d130  lw          $v1, -0x2ED0($v1)
    ctx->pc = 0x3b523cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_3b5240:
    // 0x3b5240: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x3b5240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_3b5244:
    // 0x3b5244: 0x54830330  bnel        $a0, $v1, . + 4 + (0x330 << 2)
label_3b5248:
    if (ctx->pc == 0x3B5248u) {
        ctx->pc = 0x3B5248u;
            // 0x3b5248: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->pc = 0x3B524Cu;
        goto label_3b524c;
    }
    ctx->pc = 0x3B5244u;
    {
        const bool branch_taken_0x3b5244 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3b5244) {
            ctx->pc = 0x3B5248u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5244u;
            // 0x3b5248: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B5F08u;
            goto label_3b5f08;
        }
    }
    ctx->pc = 0x3B524Cu;
label_3b524c:
    // 0x3b524c: 0x92a40010  lbu         $a0, 0x10($s5)
    ctx->pc = 0x3b524cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 16)));
label_3b5250:
    // 0x3b5250: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3b5250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3b5254:
    // 0x3b5254: 0x1483032b  bne         $a0, $v1, . + 4 + (0x32B << 2)
label_3b5258:
    if (ctx->pc == 0x3B5258u) {
        ctx->pc = 0x3B525Cu;
        goto label_3b525c;
    }
    ctx->pc = 0x3B5254u;
    {
        const bool branch_taken_0x3b5254 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3b5254) {
            ctx->pc = 0x3B5F04u;
            goto label_3b5f04;
        }
    }
    ctx->pc = 0x3B525Cu;
label_3b525c:
    // 0x3b525c: 0xc6a40cd8  lwc1        $f4, 0xCD8($s5)
    ctx->pc = 0x3b525cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3b5260:
    // 0x3b5260: 0x26a20cd0  addiu       $v0, $s5, 0xCD0
    ctx->pc = 0x3b5260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 3280));
label_3b5264:
    // 0x3b5264: 0xc6a30cd4  lwc1        $f3, 0xCD4($s5)
    ctx->pc = 0x3b5264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3b5268:
    // 0x3b5268: 0xafa20180  sw          $v0, 0x180($sp)
    ctx->pc = 0x3b5268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
label_3b526c:
    // 0x3b526c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x3b526cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_3b5270:
    // 0x3b5270: 0x641100ff  daddiu      $s1, $zero, 0xFF
    ctx->pc = 0x3b5270u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)255);
label_3b5274:
    // 0x3b5274: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3b5274u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3b5278:
    // 0x3b5278: 0x0  nop
    ctx->pc = 0x3b5278u;
    // NOP
label_3b527c:
    // 0x3b527c: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x3b527cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_3b5280:
    // 0x3b5280: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x3b5280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_3b5284:
    // 0x3b5284: 0x46021d03  div.s       $f20, $f3, $f2
    ctx->pc = 0x3b5284u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[20] = ctx->f[3] / ctx->f[2];
label_3b5288:
    // 0x3b5288: 0xc6a00cac  lwc1        $f0, 0xCAC($s5)
    ctx->pc = 0x3b5288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b528c:
    // 0x3b528c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3b528cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3b5290:
    // 0x3b5290: 0xc6b50ca8  lwc1        $f21, 0xCA8($s5)
    ctx->pc = 0x3b5290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3b5294:
    // 0x3b5294: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3b5294u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3b5298:
    // 0x3b5298: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b5298u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3b529c:
    // 0x3b529c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3b529cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3b52a0:
    // 0x3b52a0: 0x0  nop
    ctx->pc = 0x3b52a0u;
    // NOP
label_3b52a4:
    // 0x3b52a4: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x3b52a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
label_3b52a8:
    // 0x3b52a8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x3b52a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_3b52ac:
    // 0x3b52ac: 0x21023  negu        $v0, $v0
    ctx->pc = 0x3b52acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_3b52b0:
    // 0x3b52b0: 0x2863c  dsll32      $s0, $v0, 24
    ctx->pc = 0x3b52b0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 24));
label_3b52b4:
    // 0x3b52b4: 0xc6b60ca4  lwc1        $f22, 0xCA4($s5)
    ctx->pc = 0x3b52b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3b52b8:
    // 0x3b52b8: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x3b52b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b52bc:
    // 0x3b52bc: 0x45000014  bc1f        . + 4 + (0x14 << 2)
label_3b52c0:
    if (ctx->pc == 0x3B52C0u) {
        ctx->pc = 0x3B52C0u;
            // 0x3b52c0: 0x10863f  dsra32      $s0, $s0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
        ctx->pc = 0x3B52C4u;
        goto label_3b52c4;
    }
    ctx->pc = 0x3B52BCu;
    {
        const bool branch_taken_0x3b52bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3B52C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B52BCu;
            // 0x3b52c0: 0x10863f  dsra32      $s0, $s0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b52bc) {
            ctx->pc = 0x3B5310u;
            goto label_3b5310;
        }
    }
    ctx->pc = 0x3B52C4u;
label_3b52c4:
    // 0x3b52c4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3b52c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_3b52c8:
    // 0x3b52c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b52c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b52cc:
    // 0x3b52cc: 0x0  nop
    ctx->pc = 0x3b52ccu;
    // NOP
label_3b52d0:
    // 0x3b52d0: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x3b52d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b52d4:
    // 0x3b52d4: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_3b52d8:
    if (ctx->pc == 0x3B52D8u) {
        ctx->pc = 0x3B52D8u;
            // 0x3b52d8: 0x4600a801  sub.s       $f0, $f21, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x3B52DCu;
        goto label_3b52dc;
    }
    ctx->pc = 0x3B52D4u;
    {
        const bool branch_taken_0x3b52d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b52d4) {
            ctx->pc = 0x3B52D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B52D4u;
            // 0x3b52d8: 0x4600a801  sub.s       $f0, $f21, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B52ECu;
            goto label_3b52ec;
        }
    }
    ctx->pc = 0x3B52DCu;
label_3b52dc:
    // 0x3b52dc: 0x4600a824  .word       0x4600A824                   # cvt.w.s     $f0, $f21 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b52dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[21]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3b52e0:
    // 0x3b52e0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3b52e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3b52e4:
    // 0x3b52e4: 0x10000007  b           . + 4 + (0x7 << 2)
label_3b52e8:
    if (ctx->pc == 0x3B52E8u) {
        ctx->pc = 0x3B52E8u;
            // 0x3b52e8: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3B52ECu;
        goto label_3b52ec;
    }
    ctx->pc = 0x3B52E4u;
    {
        const bool branch_taken_0x3b52e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B52E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B52E4u;
            // 0x3b52e8: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b52e4) {
            ctx->pc = 0x3B5304u;
            goto label_3b5304;
        }
    }
    ctx->pc = 0x3B52ECu;
label_3b52ec:
    // 0x3b52ec: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3b52ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_3b52f0:
    // 0x3b52f0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b52f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3b52f4:
    // 0x3b52f4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3b52f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3b52f8:
    // 0x3b52f8: 0x0  nop
    ctx->pc = 0x3b52f8u;
    // NOP
label_3b52fc:
    // 0x3b52fc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b52fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3b5300:
    // 0x3b5300: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3b5300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3b5304:
    // 0x3b5304: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x3b5304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3b5308:
    // 0x3b5308: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3b5308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3b530c:
    // 0x3b530c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x3b530cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3b5310:
    // 0x3b5310: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x3b5310u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_3b5314:
    // 0x3b5314: 0x27a40320  addiu       $a0, $sp, 0x320
    ctx->pc = 0x3b5314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
label_3b5318:
    // 0x3b5318: 0x26a50ba0  addiu       $a1, $s5, 0xBA0
    ctx->pc = 0x3b5318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 2976));
label_3b531c:
    // 0x3b531c: 0xc04cb9c  jal         func_132E70
label_3b5320:
    if (ctx->pc == 0x3B5320u) {
        ctx->pc = 0x3B5320u;
            // 0x3b5320: 0x24c681b0  addiu       $a2, $a2, -0x7E50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934960));
        ctx->pc = 0x3B5324u;
        goto label_3b5324;
    }
    ctx->pc = 0x3B531Cu;
    SET_GPR_U32(ctx, 31, 0x3B5324u);
    ctx->pc = 0x3B5320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B531Cu;
            // 0x3b5320: 0x24c681b0  addiu       $a2, $a2, -0x7E50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132E70u;
    if (runtime->hasFunction(0x132E70u)) {
        auto targetFn = runtime->lookupFunction(0x132E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5324u; }
        if (ctx->pc != 0x3B5324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132E70_0x132e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5324u; }
        if (ctx->pc != 0x3B5324u) { return; }
    }
    ctx->pc = 0x3B5324u;
label_3b5324:
    // 0x3b5324: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x3b5324u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_3b5328:
    // 0x3b5328: 0x27a40310  addiu       $a0, $sp, 0x310
    ctx->pc = 0x3b5328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
label_3b532c:
    // 0x3b532c: 0x26a50be0  addiu       $a1, $s5, 0xBE0
    ctx->pc = 0x3b532cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 3040));
label_3b5330:
    // 0x3b5330: 0xc04cb9c  jal         func_132E70
label_3b5334:
    if (ctx->pc == 0x3B5334u) {
        ctx->pc = 0x3B5334u;
            // 0x3b5334: 0x24c681b0  addiu       $a2, $a2, -0x7E50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934960));
        ctx->pc = 0x3B5338u;
        goto label_3b5338;
    }
    ctx->pc = 0x3B5330u;
    SET_GPR_U32(ctx, 31, 0x3B5338u);
    ctx->pc = 0x3B5334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5330u;
            // 0x3b5334: 0x24c681b0  addiu       $a2, $a2, -0x7E50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132E70u;
    if (runtime->hasFunction(0x132E70u)) {
        auto targetFn = runtime->lookupFunction(0x132E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5338u; }
        if (ctx->pc != 0x3B5338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132E70_0x132e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5338u; }
        if (ctx->pc != 0x3B5338u) { return; }
    }
    ctx->pc = 0x3B5338u;
label_3b5338:
    // 0x3b5338: 0x27a40310  addiu       $a0, $sp, 0x310
    ctx->pc = 0x3b5338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
label_3b533c:
    // 0x3b533c: 0xc0ed7e8  jal         func_3B5FA0
label_3b5340:
    if (ctx->pc == 0x3B5340u) {
        ctx->pc = 0x3B5340u;
            // 0x3b5340: 0x27a50320  addiu       $a1, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->pc = 0x3B5344u;
        goto label_3b5344;
    }
    ctx->pc = 0x3B533Cu;
    SET_GPR_U32(ctx, 31, 0x3B5344u);
    ctx->pc = 0x3B5340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B533Cu;
            // 0x3b5340: 0x27a50320  addiu       $a1, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B5FA0u;
    if (runtime->hasFunction(0x3B5FA0u)) {
        auto targetFn = runtime->lookupFunction(0x3B5FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5344u; }
        if (ctx->pc != 0x3B5344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B5FA0_0x3b5fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5344u; }
        if (ctx->pc != 0x3B5344u) { return; }
    }
    ctx->pc = 0x3B5344u;
label_3b5344:
    // 0x3b5344: 0x3c024265  lui         $v0, 0x4265
    ctx->pc = 0x3b5344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16997 << 16));
label_3b5348:
    // 0x3b5348: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x3b5348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_3b534c:
    // 0x3b534c: 0x34432ee1  ori         $v1, $v0, 0x2EE1
    ctx->pc = 0x3b534cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12001);
label_3b5350:
    // 0x3b5350: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3b5350u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3b5354:
    // 0x3b5354: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x3b5354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_3b5358:
    // 0x3b5358: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3b5358u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3b535c:
    // 0x3b535c: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x3b535cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_3b5360:
    // 0x3b5360: 0x10163c  dsll32      $v0, $s0, 24
    ctx->pc = 0x3b5360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 24));
label_3b5364:
    // 0x3b5364: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x3b5364u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_3b5368:
    // 0x3b5368: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3b5368u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b536c:
    // 0x3b536c: 0x0  nop
    ctx->pc = 0x3b536cu;
    // NOP
label_3b5370:
    // 0x3b5370: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3b5370u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3b5374:
    // 0x3b5374: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b5374u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b5378:
    // 0x3b5378: 0x0  nop
    ctx->pc = 0x3b5378u;
    // NOP
label_3b537c:
    // 0x3b537c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3b537cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3b5380:
    // 0x3b5380: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3b5380u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b5384:
    // 0x3b5384: 0x0  nop
    ctx->pc = 0x3b5384u;
    // NOP
label_3b5388:
    // 0x3b5388: 0x46150018  adda.s      $f0, $f21
    ctx->pc = 0x3b5388u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_3b538c:
    // 0x3b538c: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
label_3b5390:
    if (ctx->pc == 0x3B5390u) {
        ctx->pc = 0x3B5390u;
            // 0x3b5390: 0x4601a8dd  msub.s      $f3, $f21, $f1 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[21], ctx->f[1]));
        ctx->pc = 0x3B5394u;
        goto label_3b5394;
    }
    ctx->pc = 0x3B538Cu;
    {
        const bool branch_taken_0x3b538c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3B5390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B538Cu;
            // 0x3b5390: 0x4601a8dd  msub.s      $f3, $f21, $f1 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[21], ctx->f[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b538c) {
            ctx->pc = 0x3B53B0u;
            goto label_3b53b0;
        }
    }
    ctx->pc = 0x3B5394u;
label_3b5394:
    // 0x3b5394: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x3b5394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_3b5398:
    // 0x3b5398: 0x4603a840  add.s       $f1, $f21, $f3
    ctx->pc = 0x3b5398u;
    ctx->f[1] = FPU_ADD_S(ctx->f[21], ctx->f[3]);
label_3b539c:
    // 0x3b539c: 0xc4420014  lwc1        $f2, 0x14($v0)
    ctx->pc = 0x3b539cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b53a0:
    // 0x3b53a0: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x3b53a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b53a4:
    // 0x3b53a4: 0x46021902  mul.s       $f4, $f3, $f2
    ctx->pc = 0x3b53a4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_3b53a8:
    // 0x3b53a8: 0x1000000f  b           . + 4 + (0xF << 2)
label_3b53ac:
    if (ctx->pc == 0x3B53ACu) {
        ctx->pc = 0x3B53ACu;
            // 0x3b53ac: 0x46010082  mul.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x3B53B0u;
        goto label_3b53b0;
    }
    ctx->pc = 0x3B53A8u;
    {
        const bool branch_taken_0x3b53a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B53ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B53A8u;
            // 0x3b53ac: 0x46010082  mul.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b53a8) {
            ctx->pc = 0x3B53E8u;
            goto label_3b53e8;
        }
    }
    ctx->pc = 0x3B53B0u;
label_3b53b0:
    // 0x3b53b0: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
label_3b53b4:
    if (ctx->pc == 0x3B53B4u) {
        ctx->pc = 0x3B53B4u;
            // 0x3b53b4: 0x3c023ca3  lui         $v0, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
        ctx->pc = 0x3B53B8u;
        goto label_3b53b8;
    }
    ctx->pc = 0x3B53B0u;
    {
        const bool branch_taken_0x3b53b0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3b53b0) {
            ctx->pc = 0x3B53B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B53B0u;
            // 0x3b53b4: 0x3c023ca3  lui         $v0, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B53D4u;
            goto label_3b53d4;
        }
    }
    ctx->pc = 0x3B53B8u;
label_3b53b8:
    // 0x3b53b8: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x3b53b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_3b53bc:
    // 0x3b53bc: 0x4603a880  add.s       $f2, $f21, $f3
    ctx->pc = 0x3b53bcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[21], ctx->f[3]);
label_3b53c0:
    // 0x3b53c0: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x3b53c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b53c4:
    // 0x3b53c4: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x3b53c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b53c8:
    // 0x3b53c8: 0x46020902  mul.s       $f4, $f1, $f2
    ctx->pc = 0x3b53c8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3b53cc:
    // 0x3b53cc: 0x10000006  b           . + 4 + (0x6 << 2)
label_3b53d0:
    if (ctx->pc == 0x3B53D0u) {
        ctx->pc = 0x3B53D0u;
            // 0x3b53d0: 0x46001882  mul.s       $f2, $f3, $f0 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->pc = 0x3B53D4u;
        goto label_3b53d4;
    }
    ctx->pc = 0x3B53CCu;
    {
        const bool branch_taken_0x3b53cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B53D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B53CCu;
            // 0x3b53d0: 0x46001882  mul.s       $f2, $f3, $f0 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b53cc) {
            ctx->pc = 0x3B53E8u;
            goto label_3b53e8;
        }
    }
    ctx->pc = 0x3B53D4u;
label_3b53d4:
    // 0x3b53d4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x3b53d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_3b53d8:
    // 0x3b53d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b53d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b53dc:
    // 0x3b53dc: 0x0  nop
    ctx->pc = 0x3b53dcu;
    // NOP
label_3b53e0:
    // 0x3b53e0: 0x46150082  mul.s       $f2, $f0, $f21
    ctx->pc = 0x3b53e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_3b53e4:
    // 0x3b53e4: 0x46001106  mov.s       $f4, $f2
    ctx->pc = 0x3b53e4u;
    ctx->f[4] = FPU_MOV_S(ctx->f[2]);
label_3b53e8:
    // 0x3b53e8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x3b53e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_3b53ec:
    // 0x3b53ec: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x3b53ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_3b53f0:
    // 0x3b53f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3b53f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3b53f4:
    // 0x3b53f4: 0x26a50be0  addiu       $a1, $s5, 0xBE0
    ctx->pc = 0x3b53f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 3040));
label_3b53f8:
    // 0x3b53f8: 0x46012643  div.s       $f25, $f4, $f1
    ctx->pc = 0x3b53f8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[25] = copysignf(INFINITY, ctx->f[4] * 0.0f); } else ctx->f[25] = ctx->f[4] / ctx->f[1];
label_3b53fc:
    // 0x3b53fc: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x3b53fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_3b5400:
    // 0x3b5400: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x3b5400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_3b5404:
    // 0x3b5404: 0x46011603  div.s       $f24, $f2, $f1
    ctx->pc = 0x3b5404u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[24] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[24] = ctx->f[2] / ctx->f[1];
label_3b5408:
    // 0x3b5408: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x3b5408u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b540c:
    // 0x3b540c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3b540cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3b5410:
    // 0x3b5410: 0x0  nop
    ctx->pc = 0x3b5410u;
    // NOP
label_3b5414:
    // 0x3b5414: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3b5414u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3b5418:
    // 0x3b5418: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x3b5418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_3b541c:
    // 0x3b541c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3b541cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3b5420:
    // 0x3b5420: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x3b5420u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_3b5424:
    // 0x3b5424: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x3b5424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b5428:
    // 0x3b5428: 0xc04cce8  jal         func_1333A0
label_3b542c:
    if (ctx->pc == 0x3B542Cu) {
        ctx->pc = 0x3B542Cu;
            // 0x3b542c: 0x46010542  mul.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x3B5430u;
        goto label_3b5430;
    }
    ctx->pc = 0x3B5428u;
    SET_GPR_U32(ctx, 31, 0x3B5430u);
    ctx->pc = 0x3B542Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5428u;
            // 0x3b542c: 0x46010542  mul.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5430u; }
        if (ctx->pc != 0x3B5430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5430u; }
        if (ctx->pc != 0x3B5430u) { return; }
    }
    ctx->pc = 0x3B5430u;
label_3b5430:
    // 0x3b5430: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x3b5430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_3b5434:
    // 0x3b5434: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x3b5434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_3b5438:
    // 0x3b5438: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x3b5438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_3b543c:
    // 0x3b543c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3b543cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3b5440:
    // 0x3b5440: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x3b5440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_3b5444:
    // 0x3b5444: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x3b5444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b5448:
    // 0x3b5448: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3b5448u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3b544c:
    // 0x3b544c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b544cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3b5450:
    // 0x3b5450: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3b5450u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_3b5454:
    // 0x3b5454: 0xc04cdf0  jal         func_1337C0
label_3b5458:
    if (ctx->pc == 0x3B5458u) {
        ctx->pc = 0x3B5458u;
            // 0x3b5458: 0x27a50290  addiu       $a1, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->pc = 0x3B545Cu;
        goto label_3b545c;
    }
    ctx->pc = 0x3B5454u;
    SET_GPR_U32(ctx, 31, 0x3B545Cu);
    ctx->pc = 0x3B5458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5454u;
            // 0x3b5458: 0x27a50290  addiu       $a1, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1337C0u;
    if (runtime->hasFunction(0x1337C0u)) {
        auto targetFn = runtime->lookupFunction(0x1337C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B545Cu; }
        if (ctx->pc != 0x3B545Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001337C0_0x1337c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B545Cu; }
        if (ctx->pc != 0x3B545Cu) { return; }
    }
    ctx->pc = 0x3B545Cu;
label_3b545c:
    // 0x3b545c: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x3b545cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_3b5460:
    // 0x3b5460: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x3b5460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_3b5464:
    // 0x3b5464: 0x27a50250  addiu       $a1, $sp, 0x250
    ctx->pc = 0x3b5464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_3b5468:
    // 0x3b5468: 0xc04cca0  jal         func_133280
label_3b546c:
    if (ctx->pc == 0x3B546Cu) {
        ctx->pc = 0x3B546Cu;
            // 0x3b546c: 0x24c681c0  addiu       $a2, $a2, -0x7E40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934976));
        ctx->pc = 0x3B5470u;
        goto label_3b5470;
    }
    ctx->pc = 0x3B5468u;
    SET_GPR_U32(ctx, 31, 0x3B5470u);
    ctx->pc = 0x3B546Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5468u;
            // 0x3b546c: 0x24c681c0  addiu       $a2, $a2, -0x7E40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5470u; }
        if (ctx->pc != 0x3B5470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5470u; }
        if (ctx->pc != 0x3B5470u) { return; }
    }
    ctx->pc = 0x3B5470u;
label_3b5470:
    // 0x3b5470: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x3b5470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_3b5474:
    // 0x3b5474: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x3b5474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_3b5478:
    // 0x3b5478: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x3b5478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b547c:
    // 0x3b547c: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x3b547cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_3b5480:
    // 0x3b5480: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x3b5480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_3b5484:
    // 0x3b5484: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b5484u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b5488:
    // 0x3b5488: 0x0  nop
    ctx->pc = 0x3b5488u;
    // NOP
label_3b548c:
    // 0x3b548c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x3b548cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_3b5490:
    // 0x3b5490: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3b5490u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3b5494:
    // 0x3b5494: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b5494u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3b5498:
    // 0x3b5498: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3b5498u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_3b549c:
    // 0x3b549c: 0xc04cdf0  jal         func_1337C0
label_3b54a0:
    if (ctx->pc == 0x3B54A0u) {
        ctx->pc = 0x3B54A0u;
            // 0x3b54a0: 0x27a50290  addiu       $a1, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->pc = 0x3B54A4u;
        goto label_3b54a4;
    }
    ctx->pc = 0x3B549Cu;
    SET_GPR_U32(ctx, 31, 0x3B54A4u);
    ctx->pc = 0x3B54A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B549Cu;
            // 0x3b54a0: 0x27a50290  addiu       $a1, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1337C0u;
    if (runtime->hasFunction(0x1337C0u)) {
        auto targetFn = runtime->lookupFunction(0x1337C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B54A4u; }
        if (ctx->pc != 0x3B54A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001337C0_0x1337c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B54A4u; }
        if (ctx->pc != 0x3B54A4u) { return; }
    }
    ctx->pc = 0x3B54A4u;
label_3b54a4:
    // 0x3b54a4: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x3b54a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_3b54a8:
    // 0x3b54a8: 0x27a40220  addiu       $a0, $sp, 0x220
    ctx->pc = 0x3b54a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_3b54ac:
    // 0x3b54ac: 0x27a50250  addiu       $a1, $sp, 0x250
    ctx->pc = 0x3b54acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_3b54b0:
    // 0x3b54b0: 0xc04cca0  jal         func_133280
label_3b54b4:
    if (ctx->pc == 0x3B54B4u) {
        ctx->pc = 0x3B54B4u;
            // 0x3b54b4: 0x24c681c0  addiu       $a2, $a2, -0x7E40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934976));
        ctx->pc = 0x3B54B8u;
        goto label_3b54b8;
    }
    ctx->pc = 0x3B54B0u;
    SET_GPR_U32(ctx, 31, 0x3B54B8u);
    ctx->pc = 0x3B54B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B54B0u;
            // 0x3b54b4: 0x24c681c0  addiu       $a2, $a2, -0x7E40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B54B8u; }
        if (ctx->pc != 0x3B54B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B54B8u; }
        if (ctx->pc != 0x3B54B8u) { return; }
    }
    ctx->pc = 0x3B54B8u;
label_3b54b8:
    // 0x3b54b8: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x3b54b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_3b54bc:
    // 0x3b54bc: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x3b54bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
label_3b54c0:
    // 0x3b54c0: 0x27a50290  addiu       $a1, $sp, 0x290
    ctx->pc = 0x3b54c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_3b54c4:
    // 0x3b54c4: 0xc04cca0  jal         func_133280
label_3b54c8:
    if (ctx->pc == 0x3B54C8u) {
        ctx->pc = 0x3B54C8u;
            // 0x3b54c8: 0x24c681c0  addiu       $a2, $a2, -0x7E40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934976));
        ctx->pc = 0x3B54CCu;
        goto label_3b54cc;
    }
    ctx->pc = 0x3B54C4u;
    SET_GPR_U32(ctx, 31, 0x3B54CCu);
    ctx->pc = 0x3B54C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B54C4u;
            // 0x3b54c8: 0x24c681c0  addiu       $a2, $a2, -0x7E40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B54CCu; }
        if (ctx->pc != 0x3B54CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B54CCu; }
        if (ctx->pc != 0x3B54CCu) { return; }
    }
    ctx->pc = 0x3B54CCu;
label_3b54cc:
    // 0x3b54cc: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x3b54ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_3b54d0:
    // 0x3b54d0: 0x26a50c40  addiu       $a1, $s5, 0xC40
    ctx->pc = 0x3b54d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 3136));
label_3b54d4:
    // 0x3b54d4: 0xc04cc90  jal         func_133240
label_3b54d8:
    if (ctx->pc == 0x3B54D8u) {
        ctx->pc = 0x3B54D8u;
            // 0x3b54d8: 0x26a60c30  addiu       $a2, $s5, 0xC30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 3120));
        ctx->pc = 0x3B54DCu;
        goto label_3b54dc;
    }
    ctx->pc = 0x3B54D4u;
    SET_GPR_U32(ctx, 31, 0x3B54DCu);
    ctx->pc = 0x3B54D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B54D4u;
            // 0x3b54d8: 0x26a60c30  addiu       $a2, $s5, 0xC30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 3120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B54DCu; }
        if (ctx->pc != 0x3B54DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B54DCu; }
        if (ctx->pc != 0x3B54DCu) { return; }
    }
    ctx->pc = 0x3B54DCu;
label_3b54dc:
    // 0x3b54dc: 0x27a40210  addiu       $a0, $sp, 0x210
    ctx->pc = 0x3b54dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_3b54e0:
    // 0x3b54e0: 0xc04cc44  jal         func_133110
label_3b54e4:
    if (ctx->pc == 0x3B54E4u) {
        ctx->pc = 0x3B54E4u;
            // 0x3b54e4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B54E8u;
        goto label_3b54e8;
    }
    ctx->pc = 0x3B54E0u;
    SET_GPR_U32(ctx, 31, 0x3B54E8u);
    ctx->pc = 0x3B54E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B54E0u;
            // 0x3b54e4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B54E8u; }
        if (ctx->pc != 0x3B54E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B54E8u; }
        if (ctx->pc != 0x3B54E8u) { return; }
    }
    ctx->pc = 0x3B54E8u;
label_3b54e8:
    // 0x3b54e8: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x3b54e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_3b54ec:
    // 0x3b54ec: 0x27a50240  addiu       $a1, $sp, 0x240
    ctx->pc = 0x3b54ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
label_3b54f0:
    // 0x3b54f0: 0xc04cbf0  jal         func_132FC0
label_3b54f4:
    if (ctx->pc == 0x3B54F4u) {
        ctx->pc = 0x3B54F4u;
            // 0x3b54f4: 0x27a60210  addiu       $a2, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->pc = 0x3B54F8u;
        goto label_3b54f8;
    }
    ctx->pc = 0x3B54F0u;
    SET_GPR_U32(ctx, 31, 0x3B54F8u);
    ctx->pc = 0x3B54F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B54F0u;
            // 0x3b54f4: 0x27a60210  addiu       $a2, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B54F8u; }
        if (ctx->pc != 0x3B54F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B54F8u; }
        if (ctx->pc != 0x3B54F8u) { return; }
    }
    ctx->pc = 0x3B54F8u;
label_3b54f8:
    // 0x3b54f8: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x3b54f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_3b54fc:
    // 0x3b54fc: 0x27a50220  addiu       $a1, $sp, 0x220
    ctx->pc = 0x3b54fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_3b5500:
    // 0x3b5500: 0xc04cbf0  jal         func_132FC0
label_3b5504:
    if (ctx->pc == 0x3B5504u) {
        ctx->pc = 0x3B5504u;
            // 0x3b5504: 0x27a60210  addiu       $a2, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->pc = 0x3B5508u;
        goto label_3b5508;
    }
    ctx->pc = 0x3B5500u;
    SET_GPR_U32(ctx, 31, 0x3B5508u);
    ctx->pc = 0x3B5504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5500u;
            // 0x3b5504: 0x27a60210  addiu       $a2, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5508u; }
        if (ctx->pc != 0x3B5508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5508u; }
        if (ctx->pc != 0x3B5508u) { return; }
    }
    ctx->pc = 0x3B5508u;
label_3b5508:
    // 0x3b5508: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x3b5508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_3b550c:
    // 0x3b550c: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x3b550cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_3b5510:
    // 0x3b5510: 0xc04cbf0  jal         func_132FC0
label_3b5514:
    if (ctx->pc == 0x3B5514u) {
        ctx->pc = 0x3B5514u;
            // 0x3b5514: 0x27a60230  addiu       $a2, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->pc = 0x3B5518u;
        goto label_3b5518;
    }
    ctx->pc = 0x3B5510u;
    SET_GPR_U32(ctx, 31, 0x3B5518u);
    ctx->pc = 0x3B5514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5510u;
            // 0x3b5514: 0x27a60230  addiu       $a2, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132FC0u;
    if (runtime->hasFunction(0x132FC0u)) {
        auto targetFn = runtime->lookupFunction(0x132FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5518u; }
        if (ctx->pc != 0x3B5518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132FC0_0x132fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5518u; }
        if (ctx->pc != 0x3B5518u) { return; }
    }
    ctx->pc = 0x3B5518u;
label_3b5518:
    // 0x3b5518: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x3b5518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_3b551c:
    // 0x3b551c: 0x3c034308  lui         $v1, 0x4308
    ctx->pc = 0x3b551cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17160 << 16));
label_3b5520:
    // 0x3b5520: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x3b5520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
label_3b5524:
    // 0x3b5524: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3b5524u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3b5528:
    // 0x3b5528: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x3b5528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_3b552c:
    // 0x3b552c: 0xaea00ca4  sw          $zero, 0xCA4($s5)
    ctx->pc = 0x3b552cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 3236), GPR_U32(ctx, 0));
label_3b5530:
    // 0x3b5530: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3b5530u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3b5534:
    // 0x3b5534: 0x26a50c30  addiu       $a1, $s5, 0xC30
    ctx->pc = 0x3b5534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 3120));
label_3b5538:
    // 0x3b5538: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x3b5538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_3b553c:
    // 0x3b553c: 0xafa00170  sw          $zero, 0x170($sp)
    ctx->pc = 0x3b553cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 0));
label_3b5540:
    // 0x3b5540: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3b5540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3b5544:
    // 0x3b5544: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x3b5544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_3b5548:
    // 0x3b5548: 0x34446667  ori         $a0, $v0, 0x6667
    ctx->pc = 0x3b5548u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_3b554c:
    // 0x3b554c: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x3b554cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_3b5550:
    // 0x3b5550: 0x4603af43  div.s       $f29, $f21, $f3
    ctx->pc = 0x3b5550u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[29] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[29] = ctx->f[21] / ctx->f[3];
label_3b5554:
    // 0x3b5554: 0x820018  mult        $zero, $a0, $v0
    ctx->pc = 0x3b5554u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_3b5558:
    // 0x3b5558: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x3b5558u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_3b555c:
    // 0x3b555c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3b555cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3b5560:
    // 0x3b5560: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x3b5560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_3b5564:
    // 0x3b5564: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b5564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b5568:
    // 0x3b5568: 0x0  nop
    ctx->pc = 0x3b5568u;
    // NOP
label_3b556c:
    // 0x3b556c: 0x46160583  div.s       $f22, $f0, $f22
    ctx->pc = 0x3b556cu;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[22] = ctx->f[0] / ctx->f[22];
label_3b5570:
    // 0x3b5570: 0x1010  mfhi        $v0
    ctx->pc = 0x3b5570u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_3b5574:
    // 0x3b5574: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x3b5574u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_3b5578:
    // 0x3b5578: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3b5578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3b557c:
    // 0x3b557c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b557cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b5580:
    // 0x3b5580: 0x0  nop
    ctx->pc = 0x3b5580u;
    // NOP
label_3b5584:
    // 0x3b5584: 0x468006a0  cvt.s.w     $f26, $f0
    ctx->pc = 0x3b5584u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[26] = FPU_CVT_S_W(tmp); }
label_3b5588:
    // 0x3b5588: 0x46151802  mul.s       $f0, $f3, $f21
    ctx->pc = 0x3b5588u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[21]);
label_3b558c:
    // 0x3b558c: 0x46020703  div.s       $f28, $f0, $f2
    ctx->pc = 0x3b558cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[28] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[28] = ctx->f[0] / ctx->f[2];
label_3b5590:
    // 0x3b5590: 0x461d0ec2  mul.s       $f27, $f1, $f29
    ctx->pc = 0x3b5590u;
    ctx->f[27] = FPU_MUL_S(ctx->f[1], ctx->f[29]);
label_3b5594:
    // 0x3b5594: 0xc6b50ca0  lwc1        $f21, 0xCA0($s5)
    ctx->pc = 0x3b5594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3b5598:
    // 0x3b5598: 0xc04cc04  jal         func_133010
label_3b559c:
    if (ctx->pc == 0x3B559Cu) {
        ctx->pc = 0x3B559Cu;
            // 0x3b559c: 0x4600ddc6  mov.s       $f23, $f27 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[27]);
        ctx->pc = 0x3B55A0u;
        goto label_3b55a0;
    }
    ctx->pc = 0x3B5598u;
    SET_GPR_U32(ctx, 31, 0x3B55A0u);
    ctx->pc = 0x3B559Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5598u;
            // 0x3b559c: 0x4600ddc6  mov.s       $f23, $f27 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[27]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B55A0u; }
        if (ctx->pc != 0x3B55A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B55A0u; }
        if (ctx->pc != 0x3B55A0u) { return; }
    }
    ctx->pc = 0x3B55A0u;
label_3b55a0:
    // 0x3b55a0: 0x26a40054  addiu       $a0, $s5, 0x54
    ctx->pc = 0x3b55a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 84));
label_3b55a4:
    // 0x3b55a4: 0xc04cb1c  jal         func_132C70
label_3b55a8:
    if (ctx->pc == 0x3B55A8u) {
        ctx->pc = 0x3B55A8u;
            // 0x3b55a8: 0x27a50200  addiu       $a1, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->pc = 0x3B55ACu;
        goto label_3b55ac;
    }
    ctx->pc = 0x3B55A4u;
    SET_GPR_U32(ctx, 31, 0x3B55ACu);
    ctx->pc = 0x3B55A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B55A4u;
            // 0x3b55a8: 0x27a50200  addiu       $a1, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C70u;
    if (runtime->hasFunction(0x132C70u)) {
        auto targetFn = runtime->lookupFunction(0x132C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B55ACu; }
        if (ctx->pc != 0x3B55ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C70_0x132c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B55ACu; }
        if (ctx->pc != 0x3B55ACu) { return; }
    }
    ctx->pc = 0x3B55ACu;
label_3b55ac:
    // 0x3b55ac: 0x26a4006c  addiu       $a0, $s5, 0x6C
    ctx->pc = 0x3b55acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 108));
label_3b55b0:
    // 0x3b55b0: 0xc04cb1c  jal         func_132C70
label_3b55b4:
    if (ctx->pc == 0x3B55B4u) {
        ctx->pc = 0x3B55B4u;
            // 0x3b55b4: 0x26a50054  addiu       $a1, $s5, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 84));
        ctx->pc = 0x3B55B8u;
        goto label_3b55b8;
    }
    ctx->pc = 0x3B55B0u;
    SET_GPR_U32(ctx, 31, 0x3B55B8u);
    ctx->pc = 0x3B55B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B55B0u;
            // 0x3b55b4: 0x26a50054  addiu       $a1, $s5, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C70u;
    if (runtime->hasFunction(0x132C70u)) {
        auto targetFn = runtime->lookupFunction(0x132C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B55B8u; }
        if (ctx->pc != 0x3B55B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C70_0x132c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B55B8u; }
        if (ctx->pc != 0x3B55B8u) { return; }
    }
    ctx->pc = 0x3B55B8u;
label_3b55b8:
    // 0x3b55b8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3b55b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_3b55bc:
    // 0x3b55bc: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x3b55bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_3b55c0:
    // 0x3b55c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3b55c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3b55c4:
    // 0x3b55c4: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x3b55c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_3b55c8:
    // 0x3b55c8: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x3b55c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_3b55cc:
    // 0x3b55cc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3b55ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3b55d0:
    // 0x3b55d0: 0xc04cc70  jal         func_1331C0
label_3b55d4:
    if (ctx->pc == 0x3B55D4u) {
        ctx->pc = 0x3B55D4u;
            // 0x3b55d4: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3B55D8u;
        goto label_3b55d8;
    }
    ctx->pc = 0x3B55D0u;
    SET_GPR_U32(ctx, 31, 0x3B55D8u);
    ctx->pc = 0x3B55D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B55D0u;
            // 0x3b55d4: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B55D8u; }
        if (ctx->pc != 0x3B55D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B55D8u; }
        if (ctx->pc != 0x3B55D8u) { return; }
    }
    ctx->pc = 0x3B55D8u;
label_3b55d8:
    // 0x3b55d8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x3b55d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_3b55dc:
    // 0x3b55dc: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x3b55dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_3b55e0:
    // 0x3b55e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b55e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b55e4:
    // 0x3b55e4: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x3b55e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_3b55e8:
    // 0x3b55e8: 0x46190042  mul.s       $f1, $f0, $f25
    ctx->pc = 0x3b55e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[25]);
label_3b55ec:
    // 0x3b55ec: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x3b55ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_3b55f0:
    // 0x3b55f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b55f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b55f4:
    // 0x3b55f4: 0x0  nop
    ctx->pc = 0x3b55f4u;
    // NOP
label_3b55f8:
    // 0x3b55f8: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x3b55f8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
label_3b55fc:
    // 0x3b55fc: 0x0  nop
    ctx->pc = 0x3b55fcu;
    // NOP
label_3b5600:
    // 0x3b5600: 0x0  nop
    ctx->pc = 0x3b5600u;
    // NOP
label_3b5604:
    // 0x3b5604: 0xc04cc70  jal         func_1331C0
label_3b5608:
    if (ctx->pc == 0x3B5608u) {
        ctx->pc = 0x3B560Cu;
        goto label_3b560c;
    }
    ctx->pc = 0x3B5604u;
    SET_GPR_U32(ctx, 31, 0x3B560Cu);
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B560Cu; }
        if (ctx->pc != 0x3B560Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B560Cu; }
        if (ctx->pc != 0x3B560Cu) { return; }
    }
    ctx->pc = 0x3B560Cu;
label_3b560c:
    // 0x3b560c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x3b560cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_3b5610:
    // 0x3b5610: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x3b5610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_3b5614:
    // 0x3b5614: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b5614u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b5618:
    // 0x3b5618: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x3b5618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_3b561c:
    // 0x3b561c: 0x46180042  mul.s       $f1, $f0, $f24
    ctx->pc = 0x3b561cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
label_3b5620:
    // 0x3b5620: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x3b5620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_3b5624:
    // 0x3b5624: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b5624u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b5628:
    // 0x3b5628: 0x0  nop
    ctx->pc = 0x3b5628u;
    // NOP
label_3b562c:
    // 0x3b562c: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x3b562cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
label_3b5630:
    // 0x3b5630: 0x0  nop
    ctx->pc = 0x3b5630u;
    // NOP
label_3b5634:
    // 0x3b5634: 0x0  nop
    ctx->pc = 0x3b5634u;
    // NOP
label_3b5638:
    // 0x3b5638: 0xc04cc70  jal         func_1331C0
label_3b563c:
    if (ctx->pc == 0x3B563Cu) {
        ctx->pc = 0x3B5640u;
        goto label_3b5640;
    }
    ctx->pc = 0x3B5638u;
    SET_GPR_U32(ctx, 31, 0x3B5640u);
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5640u; }
        if (ctx->pc != 0x3B5640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5640u; }
        if (ctx->pc != 0x3B5640u) { return; }
    }
    ctx->pc = 0x3B5640u;
label_3b5640:
    // 0x3b5640: 0x461ddec1  sub.s       $f27, $f27, $f29
    ctx->pc = 0x3b5640u;
    ctx->f[27] = FPU_SUB_S(ctx->f[27], ctx->f[29]);
label_3b5644:
    // 0x3b5644: 0x26a4006c  addiu       $a0, $s5, 0x6C
    ctx->pc = 0x3b5644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 108));
label_3b5648:
    // 0x3b5648: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3b5648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b564c:
    // 0x3b564c: 0xc04cafc  jal         func_132BF0
label_3b5650:
    if (ctx->pc == 0x3B5650u) {
        ctx->pc = 0x3B5650u;
            // 0x3b5650: 0x27a601e0  addiu       $a2, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->pc = 0x3B5654u;
        goto label_3b5654;
    }
    ctx->pc = 0x3B564Cu;
    SET_GPR_U32(ctx, 31, 0x3B5654u);
    ctx->pc = 0x3B5650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B564Cu;
            // 0x3b5650: 0x27a601e0  addiu       $a2, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132BF0u;
    if (runtime->hasFunction(0x132BF0u)) {
        auto targetFn = runtime->lookupFunction(0x132BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5654u; }
        if (ctx->pc != 0x3B5654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132BF0_0x132bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5654u; }
        if (ctx->pc != 0x3B5654u) { return; }
    }
    ctx->pc = 0x3B5654u;
label_3b5654:
    // 0x3b5654: 0x26a40054  addiu       $a0, $s5, 0x54
    ctx->pc = 0x3b5654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 84));
label_3b5658:
    // 0x3b5658: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x3b5658u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_3b565c:
    // 0x3b565c: 0xc04cb8c  jal         func_132E30
label_3b5660:
    if (ctx->pc == 0x3B5660u) {
        ctx->pc = 0x3B5660u;
            // 0x3b5660: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B5664u;
        goto label_3b5664;
    }
    ctx->pc = 0x3B565Cu;
    SET_GPR_U32(ctx, 31, 0x3B5664u);
    ctx->pc = 0x3B5660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B565Cu;
            // 0x3b5660: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132E30u;
    if (runtime->hasFunction(0x132E30u)) {
        auto targetFn = runtime->lookupFunction(0x132E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5664u; }
        if (ctx->pc != 0x3B5664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132E30_0x132e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5664u; }
        if (ctx->pc != 0x3B5664u) { return; }
    }
    ctx->pc = 0x3B5664u;
label_3b5664:
    // 0x3b5664: 0x26a40414  addiu       $a0, $s5, 0x414
    ctx->pc = 0x3b5664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1044));
label_3b5668:
    // 0x3b5668: 0xc04cb1c  jal         func_132C70
label_3b566c:
    if (ctx->pc == 0x3B566Cu) {
        ctx->pc = 0x3B566Cu;
            // 0x3b566c: 0x26a50054  addiu       $a1, $s5, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 84));
        ctx->pc = 0x3B5670u;
        goto label_3b5670;
    }
    ctx->pc = 0x3B5668u;
    SET_GPR_U32(ctx, 31, 0x3B5670u);
    ctx->pc = 0x3B566Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5668u;
            // 0x3b566c: 0x26a50054  addiu       $a1, $s5, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C70u;
    if (runtime->hasFunction(0x132C70u)) {
        auto targetFn = runtime->lookupFunction(0x132C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5670u; }
        if (ctx->pc != 0x3B5670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C70_0x132c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5670u; }
        if (ctx->pc != 0x3B5670u) { return; }
    }
    ctx->pc = 0x3B5670u;
label_3b5670:
    // 0x3b5670: 0x26a4042c  addiu       $a0, $s5, 0x42C
    ctx->pc = 0x3b5670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1068));
label_3b5674:
    // 0x3b5674: 0x26a50054  addiu       $a1, $s5, 0x54
    ctx->pc = 0x3b5674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 84));
label_3b5678:
    // 0x3b5678: 0xc04cafc  jal         func_132BF0
label_3b567c:
    if (ctx->pc == 0x3B567Cu) {
        ctx->pc = 0x3B567Cu;
            // 0x3b567c: 0x27a601c0  addiu       $a2, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->pc = 0x3B5680u;
        goto label_3b5680;
    }
    ctx->pc = 0x3B5678u;
    SET_GPR_U32(ctx, 31, 0x3B5680u);
    ctx->pc = 0x3B567Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5678u;
            // 0x3b567c: 0x27a601c0  addiu       $a2, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132BF0u;
    if (runtime->hasFunction(0x132BF0u)) {
        auto targetFn = runtime->lookupFunction(0x132BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5680u; }
        if (ctx->pc != 0x3B5680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132BF0_0x132bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5680u; }
        if (ctx->pc != 0x3B5680u) { return; }
    }
    ctx->pc = 0x3B5680u;
label_3b5680:
    // 0x3b5680: 0x26a407d4  addiu       $a0, $s5, 0x7D4
    ctx->pc = 0x3b5680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 2004));
label_3b5684:
    // 0x3b5684: 0xc04cb1c  jal         func_132C70
label_3b5688:
    if (ctx->pc == 0x3B5688u) {
        ctx->pc = 0x3B5688u;
            // 0x3b5688: 0x26a5006c  addiu       $a1, $s5, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 108));
        ctx->pc = 0x3B568Cu;
        goto label_3b568c;
    }
    ctx->pc = 0x3B5684u;
    SET_GPR_U32(ctx, 31, 0x3B568Cu);
    ctx->pc = 0x3B5688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5684u;
            // 0x3b5688: 0x26a5006c  addiu       $a1, $s5, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C70u;
    if (runtime->hasFunction(0x132C70u)) {
        auto targetFn = runtime->lookupFunction(0x132C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B568Cu; }
        if (ctx->pc != 0x3B568Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C70_0x132c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B568Cu; }
        if (ctx->pc != 0x3B568Cu) { return; }
    }
    ctx->pc = 0x3B568Cu;
label_3b568c:
    // 0x3b568c: 0x26a407ec  addiu       $a0, $s5, 0x7EC
    ctx->pc = 0x3b568cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 2028));
label_3b5690:
    // 0x3b5690: 0x26a5006c  addiu       $a1, $s5, 0x6C
    ctx->pc = 0x3b5690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 108));
label_3b5694:
    // 0x3b5694: 0xc04cafc  jal         func_132BF0
label_3b5698:
    if (ctx->pc == 0x3B5698u) {
        ctx->pc = 0x3B5698u;
            // 0x3b5698: 0x27a601d0  addiu       $a2, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = 0x3B569Cu;
        goto label_3b569c;
    }
    ctx->pc = 0x3B5694u;
    SET_GPR_U32(ctx, 31, 0x3B569Cu);
    ctx->pc = 0x3B5698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5694u;
            // 0x3b5698: 0x27a601d0  addiu       $a2, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132BF0u;
    if (runtime->hasFunction(0x132BF0u)) {
        auto targetFn = runtime->lookupFunction(0x132BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B569Cu; }
        if (ctx->pc != 0x3B569Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132BF0_0x132bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B569Cu; }
        if (ctx->pc != 0x3B569Cu) { return; }
    }
    ctx->pc = 0x3B569Cu;
label_3b569c:
    // 0x3b569c: 0xc6a30054  lwc1        $f3, 0x54($s5)
    ctx->pc = 0x3b569cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3b56a0:
    // 0x3b56a0: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x3b56a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_3b56a4:
    // 0x3b56a4: 0xc6a2006c  lwc1        $f2, 0x6C($s5)
    ctx->pc = 0x3b56a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b56a8:
    // 0x3b56a8: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x3b56a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_3b56ac:
    // 0x3b56ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b56acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b56b0:
    // 0x3b56b0: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x3b56b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_3b56b4:
    // 0x3b56b4: 0xc6a10414  lwc1        $f1, 0x414($s5)
    ctx->pc = 0x3b56b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 1044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b56b8:
    // 0x3b56b8: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x3b56b8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_3b56bc:
    // 0x3b56bc: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x3b56bcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[0];
label_3b56c0:
    // 0x3b56c0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3b56c0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_3b56c4:
    // 0x3b56c4: 0xe6a10414  swc1        $f1, 0x414($s5)
    ctx->pc = 0x3b56c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 1044), bits); }
label_3b56c8:
    // 0x3b56c8: 0xc6a3005c  lwc1        $f3, 0x5C($s5)
    ctx->pc = 0x3b56c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3b56cc:
    // 0x3b56cc: 0xc6a20074  lwc1        $f2, 0x74($s5)
    ctx->pc = 0x3b56ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b56d0:
    // 0x3b56d0: 0xc6a1041c  lwc1        $f1, 0x41C($s5)
    ctx->pc = 0x3b56d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 1052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b56d4:
    // 0x3b56d4: 0x46190302  mul.s       $f12, $f0, $f25
    ctx->pc = 0x3b56d4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[25]);
label_3b56d8:
    // 0x3b56d8: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x3b56d8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_3b56dc:
    // 0x3b56dc: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x3b56dcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[0];
label_3b56e0:
    // 0x3b56e0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3b56e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_3b56e4:
    // 0x3b56e4: 0xe6a1041c  swc1        $f1, 0x41C($s5)
    ctx->pc = 0x3b56e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 1052), bits); }
label_3b56e8:
    // 0x3b56e8: 0xc6a30054  lwc1        $f3, 0x54($s5)
    ctx->pc = 0x3b56e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3b56ec:
    // 0x3b56ec: 0xc6a2006c  lwc1        $f2, 0x6C($s5)
    ctx->pc = 0x3b56ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b56f0:
    // 0x3b56f0: 0xc6a107d4  lwc1        $f1, 0x7D4($s5)
    ctx->pc = 0x3b56f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 2004)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b56f4:
    // 0x3b56f4: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x3b56f4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_3b56f8:
    // 0x3b56f8: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x3b56f8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[0];
label_3b56fc:
    // 0x3b56fc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3b56fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3b5700:
    // 0x3b5700: 0xe6a107d4  swc1        $f1, 0x7D4($s5)
    ctx->pc = 0x3b5700u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 2004), bits); }
label_3b5704:
    // 0x3b5704: 0xc6a3005c  lwc1        $f3, 0x5C($s5)
    ctx->pc = 0x3b5704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3b5708:
    // 0x3b5708: 0xc6a20074  lwc1        $f2, 0x74($s5)
    ctx->pc = 0x3b5708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b570c:
    // 0x3b570c: 0xc6a107dc  lwc1        $f1, 0x7DC($s5)
    ctx->pc = 0x3b570cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 2012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b5710:
    // 0x3b5710: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x3b5710u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_3b5714:
    // 0x3b5714: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x3b5714u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[0];
label_3b5718:
    // 0x3b5718: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3b5718u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3b571c:
    // 0x3b571c: 0xe6a107dc  swc1        $f1, 0x7DC($s5)
    ctx->pc = 0x3b571cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 2012), bits); }
label_3b5720:
    // 0x3b5720: 0xc6a3006c  lwc1        $f3, 0x6C($s5)
    ctx->pc = 0x3b5720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3b5724:
    // 0x3b5724: 0xc6a20054  lwc1        $f2, 0x54($s5)
    ctx->pc = 0x3b5724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b5728:
    // 0x3b5728: 0xc6a1042c  lwc1        $f1, 0x42C($s5)
    ctx->pc = 0x3b5728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 1068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b572c:
    // 0x3b572c: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x3b572cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_3b5730:
    // 0x3b5730: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x3b5730u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[0];
label_3b5734:
    // 0x3b5734: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3b5734u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3b5738:
    // 0x3b5738: 0xe6a1042c  swc1        $f1, 0x42C($s5)
    ctx->pc = 0x3b5738u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 1068), bits); }
label_3b573c:
    // 0x3b573c: 0xc6a30074  lwc1        $f3, 0x74($s5)
    ctx->pc = 0x3b573cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3b5740:
    // 0x3b5740: 0xc6a2005c  lwc1        $f2, 0x5C($s5)
    ctx->pc = 0x3b5740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b5744:
    // 0x3b5744: 0xc6a10434  lwc1        $f1, 0x434($s5)
    ctx->pc = 0x3b5744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 1076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b5748:
    // 0x3b5748: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x3b5748u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_3b574c:
    // 0x3b574c: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x3b574cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[0];
label_3b5750:
    // 0x3b5750: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3b5750u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3b5754:
    // 0x3b5754: 0xe6a10434  swc1        $f1, 0x434($s5)
    ctx->pc = 0x3b5754u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 1076), bits); }
label_3b5758:
    // 0x3b5758: 0xc6a3006c  lwc1        $f3, 0x6C($s5)
    ctx->pc = 0x3b5758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3b575c:
    // 0x3b575c: 0xc6a20054  lwc1        $f2, 0x54($s5)
    ctx->pc = 0x3b575cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b5760:
    // 0x3b5760: 0xc6a107ec  lwc1        $f1, 0x7EC($s5)
    ctx->pc = 0x3b5760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 2028)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b5764:
    // 0x3b5764: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x3b5764u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_3b5768:
    // 0x3b5768: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x3b5768u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[0];
label_3b576c:
    // 0x3b576c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3b576cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_3b5770:
    // 0x3b5770: 0xe6a107ec  swc1        $f1, 0x7EC($s5)
    ctx->pc = 0x3b5770u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 2028), bits); }
label_3b5774:
    // 0x3b5774: 0xc6a30074  lwc1        $f3, 0x74($s5)
    ctx->pc = 0x3b5774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3b5778:
    // 0x3b5778: 0xc6a2005c  lwc1        $f2, 0x5C($s5)
    ctx->pc = 0x3b5778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b577c:
    // 0x3b577c: 0xc6a107f4  lwc1        $f1, 0x7F4($s5)
    ctx->pc = 0x3b577cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 2036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b5780:
    // 0x3b5780: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x3b5780u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_3b5784:
    // 0x3b5784: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x3b5784u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
label_3b5788:
    // 0x3b5788: 0x0  nop
    ctx->pc = 0x3b5788u;
    // NOP
label_3b578c:
    // 0x3b578c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3b578cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3b5790:
    // 0x3b5790: 0xc04cc70  jal         func_1331C0
label_3b5794:
    if (ctx->pc == 0x3B5794u) {
        ctx->pc = 0x3B5794u;
            // 0x3b5794: 0xe6a007f4  swc1        $f0, 0x7F4($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 2036), bits); }
        ctx->pc = 0x3B5798u;
        goto label_3b5798;
    }
    ctx->pc = 0x3B5790u;
    SET_GPR_U32(ctx, 31, 0x3B5798u);
    ctx->pc = 0x3B5794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5790u;
            // 0x3b5794: 0xe6a007f4  swc1        $f0, 0x7F4($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 2036), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5798u; }
        if (ctx->pc != 0x3B5798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5798u; }
        if (ctx->pc != 0x3B5798u) { return; }
    }
    ctx->pc = 0x3B5798u;
label_3b5798:
    // 0x3b5798: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x3b5798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_3b579c:
    // 0x3b579c: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x3b579cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_3b57a0:
    // 0x3b57a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b57a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b57a4:
    // 0x3b57a4: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x3b57a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_3b57a8:
    // 0x3b57a8: 0xc04cc70  jal         func_1331C0
label_3b57ac:
    if (ctx->pc == 0x3B57ACu) {
        ctx->pc = 0x3B57ACu;
            // 0x3b57ac: 0x46180302  mul.s       $f12, $f0, $f24 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
        ctx->pc = 0x3B57B0u;
        goto label_3b57b0;
    }
    ctx->pc = 0x3B57A8u;
    SET_GPR_U32(ctx, 31, 0x3B57B0u);
    ctx->pc = 0x3B57ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B57A8u;
            // 0x3b57ac: 0x46180302  mul.s       $f12, $f0, $f24 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B57B0u; }
        if (ctx->pc != 0x3B57B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B57B0u; }
        if (ctx->pc != 0x3B57B0u) { return; }
    }
    ctx->pc = 0x3B57B0u;
label_3b57b0:
    // 0x3b57b0: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x3b57b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_3b57b4:
    // 0x3b57b4: 0x26a50c40  addiu       $a1, $s5, 0xC40
    ctx->pc = 0x3b57b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 3136));
label_3b57b8:
    // 0x3b57b8: 0xc04cc90  jal         func_133240
label_3b57bc:
    if (ctx->pc == 0x3B57BCu) {
        ctx->pc = 0x3B57BCu;
            // 0x3b57bc: 0x26a60c30  addiu       $a2, $s5, 0xC30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 3120));
        ctx->pc = 0x3B57C0u;
        goto label_3b57c0;
    }
    ctx->pc = 0x3B57B8u;
    SET_GPR_U32(ctx, 31, 0x3B57C0u);
    ctx->pc = 0x3B57BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B57B8u;
            // 0x3b57bc: 0x26a60c30  addiu       $a2, $s5, 0xC30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 3120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B57C0u; }
        if (ctx->pc != 0x3B57C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B57C0u; }
        if (ctx->pc != 0x3B57C0u) { return; }
    }
    ctx->pc = 0x3B57C0u;
label_3b57c0:
    // 0x3b57c0: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x3b57c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_3b57c4:
    // 0x3b57c4: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x3b57c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_3b57c8:
    // 0x3b57c8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3b57c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_3b57cc:
    // 0x3b57cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3b57ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3b57d0:
    // 0x3b57d0: 0xc04cc70  jal         func_1331C0
label_3b57d4:
    if (ctx->pc == 0x3B57D4u) {
        ctx->pc = 0x3B57D4u;
            // 0x3b57d4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B57D8u;
        goto label_3b57d8;
    }
    ctx->pc = 0x3B57D0u;
    SET_GPR_U32(ctx, 31, 0x3B57D8u);
    ctx->pc = 0x3B57D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B57D0u;
            // 0x3b57d4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B57D8u; }
        if (ctx->pc != 0x3B57D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B57D8u; }
        if (ctx->pc != 0x3B57D8u) { return; }
    }
    ctx->pc = 0x3B57D8u;
label_3b57d8:
    // 0x3b57d8: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x3b57d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_3b57dc:
    // 0x3b57dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b57dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b57e0:
    // 0x3b57e0: 0x0  nop
    ctx->pc = 0x3b57e0u;
    // NOP
label_3b57e4:
    // 0x3b57e4: 0x461a0036  c.le.s      $f0, $f26
    ctx->pc = 0x3b57e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[26])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3b57e8:
    // 0x3b57e8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_3b57ec:
    if (ctx->pc == 0x3B57ECu) {
        ctx->pc = 0x3B57ECu;
            // 0x3b57ec: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3B57F0u;
        goto label_3b57f0;
    }
    ctx->pc = 0x3B57E8u;
    {
        const bool branch_taken_0x3b57e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3B57ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B57E8u;
            // 0x3b57ec: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b57e8) {
            ctx->pc = 0x3B5800u;
            goto label_3b5800;
        }
    }
    ctx->pc = 0x3B57F0u;
label_3b57f0:
    // 0x3b57f0: 0x4600d024  .word       0x4600D024                   # cvt.w.s     $f0, $f26 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b57f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[26]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3b57f4:
    // 0x3b57f4: 0x44170000  mfc1        $s7, $f0
    ctx->pc = 0x3b57f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 23, bits); }
label_3b57f8:
    // 0x3b57f8: 0x10000008  b           . + 4 + (0x8 << 2)
label_3b57fc:
    if (ctx->pc == 0x3B57FCu) {
        ctx->pc = 0x3B57FCu;
            // 0x3b57fc: 0xafb70150  sw          $s7, 0x150($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 23));
        ctx->pc = 0x3B5800u;
        goto label_3b5800;
    }
    ctx->pc = 0x3B57F8u;
    {
        const bool branch_taken_0x3b57f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B57FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B57F8u;
            // 0x3b57fc: 0xafb70150  sw          $s7, 0x150($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b57f8) {
            ctx->pc = 0x3B581Cu;
            goto label_3b581c;
        }
    }
    ctx->pc = 0x3B5800u;
label_3b5800:
    // 0x3b5800: 0x4600d001  sub.s       $f0, $f26, $f0
    ctx->pc = 0x3b5800u;
    ctx->f[0] = FPU_SUB_S(ctx->f[26], ctx->f[0]);
label_3b5804:
    // 0x3b5804: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3b5804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_3b5808:
    // 0x3b5808: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3b5808u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3b580c:
    // 0x3b580c: 0x44170000  mfc1        $s7, $f0
    ctx->pc = 0x3b580cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 23, bits); }
label_3b5810:
    // 0x3b5810: 0x0  nop
    ctx->pc = 0x3b5810u;
    // NOP
label_3b5814:
    // 0x3b5814: 0x2e2b825  or          $s7, $s7, $v0
    ctx->pc = 0x3b5814u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 2));
label_3b5818:
    // 0x3b5818: 0xafb70150  sw          $s7, 0x150($sp)
    ctx->pc = 0x3b5818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 23));
label_3b581c:
    // 0x3b581c: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x3b581cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3b5820:
    // 0x3b5820: 0xafb70140  sw          $s7, 0x140($sp)
    ctx->pc = 0x3b5820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 23));
label_3b5824:
    // 0x3b5824: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x3b5824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_3b5828:
    // 0x3b5828: 0x24560002  addiu       $s6, $v0, 0x2
    ctx->pc = 0x3b5828u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_3b582c:
    // 0x3b582c: 0x6800004  bltz        $s4, . + 4 + (0x4 << 2)
label_3b5830:
    if (ctx->pc == 0x3B5830u) {
        ctx->pc = 0x3B5830u;
            // 0x3b5830: 0x26d00001  addiu       $s0, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->pc = 0x3B5834u;
        goto label_3b5834;
    }
    ctx->pc = 0x3B582Cu;
    {
        const bool branch_taken_0x3b582c = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x3B5830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B582Cu;
            // 0x3b5830: 0x26d00001  addiu       $s0, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b582c) {
            ctx->pc = 0x3B5840u;
            goto label_3b5840;
        }
    }
    ctx->pc = 0x3B5834u;
label_3b5834:
    // 0x3b5834: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x3b5834u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b5838:
    // 0x3b5838: 0x10000008  b           . + 4 + (0x8 << 2)
label_3b583c:
    if (ctx->pc == 0x3B583Cu) {
        ctx->pc = 0x3B583Cu;
            // 0x3b583c: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3B5840u;
        goto label_3b5840;
    }
    ctx->pc = 0x3B5838u;
    {
        const bool branch_taken_0x3b5838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B583Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5838u;
            // 0x3b583c: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5838) {
            ctx->pc = 0x3B585Cu;
            goto label_3b585c;
        }
    }
    ctx->pc = 0x3B5840u;
label_3b5840:
    // 0x3b5840: 0x141842  srl         $v1, $s4, 1
    ctx->pc = 0x3b5840u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
label_3b5844:
    // 0x3b5844: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x3b5844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
label_3b5848:
    // 0x3b5848: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b5848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3b584c:
    // 0x3b584c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b584cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b5850:
    // 0x3b5850: 0x0  nop
    ctx->pc = 0x3b5850u;
    // NOP
label_3b5854:
    // 0x3b5854: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x3b5854u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_3b5858:
    // 0x3b5858: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x3b5858u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_3b585c:
    // 0x3b585c: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x3b585cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_3b5860:
    // 0x3b5860: 0x26a50c30  addiu       $a1, $s5, 0xC30
    ctx->pc = 0x3b5860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 3120));
label_3b5864:
    // 0x3b5864: 0xc04cc7c  jal         func_1331F0
label_3b5868:
    if (ctx->pc == 0x3B5868u) {
        ctx->pc = 0x3B5868u;
            // 0x3b5868: 0x27a601f0  addiu       $a2, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->pc = 0x3B586Cu;
        goto label_3b586c;
    }
    ctx->pc = 0x3B5864u;
    SET_GPR_U32(ctx, 31, 0x3B586Cu);
    ctx->pc = 0x3B5868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5864u;
            // 0x3b5868: 0x27a601f0  addiu       $a2, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B586Cu; }
        if (ctx->pc != 0x3B586Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B586Cu; }
        if (ctx->pc != 0x3B586Cu) { return; }
    }
    ctx->pc = 0x3B586Cu;
label_3b586c:
    // 0x3b586c: 0x161040  sll         $v0, $s6, 1
    ctx->pc = 0x3b586cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
label_3b5870:
    // 0x3b5870: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x3b5870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_3b5874:
    // 0x3b5874: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x3b5874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_3b5878:
    // 0x3b5878: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3b5878u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3b587c:
    // 0x3b587c: 0x2a28821  addu        $s1, $s5, $v0
    ctx->pc = 0x3b587cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_3b5880:
    // 0x3b5880: 0x26320054  addiu       $s2, $s1, 0x54
    ctx->pc = 0x3b5880u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
label_3b5884:
    // 0x3b5884: 0xc04cb1c  jal         func_132C70
label_3b5888:
    if (ctx->pc == 0x3B5888u) {
        ctx->pc = 0x3B5888u;
            // 0x3b5888: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B588Cu;
        goto label_3b588c;
    }
    ctx->pc = 0x3B5884u;
    SET_GPR_U32(ctx, 31, 0x3B588Cu);
    ctx->pc = 0x3B5888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5884u;
            // 0x3b5888: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C70u;
    if (runtime->hasFunction(0x132C70u)) {
        auto targetFn = runtime->lookupFunction(0x132C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B588Cu; }
        if (ctx->pc != 0x3B588Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C70_0x132c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B588Cu; }
        if (ctx->pc != 0x3B588Cu) { return; }
    }
    ctx->pc = 0x3B588Cu;
label_3b588c:
    // 0x3b588c: 0x240f02d  daddu       $fp, $s2, $zero
    ctx->pc = 0x3b588cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b5890:
    // 0x3b5890: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b5890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b5894:
    // 0x3b5894: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3b5894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b5898:
    // 0x3b5898: 0x27a601b0  addiu       $a2, $sp, 0x1B0
    ctx->pc = 0x3b5898u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_3b589c:
    // 0x3b589c: 0xc04cb78  jal         func_132DE0
label_3b58a0:
    if (ctx->pc == 0x3B58A0u) {
        ctx->pc = 0x3B58A0u;
            // 0x3b58a0: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->pc = 0x3B58A4u;
        goto label_3b58a4;
    }
    ctx->pc = 0x3B589Cu;
    SET_GPR_U32(ctx, 31, 0x3B58A4u);
    ctx->pc = 0x3B58A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B589Cu;
            // 0x3b58a0: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132DE0u;
    if (runtime->hasFunction(0x132DE0u)) {
        auto targetFn = runtime->lookupFunction(0x132DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B58A4u; }
        if (ctx->pc != 0x3B58A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132DE0_0x132de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B58A4u; }
        if (ctx->pc != 0x3B58A4u) { return; }
    }
    ctx->pc = 0x3B58A4u;
label_3b58a4:
    // 0x3b58a4: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x3b58a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_3b58a8:
    // 0x3b58a8: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3b58a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b58ac:
    // 0x3b58ac: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3b58acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3b58b0:
    // 0x3b58b0: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x3b58b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_3b58b4:
    // 0x3b58b4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x3b58b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3b58b8:
    // 0x3b58b8: 0x2a28021  addu        $s0, $s5, $v0
    ctx->pc = 0x3b58b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_3b58bc:
    // 0x3b58bc: 0x26020054  addiu       $v0, $s0, 0x54
    ctx->pc = 0x3b58bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
label_3b58c0:
    // 0x3b58c0: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x3b58c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
label_3b58c4:
    // 0x3b58c4: 0xc04cafc  jal         func_132BF0
label_3b58c8:
    if (ctx->pc == 0x3B58C8u) {
        ctx->pc = 0x3B58C8u;
            // 0x3b58c8: 0x70402628  paddub      $a0, $v0, $zero (Delay Slot)
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
        ctx->pc = 0x3B58CCu;
        goto label_3b58cc;
    }
    ctx->pc = 0x3B58C4u;
    SET_GPR_U32(ctx, 31, 0x3B58CCu);
    ctx->pc = 0x3B58C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B58C4u;
            // 0x3b58c8: 0x70402628  paddub      $a0, $v0, $zero (Delay Slot)
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132BF0u;
    if (runtime->hasFunction(0x132BF0u)) {
        auto targetFn = runtime->lookupFunction(0x132BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B58CCu; }
        if (ctx->pc != 0x3B58CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132BF0_0x132bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B58CCu; }
        if (ctx->pc != 0x3B58CCu) { return; }
    }
    ctx->pc = 0x3B58CCu;
label_3b58cc:
    // 0x3b58cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b58ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b58d0:
    // 0x3b58d0: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3b58d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b58d4:
    // 0x3b58d4: 0xc04cb8c  jal         func_132E30
label_3b58d8:
    if (ctx->pc == 0x3B58D8u) {
        ctx->pc = 0x3B58D8u;
            // 0x3b58d8: 0x27a601e0  addiu       $a2, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->pc = 0x3B58DCu;
        goto label_3b58dc;
    }
    ctx->pc = 0x3B58D4u;
    SET_GPR_U32(ctx, 31, 0x3B58DCu);
    ctx->pc = 0x3B58D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B58D4u;
            // 0x3b58d8: 0x27a601e0  addiu       $a2, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132E30u;
    if (runtime->hasFunction(0x132E30u)) {
        auto targetFn = runtime->lookupFunction(0x132E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B58DCu; }
        if (ctx->pc != 0x3B58DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132E30_0x132e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B58DCu; }
        if (ctx->pc != 0x3B58DCu) { return; }
    }
    ctx->pc = 0x3B58DCu;
label_3b58dc:
    // 0x3b58dc: 0x26220414  addiu       $v0, $s1, 0x414
    ctx->pc = 0x3b58dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1044));
label_3b58e0:
    // 0x3b58e0: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3b58e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b58e4:
    // 0x3b58e4: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x3b58e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_3b58e8:
    // 0x3b58e8: 0xc04cb1c  jal         func_132C70
label_3b58ec:
    if (ctx->pc == 0x3B58ECu) {
        ctx->pc = 0x3B58ECu;
            // 0x3b58ec: 0x70402628  paddub      $a0, $v0, $zero (Delay Slot)
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
        ctx->pc = 0x3B58F0u;
        goto label_3b58f0;
    }
    ctx->pc = 0x3B58E8u;
    SET_GPR_U32(ctx, 31, 0x3B58F0u);
    ctx->pc = 0x3B58ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B58E8u;
            // 0x3b58ec: 0x70402628  paddub      $a0, $v0, $zero (Delay Slot)
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C70u;
    if (runtime->hasFunction(0x132C70u)) {
        auto targetFn = runtime->lookupFunction(0x132C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B58F0u; }
        if (ctx->pc != 0x3B58F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C70_0x132c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B58F0u; }
        if (ctx->pc != 0x3B58F0u) { return; }
    }
    ctx->pc = 0x3B58F0u;
label_3b58f0:
    // 0x3b58f0: 0x26020414  addiu       $v0, $s0, 0x414
    ctx->pc = 0x3b58f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1044));
label_3b58f4:
    // 0x3b58f4: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x3b58f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b58f8:
    // 0x3b58f8: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x3b58f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_3b58fc:
    // 0x3b58fc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3b58fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_3b5900:
    // 0x3b5900: 0xc04cafc  jal         func_132BF0
label_3b5904:
    if (ctx->pc == 0x3B5904u) {
        ctx->pc = 0x3B5904u;
            // 0x3b5904: 0x27a601c0  addiu       $a2, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->pc = 0x3B5908u;
        goto label_3b5908;
    }
    ctx->pc = 0x3B5900u;
    SET_GPR_U32(ctx, 31, 0x3B5908u);
    ctx->pc = 0x3B5904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5900u;
            // 0x3b5904: 0x27a601c0  addiu       $a2, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132BF0u;
    if (runtime->hasFunction(0x132BF0u)) {
        auto targetFn = runtime->lookupFunction(0x132BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5908u; }
        if (ctx->pc != 0x3B5908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132BF0_0x132bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5908u; }
        if (ctx->pc != 0x3B5908u) { return; }
    }
    ctx->pc = 0x3B5908u;
label_3b5908:
    // 0x3b5908: 0x26020054  addiu       $v0, $s0, 0x54
    ctx->pc = 0x3b5908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
label_3b590c:
    // 0x3b590c: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x3b590cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
label_3b5910:
    // 0x3b5910: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x3b5910u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_3b5914:
    // 0x3b5914: 0x262207d4  addiu       $v0, $s1, 0x7D4
    ctx->pc = 0x3b5914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2004));
label_3b5918:
    // 0x3b5918: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x3b5918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_3b591c:
    // 0x3b591c: 0xc04cb1c  jal         func_132C70
label_3b5920:
    if (ctx->pc == 0x3B5920u) {
        ctx->pc = 0x3B5920u;
            // 0x3b5920: 0x70402628  paddub      $a0, $v0, $zero (Delay Slot)
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
        ctx->pc = 0x3B5924u;
        goto label_3b5924;
    }
    ctx->pc = 0x3B591Cu;
    SET_GPR_U32(ctx, 31, 0x3B5924u);
    ctx->pc = 0x3B5920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B591Cu;
            // 0x3b5920: 0x70402628  paddub      $a0, $v0, $zero (Delay Slot)
        SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C70u;
    if (runtime->hasFunction(0x132C70u)) {
        auto targetFn = runtime->lookupFunction(0x132C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5924u; }
        if (ctx->pc != 0x3B5924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C70_0x132c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5924u; }
        if (ctx->pc != 0x3B5924u) { return; }
    }
    ctx->pc = 0x3B5924u;
label_3b5924:
    // 0x3b5924: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x3b5924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_3b5928:
    // 0x3b5928: 0x260207d4  addiu       $v0, $s0, 0x7D4
    ctx->pc = 0x3b5928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2004));
label_3b592c:
    // 0x3b592c: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x3b592cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_3b5930:
    // 0x3b5930: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x3b5930u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
label_3b5934:
    // 0x3b5934: 0xc04cafc  jal         func_132BF0
label_3b5938:
    if (ctx->pc == 0x3B5938u) {
        ctx->pc = 0x3B5938u;
            // 0x3b5938: 0x27a601d0  addiu       $a2, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = 0x3B593Cu;
        goto label_3b593c;
    }
    ctx->pc = 0x3B5934u;
    SET_GPR_U32(ctx, 31, 0x3B593Cu);
    ctx->pc = 0x3B5938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5934u;
            // 0x3b5938: 0x27a601d0  addiu       $a2, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132BF0u;
    if (runtime->hasFunction(0x132BF0u)) {
        auto targetFn = runtime->lookupFunction(0x132BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B593Cu; }
        if (ctx->pc != 0x3B593Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132BF0_0x132bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B593Cu; }
        if (ctx->pc != 0x3B593Cu) { return; }
    }
    ctx->pc = 0x3B593Cu;
label_3b593c:
    // 0x3b593c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x3b593cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_3b5940:
    // 0x3b5940: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x3b5940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_3b5944:
    // 0x3b5944: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b5944u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b5948:
    // 0x3b5948: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3b5948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b594c:
    // 0x3b594c: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x3b594cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_3b5950:
    // 0x3b5950: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x3b5950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3b5954:
    // 0x3b5954: 0x27a601b0  addiu       $a2, $sp, 0x1B0
    ctx->pc = 0x3b5954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_3b5958:
    // 0x3b5958: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3b5958u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3b595c:
    // 0x3b595c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x3b595cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b5960:
    // 0x3b5960: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x3b5960u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_3b5964:
    // 0x3b5964: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x3b5964u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_3b5968:
    // 0x3b5968: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x3b5968u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[0];
label_3b596c:
    // 0x3b596c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x3b596cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b5970:
    // 0x3b5970: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3b5970u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_3b5974:
    // 0x3b5974: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x3b5974u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_3b5978:
    // 0x3b5978: 0xc623005c  lwc1        $f3, 0x5C($s1)
    ctx->pc = 0x3b5978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3b597c:
    // 0x3b597c: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x3b597cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_3b5980:
    // 0x3b5980: 0xc602005c  lwc1        $f2, 0x5C($s0)
    ctx->pc = 0x3b5980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b5984:
    // 0x3b5984: 0xc621041c  lwc1        $f1, 0x41C($s1)
    ctx->pc = 0x3b5984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b5988:
    // 0x3b5988: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x3b5988u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_3b598c:
    // 0x3b598c: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x3b598cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[0];
label_3b5990:
    // 0x3b5990: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3b5990u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_3b5994:
    // 0x3b5994: 0xe621041c  swc1        $f1, 0x41C($s1)
    ctx->pc = 0x3b5994u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1052), bits); }
label_3b5998:
    // 0x3b5998: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x3b5998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b599c:
    // 0x3b599c: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x3b599cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3b59a0:
    // 0x3b59a0: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x3b59a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3b59a4:
    // 0x3b59a4: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x3b59a4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_3b59a8:
    // 0x3b59a8: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x3b59a8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[0];
label_3b59ac:
    // 0x3b59ac: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x3b59acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b59b0:
    // 0x3b59b0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3b59b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3b59b4:
    // 0x3b59b4: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x3b59b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_3b59b8:
    // 0x3b59b8: 0xc623005c  lwc1        $f3, 0x5C($s1)
    ctx->pc = 0x3b59b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3b59bc:
    // 0x3b59bc: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x3b59bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_3b59c0:
    // 0x3b59c0: 0xc602005c  lwc1        $f2, 0x5C($s0)
    ctx->pc = 0x3b59c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b59c4:
    // 0x3b59c4: 0xc62107dc  lwc1        $f1, 0x7DC($s1)
    ctx->pc = 0x3b59c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b59c8:
    // 0x3b59c8: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x3b59c8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_3b59cc:
    // 0x3b59cc: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x3b59ccu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[0];
label_3b59d0:
    // 0x3b59d0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3b59d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3b59d4:
    // 0x3b59d4: 0xe62107dc  swc1        $f1, 0x7DC($s1)
    ctx->pc = 0x3b59d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2012), bits); }
label_3b59d8:
    // 0x3b59d8: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x3b59d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3b59dc:
    // 0x3b59dc: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x3b59dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b59e0:
    // 0x3b59e0: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x3b59e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_3b59e4:
    // 0x3b59e4: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x3b59e4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_3b59e8:
    // 0x3b59e8: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x3b59e8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[0];
label_3b59ec:
    // 0x3b59ec: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x3b59ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b59f0:
    // 0x3b59f0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3b59f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3b59f4:
    // 0x3b59f4: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x3b59f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_3b59f8:
    // 0x3b59f8: 0xc603005c  lwc1        $f3, 0x5C($s0)
    ctx->pc = 0x3b59f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3b59fc:
    // 0x3b59fc: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x3b59fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_3b5a00:
    // 0x3b5a00: 0xc622005c  lwc1        $f2, 0x5C($s1)
    ctx->pc = 0x3b5a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b5a04:
    // 0x3b5a04: 0xc601041c  lwc1        $f1, 0x41C($s0)
    ctx->pc = 0x3b5a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b5a08:
    // 0x3b5a08: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x3b5a08u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_3b5a0c:
    // 0x3b5a0c: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x3b5a0cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[0];
label_3b5a10:
    // 0x3b5a10: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3b5a10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3b5a14:
    // 0x3b5a14: 0xe601041c  swc1        $f1, 0x41C($s0)
    ctx->pc = 0x3b5a14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1052), bits); }
label_3b5a18:
    // 0x3b5a18: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x3b5a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3b5a1c:
    // 0x3b5a1c: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x3b5a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b5a20:
    // 0x3b5a20: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x3b5a20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3b5a24:
    // 0x3b5a24: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x3b5a24u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_3b5a28:
    // 0x3b5a28: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x3b5a28u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[0];
label_3b5a2c:
    // 0x3b5a2c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x3b5a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b5a30:
    // 0x3b5a30: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3b5a30u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_3b5a34:
    // 0x3b5a34: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x3b5a34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_3b5a38:
    // 0x3b5a38: 0xc603005c  lwc1        $f3, 0x5C($s0)
    ctx->pc = 0x3b5a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3b5a3c:
    // 0x3b5a3c: 0xc622005c  lwc1        $f2, 0x5C($s1)
    ctx->pc = 0x3b5a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b5a40:
    // 0x3b5a40: 0xc60107dc  lwc1        $f1, 0x7DC($s0)
    ctx->pc = 0x3b5a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b5a44:
    // 0x3b5a44: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x3b5a44u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_3b5a48:
    // 0x3b5a48: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x3b5a48u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
label_3b5a4c:
    // 0x3b5a4c: 0x0  nop
    ctx->pc = 0x3b5a4cu;
    // NOP
label_3b5a50:
    // 0x3b5a50: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3b5a50u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3b5a54:
    // 0x3b5a54: 0xc04cc7c  jal         func_1331F0
label_3b5a58:
    if (ctx->pc == 0x3B5A58u) {
        ctx->pc = 0x3B5A58u;
            // 0x3b5a58: 0xe60007dc  swc1        $f0, 0x7DC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2012), bits); }
        ctx->pc = 0x3B5A5Cu;
        goto label_3b5a5c;
    }
    ctx->pc = 0x3B5A54u;
    SET_GPR_U32(ctx, 31, 0x3B5A5Cu);
    ctx->pc = 0x3B5A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5A54u;
            // 0x3b5a58: 0xe60007dc  swc1        $f0, 0x7DC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2012), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5A5Cu; }
        if (ctx->pc != 0x3B5A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5A5Cu; }
        if (ctx->pc != 0x3B5A5Cu) { return; }
    }
    ctx->pc = 0x3B5A5Cu;
label_3b5a5c:
    // 0x3b5a5c: 0x6c20004  bltzl       $s6, . + 4 + (0x4 << 2)
label_3b5a60:
    if (ctx->pc == 0x3B5A60u) {
        ctx->pc = 0x3B5A60u;
            // 0x3b5a60: 0x161842  srl         $v1, $s6, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 22), 1));
        ctx->pc = 0x3B5A64u;
        goto label_3b5a64;
    }
    ctx->pc = 0x3B5A5Cu;
    {
        const bool branch_taken_0x3b5a5c = (GPR_S32(ctx, 22) < 0);
        if (branch_taken_0x3b5a5c) {
            ctx->pc = 0x3B5A60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5A5Cu;
            // 0x3b5a60: 0x161842  srl         $v1, $s6, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B5A70u;
            goto label_3b5a70;
        }
    }
    ctx->pc = 0x3B5A64u;
label_3b5a64:
    // 0x3b5a64: 0x44960000  mtc1        $s6, $f0
    ctx->pc = 0x3b5a64u;
    { uint32_t bits = GPR_U32(ctx, 22); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b5a68:
    // 0x3b5a68: 0x10000007  b           . + 4 + (0x7 << 2)
label_3b5a6c:
    if (ctx->pc == 0x3B5A6Cu) {
        ctx->pc = 0x3B5A6Cu;
            // 0x3b5a6c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3B5A70u;
        goto label_3b5a70;
    }
    ctx->pc = 0x3B5A68u;
    {
        const bool branch_taken_0x3b5a68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5A68u;
            // 0x3b5a6c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5a68) {
            ctx->pc = 0x3B5A88u;
            goto label_3b5a88;
        }
    }
    ctx->pc = 0x3B5A70u;
label_3b5a70:
    // 0x3b5a70: 0x32c20001  andi        $v0, $s6, 0x1
    ctx->pc = 0x3b5a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
label_3b5a74:
    // 0x3b5a74: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3b5a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3b5a78:
    // 0x3b5a78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3b5a78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b5a7c:
    // 0x3b5a7c: 0x0  nop
    ctx->pc = 0x3b5a7cu;
    // NOP
label_3b5a80:
    // 0x3b5a80: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3b5a80u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3b5a84:
    // 0x3b5a84: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3b5a84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3b5a88:
    // 0x3b5a88: 0x3c0241a8  lui         $v0, 0x41A8
    ctx->pc = 0x3b5a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16808 << 16));
label_3b5a8c:
    // 0x3b5a8c: 0x3c034416  lui         $v1, 0x4416
    ctx->pc = 0x3b5a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17430 << 16));
label_3b5a90:
    // 0x3b5a90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b5a90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b5a94:
    // 0x3b5a94: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x3b5a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_3b5a98:
    // 0x3b5a98: 0x460008c1  sub.s       $f3, $f1, $f0
    ctx->pc = 0x3b5a98u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3b5a9c:
    // 0x3b5a9c: 0x3c0241e0  lui         $v0, 0x41E0
    ctx->pc = 0x3b5a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16864 << 16));
label_3b5aa0:
    // 0x3b5aa0: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x3b5aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
label_3b5aa4:
    // 0x3b5aa4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3b5aa4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3b5aa8:
    // 0x3b5aa8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3b5aa8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3b5aac:
    // 0x3b5aac: 0x0  nop
    ctx->pc = 0x3b5aacu;
    // NOP
label_3b5ab0:
    // 0x3b5ab0: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x3b5ab0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3b5ab4:
    // 0x3b5ab4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3b5ab4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3b5ab8:
    // 0x3b5ab8: 0x4603185d  msub.s      $f1, $f3, $f3
    ctx->pc = 0x3b5ab8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[3]));
label_3b5abc:
    // 0x3b5abc: 0x46000e83  div.s       $f26, $f1, $f0
    ctx->pc = 0x3b5abcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[26] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[26] = ctx->f[1] / ctx->f[0];
label_3b5ac0:
    // 0x3b5ac0: 0x0  nop
    ctx->pc = 0x3b5ac0u;
    // NOP
label_3b5ac4:
    // 0x3b5ac4: 0x0  nop
    ctx->pc = 0x3b5ac4u;
    // NOP
label_3b5ac8:
    // 0x3b5ac8: 0xc04cc70  jal         func_1331C0
label_3b5acc:
    if (ctx->pc == 0x3B5ACCu) {
        ctx->pc = 0x3B5ACCu;
            // 0x3b5acc: 0x461acb02  mul.s       $f12, $f25, $f26 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[25], ctx->f[26]);
        ctx->pc = 0x3B5AD0u;
        goto label_3b5ad0;
    }
    ctx->pc = 0x3B5AC8u;
    SET_GPR_U32(ctx, 31, 0x3B5AD0u);
    ctx->pc = 0x3B5ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5AC8u;
            // 0x3b5acc: 0x461acb02  mul.s       $f12, $f25, $f26 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[25], ctx->f[26]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5AD0u; }
        if (ctx->pc != 0x3B5AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5AD0u; }
        if (ctx->pc != 0x3B5AD0u) { return; }
    }
    ctx->pc = 0x3B5AD0u;
label_3b5ad0:
    // 0x3b5ad0: 0x461ac302  mul.s       $f12, $f24, $f26
    ctx->pc = 0x3b5ad0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[24], ctx->f[26]);
label_3b5ad4:
    // 0x3b5ad4: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x3b5ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_3b5ad8:
    // 0x3b5ad8: 0xc04cc70  jal         func_1331C0
label_3b5adc:
    if (ctx->pc == 0x3B5ADCu) {
        ctx->pc = 0x3B5ADCu;
            // 0x3b5adc: 0x27a501a0  addiu       $a1, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->pc = 0x3B5AE0u;
        goto label_3b5ae0;
    }
    ctx->pc = 0x3B5AD8u;
    SET_GPR_U32(ctx, 31, 0x3B5AE0u);
    ctx->pc = 0x3B5ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5AD8u;
            // 0x3b5adc: 0x27a501a0  addiu       $a1, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5AE0u; }
        if (ctx->pc != 0x3B5AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5AE0u; }
        if (ctx->pc != 0x3B5AE0u) { return; }
    }
    ctx->pc = 0x3B5AE0u;
label_3b5ae0:
    // 0x3b5ae0: 0x2e81000a  sltiu       $at, $s4, 0xA
    ctx->pc = 0x3b5ae0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_3b5ae4:
    // 0x3b5ae4: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_3b5ae8:
    if (ctx->pc == 0x3B5AE8u) {
        ctx->pc = 0x3B5AE8u;
            // 0x3b5ae8: 0x2684fff6  addiu       $a0, $s4, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967286));
        ctx->pc = 0x3B5AECu;
        goto label_3b5aec;
    }
    ctx->pc = 0x3B5AE4u;
    {
        const bool branch_taken_0x3b5ae4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5AE4u;
            // 0x3b5ae8: 0x2684fff6  addiu       $a0, $s4, -0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967286));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5ae4) {
            ctx->pc = 0x3B5B00u;
            goto label_3b5b00;
        }
    }
    ctx->pc = 0x3B5AECu;
label_3b5aec:
    // 0x3b5aec: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x3b5aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_3b5af0:
    // 0x3b5af0: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x3b5af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_3b5af4:
    // 0x3b5af4: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x3b5af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_3b5af8:
    // 0x3b5af8: 0x10000019  b           . + 4 + (0x19 << 2)
label_3b5afc:
    if (ctx->pc == 0x3B5AFCu) {
        ctx->pc = 0x3B5AFCu;
            // 0x3b5afc: 0xafa20160  sw          $v0, 0x160($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
        ctx->pc = 0x3B5B00u;
        goto label_3b5b00;
    }
    ctx->pc = 0x3B5AF8u;
    {
        const bool branch_taken_0x3b5af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5AF8u;
            // 0x3b5afc: 0xafa20160  sw          $v0, 0x160($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5af8) {
            ctx->pc = 0x3B5B60u;
            goto label_3b5b60;
        }
    }
    ctx->pc = 0x3B5B00u;
label_3b5b00:
    // 0x3b5b00: 0x2e81000b  sltiu       $at, $s4, 0xB
    ctx->pc = 0x3b5b00u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_3b5b04:
    // 0x3b5b04: 0x14200014  bnez        $at, . + 4 + (0x14 << 2)
label_3b5b08:
    if (ctx->pc == 0x3B5B08u) {
        ctx->pc = 0x3B5B0Cu;
        goto label_3b5b0c;
    }
    ctx->pc = 0x3B5B04u;
    {
        const bool branch_taken_0x3b5b04 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b5b04) {
            ctx->pc = 0x3B5B58u;
            goto label_3b5b58;
        }
    }
    ctx->pc = 0x3B5B0Cu;
label_3b5b0c:
    // 0x3b5b0c: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x3b5b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3b5b10:
    // 0x3b5b10: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x3b5b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_3b5b14:
    // 0x3b5b14: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_3b5b18:
    if (ctx->pc == 0x3B5B18u) {
        ctx->pc = 0x3B5B1Cu;
        goto label_3b5b1c;
    }
    ctx->pc = 0x3B5B14u;
    {
        const bool branch_taken_0x3b5b14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3b5b14) {
            ctx->pc = 0x3B5B30u;
            goto label_3b5b30;
        }
    }
    ctx->pc = 0x3B5B1Cu;
label_3b5b1c:
    // 0x3b5b1c: 0x2e41818  mult        $v1, $s7, $a0
    ctx->pc = 0x3b5b1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3b5b20:
    // 0x3b5b20: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x3b5b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_3b5b24:
    // 0x3b5b24: 0xafa00160  sw          $zero, 0x160($sp)
    ctx->pc = 0x3b5b24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 0));
label_3b5b28:
    // 0x3b5b28: 0x1000000d  b           . + 4 + (0xD << 2)
label_3b5b2c:
    if (ctx->pc == 0x3B5B2Cu) {
        ctx->pc = 0x3B5B2Cu;
            // 0x3b5b2c: 0x431823  subu        $v1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x3B5B30u;
        goto label_3b5b30;
    }
    ctx->pc = 0x3B5B28u;
    {
        const bool branch_taken_0x3b5b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5B28u;
            // 0x3b5b2c: 0x431823  subu        $v1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5b28) {
            ctx->pc = 0x3B5B60u;
            goto label_3b5b60;
        }
    }
    ctx->pc = 0x3B5B30u;
label_3b5b30:
    // 0x3b5b30: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x3b5b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3b5b34:
    // 0x3b5b34: 0x72e21818  mult1       $v1, $s7, $v0
    ctx->pc = 0x3b5b34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3b5b38:
    // 0x3b5b38: 0x2e42018  mult        $a0, $s7, $a0
    ctx->pc = 0x3b5b38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3b5b3c:
    // 0x3b5b3c: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x3b5b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_3b5b40:
    // 0x3b5b40: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3b5b40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3b5b44:
    // 0x3b5b44: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x3b5b44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
label_3b5b48:
    // 0x3b5b48: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x3b5b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_3b5b4c:
    // 0x3b5b4c: 0x10000004  b           . + 4 + (0x4 << 2)
label_3b5b50:
    if (ctx->pc == 0x3B5B50u) {
        ctx->pc = 0x3B5B50u;
            // 0x3b5b50: 0x441823  subu        $v1, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->pc = 0x3B5B54u;
        goto label_3b5b54;
    }
    ctx->pc = 0x3B5B4Cu;
    {
        const bool branch_taken_0x3b5b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5B4Cu;
            // 0x3b5b50: 0x441823  subu        $v1, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5b4c) {
            ctx->pc = 0x3B5B60u;
            goto label_3b5b60;
        }
    }
    ctx->pc = 0x3B5B54u;
label_3b5b54:
    // 0x3b5b54: 0x0  nop
    ctx->pc = 0x3b5b54u;
    // NOP
label_3b5b58:
    // 0x3b5b58: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x3b5b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_3b5b5c:
    // 0x3b5b5c: 0x0  nop
    ctx->pc = 0x3b5b5cu;
    // NOP
label_3b5b60:
    // 0x3b5b60: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3b5b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3b5b64:
    // 0x3b5b64: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x3b5b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_3b5b68:
    // 0x3b5b68: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3b5b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b5b6c:
    // 0x3b5b6c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3b5b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3b5b70:
    // 0x3b5b70: 0x26650054  addiu       $a1, $s3, 0x54
    ctx->pc = 0x3b5b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
label_3b5b74:
    // 0x3b5b74: 0xae620438  sw          $v0, 0x438($s3)
    ctx->pc = 0x3b5b74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1080), GPR_U32(ctx, 2));
label_3b5b78:
    // 0x3b5b78: 0xae620420  sw          $v0, 0x420($s3)
    ctx->pc = 0x3b5b78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1056), GPR_U32(ctx, 2));
label_3b5b7c:
    // 0x3b5b7c: 0xae6207f8  sw          $v0, 0x7F8($s3)
    ctx->pc = 0x3b5b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2040), GPR_U32(ctx, 2));
label_3b5b80:
    // 0x3b5b80: 0xae6207e0  sw          $v0, 0x7E0($s3)
    ctx->pc = 0x3b5b80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2016), GPR_U32(ctx, 2));
label_3b5b84:
    // 0x3b5b84: 0xae620078  sw          $v0, 0x78($s3)
    ctx->pc = 0x3b5b84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 2));
label_3b5b88:
    // 0x3b5b88: 0xae620060  sw          $v0, 0x60($s3)
    ctx->pc = 0x3b5b88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 2));
label_3b5b8c:
    // 0x3b5b8c: 0xae220438  sw          $v0, 0x438($s1)
    ctx->pc = 0x3b5b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1080), GPR_U32(ctx, 2));
label_3b5b90:
    // 0x3b5b90: 0xae220420  sw          $v0, 0x420($s1)
    ctx->pc = 0x3b5b90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1056), GPR_U32(ctx, 2));
label_3b5b94:
    // 0x3b5b94: 0xae2207f8  sw          $v0, 0x7F8($s1)
    ctx->pc = 0x3b5b94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2040), GPR_U32(ctx, 2));
label_3b5b98:
    // 0x3b5b98: 0xae2207e0  sw          $v0, 0x7E0($s1)
    ctx->pc = 0x3b5b98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2016), GPR_U32(ctx, 2));
label_3b5b9c:
    // 0x3b5b9c: 0xae220078  sw          $v0, 0x78($s1)
    ctx->pc = 0x3b5b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 2));
label_3b5ba0:
    // 0x3b5ba0: 0xc04cb34  jal         func_132CD0
label_3b5ba4:
    if (ctx->pc == 0x3B5BA4u) {
        ctx->pc = 0x3B5BA4u;
            // 0x3b5ba4: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
        ctx->pc = 0x3B5BA8u;
        goto label_3b5ba8;
    }
    ctx->pc = 0x3B5BA0u;
    SET_GPR_U32(ctx, 31, 0x3B5BA8u);
    ctx->pc = 0x3B5BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5BA0u;
            // 0x3b5ba4: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132CD0u;
    if (runtime->hasFunction(0x132CD0u)) {
        auto targetFn = runtime->lookupFunction(0x132CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5BA8u; }
        if (ctx->pc != 0x3B5BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132CD0_0x132cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5BA8u; }
        if (ctx->pc != 0x3B5BA8u) { return; }
    }
    ctx->pc = 0x3B5BA8u;
label_3b5ba8:
    // 0x3b5ba8: 0xc6a20ca4  lwc1        $f2, 0xCA4($s5)
    ctx->pc = 0x3b5ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3b5bac:
    // 0x3b5bac: 0x8fa20180  lw          $v0, 0x180($sp)
    ctx->pc = 0x3b5bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 384)));
label_3b5bb0:
    // 0x3b5bb0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3b5bb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3b5bb4:
    // 0x3b5bb4: 0x2e810004  sltiu       $at, $s4, 0x4
    ctx->pc = 0x3b5bb4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_3b5bb8:
    // 0x3b5bb8: 0x46150818  adda.s      $f1, $f21
    ctx->pc = 0x3b5bb8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
label_3b5bbc:
    // 0x3b5bbc: 0x4602b09c  madd.s      $f2, $f22, $f2
    ctx->pc = 0x3b5bbcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[2]));
label_3b5bc0:
    // 0x3b5bc0: 0xe662043c  swc1        $f2, 0x43C($s3)
    ctx->pc = 0x3b5bc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1084), bits); }
label_3b5bc4:
    // 0x3b5bc4: 0xe6620424  swc1        $f2, 0x424($s3)
    ctx->pc = 0x3b5bc4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1060), bits); }
label_3b5bc8:
    // 0x3b5bc8: 0xe66207fc  swc1        $f2, 0x7FC($s3)
    ctx->pc = 0x3b5bc8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2044), bits); }
label_3b5bcc:
    // 0x3b5bcc: 0xe66207e4  swc1        $f2, 0x7E4($s3)
    ctx->pc = 0x3b5bccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2020), bits); }
label_3b5bd0:
    // 0x3b5bd0: 0xe662007c  swc1        $f2, 0x7C($s3)
    ctx->pc = 0x3b5bd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 124), bits); }
label_3b5bd4:
    // 0x3b5bd4: 0x46150818  adda.s      $f1, $f21
    ctx->pc = 0x3b5bd4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
label_3b5bd8:
    // 0x3b5bd8: 0xe6620064  swc1        $f2, 0x64($s3)
    ctx->pc = 0x3b5bd8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 100), bits); }
label_3b5bdc:
    // 0x3b5bdc: 0xc6a10ca4  lwc1        $f1, 0xCA4($s5)
    ctx->pc = 0x3b5bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b5be0:
    // 0x3b5be0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3b5be0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3b5be4:
    // 0x3b5be4: 0x4601b05c  madd.s      $f1, $f22, $f1
    ctx->pc = 0x3b5be4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[1]));
label_3b5be8:
    // 0x3b5be8: 0xe6010424  swc1        $f1, 0x424($s0)
    ctx->pc = 0x3b5be8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1060), bits); }
label_3b5bec:
    // 0x3b5bec: 0xe6210424  swc1        $f1, 0x424($s1)
    ctx->pc = 0x3b5becu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1060), bits); }
label_3b5bf0:
    // 0x3b5bf0: 0xe60107e4  swc1        $f1, 0x7E4($s0)
    ctx->pc = 0x3b5bf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2020), bits); }
label_3b5bf4:
    // 0x3b5bf4: 0xe62107e4  swc1        $f1, 0x7E4($s1)
    ctx->pc = 0x3b5bf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2020), bits); }
label_3b5bf8:
    // 0x3b5bf8: 0xe6010064  swc1        $f1, 0x64($s0)
    ctx->pc = 0x3b5bf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 100), bits); }
label_3b5bfc:
    // 0x3b5bfc: 0xe6210064  swc1        $f1, 0x64($s1)
    ctx->pc = 0x3b5bfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 100), bits); }
label_3b5c00:
    // 0x3b5c00: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x3b5c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b5c04:
    // 0x3b5c04: 0xe6210428  swc1        $f1, 0x428($s1)
    ctx->pc = 0x3b5c04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1064), bits); }
label_3b5c08:
    // 0x3b5c08: 0xe6610428  swc1        $f1, 0x428($s3)
    ctx->pc = 0x3b5c08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1064), bits); }
label_3b5c0c:
    // 0x3b5c0c: 0xe62107e8  swc1        $f1, 0x7E8($s1)
    ctx->pc = 0x3b5c0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2024), bits); }
label_3b5c10:
    // 0x3b5c10: 0xe66107e8  swc1        $f1, 0x7E8($s3)
    ctx->pc = 0x3b5c10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 2024), bits); }
label_3b5c14:
    // 0x3b5c14: 0xe6210068  swc1        $f1, 0x68($s1)
    ctx->pc = 0x3b5c14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 104), bits); }
label_3b5c18:
    // 0x3b5c18: 0xe6610068  swc1        $f1, 0x68($s3)
    ctx->pc = 0x3b5c18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 104), bits); }
label_3b5c1c:
    // 0x3b5c1c: 0xae000428  sw          $zero, 0x428($s0)
    ctx->pc = 0x3b5c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1064), GPR_U32(ctx, 0));
label_3b5c20:
    // 0x3b5c20: 0xae600440  sw          $zero, 0x440($s3)
    ctx->pc = 0x3b5c20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1088), GPR_U32(ctx, 0));
label_3b5c24:
    // 0x3b5c24: 0xae0007e8  sw          $zero, 0x7E8($s0)
    ctx->pc = 0x3b5c24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2024), GPR_U32(ctx, 0));
label_3b5c28:
    // 0x3b5c28: 0xae600800  sw          $zero, 0x800($s3)
    ctx->pc = 0x3b5c28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2048), GPR_U32(ctx, 0));
label_3b5c2c:
    // 0x3b5c2c: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x3b5c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
label_3b5c30:
    // 0x3b5c30: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x3b5c30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_3b5c34:
    // 0x3b5c34: 0xc6a10ca4  lwc1        $f1, 0xCA4($s5)
    ctx->pc = 0x3b5c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b5c38:
    // 0x3b5c38: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3b5c38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3b5c3c:
    // 0x3b5c3c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_3b5c40:
    if (ctx->pc == 0x3B5C40u) {
        ctx->pc = 0x3B5C40u;
            // 0x3b5c40: 0xe6a00ca4  swc1        $f0, 0xCA4($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 3236), bits); }
        ctx->pc = 0x3B5C44u;
        goto label_3b5c44;
    }
    ctx->pc = 0x3B5C3Cu;
    {
        const bool branch_taken_0x3b5c3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5C3Cu;
            // 0x3b5c40: 0xe6a00ca4  swc1        $f0, 0xCA4($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 3236), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5c3c) {
            ctx->pc = 0x3B5C50u;
            goto label_3b5c50;
        }
    }
    ctx->pc = 0x3B5C44u;
label_3b5c44:
    // 0x3b5c44: 0x10000004  b           . + 4 + (0x4 << 2)
label_3b5c48:
    if (ctx->pc == 0x3B5C48u) {
        ctx->pc = 0x3B5C48u;
            // 0x3b5c48: 0x461ddec1  sub.s       $f27, $f27, $f29 (Delay Slot)
        ctx->f[27] = FPU_SUB_S(ctx->f[27], ctx->f[29]);
        ctx->pc = 0x3B5C4Cu;
        goto label_3b5c4c;
    }
    ctx->pc = 0x3B5C44u;
    {
        const bool branch_taken_0x3b5c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B5C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5C44u;
            // 0x3b5c48: 0x461ddec1  sub.s       $f27, $f27, $f29 (Delay Slot)
        ctx->f[27] = FPU_SUB_S(ctx->f[27], ctx->f[29]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5c44) {
            ctx->pc = 0x3B5C58u;
            goto label_3b5c58;
        }
    }
    ctx->pc = 0x3B5C4Cu;
label_3b5c4c:
    // 0x3b5c4c: 0x0  nop
    ctx->pc = 0x3b5c4cu;
    // NOP
label_3b5c50:
    // 0x3b5c50: 0x461cdec1  sub.s       $f27, $f27, $f28
    ctx->pc = 0x3b5c50u;
    ctx->f[27] = FPU_SUB_S(ctx->f[27], ctx->f[28]);
label_3b5c54:
    // 0x3b5c54: 0x0  nop
    ctx->pc = 0x3b5c54u;
    // NOP
label_3b5c58:
    // 0x3b5c58: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x3b5c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_3b5c5c:
    // 0x3b5c5c: 0x461bbdc0  add.s       $f23, $f23, $f27
    ctx->pc = 0x3b5c5cu;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[27]);
label_3b5c60:
    // 0x3b5c60: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3b5c60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3b5c64:
    // 0x3b5c64: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x3b5c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_3b5c68:
    // 0x3b5c68: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x3b5c68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
label_3b5c6c:
    // 0x3b5c6c: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x3b5c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_3b5c70:
    // 0x3b5c70: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x3b5c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_3b5c74:
    // 0x3b5c74: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x3b5c74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
label_3b5c78:
    // 0x3b5c78: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x3b5c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_3b5c7c:
    // 0x3b5c7c: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x3b5c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_3b5c80:
    // 0x3b5c80: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x3b5c80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
label_3b5c84:
    // 0x3b5c84: 0x2e820014  sltiu       $v0, $s4, 0x14
    ctx->pc = 0x3b5c84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
label_3b5c88:
    // 0x3b5c88: 0x1440fee6  bnez        $v0, . + 4 + (-0x11A << 2)
label_3b5c8c:
    if (ctx->pc == 0x3B5C8Cu) {
        ctx->pc = 0x3B5C8Cu;
            // 0x3b5c8c: 0x26730030  addiu       $s3, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->pc = 0x3B5C90u;
        goto label_3b5c90;
    }
    ctx->pc = 0x3B5C88u;
    {
        const bool branch_taken_0x3b5c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B5C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5C88u;
            // 0x3b5c8c: 0x26730030  addiu       $s3, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5c88) {
            ctx->pc = 0x3B5824u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3b5824;
        }
    }
    ctx->pc = 0x3B5C90u;
label_3b5c90:
    // 0x3b5c90: 0x82a50cb5  lb          $a1, 0xCB5($s5)
    ctx->pc = 0x3b5c90u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 3253)));
label_3b5c94:
    // 0x3b5c94: 0x28a10002  slti        $at, $a1, 0x2
    ctx->pc = 0x3b5c94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
label_3b5c98:
    // 0x3b5c98: 0x14200029  bnez        $at, . + 4 + (0x29 << 2)
label_3b5c9c:
    if (ctx->pc == 0x3B5C9Cu) {
        ctx->pc = 0x3B5CA0u;
        goto label_3b5ca0;
    }
    ctx->pc = 0x3B5C98u;
    {
        const bool branch_taken_0x3b5c98 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b5c98) {
            ctx->pc = 0x3B5D40u;
            goto label_3b5d40;
        }
    }
    ctx->pc = 0x3B5CA0u;
label_3b5ca0:
    // 0x3b5ca0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x3b5ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3b5ca4:
    // 0x3b5ca4: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x3b5ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_3b5ca8:
    // 0x3b5ca8: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x3b5ca8u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3b5cac:
    // 0x3b5cac: 0x26b20030  addiu       $s2, $s5, 0x30
    ctx->pc = 0x3b5cacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
label_3b5cb0:
    // 0x3b5cb0: 0x24170030  addiu       $s7, $zero, 0x30
    ctx->pc = 0x3b5cb0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3b5cb4:
    // 0x3b5cb4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x3b5cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3b5cb8:
    // 0x3b5cb8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3b5cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3b5cbc:
    // 0x3b5cbc: 0x2f0c0  sll         $fp, $v0, 3
    ctx->pc = 0x3b5cbcu;
    SET_GPR_S32(ctx, 30, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_3b5cc0:
    // 0x3b5cc0: 0x1812  mflo        $v1
    ctx->pc = 0x3b5cc0u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_3b5cc4:
    // 0x3b5cc4: 0x2be9821  addu        $s3, $s5, $fp
    ctx->pc = 0x3b5cc4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 30)));
label_3b5cc8:
    // 0x3b5cc8: 0x3c0b02d  daddu       $s6, $fp, $zero
    ctx->pc = 0x3b5cc8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3b5ccc:
    // 0x3b5ccc: 0x2474ffff  addiu       $s4, $v1, -0x1
    ctx->pc = 0x3b5cccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3b5cd0:
    // 0x3b5cd0: 0x26440054  addiu       $a0, $s2, 0x54
    ctx->pc = 0x3b5cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 84));
label_3b5cd4:
    // 0x3b5cd4: 0xc0ed7d8  jal         func_3B5F60
label_3b5cd8:
    if (ctx->pc == 0x3B5CD8u) {
        ctx->pc = 0x3B5CD8u;
            // 0x3b5cd8: 0x26650054  addiu       $a1, $s3, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
        ctx->pc = 0x3B5CDCu;
        goto label_3b5cdc;
    }
    ctx->pc = 0x3B5CD4u;
    SET_GPR_U32(ctx, 31, 0x3B5CDCu);
    ctx->pc = 0x3B5CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5CD4u;
            // 0x3b5cd8: 0x26650054  addiu       $a1, $s3, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B5F60u;
    if (runtime->hasFunction(0x3B5F60u)) {
        auto targetFn = runtime->lookupFunction(0x3B5F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5CDCu; }
        if (ctx->pc != 0x3B5CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B5F60_0x3b5f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5CDCu; }
        if (ctx->pc != 0x3B5CDCu) { return; }
    }
    ctx->pc = 0x3B5CDCu;
label_3b5cdc:
    // 0x3b5cdc: 0x26c30018  addiu       $v1, $s6, 0x18
    ctx->pc = 0x3b5cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 24));
label_3b5ce0:
    // 0x3b5ce0: 0x26e20018  addiu       $v0, $s7, 0x18
    ctx->pc = 0x3b5ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 24));
label_3b5ce4:
    // 0x3b5ce4: 0x2a38821  addu        $s1, $s5, $v1
    ctx->pc = 0x3b5ce4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_3b5ce8:
    // 0x3b5ce8: 0x2a28021  addu        $s0, $s5, $v0
    ctx->pc = 0x3b5ce8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_3b5cec:
    // 0x3b5cec: 0x26040054  addiu       $a0, $s0, 0x54
    ctx->pc = 0x3b5cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
label_3b5cf0:
    // 0x3b5cf0: 0xc0ed7d8  jal         func_3B5F60
label_3b5cf4:
    if (ctx->pc == 0x3B5CF4u) {
        ctx->pc = 0x3B5CF4u;
            // 0x3b5cf4: 0x26250054  addiu       $a1, $s1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
        ctx->pc = 0x3B5CF8u;
        goto label_3b5cf8;
    }
    ctx->pc = 0x3B5CF0u;
    SET_GPR_U32(ctx, 31, 0x3B5CF8u);
    ctx->pc = 0x3B5CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5CF0u;
            // 0x3b5cf4: 0x26250054  addiu       $a1, $s1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B5F60u;
    if (runtime->hasFunction(0x3B5F60u)) {
        auto targetFn = runtime->lookupFunction(0x3B5F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5CF8u; }
        if (ctx->pc != 0x3B5CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B5F60_0x3b5f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5CF8u; }
        if (ctx->pc != 0x3B5CF8u) { return; }
    }
    ctx->pc = 0x3B5CF8u;
label_3b5cf8:
    // 0x3b5cf8: 0x26440414  addiu       $a0, $s2, 0x414
    ctx->pc = 0x3b5cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1044));
label_3b5cfc:
    // 0x3b5cfc: 0xc0ed7d8  jal         func_3B5F60
label_3b5d00:
    if (ctx->pc == 0x3B5D00u) {
        ctx->pc = 0x3B5D00u;
            // 0x3b5d00: 0x26650414  addiu       $a1, $s3, 0x414 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1044));
        ctx->pc = 0x3B5D04u;
        goto label_3b5d04;
    }
    ctx->pc = 0x3B5CFCu;
    SET_GPR_U32(ctx, 31, 0x3B5D04u);
    ctx->pc = 0x3B5D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5CFCu;
            // 0x3b5d00: 0x26650414  addiu       $a1, $s3, 0x414 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1044));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B5F60u;
    if (runtime->hasFunction(0x3B5F60u)) {
        auto targetFn = runtime->lookupFunction(0x3B5F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5D04u; }
        if (ctx->pc != 0x3B5D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B5F60_0x3b5f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5D04u; }
        if (ctx->pc != 0x3B5D04u) { return; }
    }
    ctx->pc = 0x3B5D04u;
label_3b5d04:
    // 0x3b5d04: 0x26040414  addiu       $a0, $s0, 0x414
    ctx->pc = 0x3b5d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1044));
label_3b5d08:
    // 0x3b5d08: 0xc0ed7d8  jal         func_3B5F60
label_3b5d0c:
    if (ctx->pc == 0x3B5D0Cu) {
        ctx->pc = 0x3B5D0Cu;
            // 0x3b5d0c: 0x26250414  addiu       $a1, $s1, 0x414 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1044));
        ctx->pc = 0x3B5D10u;
        goto label_3b5d10;
    }
    ctx->pc = 0x3B5D08u;
    SET_GPR_U32(ctx, 31, 0x3B5D10u);
    ctx->pc = 0x3B5D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5D08u;
            // 0x3b5d0c: 0x26250414  addiu       $a1, $s1, 0x414 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1044));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B5F60u;
    if (runtime->hasFunction(0x3B5F60u)) {
        auto targetFn = runtime->lookupFunction(0x3B5F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5D10u; }
        if (ctx->pc != 0x3B5D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B5F60_0x3b5f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5D10u; }
        if (ctx->pc != 0x3B5D10u) { return; }
    }
    ctx->pc = 0x3B5D10u;
label_3b5d10:
    // 0x3b5d10: 0x264407d4  addiu       $a0, $s2, 0x7D4
    ctx->pc = 0x3b5d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2004));
label_3b5d14:
    // 0x3b5d14: 0xc0ed7d8  jal         func_3B5F60
label_3b5d18:
    if (ctx->pc == 0x3B5D18u) {
        ctx->pc = 0x3B5D18u;
            // 0x3b5d18: 0x266507d4  addiu       $a1, $s3, 0x7D4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 2004));
        ctx->pc = 0x3B5D1Cu;
        goto label_3b5d1c;
    }
    ctx->pc = 0x3B5D14u;
    SET_GPR_U32(ctx, 31, 0x3B5D1Cu);
    ctx->pc = 0x3B5D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5D14u;
            // 0x3b5d18: 0x266507d4  addiu       $a1, $s3, 0x7D4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 2004));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B5F60u;
    if (runtime->hasFunction(0x3B5F60u)) {
        auto targetFn = runtime->lookupFunction(0x3B5F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5D1Cu; }
        if (ctx->pc != 0x3B5D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B5F60_0x3b5f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5D1Cu; }
        if (ctx->pc != 0x3B5D1Cu) { return; }
    }
    ctx->pc = 0x3B5D1Cu;
label_3b5d1c:
    // 0x3b5d1c: 0x260407d4  addiu       $a0, $s0, 0x7D4
    ctx->pc = 0x3b5d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2004));
label_3b5d20:
    // 0x3b5d20: 0xc0ed7d8  jal         func_3B5F60
label_3b5d24:
    if (ctx->pc == 0x3B5D24u) {
        ctx->pc = 0x3B5D24u;
            // 0x3b5d24: 0x262507d4  addiu       $a1, $s1, 0x7D4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2004));
        ctx->pc = 0x3B5D28u;
        goto label_3b5d28;
    }
    ctx->pc = 0x3B5D20u;
    SET_GPR_U32(ctx, 31, 0x3B5D28u);
    ctx->pc = 0x3B5D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5D20u;
            // 0x3b5d24: 0x262507d4  addiu       $a1, $s1, 0x7D4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2004));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B5F60u;
    if (runtime->hasFunction(0x3B5F60u)) {
        auto targetFn = runtime->lookupFunction(0x3B5F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5D28u; }
        if (ctx->pc != 0x3B5D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B5F60_0x3b5f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5D28u; }
        if (ctx->pc != 0x3B5D28u) { return; }
    }
    ctx->pc = 0x3B5D28u;
label_3b5d28:
    // 0x3b5d28: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3b5d28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_3b5d2c:
    // 0x3b5d2c: 0x26520030  addiu       $s2, $s2, 0x30
    ctx->pc = 0x3b5d2cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_3b5d30:
    // 0x3b5d30: 0x26f70030  addiu       $s7, $s7, 0x30
    ctx->pc = 0x3b5d30u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 48));
label_3b5d34:
    // 0x3b5d34: 0x27e9821  addu        $s3, $s3, $fp
    ctx->pc = 0x3b5d34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 30)));
label_3b5d38:
    // 0x3b5d38: 0x1680ffe5  bnez        $s4, . + 4 + (-0x1B << 2)
label_3b5d3c:
    if (ctx->pc == 0x3B5D3Cu) {
        ctx->pc = 0x3B5D3Cu;
            // 0x3b5d3c: 0x2deb021  addu        $s6, $s6, $fp (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 30)));
        ctx->pc = 0x3B5D40u;
        goto label_3b5d40;
    }
    ctx->pc = 0x3B5D38u;
    {
        const bool branch_taken_0x3b5d38 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B5D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5D38u;
            // 0x3b5d3c: 0x2deb021  addu        $s6, $s6, $fp (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5d38) {
            ctx->pc = 0x3B5CD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3b5cd0;
        }
    }
    ctx->pc = 0x3B5D40u;
label_3b5d40:
    // 0x3b5d40: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3b5d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3b5d44:
    // 0x3b5d44: 0x8c44d130  lw          $a0, -0x2ED0($v0)
    ctx->pc = 0x3b5d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_3b5d48:
    // 0x3b5d48: 0x24110028  addiu       $s1, $zero, 0x28
    ctx->pc = 0x3b5d48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_3b5d4c:
    // 0x3b5d4c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3b5d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3b5d50:
    // 0x3b5d50: 0x8c850130  lw          $a1, 0x130($a0)
    ctx->pc = 0x3b5d50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_3b5d54:
    // 0x3b5d54: 0x8c43d120  lw          $v1, -0x2EE0($v0)
    ctx->pc = 0x3b5d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_3b5d58:
    // 0x3b5d58: 0x92a20cb3  lbu         $v0, 0xCB3($s5)
    ctx->pc = 0x3b5d58u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 3251)));
label_3b5d5c:
    // 0x3b5d5c: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x3b5d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_3b5d60:
    // 0x3b5d60: 0x29040  sll         $s2, $v0, 1
    ctx->pc = 0x3b5d60u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3b5d64:
    // 0x3b5d64: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x3b5d64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3b5d68:
    // 0x3b5d68: 0x82a30cb5  lb          $v1, 0xCB5($s5)
    ctx->pc = 0x3b5d68u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 3253)));
label_3b5d6c:
    // 0x3b5d6c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3b5d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3b5d70:
    // 0x3b5d70: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3b5d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3b5d74:
    // 0x3b5d74: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x3b5d74u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_3b5d78:
    // 0x3b5d78: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_3b5d7c:
    if (ctx->pc == 0x3B5D7Cu) {
        ctx->pc = 0x3B5D7Cu;
            // 0x3b5d7c: 0x24500010  addiu       $s0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x3B5D80u;
        goto label_3b5d80;
    }
    ctx->pc = 0x3B5D78u;
    {
        const bool branch_taken_0x3b5d78 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B5D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5D78u;
            // 0x3b5d7c: 0x24500010  addiu       $s0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b5d78) {
            ctx->pc = 0x3B5D90u;
            goto label_3b5d90;
        }
    }
    ctx->pc = 0x3B5D80u;
label_3b5d80:
    // 0x3b5d80: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x3b5d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3b5d84:
    // 0x3b5d84: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x3b5d84u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3b5d88:
    // 0x3b5d88: 0x1012  mflo        $v0
    ctx->pc = 0x3b5d88u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_3b5d8c:
    // 0x3b5d8c: 0x28840  sll         $s1, $v0, 1
    ctx->pc = 0x3b5d8cu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3b5d90:
    // 0x3b5d90: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3b5d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3b5d94:
    // 0x3b5d94: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x3b5d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_3b5d98:
    // 0x3b5d98: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3b5d98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3b5d9c:
    // 0x3b5d9c: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x3b5d9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_3b5da0:
    // 0x3b5da0: 0x320f809  jalr        $t9
label_3b5da4:
    if (ctx->pc == 0x3B5DA4u) {
        ctx->pc = 0x3B5DA8u;
        goto label_3b5da8;
    }
    ctx->pc = 0x3B5DA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3B5DA8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3B5DA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3B5DA8u; }
            if (ctx->pc != 0x3B5DA8u) { return; }
        }
        }
    }
    ctx->pc = 0x3B5DA8u;
label_3b5da8:
    // 0x3b5da8: 0x92a20cb4  lbu         $v0, 0xCB4($s5)
    ctx->pc = 0x3b5da8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 3252)));
label_3b5dac:
    // 0x3b5dac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3b5dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3b5db0:
    // 0x3b5db0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_3b5db4:
    if (ctx->pc == 0x3B5DB4u) {
        ctx->pc = 0x3B5DB4u;
            // 0x3b5db4: 0xc6ac0c20  lwc1        $f12, 0xC20($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x3B5DB8u;
        goto label_3b5db8;
    }
    ctx->pc = 0x3B5DB0u;
    {
        const bool branch_taken_0x3b5db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b5db0) {
            ctx->pc = 0x3B5DB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5DB0u;
            // 0x3b5db4: 0xc6ac0c20  lwc1        $f12, 0xC20($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B5DD4u;
            goto label_3b5dd4;
        }
    }
    ctx->pc = 0x3B5DB8u;
label_3b5db8:
    // 0x3b5db8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3b5db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3b5dbc:
    // 0x3b5dbc: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x3b5dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_3b5dc0:
    // 0x3b5dc0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3b5dc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3b5dc4:
    // 0x3b5dc4: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x3b5dc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_3b5dc8:
    // 0x3b5dc8: 0x320f809  jalr        $t9
label_3b5dcc:
    if (ctx->pc == 0x3B5DCCu) {
        ctx->pc = 0x3B5DCCu;
            // 0x3b5dcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B5DD0u;
        goto label_3b5dd0;
    }
    ctx->pc = 0x3B5DC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3B5DD0u);
        ctx->pc = 0x3B5DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5DC8u;
            // 0x3b5dcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3B5DD0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3B5DD0u; }
            if (ctx->pc != 0x3B5DD0u) { return; }
        }
        }
    }
    ctx->pc = 0x3B5DD0u;
label_3b5dd0:
    // 0x3b5dd0: 0xc6ac0c20  lwc1        $f12, 0xC20($s5)
    ctx->pc = 0x3b5dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3b5dd4:
    // 0x3b5dd4: 0xc6ad0c24  lwc1        $f13, 0xC24($s5)
    ctx->pc = 0x3b5dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3b5dd8:
    // 0x3b5dd8: 0xc6ae0c28  lwc1        $f14, 0xC28($s5)
    ctx->pc = 0x3b5dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_3b5ddc:
    // 0x3b5ddc: 0xc04f3fc  jal         func_13CFF0
label_3b5de0:
    if (ctx->pc == 0x3B5DE0u) {
        ctx->pc = 0x3B5DE0u;
            // 0x3b5de0: 0x27a402d0  addiu       $a0, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->pc = 0x3B5DE4u;
        goto label_3b5de4;
    }
    ctx->pc = 0x3B5DDCu;
    SET_GPR_U32(ctx, 31, 0x3B5DE4u);
    ctx->pc = 0x3B5DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5DDCu;
            // 0x3b5de0: 0x27a402d0  addiu       $a0, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFF0u;
    if (runtime->hasFunction(0x13CFF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5DE4u; }
        if (ctx->pc != 0x3B5DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFF0_0x13cff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5DE4u; }
        if (ctx->pc != 0x3B5DE4u) { return; }
    }
    ctx->pc = 0x3B5DE4u;
label_3b5de4:
    // 0x3b5de4: 0x27a402d0  addiu       $a0, $sp, 0x2D0
    ctx->pc = 0x3b5de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
label_3b5de8:
    // 0x3b5de8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3b5de8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b5dec:
    // 0x3b5dec: 0xc04cd60  jal         func_133580
label_3b5df0:
    if (ctx->pc == 0x3B5DF0u) {
        ctx->pc = 0x3B5DF0u;
            // 0x3b5df0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B5DF4u;
        goto label_3b5df4;
    }
    ctx->pc = 0x3B5DECu;
    SET_GPR_U32(ctx, 31, 0x3B5DF4u);
    ctx->pc = 0x3B5DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5DECu;
            // 0x3b5df0: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5DF4u; }
        if (ctx->pc != 0x3B5DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5DF4u; }
        if (ctx->pc != 0x3B5DF4u) { return; }
    }
    ctx->pc = 0x3B5DF4u;
label_3b5df4:
    // 0x3b5df4: 0xc0508b0  jal         func_1422C0
label_3b5df8:
    if (ctx->pc == 0x3B5DF8u) {
        ctx->pc = 0x3B5DF8u;
            // 0x3b5df8: 0x27a402d0  addiu       $a0, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->pc = 0x3B5DFCu;
        goto label_3b5dfc;
    }
    ctx->pc = 0x3B5DF4u;
    SET_GPR_U32(ctx, 31, 0x3B5DFCu);
    ctx->pc = 0x3B5DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5DF4u;
            // 0x3b5df8: 0x27a402d0  addiu       $a0, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1422C0u;
    if (runtime->hasFunction(0x1422C0u)) {
        auto targetFn = runtime->lookupFunction(0x1422C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5DFCu; }
        if (ctx->pc != 0x3B5DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001422C0_0x1422c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5DFCu; }
        if (ctx->pc != 0x3B5DFCu) { return; }
    }
    ctx->pc = 0x3B5DFCu;
label_3b5dfc:
    // 0x3b5dfc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3b5dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3b5e00:
    // 0x3b5e00: 0x8c44e3e8  lw          $a0, -0x1C18($v0)
    ctx->pc = 0x3b5e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960104)));
label_3b5e04:
    // 0x3b5e04: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3b5e04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3b5e08:
    // 0x3b5e08: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x3b5e08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_3b5e0c:
    // 0x3b5e0c: 0x320f809  jalr        $t9
label_3b5e10:
    if (ctx->pc == 0x3B5E10u) {
        ctx->pc = 0x3B5E14u;
        goto label_3b5e14;
    }
    ctx->pc = 0x3B5E0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3B5E14u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3B5E14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3B5E14u; }
            if (ctx->pc != 0x3B5E14u) { return; }
        }
        }
    }
    ctx->pc = 0x3B5E14u;
label_3b5e14:
    // 0x3b5e14: 0xc05068c  jal         func_141A30
label_3b5e18:
    if (ctx->pc == 0x3B5E18u) {
        ctx->pc = 0x3B5E18u;
            // 0x3b5e18: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B5E1Cu;
        goto label_3b5e1c;
    }
    ctx->pc = 0x3B5E14u;
    SET_GPR_U32(ctx, 31, 0x3B5E1Cu);
    ctx->pc = 0x3B5E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5E14u;
            // 0x3b5e18: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5E1Cu; }
        if (ctx->pc != 0x3B5E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A30_0x141a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5E1Cu; }
        if (ctx->pc != 0x3B5E1Cu) { return; }
    }
    ctx->pc = 0x3B5E1Cu;
label_3b5e1c:
    // 0x3b5e1c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3b5e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b5e20:
    // 0x3b5e20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b5e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b5e24:
    // 0x3b5e24: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b5e24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b5e28:
    // 0x3b5e28: 0xc0506b8  jal         func_141AE0
label_3b5e2c:
    if (ctx->pc == 0x3B5E2Cu) {
        ctx->pc = 0x3B5E2Cu;
            // 0x3b5e2c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B5E30u;
        goto label_3b5e30;
    }
    ctx->pc = 0x3B5E28u;
    SET_GPR_U32(ctx, 31, 0x3B5E30u);
    ctx->pc = 0x3B5E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5E28u;
            // 0x3b5e2c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AE0u;
    if (runtime->hasFunction(0x141AE0u)) {
        auto targetFn = runtime->lookupFunction(0x141AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5E30u; }
        if (ctx->pc != 0x3B5E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AE0_0x141ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5E30u; }
        if (ctx->pc != 0x3B5E30u) { return; }
    }
    ctx->pc = 0x3B5E30u;
label_3b5e30:
    // 0x3b5e30: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3b5e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3b5e34:
    // 0x3b5e34: 0x8c4464f8  lw          $a0, 0x64F8($v0)
    ctx->pc = 0x3b5e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25848)));
label_3b5e38:
    // 0x3b5e38: 0xc0506ac  jal         func_141AB0
label_3b5e3c:
    if (ctx->pc == 0x3B5E3Cu) {
        ctx->pc = 0x3B5E3Cu;
            // 0x3b5e3c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B5E40u;
        goto label_3b5e40;
    }
    ctx->pc = 0x3B5E38u;
    SET_GPR_U32(ctx, 31, 0x3B5E40u);
    ctx->pc = 0x3B5E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5E38u;
            // 0x3b5e3c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5E40u; }
        if (ctx->pc != 0x3B5E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5E40u; }
        if (ctx->pc != 0x3B5E40u) { return; }
    }
    ctx->pc = 0x3B5E40u;
label_3b5e40:
    // 0x3b5e40: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3b5e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3b5e44:
    // 0x3b5e44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3b5e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b5e48:
    // 0x3b5e48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b5e48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b5e4c:
    // 0x3b5e4c: 0xc0508b4  jal         func_1422D0
label_3b5e50:
    if (ctx->pc == 0x3B5E50u) {
        ctx->pc = 0x3B5E50u;
            // 0x3b5e50: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B5E54u;
        goto label_3b5e54;
    }
    ctx->pc = 0x3B5E4Cu;
    SET_GPR_U32(ctx, 31, 0x3B5E54u);
    ctx->pc = 0x3B5E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5E4Cu;
            // 0x3b5e50: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1422D0u;
    if (runtime->hasFunction(0x1422D0u)) {
        auto targetFn = runtime->lookupFunction(0x1422D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5E54u; }
        if (ctx->pc != 0x3B5E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001422D0_0x1422d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5E54u; }
        if (ctx->pc != 0x3B5E54u) { return; }
    }
    ctx->pc = 0x3B5E54u;
label_3b5e54:
    // 0x3b5e54: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3b5e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b5e58:
    // 0x3b5e58: 0x26a50054  addiu       $a1, $s5, 0x54
    ctx->pc = 0x3b5e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 84));
label_3b5e5c:
    // 0x3b5e5c: 0xc050a08  jal         func_142820
label_3b5e60:
    if (ctx->pc == 0x3B5E60u) {
        ctx->pc = 0x3B5E60u;
            // 0x3b5e60: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B5E64u;
        goto label_3b5e64;
    }
    ctx->pc = 0x3B5E5Cu;
    SET_GPR_U32(ctx, 31, 0x3B5E64u);
    ctx->pc = 0x3B5E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5E5Cu;
            // 0x3b5e60: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142820u;
    if (runtime->hasFunction(0x142820u)) {
        auto targetFn = runtime->lookupFunction(0x142820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5E64u; }
        if (ctx->pc != 0x3B5E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00142820_0x142820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5E64u; }
        if (ctx->pc != 0x3B5E64u) { return; }
    }
    ctx->pc = 0x3B5E64u;
label_3b5e64:
    // 0x3b5e64: 0xc050a88  jal         func_142A20
label_3b5e68:
    if (ctx->pc == 0x3B5E68u) {
        ctx->pc = 0x3B5E6Cu;
        goto label_3b5e6c;
    }
    ctx->pc = 0x3B5E64u;
    SET_GPR_U32(ctx, 31, 0x3B5E6Cu);
    ctx->pc = 0x142A20u;
    if (runtime->hasFunction(0x142A20u)) {
        auto targetFn = runtime->lookupFunction(0x142A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5E6Cu; }
        if (ctx->pc != 0x3B5E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00142A20_0x142a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5E6Cu; }
        if (ctx->pc != 0x3B5E6Cu) { return; }
    }
    ctx->pc = 0x3B5E6Cu;
label_3b5e6c:
    // 0x3b5e6c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3b5e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3b5e70:
    // 0x3b5e70: 0x8c4464f8  lw          $a0, 0x64F8($v0)
    ctx->pc = 0x3b5e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 25848)));
label_3b5e74:
    // 0x3b5e74: 0xc0506ac  jal         func_141AB0
label_3b5e78:
    if (ctx->pc == 0x3B5E78u) {
        ctx->pc = 0x3B5E78u;
            // 0x3b5e78: 0x26450001  addiu       $a1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->pc = 0x3B5E7Cu;
        goto label_3b5e7c;
    }
    ctx->pc = 0x3B5E74u;
    SET_GPR_U32(ctx, 31, 0x3B5E7Cu);
    ctx->pc = 0x3B5E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5E74u;
            // 0x3b5e78: 0x26450001  addiu       $a1, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5E7Cu; }
        if (ctx->pc != 0x3B5E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5E7Cu; }
        if (ctx->pc != 0x3B5E7Cu) { return; }
    }
    ctx->pc = 0x3B5E7Cu;
label_3b5e7c:
    // 0x3b5e7c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3b5e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3b5e80:
    // 0x3b5e80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3b5e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b5e84:
    // 0x3b5e84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3b5e84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b5e88:
    // 0x3b5e88: 0xc0508b4  jal         func_1422D0
label_3b5e8c:
    if (ctx->pc == 0x3B5E8Cu) {
        ctx->pc = 0x3B5E8Cu;
            // 0x3b5e8c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B5E90u;
        goto label_3b5e90;
    }
    ctx->pc = 0x3B5E88u;
    SET_GPR_U32(ctx, 31, 0x3B5E90u);
    ctx->pc = 0x3B5E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5E88u;
            // 0x3b5e8c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1422D0u;
    if (runtime->hasFunction(0x1422D0u)) {
        auto targetFn = runtime->lookupFunction(0x1422D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5E90u; }
        if (ctx->pc != 0x3B5E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001422D0_0x1422d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5E90u; }
        if (ctx->pc != 0x3B5E90u) { return; }
    }
    ctx->pc = 0x3B5E90u;
label_3b5e90:
    // 0x3b5e90: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3b5e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b5e94:
    // 0x3b5e94: 0x26a507d4  addiu       $a1, $s5, 0x7D4
    ctx->pc = 0x3b5e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 2004));
label_3b5e98:
    // 0x3b5e98: 0xc050a08  jal         func_142820
label_3b5e9c:
    if (ctx->pc == 0x3B5E9Cu) {
        ctx->pc = 0x3B5E9Cu;
            // 0x3b5e9c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B5EA0u;
        goto label_3b5ea0;
    }
    ctx->pc = 0x3B5E98u;
    SET_GPR_U32(ctx, 31, 0x3B5EA0u);
    ctx->pc = 0x3B5E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5E98u;
            // 0x3b5e9c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142820u;
    if (runtime->hasFunction(0x142820u)) {
        auto targetFn = runtime->lookupFunction(0x142820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5EA0u; }
        if (ctx->pc != 0x3B5EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00142820_0x142820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5EA0u; }
        if (ctx->pc != 0x3B5EA0u) { return; }
    }
    ctx->pc = 0x3B5EA0u;
label_3b5ea0:
    // 0x3b5ea0: 0x26a50414  addiu       $a1, $s5, 0x414
    ctx->pc = 0x3b5ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 1044));
label_3b5ea4:
    // 0x3b5ea4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3b5ea4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3b5ea8:
    // 0x3b5ea8: 0xc050a08  jal         func_142820
label_3b5eac:
    if (ctx->pc == 0x3B5EACu) {
        ctx->pc = 0x3B5EACu;
            // 0x3b5eac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3B5EB0u;
        goto label_3b5eb0;
    }
    ctx->pc = 0x3B5EA8u;
    SET_GPR_U32(ctx, 31, 0x3B5EB0u);
    ctx->pc = 0x3B5EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5EA8u;
            // 0x3b5eac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142820u;
    if (runtime->hasFunction(0x142820u)) {
        auto targetFn = runtime->lookupFunction(0x142820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5EB0u; }
        if (ctx->pc != 0x3B5EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00142820_0x142820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5EB0u; }
        if (ctx->pc != 0x3B5EB0u) { return; }
    }
    ctx->pc = 0x3B5EB0u;
label_3b5eb0:
    // 0x3b5eb0: 0xc050a88  jal         func_142A20
label_3b5eb4:
    if (ctx->pc == 0x3B5EB4u) {
        ctx->pc = 0x3B5EB8u;
        goto label_3b5eb8;
    }
    ctx->pc = 0x3B5EB0u;
    SET_GPR_U32(ctx, 31, 0x3B5EB8u);
    ctx->pc = 0x142A20u;
    if (runtime->hasFunction(0x142A20u)) {
        auto targetFn = runtime->lookupFunction(0x142A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5EB8u; }
        if (ctx->pc != 0x3B5EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00142A20_0x142a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5EB8u; }
        if (ctx->pc != 0x3B5EB8u) { return; }
    }
    ctx->pc = 0x3B5EB8u;
label_3b5eb8:
    // 0x3b5eb8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3b5eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3b5ebc:
    // 0x3b5ebc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3b5ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b5ec0:
    // 0x3b5ec0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b5ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b5ec4:
    // 0x3b5ec4: 0xc0506b8  jal         func_141AE0
label_3b5ec8:
    if (ctx->pc == 0x3B5EC8u) {
        ctx->pc = 0x3B5EC8u;
            // 0x3b5ec8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3B5ECCu;
        goto label_3b5ecc;
    }
    ctx->pc = 0x3B5EC4u;
    SET_GPR_U32(ctx, 31, 0x3B5ECCu);
    ctx->pc = 0x3B5EC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5EC4u;
            // 0x3b5ec8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AE0u;
    if (runtime->hasFunction(0x141AE0u)) {
        auto targetFn = runtime->lookupFunction(0x141AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5ECCu; }
        if (ctx->pc != 0x3B5ECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AE0_0x141ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5ECCu; }
        if (ctx->pc != 0x3B5ECCu) { return; }
    }
    ctx->pc = 0x3B5ECCu;
label_3b5ecc:
    // 0x3b5ecc: 0xc05068c  jal         func_141A30
label_3b5ed0:
    if (ctx->pc == 0x3B5ED0u) {
        ctx->pc = 0x3B5ED0u;
            // 0x3b5ed0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3B5ED4u;
        goto label_3b5ed4;
    }
    ctx->pc = 0x3B5ECCu;
    SET_GPR_U32(ctx, 31, 0x3B5ED4u);
    ctx->pc = 0x3B5ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5ECCu;
            // 0x3b5ed0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5ED4u; }
        if (ctx->pc != 0x3B5ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A30_0x141a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B5ED4u; }
        if (ctx->pc != 0x3B5ED4u) { return; }
    }
    ctx->pc = 0x3B5ED4u;
label_3b5ed4:
    // 0x3b5ed4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3b5ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3b5ed8:
    // 0x3b5ed8: 0x8c44e3e8  lw          $a0, -0x1C18($v0)
    ctx->pc = 0x3b5ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960104)));
label_3b5edc:
    // 0x3b5edc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3b5edcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3b5ee0:
    // 0x3b5ee0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3b5ee0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3b5ee4:
    // 0x3b5ee4: 0x320f809  jalr        $t9
label_3b5ee8:
    if (ctx->pc == 0x3B5EE8u) {
        ctx->pc = 0x3B5EECu;
        goto label_3b5eec;
    }
    ctx->pc = 0x3B5EE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3B5EECu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3B5EECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3B5EECu; }
            if (ctx->pc != 0x3B5EECu) { return; }
        }
        }
    }
    ctx->pc = 0x3B5EECu;
label_3b5eec:
    // 0x3b5eec: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3b5eecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3b5ef0:
    // 0x3b5ef0: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x3b5ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_3b5ef4:
    // 0x3b5ef4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3b5ef4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3b5ef8:
    // 0x3b5ef8: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x3b5ef8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_3b5efc:
    // 0x3b5efc: 0x320f809  jalr        $t9
label_3b5f00:
    if (ctx->pc == 0x3B5F00u) {
        ctx->pc = 0x3B5F04u;
        goto label_3b5f04;
    }
    ctx->pc = 0x3B5EFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3B5F04u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3B5F04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3B5F04u; }
            if (ctx->pc != 0x3B5F04u) { return; }
        }
        }
    }
    ctx->pc = 0x3B5F04u;
label_3b5f04:
    // 0x3b5f04: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x3b5f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_3b5f08:
    // 0x3b5f08: 0xc7bd0024  lwc1        $f29, 0x24($sp)
    ctx->pc = 0x3b5f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
label_3b5f0c:
    // 0x3b5f0c: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x3b5f0cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3b5f10:
    // 0x3b5f10: 0xc7bc0020  lwc1        $f28, 0x20($sp)
    ctx->pc = 0x3b5f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_3b5f14:
    // 0x3b5f14: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x3b5f14u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3b5f18:
    // 0x3b5f18: 0xc7bb001c  lwc1        $f27, 0x1C($sp)
    ctx->pc = 0x3b5f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_3b5f1c:
    // 0x3b5f1c: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x3b5f1cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b5f20:
    // 0x3b5f20: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x3b5f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_3b5f24:
    // 0x3b5f24: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x3b5f24u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b5f28:
    // 0x3b5f28: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x3b5f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_3b5f2c:
    // 0x3b5f2c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x3b5f2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3b5f30:
    // 0x3b5f30: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x3b5f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_3b5f34:
    // 0x3b5f34: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3b5f34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3b5f38:
    // 0x3b5f38: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x3b5f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3b5f3c:
    // 0x3b5f3c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3b5f3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3b5f40:
    // 0x3b5f40: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x3b5f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3b5f44:
    // 0x3b5f44: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3b5f44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3b5f48:
    // 0x3b5f48: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3b5f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3b5f4c:
    // 0x3b5f4c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3b5f4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3b5f50:
    // 0x3b5f50: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3b5f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3b5f54:
    // 0x3b5f54: 0x3e00008  jr          $ra
label_3b5f58:
    if (ctx->pc == 0x3B5F58u) {
        ctx->pc = 0x3B5F58u;
            // 0x3b5f58: 0x27bd0330  addiu       $sp, $sp, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
        ctx->pc = 0x3B5F5Cu;
        goto label_3b5f5c;
    }
    ctx->pc = 0x3B5F54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B5F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B5F54u;
            // 0x3b5f58: 0x27bd0330  addiu       $sp, $sp, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B5F5Cu;
label_3b5f5c:
    // 0x3b5f5c: 0x0  nop
    ctx->pc = 0x3b5f5cu;
    // NOP
}
