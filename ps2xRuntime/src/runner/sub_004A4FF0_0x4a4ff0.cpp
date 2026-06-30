#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A4FF0
// Address: 0x4a4ff0 - 0x4a5a20
void sub_004A4FF0_0x4a4ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A4FF0_0x4a4ff0");
#endif

    switch (ctx->pc) {
        case 0x4a4ff0u: goto label_4a4ff0;
        case 0x4a4ff4u: goto label_4a4ff4;
        case 0x4a4ff8u: goto label_4a4ff8;
        case 0x4a4ffcu: goto label_4a4ffc;
        case 0x4a5000u: goto label_4a5000;
        case 0x4a5004u: goto label_4a5004;
        case 0x4a5008u: goto label_4a5008;
        case 0x4a500cu: goto label_4a500c;
        case 0x4a5010u: goto label_4a5010;
        case 0x4a5014u: goto label_4a5014;
        case 0x4a5018u: goto label_4a5018;
        case 0x4a501cu: goto label_4a501c;
        case 0x4a5020u: goto label_4a5020;
        case 0x4a5024u: goto label_4a5024;
        case 0x4a5028u: goto label_4a5028;
        case 0x4a502cu: goto label_4a502c;
        case 0x4a5030u: goto label_4a5030;
        case 0x4a5034u: goto label_4a5034;
        case 0x4a5038u: goto label_4a5038;
        case 0x4a503cu: goto label_4a503c;
        case 0x4a5040u: goto label_4a5040;
        case 0x4a5044u: goto label_4a5044;
        case 0x4a5048u: goto label_4a5048;
        case 0x4a504cu: goto label_4a504c;
        case 0x4a5050u: goto label_4a5050;
        case 0x4a5054u: goto label_4a5054;
        case 0x4a5058u: goto label_4a5058;
        case 0x4a505cu: goto label_4a505c;
        case 0x4a5060u: goto label_4a5060;
        case 0x4a5064u: goto label_4a5064;
        case 0x4a5068u: goto label_4a5068;
        case 0x4a506cu: goto label_4a506c;
        case 0x4a5070u: goto label_4a5070;
        case 0x4a5074u: goto label_4a5074;
        case 0x4a5078u: goto label_4a5078;
        case 0x4a507cu: goto label_4a507c;
        case 0x4a5080u: goto label_4a5080;
        case 0x4a5084u: goto label_4a5084;
        case 0x4a5088u: goto label_4a5088;
        case 0x4a508cu: goto label_4a508c;
        case 0x4a5090u: goto label_4a5090;
        case 0x4a5094u: goto label_4a5094;
        case 0x4a5098u: goto label_4a5098;
        case 0x4a509cu: goto label_4a509c;
        case 0x4a50a0u: goto label_4a50a0;
        case 0x4a50a4u: goto label_4a50a4;
        case 0x4a50a8u: goto label_4a50a8;
        case 0x4a50acu: goto label_4a50ac;
        case 0x4a50b0u: goto label_4a50b0;
        case 0x4a50b4u: goto label_4a50b4;
        case 0x4a50b8u: goto label_4a50b8;
        case 0x4a50bcu: goto label_4a50bc;
        case 0x4a50c0u: goto label_4a50c0;
        case 0x4a50c4u: goto label_4a50c4;
        case 0x4a50c8u: goto label_4a50c8;
        case 0x4a50ccu: goto label_4a50cc;
        case 0x4a50d0u: goto label_4a50d0;
        case 0x4a50d4u: goto label_4a50d4;
        case 0x4a50d8u: goto label_4a50d8;
        case 0x4a50dcu: goto label_4a50dc;
        case 0x4a50e0u: goto label_4a50e0;
        case 0x4a50e4u: goto label_4a50e4;
        case 0x4a50e8u: goto label_4a50e8;
        case 0x4a50ecu: goto label_4a50ec;
        case 0x4a50f0u: goto label_4a50f0;
        case 0x4a50f4u: goto label_4a50f4;
        case 0x4a50f8u: goto label_4a50f8;
        case 0x4a50fcu: goto label_4a50fc;
        case 0x4a5100u: goto label_4a5100;
        case 0x4a5104u: goto label_4a5104;
        case 0x4a5108u: goto label_4a5108;
        case 0x4a510cu: goto label_4a510c;
        case 0x4a5110u: goto label_4a5110;
        case 0x4a5114u: goto label_4a5114;
        case 0x4a5118u: goto label_4a5118;
        case 0x4a511cu: goto label_4a511c;
        case 0x4a5120u: goto label_4a5120;
        case 0x4a5124u: goto label_4a5124;
        case 0x4a5128u: goto label_4a5128;
        case 0x4a512cu: goto label_4a512c;
        case 0x4a5130u: goto label_4a5130;
        case 0x4a5134u: goto label_4a5134;
        case 0x4a5138u: goto label_4a5138;
        case 0x4a513cu: goto label_4a513c;
        case 0x4a5140u: goto label_4a5140;
        case 0x4a5144u: goto label_4a5144;
        case 0x4a5148u: goto label_4a5148;
        case 0x4a514cu: goto label_4a514c;
        case 0x4a5150u: goto label_4a5150;
        case 0x4a5154u: goto label_4a5154;
        case 0x4a5158u: goto label_4a5158;
        case 0x4a515cu: goto label_4a515c;
        case 0x4a5160u: goto label_4a5160;
        case 0x4a5164u: goto label_4a5164;
        case 0x4a5168u: goto label_4a5168;
        case 0x4a516cu: goto label_4a516c;
        case 0x4a5170u: goto label_4a5170;
        case 0x4a5174u: goto label_4a5174;
        case 0x4a5178u: goto label_4a5178;
        case 0x4a517cu: goto label_4a517c;
        case 0x4a5180u: goto label_4a5180;
        case 0x4a5184u: goto label_4a5184;
        case 0x4a5188u: goto label_4a5188;
        case 0x4a518cu: goto label_4a518c;
        case 0x4a5190u: goto label_4a5190;
        case 0x4a5194u: goto label_4a5194;
        case 0x4a5198u: goto label_4a5198;
        case 0x4a519cu: goto label_4a519c;
        case 0x4a51a0u: goto label_4a51a0;
        case 0x4a51a4u: goto label_4a51a4;
        case 0x4a51a8u: goto label_4a51a8;
        case 0x4a51acu: goto label_4a51ac;
        case 0x4a51b0u: goto label_4a51b0;
        case 0x4a51b4u: goto label_4a51b4;
        case 0x4a51b8u: goto label_4a51b8;
        case 0x4a51bcu: goto label_4a51bc;
        case 0x4a51c0u: goto label_4a51c0;
        case 0x4a51c4u: goto label_4a51c4;
        case 0x4a51c8u: goto label_4a51c8;
        case 0x4a51ccu: goto label_4a51cc;
        case 0x4a51d0u: goto label_4a51d0;
        case 0x4a51d4u: goto label_4a51d4;
        case 0x4a51d8u: goto label_4a51d8;
        case 0x4a51dcu: goto label_4a51dc;
        case 0x4a51e0u: goto label_4a51e0;
        case 0x4a51e4u: goto label_4a51e4;
        case 0x4a51e8u: goto label_4a51e8;
        case 0x4a51ecu: goto label_4a51ec;
        case 0x4a51f0u: goto label_4a51f0;
        case 0x4a51f4u: goto label_4a51f4;
        case 0x4a51f8u: goto label_4a51f8;
        case 0x4a51fcu: goto label_4a51fc;
        case 0x4a5200u: goto label_4a5200;
        case 0x4a5204u: goto label_4a5204;
        case 0x4a5208u: goto label_4a5208;
        case 0x4a520cu: goto label_4a520c;
        case 0x4a5210u: goto label_4a5210;
        case 0x4a5214u: goto label_4a5214;
        case 0x4a5218u: goto label_4a5218;
        case 0x4a521cu: goto label_4a521c;
        case 0x4a5220u: goto label_4a5220;
        case 0x4a5224u: goto label_4a5224;
        case 0x4a5228u: goto label_4a5228;
        case 0x4a522cu: goto label_4a522c;
        case 0x4a5230u: goto label_4a5230;
        case 0x4a5234u: goto label_4a5234;
        case 0x4a5238u: goto label_4a5238;
        case 0x4a523cu: goto label_4a523c;
        case 0x4a5240u: goto label_4a5240;
        case 0x4a5244u: goto label_4a5244;
        case 0x4a5248u: goto label_4a5248;
        case 0x4a524cu: goto label_4a524c;
        case 0x4a5250u: goto label_4a5250;
        case 0x4a5254u: goto label_4a5254;
        case 0x4a5258u: goto label_4a5258;
        case 0x4a525cu: goto label_4a525c;
        case 0x4a5260u: goto label_4a5260;
        case 0x4a5264u: goto label_4a5264;
        case 0x4a5268u: goto label_4a5268;
        case 0x4a526cu: goto label_4a526c;
        case 0x4a5270u: goto label_4a5270;
        case 0x4a5274u: goto label_4a5274;
        case 0x4a5278u: goto label_4a5278;
        case 0x4a527cu: goto label_4a527c;
        case 0x4a5280u: goto label_4a5280;
        case 0x4a5284u: goto label_4a5284;
        case 0x4a5288u: goto label_4a5288;
        case 0x4a528cu: goto label_4a528c;
        case 0x4a5290u: goto label_4a5290;
        case 0x4a5294u: goto label_4a5294;
        case 0x4a5298u: goto label_4a5298;
        case 0x4a529cu: goto label_4a529c;
        case 0x4a52a0u: goto label_4a52a0;
        case 0x4a52a4u: goto label_4a52a4;
        case 0x4a52a8u: goto label_4a52a8;
        case 0x4a52acu: goto label_4a52ac;
        case 0x4a52b0u: goto label_4a52b0;
        case 0x4a52b4u: goto label_4a52b4;
        case 0x4a52b8u: goto label_4a52b8;
        case 0x4a52bcu: goto label_4a52bc;
        case 0x4a52c0u: goto label_4a52c0;
        case 0x4a52c4u: goto label_4a52c4;
        case 0x4a52c8u: goto label_4a52c8;
        case 0x4a52ccu: goto label_4a52cc;
        case 0x4a52d0u: goto label_4a52d0;
        case 0x4a52d4u: goto label_4a52d4;
        case 0x4a52d8u: goto label_4a52d8;
        case 0x4a52dcu: goto label_4a52dc;
        case 0x4a52e0u: goto label_4a52e0;
        case 0x4a52e4u: goto label_4a52e4;
        case 0x4a52e8u: goto label_4a52e8;
        case 0x4a52ecu: goto label_4a52ec;
        case 0x4a52f0u: goto label_4a52f0;
        case 0x4a52f4u: goto label_4a52f4;
        case 0x4a52f8u: goto label_4a52f8;
        case 0x4a52fcu: goto label_4a52fc;
        case 0x4a5300u: goto label_4a5300;
        case 0x4a5304u: goto label_4a5304;
        case 0x4a5308u: goto label_4a5308;
        case 0x4a530cu: goto label_4a530c;
        case 0x4a5310u: goto label_4a5310;
        case 0x4a5314u: goto label_4a5314;
        case 0x4a5318u: goto label_4a5318;
        case 0x4a531cu: goto label_4a531c;
        case 0x4a5320u: goto label_4a5320;
        case 0x4a5324u: goto label_4a5324;
        case 0x4a5328u: goto label_4a5328;
        case 0x4a532cu: goto label_4a532c;
        case 0x4a5330u: goto label_4a5330;
        case 0x4a5334u: goto label_4a5334;
        case 0x4a5338u: goto label_4a5338;
        case 0x4a533cu: goto label_4a533c;
        case 0x4a5340u: goto label_4a5340;
        case 0x4a5344u: goto label_4a5344;
        case 0x4a5348u: goto label_4a5348;
        case 0x4a534cu: goto label_4a534c;
        case 0x4a5350u: goto label_4a5350;
        case 0x4a5354u: goto label_4a5354;
        case 0x4a5358u: goto label_4a5358;
        case 0x4a535cu: goto label_4a535c;
        case 0x4a5360u: goto label_4a5360;
        case 0x4a5364u: goto label_4a5364;
        case 0x4a5368u: goto label_4a5368;
        case 0x4a536cu: goto label_4a536c;
        case 0x4a5370u: goto label_4a5370;
        case 0x4a5374u: goto label_4a5374;
        case 0x4a5378u: goto label_4a5378;
        case 0x4a537cu: goto label_4a537c;
        case 0x4a5380u: goto label_4a5380;
        case 0x4a5384u: goto label_4a5384;
        case 0x4a5388u: goto label_4a5388;
        case 0x4a538cu: goto label_4a538c;
        case 0x4a5390u: goto label_4a5390;
        case 0x4a5394u: goto label_4a5394;
        case 0x4a5398u: goto label_4a5398;
        case 0x4a539cu: goto label_4a539c;
        case 0x4a53a0u: goto label_4a53a0;
        case 0x4a53a4u: goto label_4a53a4;
        case 0x4a53a8u: goto label_4a53a8;
        case 0x4a53acu: goto label_4a53ac;
        case 0x4a53b0u: goto label_4a53b0;
        case 0x4a53b4u: goto label_4a53b4;
        case 0x4a53b8u: goto label_4a53b8;
        case 0x4a53bcu: goto label_4a53bc;
        case 0x4a53c0u: goto label_4a53c0;
        case 0x4a53c4u: goto label_4a53c4;
        case 0x4a53c8u: goto label_4a53c8;
        case 0x4a53ccu: goto label_4a53cc;
        case 0x4a53d0u: goto label_4a53d0;
        case 0x4a53d4u: goto label_4a53d4;
        case 0x4a53d8u: goto label_4a53d8;
        case 0x4a53dcu: goto label_4a53dc;
        case 0x4a53e0u: goto label_4a53e0;
        case 0x4a53e4u: goto label_4a53e4;
        case 0x4a53e8u: goto label_4a53e8;
        case 0x4a53ecu: goto label_4a53ec;
        case 0x4a53f0u: goto label_4a53f0;
        case 0x4a53f4u: goto label_4a53f4;
        case 0x4a53f8u: goto label_4a53f8;
        case 0x4a53fcu: goto label_4a53fc;
        case 0x4a5400u: goto label_4a5400;
        case 0x4a5404u: goto label_4a5404;
        case 0x4a5408u: goto label_4a5408;
        case 0x4a540cu: goto label_4a540c;
        case 0x4a5410u: goto label_4a5410;
        case 0x4a5414u: goto label_4a5414;
        case 0x4a5418u: goto label_4a5418;
        case 0x4a541cu: goto label_4a541c;
        case 0x4a5420u: goto label_4a5420;
        case 0x4a5424u: goto label_4a5424;
        case 0x4a5428u: goto label_4a5428;
        case 0x4a542cu: goto label_4a542c;
        case 0x4a5430u: goto label_4a5430;
        case 0x4a5434u: goto label_4a5434;
        case 0x4a5438u: goto label_4a5438;
        case 0x4a543cu: goto label_4a543c;
        case 0x4a5440u: goto label_4a5440;
        case 0x4a5444u: goto label_4a5444;
        case 0x4a5448u: goto label_4a5448;
        case 0x4a544cu: goto label_4a544c;
        case 0x4a5450u: goto label_4a5450;
        case 0x4a5454u: goto label_4a5454;
        case 0x4a5458u: goto label_4a5458;
        case 0x4a545cu: goto label_4a545c;
        case 0x4a5460u: goto label_4a5460;
        case 0x4a5464u: goto label_4a5464;
        case 0x4a5468u: goto label_4a5468;
        case 0x4a546cu: goto label_4a546c;
        case 0x4a5470u: goto label_4a5470;
        case 0x4a5474u: goto label_4a5474;
        case 0x4a5478u: goto label_4a5478;
        case 0x4a547cu: goto label_4a547c;
        case 0x4a5480u: goto label_4a5480;
        case 0x4a5484u: goto label_4a5484;
        case 0x4a5488u: goto label_4a5488;
        case 0x4a548cu: goto label_4a548c;
        case 0x4a5490u: goto label_4a5490;
        case 0x4a5494u: goto label_4a5494;
        case 0x4a5498u: goto label_4a5498;
        case 0x4a549cu: goto label_4a549c;
        case 0x4a54a0u: goto label_4a54a0;
        case 0x4a54a4u: goto label_4a54a4;
        case 0x4a54a8u: goto label_4a54a8;
        case 0x4a54acu: goto label_4a54ac;
        case 0x4a54b0u: goto label_4a54b0;
        case 0x4a54b4u: goto label_4a54b4;
        case 0x4a54b8u: goto label_4a54b8;
        case 0x4a54bcu: goto label_4a54bc;
        case 0x4a54c0u: goto label_4a54c0;
        case 0x4a54c4u: goto label_4a54c4;
        case 0x4a54c8u: goto label_4a54c8;
        case 0x4a54ccu: goto label_4a54cc;
        case 0x4a54d0u: goto label_4a54d0;
        case 0x4a54d4u: goto label_4a54d4;
        case 0x4a54d8u: goto label_4a54d8;
        case 0x4a54dcu: goto label_4a54dc;
        case 0x4a54e0u: goto label_4a54e0;
        case 0x4a54e4u: goto label_4a54e4;
        case 0x4a54e8u: goto label_4a54e8;
        case 0x4a54ecu: goto label_4a54ec;
        case 0x4a54f0u: goto label_4a54f0;
        case 0x4a54f4u: goto label_4a54f4;
        case 0x4a54f8u: goto label_4a54f8;
        case 0x4a54fcu: goto label_4a54fc;
        case 0x4a5500u: goto label_4a5500;
        case 0x4a5504u: goto label_4a5504;
        case 0x4a5508u: goto label_4a5508;
        case 0x4a550cu: goto label_4a550c;
        case 0x4a5510u: goto label_4a5510;
        case 0x4a5514u: goto label_4a5514;
        case 0x4a5518u: goto label_4a5518;
        case 0x4a551cu: goto label_4a551c;
        case 0x4a5520u: goto label_4a5520;
        case 0x4a5524u: goto label_4a5524;
        case 0x4a5528u: goto label_4a5528;
        case 0x4a552cu: goto label_4a552c;
        case 0x4a5530u: goto label_4a5530;
        case 0x4a5534u: goto label_4a5534;
        case 0x4a5538u: goto label_4a5538;
        case 0x4a553cu: goto label_4a553c;
        case 0x4a5540u: goto label_4a5540;
        case 0x4a5544u: goto label_4a5544;
        case 0x4a5548u: goto label_4a5548;
        case 0x4a554cu: goto label_4a554c;
        case 0x4a5550u: goto label_4a5550;
        case 0x4a5554u: goto label_4a5554;
        case 0x4a5558u: goto label_4a5558;
        case 0x4a555cu: goto label_4a555c;
        case 0x4a5560u: goto label_4a5560;
        case 0x4a5564u: goto label_4a5564;
        case 0x4a5568u: goto label_4a5568;
        case 0x4a556cu: goto label_4a556c;
        case 0x4a5570u: goto label_4a5570;
        case 0x4a5574u: goto label_4a5574;
        case 0x4a5578u: goto label_4a5578;
        case 0x4a557cu: goto label_4a557c;
        case 0x4a5580u: goto label_4a5580;
        case 0x4a5584u: goto label_4a5584;
        case 0x4a5588u: goto label_4a5588;
        case 0x4a558cu: goto label_4a558c;
        case 0x4a5590u: goto label_4a5590;
        case 0x4a5594u: goto label_4a5594;
        case 0x4a5598u: goto label_4a5598;
        case 0x4a559cu: goto label_4a559c;
        case 0x4a55a0u: goto label_4a55a0;
        case 0x4a55a4u: goto label_4a55a4;
        case 0x4a55a8u: goto label_4a55a8;
        case 0x4a55acu: goto label_4a55ac;
        case 0x4a55b0u: goto label_4a55b0;
        case 0x4a55b4u: goto label_4a55b4;
        case 0x4a55b8u: goto label_4a55b8;
        case 0x4a55bcu: goto label_4a55bc;
        case 0x4a55c0u: goto label_4a55c0;
        case 0x4a55c4u: goto label_4a55c4;
        case 0x4a55c8u: goto label_4a55c8;
        case 0x4a55ccu: goto label_4a55cc;
        case 0x4a55d0u: goto label_4a55d0;
        case 0x4a55d4u: goto label_4a55d4;
        case 0x4a55d8u: goto label_4a55d8;
        case 0x4a55dcu: goto label_4a55dc;
        case 0x4a55e0u: goto label_4a55e0;
        case 0x4a55e4u: goto label_4a55e4;
        case 0x4a55e8u: goto label_4a55e8;
        case 0x4a55ecu: goto label_4a55ec;
        case 0x4a55f0u: goto label_4a55f0;
        case 0x4a55f4u: goto label_4a55f4;
        case 0x4a55f8u: goto label_4a55f8;
        case 0x4a55fcu: goto label_4a55fc;
        case 0x4a5600u: goto label_4a5600;
        case 0x4a5604u: goto label_4a5604;
        case 0x4a5608u: goto label_4a5608;
        case 0x4a560cu: goto label_4a560c;
        case 0x4a5610u: goto label_4a5610;
        case 0x4a5614u: goto label_4a5614;
        case 0x4a5618u: goto label_4a5618;
        case 0x4a561cu: goto label_4a561c;
        case 0x4a5620u: goto label_4a5620;
        case 0x4a5624u: goto label_4a5624;
        case 0x4a5628u: goto label_4a5628;
        case 0x4a562cu: goto label_4a562c;
        case 0x4a5630u: goto label_4a5630;
        case 0x4a5634u: goto label_4a5634;
        case 0x4a5638u: goto label_4a5638;
        case 0x4a563cu: goto label_4a563c;
        case 0x4a5640u: goto label_4a5640;
        case 0x4a5644u: goto label_4a5644;
        case 0x4a5648u: goto label_4a5648;
        case 0x4a564cu: goto label_4a564c;
        case 0x4a5650u: goto label_4a5650;
        case 0x4a5654u: goto label_4a5654;
        case 0x4a5658u: goto label_4a5658;
        case 0x4a565cu: goto label_4a565c;
        case 0x4a5660u: goto label_4a5660;
        case 0x4a5664u: goto label_4a5664;
        case 0x4a5668u: goto label_4a5668;
        case 0x4a566cu: goto label_4a566c;
        case 0x4a5670u: goto label_4a5670;
        case 0x4a5674u: goto label_4a5674;
        case 0x4a5678u: goto label_4a5678;
        case 0x4a567cu: goto label_4a567c;
        case 0x4a5680u: goto label_4a5680;
        case 0x4a5684u: goto label_4a5684;
        case 0x4a5688u: goto label_4a5688;
        case 0x4a568cu: goto label_4a568c;
        case 0x4a5690u: goto label_4a5690;
        case 0x4a5694u: goto label_4a5694;
        case 0x4a5698u: goto label_4a5698;
        case 0x4a569cu: goto label_4a569c;
        case 0x4a56a0u: goto label_4a56a0;
        case 0x4a56a4u: goto label_4a56a4;
        case 0x4a56a8u: goto label_4a56a8;
        case 0x4a56acu: goto label_4a56ac;
        case 0x4a56b0u: goto label_4a56b0;
        case 0x4a56b4u: goto label_4a56b4;
        case 0x4a56b8u: goto label_4a56b8;
        case 0x4a56bcu: goto label_4a56bc;
        case 0x4a56c0u: goto label_4a56c0;
        case 0x4a56c4u: goto label_4a56c4;
        case 0x4a56c8u: goto label_4a56c8;
        case 0x4a56ccu: goto label_4a56cc;
        case 0x4a56d0u: goto label_4a56d0;
        case 0x4a56d4u: goto label_4a56d4;
        case 0x4a56d8u: goto label_4a56d8;
        case 0x4a56dcu: goto label_4a56dc;
        case 0x4a56e0u: goto label_4a56e0;
        case 0x4a56e4u: goto label_4a56e4;
        case 0x4a56e8u: goto label_4a56e8;
        case 0x4a56ecu: goto label_4a56ec;
        case 0x4a56f0u: goto label_4a56f0;
        case 0x4a56f4u: goto label_4a56f4;
        case 0x4a56f8u: goto label_4a56f8;
        case 0x4a56fcu: goto label_4a56fc;
        case 0x4a5700u: goto label_4a5700;
        case 0x4a5704u: goto label_4a5704;
        case 0x4a5708u: goto label_4a5708;
        case 0x4a570cu: goto label_4a570c;
        case 0x4a5710u: goto label_4a5710;
        case 0x4a5714u: goto label_4a5714;
        case 0x4a5718u: goto label_4a5718;
        case 0x4a571cu: goto label_4a571c;
        case 0x4a5720u: goto label_4a5720;
        case 0x4a5724u: goto label_4a5724;
        case 0x4a5728u: goto label_4a5728;
        case 0x4a572cu: goto label_4a572c;
        case 0x4a5730u: goto label_4a5730;
        case 0x4a5734u: goto label_4a5734;
        case 0x4a5738u: goto label_4a5738;
        case 0x4a573cu: goto label_4a573c;
        case 0x4a5740u: goto label_4a5740;
        case 0x4a5744u: goto label_4a5744;
        case 0x4a5748u: goto label_4a5748;
        case 0x4a574cu: goto label_4a574c;
        case 0x4a5750u: goto label_4a5750;
        case 0x4a5754u: goto label_4a5754;
        case 0x4a5758u: goto label_4a5758;
        case 0x4a575cu: goto label_4a575c;
        case 0x4a5760u: goto label_4a5760;
        case 0x4a5764u: goto label_4a5764;
        case 0x4a5768u: goto label_4a5768;
        case 0x4a576cu: goto label_4a576c;
        case 0x4a5770u: goto label_4a5770;
        case 0x4a5774u: goto label_4a5774;
        case 0x4a5778u: goto label_4a5778;
        case 0x4a577cu: goto label_4a577c;
        case 0x4a5780u: goto label_4a5780;
        case 0x4a5784u: goto label_4a5784;
        case 0x4a5788u: goto label_4a5788;
        case 0x4a578cu: goto label_4a578c;
        case 0x4a5790u: goto label_4a5790;
        case 0x4a5794u: goto label_4a5794;
        case 0x4a5798u: goto label_4a5798;
        case 0x4a579cu: goto label_4a579c;
        case 0x4a57a0u: goto label_4a57a0;
        case 0x4a57a4u: goto label_4a57a4;
        case 0x4a57a8u: goto label_4a57a8;
        case 0x4a57acu: goto label_4a57ac;
        case 0x4a57b0u: goto label_4a57b0;
        case 0x4a57b4u: goto label_4a57b4;
        case 0x4a57b8u: goto label_4a57b8;
        case 0x4a57bcu: goto label_4a57bc;
        case 0x4a57c0u: goto label_4a57c0;
        case 0x4a57c4u: goto label_4a57c4;
        case 0x4a57c8u: goto label_4a57c8;
        case 0x4a57ccu: goto label_4a57cc;
        case 0x4a57d0u: goto label_4a57d0;
        case 0x4a57d4u: goto label_4a57d4;
        case 0x4a57d8u: goto label_4a57d8;
        case 0x4a57dcu: goto label_4a57dc;
        case 0x4a57e0u: goto label_4a57e0;
        case 0x4a57e4u: goto label_4a57e4;
        case 0x4a57e8u: goto label_4a57e8;
        case 0x4a57ecu: goto label_4a57ec;
        case 0x4a57f0u: goto label_4a57f0;
        case 0x4a57f4u: goto label_4a57f4;
        case 0x4a57f8u: goto label_4a57f8;
        case 0x4a57fcu: goto label_4a57fc;
        case 0x4a5800u: goto label_4a5800;
        case 0x4a5804u: goto label_4a5804;
        case 0x4a5808u: goto label_4a5808;
        case 0x4a580cu: goto label_4a580c;
        case 0x4a5810u: goto label_4a5810;
        case 0x4a5814u: goto label_4a5814;
        case 0x4a5818u: goto label_4a5818;
        case 0x4a581cu: goto label_4a581c;
        case 0x4a5820u: goto label_4a5820;
        case 0x4a5824u: goto label_4a5824;
        case 0x4a5828u: goto label_4a5828;
        case 0x4a582cu: goto label_4a582c;
        case 0x4a5830u: goto label_4a5830;
        case 0x4a5834u: goto label_4a5834;
        case 0x4a5838u: goto label_4a5838;
        case 0x4a583cu: goto label_4a583c;
        case 0x4a5840u: goto label_4a5840;
        case 0x4a5844u: goto label_4a5844;
        case 0x4a5848u: goto label_4a5848;
        case 0x4a584cu: goto label_4a584c;
        case 0x4a5850u: goto label_4a5850;
        case 0x4a5854u: goto label_4a5854;
        case 0x4a5858u: goto label_4a5858;
        case 0x4a585cu: goto label_4a585c;
        case 0x4a5860u: goto label_4a5860;
        case 0x4a5864u: goto label_4a5864;
        case 0x4a5868u: goto label_4a5868;
        case 0x4a586cu: goto label_4a586c;
        case 0x4a5870u: goto label_4a5870;
        case 0x4a5874u: goto label_4a5874;
        case 0x4a5878u: goto label_4a5878;
        case 0x4a587cu: goto label_4a587c;
        case 0x4a5880u: goto label_4a5880;
        case 0x4a5884u: goto label_4a5884;
        case 0x4a5888u: goto label_4a5888;
        case 0x4a588cu: goto label_4a588c;
        case 0x4a5890u: goto label_4a5890;
        case 0x4a5894u: goto label_4a5894;
        case 0x4a5898u: goto label_4a5898;
        case 0x4a589cu: goto label_4a589c;
        case 0x4a58a0u: goto label_4a58a0;
        case 0x4a58a4u: goto label_4a58a4;
        case 0x4a58a8u: goto label_4a58a8;
        case 0x4a58acu: goto label_4a58ac;
        case 0x4a58b0u: goto label_4a58b0;
        case 0x4a58b4u: goto label_4a58b4;
        case 0x4a58b8u: goto label_4a58b8;
        case 0x4a58bcu: goto label_4a58bc;
        case 0x4a58c0u: goto label_4a58c0;
        case 0x4a58c4u: goto label_4a58c4;
        case 0x4a58c8u: goto label_4a58c8;
        case 0x4a58ccu: goto label_4a58cc;
        case 0x4a58d0u: goto label_4a58d0;
        case 0x4a58d4u: goto label_4a58d4;
        case 0x4a58d8u: goto label_4a58d8;
        case 0x4a58dcu: goto label_4a58dc;
        case 0x4a58e0u: goto label_4a58e0;
        case 0x4a58e4u: goto label_4a58e4;
        case 0x4a58e8u: goto label_4a58e8;
        case 0x4a58ecu: goto label_4a58ec;
        case 0x4a58f0u: goto label_4a58f0;
        case 0x4a58f4u: goto label_4a58f4;
        case 0x4a58f8u: goto label_4a58f8;
        case 0x4a58fcu: goto label_4a58fc;
        case 0x4a5900u: goto label_4a5900;
        case 0x4a5904u: goto label_4a5904;
        case 0x4a5908u: goto label_4a5908;
        case 0x4a590cu: goto label_4a590c;
        case 0x4a5910u: goto label_4a5910;
        case 0x4a5914u: goto label_4a5914;
        case 0x4a5918u: goto label_4a5918;
        case 0x4a591cu: goto label_4a591c;
        case 0x4a5920u: goto label_4a5920;
        case 0x4a5924u: goto label_4a5924;
        case 0x4a5928u: goto label_4a5928;
        case 0x4a592cu: goto label_4a592c;
        case 0x4a5930u: goto label_4a5930;
        case 0x4a5934u: goto label_4a5934;
        case 0x4a5938u: goto label_4a5938;
        case 0x4a593cu: goto label_4a593c;
        case 0x4a5940u: goto label_4a5940;
        case 0x4a5944u: goto label_4a5944;
        case 0x4a5948u: goto label_4a5948;
        case 0x4a594cu: goto label_4a594c;
        case 0x4a5950u: goto label_4a5950;
        case 0x4a5954u: goto label_4a5954;
        case 0x4a5958u: goto label_4a5958;
        case 0x4a595cu: goto label_4a595c;
        case 0x4a5960u: goto label_4a5960;
        case 0x4a5964u: goto label_4a5964;
        case 0x4a5968u: goto label_4a5968;
        case 0x4a596cu: goto label_4a596c;
        case 0x4a5970u: goto label_4a5970;
        case 0x4a5974u: goto label_4a5974;
        case 0x4a5978u: goto label_4a5978;
        case 0x4a597cu: goto label_4a597c;
        case 0x4a5980u: goto label_4a5980;
        case 0x4a5984u: goto label_4a5984;
        case 0x4a5988u: goto label_4a5988;
        case 0x4a598cu: goto label_4a598c;
        case 0x4a5990u: goto label_4a5990;
        case 0x4a5994u: goto label_4a5994;
        case 0x4a5998u: goto label_4a5998;
        case 0x4a599cu: goto label_4a599c;
        case 0x4a59a0u: goto label_4a59a0;
        case 0x4a59a4u: goto label_4a59a4;
        case 0x4a59a8u: goto label_4a59a8;
        case 0x4a59acu: goto label_4a59ac;
        case 0x4a59b0u: goto label_4a59b0;
        case 0x4a59b4u: goto label_4a59b4;
        case 0x4a59b8u: goto label_4a59b8;
        case 0x4a59bcu: goto label_4a59bc;
        case 0x4a59c0u: goto label_4a59c0;
        case 0x4a59c4u: goto label_4a59c4;
        case 0x4a59c8u: goto label_4a59c8;
        case 0x4a59ccu: goto label_4a59cc;
        case 0x4a59d0u: goto label_4a59d0;
        case 0x4a59d4u: goto label_4a59d4;
        case 0x4a59d8u: goto label_4a59d8;
        case 0x4a59dcu: goto label_4a59dc;
        case 0x4a59e0u: goto label_4a59e0;
        case 0x4a59e4u: goto label_4a59e4;
        case 0x4a59e8u: goto label_4a59e8;
        case 0x4a59ecu: goto label_4a59ec;
        case 0x4a59f0u: goto label_4a59f0;
        case 0x4a59f4u: goto label_4a59f4;
        case 0x4a59f8u: goto label_4a59f8;
        case 0x4a59fcu: goto label_4a59fc;
        case 0x4a5a00u: goto label_4a5a00;
        case 0x4a5a04u: goto label_4a5a04;
        case 0x4a5a08u: goto label_4a5a08;
        case 0x4a5a0cu: goto label_4a5a0c;
        case 0x4a5a10u: goto label_4a5a10;
        case 0x4a5a14u: goto label_4a5a14;
        case 0x4a5a18u: goto label_4a5a18;
        case 0x4a5a1cu: goto label_4a5a1c;
        default: break;
    }

    ctx->pc = 0x4a4ff0u;

