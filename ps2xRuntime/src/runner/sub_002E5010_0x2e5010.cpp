#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E5010
// Address: 0x2e5010 - 0x2e5bc0
void sub_002E5010_0x2e5010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E5010_0x2e5010");
#endif

    switch (ctx->pc) {
        case 0x2e5010u: goto label_2e5010;
        case 0x2e5014u: goto label_2e5014;
        case 0x2e5018u: goto label_2e5018;
        case 0x2e501cu: goto label_2e501c;
        case 0x2e5020u: goto label_2e5020;
        case 0x2e5024u: goto label_2e5024;
        case 0x2e5028u: goto label_2e5028;
        case 0x2e502cu: goto label_2e502c;
        case 0x2e5030u: goto label_2e5030;
        case 0x2e5034u: goto label_2e5034;
        case 0x2e5038u: goto label_2e5038;
        case 0x2e503cu: goto label_2e503c;
        case 0x2e5040u: goto label_2e5040;
        case 0x2e5044u: goto label_2e5044;
        case 0x2e5048u: goto label_2e5048;
        case 0x2e504cu: goto label_2e504c;
        case 0x2e5050u: goto label_2e5050;
        case 0x2e5054u: goto label_2e5054;
        case 0x2e5058u: goto label_2e5058;
        case 0x2e505cu: goto label_2e505c;
        case 0x2e5060u: goto label_2e5060;
        case 0x2e5064u: goto label_2e5064;
        case 0x2e5068u: goto label_2e5068;
        case 0x2e506cu: goto label_2e506c;
        case 0x2e5070u: goto label_2e5070;
        case 0x2e5074u: goto label_2e5074;
        case 0x2e5078u: goto label_2e5078;
        case 0x2e507cu: goto label_2e507c;
        case 0x2e5080u: goto label_2e5080;
        case 0x2e5084u: goto label_2e5084;
        case 0x2e5088u: goto label_2e5088;
        case 0x2e508cu: goto label_2e508c;
        case 0x2e5090u: goto label_2e5090;
        case 0x2e5094u: goto label_2e5094;
        case 0x2e5098u: goto label_2e5098;
        case 0x2e509cu: goto label_2e509c;
        case 0x2e50a0u: goto label_2e50a0;
        case 0x2e50a4u: goto label_2e50a4;
        case 0x2e50a8u: goto label_2e50a8;
        case 0x2e50acu: goto label_2e50ac;
        case 0x2e50b0u: goto label_2e50b0;
        case 0x2e50b4u: goto label_2e50b4;
        case 0x2e50b8u: goto label_2e50b8;
        case 0x2e50bcu: goto label_2e50bc;
        case 0x2e50c0u: goto label_2e50c0;
        case 0x2e50c4u: goto label_2e50c4;
        case 0x2e50c8u: goto label_2e50c8;
        case 0x2e50ccu: goto label_2e50cc;
        case 0x2e50d0u: goto label_2e50d0;
        case 0x2e50d4u: goto label_2e50d4;
        case 0x2e50d8u: goto label_2e50d8;
        case 0x2e50dcu: goto label_2e50dc;
        case 0x2e50e0u: goto label_2e50e0;
        case 0x2e50e4u: goto label_2e50e4;
        case 0x2e50e8u: goto label_2e50e8;
        case 0x2e50ecu: goto label_2e50ec;
        case 0x2e50f0u: goto label_2e50f0;
        case 0x2e50f4u: goto label_2e50f4;
        case 0x2e50f8u: goto label_2e50f8;
        case 0x2e50fcu: goto label_2e50fc;
        case 0x2e5100u: goto label_2e5100;
        case 0x2e5104u: goto label_2e5104;
        case 0x2e5108u: goto label_2e5108;
        case 0x2e510cu: goto label_2e510c;
        case 0x2e5110u: goto label_2e5110;
        case 0x2e5114u: goto label_2e5114;
        case 0x2e5118u: goto label_2e5118;
        case 0x2e511cu: goto label_2e511c;
        case 0x2e5120u: goto label_2e5120;
        case 0x2e5124u: goto label_2e5124;
        case 0x2e5128u: goto label_2e5128;
        case 0x2e512cu: goto label_2e512c;
        case 0x2e5130u: goto label_2e5130;
        case 0x2e5134u: goto label_2e5134;
        case 0x2e5138u: goto label_2e5138;
        case 0x2e513cu: goto label_2e513c;
        case 0x2e5140u: goto label_2e5140;
        case 0x2e5144u: goto label_2e5144;
        case 0x2e5148u: goto label_2e5148;
        case 0x2e514cu: goto label_2e514c;
        case 0x2e5150u: goto label_2e5150;
        case 0x2e5154u: goto label_2e5154;
        case 0x2e5158u: goto label_2e5158;
        case 0x2e515cu: goto label_2e515c;
        case 0x2e5160u: goto label_2e5160;
        case 0x2e5164u: goto label_2e5164;
        case 0x2e5168u: goto label_2e5168;
        case 0x2e516cu: goto label_2e516c;
        case 0x2e5170u: goto label_2e5170;
        case 0x2e5174u: goto label_2e5174;
        case 0x2e5178u: goto label_2e5178;
        case 0x2e517cu: goto label_2e517c;
        case 0x2e5180u: goto label_2e5180;
        case 0x2e5184u: goto label_2e5184;
        case 0x2e5188u: goto label_2e5188;
        case 0x2e518cu: goto label_2e518c;
        case 0x2e5190u: goto label_2e5190;
        case 0x2e5194u: goto label_2e5194;
        case 0x2e5198u: goto label_2e5198;
        case 0x2e519cu: goto label_2e519c;
        case 0x2e51a0u: goto label_2e51a0;
        case 0x2e51a4u: goto label_2e51a4;
        case 0x2e51a8u: goto label_2e51a8;
        case 0x2e51acu: goto label_2e51ac;
        case 0x2e51b0u: goto label_2e51b0;
        case 0x2e51b4u: goto label_2e51b4;
        case 0x2e51b8u: goto label_2e51b8;
        case 0x2e51bcu: goto label_2e51bc;
        case 0x2e51c0u: goto label_2e51c0;
        case 0x2e51c4u: goto label_2e51c4;
        case 0x2e51c8u: goto label_2e51c8;
        case 0x2e51ccu: goto label_2e51cc;
        case 0x2e51d0u: goto label_2e51d0;
        case 0x2e51d4u: goto label_2e51d4;
        case 0x2e51d8u: goto label_2e51d8;
        case 0x2e51dcu: goto label_2e51dc;
        case 0x2e51e0u: goto label_2e51e0;
        case 0x2e51e4u: goto label_2e51e4;
        case 0x2e51e8u: goto label_2e51e8;
        case 0x2e51ecu: goto label_2e51ec;
        case 0x2e51f0u: goto label_2e51f0;
        case 0x2e51f4u: goto label_2e51f4;
        case 0x2e51f8u: goto label_2e51f8;
        case 0x2e51fcu: goto label_2e51fc;
        case 0x2e5200u: goto label_2e5200;
        case 0x2e5204u: goto label_2e5204;
        case 0x2e5208u: goto label_2e5208;
        case 0x2e520cu: goto label_2e520c;
        case 0x2e5210u: goto label_2e5210;
        case 0x2e5214u: goto label_2e5214;
        case 0x2e5218u: goto label_2e5218;
        case 0x2e521cu: goto label_2e521c;
        case 0x2e5220u: goto label_2e5220;
        case 0x2e5224u: goto label_2e5224;
        case 0x2e5228u: goto label_2e5228;
        case 0x2e522cu: goto label_2e522c;
        case 0x2e5230u: goto label_2e5230;
        case 0x2e5234u: goto label_2e5234;
        case 0x2e5238u: goto label_2e5238;
        case 0x2e523cu: goto label_2e523c;
        case 0x2e5240u: goto label_2e5240;
        case 0x2e5244u: goto label_2e5244;
        case 0x2e5248u: goto label_2e5248;
        case 0x2e524cu: goto label_2e524c;
        case 0x2e5250u: goto label_2e5250;
        case 0x2e5254u: goto label_2e5254;
        case 0x2e5258u: goto label_2e5258;
        case 0x2e525cu: goto label_2e525c;
        case 0x2e5260u: goto label_2e5260;
        case 0x2e5264u: goto label_2e5264;
        case 0x2e5268u: goto label_2e5268;
        case 0x2e526cu: goto label_2e526c;
        case 0x2e5270u: goto label_2e5270;
        case 0x2e5274u: goto label_2e5274;
        case 0x2e5278u: goto label_2e5278;
        case 0x2e527cu: goto label_2e527c;
        case 0x2e5280u: goto label_2e5280;
        case 0x2e5284u: goto label_2e5284;
        case 0x2e5288u: goto label_2e5288;
        case 0x2e528cu: goto label_2e528c;
        case 0x2e5290u: goto label_2e5290;
        case 0x2e5294u: goto label_2e5294;
        case 0x2e5298u: goto label_2e5298;
        case 0x2e529cu: goto label_2e529c;
        case 0x2e52a0u: goto label_2e52a0;
        case 0x2e52a4u: goto label_2e52a4;
        case 0x2e52a8u: goto label_2e52a8;
        case 0x2e52acu: goto label_2e52ac;
        case 0x2e52b0u: goto label_2e52b0;
        case 0x2e52b4u: goto label_2e52b4;
        case 0x2e52b8u: goto label_2e52b8;
        case 0x2e52bcu: goto label_2e52bc;
        case 0x2e52c0u: goto label_2e52c0;
        case 0x2e52c4u: goto label_2e52c4;
        case 0x2e52c8u: goto label_2e52c8;
        case 0x2e52ccu: goto label_2e52cc;
        case 0x2e52d0u: goto label_2e52d0;
        case 0x2e52d4u: goto label_2e52d4;
        case 0x2e52d8u: goto label_2e52d8;
        case 0x2e52dcu: goto label_2e52dc;
        case 0x2e52e0u: goto label_2e52e0;
        case 0x2e52e4u: goto label_2e52e4;
        case 0x2e52e8u: goto label_2e52e8;
        case 0x2e52ecu: goto label_2e52ec;
        case 0x2e52f0u: goto label_2e52f0;
        case 0x2e52f4u: goto label_2e52f4;
        case 0x2e52f8u: goto label_2e52f8;
        case 0x2e52fcu: goto label_2e52fc;
        case 0x2e5300u: goto label_2e5300;
        case 0x2e5304u: goto label_2e5304;
        case 0x2e5308u: goto label_2e5308;
        case 0x2e530cu: goto label_2e530c;
        case 0x2e5310u: goto label_2e5310;
        case 0x2e5314u: goto label_2e5314;
        case 0x2e5318u: goto label_2e5318;
        case 0x2e531cu: goto label_2e531c;
        case 0x2e5320u: goto label_2e5320;
        case 0x2e5324u: goto label_2e5324;
        case 0x2e5328u: goto label_2e5328;
        case 0x2e532cu: goto label_2e532c;
        case 0x2e5330u: goto label_2e5330;
        case 0x2e5334u: goto label_2e5334;
        case 0x2e5338u: goto label_2e5338;
        case 0x2e533cu: goto label_2e533c;
        case 0x2e5340u: goto label_2e5340;
        case 0x2e5344u: goto label_2e5344;
        case 0x2e5348u: goto label_2e5348;
        case 0x2e534cu: goto label_2e534c;
        case 0x2e5350u: goto label_2e5350;
        case 0x2e5354u: goto label_2e5354;
        case 0x2e5358u: goto label_2e5358;
        case 0x2e535cu: goto label_2e535c;
        case 0x2e5360u: goto label_2e5360;
        case 0x2e5364u: goto label_2e5364;
        case 0x2e5368u: goto label_2e5368;
        case 0x2e536cu: goto label_2e536c;
        case 0x2e5370u: goto label_2e5370;
        case 0x2e5374u: goto label_2e5374;
        case 0x2e5378u: goto label_2e5378;
        case 0x2e537cu: goto label_2e537c;
        case 0x2e5380u: goto label_2e5380;
        case 0x2e5384u: goto label_2e5384;
        case 0x2e5388u: goto label_2e5388;
        case 0x2e538cu: goto label_2e538c;
        case 0x2e5390u: goto label_2e5390;
        case 0x2e5394u: goto label_2e5394;
        case 0x2e5398u: goto label_2e5398;
        case 0x2e539cu: goto label_2e539c;
        case 0x2e53a0u: goto label_2e53a0;
        case 0x2e53a4u: goto label_2e53a4;
        case 0x2e53a8u: goto label_2e53a8;
        case 0x2e53acu: goto label_2e53ac;
        case 0x2e53b0u: goto label_2e53b0;
        case 0x2e53b4u: goto label_2e53b4;
        case 0x2e53b8u: goto label_2e53b8;
        case 0x2e53bcu: goto label_2e53bc;
        case 0x2e53c0u: goto label_2e53c0;
        case 0x2e53c4u: goto label_2e53c4;
        case 0x2e53c8u: goto label_2e53c8;
        case 0x2e53ccu: goto label_2e53cc;
        case 0x2e53d0u: goto label_2e53d0;
        case 0x2e53d4u: goto label_2e53d4;
        case 0x2e53d8u: goto label_2e53d8;
        case 0x2e53dcu: goto label_2e53dc;
        case 0x2e53e0u: goto label_2e53e0;
        case 0x2e53e4u: goto label_2e53e4;
        case 0x2e53e8u: goto label_2e53e8;
        case 0x2e53ecu: goto label_2e53ec;
        case 0x2e53f0u: goto label_2e53f0;
        case 0x2e53f4u: goto label_2e53f4;
        case 0x2e53f8u: goto label_2e53f8;
        case 0x2e53fcu: goto label_2e53fc;
        case 0x2e5400u: goto label_2e5400;
        case 0x2e5404u: goto label_2e5404;
        case 0x2e5408u: goto label_2e5408;
        case 0x2e540cu: goto label_2e540c;
        case 0x2e5410u: goto label_2e5410;
        case 0x2e5414u: goto label_2e5414;
        case 0x2e5418u: goto label_2e5418;
        case 0x2e541cu: goto label_2e541c;
        case 0x2e5420u: goto label_2e5420;
        case 0x2e5424u: goto label_2e5424;
        case 0x2e5428u: goto label_2e5428;
        case 0x2e542cu: goto label_2e542c;
        case 0x2e5430u: goto label_2e5430;
        case 0x2e5434u: goto label_2e5434;
        case 0x2e5438u: goto label_2e5438;
        case 0x2e543cu: goto label_2e543c;
        case 0x2e5440u: goto label_2e5440;
        case 0x2e5444u: goto label_2e5444;
        case 0x2e5448u: goto label_2e5448;
        case 0x2e544cu: goto label_2e544c;
        case 0x2e5450u: goto label_2e5450;
        case 0x2e5454u: goto label_2e5454;
        case 0x2e5458u: goto label_2e5458;
        case 0x2e545cu: goto label_2e545c;
        case 0x2e5460u: goto label_2e5460;
        case 0x2e5464u: goto label_2e5464;
        case 0x2e5468u: goto label_2e5468;
        case 0x2e546cu: goto label_2e546c;
        case 0x2e5470u: goto label_2e5470;
        case 0x2e5474u: goto label_2e5474;
        case 0x2e5478u: goto label_2e5478;
        case 0x2e547cu: goto label_2e547c;
        case 0x2e5480u: goto label_2e5480;
        case 0x2e5484u: goto label_2e5484;
        case 0x2e5488u: goto label_2e5488;
        case 0x2e548cu: goto label_2e548c;
        case 0x2e5490u: goto label_2e5490;
        case 0x2e5494u: goto label_2e5494;
        case 0x2e5498u: goto label_2e5498;
        case 0x2e549cu: goto label_2e549c;
        case 0x2e54a0u: goto label_2e54a0;
        case 0x2e54a4u: goto label_2e54a4;
        case 0x2e54a8u: goto label_2e54a8;
        case 0x2e54acu: goto label_2e54ac;
        case 0x2e54b0u: goto label_2e54b0;
        case 0x2e54b4u: goto label_2e54b4;
        case 0x2e54b8u: goto label_2e54b8;
        case 0x2e54bcu: goto label_2e54bc;
        case 0x2e54c0u: goto label_2e54c0;
        case 0x2e54c4u: goto label_2e54c4;
        case 0x2e54c8u: goto label_2e54c8;
        case 0x2e54ccu: goto label_2e54cc;
        case 0x2e54d0u: goto label_2e54d0;
        case 0x2e54d4u: goto label_2e54d4;
        case 0x2e54d8u: goto label_2e54d8;
        case 0x2e54dcu: goto label_2e54dc;
        case 0x2e54e0u: goto label_2e54e0;
        case 0x2e54e4u: goto label_2e54e4;
        case 0x2e54e8u: goto label_2e54e8;
        case 0x2e54ecu: goto label_2e54ec;
        case 0x2e54f0u: goto label_2e54f0;
        case 0x2e54f4u: goto label_2e54f4;
        case 0x2e54f8u: goto label_2e54f8;
        case 0x2e54fcu: goto label_2e54fc;
        case 0x2e5500u: goto label_2e5500;
        case 0x2e5504u: goto label_2e5504;
        case 0x2e5508u: goto label_2e5508;
        case 0x2e550cu: goto label_2e550c;
        case 0x2e5510u: goto label_2e5510;
        case 0x2e5514u: goto label_2e5514;
        case 0x2e5518u: goto label_2e5518;
        case 0x2e551cu: goto label_2e551c;
        case 0x2e5520u: goto label_2e5520;
        case 0x2e5524u: goto label_2e5524;
        case 0x2e5528u: goto label_2e5528;
        case 0x2e552cu: goto label_2e552c;
        case 0x2e5530u: goto label_2e5530;
        case 0x2e5534u: goto label_2e5534;
        case 0x2e5538u: goto label_2e5538;
        case 0x2e553cu: goto label_2e553c;
        case 0x2e5540u: goto label_2e5540;
        case 0x2e5544u: goto label_2e5544;
        case 0x2e5548u: goto label_2e5548;
        case 0x2e554cu: goto label_2e554c;
        case 0x2e5550u: goto label_2e5550;
        case 0x2e5554u: goto label_2e5554;
        case 0x2e5558u: goto label_2e5558;
        case 0x2e555cu: goto label_2e555c;
        case 0x2e5560u: goto label_2e5560;
        case 0x2e5564u: goto label_2e5564;
        case 0x2e5568u: goto label_2e5568;
        case 0x2e556cu: goto label_2e556c;
        case 0x2e5570u: goto label_2e5570;
        case 0x2e5574u: goto label_2e5574;
        case 0x2e5578u: goto label_2e5578;
        case 0x2e557cu: goto label_2e557c;
        case 0x2e5580u: goto label_2e5580;
        case 0x2e5584u: goto label_2e5584;
        case 0x2e5588u: goto label_2e5588;
        case 0x2e558cu: goto label_2e558c;
        case 0x2e5590u: goto label_2e5590;
        case 0x2e5594u: goto label_2e5594;
        case 0x2e5598u: goto label_2e5598;
        case 0x2e559cu: goto label_2e559c;
        case 0x2e55a0u: goto label_2e55a0;
        case 0x2e55a4u: goto label_2e55a4;
        case 0x2e55a8u: goto label_2e55a8;
        case 0x2e55acu: goto label_2e55ac;
        case 0x2e55b0u: goto label_2e55b0;
        case 0x2e55b4u: goto label_2e55b4;
        case 0x2e55b8u: goto label_2e55b8;
        case 0x2e55bcu: goto label_2e55bc;
        case 0x2e55c0u: goto label_2e55c0;
        case 0x2e55c4u: goto label_2e55c4;
        case 0x2e55c8u: goto label_2e55c8;
        case 0x2e55ccu: goto label_2e55cc;
        case 0x2e55d0u: goto label_2e55d0;
        case 0x2e55d4u: goto label_2e55d4;
        case 0x2e55d8u: goto label_2e55d8;
        case 0x2e55dcu: goto label_2e55dc;
        case 0x2e55e0u: goto label_2e55e0;
        case 0x2e55e4u: goto label_2e55e4;
        case 0x2e55e8u: goto label_2e55e8;
        case 0x2e55ecu: goto label_2e55ec;
        case 0x2e55f0u: goto label_2e55f0;
        case 0x2e55f4u: goto label_2e55f4;
        case 0x2e55f8u: goto label_2e55f8;
        case 0x2e55fcu: goto label_2e55fc;
        case 0x2e5600u: goto label_2e5600;
        case 0x2e5604u: goto label_2e5604;
        case 0x2e5608u: goto label_2e5608;
        case 0x2e560cu: goto label_2e560c;
        case 0x2e5610u: goto label_2e5610;
        case 0x2e5614u: goto label_2e5614;
        case 0x2e5618u: goto label_2e5618;
        case 0x2e561cu: goto label_2e561c;
        case 0x2e5620u: goto label_2e5620;
        case 0x2e5624u: goto label_2e5624;
        case 0x2e5628u: goto label_2e5628;
        case 0x2e562cu: goto label_2e562c;
        case 0x2e5630u: goto label_2e5630;
        case 0x2e5634u: goto label_2e5634;
        case 0x2e5638u: goto label_2e5638;
        case 0x2e563cu: goto label_2e563c;
        case 0x2e5640u: goto label_2e5640;
        case 0x2e5644u: goto label_2e5644;
        case 0x2e5648u: goto label_2e5648;
        case 0x2e564cu: goto label_2e564c;
        case 0x2e5650u: goto label_2e5650;
        case 0x2e5654u: goto label_2e5654;
        case 0x2e5658u: goto label_2e5658;
        case 0x2e565cu: goto label_2e565c;
        case 0x2e5660u: goto label_2e5660;
        case 0x2e5664u: goto label_2e5664;
        case 0x2e5668u: goto label_2e5668;
        case 0x2e566cu: goto label_2e566c;
        case 0x2e5670u: goto label_2e5670;
        case 0x2e5674u: goto label_2e5674;
        case 0x2e5678u: goto label_2e5678;
        case 0x2e567cu: goto label_2e567c;
        case 0x2e5680u: goto label_2e5680;
        case 0x2e5684u: goto label_2e5684;
        case 0x2e5688u: goto label_2e5688;
        case 0x2e568cu: goto label_2e568c;
        case 0x2e5690u: goto label_2e5690;
        case 0x2e5694u: goto label_2e5694;
        case 0x2e5698u: goto label_2e5698;
        case 0x2e569cu: goto label_2e569c;
        case 0x2e56a0u: goto label_2e56a0;
        case 0x2e56a4u: goto label_2e56a4;
        case 0x2e56a8u: goto label_2e56a8;
        case 0x2e56acu: goto label_2e56ac;
        case 0x2e56b0u: goto label_2e56b0;
        case 0x2e56b4u: goto label_2e56b4;
        case 0x2e56b8u: goto label_2e56b8;
        case 0x2e56bcu: goto label_2e56bc;
        case 0x2e56c0u: goto label_2e56c0;
        case 0x2e56c4u: goto label_2e56c4;
        case 0x2e56c8u: goto label_2e56c8;
        case 0x2e56ccu: goto label_2e56cc;
        case 0x2e56d0u: goto label_2e56d0;
        case 0x2e56d4u: goto label_2e56d4;
        case 0x2e56d8u: goto label_2e56d8;
        case 0x2e56dcu: goto label_2e56dc;
        case 0x2e56e0u: goto label_2e56e0;
        case 0x2e56e4u: goto label_2e56e4;
        case 0x2e56e8u: goto label_2e56e8;
        case 0x2e56ecu: goto label_2e56ec;
        case 0x2e56f0u: goto label_2e56f0;
        case 0x2e56f4u: goto label_2e56f4;
        case 0x2e56f8u: goto label_2e56f8;
        case 0x2e56fcu: goto label_2e56fc;
        case 0x2e5700u: goto label_2e5700;
        case 0x2e5704u: goto label_2e5704;
        case 0x2e5708u: goto label_2e5708;
        case 0x2e570cu: goto label_2e570c;
        case 0x2e5710u: goto label_2e5710;
        case 0x2e5714u: goto label_2e5714;
        case 0x2e5718u: goto label_2e5718;
        case 0x2e571cu: goto label_2e571c;
        case 0x2e5720u: goto label_2e5720;
        case 0x2e5724u: goto label_2e5724;
        case 0x2e5728u: goto label_2e5728;
        case 0x2e572cu: goto label_2e572c;
        case 0x2e5730u: goto label_2e5730;
        case 0x2e5734u: goto label_2e5734;
        case 0x2e5738u: goto label_2e5738;
        case 0x2e573cu: goto label_2e573c;
        case 0x2e5740u: goto label_2e5740;
        case 0x2e5744u: goto label_2e5744;
        case 0x2e5748u: goto label_2e5748;
        case 0x2e574cu: goto label_2e574c;
        case 0x2e5750u: goto label_2e5750;
        case 0x2e5754u: goto label_2e5754;
        case 0x2e5758u: goto label_2e5758;
        case 0x2e575cu: goto label_2e575c;
        case 0x2e5760u: goto label_2e5760;
        case 0x2e5764u: goto label_2e5764;
        case 0x2e5768u: goto label_2e5768;
        case 0x2e576cu: goto label_2e576c;
        case 0x2e5770u: goto label_2e5770;
        case 0x2e5774u: goto label_2e5774;
        case 0x2e5778u: goto label_2e5778;
        case 0x2e577cu: goto label_2e577c;
        case 0x2e5780u: goto label_2e5780;
        case 0x2e5784u: goto label_2e5784;
        case 0x2e5788u: goto label_2e5788;
        case 0x2e578cu: goto label_2e578c;
        case 0x2e5790u: goto label_2e5790;
        case 0x2e5794u: goto label_2e5794;
        case 0x2e5798u: goto label_2e5798;
        case 0x2e579cu: goto label_2e579c;
        case 0x2e57a0u: goto label_2e57a0;
        case 0x2e57a4u: goto label_2e57a4;
        case 0x2e57a8u: goto label_2e57a8;
        case 0x2e57acu: goto label_2e57ac;
        case 0x2e57b0u: goto label_2e57b0;
        case 0x2e57b4u: goto label_2e57b4;
        case 0x2e57b8u: goto label_2e57b8;
        case 0x2e57bcu: goto label_2e57bc;
        case 0x2e57c0u: goto label_2e57c0;
        case 0x2e57c4u: goto label_2e57c4;
        case 0x2e57c8u: goto label_2e57c8;
        case 0x2e57ccu: goto label_2e57cc;
        case 0x2e57d0u: goto label_2e57d0;
        case 0x2e57d4u: goto label_2e57d4;
        case 0x2e57d8u: goto label_2e57d8;
        case 0x2e57dcu: goto label_2e57dc;
        case 0x2e57e0u: goto label_2e57e0;
        case 0x2e57e4u: goto label_2e57e4;
        case 0x2e57e8u: goto label_2e57e8;
        case 0x2e57ecu: goto label_2e57ec;
        case 0x2e57f0u: goto label_2e57f0;
        case 0x2e57f4u: goto label_2e57f4;
        case 0x2e57f8u: goto label_2e57f8;
        case 0x2e57fcu: goto label_2e57fc;
        case 0x2e5800u: goto label_2e5800;
        case 0x2e5804u: goto label_2e5804;
        case 0x2e5808u: goto label_2e5808;
        case 0x2e580cu: goto label_2e580c;
        case 0x2e5810u: goto label_2e5810;
        case 0x2e5814u: goto label_2e5814;
        case 0x2e5818u: goto label_2e5818;
        case 0x2e581cu: goto label_2e581c;
        case 0x2e5820u: goto label_2e5820;
        case 0x2e5824u: goto label_2e5824;
        case 0x2e5828u: goto label_2e5828;
        case 0x2e582cu: goto label_2e582c;
        case 0x2e5830u: goto label_2e5830;
        case 0x2e5834u: goto label_2e5834;
        case 0x2e5838u: goto label_2e5838;
        case 0x2e583cu: goto label_2e583c;
        case 0x2e5840u: goto label_2e5840;
        case 0x2e5844u: goto label_2e5844;
        case 0x2e5848u: goto label_2e5848;
        case 0x2e584cu: goto label_2e584c;
        case 0x2e5850u: goto label_2e5850;
        case 0x2e5854u: goto label_2e5854;
        case 0x2e5858u: goto label_2e5858;
        case 0x2e585cu: goto label_2e585c;
        case 0x2e5860u: goto label_2e5860;
        case 0x2e5864u: goto label_2e5864;
        case 0x2e5868u: goto label_2e5868;
        case 0x2e586cu: goto label_2e586c;
        case 0x2e5870u: goto label_2e5870;
        case 0x2e5874u: goto label_2e5874;
        case 0x2e5878u: goto label_2e5878;
        case 0x2e587cu: goto label_2e587c;
        case 0x2e5880u: goto label_2e5880;
        case 0x2e5884u: goto label_2e5884;
        case 0x2e5888u: goto label_2e5888;
        case 0x2e588cu: goto label_2e588c;
        case 0x2e5890u: goto label_2e5890;
        case 0x2e5894u: goto label_2e5894;
        case 0x2e5898u: goto label_2e5898;
        case 0x2e589cu: goto label_2e589c;
        case 0x2e58a0u: goto label_2e58a0;
        case 0x2e58a4u: goto label_2e58a4;
        case 0x2e58a8u: goto label_2e58a8;
        case 0x2e58acu: goto label_2e58ac;
        case 0x2e58b0u: goto label_2e58b0;
        case 0x2e58b4u: goto label_2e58b4;
        case 0x2e58b8u: goto label_2e58b8;
        case 0x2e58bcu: goto label_2e58bc;
        case 0x2e58c0u: goto label_2e58c0;
        case 0x2e58c4u: goto label_2e58c4;
        case 0x2e58c8u: goto label_2e58c8;
        case 0x2e58ccu: goto label_2e58cc;
        case 0x2e58d0u: goto label_2e58d0;
        case 0x2e58d4u: goto label_2e58d4;
        case 0x2e58d8u: goto label_2e58d8;
        case 0x2e58dcu: goto label_2e58dc;
        case 0x2e58e0u: goto label_2e58e0;
        case 0x2e58e4u: goto label_2e58e4;
        case 0x2e58e8u: goto label_2e58e8;
        case 0x2e58ecu: goto label_2e58ec;
        case 0x2e58f0u: goto label_2e58f0;
        case 0x2e58f4u: goto label_2e58f4;
        case 0x2e58f8u: goto label_2e58f8;
        case 0x2e58fcu: goto label_2e58fc;
        case 0x2e5900u: goto label_2e5900;
        case 0x2e5904u: goto label_2e5904;
        case 0x2e5908u: goto label_2e5908;
        case 0x2e590cu: goto label_2e590c;
        case 0x2e5910u: goto label_2e5910;
        case 0x2e5914u: goto label_2e5914;
        case 0x2e5918u: goto label_2e5918;
        case 0x2e591cu: goto label_2e591c;
        case 0x2e5920u: goto label_2e5920;
        case 0x2e5924u: goto label_2e5924;
        case 0x2e5928u: goto label_2e5928;
        case 0x2e592cu: goto label_2e592c;
        case 0x2e5930u: goto label_2e5930;
        case 0x2e5934u: goto label_2e5934;
        case 0x2e5938u: goto label_2e5938;
        case 0x2e593cu: goto label_2e593c;
        case 0x2e5940u: goto label_2e5940;
        case 0x2e5944u: goto label_2e5944;
        case 0x2e5948u: goto label_2e5948;
        case 0x2e594cu: goto label_2e594c;
        case 0x2e5950u: goto label_2e5950;
        case 0x2e5954u: goto label_2e5954;
        case 0x2e5958u: goto label_2e5958;
        case 0x2e595cu: goto label_2e595c;
        case 0x2e5960u: goto label_2e5960;
        case 0x2e5964u: goto label_2e5964;
        case 0x2e5968u: goto label_2e5968;
        case 0x2e596cu: goto label_2e596c;
        case 0x2e5970u: goto label_2e5970;
        case 0x2e5974u: goto label_2e5974;
        case 0x2e5978u: goto label_2e5978;
        case 0x2e597cu: goto label_2e597c;
        case 0x2e5980u: goto label_2e5980;
        case 0x2e5984u: goto label_2e5984;
        case 0x2e5988u: goto label_2e5988;
        case 0x2e598cu: goto label_2e598c;
        case 0x2e5990u: goto label_2e5990;
        case 0x2e5994u: goto label_2e5994;
        case 0x2e5998u: goto label_2e5998;
        case 0x2e599cu: goto label_2e599c;
        case 0x2e59a0u: goto label_2e59a0;
        case 0x2e59a4u: goto label_2e59a4;
        case 0x2e59a8u: goto label_2e59a8;
        case 0x2e59acu: goto label_2e59ac;
        case 0x2e59b0u: goto label_2e59b0;
        case 0x2e59b4u: goto label_2e59b4;
        case 0x2e59b8u: goto label_2e59b8;
        case 0x2e59bcu: goto label_2e59bc;
        case 0x2e59c0u: goto label_2e59c0;
        case 0x2e59c4u: goto label_2e59c4;
        case 0x2e59c8u: goto label_2e59c8;
        case 0x2e59ccu: goto label_2e59cc;
        case 0x2e59d0u: goto label_2e59d0;
        case 0x2e59d4u: goto label_2e59d4;
        case 0x2e59d8u: goto label_2e59d8;
        case 0x2e59dcu: goto label_2e59dc;
        case 0x2e59e0u: goto label_2e59e0;
        case 0x2e59e4u: goto label_2e59e4;
        case 0x2e59e8u: goto label_2e59e8;
        case 0x2e59ecu: goto label_2e59ec;
        case 0x2e59f0u: goto label_2e59f0;
        case 0x2e59f4u: goto label_2e59f4;
        case 0x2e59f8u: goto label_2e59f8;
        case 0x2e59fcu: goto label_2e59fc;
        case 0x2e5a00u: goto label_2e5a00;
        case 0x2e5a04u: goto label_2e5a04;
        case 0x2e5a08u: goto label_2e5a08;
        case 0x2e5a0cu: goto label_2e5a0c;
        case 0x2e5a10u: goto label_2e5a10;
        case 0x2e5a14u: goto label_2e5a14;
        case 0x2e5a18u: goto label_2e5a18;
        case 0x2e5a1cu: goto label_2e5a1c;
        case 0x2e5a20u: goto label_2e5a20;
        case 0x2e5a24u: goto label_2e5a24;
        case 0x2e5a28u: goto label_2e5a28;
        case 0x2e5a2cu: goto label_2e5a2c;
        case 0x2e5a30u: goto label_2e5a30;
        case 0x2e5a34u: goto label_2e5a34;
        case 0x2e5a38u: goto label_2e5a38;
        case 0x2e5a3cu: goto label_2e5a3c;
        case 0x2e5a40u: goto label_2e5a40;
        case 0x2e5a44u: goto label_2e5a44;
        case 0x2e5a48u: goto label_2e5a48;
        case 0x2e5a4cu: goto label_2e5a4c;
        case 0x2e5a50u: goto label_2e5a50;
        case 0x2e5a54u: goto label_2e5a54;
        case 0x2e5a58u: goto label_2e5a58;
        case 0x2e5a5cu: goto label_2e5a5c;
        case 0x2e5a60u: goto label_2e5a60;
        case 0x2e5a64u: goto label_2e5a64;
        case 0x2e5a68u: goto label_2e5a68;
        case 0x2e5a6cu: goto label_2e5a6c;
        case 0x2e5a70u: goto label_2e5a70;
        case 0x2e5a74u: goto label_2e5a74;
        case 0x2e5a78u: goto label_2e5a78;
        case 0x2e5a7cu: goto label_2e5a7c;
        case 0x2e5a80u: goto label_2e5a80;
        case 0x2e5a84u: goto label_2e5a84;
        case 0x2e5a88u: goto label_2e5a88;
        case 0x2e5a8cu: goto label_2e5a8c;
        case 0x2e5a90u: goto label_2e5a90;
        case 0x2e5a94u: goto label_2e5a94;
        case 0x2e5a98u: goto label_2e5a98;
        case 0x2e5a9cu: goto label_2e5a9c;
        case 0x2e5aa0u: goto label_2e5aa0;
        case 0x2e5aa4u: goto label_2e5aa4;
        case 0x2e5aa8u: goto label_2e5aa8;
        case 0x2e5aacu: goto label_2e5aac;
        case 0x2e5ab0u: goto label_2e5ab0;
        case 0x2e5ab4u: goto label_2e5ab4;
        case 0x2e5ab8u: goto label_2e5ab8;
        case 0x2e5abcu: goto label_2e5abc;
        case 0x2e5ac0u: goto label_2e5ac0;
        case 0x2e5ac4u: goto label_2e5ac4;
        case 0x2e5ac8u: goto label_2e5ac8;
        case 0x2e5accu: goto label_2e5acc;
        case 0x2e5ad0u: goto label_2e5ad0;
        case 0x2e5ad4u: goto label_2e5ad4;
        case 0x2e5ad8u: goto label_2e5ad8;
        case 0x2e5adcu: goto label_2e5adc;
        case 0x2e5ae0u: goto label_2e5ae0;
        case 0x2e5ae4u: goto label_2e5ae4;
        case 0x2e5ae8u: goto label_2e5ae8;
        case 0x2e5aecu: goto label_2e5aec;
        case 0x2e5af0u: goto label_2e5af0;
        case 0x2e5af4u: goto label_2e5af4;
        case 0x2e5af8u: goto label_2e5af8;
        case 0x2e5afcu: goto label_2e5afc;
        case 0x2e5b00u: goto label_2e5b00;
        case 0x2e5b04u: goto label_2e5b04;
        case 0x2e5b08u: goto label_2e5b08;
        case 0x2e5b0cu: goto label_2e5b0c;
        case 0x2e5b10u: goto label_2e5b10;
        case 0x2e5b14u: goto label_2e5b14;
        case 0x2e5b18u: goto label_2e5b18;
        case 0x2e5b1cu: goto label_2e5b1c;
        case 0x2e5b20u: goto label_2e5b20;
        case 0x2e5b24u: goto label_2e5b24;
        case 0x2e5b28u: goto label_2e5b28;
        case 0x2e5b2cu: goto label_2e5b2c;
        case 0x2e5b30u: goto label_2e5b30;
        case 0x2e5b34u: goto label_2e5b34;
        case 0x2e5b38u: goto label_2e5b38;
        case 0x2e5b3cu: goto label_2e5b3c;
        case 0x2e5b40u: goto label_2e5b40;
        case 0x2e5b44u: goto label_2e5b44;
        case 0x2e5b48u: goto label_2e5b48;
        case 0x2e5b4cu: goto label_2e5b4c;
        case 0x2e5b50u: goto label_2e5b50;
        case 0x2e5b54u: goto label_2e5b54;
        case 0x2e5b58u: goto label_2e5b58;
        case 0x2e5b5cu: goto label_2e5b5c;
        case 0x2e5b60u: goto label_2e5b60;
        case 0x2e5b64u: goto label_2e5b64;
        case 0x2e5b68u: goto label_2e5b68;
        case 0x2e5b6cu: goto label_2e5b6c;
        case 0x2e5b70u: goto label_2e5b70;
        case 0x2e5b74u: goto label_2e5b74;
        case 0x2e5b78u: goto label_2e5b78;
        case 0x2e5b7cu: goto label_2e5b7c;
        case 0x2e5b80u: goto label_2e5b80;
        case 0x2e5b84u: goto label_2e5b84;
        case 0x2e5b88u: goto label_2e5b88;
        case 0x2e5b8cu: goto label_2e5b8c;
        case 0x2e5b90u: goto label_2e5b90;
        case 0x2e5b94u: goto label_2e5b94;
        case 0x2e5b98u: goto label_2e5b98;
        case 0x2e5b9cu: goto label_2e5b9c;
        case 0x2e5ba0u: goto label_2e5ba0;
        case 0x2e5ba4u: goto label_2e5ba4;
        case 0x2e5ba8u: goto label_2e5ba8;
        case 0x2e5bacu: goto label_2e5bac;
        case 0x2e5bb0u: goto label_2e5bb0;
        case 0x2e5bb4u: goto label_2e5bb4;
        case 0x2e5bb8u: goto label_2e5bb8;
        case 0x2e5bbcu: goto label_2e5bbc;
        default: break;
    }

    ctx->pc = 0x2e5010u;