label_4a4ff0:
    // 0x4a4ff0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4a4ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4a4ff4:
    // 0x4a4ff4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4a4ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4a4ff8:
    // 0x4a4ff8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4a4ff8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4a4ffc:
    // 0x4a4ffc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4a4ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4a5000:
    // 0x4a5000: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4a5000u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_4a5004:
    // 0x4a5004: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4a5004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4a5008:
    // 0x4a5008: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x4a5008u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_4a500c:
    // 0x4a500c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4a500cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4a5010:
    // 0x4a5010: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4a5010u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a5014:
    // 0x4a5014: 0xac800e1c  sw          $zero, 0xE1C($a0)
    ctx->pc = 0x4a5014u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3612), GPR_U32(ctx, 0));
label_4a5018:
    // 0x4a5018: 0xac800e20  sw          $zero, 0xE20($a0)
    ctx->pc = 0x4a5018u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3616), GPR_U32(ctx, 0));
label_4a501c:
    // 0x4a501c: 0xac800e24  sw          $zero, 0xE24($a0)
    ctx->pc = 0x4a501cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3620), GPR_U32(ctx, 0));
label_4a5020:
    // 0x4a5020: 0x8c820db8  lw          $v0, 0xDB8($a0)
    ctx->pc = 0x4a5020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3512)));
label_4a5024:
    // 0x4a5024: 0x3442002f  ori         $v0, $v0, 0x2F
    ctx->pc = 0x4a5024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47);
label_4a5028:
    // 0x4a5028: 0xac820db8  sw          $v0, 0xDB8($a0)
    ctx->pc = 0x4a5028u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3512), GPR_U32(ctx, 2));
label_4a502c:
    // 0x4a502c: 0xc04cbd8  jal         func_132F60
label_4a5030:
    if (ctx->pc == 0x4A5030u) {
        ctx->pc = 0x4A5030u;
            // 0x4a5030: 0x26240330  addiu       $a0, $s1, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 816));
        ctx->pc = 0x4A5034u;
        goto label_4a5034;
    }
    ctx->pc = 0x4A502Cu;
    SET_GPR_U32(ctx, 31, 0x4A5034u);
    ctx->pc = 0x4A5030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A502Cu;
            // 0x4a5030: 0x26240330  addiu       $a0, $s1, 0x330 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5034u; }
        if (ctx->pc != 0x4A5034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5034u; }
        if (ctx->pc != 0x4A5034u) { return; }
    }
    ctx->pc = 0x4A5034u;
label_4a5034:
    // 0x4a5034: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x4a5034u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4a5038:
    // 0x4a5038: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a5038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a503c:
    // 0x4a503c: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x4a503cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_4a5040:
    // 0x4a5040: 0x320f809  jalr        $t9
label_4a5044:
    if (ctx->pc == 0x4A5044u) {
        ctx->pc = 0x4A5044u;
            // 0x4a5044: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x4A5048u;
        goto label_4a5048;
    }
    ctx->pc = 0x4A5040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A5048u);
        ctx->pc = 0x4A5044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5040u;
            // 0x4a5044: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A5048u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A5048u; }
            if (ctx->pc != 0x4A5048u) { return; }
        }
        }
    }
    ctx->pc = 0x4A5048u;
label_4a5048:
    // 0x4a5048: 0x8e300d74  lw          $s0, 0xD74($s1)
    ctx->pc = 0x4a5048u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
label_4a504c:
    // 0x4a504c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x4a504cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_4a5050:
    // 0x4a5050: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x4a5050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4a5054:
    // 0x4a5054: 0x8e0202c8  lw          $v0, 0x2C8($s0)
    ctx->pc = 0x4a5054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
label_4a5058:
    // 0x4a5058: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x4a5058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4a505c:
    // 0x4a505c: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x4a505cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_4a5060:
    // 0x4a5060: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x4a5060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_4a5064:
    // 0x4a5064: 0xc0a545c  jal         func_295170
label_4a5068:
    if (ctx->pc == 0x4A5068u) {
        ctx->pc = 0x4A5068u;
            // 0x4a5068: 0x629024  and         $s2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x4A506Cu;
        goto label_4a506c;
    }
    ctx->pc = 0x4A5064u;
    SET_GPR_U32(ctx, 31, 0x4A506Cu);
    ctx->pc = 0x4A5068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5064u;
            // 0x4a5068: 0x629024  and         $s2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A506Cu; }
        if (ctx->pc != 0x4A506Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A506Cu; }
        if (ctx->pc != 0x4A506Cu) { return; }
    }
    ctx->pc = 0x4A506Cu;
label_4a506c:
    // 0x4a506c: 0xac52002c  sw          $s2, 0x2C($v0)
    ctx->pc = 0x4a506cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 18));
label_4a5070:
    // 0x4a5070: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4a5070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4a5074:
    // 0x4a5074: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x4a5074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4a5078:
    // 0x4a5078: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4a5078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4a507c:
    // 0x4a507c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4a507cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4a5080:
    // 0x4a5080: 0xc08bf20  jal         func_22FC80
label_4a5084:
    if (ctx->pc == 0x4A5084u) {
        ctx->pc = 0x4A5084u;
            // 0x4a5084: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A5088u;
        goto label_4a5088;
    }
    ctx->pc = 0x4A5080u;
    SET_GPR_U32(ctx, 31, 0x4A5088u);
    ctx->pc = 0x4A5084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5080u;
            // 0x4a5084: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5088u; }
        if (ctx->pc != 0x4A5088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5088u; }
        if (ctx->pc != 0x4A5088u) { return; }
    }
    ctx->pc = 0x4A5088u;
label_4a5088:
    // 0x4a5088: 0xae200e48  sw          $zero, 0xE48($s1)
    ctx->pc = 0x4a5088u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3656), GPR_U32(ctx, 0));
label_4a508c:
    // 0x4a508c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4a508cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4a5090:
    // 0x4a5090: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4a5090u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a5094:
    // 0x4a5094: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4a5094u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a5098:
    // 0x4a5098: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4a5098u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4a509c:
    // 0x4a509c: 0x3e00008  jr          $ra
label_4a50a0:
    if (ctx->pc == 0x4A50A0u) {
        ctx->pc = 0x4A50A0u;
            // 0x4a50a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x4A50A4u;
        goto label_4a50a4;
    }
    ctx->pc = 0x4A509Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A50A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A509Cu;
            // 0x4a50a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A50A4u;
label_4a50a4:
    // 0x4a50a4: 0x0  nop
    ctx->pc = 0x4a50a4u;
    // NOP
label_4a50a8:
    // 0x4a50a8: 0x0  nop
    ctx->pc = 0x4a50a8u;
    // NOP
label_4a50ac:
    // 0x4a50ac: 0x0  nop
    ctx->pc = 0x4a50acu;
    // NOP
label_4a50b0:
    // 0x4a50b0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x4a50b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_4a50b4:
    // 0x4a50b4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x4a50b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_4a50b8:
    // 0x4a50b8: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x4a50b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_4a50bc:
    // 0x4a50bc: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x4a50bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_4a50c0:
    // 0x4a50c0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4a50c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_4a50c4:
    // 0x4a50c4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4a50c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4a50c8:
    // 0x4a50c8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4a50c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a50cc:
    // 0x4a50cc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4a50ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4a50d0:
    // 0x4a50d0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4a50d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4a50d4:
    // 0x4a50d4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4a50d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4a50d8:
    // 0x4a50d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4a50d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4a50dc:
    // 0x4a50dc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4a50dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4a50e0:
    // 0x4a50e0: 0x8c840d70  lw          $a0, 0xD70($a0)
    ctx->pc = 0x4a50e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3440)));
label_4a50e4:
    // 0x4a50e4: 0x8c8200cc  lw          $v0, 0xCC($a0)
    ctx->pc = 0x4a50e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
label_4a50e8:
    // 0x4a50e8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_4a50ec:
    if (ctx->pc == 0x4A50ECu) {
        ctx->pc = 0x4A50ECu;
            // 0x4a50ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4A50F0u;
        goto label_4a50f0;
    }
    ctx->pc = 0x4A50E8u;
    {
        const bool branch_taken_0x4a50e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a50e8) {
            ctx->pc = 0x4A50ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A50E8u;
            // 0x4a50ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A510Cu;
            goto label_4a510c;
        }
    }
    ctx->pc = 0x4A50F0u;
label_4a50f0:
    // 0x4a50f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4a50f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4a50f4:
    // 0x4a50f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4a50f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a50f8:
    // 0x4a50f8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4a50f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4a50fc:
    // 0x4a50fc: 0xc0bdf9c  jal         func_2F7E70
label_4a5100:
    if (ctx->pc == 0x4A5100u) {
        ctx->pc = 0x4A5100u;
            // 0x4a5100: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x4A5104u;
        goto label_4a5104;
    }
    ctx->pc = 0x4A50FCu;
    SET_GPR_U32(ctx, 31, 0x4A5104u);
    ctx->pc = 0x4A5100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A50FCu;
            // 0x4a5100: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5104u; }
        if (ctx->pc != 0x4A5104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5104u; }
        if (ctx->pc != 0x4A5104u) { return; }
    }
    ctx->pc = 0x4A5104u;
label_4a5104:
    // 0x4a5104: 0x10000003  b           . + 4 + (0x3 << 2)
label_4a5108:
    if (ctx->pc == 0x4A5108u) {
        ctx->pc = 0x4A5108u;
            // 0x4a5108: 0xc6a10e1c  lwc1        $f1, 0xE1C($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x4A510Cu;
        goto label_4a510c;
    }
    ctx->pc = 0x4A5104u;
    {
        const bool branch_taken_0x4a5104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5104u;
            // 0x4a5108: 0xc6a10e1c  lwc1        $f1, 0xE1C($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5104) {
            ctx->pc = 0x4A5114u;
            goto label_4a5114;
        }
    }
    ctx->pc = 0x4A510Cu;
label_4a510c:
    // 0x4a510c: 0xa2a211c0  sb          $v0, 0x11C0($s5)
    ctx->pc = 0x4a510cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 4544), (uint8_t)GPR_U32(ctx, 2));