label_2e5010:
    // 0x2e5010: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2e5010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2e5014:
    // 0x2e5014: 0x30c20008  andi        $v0, $a2, 0x8
    ctx->pc = 0x2e5014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
label_2e5018:
    // 0x2e5018: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2e5018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2e501c:
    // 0x2e501c: 0x30c30007  andi        $v1, $a2, 0x7
    ctx->pc = 0x2e501cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
label_2e5020:
    // 0x2e5020: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2e5020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_2e5024:
    // 0x2e5024: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2e5024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2e5028:
    // 0x2e5028: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2e5028u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e502c:
    // 0x2e502c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2e502cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2e5030:
    // 0x2e5030: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2e5030u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2e5034:
    // 0x2e5034: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2e5034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2e5038:
    // 0x2e5038: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2e5038u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2e503c:
    // 0x2e503c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e503cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2e5040:
    // 0x2e5040: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x2e5040u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2e5044:
    // 0x2e5044: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e5044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2e5048:
    // 0x2e5048: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x2e5048u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_2e504c:
    // 0x2e504c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2e504cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2e5050:
    // 0x2e5050: 0x160802d  daddu       $s0, $t3, $zero
    ctx->pc = 0x2e5050u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_2e5054:
    // 0x2e5054: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2e5058:
    if (ctx->pc == 0x2E5058u) {
        ctx->pc = 0x2E5058u;
            // 0x2e5058: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2E505Cu;
        goto label_2e505c;
    }
    ctx->pc = 0x2E5054u;
    {
        const bool branch_taken_0x2e5054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5054u;
            // 0x2e5058: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5054) {
            ctx->pc = 0x2E5064u;
            goto label_2e5064;
        }
    }
    ctx->pc = 0x2E505Cu;