label_4a5110:
    // 0x4a5110: 0xc6a10e1c  lwc1        $f1, 0xE1C($s5)
    ctx->pc = 0x4a5110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 3612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4a5114:
    // 0x4a5114: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x4a5114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_4a5118:
    // 0x4a5118: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a5118u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a511c:
    // 0x4a511c: 0x0  nop
    ctx->pc = 0x4a511cu;
    // NOP
label_4a5120:
    // 0x4a5120: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4a5120u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4a5124:
    // 0x4a5124: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_4a5128:
    if (ctx->pc == 0x4A5128u) {
        ctx->pc = 0x4A5128u;
            // 0x4a5128: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4A512Cu;
        goto label_4a512c;
    }
    ctx->pc = 0x4A5124u;
    {
        const bool branch_taken_0x4a5124 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4a5124) {
            ctx->pc = 0x4A5128u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5124u;
            // 0x4a5128: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A513Cu;
            goto label_4a513c;
        }
    }
    ctx->pc = 0x4A512Cu;
label_4a512c:
    // 0x4a512c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a512cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4a5130:
    // 0x4a5130: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4a5130u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4a5134:
    // 0x4a5134: 0x10000007  b           . + 4 + (0x7 << 2)
label_4a5138:
    if (ctx->pc == 0x4A5138u) {
        ctx->pc = 0x4A5138u;
            // 0x4a5138: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x4A513Cu;
        goto label_4a513c;
    }
    ctx->pc = 0x4A5134u;
    {
        const bool branch_taken_0x4a5134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5134u;
            // 0x4a5138: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5134) {
            ctx->pc = 0x4A5154u;
            goto label_4a5154;
        }
    }
    ctx->pc = 0x4A513Cu;
label_4a513c:
    // 0x4a513c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4a513cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_4a5140:
    // 0x4a5140: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a5140u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4a5144:
    // 0x4a5144: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4a5144u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4a5148:
    // 0x4a5148: 0x0  nop
    ctx->pc = 0x4a5148u;
    // NOP
label_4a514c:
    // 0x4a514c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4a514cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4a5150:
    // 0x4a5150: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x4a5150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_4a5154:
    // 0x4a5154: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x4a5154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_4a5158:
    // 0x4a5158: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x4a5158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4a515c:
    // 0x4a515c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4a515cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4a5160:
    // 0x4a5160: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x4a5160u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_4a5164:
    // 0x4a5164: 0x24630e84  addiu       $v1, $v1, 0xE84
    ctx->pc = 0x4a5164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3716));
label_4a5168:
    // 0x4a5168: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4a5168u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4a516c:
    // 0x4a516c: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x4a516cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_4a5170:
    // 0x4a5170: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4a5170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4a5174:
    // 0x4a5174: 0x8c740000  lw          $s4, 0x0($v1)
    ctx->pc = 0x4a5174u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4a5178:
    // 0x4a5178: 0x8e830d6c  lw          $v1, 0xD6C($s4)
    ctx->pc = 0x4a5178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3436)));
label_4a517c:
    // 0x4a517c: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x4a517cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_4a5180:
    // 0x4a5180: 0x50620012  beql        $v1, $v0, . + 4 + (0x12 << 2)
label_4a5184:
    if (ctx->pc == 0x4A5184u) {
        ctx->pc = 0x4A5184u;
            // 0x4a5184: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A5188u;
        goto label_4a5188;
    }
    ctx->pc = 0x4A5180u;
    {
        const bool branch_taken_0x4a5180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4a5180) {
            ctx->pc = 0x4A5184u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5180u;
            // 0x4a5184: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A51CCu;
            goto label_4a51cc;
        }
    }
    ctx->pc = 0x4A5188u;
label_4a5188:
    // 0x4a5188: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x4a5188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4a518c:
    // 0x4a518c: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_4a5190:
    if (ctx->pc == 0x4A5190u) {
        ctx->pc = 0x4A5194u;
        goto label_4a5194;
    }
    ctx->pc = 0x4A518Cu;
    {
        const bool branch_taken_0x4a518c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4a518c) {
            ctx->pc = 0x4A51C8u;
            goto label_4a51c8;
        }
    }
    ctx->pc = 0x4A5194u;
label_4a5194:
    // 0x4a5194: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x4a5194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_4a5198:
    // 0x4a5198: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_4a519c:
    if (ctx->pc == 0x4A519Cu) {
        ctx->pc = 0x4A51A0u;
        goto label_4a51a0;
    }
    ctx->pc = 0x4A5198u;
    {
        const bool branch_taken_0x4a5198 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4a5198) {
            ctx->pc = 0x4A51C8u;
            goto label_4a51c8;
        }
    }
    ctx->pc = 0x4A51A0u;
label_4a51a0:
    // 0x4a51a0: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x4a51a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_4a51a4:
    // 0x4a51a4: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_4a51a8:
    if (ctx->pc == 0x4A51A8u) {
        ctx->pc = 0x4A51ACu;
        goto label_4a51ac;
    }
    ctx->pc = 0x4A51A4u;
    {
        const bool branch_taken_0x4a51a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4a51a4) {
            ctx->pc = 0x4A51C8u;
            goto label_4a51c8;
        }
    }
    ctx->pc = 0x4A51ACu;
label_4a51ac:
    // 0x4a51ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4a51acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a51b0:
    // 0x4a51b0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_4a51b4:
    if (ctx->pc == 0x4A51B4u) {
        ctx->pc = 0x4A51B8u;
        goto label_4a51b8;
    }
    ctx->pc = 0x4A51B0u;
    {
        const bool branch_taken_0x4a51b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4a51b0) {
            ctx->pc = 0x4A51C8u;
            goto label_4a51c8;
        }
    }
    ctx->pc = 0x4A51B8u;
label_4a51b8:
    // 0x4a51b8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_4a51bc:
    if (ctx->pc == 0x4A51BCu) {
        ctx->pc = 0x4A51C0u;
        goto label_4a51c0;
    }
    ctx->pc = 0x4A51B8u;
    {
        const bool branch_taken_0x4a51b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a51b8) {
            ctx->pc = 0x4A51C8u;
            goto label_4a51c8;
        }
    }
    ctx->pc = 0x4A51C0u;
label_4a51c0:
    // 0x4a51c0: 0x1000013e  b           . + 4 + (0x13E << 2)
label_4a51c4:
    if (ctx->pc == 0x4A51C4u) {
        ctx->pc = 0x4A51C4u;
            // 0x4a51c4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A51C8u;
        goto label_4a51c8;
    }
    ctx->pc = 0x4A51C0u;
    {
        const bool branch_taken_0x4a51c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A51C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A51C0u;
            // 0x4a51c4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a51c0) {
            ctx->pc = 0x4A56BCu;
            goto label_4a56bc;
        }
    }
    ctx->pc = 0x4A51C8u;
label_4a51c8:
    // 0x4a51c8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4a51c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4a51cc:
    // 0x4a51cc: 0xc0772e8  jal         func_1DCBA0
label_4a51d0:
    if (ctx->pc == 0x4A51D0u) {
        ctx->pc = 0x4A51D4u;
        goto label_4a51d4;
    }
    ctx->pc = 0x4A51CCu;
    SET_GPR_U32(ctx, 31, 0x4A51D4u);
    ctx->pc = 0x1DCBA0u;
    if (runtime->hasFunction(0x1DCBA0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A51D4u; }
        if (ctx->pc != 0x4A51D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCBA0_0x1dcba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A51D4u; }
        if (ctx->pc != 0x4A51D4u) { return; }
    }
    ctx->pc = 0x4A51D4u;
label_4a51d4:
    // 0x4a51d4: 0xc0775d8  jal         func_1DD760
label_4a51d8:
    if (ctx->pc == 0x4A51D8u) {
        ctx->pc = 0x4A51D8u;
            // 0x4a51d8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A51DCu;
        goto label_4a51dc;
    }
    ctx->pc = 0x4A51D4u;
    SET_GPR_U32(ctx, 31, 0x4A51DCu);
    ctx->pc = 0x4A51D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A51D4u;
            // 0x4a51d8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD760u;
    if (runtime->hasFunction(0x1DD760u)) {
        auto targetFn = runtime->lookupFunction(0x1DD760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A51DCu; }
        if (ctx->pc != 0x4A51DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD760_0x1dd760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A51DCu; }
        if (ctx->pc != 0x4A51DCu) { return; }
    }
    ctx->pc = 0x4A51DCu;
label_4a51dc:
    // 0x4a51dc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4a51dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a51e0:
    // 0x4a51e0: 0xc0770c0  jal         func_1DC300
label_4a51e4:
    if (ctx->pc == 0x4A51E4u) {
        ctx->pc = 0x4A51E4u;
            // 0x4a51e4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A51E8u;
        goto label_4a51e8;
    }
    ctx->pc = 0x4A51E0u;
    SET_GPR_U32(ctx, 31, 0x4A51E8u);
    ctx->pc = 0x4A51E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A51E0u;
            // 0x4a51e4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC300u;
    if (runtime->hasFunction(0x1DC300u)) {
        auto targetFn = runtime->lookupFunction(0x1DC300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A51E8u; }
        if (ctx->pc != 0x4A51E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC300_0x1dc300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A51E8u; }
        if (ctx->pc != 0x4A51E8u) { return; }
    }
    ctx->pc = 0x4A51E8u;
label_4a51e8:
    // 0x4a51e8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4a51e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a51ec:
    // 0x4a51ec: 0xc0772f0  jal         func_1DCBC0
label_4a51f0:
    if (ctx->pc == 0x4A51F0u) {
        ctx->pc = 0x4A51F0u;
            // 0x4a51f0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A51F4u;
        goto label_4a51f4;
    }
    ctx->pc = 0x4A51ECu;
    SET_GPR_U32(ctx, 31, 0x4A51F4u);
    ctx->pc = 0x4A51F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A51ECu;
            // 0x4a51f0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBC0u;
    if (runtime->hasFunction(0x1DCBC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A51F4u; }
        if (ctx->pc != 0x4A51F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCBC0_0x1dcbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A51F4u; }
        if (ctx->pc != 0x4A51F4u) { return; }
    }
    ctx->pc = 0x4A51F4u;
label_4a51f4:
    // 0x4a51f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4a51f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a51f8:
    // 0x4a51f8: 0xc077584  jal         func_1DD610
label_4a51fc:
    if (ctx->pc == 0x4A51FCu) {
        ctx->pc = 0x4A51FCu;
            // 0x4a51fc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A5200u;
        goto label_4a5200;
    }
    ctx->pc = 0x4A51F8u;
    SET_GPR_U32(ctx, 31, 0x4A5200u);
    ctx->pc = 0x4A51FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A51F8u;
            // 0x4a51fc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD610u;
    if (runtime->hasFunction(0x1DD610u)) {
        auto targetFn = runtime->lookupFunction(0x1DD610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5200u; }
        if (ctx->pc != 0x4A5200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD610_0x1dd610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5200u; }
        if (ctx->pc != 0x4A5200u) { return; }
    }
    ctx->pc = 0x4A5200u;
label_4a5200:
    // 0x4a5200: 0xc0754b4  jal         func_1D52D0
label_4a5204:
    if (ctx->pc == 0x4A5204u) {
        ctx->pc = 0x4A5204u;
            // 0x4a5204: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A5208u;
        goto label_4a5208;
    }
    ctx->pc = 0x4A5200u;
    SET_GPR_U32(ctx, 31, 0x4A5208u);
    ctx->pc = 0x4A5204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5200u;
            // 0x4a5204: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5208u; }
        if (ctx->pc != 0x4A5208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5208u; }
        if (ctx->pc != 0x4A5208u) { return; }
    }
    ctx->pc = 0x4A5208u;
label_4a5208:
    // 0x4a5208: 0xc12971c  jal         func_4A5C70
label_4a520c:
    if (ctx->pc == 0x4A520Cu) {
        ctx->pc = 0x4A520Cu;
            // 0x4a520c: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A5210u;
        goto label_4a5210;
    }
    ctx->pc = 0x4A5208u;
    SET_GPR_U32(ctx, 31, 0x4A5210u);
    ctx->pc = 0x4A520Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5208u;
            // 0x4a520c: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A5C70u;
    if (runtime->hasFunction(0x4A5C70u)) {
        auto targetFn = runtime->lookupFunction(0x4A5C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5210u; }
        if (ctx->pc != 0x4A5210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A5C70_0x4a5c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5210u; }
        if (ctx->pc != 0x4A5210u) { return; }
    }
    ctx->pc = 0x4A5210u;
label_4a5210:
    // 0x4a5210: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4a5210u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a5214:
    // 0x4a5214: 0xc0772ec  jal         func_1DCBB0
label_4a5218:
    if (ctx->pc == 0x4A5218u) {
        ctx->pc = 0x4A5218u;
            // 0x4a5218: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A521Cu;
        goto label_4a521c;
    }
    ctx->pc = 0x4A5214u;
    SET_GPR_U32(ctx, 31, 0x4A521Cu);
    ctx->pc = 0x4A5218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5214u;
            // 0x4a5218: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBB0u;
    if (runtime->hasFunction(0x1DCBB0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A521Cu; }
        if (ctx->pc != 0x4A521Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCBB0_0x1dcbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A521Cu; }
        if (ctx->pc != 0x4A521Cu) { return; }
    }
    ctx->pc = 0x4A521Cu;
label_4a521c:
    // 0x4a521c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_4a5220:
    if (ctx->pc == 0x4A5220u) {
        ctx->pc = 0x4A5220u;
            // 0x4a5220: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A5224u;
        goto label_4a5224;
    }
    ctx->pc = 0x4A521Cu;
    {
        const bool branch_taken_0x4a521c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a521c) {
            ctx->pc = 0x4A5220u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A521Cu;
            // 0x4a5220: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A5240u;
            goto label_4a5240;
        }
    }
    ctx->pc = 0x4A5224u;
label_4a5224:
    // 0x4a5224: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4a5224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4a5228:
    // 0x4a5228: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a5228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a522c:
    // 0x4a522c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4a522cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4a5230:
    // 0x4a5230: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4a5230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a5234:
    // 0x4a5234: 0xc0bdf9c  jal         func_2F7E70
label_4a5238:
    if (ctx->pc == 0x4A5238u) {
        ctx->pc = 0x4A5238u;
            // 0x4a5238: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x4A523Cu;
        goto label_4a523c;
    }
    ctx->pc = 0x4A5234u;
    SET_GPR_U32(ctx, 31, 0x4A523Cu);
    ctx->pc = 0x4A5238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5234u;
            // 0x4a5238: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A523Cu; }
        if (ctx->pc != 0x4A523Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A523Cu; }
        if (ctx->pc != 0x4A523Cu) { return; }
    }
    ctx->pc = 0x4A523Cu;
label_4a523c:
    // 0x4a523c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4a523cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4a5240:
    // 0x4a5240: 0xc129718  jal         func_4A5C60
label_4a5244:
    if (ctx->pc == 0x4A5244u) {
        ctx->pc = 0x4A5244u;
            // 0x4a5244: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A5248u;
        goto label_4a5248;
    }
    ctx->pc = 0x4A5240u;
    SET_GPR_U32(ctx, 31, 0x4A5248u);
    ctx->pc = 0x4A5244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5240u;
            // 0x4a5244: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A5C60u;
    if (runtime->hasFunction(0x4A5C60u)) {
        auto targetFn = runtime->lookupFunction(0x4A5C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5248u; }
        if (ctx->pc != 0x4A5248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A5C60_0x4a5c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5248u; }
        if (ctx->pc != 0x4A5248u) { return; }
    }
    ctx->pc = 0x4A5248u;
label_4a5248:
    // 0x4a5248: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x4a5248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_4a524c:
    // 0x4a524c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4a524cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4a5250:
    // 0x4a5250: 0x0  nop
    ctx->pc = 0x4a5250u;
    // NOP
label_4a5254:
    // 0x4a5254: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4a5254u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4a5258:
    // 0x4a5258: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_4a525c:
    if (ctx->pc == 0x4A525Cu) {
        ctx->pc = 0x4A525Cu;
            // 0x4a525c: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x4A5260u;
        goto label_4a5260;
    }
    ctx->pc = 0x4A5258u;
    {
        const bool branch_taken_0x4a5258 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4a5258) {
            ctx->pc = 0x4A525Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5258u;
            // 0x4a525c: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A5270u;
            goto label_4a5270;
        }
    }
    ctx->pc = 0x4A5260u;
label_4a5260:
    // 0x4a5260: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a5260u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4a5264:
    // 0x4a5264: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4a5264u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4a5268:
    // 0x4a5268: 0x10000007  b           . + 4 + (0x7 << 2)
label_4a526c:
    if (ctx->pc == 0x4A526Cu) {
        ctx->pc = 0x4A526Cu;
            // 0x4a526c: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x4A5270u;
        goto label_4a5270;
    }
    ctx->pc = 0x4A5268u;
    {
        const bool branch_taken_0x4a5268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A526Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5268u;
            // 0x4a526c: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5268) {
            ctx->pc = 0x4A5288u;
            goto label_4a5288;
        }
    }
    ctx->pc = 0x4A5270u;
label_4a5270:
    // 0x4a5270: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4a5270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_4a5274:
    // 0x4a5274: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a5274u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4a5278:
    // 0x4a5278: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4a5278u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4a527c:
    // 0x4a527c: 0x0  nop
    ctx->pc = 0x4a527cu;
    // NOP
label_4a5280:
    // 0x4a5280: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4a5280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4a5284:
    // 0x4a5284: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x4a5284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_4a5288:
    // 0x4a5288: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x4a5288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_4a528c:
    // 0x4a528c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4a528cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4a5290:
    // 0x4a5290: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4a5290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4a5294:
    // 0x4a5294: 0x24420e84  addiu       $v0, $v0, 0xE84
    ctx->pc = 0x4a5294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3716));
label_4a5298:
    // 0x4a5298: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x4a5298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_4a529c:
    // 0x4a529c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4a529cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4a52a0:
    // 0x4a52a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a52a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4a52a4:
    // 0x4a52a4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x4a52a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4a52a8:
    // 0x4a52a8: 0xc07753c  jal         func_1DD4F0
label_4a52ac:
    if (ctx->pc == 0x4A52ACu) {
        ctx->pc = 0x4A52ACu;
            // 0x4a52ac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A52B0u;
        goto label_4a52b0;
    }
    ctx->pc = 0x4A52A8u;
    SET_GPR_U32(ctx, 31, 0x4A52B0u);
    ctx->pc = 0x4A52ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A52A8u;
            // 0x4a52ac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD4F0u;
    if (runtime->hasFunction(0x1DD4F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A52B0u; }
        if (ctx->pc != 0x4A52B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD4F0_0x1dd4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A52B0u; }
        if (ctx->pc != 0x4A52B0u) { return; }
    }
    ctx->pc = 0x4A52B0u;
label_4a52b0:
    // 0x4a52b0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x4a52b0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a52b4:
    // 0x4a52b4: 0xc07753c  jal         func_1DD4F0
label_4a52b8:
    if (ctx->pc == 0x4A52B8u) {
        ctx->pc = 0x4A52B8u;
            // 0x4a52b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A52BCu;
        goto label_4a52bc;
    }
    ctx->pc = 0x4A52B4u;
    SET_GPR_U32(ctx, 31, 0x4A52BCu);
    ctx->pc = 0x4A52B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A52B4u;
            // 0x4a52b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD4F0u;
    if (runtime->hasFunction(0x1DD4F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A52BCu; }
        if (ctx->pc != 0x4A52BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD4F0_0x1dd4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A52BCu; }
        if (ctx->pc != 0x4A52BCu) { return; }
    }
    ctx->pc = 0x4A52BCu;
label_4a52bc:
    // 0x4a52bc: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x4a52bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4a52c0:
    // 0x4a52c0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x4a52c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a52c4:
    // 0x4a52c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a52c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a52c8:
    // 0x4a52c8: 0xc129714  jal         func_4A5C50
label_4a52cc:
    if (ctx->pc == 0x4A52CCu) {
        ctx->pc = 0x4A52CCu;
            // 0x4a52cc: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x4A52D0u;
        goto label_4a52d0;
    }
    ctx->pc = 0x4A52C8u;
    SET_GPR_U32(ctx, 31, 0x4A52D0u);
    ctx->pc = 0x4A52CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A52C8u;
            // 0x4a52cc: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A5C50u;
    if (runtime->hasFunction(0x4A5C50u)) {
        auto targetFn = runtime->lookupFunction(0x4A5C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A52D0u; }
        if (ctx->pc != 0x4A52D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A5C50_0x4a5c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A52D0u; }
        if (ctx->pc != 0x4A52D0u) { return; }
    }
    ctx->pc = 0x4A52D0u;
label_4a52d0:
    // 0x4a52d0: 0xc07753c  jal         func_1DD4F0
label_4a52d4:
    if (ctx->pc == 0x4A52D4u) {
        ctx->pc = 0x4A52D4u;
            // 0x4a52d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A52D8u;
        goto label_4a52d8;
    }
    ctx->pc = 0x4A52D0u;
    SET_GPR_U32(ctx, 31, 0x4A52D8u);
    ctx->pc = 0x4A52D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A52D0u;
            // 0x4a52d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD4F0u;
    if (runtime->hasFunction(0x1DD4F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A52D8u; }
        if (ctx->pc != 0x4A52D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD4F0_0x1dd4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A52D8u; }
        if (ctx->pc != 0x4A52D8u) { return; }
    }
    ctx->pc = 0x4A52D8u;
label_4a52d8:
    // 0x4a52d8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4a52d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a52dc:
    // 0x4a52dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a52dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a52e0:
    // 0x4a52e0: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x4a52e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_4a52e4:
    // 0x4a52e4: 0xc129710  jal         func_4A5C40
label_4a52e8:
    if (ctx->pc == 0x4A52E8u) {
        ctx->pc = 0x4A52E8u;
            // 0x4a52e8: 0x27a70130  addiu       $a3, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x4A52ECu;
        goto label_4a52ec;
    }
    ctx->pc = 0x4A52E4u;
    SET_GPR_U32(ctx, 31, 0x4A52ECu);
    ctx->pc = 0x4A52E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A52E4u;
            // 0x4a52e8: 0x27a70130  addiu       $a3, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A5C40u;
    if (runtime->hasFunction(0x4A5C40u)) {
        auto targetFn = runtime->lookupFunction(0x4A5C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A52ECu; }
        if (ctx->pc != 0x4A52ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A5C40_0x4a5c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A52ECu; }
        if (ctx->pc != 0x4A52ECu) { return; }
    }
    ctx->pc = 0x4A52ECu;