label_2e505c:
    // 0x2e505c: 0x10000002  b           . + 4 + (0x2 << 2)
label_2e5060:
    if (ctx->pc == 0x2E5060u) {
        ctx->pc = 0x2E5060u;
            // 0x2e5060: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E5064u;
        goto label_2e5064;
    }
    ctx->pc = 0x2E505Cu;
    {
        const bool branch_taken_0x2e505c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E505Cu;
            // 0x2e5060: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e505c) {
            ctx->pc = 0x2E5068u;
            goto label_2e5068;
        }
    }
    ctx->pc = 0x2E5064u;
label_2e5064:
    // 0x2e5064: 0x30c70004  andi        $a3, $a2, 0x4
    ctx->pc = 0x2e5064u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
label_2e5068:
    // 0x2e5068: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2e5068u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2e506c:
    // 0x2e506c: 0xc10ca68  jal         func_4329A0
label_2e5070:
    if (ctx->pc == 0x2E5070u) {
        ctx->pc = 0x2E5070u;
            // 0x2e5070: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E5074u;
        goto label_2e5074;
    }
    ctx->pc = 0x2E506Cu;
    SET_GPR_U32(ctx, 31, 0x2E5074u);
    ctx->pc = 0x2E5070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E506Cu;
            // 0x2e5070: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5074u; }
        if (ctx->pc != 0x2E5074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5074u; }
        if (ctx->pc != 0x2E5074u) { return; }
    }
    ctx->pc = 0x2E5074u;
label_2e5074:
    // 0x2e5074: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2e5074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2e5078:
    // 0x2e5078: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2e5078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2e507c:
    // 0x2e507c: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x2e507cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_2e5080:
    // 0x2e5080: 0x24632ff0  addiu       $v1, $v1, 0x2FF0
    ctx->pc = 0x2e5080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12272));
label_2e5084:
    // 0x2e5084: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x2e5084u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_2e5088:
    // 0x2e5088: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x2e5088u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_2e508c:
    // 0x2e508c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e508cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2e5090:
    // 0x2e5090: 0xaea000a0  sw          $zero, 0xA0($s5)
    ctx->pc = 0x2e5090u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 160), GPR_U32(ctx, 0));
label_2e5094:
    // 0x2e5094: 0xaea000a4  sw          $zero, 0xA4($s5)
    ctx->pc = 0x2e5094u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 164), GPR_U32(ctx, 0));
label_2e5098:
    // 0x2e5098: 0xe6b400a8  swc1        $f20, 0xA8($s5)
    ctx->pc = 0x2e5098u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 168), bits); }
label_2e509c:
    // 0x2e509c: 0xaea200ac  sw          $v0, 0xAC($s5)
    ctx->pc = 0x2e509cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 172), GPR_U32(ctx, 2));
label_2e50a0:
    // 0x2e50a0: 0xaeb400b0  sw          $s4, 0xB0($s5)
    ctx->pc = 0x2e50a0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 176), GPR_U32(ctx, 20));
label_2e50a4:
    // 0x2e50a4: 0xaeb300b4  sw          $s3, 0xB4($s5)
    ctx->pc = 0x2e50a4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 180), GPR_U32(ctx, 19));
label_2e50a8:
    // 0x2e50a8: 0xaeb100b8  sw          $s1, 0xB8($s5)
    ctx->pc = 0x2e50a8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 184), GPR_U32(ctx, 17));
label_2e50ac:
    // 0x2e50ac: 0xaeb000bc  sw          $s0, 0xBC($s5)
    ctx->pc = 0x2e50acu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 188), GPR_U32(ctx, 16));
label_2e50b0:
    // 0x2e50b0: 0xaeb200c0  sw          $s2, 0xC0($s5)
    ctx->pc = 0x2e50b0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 192), GPR_U32(ctx, 18));
label_2e50b4:
    // 0x2e50b4: 0xaea000c4  sw          $zero, 0xC4($s5)
    ctx->pc = 0x2e50b4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 196), GPR_U32(ctx, 0));
label_2e50b8:
    // 0x2e50b8: 0x8ea300b0  lw          $v1, 0xB0($s5)
    ctx->pc = 0x2e50b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 176)));
label_2e50bc:
    // 0x2e50bc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2e50bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2e50c0:
    // 0x2e50c0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2e50c4:
    if (ctx->pc == 0x2E50C4u) {
        ctx->pc = 0x2E50C4u;
            // 0x2e50c4: 0x8ea300b0  lw          $v1, 0xB0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 176)));
        ctx->pc = 0x2E50C8u;
        goto label_2e50c8;
    }
    ctx->pc = 0x2E50C0u;
    {
        const bool branch_taken_0x2e50c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e50c0) {
            ctx->pc = 0x2E50C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E50C0u;
            // 0x2e50c4: 0x8ea300b0  lw          $v1, 0xB0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E50D4u;
            goto label_2e50d4;
        }
    }
    ctx->pc = 0x2E50C8u;
label_2e50c8:
    // 0x2e50c8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2e50c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e50cc:
    // 0x2e50cc: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2e50ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_2e50d0:
    // 0x2e50d0: 0x8ea300b0  lw          $v1, 0xB0($s5)
    ctx->pc = 0x2e50d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 176)));
label_2e50d4:
    // 0x2e50d4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2e50d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2e50d8:
    // 0x2e50d8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2e50dc:
    if (ctx->pc == 0x2E50DCu) {
        ctx->pc = 0x2E50DCu;
            // 0x2e50dc: 0x26a40060  addiu       $a0, $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
        ctx->pc = 0x2E50E0u;
        goto label_2e50e0;
    }
    ctx->pc = 0x2E50D8u;
    {
        const bool branch_taken_0x2e50d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e50d8) {
            ctx->pc = 0x2E50DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E50D8u;
            // 0x2e50dc: 0x26a40060  addiu       $a0, $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E50ECu;
            goto label_2e50ec;
        }
    }
    ctx->pc = 0x2E50E0u;
label_2e50e0:
    // 0x2e50e0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2e50e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e50e4:
    // 0x2e50e4: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x2e50e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
label_2e50e8:
    // 0x2e50e8: 0x26a40060  addiu       $a0, $s5, 0x60
    ctx->pc = 0x2e50e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
label_2e50ec:
    // 0x2e50ec: 0xc04f26c  jal         func_13C9B0
label_2e50f0:
    if (ctx->pc == 0x2E50F0u) {
        ctx->pc = 0x2E50F4u;
        goto label_2e50f4;
    }
    ctx->pc = 0x2E50ECu;
    SET_GPR_U32(ctx, 31, 0x2E50F4u);
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E50F4u; }
        if (ctx->pc != 0x2E50F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E50F4u; }
        if (ctx->pc != 0x2E50F4u) { return; }
    }
    ctx->pc = 0x2E50F4u;
label_2e50f4:
    // 0x2e50f4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2e50f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_2e50f8:
    // 0x2e50f8: 0x8ea300b4  lw          $v1, 0xB4($s5)
    ctx->pc = 0x2e50f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 180)));
label_2e50fc:
    // 0x2e50fc: 0x8c42e4d0  lw          $v0, -0x1B30($v0)
    ctx->pc = 0x2e50fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960336)));
label_2e5100:
    // 0x2e5100: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2e5100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2e5104:
    // 0x2e5104: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
label_2e5108:
    if (ctx->pc == 0x2E5108u) {
        ctx->pc = 0x2E5108u;
            // 0x2e5108: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E510Cu;
        goto label_2e510c;
    }
    ctx->pc = 0x2E5104u;
    {
        const bool branch_taken_0x2e5104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5104) {
            ctx->pc = 0x2E5108u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5104u;
            // 0x2e5108: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E5194u;
            goto label_2e5194;
        }
    }
    ctx->pc = 0x2E510Cu;
label_2e510c:
    // 0x2e510c: 0xc04ab66  jal         func_12AD98
label_2e5110:
    if (ctx->pc == 0x2E5110u) {
        ctx->pc = 0x2E5114u;
        goto label_2e5114;
    }
    ctx->pc = 0x2E510Cu;
    SET_GPR_U32(ctx, 31, 0x2E5114u);
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5114u; }
        if (ctx->pc != 0x2E5114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5114u; }
        if (ctx->pc != 0x2E5114u) { return; }
    }
    ctx->pc = 0x2E5114u;
label_2e5114:
    // 0x2e5114: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2e5114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_2e5118:
    // 0x2e5118: 0xc04ab66  jal         func_12AD98
label_2e511c:
    if (ctx->pc == 0x2E511Cu) {
        ctx->pc = 0x2E511Cu;
            // 0x2e511c: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x2E5120u;
        goto label_2e5120;
    }
    ctx->pc = 0x2E5118u;
    SET_GPR_U32(ctx, 31, 0x2E5120u);
    ctx->pc = 0x2E511Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5118u;
            // 0x2e511c: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5120u; }
        if (ctx->pc != 0x2E5120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5120u; }
        if (ctx->pc != 0x2E5120u) { return; }
    }
    ctx->pc = 0x2E5120u;
label_2e5120:
    // 0x2e5120: 0x502025  or          $a0, $v0, $s0
    ctx->pc = 0x2e5120u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_2e5124:
    // 0x2e5124: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x2e5124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_2e5128:
    // 0x2e5128: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e5128u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e512c:
    // 0x2e512c: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
label_2e5130:
    if (ctx->pc == 0x2E5130u) {
        ctx->pc = 0x2E5130u;
            // 0x2e5130: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x2E5134u;
        goto label_2e5134;
    }
    ctx->pc = 0x2E512Cu;
    {
        const bool branch_taken_0x2e512c = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x2e512c) {
            ctx->pc = 0x2E5130u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E512Cu;
            // 0x2e5130: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E5140u;
            goto label_2e5140;
        }
    }
    ctx->pc = 0x2E5134u;
label_2e5134:
    // 0x2e5134: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2e5134u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e5138:
    // 0x2e5138: 0x10000007  b           . + 4 + (0x7 << 2)
label_2e513c:
    if (ctx->pc == 0x2E513Cu) {
        ctx->pc = 0x2E513Cu;
            // 0x2e513c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2E5140u;
        goto label_2e5140;
    }
    ctx->pc = 0x2E5138u;
    {
        const bool branch_taken_0x2e5138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E513Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5138u;
            // 0x2e513c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5138) {
            ctx->pc = 0x2E5158u;
            goto label_2e5158;
        }
    }
    ctx->pc = 0x2E5140u;
label_2e5140:
    // 0x2e5140: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2e5140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_2e5144:
    // 0x2e5144: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e5144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2e5148:
    // 0x2e5148: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e5148u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e514c:
    // 0x2e514c: 0x0  nop
    ctx->pc = 0x2e514cu;
    // NOP
label_2e5150:
    // 0x2e5150: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e5150u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2e5154:
    // 0x2e5154: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2e5154u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2e5158:
    // 0x2e5158: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e5158u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2e515c:
    // 0x2e515c: 0x3c0343b4  lui         $v1, 0x43B4
    ctx->pc = 0x2e515cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17332 << 16));
label_2e5160:
    // 0x2e5160: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x2e5160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_2e5164:
    // 0x2e5164: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x2e5164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_2e5168:
    // 0x2e5168: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e5168u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e516c:
    // 0x2e516c: 0x0  nop
    ctx->pc = 0x2e516cu;
    // NOP
label_2e5170:
    // 0x2e5170: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2e5170u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2e5174:
    // 0x2e5174: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e5174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e5178:
    // 0x2e5178: 0x0  nop
    ctx->pc = 0x2e5178u;
    // NOP
label_2e517c:
    // 0x2e517c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e517cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2e5180:
    // 0x2e5180: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e5180u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_2e5184:
    // 0x2e5184: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2e5184u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2e5188:
    // 0x2e5188: 0x0  nop
    ctx->pc = 0x2e5188u;
    // NOP
label_2e518c:
    // 0x2e518c: 0xaea200c4  sw          $v0, 0xC4($s5)
    ctx->pc = 0x2e518cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 196), GPR_U32(ctx, 2));
label_2e5190:
    // 0x2e5190: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x2e5190u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2e5194:
    // 0x2e5194: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2e5194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2e5198:
    // 0x2e5198: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2e5198u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2e519c:
    // 0x2e519c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2e519cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2e51a0:
    // 0x2e51a0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2e51a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2e51a4:
    // 0x2e51a4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2e51a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2e51a8:
    // 0x2e51a8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2e51a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2e51ac:
    // 0x2e51ac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e51acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e51b0:
    // 0x2e51b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e51b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e51b4:
    // 0x2e51b4: 0x3e00008  jr          $ra
label_2e51b8:
    if (ctx->pc == 0x2E51B8u) {
        ctx->pc = 0x2E51B8u;
            // 0x2e51b8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x2E51BCu;
        goto label_2e51bc;
    }
    ctx->pc = 0x2E51B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E51B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E51B4u;
            // 0x2e51b8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E51BCu;
label_2e51bc:
    // 0x2e51bc: 0x0  nop
    ctx->pc = 0x2e51bcu;
    // NOP
label_2e51c0:
    // 0x2e51c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e51c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2e51c4:
    // 0x2e51c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e51c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2e51c8:
    // 0x2e51c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e51c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2e51cc:
    // 0x2e51cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e51ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2e51d0:
    // 0x2e51d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e51d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e51d4:
    // 0x2e51d4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_2e51d8:
    if (ctx->pc == 0x2E51D8u) {
        ctx->pc = 0x2E51D8u;
            // 0x2e51d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E51DCu;
        goto label_2e51dc;
    }
    ctx->pc = 0x2E51D4u;
    {
        const bool branch_taken_0x2e51d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E51D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E51D4u;
            // 0x2e51d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e51d4) {
            ctx->pc = 0x2E5218u;
            goto label_2e5218;
        }
    }
    ctx->pc = 0x2E51DCu;
label_2e51dc:
    // 0x2e51dc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2e51dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2e51e0:
    // 0x2e51e0: 0x24423020  addiu       $v0, $v0, 0x3020
    ctx->pc = 0x2e51e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12320));
label_2e51e4:
    // 0x2e51e4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_2e51e8:
    if (ctx->pc == 0x2E51E8u) {
        ctx->pc = 0x2E51E8u;
            // 0x2e51e8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2E51ECu;
        goto label_2e51ec;
    }
    ctx->pc = 0x2E51E4u;
    {
        const bool branch_taken_0x2e51e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E51E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E51E4u;
            // 0x2e51e8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e51e4) {
            ctx->pc = 0x2E5200u;
            goto label_2e5200;
        }
    }
    ctx->pc = 0x2E51ECu;
label_2e51ec:
    // 0x2e51ec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2e51ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2e51f0:
    // 0x2e51f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e51f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e51f4:
    // 0x2e51f4: 0x24423060  addiu       $v0, $v0, 0x3060
    ctx->pc = 0x2e51f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12384));
label_2e51f8:
    // 0x2e51f8: 0xc075bf8  jal         func_1D6FE0
label_2e51fc:
    if (ctx->pc == 0x2E51FCu) {
        ctx->pc = 0x2E51FCu;
            // 0x2e51fc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2E5200u;
        goto label_2e5200;
    }
    ctx->pc = 0x2E51F8u;
    SET_GPR_U32(ctx, 31, 0x2E5200u);
    ctx->pc = 0x2E51FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E51F8u;
            // 0x2e51fc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5200u; }
        if (ctx->pc != 0x2E5200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5200u; }
        if (ctx->pc != 0x2E5200u) { return; }
    }
    ctx->pc = 0x2E5200u;
label_2e5200:
    // 0x2e5200: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2e5200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2e5204:
    // 0x2e5204: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2e5204u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2e5208:
    // 0x2e5208: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2e520c:
    if (ctx->pc == 0x2E520Cu) {
        ctx->pc = 0x2E520Cu;
            // 0x2e520c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E5210u;
        goto label_2e5210;
    }
    ctx->pc = 0x2E5208u;
    {
        const bool branch_taken_0x2e5208 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2e5208) {
            ctx->pc = 0x2E520Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5208u;
            // 0x2e520c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E521Cu;
            goto label_2e521c;
        }
    }
    ctx->pc = 0x2E5210u;
label_2e5210:
    // 0x2e5210: 0xc0400a8  jal         func_1002A0
label_2e5214:
    if (ctx->pc == 0x2E5214u) {
        ctx->pc = 0x2E5214u;
            // 0x2e5214: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E5218u;
        goto label_2e5218;
    }
    ctx->pc = 0x2E5210u;
    SET_GPR_U32(ctx, 31, 0x2E5218u);
    ctx->pc = 0x2E5214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5210u;
            // 0x2e5214: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5218u; }
        if (ctx->pc != 0x2E5218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5218u; }
        if (ctx->pc != 0x2E5218u) { return; }
    }
    ctx->pc = 0x2E5218u;