label_4a52ec:
    // 0x4a52ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4a52ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4a52f0:
    // 0x4a52f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a52f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a52f4:
    // 0x4a52f4: 0xafa20114  sw          $v0, 0x114($sp)
    ctx->pc = 0x4a52f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
label_4a52f8:
    // 0x4a52f8: 0xafa00118  sw          $zero, 0x118($sp)
    ctx->pc = 0x4a52f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
label_4a52fc:
    // 0x4a52fc: 0xc07753c  jal         func_1DD4F0
label_4a5300:
    if (ctx->pc == 0x4A5300u) {
        ctx->pc = 0x4A5300u;
            // 0x4a5300: 0xafa00110  sw          $zero, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
        ctx->pc = 0x4A5304u;
        goto label_4a5304;
    }
    ctx->pc = 0x4A52FCu;
    SET_GPR_U32(ctx, 31, 0x4A5304u);
    ctx->pc = 0x4A5300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A52FCu;
            // 0x4a5300: 0xafa00110  sw          $zero, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD4F0u;
    if (runtime->hasFunction(0x1DD4F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5304u; }
        if (ctx->pc != 0x4A5304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD4F0_0x1dd4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5304u; }
        if (ctx->pc != 0x4A5304u) { return; }
    }
    ctx->pc = 0x4A5304u;
label_4a5304:
    // 0x4a5304: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x4a5304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_4a5308:
    // 0x4a5308: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4a5308u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a530c:
    // 0x4a530c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a530cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a5310:
    // 0x4a5310: 0xc129710  jal         func_4A5C40
label_4a5314:
    if (ctx->pc == 0x4A5314u) {
        ctx->pc = 0x4A5314u;
            // 0x4a5314: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A5318u;
        goto label_4a5318;
    }
    ctx->pc = 0x4A5310u;
    SET_GPR_U32(ctx, 31, 0x4A5318u);
    ctx->pc = 0x4A5314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5310u;
            // 0x4a5314: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A5C40u;
    if (runtime->hasFunction(0x4A5C40u)) {
        auto targetFn = runtime->lookupFunction(0x4A5C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5318u; }
        if (ctx->pc != 0x4A5318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A5C40_0x4a5c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5318u; }
        if (ctx->pc != 0x4A5318u) { return; }
    }
    ctx->pc = 0x4A5318u;
label_4a5318:
    // 0x4a5318: 0xc0f0c14  jal         func_3C3050
label_4a531c:
    if (ctx->pc == 0x4A531Cu) {
        ctx->pc = 0x4A531Cu;
            // 0x4a531c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A5320u;
        goto label_4a5320;
    }
    ctx->pc = 0x4A5318u;
    SET_GPR_U32(ctx, 31, 0x4A5320u);
    ctx->pc = 0x4A531Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5318u;
            // 0x4a531c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3050u;
    if (runtime->hasFunction(0x3C3050u)) {
        auto targetFn = runtime->lookupFunction(0x3C3050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5320u; }
        if (ctx->pc != 0x4A5320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3050_0x3c3050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5320u; }
        if (ctx->pc != 0x4A5320u) { return; }
    }
    ctx->pc = 0x4A5320u;
label_4a5320:
    // 0x4a5320: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4a5320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a5324:
    // 0x4a5324: 0xc04ccf4  jal         func_1333D0
label_4a5328:
    if (ctx->pc == 0x4A5328u) {
        ctx->pc = 0x4A5328u;
            // 0x4a5328: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x4A532Cu;
        goto label_4a532c;
    }
    ctx->pc = 0x4A5324u;
    SET_GPR_U32(ctx, 31, 0x4A532Cu);
    ctx->pc = 0x4A5328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5324u;
            // 0x4a5328: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A532Cu; }
        if (ctx->pc != 0x4A532Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A532Cu; }
        if (ctx->pc != 0x4A532Cu) { return; }
    }
    ctx->pc = 0x4A532Cu;
label_4a532c:
    // 0x4a532c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x4a532cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_4a5330:
    // 0x4a5330: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x4a5330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4a5334:
    // 0x4a5334: 0xc04cca0  jal         func_133280
label_4a5338:
    if (ctx->pc == 0x4A5338u) {
        ctx->pc = 0x4A5338u;
            // 0x4a5338: 0x27a60130  addiu       $a2, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x4A533Cu;
        goto label_4a533c;
    }
    ctx->pc = 0x4A5334u;
    SET_GPR_U32(ctx, 31, 0x4A533Cu);
    ctx->pc = 0x4A5338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5334u;
            // 0x4a5338: 0x27a60130  addiu       $a2, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A533Cu; }
        if (ctx->pc != 0x4A533Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A533Cu; }
        if (ctx->pc != 0x4A533Cu) { return; }
    }
    ctx->pc = 0x4A533Cu;
label_4a533c:
    // 0x4a533c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a533cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a5340:
    // 0x4a5340: 0xc07753c  jal         func_1DD4F0
label_4a5344:
    if (ctx->pc == 0x4A5344u) {
        ctx->pc = 0x4A5344u;
            // 0x4a5344: 0xafa00124  sw          $zero, 0x124($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 0));
        ctx->pc = 0x4A5348u;
        goto label_4a5348;
    }
    ctx->pc = 0x4A5340u;
    SET_GPR_U32(ctx, 31, 0x4A5348u);
    ctx->pc = 0x4A5344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5340u;
            // 0x4a5344: 0xafa00124  sw          $zero, 0x124($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD4F0u;
    if (runtime->hasFunction(0x1DD4F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5348u; }
        if (ctx->pc != 0x4A5348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD4F0_0x1dd4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5348u; }
        if (ctx->pc != 0x4A5348u) { return; }
    }
    ctx->pc = 0x4A5348u;
label_4a5348:
    // 0x4a5348: 0x3c070066  lui         $a3, 0x66
    ctx->pc = 0x4a5348u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)102 << 16));
label_4a534c:
    // 0x4a534c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4a534cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a5350:
    // 0x4a5350: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a5350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a5354:
    // 0x4a5354: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x4a5354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_4a5358:
    // 0x4a5358: 0xc129710  jal         func_4A5C40
label_4a535c:
    if (ctx->pc == 0x4A535Cu) {
        ctx->pc = 0x4A535Cu;
            // 0x4a535c: 0x24e71460  addiu       $a3, $a3, 0x1460 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5216));
        ctx->pc = 0x4A5360u;
        goto label_4a5360;
    }
    ctx->pc = 0x4A5358u;
    SET_GPR_U32(ctx, 31, 0x4A5360u);
    ctx->pc = 0x4A535Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5358u;
            // 0x4a535c: 0x24e71460  addiu       $a3, $a3, 0x1460 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A5C40u;
    if (runtime->hasFunction(0x4A5C40u)) {
        auto targetFn = runtime->lookupFunction(0x4A5C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5360u; }
        if (ctx->pc != 0x4A5360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A5C40_0x4a5c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5360u; }
        if (ctx->pc != 0x4A5360u) { return; }
    }
    ctx->pc = 0x4A5360u;
label_4a5360:
    // 0x4a5360: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a5360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a5364:
    // 0x4a5364: 0xc12970c  jal         func_4A5C30
label_4a5368:
    if (ctx->pc == 0x4A5368u) {
        ctx->pc = 0x4A5368u;
            // 0x4a5368: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x4A536Cu;
        goto label_4a536c;
    }
    ctx->pc = 0x4A5364u;
    SET_GPR_U32(ctx, 31, 0x4A536Cu);
    ctx->pc = 0x4A5368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5364u;
            // 0x4a5368: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A5C30u;
    if (runtime->hasFunction(0x4A5C30u)) {
        auto targetFn = runtime->lookupFunction(0x4A5C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A536Cu; }
        if (ctx->pc != 0x4A536Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A5C30_0x4a5c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A536Cu; }
        if (ctx->pc != 0x4A536Cu) { return; }
    }
    ctx->pc = 0x4A536Cu;
label_4a536c:
    // 0x4a536c: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4a536cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_4a5370:
    // 0x4a5370: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x4a5370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_4a5374:
    // 0x4a5374: 0xc1296d0  jal         func_4A5B40
label_4a5378:
    if (ctx->pc == 0x4A5378u) {
        ctx->pc = 0x4A5378u;
            // 0x4a5378: 0x24841460  addiu       $a0, $a0, 0x1460 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5216));
        ctx->pc = 0x4A537Cu;
        goto label_4a537c;
    }
    ctx->pc = 0x4A5374u;
    SET_GPR_U32(ctx, 31, 0x4A537Cu);
    ctx->pc = 0x4A5378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5374u;
            // 0x4a5378: 0x24841460  addiu       $a0, $a0, 0x1460 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A5B40u;
    if (runtime->hasFunction(0x4A5B40u)) {
        auto targetFn = runtime->lookupFunction(0x4A5B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A537Cu; }
        if (ctx->pc != 0x4A537Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A5B40_0x4a5b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A537Cu; }
        if (ctx->pc != 0x4A537Cu) { return; }
    }
    ctx->pc = 0x4A537Cu;
label_4a537c:
    // 0x4a537c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x4a537cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_4a5380:
    // 0x4a5380: 0xc07753c  jal         func_1DD4F0
label_4a5384:
    if (ctx->pc == 0x4A5384u) {
        ctx->pc = 0x4A5384u;
            // 0x4a5384: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A5388u;
        goto label_4a5388;
    }
    ctx->pc = 0x4A5380u;
    SET_GPR_U32(ctx, 31, 0x4A5388u);
    ctx->pc = 0x4A5384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5380u;
            // 0x4a5384: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD4F0u;
    if (runtime->hasFunction(0x1DD4F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5388u; }
        if (ctx->pc != 0x4A5388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD4F0_0x1dd4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5388u; }
        if (ctx->pc != 0x4A5388u) { return; }
    }
    ctx->pc = 0x4A5388u;
label_4a5388:
    // 0x4a5388: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4a5388u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a538c:
    // 0x4a538c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x4a538cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_4a5390:
    // 0x4a5390: 0xc04cca0  jal         func_133280
label_4a5394:
    if (ctx->pc == 0x4A5394u) {
        ctx->pc = 0x4A5394u;
            // 0x4a5394: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x4A5398u;
        goto label_4a5398;
    }
    ctx->pc = 0x4A5390u;
    SET_GPR_U32(ctx, 31, 0x4A5398u);
    ctx->pc = 0x4A5394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5390u;
            // 0x4a5394: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5398u; }
        if (ctx->pc != 0x4A5398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5398u; }
        if (ctx->pc != 0x4A5398u) { return; }
    }
    ctx->pc = 0x4A5398u;
label_4a5398:
    // 0x4a5398: 0xc07753c  jal         func_1DD4F0
label_4a539c:
    if (ctx->pc == 0x4A539Cu) {
        ctx->pc = 0x4A539Cu;
            // 0x4a539c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A53A0u;
        goto label_4a53a0;
    }
    ctx->pc = 0x4A5398u;
    SET_GPR_U32(ctx, 31, 0x4A53A0u);
    ctx->pc = 0x4A539Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5398u;
            // 0x4a539c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD4F0u;
    if (runtime->hasFunction(0x1DD4F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A53A0u; }
        if (ctx->pc != 0x4A53A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD4F0_0x1dd4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A53A0u; }
        if (ctx->pc != 0x4A53A0u) { return; }
    }
    ctx->pc = 0x4A53A0u;
label_4a53a0:
    // 0x4a53a0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x4a53a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a53a4:
    // 0x4a53a4: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x4a53a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_4a53a8:
    // 0x4a53a8: 0xc04cca0  jal         func_133280
label_4a53ac:
    if (ctx->pc == 0x4A53ACu) {
        ctx->pc = 0x4A53ACu;
            // 0x4a53ac: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x4A53B0u;
        goto label_4a53b0;
    }
    ctx->pc = 0x4A53A8u;
    SET_GPR_U32(ctx, 31, 0x4A53B0u);
    ctx->pc = 0x4A53ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A53A8u;
            // 0x4a53ac: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A53B0u; }
        if (ctx->pc != 0x4A53B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A53B0u; }
        if (ctx->pc != 0x4A53B0u) { return; }
    }
    ctx->pc = 0x4A53B0u;
label_4a53b0:
    // 0x4a53b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a53b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a53b4:
    // 0x4a53b4: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x4a53b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_4a53b8:
    // 0x4a53b8: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x4a53b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_4a53bc:
    // 0x4a53bc: 0xc129714  jal         func_4A5C50
label_4a53c0:
    if (ctx->pc == 0x4A53C0u) {
        ctx->pc = 0x4A53C0u;
            // 0x4a53c0: 0x27a70100  addiu       $a3, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x4A53C4u;
        goto label_4a53c4;
    }
    ctx->pc = 0x4A53BCu;
    SET_GPR_U32(ctx, 31, 0x4A53C4u);
    ctx->pc = 0x4A53C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A53BCu;
            // 0x4a53c0: 0x27a70100  addiu       $a3, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A5C50u;
    if (runtime->hasFunction(0x4A5C50u)) {
        auto targetFn = runtime->lookupFunction(0x4A5C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A53C4u; }
        if (ctx->pc != 0x4A53C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A5C50_0x4a5c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A53C4u; }
        if (ctx->pc != 0x4A53C4u) { return; }
    }
    ctx->pc = 0x4A53C4u;
label_4a53c4:
    // 0x4a53c4: 0xc7a100f0  lwc1        $f1, 0xF0($sp)
    ctx->pc = 0x4a53c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4a53c8:
    // 0x4a53c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4a53c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a53cc:
    // 0x4a53cc: 0x0  nop
    ctx->pc = 0x4a53ccu;
    // NOP
label_4a53d0:
    // 0x4a53d0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4a53d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4a53d4:
    // 0x4a53d4: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
label_4a53d8:
    if (ctx->pc == 0x4A53D8u) {
        ctx->pc = 0x4A53D8u;
            // 0x4a53d8: 0x3c023e86  lui         $v0, 0x3E86 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16006 << 16));
        ctx->pc = 0x4A53DCu;
        goto label_4a53dc;
    }
    ctx->pc = 0x4A53D4u;
    {
        const bool branch_taken_0x4a53d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4a53d4) {
            ctx->pc = 0x4A53D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A53D4u;
            // 0x4a53d8: 0x3c023e86  lui         $v0, 0x3E86 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16006 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A53F4u;
            goto label_4a53f4;
        }
    }
    ctx->pc = 0x4A53DCu;
label_4a53dc:
    // 0x4a53dc: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x4a53dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_4a53e0:
    // 0x4a53e0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x4a53e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_4a53e4:
    // 0x4a53e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a53e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a53e8:
    // 0x4a53e8: 0x0  nop
    ctx->pc = 0x4a53e8u;
    // NOP
label_4a53ec:
    // 0x4a53ec: 0x46140501  sub.s       $f20, $f0, $f20
    ctx->pc = 0x4a53ecu;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_4a53f0:
    // 0x4a53f0: 0x3c023e86  lui         $v0, 0x3E86
    ctx->pc = 0x4a53f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16006 << 16));
label_4a53f4:
    // 0x4a53f4: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x4a53f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
label_4a53f8:
    // 0x4a53f8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x4a53f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4a53fc:
    // 0x4a53fc: 0x0  nop
    ctx->pc = 0x4a53fcu;
    // NOP
label_4a5400:
    // 0x4a5400: 0x4602a036  c.le.s      $f20, $f2
    ctx->pc = 0x4a5400u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4a5404:
    // 0x4a5404: 0x45030011  bc1tl       . + 4 + (0x11 << 2)
label_4a5408:
    if (ctx->pc == 0x4A5408u) {
        ctx->pc = 0x4A5408u;
            // 0x4a5408: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A540Cu;
        goto label_4a540c;
    }
    ctx->pc = 0x4A5404u;
    {
        const bool branch_taken_0x4a5404 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4a5404) {
            ctx->pc = 0x4A5408u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5404u;
            // 0x4a5408: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A544Cu;
            goto label_4a544c;
        }
    }
    ctx->pc = 0x4A540Cu;
label_4a540c:
    // 0x4a540c: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x4a540cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
label_4a5410:
    // 0x4a5410: 0x3442af31  ori         $v0, $v0, 0xAF31
    ctx->pc = 0x4a5410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44849);
label_4a5414:
    // 0x4a5414: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4a5414u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4a5418:
    // 0x4a5418: 0x0  nop
    ctx->pc = 0x4a5418u;
    // NOP
label_4a541c:
    // 0x4a541c: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x4a541cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4a5420:
    // 0x4a5420: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_4a5424:
    if (ctx->pc == 0x4A5424u) {
        ctx->pc = 0x4A5428u;
        goto label_4a5428;
    }
    ctx->pc = 0x4A5420u;
    {
        const bool branch_taken_0x4a5420 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4a5420) {
            ctx->pc = 0x4A5448u;
            goto label_4a5448;
        }
    }
    ctx->pc = 0x4A5428u;
label_4a5428:
    // 0x4a5428: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x4a5428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_4a542c:
    // 0x4a542c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x4a542cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_4a5430:
    // 0x4a5430: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a5430u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a5434:
    // 0x4a5434: 0x0  nop
    ctx->pc = 0x4a5434u;
    // NOP
label_4a5438:
    // 0x4a5438: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x4a5438u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4a543c:
    // 0x4a543c: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
label_4a5440:
    if (ctx->pc == 0x4A5440u) {
        ctx->pc = 0x4A5440u;
            // 0x4a5440: 0x46000d06  mov.s       $f20, $f1 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[1]);
        ctx->pc = 0x4A5444u;
        goto label_4a5444;
    }
    ctx->pc = 0x4A543Cu;
    {
        const bool branch_taken_0x4a543c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4a543c) {
            ctx->pc = 0x4A5440u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A543Cu;
            // 0x4a5440: 0x46000d06  mov.s       $f20, $f1 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A5448u;
            goto label_4a5448;
        }
    }
    ctx->pc = 0x4A5444u;
label_4a5444:
    // 0x4a5444: 0x46001506  mov.s       $f20, $f2
    ctx->pc = 0x4a5444u;
    ctx->f[20] = FPU_MOV_S(ctx->f[2]);
label_4a5448:
    // 0x4a5448: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a5448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a544c:
    // 0x4a544c: 0xc0daef0  jal         func_36BBC0
label_4a5450:
    if (ctx->pc == 0x4A5450u) {
        ctx->pc = 0x4A5454u;
        goto label_4a5454;
    }
    ctx->pc = 0x4A544Cu;
    SET_GPR_U32(ctx, 31, 0x4A5454u);
    ctx->pc = 0x36BBC0u;
    if (runtime->hasFunction(0x36BBC0u)) {
        auto targetFn = runtime->lookupFunction(0x36BBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5454u; }
        if (ctx->pc != 0x4A5454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036BBC0_0x36bbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5454u; }
        if (ctx->pc != 0x4A5454u) { return; }
    }
    ctx->pc = 0x4A5454u;
label_4a5454:
    // 0x4a5454: 0x4600a300  add.s       $f12, $f20, $f0
    ctx->pc = 0x4a5454u;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_4a5458:
    // 0x4a5458: 0xc0cef78  jal         func_33BDE0
label_4a545c:
    if (ctx->pc == 0x4A545Cu) {
        ctx->pc = 0x4A545Cu;
            // 0x4a545c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A5460u;
        goto label_4a5460;
    }
    ctx->pc = 0x4A5458u;
    SET_GPR_U32(ctx, 31, 0x4A5460u);
    ctx->pc = 0x4A545Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5458u;
            // 0x4a545c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BDE0u;
    if (runtime->hasFunction(0x33BDE0u)) {
        auto targetFn = runtime->lookupFunction(0x33BDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5460u; }
        if (ctx->pc != 0x4A5460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BDE0_0x33bde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5460u; }
        if (ctx->pc != 0x4A5460u) { return; }
    }
    ctx->pc = 0x4A5460u;
label_4a5460:
    // 0x4a5460: 0xc0daef0  jal         func_36BBC0
label_4a5464:
    if (ctx->pc == 0x4A5464u) {
        ctx->pc = 0x4A5464u;
            // 0x4a5464: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A5468u;
        goto label_4a5468;
    }
    ctx->pc = 0x4A5460u;
    SET_GPR_U32(ctx, 31, 0x4A5468u);
    ctx->pc = 0x4A5464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5460u;
            // 0x4a5464: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36BBC0u;
    if (runtime->hasFunction(0x36BBC0u)) {
        auto targetFn = runtime->lookupFunction(0x36BBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5468u; }
        if (ctx->pc != 0x4A5468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036BBC0_0x36bbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5468u; }
        if (ctx->pc != 0x4A5468u) { return; }
    }
    ctx->pc = 0x4A5468u;
label_4a5468:
    // 0x4a5468: 0x4600a300  add.s       $f12, $f20, $f0
    ctx->pc = 0x4a5468u;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_4a546c:
    // 0x4a546c: 0xc0cef80  jal         func_33BE00
label_4a5470:
    if (ctx->pc == 0x4A5470u) {
        ctx->pc = 0x4A5470u;
            // 0x4a5470: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A5474u;
        goto label_4a5474;
    }
    ctx->pc = 0x4A546Cu;
    SET_GPR_U32(ctx, 31, 0x4A5474u);
    ctx->pc = 0x4A5470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A546Cu;
            // 0x4a5470: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BE00u;
    if (runtime->hasFunction(0x33BE00u)) {
        auto targetFn = runtime->lookupFunction(0x33BE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5474u; }
        if (ctx->pc != 0x4A5474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BE00_0x33be00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5474u; }
        if (ctx->pc != 0x4A5474u) { return; }
    }
    ctx->pc = 0x4A5474u;
label_4a5474:
    // 0x4a5474: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4a5474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4a5478:
    // 0x4a5478: 0xc0c05cc  jal         func_301730
label_4a547c:
    if (ctx->pc == 0x4A547Cu) {
        ctx->pc = 0x4A547Cu;
            // 0x4a547c: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->pc = 0x4A5480u;
        goto label_4a5480;
    }
    ctx->pc = 0x4A5478u;
    SET_GPR_U32(ctx, 31, 0x4A5480u);
    ctx->pc = 0x4A547Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5478u;
            // 0x4a547c: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301730u;
    if (runtime->hasFunction(0x301730u)) {
        auto targetFn = runtime->lookupFunction(0x301730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5480u; }
        if (ctx->pc != 0x4A5480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301730_0x301730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5480u; }
        if (ctx->pc != 0x4A5480u) { return; }
    }
    ctx->pc = 0x4A5480u;
label_4a5480:
    // 0x4a5480: 0xc0c05c8  jal         func_301720
label_4a5484:
    if (ctx->pc == 0x4A5484u) {
        ctx->pc = 0x4A5484u;
            // 0x4a5484: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A5488u;
        goto label_4a5488;
    }
    ctx->pc = 0x4A5480u;
    SET_GPR_U32(ctx, 31, 0x4A5488u);
    ctx->pc = 0x4A5484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5480u;
            // 0x4a5484: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301720u;
    if (runtime->hasFunction(0x301720u)) {
        auto targetFn = runtime->lookupFunction(0x301720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5488u; }
        if (ctx->pc != 0x4A5488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301720_0x301720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5488u; }
        if (ctx->pc != 0x4A5488u) { return; }
    }
    ctx->pc = 0x4A5488u;
label_4a5488:
    // 0x4a5488: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4a5488u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_4a548c:
    // 0x4a548c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4a548cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a5490:
    // 0x4a5490: 0xc04cc04  jal         func_133010
label_4a5494:
    if (ctx->pc == 0x4A5494u) {
        ctx->pc = 0x4A5494u;
            // 0x4a5494: 0x24a51480  addiu       $a1, $a1, 0x1480 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5248));
        ctx->pc = 0x4A5498u;
        goto label_4a5498;
    }
    ctx->pc = 0x4A5490u;
    SET_GPR_U32(ctx, 31, 0x4A5498u);
    ctx->pc = 0x4A5494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5490u;
            // 0x4a5494: 0x24a51480  addiu       $a1, $a1, 0x1480 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5498u; }
        if (ctx->pc != 0x4A5498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5498u; }
        if (ctx->pc != 0x4A5498u) { return; }
    }
    ctx->pc = 0x4A5498u;
label_4a5498:
    // 0x4a5498: 0xc0775d8  jal         func_1DD760
label_4a549c:
    if (ctx->pc == 0x4A549Cu) {
        ctx->pc = 0x4A549Cu;
            // 0x4a549c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A54A0u;
        goto label_4a54a0;
    }
    ctx->pc = 0x4A5498u;
    SET_GPR_U32(ctx, 31, 0x4A54A0u);
    ctx->pc = 0x4A549Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5498u;
            // 0x4a549c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD760u;
    if (runtime->hasFunction(0x1DD760u)) {
        auto targetFn = runtime->lookupFunction(0x1DD760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A54A0u; }
        if (ctx->pc != 0x4A54A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD760_0x1dd760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A54A0u; }
        if (ctx->pc != 0x4A54A0u) { return; }
    }
    ctx->pc = 0x4A54A0u;
label_4a54a0:
    // 0x4a54a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4a54a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a54a4:
    // 0x4a54a4: 0x3c0274ff  lui         $v0, 0x74FF
    ctx->pc = 0x4a54a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29951 << 16));
label_4a54a8:
    // 0x4a54a8: 0xc0cef60  jal         func_33BD80
label_4a54ac:
    if (ctx->pc == 0x4A54ACu) {
        ctx->pc = 0x4A54ACu;
            // 0x4a54ac: 0x34450004  ori         $a1, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->pc = 0x4A54B0u;
        goto label_4a54b0;
    }
    ctx->pc = 0x4A54A8u;
    SET_GPR_U32(ctx, 31, 0x4A54B0u);
    ctx->pc = 0x4A54ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A54A8u;
            // 0x4a54ac: 0x34450004  ori         $a1, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BD80u;
    if (runtime->hasFunction(0x33BD80u)) {
        auto targetFn = runtime->lookupFunction(0x33BD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A54B0u; }
        if (ctx->pc != 0x4A54B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BD80_0x33bd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A54B0u; }
        if (ctx->pc != 0x4A54B0u) { return; }
    }
    ctx->pc = 0x4A54B0u;
label_4a54b0:
    // 0x4a54b0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4a54b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4a54b4:
    // 0x4a54b4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4a54b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4a54b8:
    // 0x4a54b8: 0xc1296c8  jal         func_4A5B20
label_4a54bc:
    if (ctx->pc == 0x4A54BCu) {
        ctx->pc = 0x4A54BCu;
            // 0x4a54bc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A54C0u;
        goto label_4a54c0;
    }
    ctx->pc = 0x4A54B8u;
    SET_GPR_U32(ctx, 31, 0x4A54C0u);
    ctx->pc = 0x4A54BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A54B8u;
            // 0x4a54bc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A5B20u;
    if (runtime->hasFunction(0x4A5B20u)) {
        auto targetFn = runtime->lookupFunction(0x4A5B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A54C0u; }
        if (ctx->pc != 0x4A54C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A5B20_0x4a5b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A54C0u; }
        if (ctx->pc != 0x4A54C0u) { return; }
    }
    ctx->pc = 0x4A54C0u;
label_4a54c0:
    // 0x4a54c0: 0xc6ec0008  lwc1        $f12, 0x8($s7)
    ctx->pc = 0x4a54c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4a54c4:
    // 0x4a54c4: 0xc0f0d64  jal         func_3C3590
label_4a54c8:
    if (ctx->pc == 0x4A54C8u) {
        ctx->pc = 0x4A54C8u;
            // 0x4a54c8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A54CCu;
        goto label_4a54cc;
    }
    ctx->pc = 0x4A54C4u;
    SET_GPR_U32(ctx, 31, 0x4A54CCu);
    ctx->pc = 0x4A54C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A54C4u;
            // 0x4a54c8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3590u;
    if (runtime->hasFunction(0x3C3590u)) {
        auto targetFn = runtime->lookupFunction(0x3C3590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A54CCu; }
        if (ctx->pc != 0x4A54CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3590_0x3c3590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A54CCu; }
        if (ctx->pc != 0x4A54CCu) { return; }
    }
    ctx->pc = 0x4A54CCu;
label_4a54cc:
    // 0x4a54cc: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x4a54ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_4a54d0:
    // 0x4a54d0: 0xc44cc6b8  lwc1        $f12, -0x3948($v0)
    ctx->pc = 0x4a54d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4a54d4:
    // 0x4a54d4: 0xc1296c4  jal         func_4A5B10
label_4a54d8:
    if (ctx->pc == 0x4A54D8u) {
        ctx->pc = 0x4A54D8u;
            // 0x4a54d8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A54DCu;
        goto label_4a54dc;
    }
    ctx->pc = 0x4A54D4u;
    SET_GPR_U32(ctx, 31, 0x4A54DCu);
    ctx->pc = 0x4A54D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A54D4u;
            // 0x4a54d8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A5B10u;
    if (runtime->hasFunction(0x4A5B10u)) {
        auto targetFn = runtime->lookupFunction(0x4A5B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A54DCu; }
        if (ctx->pc != 0x4A54DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A5B10_0x4a5b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A54DCu; }
        if (ctx->pc != 0x4A54DCu) { return; }
    }
    ctx->pc = 0x4A54DCu;
label_4a54dc:
    // 0x4a54dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4a54dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a54e0:
    // 0x4a54e0: 0xc0e1218  jal         func_384860
label_4a54e4:
    if (ctx->pc == 0x4A54E4u) {
        ctx->pc = 0x4A54E4u;
            // 0x4a54e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A54E8u;
        goto label_4a54e8;
    }
    ctx->pc = 0x4A54E0u;
    SET_GPR_U32(ctx, 31, 0x4A54E8u);
    ctx->pc = 0x4A54E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A54E0u;
            // 0x4a54e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384860u;
    if (runtime->hasFunction(0x384860u)) {
        auto targetFn = runtime->lookupFunction(0x384860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A54E8u; }
        if (ctx->pc != 0x4A54E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384860_0x384860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A54E8u; }
        if (ctx->pc != 0x4A54E8u) { return; }
    }
    ctx->pc = 0x4A54E8u;
label_4a54e8:
    // 0x4a54e8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4a54e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4a54ec:
    // 0x4a54ec: 0xc077fb0  jal         func_1DFEC0
label_4a54f0:
    if (ctx->pc == 0x4A54F0u) {
        ctx->pc = 0x4A54F0u;
            // 0x4a54f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4A54F4u;
        goto label_4a54f4;
    }
    ctx->pc = 0x4A54ECu;
    SET_GPR_U32(ctx, 31, 0x4A54F4u);
    ctx->pc = 0x4A54F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A54ECu;
            // 0x4a54f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFEC0u;
    if (runtime->hasFunction(0x1DFEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DFEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A54F4u; }
        if (ctx->pc != 0x4A54F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFEC0_0x1dfec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A54F4u; }
        if (ctx->pc != 0x4A54F4u) { return; }
    }
    ctx->pc = 0x4A54F4u;
label_4a54f4:
    // 0x4a54f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4a54f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a54f8:
    // 0x4a54f8: 0xc0f08f4  jal         func_3C23D0
label_4a54fc:
    if (ctx->pc == 0x4A54FCu) {
        ctx->pc = 0x4A54FCu;
            // 0x4a54fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4A5500u;
        goto label_4a5500;
    }
    ctx->pc = 0x4A54F8u;
    SET_GPR_U32(ctx, 31, 0x4A5500u);
    ctx->pc = 0x4A54FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A54F8u;
            // 0x4a54fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C23D0u;
    if (runtime->hasFunction(0x3C23D0u)) {
        auto targetFn = runtime->lookupFunction(0x3C23D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5500u; }
        if (ctx->pc != 0x4A5500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C23D0_0x3c23d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5500u; }
        if (ctx->pc != 0x4A5500u) { return; }
    }
    ctx->pc = 0x4A5500u;
label_4a5500:
    // 0x4a5500: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4a5500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4a5504:
    // 0x4a5504: 0xc0efdd8  jal         func_3BF760
label_4a5508:
    if (ctx->pc == 0x4A5508u) {
        ctx->pc = 0x4A5508u;
            // 0x4a5508: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4A550Cu;
        goto label_4a550c;
    }
    ctx->pc = 0x4A5504u;
    SET_GPR_U32(ctx, 31, 0x4A550Cu);
    ctx->pc = 0x4A5508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5504u;
            // 0x4a5508: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF760u;
    if (runtime->hasFunction(0x3BF760u)) {
        auto targetFn = runtime->lookupFunction(0x3BF760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A550Cu; }
        if (ctx->pc != 0x4A550Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF760_0x3bf760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A550Cu; }
        if (ctx->pc != 0x4A550Cu) { return; }
    }
    ctx->pc = 0x4A550Cu;
label_4a550c:
    // 0x4a550c: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x4a550cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_4a5510:
    // 0x4a5510: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4a5510u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4a5514:
    // 0x4a5514: 0xc0781cc  jal         func_1E0730
label_4a5518:
    if (ctx->pc == 0x4A5518u) {
        ctx->pc = 0x4A5518u;
            // 0x4a5518: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A551Cu;
        goto label_4a551c;
    }
    ctx->pc = 0x4A5514u;
    SET_GPR_U32(ctx, 31, 0x4A551Cu);
    ctx->pc = 0x4A5518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5514u;
            // 0x4a5518: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0730u;
    if (runtime->hasFunction(0x1E0730u)) {
        auto targetFn = runtime->lookupFunction(0x1E0730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A551Cu; }
        if (ctx->pc != 0x4A551Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0730_0x1e0730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A551Cu; }
        if (ctx->pc != 0x4A551Cu) { return; }
    }
    ctx->pc = 0x4A551Cu;
label_4a551c:
    // 0x4a551c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4a551cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4a5520:
    // 0x4a5520: 0xc0770dc  jal         func_1DC370
label_4a5524:
    if (ctx->pc == 0x4A5524u) {
        ctx->pc = 0x4A5524u;
            // 0x4a5524: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->pc = 0x4A5528u;
        goto label_4a5528;
    }
    ctx->pc = 0x4A5520u;
    SET_GPR_U32(ctx, 31, 0x4A5528u);
    ctx->pc = 0x4A5524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5520u;
            // 0x4a5524: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC370u;
    if (runtime->hasFunction(0x1DC370u)) {
        auto targetFn = runtime->lookupFunction(0x1DC370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5528u; }
        if (ctx->pc != 0x4A5528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC370_0x1dc370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5528u; }
        if (ctx->pc != 0x4A5528u) { return; }
    }
    ctx->pc = 0x4A5528u;
label_4a5528:
    // 0x4a5528: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4a5528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4a552c:
    // 0x4a552c: 0xc07649c  jal         func_1D9270
label_4a5530:
    if (ctx->pc == 0x4A5530u) {
        ctx->pc = 0x4A5530u;
            // 0x4a5530: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4A5534u;
        goto label_4a5534;
    }
    ctx->pc = 0x4A552Cu;
    SET_GPR_U32(ctx, 31, 0x4A5534u);
    ctx->pc = 0x4A5530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A552Cu;
            // 0x4a5530: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9270u;
    if (runtime->hasFunction(0x1D9270u)) {
        auto targetFn = runtime->lookupFunction(0x1D9270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5534u; }
        if (ctx->pc != 0x4A5534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9270_0x1d9270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5534u; }
        if (ctx->pc != 0x4A5534u) { return; }
    }
    ctx->pc = 0x4A5534u;
label_4a5534:
    // 0x4a5534: 0xc0775d8  jal         func_1DD760
label_4a5538:
    if (ctx->pc == 0x4A5538u) {
        ctx->pc = 0x4A5538u;
            // 0x4a5538: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A553Cu;
        goto label_4a553c;
    }
    ctx->pc = 0x4A5534u;
    SET_GPR_U32(ctx, 31, 0x4A553Cu);
    ctx->pc = 0x4A5538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5534u;
            // 0x4a5538: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD760u;
    if (runtime->hasFunction(0x1DD760u)) {
        auto targetFn = runtime->lookupFunction(0x1DD760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A553Cu; }
        if (ctx->pc != 0x4A553Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD760_0x1dd760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A553Cu; }
        if (ctx->pc != 0x4A553Cu) { return; }
    }
    ctx->pc = 0x4A553Cu;
label_4a553c:
    // 0x4a553c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4a553cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a5540:
    // 0x4a5540: 0xc0775bc  jal         func_1DD6F0
label_4a5544:
    if (ctx->pc == 0x4A5544u) {
        ctx->pc = 0x4A5544u;
            // 0x4a5544: 0x3c050020  lui         $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
        ctx->pc = 0x4A5548u;
        goto label_4a5548;
    }
    ctx->pc = 0x4A5540u;
    SET_GPR_U32(ctx, 31, 0x4A5548u);
    ctx->pc = 0x4A5544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5540u;
            // 0x4a5544: 0x3c050020  lui         $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6F0u;
    if (runtime->hasFunction(0x1DD6F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5548u; }
        if (ctx->pc != 0x4A5548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6F0_0x1dd6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5548u; }
        if (ctx->pc != 0x4A5548u) { return; }
    }
    ctx->pc = 0x4A5548u;
label_4a5548:
    // 0x4a5548: 0xc1296c0  jal         func_4A5B00
label_4a554c:
    if (ctx->pc == 0x4A554Cu) {
        ctx->pc = 0x4A5550u;
        goto label_4a5550;
    }
    ctx->pc = 0x4A5548u;
    SET_GPR_U32(ctx, 31, 0x4A5550u);
    ctx->pc = 0x4A5B00u;
    if (runtime->hasFunction(0x4A5B00u)) {
        auto targetFn = runtime->lookupFunction(0x4A5B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5550u; }
        if (ctx->pc != 0x4A5550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A5B00_0x4a5b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5550u; }
        if (ctx->pc != 0x4A5550u) { return; }
    }
    ctx->pc = 0x4A5550u;
label_4a5550:
    // 0x4a5550: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_4a5554:
    if (ctx->pc == 0x4A5554u) {
        ctx->pc = 0x4A5554u;
            // 0x4a5554: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A5558u;
        goto label_4a5558;
    }
    ctx->pc = 0x4A5550u;
    {
        const bool branch_taken_0x4a5550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a5550) {
            ctx->pc = 0x4A5554u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5550u;
            // 0x4a5554: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A5570u;
            goto label_4a5570;
        }
    }
    ctx->pc = 0x4A5558u;
label_4a5558:
    // 0x4a5558: 0xc1296c0  jal         func_4A5B00
label_4a555c:
    if (ctx->pc == 0x4A555Cu) {
        ctx->pc = 0x4A5560u;
        goto label_4a5560;
    }
    ctx->pc = 0x4A5558u;
    SET_GPR_U32(ctx, 31, 0x4A5560u);
    ctx->pc = 0x4A5B00u;
    if (runtime->hasFunction(0x4A5B00u)) {
        auto targetFn = runtime->lookupFunction(0x4A5B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5560u; }
        if (ctx->pc != 0x4A5560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A5B00_0x4a5b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5560u; }
        if (ctx->pc != 0x4A5560u) { return; }
    }
    ctx->pc = 0x4A5560u;
label_4a5560:
    // 0x4a5560: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4a5560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a5564:
    // 0x4a5564: 0xc0d68b4  jal         func_35A2D0
label_4a5568:
    if (ctx->pc == 0x4A5568u) {
        ctx->pc = 0x4A5568u;
            // 0x4a5568: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A556Cu;
        goto label_4a556c;
    }
    ctx->pc = 0x4A5564u;
    SET_GPR_U32(ctx, 31, 0x4A556Cu);
    ctx->pc = 0x4A5568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5564u;
            // 0x4a5568: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x35A2D0u;
    if (runtime->hasFunction(0x35A2D0u)) {
        auto targetFn = runtime->lookupFunction(0x35A2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A556Cu; }
        if (ctx->pc != 0x4A556Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0035A2D0_0x35a2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A556Cu; }
        if (ctx->pc != 0x4A556Cu) { return; }
    }
    ctx->pc = 0x4A556Cu;
label_4a556c:
    // 0x4a556c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a556cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a5570:
    // 0x4a5570: 0xc077290  jal         func_1DCA40
label_4a5574:
    if (ctx->pc == 0x4A5574u) {
        ctx->pc = 0x4A5578u;
        goto label_4a5578;
    }
    ctx->pc = 0x4A5570u;
    SET_GPR_U32(ctx, 31, 0x4A5578u);
    ctx->pc = 0x1DCA40u;
    if (runtime->hasFunction(0x1DCA40u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5578u; }
        if (ctx->pc != 0x4A5578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCA40_0x1dca40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5578u; }
        if (ctx->pc != 0x4A5578u) { return; }
    }
    ctx->pc = 0x4A5578u;
label_4a5578:
    // 0x4a5578: 0xc077224  jal         func_1DC890
label_4a557c:
    if (ctx->pc == 0x4A557Cu) {
        ctx->pc = 0x4A557Cu;
            // 0x4a557c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A5580u;
        goto label_4a5580;
    }
    ctx->pc = 0x4A5578u;
    SET_GPR_U32(ctx, 31, 0x4A5580u);
    ctx->pc = 0x4A557Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5578u;
            // 0x4a557c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC890u;
    if (runtime->hasFunction(0x1DC890u)) {
        auto targetFn = runtime->lookupFunction(0x1DC890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5580u; }
        if (ctx->pc != 0x4A5580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC890_0x1dc890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5580u; }
        if (ctx->pc != 0x4A5580u) { return; }
    }
    ctx->pc = 0x4A5580u;
label_4a5580:
    // 0x4a5580: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x4a5580u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4a5584:
    // 0x4a5584: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x4a5584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_4a5588:
    // 0x4a5588: 0x508300f0  beql        $a0, $v1, . + 4 + (0xF0 << 2)
label_4a558c:
    if (ctx->pc == 0x4A558Cu) {
        ctx->pc = 0x4A558Cu;
            // 0x4a558c: 0x8ea30e34  lw          $v1, 0xE34($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3636)));
        ctx->pc = 0x4A5590u;
        goto label_4a5590;
    }
    ctx->pc = 0x4A5588u;
    {
        const bool branch_taken_0x4a5588 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4a5588) {
            ctx->pc = 0x4A558Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5588u;
            // 0x4a558c: 0x8ea30e34  lw          $v1, 0xE34($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3636)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A594Cu;
            goto label_4a594c;
        }
    }
    ctx->pc = 0x4A5590u;
label_4a5590:
    // 0x4a5590: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4a5590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a5594:
    // 0x4a5594: 0x50830008  beql        $a0, $v1, . + 4 + (0x8 << 2)
label_4a5598:
    if (ctx->pc == 0x4A5598u) {
        ctx->pc = 0x4A5598u;
            // 0x4a5598: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A559Cu;
        goto label_4a559c;
    }
    ctx->pc = 0x4A5594u;
    {
        const bool branch_taken_0x4a5594 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4a5594) {
            ctx->pc = 0x4A5598u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5594u;
            // 0x4a5598: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A55B8u;
            goto label_4a55b8;
        }
    }
    ctx->pc = 0x4A559Cu;
label_4a559c:
    // 0x4a559c: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x4a559cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_4a55a0:
    // 0x4a55a0: 0x108300e9  beq         $a0, $v1, . + 4 + (0xE9 << 2)
label_4a55a4:
    if (ctx->pc == 0x4A55A4u) {
        ctx->pc = 0x4A55A8u;
        goto label_4a55a8;
    }
    ctx->pc = 0x4A55A0u;
    {
        const bool branch_taken_0x4a55a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4a55a0) {
            ctx->pc = 0x4A5948u;
            goto label_4a5948;
        }
    }
    ctx->pc = 0x4A55A8u;
label_4a55a8:
    // 0x4a55a8: 0x108000e7  beqz        $a0, . + 4 + (0xE7 << 2)
label_4a55ac:
    if (ctx->pc == 0x4A55ACu) {
        ctx->pc = 0x4A55B0u;
        goto label_4a55b0;
    }
    ctx->pc = 0x4A55A8u;
    {
        const bool branch_taken_0x4a55a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a55a8) {
            ctx->pc = 0x4A5948u;
            goto label_4a5948;
        }
    }
    ctx->pc = 0x4A55B0u;
label_4a55b0:
    // 0x4a55b0: 0x100000e5  b           . + 4 + (0xE5 << 2)
label_4a55b4:
    if (ctx->pc == 0x4A55B4u) {
        ctx->pc = 0x4A55B8u;
        goto label_4a55b8;
    }
    ctx->pc = 0x4A55B0u;
    {
        const bool branch_taken_0x4a55b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a55b0) {
            ctx->pc = 0x4A5948u;
            goto label_4a5948;
        }
    }
    ctx->pc = 0x4A55B8u;