label_2e5218:
    // 0x2e5218: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2e5218u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e521c:
    // 0x2e521c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e521cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2e5220:
    // 0x2e5220: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e5220u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e5224:
    // 0x2e5224: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e5224u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e5228:
    // 0x2e5228: 0x3e00008  jr          $ra
label_2e522c:
    if (ctx->pc == 0x2E522Cu) {
        ctx->pc = 0x2E522Cu;
            // 0x2e522c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2E5230u;
        goto label_2e5230;
    }
    ctx->pc = 0x2E5228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E522Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5228u;
            // 0x2e522c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E5230u;
label_2e5230:
    // 0x2e5230: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2e5230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2e5234:
    // 0x2e5234: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2e5234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2e5238:
    // 0x2e5238: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e5238u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e523c:
    // 0x2e523c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2e523cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2e5240:
    // 0x2e5240: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e5240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2e5244:
    // 0x2e5244: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2e5244u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e5248:
    // 0x2e5248: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e5248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2e524c:
    // 0x2e524c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2e524cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2e5250:
    // 0x2e5250: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e5250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2e5254:
    // 0x2e5254: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2e5254u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2e5258:
    // 0x2e5258: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e5258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2e525c:
    // 0x2e525c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2e525cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2e5260:
    // 0x2e5260: 0xc4c10014  lwc1        $f1, 0x14($a2)
    ctx->pc = 0x2e5260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e5264:
    // 0x2e5264: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e5264u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e5268:
    // 0x2e5268: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2e526c:
    if (ctx->pc == 0x2E526Cu) {
        ctx->pc = 0x2E526Cu;
            // 0x2e526c: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E5270u;
        goto label_2e5270;
    }
    ctx->pc = 0x2E5268u;
    {
        const bool branch_taken_0x2e5268 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E526Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5268u;
            // 0x2e526c: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5268) {
            ctx->pc = 0x2E5274u;
            goto label_2e5274;
        }
    }
    ctx->pc = 0x2E5270u;
label_2e5270:
    // 0x2e5270: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x2e5270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
label_2e5274:
    // 0x2e5274: 0x8e8300f4  lw          $v1, 0xF4($s4)
    ctx->pc = 0x2e5274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 244)));
label_2e5278:
    // 0x2e5278: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e5278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2e527c:
    // 0x2e527c: 0xc6420010  lwc1        $f2, 0x10($s2)
    ctx->pc = 0x2e527cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2e5280:
    // 0x2e5280: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2e5280u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e5284:
    // 0x2e5284: 0xc6440014  lwc1        $f4, 0x14($s2)
    ctx->pc = 0x2e5284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2e5288:
    // 0x2e5288: 0xc4630078  lwc1        $f3, 0x78($v1)
    ctx->pc = 0x2e5288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2e528c:
    // 0x2e528c: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x2e528cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_2e5290:
    // 0x2e5290: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e5290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e5294:
    // 0x2e5294: 0x46032042  mul.s       $f1, $f4, $f3
    ctx->pc = 0x2e5294u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_2e5298:
    // 0x2e5298: 0x4601605c  madd.s      $f1, $f12, $f1
    ctx->pc = 0x2e5298u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[1]));
label_2e529c:
    // 0x2e529c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e529cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e52a0:
    // 0x2e52a0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_2e52a4:
    if (ctx->pc == 0x2E52A4u) {
        ctx->pc = 0x2E52A4u;
            // 0x2e52a4: 0xe6410010  swc1        $f1, 0x10($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
        ctx->pc = 0x2E52A8u;
        goto label_2e52a8;
    }
    ctx->pc = 0x2E52A0u;
    {
        const bool branch_taken_0x2e52a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E52A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E52A0u;
            // 0x2e52a4: 0xe6410010  swc1        $f1, 0x10($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e52a0) {
            ctx->pc = 0x2E52ACu;
            goto label_2e52ac;
        }
    }
    ctx->pc = 0x2E52A8u;
label_2e52a8:
    // 0x2e52a8: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x2e52a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
label_2e52ac:
    // 0x2e52ac: 0x8e8200f4  lw          $v0, 0xF4($s4)
    ctx->pc = 0x2e52acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 244)));
label_2e52b0:
    // 0x2e52b0: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x2e52b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e52b4:
    // 0x2e52b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e52b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e52b8:
    // 0x2e52b8: 0xc6430018  lwc1        $f3, 0x18($s2)
    ctx->pc = 0x2e52b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2e52bc:
    // 0x2e52bc: 0xc4420078  lwc1        $f2, 0x78($v0)
    ctx->pc = 0x2e52bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2e52c0:
    // 0x2e52c0: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x2e52c0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2e52c4:
    // 0x2e52c4: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x2e52c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_2e52c8:
    // 0x2e52c8: 0x4600601c  madd.s      $f0, $f12, $f0
    ctx->pc = 0x2e52c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[0]));
label_2e52cc:
    // 0x2e52cc: 0x1120000e  beqz        $t1, . + 4 + (0xE << 2)
label_2e52d0:
    if (ctx->pc == 0x2E52D0u) {
        ctx->pc = 0x2E52D0u;
            // 0x2e52d0: 0xe6400014  swc1        $f0, 0x14($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
        ctx->pc = 0x2E52D4u;
        goto label_2e52d4;
    }
    ctx->pc = 0x2E52CCu;
    {
        const bool branch_taken_0x2e52cc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E52D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E52CCu;
            // 0x2e52d0: 0xe6400014  swc1        $f0, 0x14($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e52cc) {
            ctx->pc = 0x2E5308u;
            goto label_2e5308;
        }
    }
    ctx->pc = 0x2E52D4u;
label_2e52d4:
    // 0x2e52d4: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x2e52d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e52d8:
    // 0x2e52d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e52d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2e52dc:
    // 0x2e52dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e52dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e52e0:
    // 0x2e52e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e52e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e52e4:
    // 0x2e52e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e52e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e52e8:
    // 0x2e52e8: 0xc04cc70  jal         func_1331C0
label_2e52ec:
    if (ctx->pc == 0x2E52ECu) {
        ctx->pc = 0x2E52ECu;
            // 0x2e52ec: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x2E52F0u;
        goto label_2e52f0;
    }
    ctx->pc = 0x2E52E8u;
    SET_GPR_U32(ctx, 31, 0x2E52F0u);
    ctx->pc = 0x2E52ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E52E8u;
            // 0x2e52ec: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E52F0u; }
        if (ctx->pc != 0x2E52F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E52F0u; }
        if (ctx->pc != 0x2E52F0u) { return; }
    }
    ctx->pc = 0x2E52F0u;
label_2e52f0:
    // 0x2e52f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e52f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e52f4:
    // 0x2e52f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e52f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e52f8:
    // 0x2e52f8: 0xc04ccc4  jal         func_133310
label_2e52fc:
    if (ctx->pc == 0x2E52FCu) {
        ctx->pc = 0x2E52FCu;
            // 0x2e52fc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E5300u;
        goto label_2e5300;
    }
    ctx->pc = 0x2E52F8u;
    SET_GPR_U32(ctx, 31, 0x2E5300u);
    ctx->pc = 0x2E52FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E52F8u;
            // 0x2e52fc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133310u;
    if (runtime->hasFunction(0x133310u)) {
        auto targetFn = runtime->lookupFunction(0x133310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5300u; }
        if (ctx->pc != 0x2E5300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133310_0x133310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5300u; }
        if (ctx->pc != 0x2E5300u) { return; }
    }
    ctx->pc = 0x2E5300u;
label_2e5300:
    // 0x2e5300: 0x10000009  b           . + 4 + (0x9 << 2)
label_2e5304:
    if (ctx->pc == 0x2E5304u) {
        ctx->pc = 0x2E5304u;
            // 0x2e5304: 0x26850080  addiu       $a1, $s4, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
        ctx->pc = 0x2E5308u;
        goto label_2e5308;
    }
    ctx->pc = 0x2E5300u;
    {
        const bool branch_taken_0x2e5300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5300u;
            // 0x2e5304: 0x26850080  addiu       $a1, $s4, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5300) {
            ctx->pc = 0x2E5328u;
            goto label_2e5328;
        }
    }
    ctx->pc = 0x2E5308u;
label_2e5308:
    // 0x2e5308: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x2e5308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e530c:
    // 0x2e530c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e530cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2e5310:
    // 0x2e5310: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e5310u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e5314:
    // 0x2e5314: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e5314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e5318:
    // 0x2e5318: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e5318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e531c:
    // 0x2e531c: 0xc04cc70  jal         func_1331C0
label_2e5320:
    if (ctx->pc == 0x2E5320u) {
        ctx->pc = 0x2E5320u;
            // 0x2e5320: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x2E5324u;
        goto label_2e5324;
    }
    ctx->pc = 0x2E531Cu;
    SET_GPR_U32(ctx, 31, 0x2E5324u);
    ctx->pc = 0x2E5320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E531Cu;
            // 0x2e5320: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5324u; }
        if (ctx->pc != 0x2E5324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5324u; }
        if (ctx->pc != 0x2E5324u) { return; }
    }
    ctx->pc = 0x2E5324u;
label_2e5324:
    // 0x2e5324: 0x26850080  addiu       $a1, $s4, 0x80
    ctx->pc = 0x2e5324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
label_2e5328:
    // 0x2e5328: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e5328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e532c:
    // 0x2e532c: 0xc04ccc4  jal         func_133310
label_2e5330:
    if (ctx->pc == 0x2E5330u) {
        ctx->pc = 0x2E5330u;
            // 0x2e5330: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E5334u;
        goto label_2e5334;
    }
    ctx->pc = 0x2E532Cu;
    SET_GPR_U32(ctx, 31, 0x2E5334u);
    ctx->pc = 0x2E5330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E532Cu;
            // 0x2e5330: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133310u;
    if (runtime->hasFunction(0x133310u)) {
        auto targetFn = runtime->lookupFunction(0x133310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5334u; }
        if (ctx->pc != 0x2E5334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133310_0x133310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5334u; }
        if (ctx->pc != 0x2E5334u) { return; }
    }
    ctx->pc = 0x2E5334u;
label_2e5334:
    // 0x2e5334: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e5334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e5338:
    // 0x2e5338: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x2e5338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2e533c:
    // 0x2e533c: 0xc04cbe0  jal         func_132F80
label_2e5340:
    if (ctx->pc == 0x2E5340u) {
        ctx->pc = 0x2E5340u;
            // 0x2e5340: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E5344u;
        goto label_2e5344;
    }
    ctx->pc = 0x2E533Cu;
    SET_GPR_U32(ctx, 31, 0x2E5344u);
    ctx->pc = 0x2E5340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E533Cu;
            // 0x2e5340: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5344u; }
        if (ctx->pc != 0x2E5344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5344u; }
        if (ctx->pc != 0x2E5344u) { return; }
    }
    ctx->pc = 0x2E5344u;
label_2e5344:
    // 0x2e5344: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2e5344u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2e5348:
    // 0x2e5348: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2e5348u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2e534c:
    // 0x2e534c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e534cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2e5350:
    // 0x2e5350: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e5350u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e5354:
    // 0x2e5354: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e5354u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e5358:
    // 0x2e5358: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e5358u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e535c:
    // 0x2e535c: 0x3e00008  jr          $ra
label_2e5360:
    if (ctx->pc == 0x2E5360u) {
        ctx->pc = 0x2E5360u;
            // 0x2e5360: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2E5364u;
        goto label_2e5364;
    }
    ctx->pc = 0x2E535Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E5360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E535Cu;
            // 0x2e5360: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E5364u;
label_2e5364:
    // 0x2e5364: 0x0  nop
    ctx->pc = 0x2e5364u;
    // NOP
label_2e5368:
    // 0x2e5368: 0x0  nop
    ctx->pc = 0x2e5368u;
    // NOP
label_2e536c:
    // 0x2e536c: 0x0  nop
    ctx->pc = 0x2e536cu;
    // NOP
label_2e5370:
    // 0x2e5370: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x2e5370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_2e5374:
    // 0x2e5374: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2e5374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2e5378:
    // 0x2e5378: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2e5378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_2e537c:
    // 0x2e537c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2e537cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2e5380:
    // 0x2e5380: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2e5380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2e5384:
    // 0x2e5384: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2e5384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2e5388:
    // 0x2e5388: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2e5388u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e538c:
    // 0x2e538c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e538cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2e5390:
    // 0x2e5390: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e5390u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2e5394:
    // 0x2e5394: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e5394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2e5398:
    // 0x2e5398: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2e5398u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2e539c:
    // 0x2e539c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2e539cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2e53a0:
    // 0x2e53a0: 0x14e00062  bnez        $a3, . + 4 + (0x62 << 2)
label_2e53a4:
    if (ctx->pc == 0x2E53A4u) {
        ctx->pc = 0x2E53A4u;
            // 0x2e53a4: 0xacc00010  sw          $zero, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
        ctx->pc = 0x2E53A8u;
        goto label_2e53a8;
    }
    ctx->pc = 0x2E53A0u;
    {
        const bool branch_taken_0x2e53a0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E53A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E53A0u;
            // 0x2e53a4: 0xacc00010  sw          $zero, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e53a0) {
            ctx->pc = 0x2E552Cu;
            goto label_2e552c;
        }
    }
    ctx->pc = 0x2E53A8u;
label_2e53a8:
    // 0x2e53a8: 0x8e620114  lw          $v0, 0x114($s3)
    ctx->pc = 0x2e53a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 276)));
label_2e53ac:
    // 0x2e53ac: 0xc04ab66  jal         func_12AD98
label_2e53b0:
    if (ctx->pc == 0x2E53B0u) {
        ctx->pc = 0x2E53B0u;
            // 0x2e53b0: 0xc4540000  lwc1        $f20, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->pc = 0x2E53B4u;
        goto label_2e53b4;
    }
    ctx->pc = 0x2E53ACu;
    SET_GPR_U32(ctx, 31, 0x2E53B4u);
    ctx->pc = 0x2E53B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E53ACu;
            // 0x2e53b0: 0xc4540000  lwc1        $f20, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E53B4u; }
        if (ctx->pc != 0x2E53B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E53B4u; }
        if (ctx->pc != 0x2E53B4u) { return; }
    }
    ctx->pc = 0x2E53B4u;
label_2e53b4:
    // 0x2e53b4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2e53b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_2e53b8:
    // 0x2e53b8: 0xc04ab66  jal         func_12AD98
label_2e53bc:
    if (ctx->pc == 0x2E53BCu) {
        ctx->pc = 0x2E53BCu;
            // 0x2e53bc: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x2E53C0u;
        goto label_2e53c0;
    }
    ctx->pc = 0x2E53B8u;
    SET_GPR_U32(ctx, 31, 0x2E53C0u);
    ctx->pc = 0x2E53BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E53B8u;
            // 0x2e53bc: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E53C0u; }
        if (ctx->pc != 0x2E53C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E53C0u; }
        if (ctx->pc != 0x2E53C0u) { return; }
    }
    ctx->pc = 0x2E53C0u;
label_2e53c0:
    // 0x2e53c0: 0x502025  or          $a0, $v0, $s0
    ctx->pc = 0x2e53c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_2e53c4:
    // 0x2e53c4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e53c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2e53c8:
    // 0x2e53c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e53c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e53cc:
    // 0x2e53cc: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x2e53ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_2e53d0:
    // 0x2e53d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e53d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e53d4:
    // 0x2e53d4: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_2e53d8:
    if (ctx->pc == 0x2E53D8u) {
        ctx->pc = 0x2E53D8u;
            // 0x2e53d8: 0x46140082  mul.s       $f2, $f0, $f20 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->pc = 0x2E53DCu;
        goto label_2e53dc;
    }
    ctx->pc = 0x2E53D4u;
    {
        const bool branch_taken_0x2e53d4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2E53D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E53D4u;
            // 0x2e53d8: 0x46140082  mul.s       $f2, $f0, $f20 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e53d4) {
            ctx->pc = 0x2E53E8u;
            goto label_2e53e8;
        }
    }
    ctx->pc = 0x2E53DCu;
label_2e53dc:
    // 0x2e53dc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2e53dcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e53e0:
    // 0x2e53e0: 0x10000008  b           . + 4 + (0x8 << 2)
label_2e53e4:
    if (ctx->pc == 0x2E53E4u) {
        ctx->pc = 0x2E53E4u;
            // 0x2e53e4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2E53E8u;
        goto label_2e53e8;
    }
    ctx->pc = 0x2E53E0u;
    {
        const bool branch_taken_0x2e53e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E53E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E53E0u;
            // 0x2e53e4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e53e0) {
            ctx->pc = 0x2E5404u;
            goto label_2e5404;
        }
    }
    ctx->pc = 0x2E53E8u;
label_2e53e8:
    // 0x2e53e8: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x2e53e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_2e53ec:
    // 0x2e53ec: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2e53ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_2e53f0:
    // 0x2e53f0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e53f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2e53f4:
    // 0x2e53f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e53f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e53f8:
    // 0x2e53f8: 0x0  nop
    ctx->pc = 0x2e53f8u;
    // NOP
label_2e53fc:
    // 0x2e53fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e53fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2e5400:
    // 0x2e5400: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2e5400u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2e5404:
    // 0x2e5404: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e5404u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2e5408:
    // 0x2e5408: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x2e5408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
label_2e540c:
    // 0x2e540c: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x2e540cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
label_2e5410:
    // 0x2e5410: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x2e5410u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2e5414:
    // 0x2e5414: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e5414u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e5418:
    // 0x2e5418: 0x0  nop
    ctx->pc = 0x2e5418u;
    // NOP
label_2e541c:
    // 0x2e541c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2e541cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_2e5420:
    // 0x2e5420: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e5420u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2e5424:
    // 0x2e5424: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x2e5424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_2e5428:
    // 0x2e5428: 0x8e620114  lw          $v0, 0x114($s3)
    ctx->pc = 0x2e5428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 276)));
label_2e542c:
    // 0x2e542c: 0xc04ab66  jal         func_12AD98
label_2e5430:
    if (ctx->pc == 0x2E5430u) {
        ctx->pc = 0x2E5430u;
            // 0x2e5430: 0xc4540004  lwc1        $f20, 0x4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->pc = 0x2E5434u;
        goto label_2e5434;
    }
    ctx->pc = 0x2E542Cu;
    SET_GPR_U32(ctx, 31, 0x2E5434u);
    ctx->pc = 0x2E5430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E542Cu;
            // 0x2e5430: 0xc4540004  lwc1        $f20, 0x4($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5434u; }
        if (ctx->pc != 0x2E5434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5434u; }
        if (ctx->pc != 0x2E5434u) { return; }
    }
    ctx->pc = 0x2E5434u;
label_2e5434:
    // 0x2e5434: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2e5434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_2e5438:
    // 0x2e5438: 0xc04ab66  jal         func_12AD98
label_2e543c:
    if (ctx->pc == 0x2E543Cu) {
        ctx->pc = 0x2E543Cu;
            // 0x2e543c: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x2E5440u;
        goto label_2e5440;
    }
    ctx->pc = 0x2E5438u;
    SET_GPR_U32(ctx, 31, 0x2E5440u);
    ctx->pc = 0x2E543Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5438u;
            // 0x2e543c: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5440u; }
        if (ctx->pc != 0x2E5440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5440u; }
        if (ctx->pc != 0x2E5440u) { return; }
    }
    ctx->pc = 0x2E5440u;
label_2e5440:
    // 0x2e5440: 0x502025  or          $a0, $v0, $s0
    ctx->pc = 0x2e5440u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_2e5444:
    // 0x2e5444: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e5444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2e5448:
    // 0x2e5448: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e5448u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e544c:
    // 0x2e544c: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x2e544cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_2e5450:
    // 0x2e5450: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e5450u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e5454:
    // 0x2e5454: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_2e5458:
    if (ctx->pc == 0x2E5458u) {
        ctx->pc = 0x2E5458u;
            // 0x2e5458: 0x46140082  mul.s       $f2, $f0, $f20 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->pc = 0x2E545Cu;
        goto label_2e545c;
    }
    ctx->pc = 0x2E5454u;
    {
        const bool branch_taken_0x2e5454 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2E5458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5454u;
            // 0x2e5458: 0x46140082  mul.s       $f2, $f0, $f20 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5454) {
            ctx->pc = 0x2E5468u;
            goto label_2e5468;
        }
    }
    ctx->pc = 0x2E545Cu;
label_2e545c:
    // 0x2e545c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2e545cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e5460:
    // 0x2e5460: 0x10000008  b           . + 4 + (0x8 << 2)
label_2e5464:
    if (ctx->pc == 0x2E5464u) {
        ctx->pc = 0x2E5464u;
            // 0x2e5464: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2E5468u;
        goto label_2e5468;
    }
    ctx->pc = 0x2E5460u;
    {
        const bool branch_taken_0x2e5460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5460u;
            // 0x2e5464: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5460) {
            ctx->pc = 0x2E5484u;
            goto label_2e5484;
        }
    }
    ctx->pc = 0x2E5468u;
label_2e5468:
    // 0x2e5468: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x2e5468u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_2e546c:
    // 0x2e546c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2e546cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_2e5470:
    // 0x2e5470: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e5470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2e5474:
    // 0x2e5474: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e5474u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e5478:
    // 0x2e5478: 0x0  nop
    ctx->pc = 0x2e5478u;
    // NOP
label_2e547c:
    // 0x2e547c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e547cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2e5480:
    // 0x2e5480: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2e5480u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2e5484:
    // 0x2e5484: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e5484u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2e5488:
    // 0x2e5488: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x2e5488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
label_2e548c:
    // 0x2e548c: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x2e548cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
label_2e5490:
    // 0x2e5490: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x2e5490u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2e5494:
    // 0x2e5494: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e5494u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e5498:
    // 0x2e5498: 0x0  nop
    ctx->pc = 0x2e5498u;
    // NOP
label_2e549c:
    // 0x2e549c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2e549cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_2e54a0:
    // 0x2e54a0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e54a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2e54a4:
    // 0x2e54a4: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x2e54a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_2e54a8:
    // 0x2e54a8: 0x8e620114  lw          $v0, 0x114($s3)
    ctx->pc = 0x2e54a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 276)));
label_2e54ac:
    // 0x2e54ac: 0xc04ab66  jal         func_12AD98
label_2e54b0:
    if (ctx->pc == 0x2E54B0u) {
        ctx->pc = 0x2E54B0u;
            // 0x2e54b0: 0xc4540008  lwc1        $f20, 0x8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->pc = 0x2E54B4u;
        goto label_2e54b4;
    }
    ctx->pc = 0x2E54ACu;
    SET_GPR_U32(ctx, 31, 0x2E54B4u);
    ctx->pc = 0x2E54B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E54ACu;
            // 0x2e54b0: 0xc4540008  lwc1        $f20, 0x8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E54B4u; }
        if (ctx->pc != 0x2E54B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E54B4u; }
        if (ctx->pc != 0x2E54B4u) { return; }
    }
    ctx->pc = 0x2E54B4u;
label_2e54b4:
    // 0x2e54b4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2e54b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_2e54b8:
    // 0x2e54b8: 0xc04ab66  jal         func_12AD98
label_2e54bc:
    if (ctx->pc == 0x2E54BCu) {
        ctx->pc = 0x2E54BCu;
            // 0x2e54bc: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x2E54C0u;
        goto label_2e54c0;
    }
    ctx->pc = 0x2E54B8u;
    SET_GPR_U32(ctx, 31, 0x2E54C0u);
    ctx->pc = 0x2E54BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E54B8u;
            // 0x2e54bc: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E54C0u; }
        if (ctx->pc != 0x2E54C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E54C0u; }
        if (ctx->pc != 0x2E54C0u) { return; }
    }
    ctx->pc = 0x2E54C0u;
label_2e54c0:
    // 0x2e54c0: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2e54c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_2e54c4:
    // 0x2e54c4: 0x502825  or          $a1, $v0, $s0
    ctx->pc = 0x2e54c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_2e54c8:
    // 0x2e54c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e54c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e54cc:
    // 0x2e54cc: 0x3c032f80  lui         $v1, 0x2F80
    ctx->pc = 0x2e54ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12160 << 16));
label_2e54d0:
    // 0x2e54d0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2e54d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e54d4:
    // 0x2e54d4: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
label_2e54d8:
    if (ctx->pc == 0x2E54D8u) {
        ctx->pc = 0x2E54D8u;
            // 0x2e54d8: 0x46140082  mul.s       $f2, $f0, $f20 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->pc = 0x2E54DCu;
        goto label_2e54dc;
    }
    ctx->pc = 0x2E54D4u;
    {
        const bool branch_taken_0x2e54d4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x2E54D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E54D4u;
            // 0x2e54d8: 0x46140082  mul.s       $f2, $f0, $f20 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e54d4) {
            ctx->pc = 0x2E54E8u;
            goto label_2e54e8;
        }
    }
    ctx->pc = 0x2E54DCu;
label_2e54dc:
    // 0x2e54dc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2e54dcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e54e0:
    // 0x2e54e0: 0x10000008  b           . + 4 + (0x8 << 2)
label_2e54e4:
    if (ctx->pc == 0x2E54E4u) {
        ctx->pc = 0x2E54E4u;
            // 0x2e54e4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2E54E8u;
        goto label_2e54e8;
    }
    ctx->pc = 0x2E54E0u;
    {
        const bool branch_taken_0x2e54e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E54E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E54E0u;
            // 0x2e54e4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e54e0) {
            ctx->pc = 0x2E5504u;
            goto label_2e5504;
        }
    }
    ctx->pc = 0x2E54E8u;
label_2e54e8:
    // 0x2e54e8: 0x52042  srl         $a0, $a1, 1
    ctx->pc = 0x2e54e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
label_2e54ec:
    // 0x2e54ec: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x2e54ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_2e54f0:
    // 0x2e54f0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2e54f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2e54f4:
    // 0x2e54f4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2e54f4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e54f8:
    // 0x2e54f8: 0x0  nop
    ctx->pc = 0x2e54f8u;
    // NOP
label_2e54fc:
    // 0x2e54fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e54fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2e5500:
    // 0x2e5500: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2e5500u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2e5504:
    // 0x2e5504: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e5504u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2e5508:
    // 0x2e5508: 0x3c0338d1  lui         $v1, 0x38D1
    ctx->pc = 0x2e5508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14545 << 16));
label_2e550c:
    // 0x2e550c: 0x3463b717  ori         $v1, $v1, 0xB717
    ctx->pc = 0x2e550cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46871);
label_2e5510:
    // 0x2e5510: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x2e5510u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2e5514:
    // 0x2e5514: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e5514u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e5518:
    // 0x2e5518: 0x0  nop
    ctx->pc = 0x2e5518u;
    // NOP
label_2e551c:
    // 0x2e551c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2e551cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_2e5520:
    // 0x2e5520: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e5520u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2e5524:
    // 0x2e5524: 0x1000003f  b           . + 4 + (0x3F << 2)
label_2e5528:
    if (ctx->pc == 0x2E5528u) {
        ctx->pc = 0x2E5528u;
            // 0x2e5528: 0xe6400008  swc1        $f0, 0x8($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
        ctx->pc = 0x2E552Cu;
        goto label_2e552c;
    }
    ctx->pc = 0x2E5524u;
    {
        const bool branch_taken_0x2e5524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5524u;
            // 0x2e5528: 0xe6400008  swc1        $f0, 0x8($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5524) {
            ctx->pc = 0x2E5624u;
            goto label_2e5624;
        }
    }
    ctx->pc = 0x2E552Cu;
label_2e552c:
    // 0x2e552c: 0x8e620114  lw          $v0, 0x114($s3)
    ctx->pc = 0x2e552cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 276)));
label_2e5530:
    // 0x2e5530: 0xc04ab66  jal         func_12AD98
label_2e5534:
    if (ctx->pc == 0x2E5534u) {
        ctx->pc = 0x2E5534u;
            // 0x2e5534: 0xc4540000  lwc1        $f20, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->pc = 0x2E5538u;
        goto label_2e5538;
    }
    ctx->pc = 0x2E5530u;
    SET_GPR_U32(ctx, 31, 0x2E5538u);
    ctx->pc = 0x2E5534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5530u;
            // 0x2e5534: 0xc4540000  lwc1        $f20, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5538u; }
        if (ctx->pc != 0x2E5538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5538u; }
        if (ctx->pc != 0x2E5538u) { return; }
    }
    ctx->pc = 0x2E5538u;
label_2e5538:
    // 0x2e5538: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2e5538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_2e553c:
    // 0x2e553c: 0xc04ab66  jal         func_12AD98
label_2e5540:
    if (ctx->pc == 0x2E5540u) {
        ctx->pc = 0x2E5540u;
            // 0x2e5540: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x2E5544u;
        goto label_2e5544;
    }
    ctx->pc = 0x2E553Cu;
    SET_GPR_U32(ctx, 31, 0x2E5544u);
    ctx->pc = 0x2E5540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E553Cu;
            // 0x2e5540: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5544u; }
        if (ctx->pc != 0x2E5544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5544u; }
        if (ctx->pc != 0x2E5544u) { return; }
    }
    ctx->pc = 0x2E5544u;
label_2e5544:
    // 0x2e5544: 0x502025  or          $a0, $v0, $s0
    ctx->pc = 0x2e5544u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_2e5548:
    // 0x2e5548: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e5548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2e554c:
    // 0x2e554c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e554cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e5550:
    // 0x2e5550: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x2e5550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_2e5554:
    // 0x2e5554: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e5554u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e5558:
    // 0x2e5558: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
label_2e555c:
    if (ctx->pc == 0x2E555Cu) {
        ctx->pc = 0x2E555Cu;
            // 0x2e555c: 0x46140082  mul.s       $f2, $f0, $f20 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->pc = 0x2E5560u;
        goto label_2e5560;
    }
    ctx->pc = 0x2E5558u;
    {
        const bool branch_taken_0x2e5558 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2E555Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5558u;
            // 0x2e555c: 0x46140082  mul.s       $f2, $f0, $f20 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5558) {
            ctx->pc = 0x2E556Cu;
            goto label_2e556c;
        }
    }
    ctx->pc = 0x2E5560u;
label_2e5560:
    // 0x2e5560: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2e5560u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e5564:
    // 0x2e5564: 0x10000008  b           . + 4 + (0x8 << 2)
label_2e5568:
    if (ctx->pc == 0x2E5568u) {
        ctx->pc = 0x2E5568u;
            // 0x2e5568: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x2E556Cu;
        goto label_2e556c;
    }
    ctx->pc = 0x2E5564u;
    {
        const bool branch_taken_0x2e5564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5564u;
            // 0x2e5568: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5564) {
            ctx->pc = 0x2E5588u;
            goto label_2e5588;
        }
    }
    ctx->pc = 0x2E556Cu;
label_2e556c:
    // 0x2e556c: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x2e556cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_2e5570:
    // 0x2e5570: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2e5570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_2e5574:
    // 0x2e5574: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e5574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2e5578:
    // 0x2e5578: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e5578u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e557c:
    // 0x2e557c: 0x0  nop
    ctx->pc = 0x2e557cu;
    // NOP
label_2e5580:
    // 0x2e5580: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e5580u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2e5584:
    // 0x2e5584: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2e5584u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2e5588:
    // 0x2e5588: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2e5588u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2e558c:
    // 0x2e558c: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x2e558cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
label_2e5590:
    // 0x2e5590: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x2e5590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
label_2e5594:
    // 0x2e5594: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2e5594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2e5598:
    // 0x2e5598: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x2e5598u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2e559c:
    // 0x2e559c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e559cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e55a0:
    // 0x2e55a0: 0x0  nop
    ctx->pc = 0x2e55a0u;
    // NOP
label_2e55a4:
    // 0x2e55a4: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2e55a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_2e55a8:
    // 0x2e55a8: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x2e55a8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2e55ac:
    // 0x2e55ac: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2e55acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2e55b0:
    // 0x2e55b0: 0xc04f3fc  jal         func_13CFF0
label_2e55b4:
    if (ctx->pc == 0x2E55B4u) {
        ctx->pc = 0x2E55B4u;
            // 0x2e55b4: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x2E55B8u;
        goto label_2e55b8;
    }
    ctx->pc = 0x2E55B0u;
    SET_GPR_U32(ctx, 31, 0x2E55B8u);
    ctx->pc = 0x2E55B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E55B0u;
            // 0x2e55b4: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFF0u;
    if (runtime->hasFunction(0x13CFF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E55B8u; }
        if (ctx->pc != 0x2E55B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFF0_0x13cff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E55B8u; }
        if (ctx->pc != 0x2E55B8u) { return; }
    }
    ctx->pc = 0x2E55B8u;
label_2e55b8:
    // 0x2e55b8: 0xc04ab66  jal         func_12AD98
label_2e55bc:
    if (ctx->pc == 0x2E55BCu) {
        ctx->pc = 0x2E55C0u;
        goto label_2e55c0;
    }
    ctx->pc = 0x2E55B8u;
    SET_GPR_U32(ctx, 31, 0x2E55C0u);
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E55C0u; }
        if (ctx->pc != 0x2E55C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E55C0u; }
        if (ctx->pc != 0x2E55C0u) { return; }
    }
    ctx->pc = 0x2E55C0u;
label_2e55c0:
    // 0x2e55c0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2e55c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_2e55c4:
    // 0x2e55c4: 0xc04ab66  jal         func_12AD98
label_2e55c8:
    if (ctx->pc == 0x2E55C8u) {
        ctx->pc = 0x2E55C8u;
            // 0x2e55c8: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x2E55CCu;
        goto label_2e55cc;
    }
    ctx->pc = 0x2E55C4u;
    SET_GPR_U32(ctx, 31, 0x2E55CCu);
    ctx->pc = 0x2E55C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E55C4u;
            // 0x2e55c8: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E55CCu; }
        if (ctx->pc != 0x2E55CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E55CCu; }
        if (ctx->pc != 0x2E55CCu) { return; }
    }
    ctx->pc = 0x2E55CCu;
label_2e55cc:
    // 0x2e55cc: 0xc04ab66  jal         func_12AD98
label_2e55d0:
    if (ctx->pc == 0x2E55D0u) {
        ctx->pc = 0x2E55D0u;
            // 0x2e55d0: 0x508025  or          $s0, $v0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
        ctx->pc = 0x2E55D4u;
        goto label_2e55d4;
    }
    ctx->pc = 0x2E55CCu;
    SET_GPR_U32(ctx, 31, 0x2E55D4u);
    ctx->pc = 0x2E55D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E55CCu;
            // 0x2e55d0: 0x508025  or          $s0, $v0, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E55D4u; }
        if (ctx->pc != 0x2E55D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E55D4u; }
        if (ctx->pc != 0x2E55D4u) { return; }
    }
    ctx->pc = 0x2E55D4u;
label_2e55d4:
    // 0x2e55d4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2e55d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_2e55d8:
    // 0x2e55d8: 0xc04ab66  jal         func_12AD98
label_2e55dc:
    if (ctx->pc == 0x2E55DCu) {
        ctx->pc = 0x2E55DCu;
            // 0x2e55dc: 0x2a740  sll         $s4, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x2E55E0u;
        goto label_2e55e0;
    }
    ctx->pc = 0x2E55D8u;
    SET_GPR_U32(ctx, 31, 0x2E55E0u);
    ctx->pc = 0x2E55DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E55D8u;
            // 0x2e55dc: 0x2a740  sll         $s4, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E55E0u; }
        if (ctx->pc != 0x2E55E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E55E0u; }
        if (ctx->pc != 0x2E55E0u) { return; }
    }
    ctx->pc = 0x2E55E0u;
label_2e55e0:
    // 0x2e55e0: 0xc04ab66  jal         func_12AD98
label_2e55e4:
    if (ctx->pc == 0x2E55E4u) {
        ctx->pc = 0x2E55E4u;
            // 0x2e55e4: 0x54a825  or          $s5, $v0, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
        ctx->pc = 0x2E55E8u;
        goto label_2e55e8;
    }
    ctx->pc = 0x2E55E0u;
    SET_GPR_U32(ctx, 31, 0x2E55E8u);
    ctx->pc = 0x2E55E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E55E0u;
            // 0x2e55e4: 0x54a825  or          $s5, $v0, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E55E8u; }
        if (ctx->pc != 0x2E55E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E55E8u; }
        if (ctx->pc != 0x2E55E8u) { return; }
    }
    ctx->pc = 0x2E55E8u;
label_2e55e8:
    // 0x2e55e8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2e55e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_2e55ec:
    // 0x2e55ec: 0xc04ab66  jal         func_12AD98
label_2e55f0:
    if (ctx->pc == 0x2E55F0u) {
        ctx->pc = 0x2E55F0u;
            // 0x2e55f0: 0x2a740  sll         $s4, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x2E55F4u;
        goto label_2e55f4;
    }
    ctx->pc = 0x2E55ECu;
    SET_GPR_U32(ctx, 31, 0x2E55F4u);
    ctx->pc = 0x2E55F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E55ECu;
            // 0x2e55f0: 0x2a740  sll         $s4, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E55F4u; }
        if (ctx->pc != 0x2E55F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E55F4u; }
        if (ctx->pc != 0x2E55F4u) { return; }
    }
    ctx->pc = 0x2E55F4u;
label_2e55f4:
    // 0x2e55f4: 0x542825  or          $a1, $v0, $s4
    ctx->pc = 0x2e55f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
label_2e55f8:
    // 0x2e55f8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2e55f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2e55fc:
    // 0x2e55fc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2e55fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e5600:
    // 0x2e5600: 0xc04f380  jal         func_13CE00
label_2e5604:
    if (ctx->pc == 0x2E5604u) {
        ctx->pc = 0x2E5604u;
            // 0x2e5604: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x2E5608u;
        goto label_2e5608;
    }
    ctx->pc = 0x2E5600u;
    SET_GPR_U32(ctx, 31, 0x2E5608u);
    ctx->pc = 0x2E5604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5600u;
            // 0x2e5604: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CE00u;
    if (runtime->hasFunction(0x13CE00u)) {
        auto targetFn = runtime->lookupFunction(0x13CE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5608u; }
        if (ctx->pc != 0x2E5608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CE00_0x13ce00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5608u; }
        if (ctx->pc != 0x2E5608u) { return; }
    }
    ctx->pc = 0x2E5608u;
label_2e5608:
    // 0x2e5608: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2e5608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2e560c:
    // 0x2e560c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x2e560cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2e5610:
    // 0x2e5610: 0xc04cd60  jal         func_133580
label_2e5614:
    if (ctx->pc == 0x2E5614u) {
        ctx->pc = 0x2E5614u;
            // 0x2e5614: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x2E5618u;
        goto label_2e5618;
    }
    ctx->pc = 0x2E5610u;
    SET_GPR_U32(ctx, 31, 0x2E5618u);
    ctx->pc = 0x2E5614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5610u;
            // 0x2e5614: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5618u; }
        if (ctx->pc != 0x2E5618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5618u; }
        if (ctx->pc != 0x2E5618u) { return; }
    }
    ctx->pc = 0x2E5618u;
label_2e5618:
    // 0x2e5618: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e5618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e561c:
    // 0x2e561c: 0xc04cce4  jal         func_133390