label_4a55b8:
    // 0x4a55b8: 0xc077330  jal         func_1DCCC0
label_4a55bc:
    if (ctx->pc == 0x4A55BCu) {
        ctx->pc = 0x4A55C0u;
        goto label_4a55c0;
    }
    ctx->pc = 0x4A55B8u;
    SET_GPR_U32(ctx, 31, 0x4A55C0u);
    ctx->pc = 0x1DCCC0u;
    if (runtime->hasFunction(0x1DCCC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A55C0u; }
        if (ctx->pc != 0x4A55C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCCC0_0x1dccc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A55C0u; }
        if (ctx->pc != 0x4A55C0u) { return; }
    }
    ctx->pc = 0x4A55C0u;
label_4a55c0:
    // 0x4a55c0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_4a55c4:
    if (ctx->pc == 0x4A55C4u) {
        ctx->pc = 0x4A55C4u;
            // 0x4a55c4: 0x240400f0  addiu       $a0, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->pc = 0x4A55C8u;
        goto label_4a55c8;
    }
    ctx->pc = 0x4A55C0u;
    {
        const bool branch_taken_0x4a55c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a55c0) {
            ctx->pc = 0x4A55C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A55C0u;
            // 0x4a55c4: 0x240400f0  addiu       $a0, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A55DCu;
            goto label_4a55dc;
        }
    }
    ctx->pc = 0x4A55C8u;
label_4a55c8:
    // 0x4a55c8: 0xc07732c  jal         func_1DCCB0
label_4a55cc:
    if (ctx->pc == 0x4A55CCu) {
        ctx->pc = 0x4A55CCu;
            // 0x4a55cc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A55D0u;
        goto label_4a55d0;
    }
    ctx->pc = 0x4A55C8u;
    SET_GPR_U32(ctx, 31, 0x4A55D0u);
    ctx->pc = 0x4A55CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A55C8u;
            // 0x4a55cc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCCB0u;
    if (runtime->hasFunction(0x1DCCB0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A55D0u; }
        if (ctx->pc != 0x4A55D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCCB0_0x1dccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A55D0u; }
        if (ctx->pc != 0x4A55D0u) { return; }
    }
    ctx->pc = 0x4A55D0u;
label_4a55d0:
    // 0x4a55d0: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
label_4a55d4:
    if (ctx->pc == 0x4A55D4u) {
        ctx->pc = 0x4A55D4u;
            // 0x4a55d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A55D8u;
        goto label_4a55d8;
    }
    ctx->pc = 0x4A55D0u;
    {
        const bool branch_taken_0x4a55d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a55d0) {
            ctx->pc = 0x4A55D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A55D0u;
            // 0x4a55d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A5638u;
            goto label_4a5638;
        }
    }
    ctx->pc = 0x4A55D8u;
label_4a55d8:
    // 0x4a55d8: 0x240400f0  addiu       $a0, $zero, 0xF0
    ctx->pc = 0x4a55d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_4a55dc:
    // 0x4a55dc: 0xc040180  jal         func_100600
label_4a55e0:
    if (ctx->pc == 0x4A55E0u) {
        ctx->pc = 0x4A55E4u;
        goto label_4a55e4;
    }
    ctx->pc = 0x4A55DCu;
    SET_GPR_U32(ctx, 31, 0x4A55E4u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A55E4u; }
        if (ctx->pc != 0x4A55E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A55E4u; }
        if (ctx->pc != 0x4A55E4u) { return; }
    }
    ctx->pc = 0x4A55E4u;
label_4a55e4:
    // 0x4a55e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4a55e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a55e8:
    // 0x4a55e8: 0x12400012  beqz        $s2, . + 4 + (0x12 << 2)
label_4a55ec:
    if (ctx->pc == 0x4A55ECu) {
        ctx->pc = 0x4A55F0u;
        goto label_4a55f0;
    }
    ctx->pc = 0x4A55E8u;
    {
        const bool branch_taken_0x4a55e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a55e8) {
            ctx->pc = 0x4A5634u;
            goto label_4a5634;
        }
    }
    ctx->pc = 0x4A55F0u;
label_4a55f0:
    // 0x4a55f0: 0xc077320  jal         func_1DCC80
label_4a55f4:
    if (ctx->pc == 0x4A55F4u) {
        ctx->pc = 0x4A55F4u;
            // 0x4a55f4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A55F8u;
        goto label_4a55f8;
    }
    ctx->pc = 0x4A55F0u;
    SET_GPR_U32(ctx, 31, 0x4A55F8u);
    ctx->pc = 0x4A55F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A55F0u;
            // 0x4a55f4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC80u;
    if (runtime->hasFunction(0x1DCC80u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A55F8u; }
        if (ctx->pc != 0x4A55F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC80_0x1dcc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A55F8u; }
        if (ctx->pc != 0x4A55F8u) { return; }
    }
    ctx->pc = 0x4A55F8u;
label_4a55f8:
    // 0x4a55f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4a55f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a55fc:
    // 0x4a55fc: 0xc077320  jal         func_1DCC80
label_4a5600:
    if (ctx->pc == 0x4A5600u) {
        ctx->pc = 0x4A5600u;
            // 0x4a5600: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A5604u;
        goto label_4a5604;
    }
    ctx->pc = 0x4A55FCu;
    SET_GPR_U32(ctx, 31, 0x4A5604u);
    ctx->pc = 0x4A5600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A55FCu;
            // 0x4a5600: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC80u;
    if (runtime->hasFunction(0x1DCC80u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5604u; }
        if (ctx->pc != 0x4A5604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC80_0x1dcc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5604u; }
        if (ctx->pc != 0x4A5604u) { return; }
    }
    ctx->pc = 0x4A5604u;
label_4a5604:
    // 0x4a5604: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x4a5604u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a5608:
    // 0x4a5608: 0x3c0700af  lui         $a3, 0xAF
    ctx->pc = 0x4a5608u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)175 << 16));
label_4a560c:
    // 0x4a560c: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x4a560cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_4a5610:
    // 0x4a5610: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4a5610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a5614:
    // 0x4a5614: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4a5614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4a5618:
    // 0x4a5618: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x4a5618u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a561c:
    // 0x4a561c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x4a561cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_4a5620:
    // 0x4a5620: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x4a5620u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4a5624:
    // 0x4a5624: 0x34459444  ori         $a1, $v0, 0x9444
    ctx->pc = 0x4a5624u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37956);
label_4a5628:
    // 0x4a5628: 0x24e7f5b8  addiu       $a3, $a3, -0xA48
    ctx->pc = 0x4a5628u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964664));
label_4a562c:
    // 0x4a562c: 0xc129698  jal         func_4A5A60
label_4a5630:
    if (ctx->pc == 0x4A5630u) {
        ctx->pc = 0x4A5630u;
            // 0x4a5630: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A5634u;
        goto label_4a5634;
    }
    ctx->pc = 0x4A562Cu;
    SET_GPR_U32(ctx, 31, 0x4A5634u);
    ctx->pc = 0x4A5630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A562Cu;
            // 0x4a5630: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A5A60u;
    if (runtime->hasFunction(0x4A5A60u)) {
        auto targetFn = runtime->lookupFunction(0x4A5A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5634u; }
        if (ctx->pc != 0x4A5634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A5A60_0x4a5a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5634u; }
        if (ctx->pc != 0x4A5634u) { return; }
    }
    ctx->pc = 0x4A5634u;
label_4a5634:
    // 0x4a5634: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a5634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a5638:
    // 0x4a5638: 0xc077330  jal         func_1DCCC0
label_4a563c:
    if (ctx->pc == 0x4A563Cu) {
        ctx->pc = 0x4A5640u;
        goto label_4a5640;
    }
    ctx->pc = 0x4A5638u;
    SET_GPR_U32(ctx, 31, 0x4A5640u);
    ctx->pc = 0x1DCCC0u;
    if (runtime->hasFunction(0x1DCCC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5640u; }
        if (ctx->pc != 0x4A5640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCCC0_0x1dccc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5640u; }
        if (ctx->pc != 0x4A5640u) { return; }
    }
    ctx->pc = 0x4A5640u;
label_4a5640:
    // 0x4a5640: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_4a5644:
    if (ctx->pc == 0x4A5644u) {
        ctx->pc = 0x4A5644u;
            // 0x4a5644: 0x240400f0  addiu       $a0, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->pc = 0x4A5648u;
        goto label_4a5648;
    }
    ctx->pc = 0x4A5640u;
    {
        const bool branch_taken_0x4a5640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a5640) {
            ctx->pc = 0x4A5644u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5640u;
            // 0x4a5644: 0x240400f0  addiu       $a0, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A565Cu;
            goto label_4a565c;
        }
    }
    ctx->pc = 0x4A5648u;
label_4a5648:
    // 0x4a5648: 0xc07732c  jal         func_1DCCB0
label_4a564c:
    if (ctx->pc == 0x4A564Cu) {
        ctx->pc = 0x4A564Cu;
            // 0x4a564c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A5650u;
        goto label_4a5650;
    }
    ctx->pc = 0x4A5648u;
    SET_GPR_U32(ctx, 31, 0x4A5650u);
    ctx->pc = 0x4A564Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5648u;
            // 0x4a564c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCCB0u;
    if (runtime->hasFunction(0x1DCCB0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5650u; }
        if (ctx->pc != 0x4A5650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCCB0_0x1dccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5650u; }
        if (ctx->pc != 0x4A5650u) { return; }
    }
    ctx->pc = 0x4A5650u;
label_4a5650:
    // 0x4a5650: 0x104000bd  beqz        $v0, . + 4 + (0xBD << 2)
label_4a5654:
    if (ctx->pc == 0x4A5654u) {
        ctx->pc = 0x4A5658u;
        goto label_4a5658;
    }
    ctx->pc = 0x4A5650u;
    {
        const bool branch_taken_0x4a5650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a5650) {
            ctx->pc = 0x4A5948u;
            goto label_4a5948;
        }
    }
    ctx->pc = 0x4A5658u;
label_4a5658:
    // 0x4a5658: 0x240400f0  addiu       $a0, $zero, 0xF0
    ctx->pc = 0x4a5658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_4a565c:
    // 0x4a565c: 0xc040180  jal         func_100600
label_4a5660:
    if (ctx->pc == 0x4A5660u) {
        ctx->pc = 0x4A5664u;
        goto label_4a5664;
    }
    ctx->pc = 0x4A565Cu;
    SET_GPR_U32(ctx, 31, 0x4A5664u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5664u; }
        if (ctx->pc != 0x4A5664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5664u; }
        if (ctx->pc != 0x4A5664u) { return; }
    }
    ctx->pc = 0x4A5664u;
label_4a5664:
    // 0x4a5664: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4a5664u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a5668:
    // 0x4a5668: 0x122000b7  beqz        $s1, . + 4 + (0xB7 << 2)
label_4a566c:
    if (ctx->pc == 0x4A566Cu) {
        ctx->pc = 0x4A5670u;
        goto label_4a5670;
    }
    ctx->pc = 0x4A5668u;
    {
        const bool branch_taken_0x4a5668 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a5668) {
            ctx->pc = 0x4A5948u;
            goto label_4a5948;
        }
    }
    ctx->pc = 0x4A5670u;
label_4a5670:
    // 0x4a5670: 0xc077320  jal         func_1DCC80
label_4a5674:
    if (ctx->pc == 0x4A5674u) {
        ctx->pc = 0x4A5674u;
            // 0x4a5674: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A5678u;
        goto label_4a5678;
    }
    ctx->pc = 0x4A5670u;
    SET_GPR_U32(ctx, 31, 0x4A5678u);
    ctx->pc = 0x4A5674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5670u;
            // 0x4a5674: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC80u;
    if (runtime->hasFunction(0x1DCC80u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5678u; }
        if (ctx->pc != 0x4A5678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC80_0x1dcc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5678u; }
        if (ctx->pc != 0x4A5678u) { return; }
    }
    ctx->pc = 0x4A5678u;
label_4a5678:
    // 0x4a5678: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4a5678u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a567c:
    // 0x4a567c: 0xc077320  jal         func_1DCC80
label_4a5680:
    if (ctx->pc == 0x4A5680u) {
        ctx->pc = 0x4A5680u;
            // 0x4a5680: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A5684u;
        goto label_4a5684;
    }
    ctx->pc = 0x4A567Cu;
    SET_GPR_U32(ctx, 31, 0x4A5684u);
    ctx->pc = 0x4A5680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A567Cu;
            // 0x4a5680: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC80u;
    if (runtime->hasFunction(0x1DCC80u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5684u; }
        if (ctx->pc != 0x4A5684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC80_0x1dcc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5684u; }
        if (ctx->pc != 0x4A5684u) { return; }
    }
    ctx->pc = 0x4A5684u;
label_4a5684:
    // 0x4a5684: 0x3c054270  lui         $a1, 0x4270
    ctx->pc = 0x4a5684u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17008 << 16));
label_4a5688:
    // 0x4a5688: 0x3c0700af  lui         $a3, 0xAF
    ctx->pc = 0x4a5688u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)175 << 16));
label_4a568c:
    // 0x4a568c: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x4a568cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
label_4a5690:
    // 0x4a5690: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a5690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a5694:
    // 0x4a5694: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x4a5694u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4a5698:
    // 0x4a5698: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x4a5698u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a569c:
    // 0x4a569c: 0x34659444  ori         $a1, $v1, 0x9444
    ctx->pc = 0x4a569cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)37956);
label_4a56a0:
    // 0x4a56a0: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x4a56a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4a56a4:
    // 0x4a56a4: 0x24e7f5b8  addiu       $a3, $a3, -0xA48
    ctx->pc = 0x4a56a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964664));
label_4a56a8:
    // 0x4a56a8: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x4a56a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a56ac:
    // 0x4a56ac: 0xc129698  jal         func_4A5A60
label_4a56b0:
    if (ctx->pc == 0x4A56B0u) {
        ctx->pc = 0x4A56B0u;
            // 0x4a56b0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A56B4u;
        goto label_4a56b4;
    }
    ctx->pc = 0x4A56ACu;
    SET_GPR_U32(ctx, 31, 0x4A56B4u);
    ctx->pc = 0x4A56B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A56ACu;
            // 0x4a56b0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A5A60u;
    if (runtime->hasFunction(0x4A5A60u)) {
        auto targetFn = runtime->lookupFunction(0x4A5A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A56B4u; }
        if (ctx->pc != 0x4A56B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A5A60_0x4a5a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A56B4u; }
        if (ctx->pc != 0x4A56B4u) { return; }
    }
    ctx->pc = 0x4A56B4u;
label_4a56b4:
    // 0x4a56b4: 0x100000a4  b           . + 4 + (0xA4 << 2)
label_4a56b8:
    if (ctx->pc == 0x4A56B8u) {
        ctx->pc = 0x4A56BCu;
        goto label_4a56bc;
    }
    ctx->pc = 0x4A56B4u;
    {
        const bool branch_taken_0x4a56b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a56b4) {
            ctx->pc = 0x4A5948u;
            goto label_4a5948;
        }
    }
    ctx->pc = 0x4A56BCu;
label_4a56bc:
    // 0x4a56bc: 0xc0772e8  jal         func_1DCBA0
label_4a56c0:
    if (ctx->pc == 0x4A56C0u) {
        ctx->pc = 0x4A56C4u;
        goto label_4a56c4;
    }
    ctx->pc = 0x4A56BCu;
    SET_GPR_U32(ctx, 31, 0x4A56C4u);
    ctx->pc = 0x1DCBA0u;
    if (runtime->hasFunction(0x1DCBA0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A56C4u; }
        if (ctx->pc != 0x4A56C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCBA0_0x1dcba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A56C4u; }
        if (ctx->pc != 0x4A56C4u) { return; }
    }
    ctx->pc = 0x4A56C4u;
label_4a56c4:
    // 0x4a56c4: 0xc0775d8  jal         func_1DD760
label_4a56c8:
    if (ctx->pc == 0x4A56C8u) {
        ctx->pc = 0x4A56C8u;
            // 0x4a56c8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A56CCu;
        goto label_4a56cc;
    }
    ctx->pc = 0x4A56C4u;
    SET_GPR_U32(ctx, 31, 0x4A56CCu);
    ctx->pc = 0x4A56C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A56C4u;
            // 0x4a56c8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD760u;
    if (runtime->hasFunction(0x1DD760u)) {
        auto targetFn = runtime->lookupFunction(0x1DD760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A56CCu; }
        if (ctx->pc != 0x4A56CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD760_0x1dd760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A56CCu; }
        if (ctx->pc != 0x4A56CCu) { return; }
    }
    ctx->pc = 0x4A56CCu;
label_4a56cc:
    // 0x4a56cc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4a56ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a56d0:
    // 0x4a56d0: 0xc0770c0  jal         func_1DC300
label_4a56d4:
    if (ctx->pc == 0x4A56D4u) {
        ctx->pc = 0x4A56D4u;
            // 0x4a56d4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A56D8u;
        goto label_4a56d8;
    }
    ctx->pc = 0x4A56D0u;
    SET_GPR_U32(ctx, 31, 0x4A56D8u);
    ctx->pc = 0x4A56D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A56D0u;
            // 0x4a56d4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC300u;
    if (runtime->hasFunction(0x1DC300u)) {
        auto targetFn = runtime->lookupFunction(0x1DC300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A56D8u; }
        if (ctx->pc != 0x4A56D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC300_0x1dc300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A56D8u; }
        if (ctx->pc != 0x4A56D8u) { return; }
    }
    ctx->pc = 0x4A56D8u;
label_4a56d8:
    // 0x4a56d8: 0xc0772f0  jal         func_1DCBC0
label_4a56dc:
    if (ctx->pc == 0x4A56DCu) {
        ctx->pc = 0x4A56DCu;
            // 0x4a56dc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A56E0u;
        goto label_4a56e0;
    }
    ctx->pc = 0x4A56D8u;
    SET_GPR_U32(ctx, 31, 0x4A56E0u);
    ctx->pc = 0x4A56DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A56D8u;
            // 0x4a56dc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBC0u;
    if (runtime->hasFunction(0x1DCBC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A56E0u; }
        if (ctx->pc != 0x4A56E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCBC0_0x1dcbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A56E0u; }
        if (ctx->pc != 0x4A56E0u) { return; }
    }
    ctx->pc = 0x4A56E0u;
label_4a56e0:
    // 0x4a56e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4a56e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a56e4:
    // 0x4a56e4: 0xc077584  jal         func_1DD610
label_4a56e8:
    if (ctx->pc == 0x4A56E8u) {
        ctx->pc = 0x4A56E8u;
            // 0x4a56e8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A56ECu;
        goto label_4a56ec;
    }
    ctx->pc = 0x4A56E4u;
    SET_GPR_U32(ctx, 31, 0x4A56ECu);
    ctx->pc = 0x4A56E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A56E4u;
            // 0x4a56e8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD610u;
    if (runtime->hasFunction(0x1DD610u)) {
        auto targetFn = runtime->lookupFunction(0x1DD610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A56ECu; }
        if (ctx->pc != 0x4A56ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD610_0x1dd610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A56ECu; }
        if (ctx->pc != 0x4A56ECu) { return; }
    }
    ctx->pc = 0x4A56ECu;
label_4a56ec:
    // 0x4a56ec: 0xc0754b4  jal         func_1D52D0
label_4a56f0:
    if (ctx->pc == 0x4A56F0u) {
        ctx->pc = 0x4A56F0u;
            // 0x4a56f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A56F4u;
        goto label_4a56f4;
    }
    ctx->pc = 0x4A56ECu;
    SET_GPR_U32(ctx, 31, 0x4A56F4u);
    ctx->pc = 0x4A56F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A56ECu;
            // 0x4a56f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A56F4u; }
        if (ctx->pc != 0x4A56F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A56F4u; }
        if (ctx->pc != 0x4A56F4u) { return; }
    }
    ctx->pc = 0x4A56F4u;
label_4a56f4:
    // 0x4a56f4: 0xc0bc1b4  jal         func_2F06D0
label_4a56f8:
    if (ctx->pc == 0x4A56F8u) {
        ctx->pc = 0x4A56F8u;
            // 0x4a56f8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A56FCu;
        goto label_4a56fc;
    }
    ctx->pc = 0x4A56F4u;
    SET_GPR_U32(ctx, 31, 0x4A56FCu);
    ctx->pc = 0x4A56F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A56F4u;
            // 0x4a56f8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F06D0u;
    if (runtime->hasFunction(0x2F06D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F06D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A56FCu; }
        if (ctx->pc != 0x4A56FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F06D0_0x2f06d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A56FCu; }
        if (ctx->pc != 0x4A56FCu) { return; }
    }
    ctx->pc = 0x4A56FCu;
label_4a56fc:
    // 0x4a56fc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4a56fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a5700:
    // 0x4a5700: 0xc0772ec  jal         func_1DCBB0
label_4a5704:
    if (ctx->pc == 0x4A5704u) {
        ctx->pc = 0x4A5704u;
            // 0x4a5704: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A5708u;
        goto label_4a5708;
    }
    ctx->pc = 0x4A5700u;
    SET_GPR_U32(ctx, 31, 0x4A5708u);
    ctx->pc = 0x4A5704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5700u;
            // 0x4a5704: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCBB0u;
    if (runtime->hasFunction(0x1DCBB0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5708u; }
        if (ctx->pc != 0x4A5708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCBB0_0x1dcbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5708u; }
        if (ctx->pc != 0x4A5708u) { return; }
    }
    ctx->pc = 0x4A5708u;
label_4a5708:
    // 0x4a5708: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_4a570c:
    if (ctx->pc == 0x4A570Cu) {
        ctx->pc = 0x4A570Cu;
            // 0x4a570c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A5710u;
        goto label_4a5710;
    }
    ctx->pc = 0x4A5708u;
    {
        const bool branch_taken_0x4a5708 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a5708) {
            ctx->pc = 0x4A570Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5708u;
            // 0x4a570c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A572Cu;
            goto label_4a572c;
        }
    }
    ctx->pc = 0x4A5710u;
label_4a5710:
    // 0x4a5710: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4a5710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4a5714:
    // 0x4a5714: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a5714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a5718:
    // 0x4a5718: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4a5718u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4a571c:
    // 0x4a571c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4a571cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a5720:
    // 0x4a5720: 0xc0bdf9c  jal         func_2F7E70