label_2e5620:
    if (ctx->pc == 0x2E5620u) {
        ctx->pc = 0x2E5620u;
            // 0x2e5620: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x2E5624u;
        goto label_2e5624;
    }
    ctx->pc = 0x2E561Cu;
    SET_GPR_U32(ctx, 31, 0x2E5624u);
    ctx->pc = 0x2E5620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E561Cu;
            // 0x2e5620: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133390u;
    if (runtime->hasFunction(0x133390u)) {
        auto targetFn = runtime->lookupFunction(0x133390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5624u; }
        if (ctx->pc != 0x2E5624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133390_0x133390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5624u; }
        if (ctx->pc != 0x2E5624u) { return; }
    }
    ctx->pc = 0x2E5624u;
label_2e5624:
    // 0x2e5624: 0x8e630110  lw          $v1, 0x110($s3)
    ctx->pc = 0x2e5624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 272)));
label_2e5628:
    // 0x2e5628: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x2e5628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e562c:
    // 0x2e562c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2e562cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e5630:
    // 0x2e5630: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e5630u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2e5634:
    // 0x2e5634: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2e5634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_2e5638:
    // 0x2e5638: 0x8e630110  lw          $v1, 0x110($s3)
    ctx->pc = 0x2e5638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 272)));
label_2e563c:
    // 0x2e563c: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x2e563cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e5640:
    // 0x2e5640: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2e5640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e5644:
    // 0x2e5644: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e5644u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2e5648:
    // 0x2e5648: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x2e5648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_2e564c:
    // 0x2e564c: 0x8e630110  lw          $v1, 0x110($s3)
    ctx->pc = 0x2e564cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 272)));
label_2e5650:
    // 0x2e5650: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x2e5650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e5654:
    // 0x2e5654: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2e5654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e5658:
    // 0x2e5658: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e5658u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2e565c:
    // 0x2e565c: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x2e565cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_2e5660:
    // 0x2e5660: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2e5660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2e5664:
    // 0x2e5664: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2e5664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2e5668:
    // 0x2e5668: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2e5668u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2e566c:
    // 0x2e566c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2e566cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2e5670:
    // 0x2e5670: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2e5670u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2e5674:
    // 0x2e5674: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2e5674u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2e5678:
    // 0x2e5678: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e5678u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e567c:
    // 0x2e567c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e567cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e5680:
    // 0x2e5680: 0x3e00008  jr          $ra
label_2e5684:
    if (ctx->pc == 0x2E5684u) {
        ctx->pc = 0x2E5684u;
            // 0x2e5684: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x2E5688u;
        goto label_2e5688;
    }
    ctx->pc = 0x2E5680u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E5684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5680u;
            // 0x2e5684: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E5688u;
label_2e5688:
    // 0x2e5688: 0x0  nop
    ctx->pc = 0x2e5688u;
    // NOP
label_2e568c:
    // 0x2e568c: 0x0  nop
    ctx->pc = 0x2e568cu;
    // NOP
label_2e5690:
    // 0x2e5690: 0x3e00008  jr          $ra
label_2e5694:
    if (ctx->pc == 0x2E5694u) {
        ctx->pc = 0x2E5698u;
        goto label_2e5698;
    }
    ctx->pc = 0x2E5690u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E5698u;
label_2e5698:
    // 0x2e5698: 0x0  nop
    ctx->pc = 0x2e5698u;
    // NOP
label_2e569c:
    // 0x2e569c: 0x0  nop
    ctx->pc = 0x2e569cu;
    // NOP
label_2e56a0:
    // 0x2e56a0: 0x3e00008  jr          $ra
label_2e56a4:
    if (ctx->pc == 0x2E56A4u) {
        ctx->pc = 0x2E56A8u;
        goto label_2e56a8;
    }
    ctx->pc = 0x2E56A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E56A8u;
label_2e56a8:
    // 0x2e56a8: 0x0  nop
    ctx->pc = 0x2e56a8u;
    // NOP
label_2e56ac:
    // 0x2e56ac: 0x0  nop
    ctx->pc = 0x2e56acu;
    // NOP
label_2e56b0:
    // 0x2e56b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e56b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2e56b4:
    // 0x2e56b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e56b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2e56b8:
    // 0x2e56b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e56b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2e56bc:
    // 0x2e56bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e56bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2e56c0:
    // 0x2e56c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e56c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e56c4:
    // 0x2e56c4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_2e56c8:
    if (ctx->pc == 0x2E56C8u) {
        ctx->pc = 0x2E56C8u;
            // 0x2e56c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E56CCu;
        goto label_2e56cc;
    }
    ctx->pc = 0x2E56C4u;
    {
        const bool branch_taken_0x2e56c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E56C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E56C4u;
            // 0x2e56c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e56c4) {
            ctx->pc = 0x2E5708u;
            goto label_2e5708;
        }
    }
    ctx->pc = 0x2E56CCu;
label_2e56cc:
    // 0x2e56cc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2e56ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2e56d0:
    // 0x2e56d0: 0x24423060  addiu       $v0, $v0, 0x3060
    ctx->pc = 0x2e56d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12384));
label_2e56d4:
    // 0x2e56d4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_2e56d8:
    if (ctx->pc == 0x2E56D8u) {
        ctx->pc = 0x2E56D8u;
            // 0x2e56d8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2E56DCu;
        goto label_2e56dc;
    }
    ctx->pc = 0x2E56D4u;
    {
        const bool branch_taken_0x2e56d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E56D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E56D4u;
            // 0x2e56d8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e56d4) {
            ctx->pc = 0x2E56F0u;
            goto label_2e56f0;
        }
    }
    ctx->pc = 0x2E56DCu;
label_2e56dc:
    // 0x2e56dc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2e56dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2e56e0:
    // 0x2e56e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e56e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e56e4:
    // 0x2e56e4: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x2e56e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_2e56e8:
    // 0x2e56e8: 0xc057a68  jal         func_15E9A0
label_2e56ec:
    if (ctx->pc == 0x2E56ECu) {
        ctx->pc = 0x2E56ECu;
            // 0x2e56ec: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2E56F0u;
        goto label_2e56f0;
    }
    ctx->pc = 0x2E56E8u;
    SET_GPR_U32(ctx, 31, 0x2E56F0u);
    ctx->pc = 0x2E56ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E56E8u;
            // 0x2e56ec: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E56F0u; }
        if (ctx->pc != 0x2E56F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E56F0u; }
        if (ctx->pc != 0x2E56F0u) { return; }
    }
    ctx->pc = 0x2E56F0u;
label_2e56f0:
    // 0x2e56f0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2e56f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2e56f4:
    // 0x2e56f4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2e56f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2e56f8:
    // 0x2e56f8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2e56fc:
    if (ctx->pc == 0x2E56FCu) {
        ctx->pc = 0x2E56FCu;
            // 0x2e56fc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E5700u;
        goto label_2e5700;
    }
    ctx->pc = 0x2E56F8u;
    {
        const bool branch_taken_0x2e56f8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2e56f8) {
            ctx->pc = 0x2E56FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E56F8u;
            // 0x2e56fc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E570Cu;
            goto label_2e570c;
        }
    }
    ctx->pc = 0x2E5700u;
label_2e5700:
    // 0x2e5700: 0xc0400a8  jal         func_1002A0
label_2e5704:
    if (ctx->pc == 0x2E5704u) {
        ctx->pc = 0x2E5704u;
            // 0x2e5704: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E5708u;
        goto label_2e5708;
    }
    ctx->pc = 0x2E5700u;
    SET_GPR_U32(ctx, 31, 0x2E5708u);
    ctx->pc = 0x2E5704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5700u;
            // 0x2e5704: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5708u; }
        if (ctx->pc != 0x2E5708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5708u; }
        if (ctx->pc != 0x2E5708u) { return; }
    }
    ctx->pc = 0x2E5708u;
label_2e5708:
    // 0x2e5708: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2e5708u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e570c:
    // 0x2e570c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e570cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2e5710:
    // 0x2e5710: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e5710u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e5714:
    // 0x2e5714: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e5714u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e5718:
    // 0x2e5718: 0x3e00008  jr          $ra
label_2e571c:
    if (ctx->pc == 0x2E571Cu) {
        ctx->pc = 0x2E571Cu;
            // 0x2e571c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2E5720u;
        goto label_2e5720;
    }
    ctx->pc = 0x2E5718u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E571Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5718u;
            // 0x2e571c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E5720u;
label_2e5720:
    // 0x2e5720: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e5720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2e5724:
    // 0x2e5724: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2e5724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2e5728:
    // 0x2e5728: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e5728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2e572c:
    // 0x2e572c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x2e572cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_2e5730:
    // 0x2e5730: 0x54a30004  bnel        $a1, $v1, . + 4 + (0x4 << 2)
label_2e5734:
    if (ctx->pc == 0x2E5734u) {
        ctx->pc = 0x2E5734u;
            // 0x2e5734: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x2E5738u;
        goto label_2e5738;
    }
    ctx->pc = 0x2E5730u;
    {
        const bool branch_taken_0x2e5730 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e5730) {
            ctx->pc = 0x2E5734u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5730u;
            // 0x2e5734: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E5744u;
            goto label_2e5744;
        }
    }
    ctx->pc = 0x2E5738u;
label_2e5738:
    // 0x2e5738: 0xc0b96f8  jal         func_2E5BE0
label_2e573c:
    if (ctx->pc == 0x2E573Cu) {
        ctx->pc = 0x2E5740u;
        goto label_2e5740;
    }
    ctx->pc = 0x2E5738u;
    SET_GPR_U32(ctx, 31, 0x2E5740u);
    ctx->pc = 0x2E5BE0u;
    if (runtime->hasFunction(0x2E5BE0u)) {
        auto targetFn = runtime->lookupFunction(0x2E5BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5740u; }
        if (ctx->pc != 0x2E5740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5BE0_0x2e5be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5740u; }
        if (ctx->pc != 0x2E5740u) { return; }
    }
    ctx->pc = 0x2E5740u;
label_2e5740:
    // 0x2e5740: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e5740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e5744:
    // 0x2e5744: 0x3e00008  jr          $ra
label_2e5748:
    if (ctx->pc == 0x2E5748u) {
        ctx->pc = 0x2E5748u;
            // 0x2e5748: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2E574Cu;
        goto label_2e574c;
    }
    ctx->pc = 0x2E5744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E5748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5744u;
            // 0x2e5748: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E574Cu;
label_2e574c:
    // 0x2e574c: 0x0  nop
    ctx->pc = 0x2e574cu;
    // NOP
label_2e5750:
    // 0x2e5750: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e5750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2e5754:
    // 0x2e5754: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e5754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e5758:
    // 0x2e5758: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e5758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2e575c:
    // 0x2e575c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2e575cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2e5760:
    // 0x2e5760: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e5760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2e5764:
    // 0x2e5764: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e5764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2e5768:
    // 0x2e5768: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e5768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2e576c:
    // 0x2e576c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x2e576cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_2e5770:
    // 0x2e5770: 0x10a30106  beq         $a1, $v1, . + 4 + (0x106 << 2)
label_2e5774:
    if (ctx->pc == 0x2E5774u) {
        ctx->pc = 0x2E5774u;
            // 0x2e5774: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E5778u;
        goto label_2e5778;
    }
    ctx->pc = 0x2E5770u;
    {
        const bool branch_taken_0x2e5770 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2E5774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5770u;
            // 0x2e5774: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5770) {
            ctx->pc = 0x2E5B8Cu;
            goto label_2e5b8c;
        }
    }
    ctx->pc = 0x2E5778u;
label_2e5778:
    // 0x2e5778: 0x50a000fd  beql        $a1, $zero, . + 4 + (0xFD << 2)
label_2e577c:
    if (ctx->pc == 0x2E577Cu) {
        ctx->pc = 0x2E577Cu;
            // 0x2e577c: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x2E5780u;
        goto label_2e5780;
    }
    ctx->pc = 0x2E5778u;
    {
        const bool branch_taken_0x2e5778 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5778) {
            ctx->pc = 0x2E577Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5778u;
            // 0x2e577c: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E5B70u;
            goto label_2e5b70;
        }
    }
    ctx->pc = 0x2E5780u;
label_2e5780:
    // 0x2e5780: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2e5780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2e5784:
    // 0x2e5784: 0x50a300d0  beql        $a1, $v1, . + 4 + (0xD0 << 2)
label_2e5788:
    if (ctx->pc == 0x2E5788u) {
        ctx->pc = 0x2E5788u;
            // 0x2e5788: 0x9263010c  lbu         $v1, 0x10C($s3) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 268)));
        ctx->pc = 0x2E578Cu;
        goto label_2e578c;
    }
    ctx->pc = 0x2E5784u;
    {
        const bool branch_taken_0x2e5784 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e5784) {
            ctx->pc = 0x2E5788u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5784u;
            // 0x2e5788: 0x9263010c  lbu         $v1, 0x10C($s3) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 268)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E5AC8u;
            goto label_2e5ac8;
        }
    }
    ctx->pc = 0x2E578Cu;
label_2e578c:
    // 0x2e578c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e578cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e5790:
    // 0x2e5790: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_2e5794:
    if (ctx->pc == 0x2E5794u) {
        ctx->pc = 0x2E5794u;
            // 0x2e5794: 0x8e6200f4  lw          $v0, 0xF4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 244)));
        ctx->pc = 0x2E5798u;
        goto label_2e5798;
    }
    ctx->pc = 0x2E5790u;
    {
        const bool branch_taken_0x2e5790 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2e5790) {
            ctx->pc = 0x2E5794u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5790u;
            // 0x2e5794: 0x8e6200f4  lw          $v0, 0xF4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 244)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E57A0u;
            goto label_2e57a0;
        }
    }
    ctx->pc = 0x2E5798u;
label_2e5798:
    // 0x2e5798: 0x10000102  b           . + 4 + (0x102 << 2)
label_2e579c:
    if (ctx->pc == 0x2E579Cu) {
        ctx->pc = 0x2E579Cu;
            // 0x2e579c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x2E57A0u;
        goto label_2e57a0;
    }
    ctx->pc = 0x2E5798u;
    {
        const bool branch_taken_0x2e5798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E579Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5798u;
            // 0x2e579c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5798) {
            ctx->pc = 0x2E5BA4u;
            goto label_2e5ba4;
        }
    }
    ctx->pc = 0x2E57A0u;
label_2e57a0:
    // 0x2e57a0: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x2e57a0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2e57a4:
    // 0x2e57a4: 0xc0b96f0  jal         func_2E5BC0
label_2e57a8:
    if (ctx->pc == 0x2E57A8u) {
        ctx->pc = 0x2E57A8u;
            // 0x2e57a8: 0x24061000  addiu       $a2, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->pc = 0x2E57ACu;
        goto label_2e57ac;
    }
    ctx->pc = 0x2E57A4u;
    SET_GPR_U32(ctx, 31, 0x2E57ACu);
    ctx->pc = 0x2E57A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E57A4u;
            // 0x2e57a8: 0x24061000  addiu       $a2, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5BC0u;
    if (runtime->hasFunction(0x2E5BC0u)) {
        auto targetFn = runtime->lookupFunction(0x2E5BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E57ACu; }
        if (ctx->pc != 0x2E57ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5BC0_0x2e5bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E57ACu; }
        if (ctx->pc != 0x2E57ACu) { return; }
    }
    ctx->pc = 0x2E57ACu;
label_2e57ac:
    // 0x2e57ac: 0x8e6400f4  lw          $a0, 0xF4($s3)
    ctx->pc = 0x2e57acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 244)));
label_2e57b0:
    // 0x2e57b0: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2e57b0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2e57b4:
    // 0x2e57b4: 0x94820006  lhu         $v0, 0x6($a0)
    ctx->pc = 0x2e57b4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_2e57b8:
    // 0x2e57b8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_2e57bc:
    if (ctx->pc == 0x2E57BCu) {
        ctx->pc = 0x2E57BCu;
            // 0x2e57bc: 0x84910030  lh          $s1, 0x30($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 48)));
        ctx->pc = 0x2E57C0u;
        goto label_2e57c0;
    }
    ctx->pc = 0x2E57B8u;
    {
        const bool branch_taken_0x2e57b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e57b8) {
            ctx->pc = 0x2E57BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E57B8u;
            // 0x2e57bc: 0x84910030  lh          $s1, 0x30($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E57C8u;
            goto label_2e57c8;
        }
    }
    ctx->pc = 0x2E57C0u;
label_2e57c0:
    // 0x2e57c0: 0x100000b4  b           . + 4 + (0xB4 << 2)
label_2e57c4:
    if (ctx->pc == 0x2E57C4u) {
        ctx->pc = 0x2E57C4u;
            // 0x2e57c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E57C8u;
        goto label_2e57c8;
    }
    ctx->pc = 0x2E57C0u;
    {
        const bool branch_taken_0x2e57c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E57C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E57C0u;
            // 0x2e57c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e57c0) {
            ctx->pc = 0x2E5A94u;
            goto label_2e5a94;
        }
    }
    ctx->pc = 0x2E57C8u;
label_2e57c8:
    // 0x2e57c8: 0x2a210002  slti        $at, $s1, 0x2
    ctx->pc = 0x2e57c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_2e57cc:
    // 0x2e57cc: 0x14200050  bnez        $at, . + 4 + (0x50 << 2)
label_2e57d0:
    if (ctx->pc == 0x2E57D0u) {
        ctx->pc = 0x2E57D0u;
            // 0x2e57d0: 0x8e7200f0  lw          $s2, 0xF0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
        ctx->pc = 0x2E57D4u;
        goto label_2e57d4;
    }
    ctx->pc = 0x2E57CCu;
    {
        const bool branch_taken_0x2e57cc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E57D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E57CCu;
            // 0x2e57d0: 0x8e7200f0  lw          $s2, 0xF0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e57cc) {
            ctx->pc = 0x2E5910u;
            goto label_2e5910;
        }
    }
    ctx->pc = 0x2E57D4u;
label_2e57d4:
    // 0x2e57d4: 0x8e630120  lw          $v1, 0x120($s3)
    ctx->pc = 0x2e57d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 288)));
label_2e57d8:
    // 0x2e57d8: 0x223102b  sltu        $v0, $s1, $v1
    ctx->pc = 0x2e57d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2e57dc:
    // 0x2e57dc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2e57e0:
    if (ctx->pc == 0x2E57E0u) {
        ctx->pc = 0x2E57E0u;
            // 0x2e57e0: 0x94850000  lhu         $a1, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x2E57E4u;
        goto label_2e57e4;
    }
    ctx->pc = 0x2E57DCu;
    {
        const bool branch_taken_0x2e57dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e57dc) {
            ctx->pc = 0x2E57E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E57DCu;
            // 0x2e57e0: 0x94850000  lhu         $a1, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E57F0u;
            goto label_2e57f0;
        }
    }
    ctx->pc = 0x2E57E4u;
label_2e57e4:
    // 0x2e57e4: 0x38c3c  dsll32      $s1, $v1, 16
    ctx->pc = 0x2e57e4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) << (32 + 16));
label_2e57e8:
    // 0x2e57e8: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x2e57e8u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
label_2e57ec:
    // 0x2e57ec: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x2e57ecu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_2e57f0:
    // 0x2e57f0: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x2e57f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_2e57f4:
    // 0x2e57f4: 0xc0b96f0  jal         func_2E5BC0
label_2e57f8:
    if (ctx->pc == 0x2E57F8u) {
        ctx->pc = 0x2E57F8u;
            // 0x2e57f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E57FCu;
        goto label_2e57fc;
    }
    ctx->pc = 0x2E57F4u;
    SET_GPR_U32(ctx, 31, 0x2E57FCu);
    ctx->pc = 0x2E57F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E57F4u;
            // 0x2e57f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5BC0u;
    if (runtime->hasFunction(0x2E5BC0u)) {
        auto targetFn = runtime->lookupFunction(0x2E5BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E57FCu; }
        if (ctx->pc != 0x2E57FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5BC0_0x2e5bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E57FCu; }
        if (ctx->pc != 0x2E57FCu) { return; }
    }
    ctx->pc = 0x2E57FCu;
label_2e57fc:
    // 0x2e57fc: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_2e5800:
    if (ctx->pc == 0x2E5800u) {
        ctx->pc = 0x2E5804u;
        goto label_2e5804;
    }
    ctx->pc = 0x2E57FCu;
    {
        const bool branch_taken_0x2e57fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e57fc) {
            ctx->pc = 0x2E5898u;
            goto label_2e5898;
        }
    }
    ctx->pc = 0x2E5804u;
label_2e5804:
    // 0x2e5804: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x2e5804u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e5808:
    // 0x2e5808: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e5808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_2e580c:
    // 0x2e580c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e580cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2e5810:
    // 0x2e5810: 0x8e6300f4  lw          $v1, 0xF4($s3)
    ctx->pc = 0x2e5810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 244)));
label_2e5814:
    // 0x2e5814: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e5814u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e5818:
    // 0x2e5818: 0x0  nop
    ctx->pc = 0x2e5818u;
    // NOP
label_2e581c:
    // 0x2e581c: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x2e581cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[2] = ctx->f[1] / ctx->f[0];
label_2e5820:
    // 0x2e5820: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x2e5820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_2e5824:
    // 0x2e5824: 0xc4610044  lwc1        $f1, 0x44($v1)
    ctx->pc = 0x2e5824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e5828:
    // 0x2e5828: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x2e5828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e582c:
    // 0x2e582c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e582cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2e5830:
    // 0x2e5830: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2e5830u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2e5834:
    // 0x2e5834: 0xe66000c0  swc1        $f0, 0xC0($s3)
    ctx->pc = 0x2e5834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 192), bits); }
label_2e5838:
    // 0x2e5838: 0x8e6300f4  lw          $v1, 0xF4($s3)
    ctx->pc = 0x2e5838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 244)));
label_2e583c:
    // 0x2e583c: 0xc4610048  lwc1        $f1, 0x48($v1)
    ctx->pc = 0x2e583cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e5840:
    // 0x2e5840: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x2e5840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e5844:
    // 0x2e5844: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e5844u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2e5848:
    // 0x2e5848: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2e5848u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2e584c:
    // 0x2e584c: 0xe66000c4  swc1        $f0, 0xC4($s3)
    ctx->pc = 0x2e584cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 196), bits); }
label_2e5850:
    // 0x2e5850: 0x8e6300f4  lw          $v1, 0xF4($s3)
    ctx->pc = 0x2e5850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 244)));
label_2e5854:
    // 0x2e5854: 0xc461004c  lwc1        $f1, 0x4C($v1)
    ctx->pc = 0x2e5854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e5858:
    // 0x2e5858: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x2e5858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e585c:
    // 0x2e585c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e585cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2e5860:
    // 0x2e5860: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2e5860u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2e5864:
    // 0x2e5864: 0xe66000c8  swc1        $f0, 0xC8($s3)
    ctx->pc = 0x2e5864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 200), bits); }
label_2e5868:
    // 0x2e5868: 0x8e6300f4  lw          $v1, 0xF4($s3)
    ctx->pc = 0x2e5868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 244)));
label_2e586c:
    // 0x2e586c: 0xc4610050  lwc1        $f1, 0x50($v1)
    ctx->pc = 0x2e586cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e5870:
    // 0x2e5870: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x2e5870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e5874:
    // 0x2e5874: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e5874u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2e5878:
    // 0x2e5878: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2e5878u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2e587c:
    // 0x2e587c: 0xe66000cc  swc1        $f0, 0xCC($s3)
    ctx->pc = 0x2e587cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 204), bits); }
label_2e5880:
    // 0x2e5880: 0x8e6400f4  lw          $a0, 0xF4($s3)
    ctx->pc = 0x2e5880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 244)));
label_2e5884:
    // 0x2e5884: 0x84830030  lh          $v1, 0x30($a0)
    ctx->pc = 0x2e5884u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 48)));
label_2e5888:
    // 0x2e5888: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2e5888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2e588c:
    // 0x2e588c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2e588cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2e5890:
    // 0x2e5890: 0x1000001f  b           . + 4 + (0x1F << 2)
label_2e5894:
    if (ctx->pc == 0x2E5894u) {
        ctx->pc = 0x2E5894u;
            // 0x2e5894: 0xa4820030  sh          $v0, 0x30($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 48), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2E5898u;
        goto label_2e5898;
    }
    ctx->pc = 0x2E5890u;
    {
        const bool branch_taken_0x2e5890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5890u;
            // 0x2e5894: 0xa4820030  sh          $v0, 0x30($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 48), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5890) {
            ctx->pc = 0x2E5910u;
            goto label_2e5910;
        }
    }
    ctx->pc = 0x2E5898u;
label_2e5898:
    // 0x2e5898: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x2e5898u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e589c:
    // 0x2e589c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e589cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2e58a0:
    // 0x2e58a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e58a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2e58a4:
    // 0x2e58a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e58a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e58a8:
    // 0x2e58a8: 0x0  nop
    ctx->pc = 0x2e58a8u;
    // NOP
label_2e58ac:
    // 0x2e58ac: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x2e58acu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[2] = ctx->f[1] / ctx->f[0];
label_2e58b0:
    // 0x2e58b0: 0x8e6200f4  lw          $v0, 0xF4($s3)
    ctx->pc = 0x2e58b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 244)));
label_2e58b4:
    // 0x2e58b4: 0xc4410044  lwc1        $f1, 0x44($v0)
    ctx->pc = 0x2e58b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e58b8:
    // 0x2e58b8: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x2e58b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e58bc:
    // 0x2e58bc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e58bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2e58c0:
    // 0x2e58c0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2e58c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2e58c4:
    // 0x2e58c4: 0xe66000c0  swc1        $f0, 0xC0($s3)
    ctx->pc = 0x2e58c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 192), bits); }
label_2e58c8:
    // 0x2e58c8: 0x8e6200f4  lw          $v0, 0xF4($s3)
    ctx->pc = 0x2e58c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 244)));
label_2e58cc:
    // 0x2e58cc: 0xc4410048  lwc1        $f1, 0x48($v0)
    ctx->pc = 0x2e58ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e58d0:
    // 0x2e58d0: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x2e58d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e58d4:
    // 0x2e58d4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e58d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2e58d8:
    // 0x2e58d8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2e58d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2e58dc:
    // 0x2e58dc: 0xe66000c4  swc1        $f0, 0xC4($s3)
    ctx->pc = 0x2e58dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 196), bits); }
label_2e58e0:
    // 0x2e58e0: 0x8e6200f4  lw          $v0, 0xF4($s3)
    ctx->pc = 0x2e58e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 244)));
label_2e58e4:
    // 0x2e58e4: 0xc441004c  lwc1        $f1, 0x4C($v0)
    ctx->pc = 0x2e58e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e58e8:
    // 0x2e58e8: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x2e58e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e58ec:
    // 0x2e58ec: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e58ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2e58f0:
    // 0x2e58f0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2e58f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2e58f4:
    // 0x2e58f4: 0xe66000c8  swc1        $f0, 0xC8($s3)
    ctx->pc = 0x2e58f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 200), bits); }
label_2e58f8:
    // 0x2e58f8: 0x8e6200f4  lw          $v0, 0xF4($s3)
    ctx->pc = 0x2e58f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 244)));
label_2e58fc:
    // 0x2e58fc: 0xc4410050  lwc1        $f1, 0x50($v0)
    ctx->pc = 0x2e58fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e5900:
    // 0x2e5900: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x2e5900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e5904:
    // 0x2e5904: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e5904u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2e5908:
    // 0x2e5908: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2e5908u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2e590c:
    // 0x2e590c: 0xe66000cc  swc1        $f0, 0xCC($s3)
    ctx->pc = 0x2e590cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 204), bits); }
label_2e5910:
    // 0x2e5910: 0x8e6300f4  lw          $v1, 0xF4($s3)
    ctx->pc = 0x2e5910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 244)));
label_2e5914:
    // 0x2e5914: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2e5914u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_2e5918:
    // 0x2e5918: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
label_2e591c:
    if (ctx->pc == 0x2E591Cu) {
        ctx->pc = 0x2E591Cu;
            // 0x2e591c: 0xc4600034  lwc1        $f0, 0x34($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x2E5920u;
        goto label_2e5920;
    }
    ctx->pc = 0x2E5918u;
    {
        const bool branch_taken_0x2e5918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e5918) {
            ctx->pc = 0x2E591Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5918u;
            // 0x2e591c: 0xc4600034  lwc1        $f0, 0x34($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E5994u;
            goto label_2e5994;
        }
    }
    ctx->pc = 0x2E5920u;
label_2e5920:
    // 0x2e5920: 0x3c023b80  lui         $v0, 0x3B80
    ctx->pc = 0x2e5920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15232 << 16));
label_2e5924:
    // 0x2e5924: 0x34428081  ori         $v0, $v0, 0x8081
    ctx->pc = 0x2e5924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32897);
label_2e5928:
    // 0x2e5928: 0xc66000c0  lwc1        $f0, 0xC0($s3)
    ctx->pc = 0x2e5928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e592c:
    // 0x2e592c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e592cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e5930:
    // 0x2e5930: 0x0  nop
    ctx->pc = 0x2e5930u;
    // NOP
label_2e5934:
    // 0x2e5934: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e5934u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2e5938:
    // 0x2e5938: 0xe66000c0  swc1        $f0, 0xC0($s3)
    ctx->pc = 0x2e5938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 192), bits); }
label_2e593c:
    // 0x2e593c: 0xc66000c4  lwc1        $f0, 0xC4($s3)
    ctx->pc = 0x2e593cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e5940:
    // 0x2e5940: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e5940u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2e5944:
    // 0x2e5944: 0xe66000c4  swc1        $f0, 0xC4($s3)
    ctx->pc = 0x2e5944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 196), bits); }
label_2e5948:
    // 0x2e5948: 0xc66000c8  lwc1        $f0, 0xC8($s3)
    ctx->pc = 0x2e5948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e594c:
    // 0x2e594c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e594cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2e5950:
    // 0x2e5950: 0xe66000c8  swc1        $f0, 0xC8($s3)
    ctx->pc = 0x2e5950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 200), bits); }
label_2e5954:
    // 0x2e5954: 0xc66000cc  lwc1        $f0, 0xCC($s3)
    ctx->pc = 0x2e5954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e5958:
    // 0x2e5958: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e5958u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2e595c:
    // 0x2e595c: 0xe66000cc  swc1        $f0, 0xCC($s3)
    ctx->pc = 0x2e595cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 204), bits); }
label_2e5960:
    // 0x2e5960: 0x8e6200f4  lw          $v0, 0xF4($s3)
    ctx->pc = 0x2e5960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 244)));
label_2e5964:
    // 0x2e5964: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x2e5964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e5968:
    // 0x2e5968: 0xe66000d0  swc1        $f0, 0xD0($s3)
    ctx->pc = 0x2e5968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 208), bits); }
label_2e596c:
    // 0x2e596c: 0x8e6200f4  lw          $v0, 0xF4($s3)
    ctx->pc = 0x2e596cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 244)));
label_2e5970:
    // 0x2e5970: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x2e5970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e5974:
    // 0x2e5974: 0xe66000d4  swc1        $f0, 0xD4($s3)
    ctx->pc = 0x2e5974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 212), bits); }
label_2e5978:
    // 0x2e5978: 0x8e6200f4  lw          $v0, 0xF4($s3)
    ctx->pc = 0x2e5978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 244)));
label_2e597c:
    // 0x2e597c: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x2e597cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e5980:
    // 0x2e5980: 0xe66000d8  swc1        $f0, 0xD8($s3)
    ctx->pc = 0x2e5980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 216), bits); }
label_2e5984:
    // 0x2e5984: 0x8e6200f4  lw          $v0, 0xF4($s3)
    ctx->pc = 0x2e5984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 244)));
label_2e5988:
    // 0x2e5988: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x2e5988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e598c:
    // 0x2e598c: 0x1000000b  b           . + 4 + (0xB << 2)
label_2e5990:
    if (ctx->pc == 0x2E5990u) {
        ctx->pc = 0x2E5990u;
            // 0x2e5990: 0xe66000dc  swc1        $f0, 0xDC($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 220), bits); }
        ctx->pc = 0x2E5994u;
        goto label_2e5994;
    }
    ctx->pc = 0x2E598Cu;
    {
        const bool branch_taken_0x2e598c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E598Cu;
            // 0x2e5990: 0xe66000dc  swc1        $f0, 0xDC($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 220), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e598c) {
            ctx->pc = 0x2E59BCu;
            goto label_2e59bc;
        }
    }
    ctx->pc = 0x2E5994u;
label_2e5994:
    // 0x2e5994: 0xe66000d0  swc1        $f0, 0xD0($s3)
    ctx->pc = 0x2e5994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 208), bits); }
label_2e5998:
    // 0x2e5998: 0x8e6200f4  lw          $v0, 0xF4($s3)
    ctx->pc = 0x2e5998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 244)));
label_2e599c:
    // 0x2e599c: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x2e599cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e59a0:
    // 0x2e59a0: 0xe66000d4  swc1        $f0, 0xD4($s3)
    ctx->pc = 0x2e59a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 212), bits); }
label_2e59a4:
    // 0x2e59a4: 0x8e6200f4  lw          $v0, 0xF4($s3)
    ctx->pc = 0x2e59a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 244)));
label_2e59a8:
    // 0x2e59a8: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x2e59a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e59ac:
    // 0x2e59ac: 0xe66000d8  swc1        $f0, 0xD8($s3)
    ctx->pc = 0x2e59acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 216), bits); }
label_2e59b0:
    // 0x2e59b0: 0x8e6200f4  lw          $v0, 0xF4($s3)
    ctx->pc = 0x2e59b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 244)));
label_2e59b4:
    // 0x2e59b4: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x2e59b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e59b8:
    // 0x2e59b8: 0xe66000dc  swc1        $f0, 0xDC($s3)
    ctx->pc = 0x2e59b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 220), bits); }
label_2e59bc:
    // 0x2e59bc: 0x52000018  beql        $s0, $zero, . + 4 + (0x18 << 2)
label_2e59c0:
    if (ctx->pc == 0x2E59C0u) {
        ctx->pc = 0x2E59C0u;
            // 0x2e59c0: 0x8e6200f4  lw          $v0, 0xF4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 244)));
        ctx->pc = 0x2E59C4u;
        goto label_2e59c4;
    }
    ctx->pc = 0x2E59BCu;
    {
        const bool branch_taken_0x2e59bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e59bc) {
            ctx->pc = 0x2E59C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E59BCu;
            // 0x2e59c0: 0x8e6200f4  lw          $v0, 0xF4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 244)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E5A20u;
            goto label_2e5a20;
        }
    }
    ctx->pc = 0x2E59C4u;
label_2e59c4:
    // 0x2e59c4: 0x8e6300f4  lw          $v1, 0xF4($s3)
    ctx->pc = 0x2e59c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 244)));
label_2e59c8:
    // 0x2e59c8: 0xc462007c  lwc1        $f2, 0x7C($v1)
    ctx->pc = 0x2e59c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2e59cc:
    // 0x2e59cc: 0x84620030  lh          $v0, 0x30($v1)
    ctx->pc = 0x2e59ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_2e59d0:
    // 0x2e59d0: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2e59d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e59d4:
    // 0x2e59d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e59d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e59d8:
    // 0x2e59d8: 0x0  nop
    ctx->pc = 0x2e59d8u;
    // NOP
label_2e59dc:
    // 0x2e59dc: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x2e59dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_2e59e0:
    // 0x2e59e0: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x2e59e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_2e59e4:
    // 0x2e59e4: 0x46020803  div.s       $f0, $f1, $f2
    ctx->pc = 0x2e59e4u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[2];
label_2e59e8:
    // 0x2e59e8: 0xe66000e0  swc1        $f0, 0xE0($s3)
    ctx->pc = 0x2e59e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 224), bits); }
label_2e59ec:
    // 0x2e59ec: 0x8e6200f4  lw          $v0, 0xF4($s3)
    ctx->pc = 0x2e59ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 244)));
label_2e59f0:
    // 0x2e59f0: 0xc6600118  lwc1        $f0, 0x118($s3)
    ctx->pc = 0x2e59f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e59f4:
    // 0x2e59f4: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x2e59f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e59f8:
    // 0x2e59f8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2e59f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2e59fc:
    // 0x2e59fc: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2e59fcu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
label_2e5a00:
    // 0x2e5a00: 0xe66000e4  swc1        $f0, 0xE4($s3)
    ctx->pc = 0x2e5a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 228), bits); }
label_2e5a04:
    // 0x2e5a04: 0x8e6200f4  lw          $v0, 0xF4($s3)
    ctx->pc = 0x2e5a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 244)));
label_2e5a08:
    // 0x2e5a08: 0xc660011c  lwc1        $f0, 0x11C($s3)
    ctx->pc = 0x2e5a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e5a0c:
    // 0x2e5a0c: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x2e5a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e5a10:
    // 0x2e5a10: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2e5a10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2e5a14:
    // 0x2e5a14: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2e5a14u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
label_2e5a18:
    // 0x2e5a18: 0xe66000e8  swc1        $f0, 0xE8($s3)
    ctx->pc = 0x2e5a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 232), bits); }
label_2e5a1c:
    // 0x2e5a1c: 0x8e6200f4  lw          $v0, 0xF4($s3)
    ctx->pc = 0x2e5a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 244)));
label_2e5a20:
    // 0x2e5a20: 0x94430006  lhu         $v1, 0x6($v0)
    ctx->pc = 0x2e5a20u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
label_2e5a24:
    // 0x2e5a24: 0xa6400034  sh          $zero, 0x34($s2)
    ctx->pc = 0x2e5a24u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 52), (uint16_t)GPR_U32(ctx, 0));
label_2e5a28:
    // 0x2e5a28: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e5a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2e5a2c:
    // 0x2e5a2c: 0x8e6200f4  lw          $v0, 0xF4($s3)
    ctx->pc = 0x2e5a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 244)));
label_2e5a30:
    // 0x2e5a30: 0x84420032  lh          $v0, 0x32($v0)
    ctx->pc = 0x2e5a30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 50)));
label_2e5a34:
    // 0x2e5a34: 0xa6420036  sh          $v0, 0x36($s2)
    ctx->pc = 0x2e5a34u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 54), (uint16_t)GPR_U32(ctx, 2));
label_2e5a38:
    // 0x2e5a38: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_2e5a3c:
    if (ctx->pc == 0x2E5A3Cu) {
        ctx->pc = 0x2E5A3Cu;
            // 0x2e5a3c: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->pc = 0x2E5A40u;
        goto label_2e5a40;
    }
    ctx->pc = 0x2E5A38u;
    {
        const bool branch_taken_0x2e5a38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5A38u;
            // 0x2e5a3c: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5a38) {
            ctx->pc = 0x2E5A24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e5a24;
        }
    }
    ctx->pc = 0x2E5A40u;
label_2e5a40:
    // 0x2e5a40: 0xa66000ec  sh          $zero, 0xEC($s3)
    ctx->pc = 0x2e5a40u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 236), (uint16_t)GPR_U32(ctx, 0));
label_2e5a44:
    // 0x2e5a44: 0x8e6500f8  lw          $a1, 0xF8($s3)
    ctx->pc = 0x2e5a44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 248)));
label_2e5a48:
    // 0x2e5a48: 0xc04cc04  jal         func_133010