label_4a5724:
    if (ctx->pc == 0x4A5724u) {
        ctx->pc = 0x4A5724u;
            // 0x4a5724: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x4A5728u;
        goto label_4a5728;
    }
    ctx->pc = 0x4A5720u;
    SET_GPR_U32(ctx, 31, 0x4A5728u);
    ctx->pc = 0x4A5724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5720u;
            // 0x4a5724: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5728u; }
        if (ctx->pc != 0x4A5728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5728u; }
        if (ctx->pc != 0x4A5728u) { return; }
    }
    ctx->pc = 0x4A5728u;
label_4a5728:
    // 0x4a5728: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4a5728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4a572c:
    // 0x4a572c: 0xc129718  jal         func_4A5C60
label_4a5730:
    if (ctx->pc == 0x4A5730u) {
        ctx->pc = 0x4A5730u;
            // 0x4a5730: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A5734u;
        goto label_4a5734;
    }
    ctx->pc = 0x4A572Cu;
    SET_GPR_U32(ctx, 31, 0x4A5734u);
    ctx->pc = 0x4A5730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A572Cu;
            // 0x4a5730: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A5C60u;
    if (runtime->hasFunction(0x4A5C60u)) {
        auto targetFn = runtime->lookupFunction(0x4A5C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5734u; }
        if (ctx->pc != 0x4A5734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A5C60_0x4a5c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5734u; }
        if (ctx->pc != 0x4A5734u) { return; }
    }
    ctx->pc = 0x4A5734u;
label_4a5734:
    // 0x4a5734: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x4a5734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_4a5738:
    // 0x4a5738: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4a5738u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4a573c:
    // 0x4a573c: 0x0  nop
    ctx->pc = 0x4a573cu;
    // NOP
label_4a5740:
    // 0x4a5740: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4a5740u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4a5744:
    // 0x4a5744: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_4a5748:
    if (ctx->pc == 0x4A5748u) {
        ctx->pc = 0x4A5748u;
            // 0x4a5748: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x4A574Cu;
        goto label_4a574c;
    }
    ctx->pc = 0x4A5744u;
    {
        const bool branch_taken_0x4a5744 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4a5744) {
            ctx->pc = 0x4A5748u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5744u;
            // 0x4a5748: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A575Cu;
            goto label_4a575c;
        }
    }
    ctx->pc = 0x4A574Cu;
label_4a574c:
    // 0x4a574c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a574cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4a5750:
    // 0x4a5750: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4a5750u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4a5754:
    // 0x4a5754: 0x10000007  b           . + 4 + (0x7 << 2)
label_4a5758:
    if (ctx->pc == 0x4A5758u) {
        ctx->pc = 0x4A5758u;
            // 0x4a5758: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x4A575Cu;
        goto label_4a575c;
    }
    ctx->pc = 0x4A5754u;
    {
        const bool branch_taken_0x4a5754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A5758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5754u;
            // 0x4a5758: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5754) {
            ctx->pc = 0x4A5774u;
            goto label_4a5774;
        }
    }
    ctx->pc = 0x4A575Cu;
label_4a575c:
    // 0x4a575c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4a575cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_4a5760:
    // 0x4a5760: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a5760u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4a5764:
    // 0x4a5764: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4a5764u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4a5768:
    // 0x4a5768: 0x0  nop
    ctx->pc = 0x4a5768u;
    // NOP
label_4a576c:
    // 0x4a576c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4a576cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4a5770:
    // 0x4a5770: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x4a5770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_4a5774:
    // 0x4a5774: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x4a5774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_4a5778:
    // 0x4a5778: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4a5778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4a577c:
    // 0x4a577c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4a577cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4a5780:
    // 0x4a5780: 0x24420e84  addiu       $v0, $v0, 0xE84
    ctx->pc = 0x4a5780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3716));
label_4a5784:
    // 0x4a5784: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x4a5784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_4a5788:
    // 0x4a5788: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4a5788u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4a578c:
    // 0x4a578c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a578cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4a5790:
    // 0x4a5790: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x4a5790u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4a5794:
    // 0x4a5794: 0xc0daef0  jal         func_36BBC0
label_4a5798:
    if (ctx->pc == 0x4A5798u) {
        ctx->pc = 0x4A5798u;
            // 0x4a5798: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A579Cu;
        goto label_4a579c;
    }
    ctx->pc = 0x4A5794u;
    SET_GPR_U32(ctx, 31, 0x4A579Cu);
    ctx->pc = 0x4A5798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5794u;
            // 0x4a5798: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36BBC0u;
    if (runtime->hasFunction(0x36BBC0u)) {
        auto targetFn = runtime->lookupFunction(0x36BBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A579Cu; }
        if (ctx->pc != 0x4A579Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036BBC0_0x36bbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A579Cu; }
        if (ctx->pc != 0x4A579Cu) { return; }
    }
    ctx->pc = 0x4A579Cu;
label_4a579c:
    // 0x4a579c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x4a579cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_4a57a0:
    // 0x4a57a0: 0xc0cef78  jal         func_33BDE0
label_4a57a4:
    if (ctx->pc == 0x4A57A4u) {
        ctx->pc = 0x4A57A4u;
            // 0x4a57a4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A57A8u;
        goto label_4a57a8;
    }
    ctx->pc = 0x4A57A0u;
    SET_GPR_U32(ctx, 31, 0x4A57A8u);
    ctx->pc = 0x4A57A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A57A0u;
            // 0x4a57a4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BDE0u;
    if (runtime->hasFunction(0x33BDE0u)) {
        auto targetFn = runtime->lookupFunction(0x33BDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A57A8u; }
        if (ctx->pc != 0x4A57A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BDE0_0x33bde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A57A8u; }
        if (ctx->pc != 0x4A57A8u) { return; }
    }
    ctx->pc = 0x4A57A8u;
label_4a57a8:
    // 0x4a57a8: 0xc0daeec  jal         func_36BBB0
label_4a57ac:
    if (ctx->pc == 0x4A57ACu) {
        ctx->pc = 0x4A57ACu;
            // 0x4a57ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A57B0u;
        goto label_4a57b0;
    }
    ctx->pc = 0x4A57A8u;
    SET_GPR_U32(ctx, 31, 0x4A57B0u);
    ctx->pc = 0x4A57ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A57A8u;
            // 0x4a57ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36BBB0u;
    if (runtime->hasFunction(0x36BBB0u)) {
        auto targetFn = runtime->lookupFunction(0x36BBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A57B0u; }
        if (ctx->pc != 0x4A57B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036BBB0_0x36bbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A57B0u; }
        if (ctx->pc != 0x4A57B0u) { return; }
    }
    ctx->pc = 0x4A57B0u;
label_4a57b0:
    // 0x4a57b0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x4a57b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_4a57b4:
    // 0x4a57b4: 0xc0cef80  jal         func_33BE00
label_4a57b8:
    if (ctx->pc == 0x4A57B8u) {
        ctx->pc = 0x4A57B8u;
            // 0x4a57b8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A57BCu;
        goto label_4a57bc;
    }
    ctx->pc = 0x4A57B4u;
    SET_GPR_U32(ctx, 31, 0x4A57BCu);
    ctx->pc = 0x4A57B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A57B4u;
            // 0x4a57b8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BE00u;
    if (runtime->hasFunction(0x33BE00u)) {
        auto targetFn = runtime->lookupFunction(0x33BE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A57BCu; }
        if (ctx->pc != 0x4A57BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BE00_0x33be00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A57BCu; }
        if (ctx->pc != 0x4A57BCu) { return; }
    }
    ctx->pc = 0x4A57BCu;
label_4a57bc:
    // 0x4a57bc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4a57bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4a57c0:
    // 0x4a57c0: 0xc0c05cc  jal         func_301730
label_4a57c4:
    if (ctx->pc == 0x4A57C4u) {
        ctx->pc = 0x4A57C4u;
            // 0x4a57c4: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->pc = 0x4A57C8u;
        goto label_4a57c8;
    }
    ctx->pc = 0x4A57C0u;
    SET_GPR_U32(ctx, 31, 0x4A57C8u);
    ctx->pc = 0x4A57C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A57C0u;
            // 0x4a57c4: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x301730u;
    if (runtime->hasFunction(0x301730u)) {
        auto targetFn = runtime->lookupFunction(0x301730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A57C8u; }
        if (ctx->pc != 0x4A57C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00301730_0x301730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A57C8u; }
        if (ctx->pc != 0x4A57C8u) { return; }
    }
    ctx->pc = 0x4A57C8u;
label_4a57c8:
    // 0x4a57c8: 0xc0775d8  jal         func_1DD760
label_4a57cc:
    if (ctx->pc == 0x4A57CCu) {
        ctx->pc = 0x4A57CCu;
            // 0x4a57cc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A57D0u;
        goto label_4a57d0;
    }
    ctx->pc = 0x4A57C8u;
    SET_GPR_U32(ctx, 31, 0x4A57D0u);
    ctx->pc = 0x4A57CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A57C8u;
            // 0x4a57cc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD760u;
    if (runtime->hasFunction(0x1DD760u)) {
        auto targetFn = runtime->lookupFunction(0x1DD760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A57D0u; }
        if (ctx->pc != 0x4A57D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD760_0x1dd760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A57D0u; }
        if (ctx->pc != 0x4A57D0u) { return; }
    }
    ctx->pc = 0x4A57D0u;
label_4a57d0:
    // 0x4a57d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4a57d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a57d4:
    // 0x4a57d4: 0x3c0274ff  lui         $v0, 0x74FF
    ctx->pc = 0x4a57d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29951 << 16));
label_4a57d8:
    // 0x4a57d8: 0xc0cef60  jal         func_33BD80
label_4a57dc:
    if (ctx->pc == 0x4A57DCu) {
        ctx->pc = 0x4A57DCu;
            // 0x4a57dc: 0x34450004  ori         $a1, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->pc = 0x4A57E0u;
        goto label_4a57e0;
    }
    ctx->pc = 0x4A57D8u;
    SET_GPR_U32(ctx, 31, 0x4A57E0u);
    ctx->pc = 0x4A57DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A57D8u;
            // 0x4a57dc: 0x34450004  ori         $a1, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
    ctx->pc = 0x33BD80u;
    if (runtime->hasFunction(0x33BD80u)) {
        auto targetFn = runtime->lookupFunction(0x33BD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A57E0u; }
        if (ctx->pc != 0x4A57E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BD80_0x33bd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A57E0u; }
        if (ctx->pc != 0x4A57E0u) { return; }
    }
    ctx->pc = 0x4A57E0u;
label_4a57e0:
    // 0x4a57e0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4a57e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4a57e4:
    // 0x4a57e4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4a57e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4a57e8:
    // 0x4a57e8: 0xc129694  jal         func_4A5A50
label_4a57ec:
    if (ctx->pc == 0x4A57ECu) {
        ctx->pc = 0x4A57ECu;
            // 0x4a57ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4A57F0u;
        goto label_4a57f0;
    }
    ctx->pc = 0x4A57E8u;
    SET_GPR_U32(ctx, 31, 0x4A57F0u);
    ctx->pc = 0x4A57ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A57E8u;
            // 0x4a57ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A5A50u;
    if (runtime->hasFunction(0x4A5A50u)) {
        auto targetFn = runtime->lookupFunction(0x4A5A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A57F0u; }
        if (ctx->pc != 0x4A57F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A5A50_0x4a5a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A57F0u; }
        if (ctx->pc != 0x4A57F0u) { return; }
    }
    ctx->pc = 0x4A57F0u;
label_4a57f0:
    // 0x4a57f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4a57f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4a57f4:
    // 0x4a57f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4a57f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4a57f8:
    // 0x4a57f8: 0xc1296c8  jal         func_4A5B20
label_4a57fc:
    if (ctx->pc == 0x4A57FCu) {
        ctx->pc = 0x4A57FCu;
            // 0x4a57fc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A5800u;
        goto label_4a5800;
    }
    ctx->pc = 0x4A57F8u;
    SET_GPR_U32(ctx, 31, 0x4A5800u);
    ctx->pc = 0x4A57FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A57F8u;
            // 0x4a57fc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A5B20u;
    if (runtime->hasFunction(0x4A5B20u)) {
        auto targetFn = runtime->lookupFunction(0x4A5B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5800u; }
        if (ctx->pc != 0x4A5800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A5B20_0x4a5b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5800u; }
        if (ctx->pc != 0x4A5800u) { return; }
    }
    ctx->pc = 0x4A5800u;
label_4a5800:
    // 0x4a5800: 0xc60c0008  lwc1        $f12, 0x8($s0)
    ctx->pc = 0x4a5800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4a5804:
    // 0x4a5804: 0xc0f0d64  jal         func_3C3590
label_4a5808:
    if (ctx->pc == 0x4A5808u) {
        ctx->pc = 0x4A5808u;
            // 0x4a5808: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A580Cu;
        goto label_4a580c;
    }
    ctx->pc = 0x4A5804u;
    SET_GPR_U32(ctx, 31, 0x4A580Cu);
    ctx->pc = 0x4A5808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5804u;
            // 0x4a5808: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C3590u;
    if (runtime->hasFunction(0x3C3590u)) {
        auto targetFn = runtime->lookupFunction(0x3C3590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A580Cu; }
        if (ctx->pc != 0x4A580Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C3590_0x3c3590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A580Cu; }
        if (ctx->pc != 0x4A580Cu) { return; }
    }
    ctx->pc = 0x4A580Cu;
label_4a580c:
    // 0x4a580c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x4a580cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_4a5810:
    // 0x4a5810: 0xc44cc6b8  lwc1        $f12, -0x3948($v0)
    ctx->pc = 0x4a5810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4a5814:
    // 0x4a5814: 0xc1296c4  jal         func_4A5B10
label_4a5818:
    if (ctx->pc == 0x4A5818u) {
        ctx->pc = 0x4A5818u;
            // 0x4a5818: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A581Cu;
        goto label_4a581c;
    }
    ctx->pc = 0x4A5814u;
    SET_GPR_U32(ctx, 31, 0x4A581Cu);
    ctx->pc = 0x4A5818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5814u;
            // 0x4a5818: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A5B10u;
    if (runtime->hasFunction(0x4A5B10u)) {
        auto targetFn = runtime->lookupFunction(0x4A5B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A581Cu; }
        if (ctx->pc != 0x4A581Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A5B10_0x4a5b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A581Cu; }
        if (ctx->pc != 0x4A581Cu) { return; }
    }
    ctx->pc = 0x4A581Cu;
label_4a581c:
    // 0x4a581c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4a581cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a5820:
    // 0x4a5820: 0xc0f08f4  jal         func_3C23D0
label_4a5824:
    if (ctx->pc == 0x4A5824u) {
        ctx->pc = 0x4A5824u;
            // 0x4a5824: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4A5828u;
        goto label_4a5828;
    }
    ctx->pc = 0x4A5820u;
    SET_GPR_U32(ctx, 31, 0x4A5828u);
    ctx->pc = 0x4A5824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5820u;
            // 0x4a5824: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C23D0u;
    if (runtime->hasFunction(0x3C23D0u)) {
        auto targetFn = runtime->lookupFunction(0x3C23D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5828u; }
        if (ctx->pc != 0x4A5828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C23D0_0x3c23d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5828u; }
        if (ctx->pc != 0x4A5828u) { return; }
    }
    ctx->pc = 0x4A5828u;
label_4a5828:
    // 0x4a5828: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4a5828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4a582c:
    // 0x4a582c: 0xc0e1104  jal         func_384410
label_4a5830:
    if (ctx->pc == 0x4A5830u) {
        ctx->pc = 0x4A5830u;
            // 0x4a5830: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->pc = 0x4A5834u;
        goto label_4a5834;
    }
    ctx->pc = 0x4A582Cu;
    SET_GPR_U32(ctx, 31, 0x4A5834u);
    ctx->pc = 0x4A5830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A582Cu;
            // 0x4a5830: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384410u;
    if (runtime->hasFunction(0x384410u)) {
        auto targetFn = runtime->lookupFunction(0x384410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5834u; }
        if (ctx->pc != 0x4A5834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384410_0x384410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5834u; }
        if (ctx->pc != 0x4A5834u) { return; }
    }
    ctx->pc = 0x4A5834u;
label_4a5834:
    // 0x4a5834: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4a5834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4a5838:
    // 0x4a5838: 0xc0e1100  jal         func_384400
label_4a583c:
    if (ctx->pc == 0x4A583Cu) {
        ctx->pc = 0x4A583Cu;
            // 0x4a583c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x4A5840u;
        goto label_4a5840;
    }
    ctx->pc = 0x4A5838u;
    SET_GPR_U32(ctx, 31, 0x4A5840u);
    ctx->pc = 0x4A583Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5838u;
            // 0x4a583c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384400u;
    if (runtime->hasFunction(0x384400u)) {
        auto targetFn = runtime->lookupFunction(0x384400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5840u; }
        if (ctx->pc != 0x4A5840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384400_0x384400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5840u; }
        if (ctx->pc != 0x4A5840u) { return; }
    }
    ctx->pc = 0x4A5840u;
label_4a5840:
    // 0x4a5840: 0xc077320  jal         func_1DCC80
label_4a5844:
    if (ctx->pc == 0x4A5844u) {
        ctx->pc = 0x4A5844u;
            // 0x4a5844: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A5848u;
        goto label_4a5848;
    }
    ctx->pc = 0x4A5840u;
    SET_GPR_U32(ctx, 31, 0x4A5848u);
    ctx->pc = 0x4A5844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5840u;
            // 0x4a5844: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC80u;
    if (runtime->hasFunction(0x1DCC80u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5848u; }
        if (ctx->pc != 0x4A5848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC80_0x1dcc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5848u; }
        if (ctx->pc != 0x4A5848u) { return; }
    }
    ctx->pc = 0x4A5848u;
label_4a5848:
    // 0x4a5848: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a5848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a584c:
    // 0x4a584c: 0xc077320  jal         func_1DCC80
label_4a5850:
    if (ctx->pc == 0x4A5850u) {
        ctx->pc = 0x4A5850u;
            // 0x4a5850: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A5854u;
        goto label_4a5854;
    }
    ctx->pc = 0x4A584Cu;
    SET_GPR_U32(ctx, 31, 0x4A5854u);
    ctx->pc = 0x4A5850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A584Cu;
            // 0x4a5850: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC80u;
    if (runtime->hasFunction(0x1DCC80u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5854u; }
        if (ctx->pc != 0x4A5854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC80_0x1dcc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5854u; }
        if (ctx->pc != 0x4A5854u) { return; }
    }
    ctx->pc = 0x4A5854u;
label_4a5854:
    // 0x4a5854: 0x202082a  slt         $at, $s0, $v0
    ctx->pc = 0x4a5854u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_4a5858:
    // 0x4a5858: 0x50200009  beql        $at, $zero, . + 4 + (0x9 << 2)
label_4a585c:
    if (ctx->pc == 0x4A585Cu) {
        ctx->pc = 0x4A585Cu;
            // 0x4a585c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A5860u;
        goto label_4a5860;
    }
    ctx->pc = 0x4A5858u;
    {
        const bool branch_taken_0x4a5858 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a5858) {
            ctx->pc = 0x4A585Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5858u;
            // 0x4a585c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A5880u;
            goto label_4a5880;
        }
    }
    ctx->pc = 0x4A5860u;
label_4a5860:
    // 0x4a5860: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4a5860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4a5864:
    // 0x4a5864: 0xc0e1104  jal         func_384410
label_4a5868:
    if (ctx->pc == 0x4A5868u) {
        ctx->pc = 0x4A5868u;
            // 0x4a5868: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x4A586Cu;
        goto label_4a586c;
    }
    ctx->pc = 0x4A5864u;
    SET_GPR_U32(ctx, 31, 0x4A586Cu);
    ctx->pc = 0x4A5868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5864u;
            // 0x4a5868: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384410u;
    if (runtime->hasFunction(0x384410u)) {
        auto targetFn = runtime->lookupFunction(0x384410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A586Cu; }
        if (ctx->pc != 0x4A586Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384410_0x384410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A586Cu; }
        if (ctx->pc != 0x4A586Cu) { return; }
    }
    ctx->pc = 0x4A586Cu;
label_4a586c:
    // 0x4a586c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4a586cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4a5870:
    // 0x4a5870: 0xc0efdd8  jal         func_3BF760
label_4a5874:
    if (ctx->pc == 0x4A5874u) {
        ctx->pc = 0x4A5874u;
            // 0x4a5874: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4A5878u;
        goto label_4a5878;
    }
    ctx->pc = 0x4A5870u;
    SET_GPR_U32(ctx, 31, 0x4A5878u);
    ctx->pc = 0x4A5874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5870u;
            // 0x4a5874: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF760u;
    if (runtime->hasFunction(0x3BF760u)) {
        auto targetFn = runtime->lookupFunction(0x3BF760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5878u; }
        if (ctx->pc != 0x4A5878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF760_0x3bf760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5878u; }
        if (ctx->pc != 0x4A5878u) { return; }
    }
    ctx->pc = 0x4A5878u;
label_4a5878:
    // 0x4a5878: 0x10000004  b           . + 4 + (0x4 << 2)
label_4a587c:
    if (ctx->pc == 0x4A587Cu) {
        ctx->pc = 0x4A587Cu;
            // 0x4a587c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A5880u;
        goto label_4a5880;
    }
    ctx->pc = 0x4A5878u;
    {
        const bool branch_taken_0x4a5878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A587Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5878u;
            // 0x4a587c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5878) {
            ctx->pc = 0x4A588Cu;
            goto label_4a588c;
        }
    }
    ctx->pc = 0x4A5880u;
label_4a5880:
    // 0x4a5880: 0xc0efdd8  jal         func_3BF760
label_4a5884:
    if (ctx->pc == 0x4A5884u) {
        ctx->pc = 0x4A5884u;
            // 0x4a5884: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A5888u;
        goto label_4a5888;
    }
    ctx->pc = 0x4A5880u;
    SET_GPR_U32(ctx, 31, 0x4A5888u);
    ctx->pc = 0x4A5884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5880u;
            // 0x4a5884: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3BF760u;
    if (runtime->hasFunction(0x3BF760u)) {
        auto targetFn = runtime->lookupFunction(0x3BF760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5888u; }
        if (ctx->pc != 0x4A5888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003BF760_0x3bf760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5888u; }
        if (ctx->pc != 0x4A5888u) { return; }
    }
    ctx->pc = 0x4A5888u;
label_4a5888:
    // 0x4a5888: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4a5888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4a588c:
    // 0x4a588c: 0xc07753c  jal         func_1DD4F0