label_2e5a4c:
    if (ctx->pc == 0x2E5A4Cu) {
        ctx->pc = 0x2E5A4Cu;
            // 0x2e5a4c: 0x26640070  addiu       $a0, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->pc = 0x2E5A50u;
        goto label_2e5a50;
    }
    ctx->pc = 0x2E5A48u;
    SET_GPR_U32(ctx, 31, 0x2E5A50u);
    ctx->pc = 0x2E5A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5A48u;
            // 0x2e5a4c: 0x26640070  addiu       $a0, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5A50u; }
        if (ctx->pc != 0x2E5A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5A50u; }
        if (ctx->pc != 0x2E5A50u) { return; }
    }
    ctx->pc = 0x2E5A50u;
label_2e5a50:
    // 0x2e5a50: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e5a50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2e5a54:
    // 0x2e5a54: 0xae62007c  sw          $v0, 0x7C($s3)
    ctx->pc = 0x2e5a54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 2));
label_2e5a58:
    // 0x2e5a58: 0x8e620104  lw          $v0, 0x104($s3)
    ctx->pc = 0x2e5a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
label_2e5a5c:
    // 0x2e5a5c: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_2e5a60:
    if (ctx->pc == 0x2E5A60u) {
        ctx->pc = 0x2E5A60u;
            // 0x2e5a60: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x2E5A64u;
        goto label_2e5a64;
    }
    ctx->pc = 0x2E5A5Cu;
    {
        const bool branch_taken_0x2e5a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5a5c) {
            ctx->pc = 0x2E5A60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5A5Cu;
            // 0x2e5a60: 0x64020001  daddiu      $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E5A94u;
            goto label_2e5a94;
        }
    }
    ctx->pc = 0x2E5A64u;
label_2e5a64:
    // 0x2e5a64: 0x8e6200f4  lw          $v0, 0xF4($s3)
    ctx->pc = 0x2e5a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 244)));
label_2e5a68:
    // 0x2e5a68: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e5a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e5a6c:
    // 0x2e5a6c: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x2e5a6cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2e5a70:
    // 0x2e5a70: 0xc0b96f0  jal         func_2E5BC0
label_2e5a74:
    if (ctx->pc == 0x2E5A74u) {
        ctx->pc = 0x2E5A74u;
            // 0x2e5a74: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->pc = 0x2E5A78u;
        goto label_2e5a78;
    }
    ctx->pc = 0x2E5A70u;
    SET_GPR_U32(ctx, 31, 0x2E5A78u);
    ctx->pc = 0x2E5A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5A70u;
            // 0x2e5a74: 0x24060200  addiu       $a2, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5BC0u;
    if (runtime->hasFunction(0x2E5BC0u)) {
        auto targetFn = runtime->lookupFunction(0x2E5BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5A78u; }
        if (ctx->pc != 0x2E5A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5BC0_0x2e5bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5A78u; }
        if (ctx->pc != 0x2E5A78u) { return; }
    }
    ctx->pc = 0x2E5A78u;
label_2e5a78:
    // 0x2e5a78: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2e5a7c:
    if (ctx->pc == 0x2E5A7Cu) {
        ctx->pc = 0x2E5A80u;
        goto label_2e5a80;
    }
    ctx->pc = 0x2E5A78u;
    {
        const bool branch_taken_0x2e5a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5a78) {
            ctx->pc = 0x2E5A90u;
            goto label_2e5a90;
        }
    }
    ctx->pc = 0x2E5A80u;
label_2e5a80:
    // 0x2e5a80: 0x8e650104  lw          $a1, 0x104($s3)
    ctx->pc = 0x2e5a80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
label_2e5a84:
    // 0x2e5a84: 0x8e6600fc  lw          $a2, 0xFC($s3)
    ctx->pc = 0x2e5a84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 252)));
label_2e5a88:
    // 0x2e5a88: 0xc04ccc4  jal         func_133310
label_2e5a8c:
    if (ctx->pc == 0x2E5A8Cu) {
        ctx->pc = 0x2E5A8Cu;
            // 0x2e5a8c: 0x26640060  addiu       $a0, $s3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
        ctx->pc = 0x2E5A90u;
        goto label_2e5a90;
    }
    ctx->pc = 0x2E5A88u;
    SET_GPR_U32(ctx, 31, 0x2E5A90u);
    ctx->pc = 0x2E5A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5A88u;
            // 0x2e5a8c: 0x26640060  addiu       $a0, $s3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133310u;
    if (runtime->hasFunction(0x133310u)) {
        auto targetFn = runtime->lookupFunction(0x133310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5A90u; }
        if (ctx->pc != 0x2E5A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133310_0x133310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5A90u; }
        if (ctx->pc != 0x2E5A90u) { return; }
    }
    ctx->pc = 0x2E5A90u;
label_2e5a90:
    // 0x2e5a90: 0x64020001  daddiu      $v0, $zero, 0x1
    ctx->pc = 0x2e5a90u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_2e5a94:
    // 0x2e5a94: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_2e5a98:
    if (ctx->pc == 0x2E5A98u) {
        ctx->pc = 0x2E5A98u;
            // 0x2e5a98: 0x8e790000  lw          $t9, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x2E5A9Cu;
        goto label_2e5a9c;
    }
    ctx->pc = 0x2E5A94u;
    {
        const bool branch_taken_0x2e5a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e5a94) {
            ctx->pc = 0x2E5A98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5A94u;
            // 0x2e5a98: 0x8e790000  lw          $t9, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E5AB8u;
            goto label_2e5ab8;
        }
    }
    ctx->pc = 0x2E5A9Cu;
label_2e5a9c:
    // 0x2e5a9c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2e5a9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e5aa0:
    // 0x2e5aa0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e5aa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e5aa4:
    // 0x2e5aa4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2e5aa4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2e5aa8:
    // 0x2e5aa8: 0x320f809  jalr        $t9
label_2e5aac:
    if (ctx->pc == 0x2E5AACu) {
        ctx->pc = 0x2E5AACu;
            // 0x2e5aac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E5AB0u;
        goto label_2e5ab0;
    }
    ctx->pc = 0x2E5AA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E5AB0u);
        ctx->pc = 0x2E5AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5AA8u;
            // 0x2e5aac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E5AB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E5AB0u; }
            if (ctx->pc != 0x2E5AB0u) { return; }
        }
        }
    }
    ctx->pc = 0x2E5AB0u;
label_2e5ab0:
    // 0x2e5ab0: 0x1000003b  b           . + 4 + (0x3B << 2)
label_2e5ab4:
    if (ctx->pc == 0x2E5AB4u) {
        ctx->pc = 0x2E5AB8u;
        goto label_2e5ab8;
    }
    ctx->pc = 0x2E5AB0u;
    {
        const bool branch_taken_0x2e5ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5ab0) {
            ctx->pc = 0x2E5BA0u;
            goto label_2e5ba0;
        }
    }
    ctx->pc = 0x2E5AB8u;
label_2e5ab8:
    // 0x2e5ab8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2e5ab8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2e5abc:
    // 0x2e5abc: 0x320f809  jalr        $t9
label_2e5ac0:
    if (ctx->pc == 0x2E5AC0u) {
        ctx->pc = 0x2E5AC0u;
            // 0x2e5ac0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E5AC4u;
        goto label_2e5ac4;
    }
    ctx->pc = 0x2E5ABCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E5AC4u);
        ctx->pc = 0x2E5AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5ABCu;
            // 0x2e5ac0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E5AC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E5AC4u; }
            if (ctx->pc != 0x2E5AC4u) { return; }
        }
        }
    }
    ctx->pc = 0x2E5AC4u;
label_2e5ac4:
    // 0x2e5ac4: 0x9263010c  lbu         $v1, 0x10C($s3)
    ctx->pc = 0x2e5ac4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 268)));
label_2e5ac8:
    // 0x2e5ac8: 0x5460000f  bnel        $v1, $zero, . + 4 + (0xF << 2)
label_2e5acc:
    if (ctx->pc == 0x2E5ACCu) {
        ctx->pc = 0x2E5ACCu;
            // 0x2e5acc: 0x8e640124  lw          $a0, 0x124($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 292)));
        ctx->pc = 0x2E5AD0u;
        goto label_2e5ad0;
    }
    ctx->pc = 0x2E5AC8u;
    {
        const bool branch_taken_0x2e5ac8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e5ac8) {
            ctx->pc = 0x2E5ACCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5AC8u;
            // 0x2e5acc: 0x8e640124  lw          $a0, 0x124($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 292)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E5B08u;
            goto label_2e5b08;
        }
    }
    ctx->pc = 0x2E5AD0u;
label_2e5ad0:
    // 0x2e5ad0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2e5ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_2e5ad4:
    // 0x2e5ad4: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x2e5ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_2e5ad8:
    // 0x2e5ad8: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x2e5ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_2e5adc:
    // 0x2e5adc: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x2e5adcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_2e5ae0:
    // 0x2e5ae0: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_2e5ae4:
    if (ctx->pc == 0x2E5AE4u) {
        ctx->pc = 0x2E5AE8u;
        goto label_2e5ae8;
    }
    ctx->pc = 0x2E5AE0u;
    {
        const bool branch_taken_0x2e5ae0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5ae0) {
            ctx->pc = 0x2E5B04u;
            goto label_2e5b04;
        }
    }
    ctx->pc = 0x2E5AE8u;
label_2e5ae8:
    // 0x2e5ae8: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2e5ae8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e5aec:
    // 0x2e5aec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e5aecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e5af0:
    // 0x2e5af0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2e5af0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2e5af4:
    // 0x2e5af4: 0x320f809  jalr        $t9
label_2e5af8:
    if (ctx->pc == 0x2E5AF8u) {
        ctx->pc = 0x2E5AF8u;
            // 0x2e5af8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E5AFCu;
        goto label_2e5afc;
    }
    ctx->pc = 0x2E5AF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E5AFCu);
        ctx->pc = 0x2E5AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5AF4u;
            // 0x2e5af8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E5AFCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E5AFCu; }
            if (ctx->pc != 0x2E5AFCu) { return; }
        }
        }
    }
    ctx->pc = 0x2E5AFCu;
label_2e5afc:
    // 0x2e5afc: 0x1000000c  b           . + 4 + (0xC << 2)
label_2e5b00:
    if (ctx->pc == 0x2E5B00u) {
        ctx->pc = 0x2E5B00u;
            // 0x2e5b00: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x2E5B04u;
        goto label_2e5b04;
    }
    ctx->pc = 0x2E5AFCu;
    {
        const bool branch_taken_0x2e5afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5AFCu;
            // 0x2e5b00: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5afc) {
            ctx->pc = 0x2E5B30u;
            goto label_2e5b30;
        }
    }
    ctx->pc = 0x2E5B04u;
label_2e5b04:
    // 0x2e5b04: 0x8e640124  lw          $a0, 0x124($s3)
    ctx->pc = 0x2e5b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 292)));
label_2e5b08:
    // 0x2e5b08: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2e5b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2e5b0c:
    // 0x2e5b0c: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x2e5b0cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_2e5b10:
    // 0x2e5b10: 0x54830007  bnel        $a0, $v1, . + 4 + (0x7 << 2)
label_2e5b14:
    if (ctx->pc == 0x2E5B14u) {
        ctx->pc = 0x2E5B14u;
            // 0x2e5b14: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E5B18u;
        goto label_2e5b18;
    }
    ctx->pc = 0x2E5B10u;
    {
        const bool branch_taken_0x2e5b10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e5b10) {
            ctx->pc = 0x2E5B14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5B10u;
            // 0x2e5b14: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E5B30u;
            goto label_2e5b30;
        }
    }
    ctx->pc = 0x2E5B18u;
label_2e5b18:
    // 0x2e5b18: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2e5b18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e5b1c:
    // 0x2e5b1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e5b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e5b20:
    // 0x2e5b20: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2e5b20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2e5b24:
    // 0x2e5b24: 0x320f809  jalr        $t9
label_2e5b28:
    if (ctx->pc == 0x2E5B28u) {
        ctx->pc = 0x2E5B28u;
            // 0x2e5b28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E5B2Cu;
        goto label_2e5b2c;
    }
    ctx->pc = 0x2E5B24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E5B2Cu);
        ctx->pc = 0x2E5B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5B24u;
            // 0x2e5b28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E5B2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E5B2Cu; }
            if (ctx->pc != 0x2E5B2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2E5B2Cu;
label_2e5b2c:
    // 0x2e5b2c: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x2e5b2cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_2e5b30:
    // 0x2e5b30: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
label_2e5b34:
    if (ctx->pc == 0x2E5B34u) {
        ctx->pc = 0x2E5B38u;
        goto label_2e5b38;
    }
    ctx->pc = 0x2E5B30u;
    {
        const bool branch_taken_0x2e5b30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e5b30) {
            ctx->pc = 0x2E5BA0u;
            goto label_2e5ba0;
        }
    }
    ctx->pc = 0x2E5B38u;
label_2e5b38:
    // 0x2e5b38: 0xc0b9c68  jal         func_2E71A0
label_2e5b3c:
    if (ctx->pc == 0x2E5B3Cu) {
        ctx->pc = 0x2E5B3Cu;
            // 0x2e5b3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E5B40u;
        goto label_2e5b40;
    }
    ctx->pc = 0x2E5B38u;
    SET_GPR_U32(ctx, 31, 0x2E5B40u);
    ctx->pc = 0x2E5B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5B38u;
            // 0x2e5b3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E71A0u;
    if (runtime->hasFunction(0x2E71A0u)) {
        auto targetFn = runtime->lookupFunction(0x2E71A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5B40u; }
        if (ctx->pc != 0x2E5B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E71A0_0x2e71a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5B40u; }
        if (ctx->pc != 0x2E5B40u) { return; }
    }
    ctx->pc = 0x2E5B40u;
label_2e5b40:
    // 0x2e5b40: 0x8e6400f4  lw          $a0, 0xF4($s3)
    ctx->pc = 0x2e5b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 244)));
label_2e5b44:
    // 0x2e5b44: 0x966300ec  lhu         $v1, 0xEC($s3)
    ctx->pc = 0x2e5b44u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 236)));
label_2e5b48:
    // 0x2e5b48: 0x94840006  lhu         $a0, 0x6($a0)
    ctx->pc = 0x2e5b48u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_2e5b4c:
    // 0x2e5b4c: 0x14830014  bne         $a0, $v1, . + 4 + (0x14 << 2)
label_2e5b50:
    if (ctx->pc == 0x2E5B50u) {
        ctx->pc = 0x2E5B54u;
        goto label_2e5b54;
    }
    ctx->pc = 0x2E5B4Cu;
    {
        const bool branch_taken_0x2e5b4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e5b4c) {
            ctx->pc = 0x2E5BA0u;
            goto label_2e5ba0;
        }
    }
    ctx->pc = 0x2E5B54u;
label_2e5b54:
    // 0x2e5b54: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2e5b54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e5b58:
    // 0x2e5b58: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e5b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e5b5c:
    // 0x2e5b5c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2e5b5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2e5b60:
    // 0x2e5b60: 0x320f809  jalr        $t9
label_2e5b64:
    if (ctx->pc == 0x2E5B64u) {
        ctx->pc = 0x2E5B64u;
            // 0x2e5b64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E5B68u;
        goto label_2e5b68;
    }
    ctx->pc = 0x2E5B60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E5B68u);
        ctx->pc = 0x2E5B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5B60u;
            // 0x2e5b64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E5B68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E5B68u; }
            if (ctx->pc != 0x2E5B68u) { return; }
        }
        }
    }
    ctx->pc = 0x2E5B68u;
label_2e5b68:
    // 0x2e5b68: 0x1000000d  b           . + 4 + (0xD << 2)
label_2e5b6c:
    if (ctx->pc == 0x2E5B6Cu) {
        ctx->pc = 0x2E5B70u;
        goto label_2e5b70;
    }
    ctx->pc = 0x2E5B68u;
    {
        const bool branch_taken_0x2e5b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5b68) {
            ctx->pc = 0x2E5BA0u;
            goto label_2e5ba0;
        }
    }
    ctx->pc = 0x2E5B70u;
label_2e5b70:
    // 0x2e5b70: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2e5b70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2e5b74:
    // 0x2e5b74: 0x320f809  jalr        $t9
label_2e5b78:
    if (ctx->pc == 0x2E5B78u) {
        ctx->pc = 0x2E5B7Cu;
        goto label_2e5b7c;
    }
    ctx->pc = 0x2E5B74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2E5B7Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2E5B7Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2E5B7Cu; }
            if (ctx->pc != 0x2E5B7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2E5B7Cu;
label_2e5b7c:
    // 0x2e5b7c: 0xc0bb78c  jal         func_2EDE30
label_2e5b80:
    if (ctx->pc == 0x2E5B80u) {
        ctx->pc = 0x2E5B80u;
            // 0x2e5b80: 0x8e6400f4  lw          $a0, 0xF4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 244)));
        ctx->pc = 0x2E5B84u;
        goto label_2e5b84;
    }
    ctx->pc = 0x2E5B7Cu;
    SET_GPR_U32(ctx, 31, 0x2E5B84u);
    ctx->pc = 0x2E5B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5B7Cu;
            // 0x2e5b80: 0x8e6400f4  lw          $a0, 0xF4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 244)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EDE30u;
    if (runtime->hasFunction(0x2EDE30u)) {
        auto targetFn = runtime->lookupFunction(0x2EDE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5B84u; }
        if (ctx->pc != 0x2E5B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EDE30_0x2ede30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5B84u; }
        if (ctx->pc != 0x2E5B84u) { return; }
    }
    ctx->pc = 0x2E5B84u;
label_2e5b84:
    // 0x2e5b84: 0x10000006  b           . + 4 + (0x6 << 2)
label_2e5b88:
    if (ctx->pc == 0x2E5B88u) {
        ctx->pc = 0x2E5B8Cu;
        goto label_2e5b8c;
    }
    ctx->pc = 0x2E5B84u;
    {
        const bool branch_taken_0x2e5b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5b84) {
            ctx->pc = 0x2E5BA0u;
            goto label_2e5ba0;
        }
    }
    ctx->pc = 0x2E5B8Cu;
label_2e5b8c:
    // 0x2e5b8c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x2e5b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_2e5b90:
    // 0x2e5b90: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e5b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e5b94:
    // 0x2e5b94: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x2e5b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_2e5b98:
    // 0x2e5b98: 0xc057b7c  jal         func_15EDF0
label_2e5b9c:
    if (ctx->pc == 0x2E5B9Cu) {
        ctx->pc = 0x2E5B9Cu;
            // 0x2e5b9c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x2E5BA0u;
        goto label_2e5ba0;
    }
    ctx->pc = 0x2E5B98u;
    SET_GPR_U32(ctx, 31, 0x2E5BA0u);
    ctx->pc = 0x2E5B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5B98u;
            // 0x2e5b9c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5BA0u; }
        if (ctx->pc != 0x2E5BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E5BA0u; }
        if (ctx->pc != 0x2E5BA0u) { return; }
    }
    ctx->pc = 0x2E5BA0u;
label_2e5ba0:
    // 0x2e5ba0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e5ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2e5ba4:
    // 0x2e5ba4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2e5ba4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2e5ba8:
    // 0x2e5ba8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e5ba8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2e5bac:
    // 0x2e5bac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e5bacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2e5bb0:
    // 0x2e5bb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e5bb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e5bb4:
    // 0x2e5bb4: 0x3e00008  jr          $ra
label_2e5bb8:
    if (ctx->pc == 0x2E5BB8u) {
        ctx->pc = 0x2E5BB8u;
            // 0x2e5bb8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2E5BBCu;
        goto label_2e5bbc;
    }
    ctx->pc = 0x2E5BB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E5BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E5BB4u;
            // 0x2e5bb8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E5BBCu;
label_2e5bbc:
    // 0x2e5bbc: 0x0  nop
    ctx->pc = 0x2e5bbcu;
    // NOP
}