label_4a5890:
    if (ctx->pc == 0x4A5890u) {
        ctx->pc = 0x4A5894u;
        goto label_4a5894;
    }
    ctx->pc = 0x4A588Cu;
    SET_GPR_U32(ctx, 31, 0x4A5894u);
    ctx->pc = 0x1DD4F0u;
    if (runtime->hasFunction(0x1DD4F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5894u; }
        if (ctx->pc != 0x4A5894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD4F0_0x1dd4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5894u; }
        if (ctx->pc != 0x4A5894u) { return; }
    }
    ctx->pc = 0x4A5894u;
label_4a5894:
    // 0x4a5894: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4a5894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a5898:
    // 0x4a5898: 0xc129690  jal         func_4A5A40
label_4a589c:
    if (ctx->pc == 0x4A589Cu) {
        ctx->pc = 0x4A589Cu;
            // 0x4a589c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A58A0u;
        goto label_4a58a0;
    }
    ctx->pc = 0x4A5898u;
    SET_GPR_U32(ctx, 31, 0x4A58A0u);
    ctx->pc = 0x4A589Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5898u;
            // 0x4a589c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A5A40u;
    if (runtime->hasFunction(0x4A5A40u)) {
        auto targetFn = runtime->lookupFunction(0x4A5A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A58A0u; }
        if (ctx->pc != 0x4A58A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A5A40_0x4a5a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A58A0u; }
        if (ctx->pc != 0x4A58A0u) { return; }
    }
    ctx->pc = 0x4A58A0u;
label_4a58a0:
    // 0x4a58a0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4a58a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a58a4:
    // 0x4a58a4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x4a58a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a58a8:
    // 0x4a58a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4a58a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a58ac:
    // 0x4a58ac: 0xc129714  jal         func_4A5C50
label_4a58b0:
    if (ctx->pc == 0x4A58B0u) {
        ctx->pc = 0x4A58B0u;
            // 0x4a58b0: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x4A58B4u;
        goto label_4a58b4;
    }
    ctx->pc = 0x4A58ACu;
    SET_GPR_U32(ctx, 31, 0x4A58B4u);
    ctx->pc = 0x4A58B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A58ACu;
            // 0x4a58b0: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A5C50u;
    if (runtime->hasFunction(0x4A5C50u)) {
        auto targetFn = runtime->lookupFunction(0x4A5C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A58B4u; }
        if (ctx->pc != 0x4A58B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A5C50_0x4a5c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A58B4u; }
        if (ctx->pc != 0x4A58B4u) { return; }
    }
    ctx->pc = 0x4A58B4u;
label_4a58b4:
    // 0x4a58b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4a58b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a58b8:
    // 0x4a58b8: 0xc12970c  jal         func_4A5C30
label_4a58bc:
    if (ctx->pc == 0x4A58BCu) {
        ctx->pc = 0x4A58BCu;
            // 0x4a58bc: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x4A58C0u;
        goto label_4a58c0;
    }
    ctx->pc = 0x4A58B8u;
    SET_GPR_U32(ctx, 31, 0x4A58C0u);
    ctx->pc = 0x4A58BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A58B8u;
            // 0x4a58bc: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A5C30u;
    if (runtime->hasFunction(0x4A5C30u)) {
        auto targetFn = runtime->lookupFunction(0x4A5C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A58C0u; }
        if (ctx->pc != 0x4A58C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A5C30_0x4a5c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A58C0u; }
        if (ctx->pc != 0x4A58C0u) { return; }
    }
    ctx->pc = 0x4A58C0u;
label_4a58c0:
    // 0x4a58c0: 0xc0e110c  jal         func_384430
label_4a58c4:
    if (ctx->pc == 0x4A58C4u) {
        ctx->pc = 0x4A58C4u;
            // 0x4a58c4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A58C8u;
        goto label_4a58c8;
    }
    ctx->pc = 0x4A58C0u;
    SET_GPR_U32(ctx, 31, 0x4A58C8u);
    ctx->pc = 0x4A58C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A58C0u;
            // 0x4a58c4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x384430u;
    if (runtime->hasFunction(0x384430u)) {
        auto targetFn = runtime->lookupFunction(0x384430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A58C8u; }
        if (ctx->pc != 0x4A58C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00384430_0x384430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A58C8u; }
        if (ctx->pc != 0x4A58C8u) { return; }
    }
    ctx->pc = 0x4A58C8u;
label_4a58c8:
    // 0x4a58c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4a58c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a58cc:
    // 0x4a58cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4a58ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a58d0:
    // 0x4a58d0: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x4a58d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_4a58d4:
    // 0x4a58d4: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x4a58d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_4a58d8:
    // 0x4a58d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4a58d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4a58dc:
    // 0x4a58dc: 0xc12968c  jal         func_4A5A30
label_4a58e0:
    if (ctx->pc == 0x4A58E0u) {
        ctx->pc = 0x4A58E0u;
            // 0x4a58e0: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x4A58E4u;
        goto label_4a58e4;
    }
    ctx->pc = 0x4A58DCu;
    SET_GPR_U32(ctx, 31, 0x4A58E4u);
    ctx->pc = 0x4A58E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A58DCu;
            // 0x4a58e0: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A5A30u;
    if (runtime->hasFunction(0x4A5A30u)) {
        auto targetFn = runtime->lookupFunction(0x4A5A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A58E4u; }
        if (ctx->pc != 0x4A58E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A5A30_0x4a5a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A58E4u; }
        if (ctx->pc != 0x4A58E4u) { return; }
    }
    ctx->pc = 0x4A58E4u;
label_4a58e4:
    // 0x4a58e4: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x4a58e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_4a58e8:
    // 0x4a58e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4a58e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4a58ec:
    // 0x4a58ec: 0xc0781cc  jal         func_1E0730
label_4a58f0:
    if (ctx->pc == 0x4A58F0u) {
        ctx->pc = 0x4A58F0u;
            // 0x4a58f0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A58F4u;
        goto label_4a58f4;
    }
    ctx->pc = 0x4A58ECu;
    SET_GPR_U32(ctx, 31, 0x4A58F4u);
    ctx->pc = 0x4A58F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A58ECu;
            // 0x4a58f0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0730u;
    if (runtime->hasFunction(0x1E0730u)) {
        auto targetFn = runtime->lookupFunction(0x1E0730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A58F4u; }
        if (ctx->pc != 0x4A58F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0730_0x1e0730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A58F4u; }
        if (ctx->pc != 0x4A58F4u) { return; }
    }
    ctx->pc = 0x4A58F4u;
label_4a58f4:
    // 0x4a58f4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4a58f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4a58f8:
    // 0x4a58f8: 0xc077fb0  jal         func_1DFEC0
label_4a58fc:
    if (ctx->pc == 0x4A58FCu) {
        ctx->pc = 0x4A58FCu;
            // 0x4a58fc: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->pc = 0x4A5900u;
        goto label_4a5900;
    }
    ctx->pc = 0x4A58F8u;
    SET_GPR_U32(ctx, 31, 0x4A5900u);
    ctx->pc = 0x4A58FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A58F8u;
            // 0x4a58fc: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFEC0u;
    if (runtime->hasFunction(0x1DFEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DFEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5900u; }
        if (ctx->pc != 0x4A5900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFEC0_0x1dfec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5900u; }
        if (ctx->pc != 0x4A5900u) { return; }
    }
    ctx->pc = 0x4A5900u;
label_4a5900:
    // 0x4a5900: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4a5900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4a5904:
    // 0x4a5904: 0xc0770dc  jal         func_1DC370
label_4a5908:
    if (ctx->pc == 0x4A5908u) {
        ctx->pc = 0x4A5908u;
            // 0x4a5908: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->pc = 0x4A590Cu;
        goto label_4a590c;
    }
    ctx->pc = 0x4A5904u;
    SET_GPR_U32(ctx, 31, 0x4A590Cu);
    ctx->pc = 0x4A5908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5904u;
            // 0x4a5908: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC370u;
    if (runtime->hasFunction(0x1DC370u)) {
        auto targetFn = runtime->lookupFunction(0x1DC370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A590Cu; }
        if (ctx->pc != 0x4A590Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DC370_0x1dc370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A590Cu; }
        if (ctx->pc != 0x4A590Cu) { return; }
    }
    ctx->pc = 0x4A590Cu;
label_4a590c:
    // 0x4a590c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4a590cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4a5910:
    // 0x4a5910: 0xc07649c  jal         func_1D9270
label_4a5914:
    if (ctx->pc == 0x4A5914u) {
        ctx->pc = 0x4A5914u;
            // 0x4a5914: 0x24050066  addiu       $a1, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->pc = 0x4A5918u;
        goto label_4a5918;
    }
    ctx->pc = 0x4A5910u;
    SET_GPR_U32(ctx, 31, 0x4A5918u);
    ctx->pc = 0x4A5914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5910u;
            // 0x4a5914: 0x24050066  addiu       $a1, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9270u;
    if (runtime->hasFunction(0x1D9270u)) {
        auto targetFn = runtime->lookupFunction(0x1D9270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5918u; }
        if (ctx->pc != 0x4A5918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9270_0x1d9270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5918u; }
        if (ctx->pc != 0x4A5918u) { return; }
    }
    ctx->pc = 0x4A5918u;
label_4a5918:
    // 0x4a5918: 0xc0775d8  jal         func_1DD760
label_4a591c:
    if (ctx->pc == 0x4A591Cu) {
        ctx->pc = 0x4A591Cu;
            // 0x4a591c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A5920u;
        goto label_4a5920;
    }
    ctx->pc = 0x4A5918u;
    SET_GPR_U32(ctx, 31, 0x4A5920u);
    ctx->pc = 0x4A591Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5918u;
            // 0x4a591c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD760u;
    if (runtime->hasFunction(0x1DD760u)) {
        auto targetFn = runtime->lookupFunction(0x1DD760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5920u; }
        if (ctx->pc != 0x4A5920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD760_0x1dd760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5920u; }
        if (ctx->pc != 0x4A5920u) { return; }
    }
    ctx->pc = 0x4A5920u;
label_4a5920:
    // 0x4a5920: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4a5920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a5924:
    // 0x4a5924: 0xc0775bc  jal         func_1DD6F0
label_4a5928:
    if (ctx->pc == 0x4A5928u) {
        ctx->pc = 0x4A5928u;
            // 0x4a5928: 0x3c050020  lui         $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
        ctx->pc = 0x4A592Cu;
        goto label_4a592c;
    }
    ctx->pc = 0x4A5924u;
    SET_GPR_U32(ctx, 31, 0x4A592Cu);
    ctx->pc = 0x4A5928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5924u;
            // 0x4a5928: 0x3c050020  lui         $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6F0u;
    if (runtime->hasFunction(0x1DD6F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A592Cu; }
        if (ctx->pc != 0x4A592Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6F0_0x1dd6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A592Cu; }
        if (ctx->pc != 0x4A592Cu) { return; }
    }
    ctx->pc = 0x4A592Cu;
label_4a592c:
    // 0x4a592c: 0xc07731c  jal         func_1DCC70
label_4a5930:
    if (ctx->pc == 0x4A5930u) {
        ctx->pc = 0x4A5930u;
            // 0x4a5930: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A5934u;
        goto label_4a5934;
    }
    ctx->pc = 0x4A592Cu;
    SET_GPR_U32(ctx, 31, 0x4A5934u);
    ctx->pc = 0x4A5930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A592Cu;
            // 0x4a5930: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC70u;
    if (runtime->hasFunction(0x1DCC70u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5934u; }
        if (ctx->pc != 0x4A5934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC70_0x1dcc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5934u; }
        if (ctx->pc != 0x4A5934u) { return; }
    }
    ctx->pc = 0x4A5934u;
label_4a5934:
    // 0x4a5934: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x4a5934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_4a5938:
    // 0x4a5938: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4a5938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a593c:
    // 0x4a593c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x4a593cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4a5940:
    // 0x4a5940: 0xc129688  jal         func_4A5A20
label_4a5944:
    if (ctx->pc == 0x4A5944u) {
        ctx->pc = 0x4A5944u;
            // 0x4a5944: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A5948u;
        goto label_4a5948;
    }
    ctx->pc = 0x4A5940u;
    SET_GPR_U32(ctx, 31, 0x4A5948u);
    ctx->pc = 0x4A5944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5940u;
            // 0x4a5944: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4A5A20u;
    if (runtime->hasFunction(0x4A5A20u)) {
        auto targetFn = runtime->lookupFunction(0x4A5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5948u; }
        if (ctx->pc != 0x4A5948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A5A20_0x4a5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5948u; }
        if (ctx->pc != 0x4A5948u) { return; }
    }
    ctx->pc = 0x4A5948u;
label_4a5948:
    // 0x4a5948: 0x8ea30e34  lw          $v1, 0xE34($s5)
    ctx->pc = 0x4a5948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3636)));
label_4a594c:
    // 0x4a594c: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x4a594cu;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4a5950:
    // 0x4a5950: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_4a5954:
    if (ctx->pc == 0x4A5954u) {
        ctx->pc = 0x4A5954u;
            // 0x4a5954: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A5958u;
        goto label_4a5958;
    }
    ctx->pc = 0x4A5950u;
    {
        const bool branch_taken_0x4a5950 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4A5954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5950u;
            // 0x4a5954: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a5950) {
            ctx->pc = 0x4A5968u;
            goto label_4a5968;
        }
    }
    ctx->pc = 0x4A5958u;
label_4a5958:
    // 0x4a5958: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x4a5958u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_4a595c:
    // 0x4a595c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_4a5960:
    if (ctx->pc == 0x4A5960u) {
        ctx->pc = 0x4A5964u;
        goto label_4a5964;
    }
    ctx->pc = 0x4A595Cu;
    {
        const bool branch_taken_0x4a595c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a595c) {
            ctx->pc = 0x4A5968u;
            goto label_4a5968;
        }
    }
    ctx->pc = 0x4A5964u;
label_4a5964:
    // 0x4a5964: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a5964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a5968:
    // 0x4a5968: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_4a596c:
    if (ctx->pc == 0x4A596Cu) {
        ctx->pc = 0x4A5970u;
        goto label_4a5970;
    }
    ctx->pc = 0x4A5968u;
    {
        const bool branch_taken_0x4a5968 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a5968) {
            ctx->pc = 0x4A5984u;
            goto label_4a5984;
        }
    }
    ctx->pc = 0x4A5970u;
label_4a5970:
    // 0x4a5970: 0xc075eb4  jal         func_1D7AD0
label_4a5974:
    if (ctx->pc == 0x4A5974u) {
        ctx->pc = 0x4A5974u;
            // 0x4a5974: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A5978u;
        goto label_4a5978;
    }
    ctx->pc = 0x4A5970u;
    SET_GPR_U32(ctx, 31, 0x4A5978u);
    ctx->pc = 0x4A5974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5970u;
            // 0x4a5974: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5978u; }
        if (ctx->pc != 0x4A5978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5978u; }
        if (ctx->pc != 0x4A5978u) { return; }
    }
    ctx->pc = 0x4A5978u;
label_4a5978:
    // 0x4a5978: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_4a597c:
    if (ctx->pc == 0x4A597Cu) {
        ctx->pc = 0x4A5980u;
        goto label_4a5980;
    }
    ctx->pc = 0x4A5978u;
    {
        const bool branch_taken_0x4a5978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a5978) {
            ctx->pc = 0x4A5984u;
            goto label_4a5984;
        }
    }
    ctx->pc = 0x4A5980u;
label_4a5980:
    // 0x4a5980: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4a5980u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a5984:
    // 0x4a5984: 0x56000017  bnel        $s0, $zero, . + 4 + (0x17 << 2)
label_4a5988:
    if (ctx->pc == 0x4A5988u) {
        ctx->pc = 0x4A5988u;
            // 0x4a5988: 0x26a41150  addiu       $a0, $s5, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4432));
        ctx->pc = 0x4A598Cu;
        goto label_4a598c;
    }
    ctx->pc = 0x4A5984u;
    {
        const bool branch_taken_0x4a5984 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a5984) {
            ctx->pc = 0x4A5988u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5984u;
            // 0x4a5988: 0x26a41150  addiu       $a0, $s5, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4432));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A59E4u;
            goto label_4a59e4;
        }
    }
    ctx->pc = 0x4A598Cu;
label_4a598c:
    // 0x4a598c: 0x8ea40e34  lw          $a0, 0xE34($s5)
    ctx->pc = 0x4a598cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3636)));
label_4a5990:
    // 0x4a5990: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x4a5990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4a5994:
    // 0x4a5994: 0x10830012  beq         $a0, $v1, . + 4 + (0x12 << 2)
label_4a5998:
    if (ctx->pc == 0x4A5998u) {
        ctx->pc = 0x4A599Cu;
        goto label_4a599c;
    }
    ctx->pc = 0x4A5994u;
    {
        const bool branch_taken_0x4a5994 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4a5994) {
            ctx->pc = 0x4A59E0u;
            goto label_4a59e0;
        }
    }
    ctx->pc = 0x4A599Cu;
label_4a599c:
    // 0x4a599c: 0x8e850e34  lw          $a1, 0xE34($s4)
    ctx->pc = 0x4a599cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3636)));
label_4a59a0:
    // 0x4a59a0: 0xa0182a  slt         $v1, $a1, $zero
    ctx->pc = 0x4a59a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_4a59a4:
    // 0x4a59a4: 0x38a40005  xori        $a0, $a1, 0x5
    ctx->pc = 0x4a59a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)5);
label_4a59a8:
    // 0x4a59a8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x4a59a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_4a59ac:
    // 0x4a59ac: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_4a59b0:
    if (ctx->pc == 0x4A59B0u) {
        ctx->pc = 0x4A59B0u;
            // 0x4a59b0: 0x2c900001  sltiu       $s0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->pc = 0x4A59B4u;
        goto label_4a59b4;
    }
    ctx->pc = 0x4A59ACu;
    {
        const bool branch_taken_0x4a59ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A59B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A59ACu;
            // 0x4a59b0: 0x2c900001  sltiu       $s0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a59ac) {
            ctx->pc = 0x4A59B8u;
            goto label_4a59b8;
        }
    }
    ctx->pc = 0x4A59B4u;
label_4a59b4:
    // 0x4a59b4: 0x28a30004  slti        $v1, $a1, 0x4
    ctx->pc = 0x4a59b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
label_4a59b8:
    // 0x4a59b8: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
label_4a59bc:
    if (ctx->pc == 0x4A59BCu) {
        ctx->pc = 0x4A59BCu;
            // 0x4a59bc: 0x306400ff  andi        $a0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x4A59C0u;
        goto label_4a59c0;
    }
    ctx->pc = 0x4A59B8u;
    {
        const bool branch_taken_0x4a59b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a59b8) {
            ctx->pc = 0x4A59BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A59B8u;
            // 0x4a59bc: 0x306400ff  andi        $a0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A59D0u;
            goto label_4a59d0;
        }
    }
    ctx->pc = 0x4A59C0u;
label_4a59c0:
    // 0x4a59c0: 0xc075eb4  jal         func_1D7AD0
label_4a59c4:
    if (ctx->pc == 0x4A59C4u) {
        ctx->pc = 0x4A59C4u;
            // 0x4a59c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A59C8u;
        goto label_4a59c8;
    }
    ctx->pc = 0x4A59C0u;
    SET_GPR_U32(ctx, 31, 0x4A59C8u);
    ctx->pc = 0x4A59C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A59C0u;
            // 0x4a59c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A59C8u; }
        if (ctx->pc != 0x4A59C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A59C8u; }
        if (ctx->pc != 0x4A59C8u) { return; }
    }
    ctx->pc = 0x4A59C8u;
label_4a59c8:
    // 0x4a59c8: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x4a59c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4a59cc:
    // 0x4a59cc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x4a59ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_4a59d0:
    // 0x4a59d0: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x4a59d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_4a59d4:
    // 0x4a59d4: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x4a59d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4a59d8:
    // 0x4a59d8: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_4a59dc:
    if (ctx->pc == 0x4A59DCu) {
        ctx->pc = 0x4A59DCu;
            // 0x4a59dc: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x4A59E0u;
        goto label_4a59e0;
    }
    ctx->pc = 0x4A59D8u;
    {
        const bool branch_taken_0x4a59d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a59d8) {
            ctx->pc = 0x4A59DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A59D8u;
            // 0x4a59dc: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A59F0u;
            goto label_4a59f0;
        }
    }
    ctx->pc = 0x4A59E0u;
label_4a59e0:
    // 0x4a59e0: 0x26a41150  addiu       $a0, $s5, 0x1150
    ctx->pc = 0x4a59e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4432));
label_4a59e4:
    // 0x4a59e4: 0xc12ca3c  jal         func_4B28F0
label_4a59e8:
    if (ctx->pc == 0x4A59E8u) {
        ctx->pc = 0x4A59E8u;
            // 0x4a59e8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4A59ECu;
        goto label_4a59ec;
    }
    ctx->pc = 0x4A59E4u;
    SET_GPR_U32(ctx, 31, 0x4A59ECu);
    ctx->pc = 0x4A59E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A59E4u;
            // 0x4a59e8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B28F0u;
    if (runtime->hasFunction(0x4B28F0u)) {
        auto targetFn = runtime->lookupFunction(0x4B28F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A59ECu; }
        if (ctx->pc != 0x4A59ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B28F0_0x4b28f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A59ECu; }
        if (ctx->pc != 0x4A59ECu) { return; }
    }
    ctx->pc = 0x4A59ECu;
label_4a59ec:
    // 0x4a59ec: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x4a59ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_4a59f0:
    // 0x4a59f0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4a59f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4a59f4:
    // 0x4a59f4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x4a59f4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4a59f8:
    // 0x4a59f8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x4a59f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4a59fc:
    // 0x4a59fc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4a59fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4a5a00:
    // 0x4a5a00: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4a5a00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4a5a04:
    // 0x4a5a04: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4a5a04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4a5a08:
    // 0x4a5a08: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4a5a08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a5a0c:
    // 0x4a5a0c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4a5a0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a5a10:
    // 0x4a5a10: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4a5a10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a5a14:
    // 0x4a5a14: 0x3e00008  jr          $ra
label_4a5a18:
    if (ctx->pc == 0x4A5A18u) {
        ctx->pc = 0x4A5A18u;
            // 0x4a5a18: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x4A5A1Cu;
        goto label_4a5a1c;
    }
    ctx->pc = 0x4A5A14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A5A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5A14u;
            // 0x4a5a18: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A5A1Cu;
label_4a5a1c:
    // 0x4a5a1c: 0x0  nop
    ctx->pc = 0x4a5a1cu;
    // NOP
}
