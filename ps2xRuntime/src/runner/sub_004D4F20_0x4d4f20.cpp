#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004D4F20
// Address: 0x4d4f20 - 0x4d57a0
void sub_004D4F20_0x4d4f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D4F20_0x4d4f20");
#endif

    switch (ctx->pc) {
        case 0x4d4f20u: goto label_4d4f20;
        case 0x4d4f24u: goto label_4d4f24;
        case 0x4d4f28u: goto label_4d4f28;
        case 0x4d4f2cu: goto label_4d4f2c;
        case 0x4d4f30u: goto label_4d4f30;
        case 0x4d4f34u: goto label_4d4f34;
        case 0x4d4f38u: goto label_4d4f38;
        case 0x4d4f3cu: goto label_4d4f3c;
        case 0x4d4f40u: goto label_4d4f40;
        case 0x4d4f44u: goto label_4d4f44;
        case 0x4d4f48u: goto label_4d4f48;
        case 0x4d4f4cu: goto label_4d4f4c;
        case 0x4d4f50u: goto label_4d4f50;
        case 0x4d4f54u: goto label_4d4f54;
        case 0x4d4f58u: goto label_4d4f58;
        case 0x4d4f5cu: goto label_4d4f5c;
        case 0x4d4f60u: goto label_4d4f60;
        case 0x4d4f64u: goto label_4d4f64;
        case 0x4d4f68u: goto label_4d4f68;
        case 0x4d4f6cu: goto label_4d4f6c;
        case 0x4d4f70u: goto label_4d4f70;
        case 0x4d4f74u: goto label_4d4f74;
        case 0x4d4f78u: goto label_4d4f78;
        case 0x4d4f7cu: goto label_4d4f7c;
        case 0x4d4f80u: goto label_4d4f80;
        case 0x4d4f84u: goto label_4d4f84;
        case 0x4d4f88u: goto label_4d4f88;
        case 0x4d4f8cu: goto label_4d4f8c;
        case 0x4d4f90u: goto label_4d4f90;
        case 0x4d4f94u: goto label_4d4f94;
        case 0x4d4f98u: goto label_4d4f98;
        case 0x4d4f9cu: goto label_4d4f9c;
        case 0x4d4fa0u: goto label_4d4fa0;
        case 0x4d4fa4u: goto label_4d4fa4;
        case 0x4d4fa8u: goto label_4d4fa8;
        case 0x4d4facu: goto label_4d4fac;
        case 0x4d4fb0u: goto label_4d4fb0;
        case 0x4d4fb4u: goto label_4d4fb4;
        case 0x4d4fb8u: goto label_4d4fb8;
        case 0x4d4fbcu: goto label_4d4fbc;
        case 0x4d4fc0u: goto label_4d4fc0;
        case 0x4d4fc4u: goto label_4d4fc4;
        case 0x4d4fc8u: goto label_4d4fc8;
        case 0x4d4fccu: goto label_4d4fcc;
        case 0x4d4fd0u: goto label_4d4fd0;
        case 0x4d4fd4u: goto label_4d4fd4;
        case 0x4d4fd8u: goto label_4d4fd8;
        case 0x4d4fdcu: goto label_4d4fdc;
        case 0x4d4fe0u: goto label_4d4fe0;
        case 0x4d4fe4u: goto label_4d4fe4;
        case 0x4d4fe8u: goto label_4d4fe8;
        case 0x4d4fecu: goto label_4d4fec;
        case 0x4d4ff0u: goto label_4d4ff0;
        case 0x4d4ff4u: goto label_4d4ff4;
        case 0x4d4ff8u: goto label_4d4ff8;
        case 0x4d4ffcu: goto label_4d4ffc;
        case 0x4d5000u: goto label_4d5000;
        case 0x4d5004u: goto label_4d5004;
        case 0x4d5008u: goto label_4d5008;
        case 0x4d500cu: goto label_4d500c;
        case 0x4d5010u: goto label_4d5010;
        case 0x4d5014u: goto label_4d5014;
        case 0x4d5018u: goto label_4d5018;
        case 0x4d501cu: goto label_4d501c;
        case 0x4d5020u: goto label_4d5020;
        case 0x4d5024u: goto label_4d5024;
        case 0x4d5028u: goto label_4d5028;
        case 0x4d502cu: goto label_4d502c;
        case 0x4d5030u: goto label_4d5030;
        case 0x4d5034u: goto label_4d5034;
        case 0x4d5038u: goto label_4d5038;
        case 0x4d503cu: goto label_4d503c;
        case 0x4d5040u: goto label_4d5040;
        case 0x4d5044u: goto label_4d5044;
        case 0x4d5048u: goto label_4d5048;
        case 0x4d504cu: goto label_4d504c;
        case 0x4d5050u: goto label_4d5050;
        case 0x4d5054u: goto label_4d5054;
        case 0x4d5058u: goto label_4d5058;
        case 0x4d505cu: goto label_4d505c;
        case 0x4d5060u: goto label_4d5060;
        case 0x4d5064u: goto label_4d5064;
        case 0x4d5068u: goto label_4d5068;
        case 0x4d506cu: goto label_4d506c;
        case 0x4d5070u: goto label_4d5070;
        case 0x4d5074u: goto label_4d5074;
        case 0x4d5078u: goto label_4d5078;
        case 0x4d507cu: goto label_4d507c;
        case 0x4d5080u: goto label_4d5080;
        case 0x4d5084u: goto label_4d5084;
        case 0x4d5088u: goto label_4d5088;
        case 0x4d508cu: goto label_4d508c;
        case 0x4d5090u: goto label_4d5090;
        case 0x4d5094u: goto label_4d5094;
        case 0x4d5098u: goto label_4d5098;
        case 0x4d509cu: goto label_4d509c;
        case 0x4d50a0u: goto label_4d50a0;
        case 0x4d50a4u: goto label_4d50a4;
        case 0x4d50a8u: goto label_4d50a8;
        case 0x4d50acu: goto label_4d50ac;
        case 0x4d50b0u: goto label_4d50b0;
        case 0x4d50b4u: goto label_4d50b4;
        case 0x4d50b8u: goto label_4d50b8;
        case 0x4d50bcu: goto label_4d50bc;
        case 0x4d50c0u: goto label_4d50c0;
        case 0x4d50c4u: goto label_4d50c4;
        case 0x4d50c8u: goto label_4d50c8;
        case 0x4d50ccu: goto label_4d50cc;
        case 0x4d50d0u: goto label_4d50d0;
        case 0x4d50d4u: goto label_4d50d4;
        case 0x4d50d8u: goto label_4d50d8;
        case 0x4d50dcu: goto label_4d50dc;
        case 0x4d50e0u: goto label_4d50e0;
        case 0x4d50e4u: goto label_4d50e4;
        case 0x4d50e8u: goto label_4d50e8;
        case 0x4d50ecu: goto label_4d50ec;
        case 0x4d50f0u: goto label_4d50f0;
        case 0x4d50f4u: goto label_4d50f4;
        case 0x4d50f8u: goto label_4d50f8;
        case 0x4d50fcu: goto label_4d50fc;
        case 0x4d5100u: goto label_4d5100;
        case 0x4d5104u: goto label_4d5104;
        case 0x4d5108u: goto label_4d5108;
        case 0x4d510cu: goto label_4d510c;
        case 0x4d5110u: goto label_4d5110;
        case 0x4d5114u: goto label_4d5114;
        case 0x4d5118u: goto label_4d5118;
        case 0x4d511cu: goto label_4d511c;
        case 0x4d5120u: goto label_4d5120;
        case 0x4d5124u: goto label_4d5124;
        case 0x4d5128u: goto label_4d5128;
        case 0x4d512cu: goto label_4d512c;
        case 0x4d5130u: goto label_4d5130;
        case 0x4d5134u: goto label_4d5134;
        case 0x4d5138u: goto label_4d5138;
        case 0x4d513cu: goto label_4d513c;
        case 0x4d5140u: goto label_4d5140;
        case 0x4d5144u: goto label_4d5144;
        case 0x4d5148u: goto label_4d5148;
        case 0x4d514cu: goto label_4d514c;
        case 0x4d5150u: goto label_4d5150;
        case 0x4d5154u: goto label_4d5154;
        case 0x4d5158u: goto label_4d5158;
        case 0x4d515cu: goto label_4d515c;
        case 0x4d5160u: goto label_4d5160;
        case 0x4d5164u: goto label_4d5164;
        case 0x4d5168u: goto label_4d5168;
        case 0x4d516cu: goto label_4d516c;
        case 0x4d5170u: goto label_4d5170;
        case 0x4d5174u: goto label_4d5174;
        case 0x4d5178u: goto label_4d5178;
        case 0x4d517cu: goto label_4d517c;
        case 0x4d5180u: goto label_4d5180;
        case 0x4d5184u: goto label_4d5184;
        case 0x4d5188u: goto label_4d5188;
        case 0x4d518cu: goto label_4d518c;
        case 0x4d5190u: goto label_4d5190;
        case 0x4d5194u: goto label_4d5194;
        case 0x4d5198u: goto label_4d5198;
        case 0x4d519cu: goto label_4d519c;
        case 0x4d51a0u: goto label_4d51a0;
        case 0x4d51a4u: goto label_4d51a4;
        case 0x4d51a8u: goto label_4d51a8;
        case 0x4d51acu: goto label_4d51ac;
        case 0x4d51b0u: goto label_4d51b0;
        case 0x4d51b4u: goto label_4d51b4;
        case 0x4d51b8u: goto label_4d51b8;
        case 0x4d51bcu: goto label_4d51bc;
        case 0x4d51c0u: goto label_4d51c0;
        case 0x4d51c4u: goto label_4d51c4;
        case 0x4d51c8u: goto label_4d51c8;
        case 0x4d51ccu: goto label_4d51cc;
        case 0x4d51d0u: goto label_4d51d0;
        case 0x4d51d4u: goto label_4d51d4;
        case 0x4d51d8u: goto label_4d51d8;
        case 0x4d51dcu: goto label_4d51dc;
        case 0x4d51e0u: goto label_4d51e0;
        case 0x4d51e4u: goto label_4d51e4;
        case 0x4d51e8u: goto label_4d51e8;
        case 0x4d51ecu: goto label_4d51ec;
        case 0x4d51f0u: goto label_4d51f0;
        case 0x4d51f4u: goto label_4d51f4;
        case 0x4d51f8u: goto label_4d51f8;
        case 0x4d51fcu: goto label_4d51fc;
        case 0x4d5200u: goto label_4d5200;
        case 0x4d5204u: goto label_4d5204;
        case 0x4d5208u: goto label_4d5208;
        case 0x4d520cu: goto label_4d520c;
        case 0x4d5210u: goto label_4d5210;
        case 0x4d5214u: goto label_4d5214;
        case 0x4d5218u: goto label_4d5218;
        case 0x4d521cu: goto label_4d521c;
        case 0x4d5220u: goto label_4d5220;
        case 0x4d5224u: goto label_4d5224;
        case 0x4d5228u: goto label_4d5228;
        case 0x4d522cu: goto label_4d522c;
        case 0x4d5230u: goto label_4d5230;
        case 0x4d5234u: goto label_4d5234;
        case 0x4d5238u: goto label_4d5238;
        case 0x4d523cu: goto label_4d523c;
        case 0x4d5240u: goto label_4d5240;
        case 0x4d5244u: goto label_4d5244;
        case 0x4d5248u: goto label_4d5248;
        case 0x4d524cu: goto label_4d524c;
        case 0x4d5250u: goto label_4d5250;
        case 0x4d5254u: goto label_4d5254;
        case 0x4d5258u: goto label_4d5258;
        case 0x4d525cu: goto label_4d525c;
        case 0x4d5260u: goto label_4d5260;
        case 0x4d5264u: goto label_4d5264;
        case 0x4d5268u: goto label_4d5268;
        case 0x4d526cu: goto label_4d526c;
        case 0x4d5270u: goto label_4d5270;
        case 0x4d5274u: goto label_4d5274;
        case 0x4d5278u: goto label_4d5278;
        case 0x4d527cu: goto label_4d527c;
        case 0x4d5280u: goto label_4d5280;
        case 0x4d5284u: goto label_4d5284;
        case 0x4d5288u: goto label_4d5288;
        case 0x4d528cu: goto label_4d528c;
        case 0x4d5290u: goto label_4d5290;
        case 0x4d5294u: goto label_4d5294;
        case 0x4d5298u: goto label_4d5298;
        case 0x4d529cu: goto label_4d529c;
        case 0x4d52a0u: goto label_4d52a0;
        case 0x4d52a4u: goto label_4d52a4;
        case 0x4d52a8u: goto label_4d52a8;
        case 0x4d52acu: goto label_4d52ac;
        case 0x4d52b0u: goto label_4d52b0;
        case 0x4d52b4u: goto label_4d52b4;
        case 0x4d52b8u: goto label_4d52b8;
        case 0x4d52bcu: goto label_4d52bc;
        case 0x4d52c0u: goto label_4d52c0;
        case 0x4d52c4u: goto label_4d52c4;
        case 0x4d52c8u: goto label_4d52c8;
        case 0x4d52ccu: goto label_4d52cc;
        case 0x4d52d0u: goto label_4d52d0;
        case 0x4d52d4u: goto label_4d52d4;
        case 0x4d52d8u: goto label_4d52d8;
        case 0x4d52dcu: goto label_4d52dc;
        case 0x4d52e0u: goto label_4d52e0;
        case 0x4d52e4u: goto label_4d52e4;
        case 0x4d52e8u: goto label_4d52e8;
        case 0x4d52ecu: goto label_4d52ec;
        case 0x4d52f0u: goto label_4d52f0;
        case 0x4d52f4u: goto label_4d52f4;
        case 0x4d52f8u: goto label_4d52f8;
        case 0x4d52fcu: goto label_4d52fc;
        case 0x4d5300u: goto label_4d5300;
        case 0x4d5304u: goto label_4d5304;
        case 0x4d5308u: goto label_4d5308;
        case 0x4d530cu: goto label_4d530c;
        case 0x4d5310u: goto label_4d5310;
        case 0x4d5314u: goto label_4d5314;
        case 0x4d5318u: goto label_4d5318;
        case 0x4d531cu: goto label_4d531c;
        case 0x4d5320u: goto label_4d5320;
        case 0x4d5324u: goto label_4d5324;
        case 0x4d5328u: goto label_4d5328;
        case 0x4d532cu: goto label_4d532c;
        case 0x4d5330u: goto label_4d5330;
        case 0x4d5334u: goto label_4d5334;
        case 0x4d5338u: goto label_4d5338;
        case 0x4d533cu: goto label_4d533c;
        case 0x4d5340u: goto label_4d5340;
        case 0x4d5344u: goto label_4d5344;
        case 0x4d5348u: goto label_4d5348;
        case 0x4d534cu: goto label_4d534c;
        case 0x4d5350u: goto label_4d5350;
        case 0x4d5354u: goto label_4d5354;
        case 0x4d5358u: goto label_4d5358;
        case 0x4d535cu: goto label_4d535c;
        case 0x4d5360u: goto label_4d5360;
        case 0x4d5364u: goto label_4d5364;
        case 0x4d5368u: goto label_4d5368;
        case 0x4d536cu: goto label_4d536c;
        case 0x4d5370u: goto label_4d5370;
        case 0x4d5374u: goto label_4d5374;
        case 0x4d5378u: goto label_4d5378;
        case 0x4d537cu: goto label_4d537c;
        case 0x4d5380u: goto label_4d5380;
        case 0x4d5384u: goto label_4d5384;
        case 0x4d5388u: goto label_4d5388;
        case 0x4d538cu: goto label_4d538c;
        case 0x4d5390u: goto label_4d5390;
        case 0x4d5394u: goto label_4d5394;
        case 0x4d5398u: goto label_4d5398;
        case 0x4d539cu: goto label_4d539c;
        case 0x4d53a0u: goto label_4d53a0;
        case 0x4d53a4u: goto label_4d53a4;
        case 0x4d53a8u: goto label_4d53a8;
        case 0x4d53acu: goto label_4d53ac;
        case 0x4d53b0u: goto label_4d53b0;
        case 0x4d53b4u: goto label_4d53b4;
        case 0x4d53b8u: goto label_4d53b8;
        case 0x4d53bcu: goto label_4d53bc;
        case 0x4d53c0u: goto label_4d53c0;
        case 0x4d53c4u: goto label_4d53c4;
        case 0x4d53c8u: goto label_4d53c8;
        case 0x4d53ccu: goto label_4d53cc;
        case 0x4d53d0u: goto label_4d53d0;
        case 0x4d53d4u: goto label_4d53d4;
        case 0x4d53d8u: goto label_4d53d8;
        case 0x4d53dcu: goto label_4d53dc;
        case 0x4d53e0u: goto label_4d53e0;
        case 0x4d53e4u: goto label_4d53e4;
        case 0x4d53e8u: goto label_4d53e8;
        case 0x4d53ecu: goto label_4d53ec;
        case 0x4d53f0u: goto label_4d53f0;
        case 0x4d53f4u: goto label_4d53f4;
        case 0x4d53f8u: goto label_4d53f8;
        case 0x4d53fcu: goto label_4d53fc;
        case 0x4d5400u: goto label_4d5400;
        case 0x4d5404u: goto label_4d5404;
        case 0x4d5408u: goto label_4d5408;
        case 0x4d540cu: goto label_4d540c;
        case 0x4d5410u: goto label_4d5410;
        case 0x4d5414u: goto label_4d5414;
        case 0x4d5418u: goto label_4d5418;
        case 0x4d541cu: goto label_4d541c;
        case 0x4d5420u: goto label_4d5420;
        case 0x4d5424u: goto label_4d5424;
        case 0x4d5428u: goto label_4d5428;
        case 0x4d542cu: goto label_4d542c;
        case 0x4d5430u: goto label_4d5430;
        case 0x4d5434u: goto label_4d5434;
        case 0x4d5438u: goto label_4d5438;
        case 0x4d543cu: goto label_4d543c;
        case 0x4d5440u: goto label_4d5440;
        case 0x4d5444u: goto label_4d5444;
        case 0x4d5448u: goto label_4d5448;
        case 0x4d544cu: goto label_4d544c;
        case 0x4d5450u: goto label_4d5450;
        case 0x4d5454u: goto label_4d5454;
        case 0x4d5458u: goto label_4d5458;
        case 0x4d545cu: goto label_4d545c;
        case 0x4d5460u: goto label_4d5460;
        case 0x4d5464u: goto label_4d5464;
        case 0x4d5468u: goto label_4d5468;
        case 0x4d546cu: goto label_4d546c;
        case 0x4d5470u: goto label_4d5470;
        case 0x4d5474u: goto label_4d5474;
        case 0x4d5478u: goto label_4d5478;
        case 0x4d547cu: goto label_4d547c;
        case 0x4d5480u: goto label_4d5480;
        case 0x4d5484u: goto label_4d5484;
        case 0x4d5488u: goto label_4d5488;
        case 0x4d548cu: goto label_4d548c;
        case 0x4d5490u: goto label_4d5490;
        case 0x4d5494u: goto label_4d5494;
        case 0x4d5498u: goto label_4d5498;
        case 0x4d549cu: goto label_4d549c;
        case 0x4d54a0u: goto label_4d54a0;
        case 0x4d54a4u: goto label_4d54a4;
        case 0x4d54a8u: goto label_4d54a8;
        case 0x4d54acu: goto label_4d54ac;
        case 0x4d54b0u: goto label_4d54b0;
        case 0x4d54b4u: goto label_4d54b4;
        case 0x4d54b8u: goto label_4d54b8;
        case 0x4d54bcu: goto label_4d54bc;
        case 0x4d54c0u: goto label_4d54c0;
        case 0x4d54c4u: goto label_4d54c4;
        case 0x4d54c8u: goto label_4d54c8;
        case 0x4d54ccu: goto label_4d54cc;
        case 0x4d54d0u: goto label_4d54d0;
        case 0x4d54d4u: goto label_4d54d4;
        case 0x4d54d8u: goto label_4d54d8;
        case 0x4d54dcu: goto label_4d54dc;
        case 0x4d54e0u: goto label_4d54e0;
        case 0x4d54e4u: goto label_4d54e4;
        case 0x4d54e8u: goto label_4d54e8;
        case 0x4d54ecu: goto label_4d54ec;
        case 0x4d54f0u: goto label_4d54f0;
        case 0x4d54f4u: goto label_4d54f4;
        case 0x4d54f8u: goto label_4d54f8;
        case 0x4d54fcu: goto label_4d54fc;
        case 0x4d5500u: goto label_4d5500;
        case 0x4d5504u: goto label_4d5504;
        case 0x4d5508u: goto label_4d5508;
        case 0x4d550cu: goto label_4d550c;
        case 0x4d5510u: goto label_4d5510;
        case 0x4d5514u: goto label_4d5514;
        case 0x4d5518u: goto label_4d5518;
        case 0x4d551cu: goto label_4d551c;
        case 0x4d5520u: goto label_4d5520;
        case 0x4d5524u: goto label_4d5524;
        case 0x4d5528u: goto label_4d5528;
        case 0x4d552cu: goto label_4d552c;
        case 0x4d5530u: goto label_4d5530;
        case 0x4d5534u: goto label_4d5534;
        case 0x4d5538u: goto label_4d5538;
        case 0x4d553cu: goto label_4d553c;
        case 0x4d5540u: goto label_4d5540;
        case 0x4d5544u: goto label_4d5544;
        case 0x4d5548u: goto label_4d5548;
        case 0x4d554cu: goto label_4d554c;
        case 0x4d5550u: goto label_4d5550;
        case 0x4d5554u: goto label_4d5554;
        case 0x4d5558u: goto label_4d5558;
        case 0x4d555cu: goto label_4d555c;
        case 0x4d5560u: goto label_4d5560;
        case 0x4d5564u: goto label_4d5564;
        case 0x4d5568u: goto label_4d5568;
        case 0x4d556cu: goto label_4d556c;
        case 0x4d5570u: goto label_4d5570;
        case 0x4d5574u: goto label_4d5574;
        case 0x4d5578u: goto label_4d5578;
        case 0x4d557cu: goto label_4d557c;
        case 0x4d5580u: goto label_4d5580;
        case 0x4d5584u: goto label_4d5584;
        case 0x4d5588u: goto label_4d5588;
        case 0x4d558cu: goto label_4d558c;
        case 0x4d5590u: goto label_4d5590;
        case 0x4d5594u: goto label_4d5594;
        case 0x4d5598u: goto label_4d5598;
        case 0x4d559cu: goto label_4d559c;
        case 0x4d55a0u: goto label_4d55a0;
        case 0x4d55a4u: goto label_4d55a4;
        case 0x4d55a8u: goto label_4d55a8;
        case 0x4d55acu: goto label_4d55ac;
        case 0x4d55b0u: goto label_4d55b0;
        case 0x4d55b4u: goto label_4d55b4;
        case 0x4d55b8u: goto label_4d55b8;
        case 0x4d55bcu: goto label_4d55bc;
        case 0x4d55c0u: goto label_4d55c0;
        case 0x4d55c4u: goto label_4d55c4;
        case 0x4d55c8u: goto label_4d55c8;
        case 0x4d55ccu: goto label_4d55cc;
        case 0x4d55d0u: goto label_4d55d0;
        case 0x4d55d4u: goto label_4d55d4;
        case 0x4d55d8u: goto label_4d55d8;
        case 0x4d55dcu: goto label_4d55dc;
        case 0x4d55e0u: goto label_4d55e0;
        case 0x4d55e4u: goto label_4d55e4;
        case 0x4d55e8u: goto label_4d55e8;
        case 0x4d55ecu: goto label_4d55ec;
        case 0x4d55f0u: goto label_4d55f0;
        case 0x4d55f4u: goto label_4d55f4;
        case 0x4d55f8u: goto label_4d55f8;
        case 0x4d55fcu: goto label_4d55fc;
        case 0x4d5600u: goto label_4d5600;
        case 0x4d5604u: goto label_4d5604;
        case 0x4d5608u: goto label_4d5608;
        case 0x4d560cu: goto label_4d560c;
        case 0x4d5610u: goto label_4d5610;
        case 0x4d5614u: goto label_4d5614;
        case 0x4d5618u: goto label_4d5618;
        case 0x4d561cu: goto label_4d561c;
        case 0x4d5620u: goto label_4d5620;
        case 0x4d5624u: goto label_4d5624;
        case 0x4d5628u: goto label_4d5628;
        case 0x4d562cu: goto label_4d562c;
        case 0x4d5630u: goto label_4d5630;
        case 0x4d5634u: goto label_4d5634;
        case 0x4d5638u: goto label_4d5638;
        case 0x4d563cu: goto label_4d563c;
        case 0x4d5640u: goto label_4d5640;
        case 0x4d5644u: goto label_4d5644;
        case 0x4d5648u: goto label_4d5648;
        case 0x4d564cu: goto label_4d564c;
        case 0x4d5650u: goto label_4d5650;
        case 0x4d5654u: goto label_4d5654;
        case 0x4d5658u: goto label_4d5658;
        case 0x4d565cu: goto label_4d565c;
        case 0x4d5660u: goto label_4d5660;
        case 0x4d5664u: goto label_4d5664;
        case 0x4d5668u: goto label_4d5668;
        case 0x4d566cu: goto label_4d566c;
        case 0x4d5670u: goto label_4d5670;
        case 0x4d5674u: goto label_4d5674;
        case 0x4d5678u: goto label_4d5678;
        case 0x4d567cu: goto label_4d567c;
        case 0x4d5680u: goto label_4d5680;
        case 0x4d5684u: goto label_4d5684;
        case 0x4d5688u: goto label_4d5688;
        case 0x4d568cu: goto label_4d568c;
        case 0x4d5690u: goto label_4d5690;
        case 0x4d5694u: goto label_4d5694;
        case 0x4d5698u: goto label_4d5698;
        case 0x4d569cu: goto label_4d569c;
        case 0x4d56a0u: goto label_4d56a0;
        case 0x4d56a4u: goto label_4d56a4;
        case 0x4d56a8u: goto label_4d56a8;
        case 0x4d56acu: goto label_4d56ac;
        case 0x4d56b0u: goto label_4d56b0;
        case 0x4d56b4u: goto label_4d56b4;
        case 0x4d56b8u: goto label_4d56b8;
        case 0x4d56bcu: goto label_4d56bc;
        case 0x4d56c0u: goto label_4d56c0;
        case 0x4d56c4u: goto label_4d56c4;
        case 0x4d56c8u: goto label_4d56c8;
        case 0x4d56ccu: goto label_4d56cc;
        case 0x4d56d0u: goto label_4d56d0;
        case 0x4d56d4u: goto label_4d56d4;
        case 0x4d56d8u: goto label_4d56d8;
        case 0x4d56dcu: goto label_4d56dc;
        case 0x4d56e0u: goto label_4d56e0;
        case 0x4d56e4u: goto label_4d56e4;
        case 0x4d56e8u: goto label_4d56e8;
        case 0x4d56ecu: goto label_4d56ec;
        case 0x4d56f0u: goto label_4d56f0;
        case 0x4d56f4u: goto label_4d56f4;
        case 0x4d56f8u: goto label_4d56f8;
        case 0x4d56fcu: goto label_4d56fc;
        case 0x4d5700u: goto label_4d5700;
        case 0x4d5704u: goto label_4d5704;
        case 0x4d5708u: goto label_4d5708;
        case 0x4d570cu: goto label_4d570c;
        case 0x4d5710u: goto label_4d5710;
        case 0x4d5714u: goto label_4d5714;
        case 0x4d5718u: goto label_4d5718;
        case 0x4d571cu: goto label_4d571c;
        case 0x4d5720u: goto label_4d5720;
        case 0x4d5724u: goto label_4d5724;
        case 0x4d5728u: goto label_4d5728;
        case 0x4d572cu: goto label_4d572c;
        case 0x4d5730u: goto label_4d5730;
        case 0x4d5734u: goto label_4d5734;
        case 0x4d5738u: goto label_4d5738;
        case 0x4d573cu: goto label_4d573c;
        case 0x4d5740u: goto label_4d5740;
        case 0x4d5744u: goto label_4d5744;
        case 0x4d5748u: goto label_4d5748;
        case 0x4d574cu: goto label_4d574c;
        case 0x4d5750u: goto label_4d5750;
        case 0x4d5754u: goto label_4d5754;
        case 0x4d5758u: goto label_4d5758;
        case 0x4d575cu: goto label_4d575c;
        case 0x4d5760u: goto label_4d5760;
        case 0x4d5764u: goto label_4d5764;
        case 0x4d5768u: goto label_4d5768;
        case 0x4d576cu: goto label_4d576c;
        case 0x4d5770u: goto label_4d5770;
        case 0x4d5774u: goto label_4d5774;
        case 0x4d5778u: goto label_4d5778;
        case 0x4d577cu: goto label_4d577c;
        case 0x4d5780u: goto label_4d5780;
        case 0x4d5784u: goto label_4d5784;
        case 0x4d5788u: goto label_4d5788;
        case 0x4d578cu: goto label_4d578c;
        case 0x4d5790u: goto label_4d5790;
        case 0x4d5794u: goto label_4d5794;
        case 0x4d5798u: goto label_4d5798;
        case 0x4d579cu: goto label_4d579c;
        default: break;
    }

    ctx->pc = 0x4d4f20u;

label_4d4f20:
    // 0x4d4f20: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x4d4f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_4d4f24:
    // 0x4d4f24: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x4d4f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_4d4f28:
    // 0x4d4f28: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4d4f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4d4f2c:
    // 0x4d4f2c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4d4f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4d4f30:
    // 0x4d4f30: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4d4f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4d4f34:
    // 0x4d4f34: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4d4f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4d4f38:
    // 0x4d4f38: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4d4f38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d4f3c:
    // 0x4d4f3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d4f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4d4f40:
    // 0x4d4f40: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4d4f40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4d4f44:
    // 0x4d4f44: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d4f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d4f48:
    // 0x4d4f48: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x4d4f48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4d4f4c:
    // 0x4d4f4c: 0x90820090  lbu         $v0, 0x90($a0)
    ctx->pc = 0x4d4f4cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 144)));
label_4d4f50:
    // 0x4d4f50: 0x10400086  beqz        $v0, . + 4 + (0x86 << 2)
label_4d4f54:
    if (ctx->pc == 0x4D4F54u) {
        ctx->pc = 0x4D4F54u;
            // 0x4d4f54: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D4F58u;
        goto label_4d4f58;
    }
    ctx->pc = 0x4D4F50u;
    {
        const bool branch_taken_0x4d4f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D4F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4F50u;
            // 0x4d4f54: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d4f50) {
            ctx->pc = 0x4D516Cu;
            goto label_4d516c;
        }
    }
    ctx->pc = 0x4D4F58u;
label_4d4f58:
    // 0x4d4f58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d4f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d4f5c:
    // 0x4d4f5c: 0xc04f278  jal         func_13C9E0
label_4d4f60:
    if (ctx->pc == 0x4D4F60u) {
        ctx->pc = 0x4D4F60u;
            // 0x4d4f60: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->pc = 0x4D4F64u;
        goto label_4d4f64;
    }
    ctx->pc = 0x4D4F5Cu;
    SET_GPR_U32(ctx, 31, 0x4D4F64u);
    ctx->pc = 0x4D4F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4F5Cu;
            // 0x4d4f60: 0x26650020  addiu       $a1, $s3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4F64u; }
        if (ctx->pc != 0x4D4F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4F64u; }
        if (ctx->pc != 0x4D4F64u) { return; }
    }
    ctx->pc = 0x4D4F64u;
label_4d4f64:
    // 0x4d4f64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d4f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d4f68:
    // 0x4d4f68: 0xc04ce80  jal         func_133A00
label_4d4f6c:
    if (ctx->pc == 0x4D4F6Cu) {
        ctx->pc = 0x4D4F6Cu;
            // 0x4d4f6c: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x4D4F70u;
        goto label_4d4f70;
    }
    ctx->pc = 0x4D4F68u;
    SET_GPR_U32(ctx, 31, 0x4D4F70u);
    ctx->pc = 0x4D4F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4F68u;
            // 0x4d4f6c: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4F70u; }
        if (ctx->pc != 0x4D4F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4F70u; }
        if (ctx->pc != 0x4D4F70u) { return; }
    }
    ctx->pc = 0x4D4F70u;
label_4d4f70:
    // 0x4d4f70: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4d4f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4d4f74:
    // 0x4d4f74: 0x9266004c  lbu         $a2, 0x4C($s3)
    ctx->pc = 0x4d4f74u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 76)));
label_4d4f78:
    // 0x4d4f78: 0x8c43d130  lw          $v1, -0x2ED0($v0)
    ctx->pc = 0x4d4f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4d4f7c:
    // 0x4d4f7c: 0x8e550000  lw          $s5, 0x0($s2)
    ctx->pc = 0x4d4f7cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4d4f80:
    // 0x4d4f80: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4d4f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4d4f84:
    // 0x4d4f84: 0x8c740130  lw          $s4, 0x130($v1)
    ctx->pc = 0x4d4f84u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_4d4f88:
    // 0x4d4f88: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x4d4f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_4d4f8c:
    // 0x4d4f8c: 0xc07698c  jal         func_1DA630
label_4d4f90:
    if (ctx->pc == 0x4D4F90u) {
        ctx->pc = 0x4D4F90u;
            // 0x4d4f90: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D4F94u;
        goto label_4d4f94;
    }
    ctx->pc = 0x4D4F8Cu;
    SET_GPR_U32(ctx, 31, 0x4D4F94u);
    ctx->pc = 0x4D4F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4F8Cu;
            // 0x4d4f90: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4F94u; }
        if (ctx->pc != 0x4D4F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4F94u; }
        if (ctx->pc != 0x4D4F94u) { return; }
    }
    ctx->pc = 0x4D4F94u;
label_4d4f94:
    // 0x4d4f94: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4d4f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4d4f98:
    // 0x4d4f98: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_4d4f9c:
    if (ctx->pc == 0x4D4F9Cu) {
        ctx->pc = 0x4D4FA0u;
        goto label_4d4fa0;
    }
    ctx->pc = 0x4D4F98u;
    {
        const bool branch_taken_0x4d4f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4d4f98) {
            ctx->pc = 0x4D4FA8u;
            goto label_4d4fa8;
        }
    }
    ctx->pc = 0x4D4FA0u;
label_4d4fa0:
    // 0x4d4fa0: 0x10000033  b           . + 4 + (0x33 << 2)
label_4d4fa4:
    if (ctx->pc == 0x4D4FA4u) {
        ctx->pc = 0x4D4FA4u;
            // 0x4d4fa4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4D4FA8u;
        goto label_4d4fa8;
    }
    ctx->pc = 0x4D4FA0u;
    {
        const bool branch_taken_0x4d4fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D4FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4FA0u;
            // 0x4d4fa4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d4fa0) {
            ctx->pc = 0x4D5070u;
            goto label_4d5070;
        }
    }
    ctx->pc = 0x4D4FA8u;
label_4d4fa8:
    // 0x4d4fa8: 0xc0576f4  jal         func_15DBD0
label_4d4fac:
    if (ctx->pc == 0x4D4FACu) {
        ctx->pc = 0x4D4FB0u;
        goto label_4d4fb0;
    }
    ctx->pc = 0x4D4FA8u;
    SET_GPR_U32(ctx, 31, 0x4D4FB0u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4FB0u; }
        if (ctx->pc != 0x4D4FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4FB0u; }
        if (ctx->pc != 0x4D4FB0u) { return; }
    }
    ctx->pc = 0x4D4FB0u;
label_4d4fb0:
    // 0x4d4fb0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4d4fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4d4fb4:
    // 0x4d4fb4: 0xc076984  jal         func_1DA610
label_4d4fb8:
    if (ctx->pc == 0x4D4FB8u) {
        ctx->pc = 0x4D4FB8u;
            // 0x4d4fb8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D4FBCu;
        goto label_4d4fbc;
    }
    ctx->pc = 0x4D4FB4u;
    SET_GPR_U32(ctx, 31, 0x4D4FBCu);
    ctx->pc = 0x4D4FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D4FB4u;
            // 0x4d4fb8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4FBCu; }
        if (ctx->pc != 0x4D4FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D4FBCu; }
        if (ctx->pc != 0x4D4FBCu) { return; }
    }
    ctx->pc = 0x4D4FBCu;
label_4d4fbc:
    // 0x4d4fbc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4d4fbcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d4fc0:
    // 0x4d4fc0: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x4d4fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_4d4fc4:
    // 0x4d4fc4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4d4fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4d4fc8:
    // 0x4d4fc8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4d4fc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d4fcc:
    // 0x4d4fcc: 0xc442c9d0  lwc1        $f2, -0x3630($v0)
    ctx->pc = 0x4d4fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4d4fd0:
    // 0x4d4fd0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4d4fd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d4fd4:
    // 0x4d4fd4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4d4fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4d4fd8:
    // 0x4d4fd8: 0xc441c9d8  lwc1        $f1, -0x3628($v0)
    ctx->pc = 0x4d4fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4d4fdc:
    // 0x4d4fdc: 0xe7a20100  swc1        $f2, 0x100($sp)
    ctx->pc = 0x4d4fdcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_4d4fe0:
    // 0x4d4fe0: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4d4fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4d4fe4:
    // 0x4d4fe4: 0xc440c9dc  lwc1        $f0, -0x3624($v0)
    ctx->pc = 0x4d4fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4d4fe8:
    // 0x4d4fe8: 0xe7a10108  swc1        $f1, 0x108($sp)
    ctx->pc = 0x4d4fe8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_4d4fec:
    // 0x4d4fec: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4d4fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4d4ff0:
    // 0x4d4ff0: 0x8c42c9d4  lw          $v0, -0x362C($v0)
    ctx->pc = 0x4d4ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953428)));
label_4d4ff4:
    // 0x4d4ff4: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x4d4ff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_4d4ff8:
    // 0x4d4ff8: 0xafa20104  sw          $v0, 0x104($sp)
    ctx->pc = 0x4d4ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
label_4d4ffc:
    // 0x4d4ffc: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x4d4ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4d5000:
    // 0x4d5000: 0xc04cca0  jal         func_133280
label_4d5004:
    if (ctx->pc == 0x4D5004u) {
        ctx->pc = 0x4D5004u;
            // 0x4d5004: 0xe7a00104  swc1        $f0, 0x104($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
        ctx->pc = 0x4D5008u;
        goto label_4d5008;
    }
    ctx->pc = 0x4D5000u;
    SET_GPR_U32(ctx, 31, 0x4D5008u);
    ctx->pc = 0x4D5004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5000u;
            // 0x4d5004: 0xe7a00104  swc1        $f0, 0x104($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5008u; }
        if (ctx->pc != 0x4D5008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5008u; }
        if (ctx->pc != 0x4D5008u) { return; }
    }
    ctx->pc = 0x4D5008u;
label_4d5008:
    // 0x4d5008: 0xc076980  jal         func_1DA600
label_4d500c:
    if (ctx->pc == 0x4D500Cu) {
        ctx->pc = 0x4D500Cu;
            // 0x4d500c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D5010u;
        goto label_4d5010;
    }
    ctx->pc = 0x4D5008u;
    SET_GPR_U32(ctx, 31, 0x4D5010u);
    ctx->pc = 0x4D500Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5008u;
            // 0x4d500c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5010u; }
        if (ctx->pc != 0x4D5010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5010u; }
        if (ctx->pc != 0x4D5010u) { return; }
    }
    ctx->pc = 0x4D5010u;
label_4d5010:
    // 0x4d5010: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4d5010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d5014:
    // 0x4d5014: 0xc04cc34  jal         func_1330D0
label_4d5018:
    if (ctx->pc == 0x4D5018u) {
        ctx->pc = 0x4D5018u;
            // 0x4d5018: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x4D501Cu;
        goto label_4d501c;
    }
    ctx->pc = 0x4D5014u;
    SET_GPR_U32(ctx, 31, 0x4D501Cu);
    ctx->pc = 0x4D5018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5014u;
            // 0x4d5018: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D501Cu; }
        if (ctx->pc != 0x4D501Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D501Cu; }
        if (ctx->pc != 0x4D501Cu) { return; }
    }
    ctx->pc = 0x4D501Cu;
label_4d501c:
    // 0x4d501c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4d501cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4d5020:
    // 0x4d5020: 0xc4417d38  lwc1        $f1, 0x7D38($v0)
    ctx->pc = 0x4d5020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4d5024:
    // 0x4d5024: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4d5024u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4d5028:
    // 0x4d5028: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_4d502c:
    if (ctx->pc == 0x4D502Cu) {
        ctx->pc = 0x4D502Cu;
            // 0x4d502c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D5030u;
        goto label_4d5030;
    }
    ctx->pc = 0x4D5028u;
    {
        const bool branch_taken_0x4d5028 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4d5028) {
            ctx->pc = 0x4D502Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5028u;
            // 0x4d502c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D5038u;
            goto label_4d5038;
        }
    }
    ctx->pc = 0x4D5030u;
label_4d5030:
    // 0x4d5030: 0x1000000f  b           . + 4 + (0xF << 2)
label_4d5034:
    if (ctx->pc == 0x4D5034u) {
        ctx->pc = 0x4D5034u;
            // 0x4d5034: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4D5038u;
        goto label_4d5038;
    }
    ctx->pc = 0x4D5030u;
    {
        const bool branch_taken_0x4d5030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D5034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5030u;
            // 0x4d5034: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d5030) {
            ctx->pc = 0x4D5070u;
            goto label_4d5070;
        }
    }
    ctx->pc = 0x4D5038u;
label_4d5038:
    // 0x4d5038: 0xc07697c  jal         func_1DA5F0
label_4d503c:
    if (ctx->pc == 0x4D503Cu) {
        ctx->pc = 0x4D5040u;
        goto label_4d5040;
    }
    ctx->pc = 0x4D5038u;
    SET_GPR_U32(ctx, 31, 0x4D5040u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5040u; }
        if (ctx->pc != 0x4D5040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5040u; }
        if (ctx->pc != 0x4D5040u) { return; }
    }
    ctx->pc = 0x4D5040u;
label_4d5040:
    // 0x4d5040: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4d5040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d5044:
    // 0x4d5044: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x4d5044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_4d5048:
    // 0x4d5048: 0xc04cd60  jal         func_133580
label_4d504c:
    if (ctx->pc == 0x4D504Cu) {
        ctx->pc = 0x4D504Cu;
            // 0x4d504c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D5050u;
        goto label_4d5050;
    }
    ctx->pc = 0x4D5048u;
    SET_GPR_U32(ctx, 31, 0x4D5050u);
    ctx->pc = 0x4D504Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5048u;
            // 0x4d504c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5050u; }
        if (ctx->pc != 0x4D5050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5050u; }
        if (ctx->pc != 0x4D5050u) { return; }
    }
    ctx->pc = 0x4D5050u;
label_4d5050:
    // 0x4d5050: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4d5050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4d5054:
    // 0x4d5054: 0xc04c650  jal         func_131940
label_4d5058:
    if (ctx->pc == 0x4D5058u) {
        ctx->pc = 0x4D5058u;
            // 0x4d5058: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x4D505Cu;
        goto label_4d505c;
    }
    ctx->pc = 0x4D5054u;
    SET_GPR_U32(ctx, 31, 0x4D505Cu);
    ctx->pc = 0x4D5058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5054u;
            // 0x4d5058: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D505Cu; }
        if (ctx->pc != 0x4D505Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D505Cu; }
        if (ctx->pc != 0x4D505Cu) { return; }
    }
    ctx->pc = 0x4D505Cu;
label_4d505c:
    // 0x4d505c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x4d505cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4d5060:
    // 0x4d5060: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4d5060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4d5064:
    // 0x4d5064: 0x2442e320  addiu       $v0, $v0, -0x1CE0
    ctx->pc = 0x4d5064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959904));
label_4d5068:
    // 0x4d5068: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4d5068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4d506c:
    // 0x4d506c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4d506cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4d5070:
    // 0x4d5070: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x4d5070u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_4d5074:
    // 0x4d5074: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_4d5078:
    if (ctx->pc == 0x4D5078u) {
        ctx->pc = 0x4D5078u;
            // 0x4d5078: 0xae620044  sw          $v0, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x4D507Cu;
        goto label_4d507c;
    }
    ctx->pc = 0x4D5074u;
    {
        const bool branch_taken_0x4d5074 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D5078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5074u;
            // 0x4d5078: 0xae620044  sw          $v0, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d5074) {
            ctx->pc = 0x4D5084u;
            goto label_4d5084;
        }
    }
    ctx->pc = 0x4D507Cu;
label_4d507c:
    // 0x4d507c: 0x10000090  b           . + 4 + (0x90 << 2)
label_4d5080:
    if (ctx->pc == 0x4D5080u) {
        ctx->pc = 0x4D5080u;
            // 0x4d5080: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D5084u;
        goto label_4d5084;
    }
    ctx->pc = 0x4D507Cu;
    {
        const bool branch_taken_0x4d507c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D5080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D507Cu;
            // 0x4d5080: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d507c) {
            ctx->pc = 0x4D52C0u;
            goto label_4d52c0;
        }
    }
    ctx->pc = 0x4D5084u;
label_4d5084:
    // 0x4d5084: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d5084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d5088:
    // 0x4d5088: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4d5088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4d508c:
    // 0x4d508c: 0x8c68e3c0  lw          $t0, -0x1C40($v1)
    ctx->pc = 0x4d508cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4d5090:
    // 0x4d5090: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4d5090u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d5094:
    // 0x4d5094: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4d5094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4d5098:
    // 0x4d5098: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x4d5098u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_4d509c:
    // 0x4d509c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d509cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d50a0:
    // 0x4d50a0: 0x86880  sll         $t5, $t0, 2
    ctx->pc = 0x4d50a0u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_4d50a4:
    // 0x4d50a4: 0x8c67e3d8  lw          $a3, -0x1C28($v1)
    ctx->pc = 0x4d50a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_4d50a8:
    // 0x4d50a8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d50a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d50ac:
    // 0x4d50ac: 0x74180  sll         $t0, $a3, 6
    ctx->pc = 0x4d50acu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 7), 6));
label_4d50b0:
    // 0x4d50b0: 0x8c64e360  lw          $a0, -0x1CA0($v1)
    ctx->pc = 0x4d50b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_4d50b4:
    // 0x4d50b4: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x4d50b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_4d50b8:
    // 0x4d50b8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d50b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d50bc:
    // 0x4d50bc: 0x888821  addu        $s1, $a0, $t0
    ctx->pc = 0x4d50bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_4d50c0:
    // 0x4d50c0: 0x8c63e3b0  lw          $v1, -0x1C50($v1)
    ctx->pc = 0x4d50c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_4d50c4:
    // 0x4d50c4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x4d50c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_4d50c8:
    // 0x4d50c8: 0x6d4021  addu        $t0, $v1, $t5
    ctx->pc = 0x4d50c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
label_4d50cc:
    // 0x4d50cc: 0xad110000  sw          $s1, 0x0($t0)
    ctx->pc = 0x4d50ccu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 17));
label_4d50d0:
    // 0x4d50d0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d50d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d50d4:
    // 0x4d50d4: 0x8cece3d8  lw          $t4, -0x1C28($a3)
    ctx->pc = 0x4d50d4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960088)));
label_4d50d8:
    // 0x4d50d8: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x4d50d8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_4d50dc:
    // 0x4d50dc: 0x8c6ae3b8  lw          $t2, -0x1C48($v1)
    ctx->pc = 0x4d50dcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960056)));
label_4d50e0:
    // 0x4d50e0: 0x8c8be378  lw          $t3, -0x1C88($a0)
    ctx->pc = 0x4d50e0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294959992)));
label_4d50e4:
    // 0x4d50e4: 0xc6080  sll         $t4, $t4, 2
    ctx->pc = 0x4d50e4u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
label_4d50e8:
    // 0x4d50e8: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x4d50e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_4d50ec:
    // 0x4d50ec: 0x14d5021  addu        $t2, $t2, $t5
    ctx->pc = 0x4d50ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 13)));
label_4d50f0:
    // 0x4d50f0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d50f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d50f4:
    // 0x4d50f4: 0x16c8021  addu        $s0, $t3, $t4
    ctx->pc = 0x4d50f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 12)));
label_4d50f8:
    // 0x4d50f8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x4d50f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_4d50fc:
    // 0x4d50fc: 0xad500000  sw          $s0, 0x0($t2)
    ctx->pc = 0x4d50fcu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 16));
label_4d5100:
    // 0x4d5100: 0x8c4a0028  lw          $t2, 0x28($v0)
    ctx->pc = 0x4d5100u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_4d5104:
    // 0x4d5104: 0x8d29e3d8  lw          $t1, -0x1C28($t1)
    ctx->pc = 0x4d5104u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960088)));
label_4d5108:
    // 0x4d5108: 0x8ce2e3c0  lw          $v0, -0x1C40($a3)
    ctx->pc = 0x4d5108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960064)));
label_4d510c:
    // 0x4d510c: 0x12a3821  addu        $a3, $t1, $t2
    ctx->pc = 0x4d510cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_4d5110:
    // 0x4d5110: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4d5110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4d5114:
    // 0x4d5114: 0xad07e3d8  sw          $a3, -0x1C28($t0)
    ctx->pc = 0x4d5114u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294960088), GPR_U32(ctx, 7));
label_4d5118:
    // 0x4d5118: 0xc04cd60  jal         func_133580
label_4d511c:
    if (ctx->pc == 0x4D511Cu) {
        ctx->pc = 0x4D511Cu;
            // 0x4d511c: 0xac62e3c0  sw          $v0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 2));
        ctx->pc = 0x4D5120u;
        goto label_4d5120;
    }
    ctx->pc = 0x4D5118u;
    SET_GPR_U32(ctx, 31, 0x4D5120u);
    ctx->pc = 0x4D511Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5118u;
            // 0x4d511c: 0xac62e3c0  sw          $v0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5120u; }
        if (ctx->pc != 0x4D5120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5120u; }
        if (ctx->pc != 0x4D5120u) { return; }
    }
    ctx->pc = 0x4D5120u;
label_4d5120:
    // 0x4d5120: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4d5120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4d5124:
    // 0x4d5124: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d5124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d5128:
    // 0x4d5128: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x4d5128u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_4d512c:
    // 0x4d512c: 0xc04e4a4  jal         func_139290
label_4d5130:
    if (ctx->pc == 0x4D5130u) {
        ctx->pc = 0x4D5130u;
            // 0x4d5130: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D5134u;
        goto label_4d5134;
    }
    ctx->pc = 0x4D512Cu;
    SET_GPR_U32(ctx, 31, 0x4D5134u);
    ctx->pc = 0x4D5130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D512Cu;
            // 0x4d5130: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5134u; }
        if (ctx->pc != 0x4D5134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5134u; }
        if (ctx->pc != 0x4D5134u) { return; }
    }
    ctx->pc = 0x4D5134u;
label_4d5134:
    // 0x4d5134: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x4d5134u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4d5138:
    // 0x4d5138: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x4d5138u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_4d513c:
    // 0x4d513c: 0x320f809  jalr        $t9
label_4d5140:
    if (ctx->pc == 0x4D5140u) {
        ctx->pc = 0x4D5140u;
            // 0x4d5140: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D5144u;
        goto label_4d5144;
    }
    ctx->pc = 0x4D513Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D5144u);
        ctx->pc = 0x4D5140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D513Cu;
            // 0x4d5140: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D5144u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D5144u; }
            if (ctx->pc != 0x4D5144u) { return; }
        }
        }
    }
    ctx->pc = 0x4D5144u;
label_4d5144:
    // 0x4d5144: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x4d5144u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4d5148:
    // 0x4d5148: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x4d5148u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_4d514c:
    // 0x4d514c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4d514cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4d5150:
    // 0x4d5150: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4d5150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d5154:
    // 0x4d5154: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x4d5154u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d5158:
    // 0x4d5158: 0x27a70110  addiu       $a3, $sp, 0x110
    ctx->pc = 0x4d5158u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_4d515c:
    // 0x4d515c: 0xc04cfcc  jal         func_133F30
label_4d5160:
    if (ctx->pc == 0x4D5160u) {
        ctx->pc = 0x4D5160u;
            // 0x4d5160: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->pc = 0x4D5164u;
        goto label_4d5164;
    }
    ctx->pc = 0x4D515Cu;
    SET_GPR_U32(ctx, 31, 0x4D5164u);
    ctx->pc = 0x4D5160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D515Cu;
            // 0x4d5160: 0x2508e350  addiu       $t0, $t0, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5164u; }
        if (ctx->pc != 0x4D5164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5164u; }
        if (ctx->pc != 0x4D5164u) { return; }
    }
    ctx->pc = 0x4D5164u;
label_4d5164:
    // 0x4d5164: 0x10000056  b           . + 4 + (0x56 << 2)
label_4d5168:
    if (ctx->pc == 0x4D5168u) {
        ctx->pc = 0x4D5168u;
            // 0x4d5168: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4D516Cu;
        goto label_4d516c;
    }
    ctx->pc = 0x4D5164u;
    {
        const bool branch_taken_0x4d5164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D5168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5164u;
            // 0x4d5168: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d5164) {
            ctx->pc = 0x4D52C0u;
            goto label_4d52c0;
        }
    }
    ctx->pc = 0x4D516Cu;
label_4d516c:
    // 0x4d516c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d516cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d5170:
    // 0x4d5170: 0xc04f278  jal         func_13C9E0
label_4d5174:
    if (ctx->pc == 0x4D5174u) {
        ctx->pc = 0x4D5174u;
            // 0x4d5174: 0x26650150  addiu       $a1, $s3, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 336));
        ctx->pc = 0x4D5178u;
        goto label_4d5178;
    }
    ctx->pc = 0x4D5170u;
    SET_GPR_U32(ctx, 31, 0x4D5178u);
    ctx->pc = 0x4D5174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5170u;
            // 0x4d5174: 0x26650150  addiu       $a1, $s3, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5178u; }
        if (ctx->pc != 0x4D5178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5178u; }
        if (ctx->pc != 0x4D5178u) { return; }
    }
    ctx->pc = 0x4D5178u;
label_4d5178:
    // 0x4d5178: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d5178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d517c:
    // 0x4d517c: 0xc04ce80  jal         func_133A00
label_4d5180:
    if (ctx->pc == 0x4D5180u) {
        ctx->pc = 0x4D5180u;
            // 0x4d5180: 0x26650140  addiu       $a1, $s3, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 320));
        ctx->pc = 0x4D5184u;
        goto label_4d5184;
    }
    ctx->pc = 0x4D517Cu;
    SET_GPR_U32(ctx, 31, 0x4D5184u);
    ctx->pc = 0x4D5180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D517Cu;
            // 0x4d5180: 0x26650140  addiu       $a1, $s3, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5184u; }
        if (ctx->pc != 0x4D5184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5184u; }
        if (ctx->pc != 0x4D5184u) { return; }
    }
    ctx->pc = 0x4D5184u;
label_4d5184:
    // 0x4d5184: 0x8e620160  lw          $v0, 0x160($s3)
    ctx->pc = 0x4d5184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 352)));
label_4d5188:
    // 0x4d5188: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_4d518c:
    if (ctx->pc == 0x4D518Cu) {
        ctx->pc = 0x4D5190u;
        goto label_4d5190;
    }
    ctx->pc = 0x4D5188u;
    {
        const bool branch_taken_0x4d5188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d5188) {
            ctx->pc = 0x4D5194u;
            goto label_4d5194;
        }
    }
    ctx->pc = 0x4D5190u;
label_4d5190:
    // 0x4d5190: 0xa04000d0  sb          $zero, 0xD0($v0)
    ctx->pc = 0x4d5190u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 208), (uint8_t)GPR_U32(ctx, 0));
label_4d5194:
    // 0x4d5194: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4d5194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4d5198:
    // 0x4d5198: 0x9266004c  lbu         $a2, 0x4C($s3)
    ctx->pc = 0x4d5198u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 76)));
label_4d519c:
    // 0x4d519c: 0x8c43d130  lw          $v1, -0x2ED0($v0)
    ctx->pc = 0x4d519cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4d51a0:
    // 0x4d51a0: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x4d51a0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4d51a4:
    // 0x4d51a4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4d51a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4d51a8:
    // 0x4d51a8: 0x8c710130  lw          $s1, 0x130($v1)
    ctx->pc = 0x4d51a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_4d51ac:
    // 0x4d51ac: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x4d51acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_4d51b0:
    // 0x4d51b0: 0xc07698c  jal         func_1DA630
label_4d51b4:
    if (ctx->pc == 0x4D51B4u) {
        ctx->pc = 0x4D51B4u;
            // 0x4d51b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D51B8u;
        goto label_4d51b8;
    }
    ctx->pc = 0x4D51B0u;
    SET_GPR_U32(ctx, 31, 0x4D51B8u);
    ctx->pc = 0x4D51B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D51B0u;
            // 0x4d51b4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D51B8u; }
        if (ctx->pc != 0x4D51B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D51B8u; }
        if (ctx->pc != 0x4D51B8u) { return; }
    }
    ctx->pc = 0x4D51B8u;
label_4d51b8:
    // 0x4d51b8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4d51b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4d51bc:
    // 0x4d51bc: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_4d51c0:
    if (ctx->pc == 0x4D51C0u) {
        ctx->pc = 0x4D51C4u;
        goto label_4d51c4;
    }
    ctx->pc = 0x4D51BCu;
    {
        const bool branch_taken_0x4d51bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4d51bc) {
            ctx->pc = 0x4D51CCu;
            goto label_4d51cc;
        }
    }
    ctx->pc = 0x4D51C4u;
label_4d51c4:
    // 0x4d51c4: 0x10000033  b           . + 4 + (0x33 << 2)
label_4d51c8:
    if (ctx->pc == 0x4D51C8u) {
        ctx->pc = 0x4D51C8u;
            // 0x4d51c8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4D51CCu;
        goto label_4d51cc;
    }
    ctx->pc = 0x4D51C4u;
    {
        const bool branch_taken_0x4d51c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D51C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D51C4u;
            // 0x4d51c8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d51c4) {
            ctx->pc = 0x4D5294u;
            goto label_4d5294;
        }
    }
    ctx->pc = 0x4D51CCu;
label_4d51cc:
    // 0x4d51cc: 0xc0576f4  jal         func_15DBD0
label_4d51d0:
    if (ctx->pc == 0x4D51D0u) {
        ctx->pc = 0x4D51D4u;
        goto label_4d51d4;
    }
    ctx->pc = 0x4D51CCu;
    SET_GPR_U32(ctx, 31, 0x4D51D4u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D51D4u; }
        if (ctx->pc != 0x4D51D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D51D4u; }
        if (ctx->pc != 0x4D51D4u) { return; }
    }
    ctx->pc = 0x4D51D4u;
label_4d51d4:
    // 0x4d51d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4d51d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4d51d8:
    // 0x4d51d8: 0xc076984  jal         func_1DA610
label_4d51dc:
    if (ctx->pc == 0x4D51DCu) {
        ctx->pc = 0x4D51DCu;
            // 0x4d51dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D51E0u;
        goto label_4d51e0;
    }
    ctx->pc = 0x4D51D8u;
    SET_GPR_U32(ctx, 31, 0x4D51E0u);
    ctx->pc = 0x4D51DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D51D8u;
            // 0x4d51dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D51E0u; }
        if (ctx->pc != 0x4D51E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D51E0u; }
        if (ctx->pc != 0x4D51E0u) { return; }
    }
    ctx->pc = 0x4D51E0u;
label_4d51e0:
    // 0x4d51e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4d51e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d51e4:
    // 0x4d51e4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x4d51e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4d51e8:
    // 0x4d51e8: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4d51e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4d51ec:
    // 0x4d51ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4d51ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d51f0:
    // 0x4d51f0: 0xc442c9d0  lwc1        $f2, -0x3630($v0)
    ctx->pc = 0x4d51f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4d51f4:
    // 0x4d51f4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x4d51f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d51f8:
    // 0x4d51f8: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4d51f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4d51fc:
    // 0x4d51fc: 0xc441c9d8  lwc1        $f1, -0x3628($v0)
    ctx->pc = 0x4d51fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4d5200:
    // 0x4d5200: 0xe7a200b0  swc1        $f2, 0xB0($sp)
    ctx->pc = 0x4d5200u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_4d5204:
    // 0x4d5204: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4d5204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4d5208:
    // 0x4d5208: 0xc440c9dc  lwc1        $f0, -0x3624($v0)
    ctx->pc = 0x4d5208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4d520c:
    // 0x4d520c: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x4d520cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_4d5210:
    // 0x4d5210: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4d5210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4d5214:
    // 0x4d5214: 0x8c42c9d4  lw          $v0, -0x362C($v0)
    ctx->pc = 0x4d5214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953428)));
label_4d5218:
    // 0x4d5218: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x4d5218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_4d521c:
    // 0x4d521c: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x4d521cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_4d5220:
    // 0x4d5220: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x4d5220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4d5224:
    // 0x4d5224: 0xc04cca0  jal         func_133280
label_4d5228:
    if (ctx->pc == 0x4D5228u) {
        ctx->pc = 0x4D5228u;
            // 0x4d5228: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->pc = 0x4D522Cu;
        goto label_4d522c;
    }
    ctx->pc = 0x4D5224u;
    SET_GPR_U32(ctx, 31, 0x4D522Cu);
    ctx->pc = 0x4D5228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5224u;
            // 0x4d5228: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D522Cu; }
        if (ctx->pc != 0x4D522Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D522Cu; }
        if (ctx->pc != 0x4D522Cu) { return; }
    }
    ctx->pc = 0x4D522Cu;
label_4d522c:
    // 0x4d522c: 0xc076980  jal         func_1DA600
label_4d5230:
    if (ctx->pc == 0x4D5230u) {
        ctx->pc = 0x4D5230u;
            // 0x4d5230: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D5234u;
        goto label_4d5234;
    }
    ctx->pc = 0x4D522Cu;
    SET_GPR_U32(ctx, 31, 0x4D5234u);
    ctx->pc = 0x4D5230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D522Cu;
            // 0x4d5230: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5234u; }
        if (ctx->pc != 0x4D5234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5234u; }
        if (ctx->pc != 0x4D5234u) { return; }
    }
    ctx->pc = 0x4D5234u;
label_4d5234:
    // 0x4d5234: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4d5234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d5238:
    // 0x4d5238: 0xc04cc34  jal         func_1330D0
label_4d523c:
    if (ctx->pc == 0x4D523Cu) {
        ctx->pc = 0x4D523Cu;
            // 0x4d523c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x4D5240u;
        goto label_4d5240;
    }
    ctx->pc = 0x4D5238u;
    SET_GPR_U32(ctx, 31, 0x4D5240u);
    ctx->pc = 0x4D523Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5238u;
            // 0x4d523c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5240u; }
        if (ctx->pc != 0x4D5240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5240u; }
        if (ctx->pc != 0x4D5240u) { return; }
    }
    ctx->pc = 0x4D5240u;
label_4d5240:
    // 0x4d5240: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4d5240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4d5244:
    // 0x4d5244: 0xc4417d38  lwc1        $f1, 0x7D38($v0)
    ctx->pc = 0x4d5244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4d5248:
    // 0x4d5248: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4d5248u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4d524c:
    // 0x4d524c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_4d5250:
    if (ctx->pc == 0x4D5250u) {
        ctx->pc = 0x4D5250u;
            // 0x4d5250: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D5254u;
        goto label_4d5254;
    }
    ctx->pc = 0x4D524Cu;
    {
        const bool branch_taken_0x4d524c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4d524c) {
            ctx->pc = 0x4D5250u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D524Cu;
            // 0x4d5250: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D525Cu;
            goto label_4d525c;
        }
    }
    ctx->pc = 0x4D5254u;
label_4d5254:
    // 0x4d5254: 0x1000000f  b           . + 4 + (0xF << 2)
label_4d5258:
    if (ctx->pc == 0x4D5258u) {
        ctx->pc = 0x4D5258u;
            // 0x4d5258: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4D525Cu;
        goto label_4d525c;
    }
    ctx->pc = 0x4D5254u;
    {
        const bool branch_taken_0x4d5254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D5258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5254u;
            // 0x4d5258: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d5254) {
            ctx->pc = 0x4D5294u;
            goto label_4d5294;
        }
    }
    ctx->pc = 0x4D525Cu;
label_4d525c:
    // 0x4d525c: 0xc07697c  jal         func_1DA5F0
label_4d5260:
    if (ctx->pc == 0x4D5260u) {
        ctx->pc = 0x4D5264u;
        goto label_4d5264;
    }
    ctx->pc = 0x4D525Cu;
    SET_GPR_U32(ctx, 31, 0x4D5264u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5264u; }
        if (ctx->pc != 0x4D5264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5264u; }
        if (ctx->pc != 0x4D5264u) { return; }
    }
    ctx->pc = 0x4D5264u;
label_4d5264:
    // 0x4d5264: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4d5264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4d5268:
    // 0x4d5268: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4d5268u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d526c:
    // 0x4d526c: 0xc04cd60  jal         func_133580
label_4d5270:
    if (ctx->pc == 0x4D5270u) {
        ctx->pc = 0x4D5270u;
            // 0x4d5270: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4D5274u;
        goto label_4d5274;
    }
    ctx->pc = 0x4D526Cu;
    SET_GPR_U32(ctx, 31, 0x4D5274u);
    ctx->pc = 0x4D5270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D526Cu;
            // 0x4d5270: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5274u; }
        if (ctx->pc != 0x4D5274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5274u; }
        if (ctx->pc != 0x4D5274u) { return; }
    }
    ctx->pc = 0x4D5274u;
label_4d5274:
    // 0x4d5274: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4d5274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4d5278:
    // 0x4d5278: 0xc04c650  jal         func_131940
label_4d527c:
    if (ctx->pc == 0x4D527Cu) {
        ctx->pc = 0x4D527Cu;
            // 0x4d527c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4D5280u;
        goto label_4d5280;
    }
    ctx->pc = 0x4D5278u;
    SET_GPR_U32(ctx, 31, 0x4D5280u);
    ctx->pc = 0x4D527Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5278u;
            // 0x4d527c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5280u; }
        if (ctx->pc != 0x4D5280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5280u; }
        if (ctx->pc != 0x4D5280u) { return; }
    }
    ctx->pc = 0x4D5280u;
label_4d5280:
    // 0x4d5280: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x4d5280u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4d5284:
    // 0x4d5284: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x4d5284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_4d5288:
    // 0x4d5288: 0x2442e320  addiu       $v0, $v0, -0x1CE0
    ctx->pc = 0x4d5288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959904));
label_4d528c:
    // 0x4d528c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4d528cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4d5290:
    // 0x4d5290: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4d5290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4d5294:
    // 0x4d5294: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x4d5294u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_4d5298:
    // 0x4d5298: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_4d529c:
    if (ctx->pc == 0x4D529Cu) {
        ctx->pc = 0x4D529Cu;
            // 0x4d529c: 0xae620044  sw          $v0, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x4D52A0u;
        goto label_4d52a0;
    }
    ctx->pc = 0x4D5298u;
    {
        const bool branch_taken_0x4d5298 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D529Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5298u;
            // 0x4d529c: 0xae620044  sw          $v0, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d5298) {
            ctx->pc = 0x4D52A8u;
            goto label_4d52a8;
        }
    }
    ctx->pc = 0x4D52A0u;
label_4d52a0:
    // 0x4d52a0: 0x10000007  b           . + 4 + (0x7 << 2)
label_4d52a4:
    if (ctx->pc == 0x4D52A4u) {
        ctx->pc = 0x4D52A4u;
            // 0x4d52a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D52A8u;
        goto label_4d52a8;
    }
    ctx->pc = 0x4D52A0u;
    {
        const bool branch_taken_0x4d52a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D52A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D52A0u;
            // 0x4d52a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d52a0) {
            ctx->pc = 0x4D52C0u;
            goto label_4d52c0;
        }
    }
    ctx->pc = 0x4D52A8u;
label_4d52a8:
    // 0x4d52a8: 0x8e630160  lw          $v1, 0x160($s3)
    ctx->pc = 0x4d52a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 352)));
label_4d52ac:
    // 0x4d52ac: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_4d52b0:
    if (ctx->pc == 0x4D52B0u) {
        ctx->pc = 0x4D52B0u;
            // 0x4d52b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D52B4u;
        goto label_4d52b4;
    }
    ctx->pc = 0x4D52ACu;
    {
        const bool branch_taken_0x4d52ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d52ac) {
            ctx->pc = 0x4D52B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D52ACu;
            // 0x4d52b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D52C0u;
            goto label_4d52c0;
        }
    }
    ctx->pc = 0x4D52B4u;
label_4d52b4:
    // 0x4d52b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4d52b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4d52b8:
    // 0x4d52b8: 0xa06200d0  sb          $v0, 0xD0($v1)
    ctx->pc = 0x4d52b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 208), (uint8_t)GPR_U32(ctx, 2));
label_4d52bc:
    // 0x4d52bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4d52bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d52c0:
    // 0x4d52c0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4d52c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_4d52c4:
    // 0x4d52c4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4d52c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4d52c8:
    // 0x4d52c8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4d52c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4d52cc:
    // 0x4d52cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4d52ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4d52d0:
    // 0x4d52d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4d52d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4d52d4:
    // 0x4d52d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d52d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4d52d8:
    // 0x4d52d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d52d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d52dc:
    // 0x4d52dc: 0x3e00008  jr          $ra
label_4d52e0:
    if (ctx->pc == 0x4D52E0u) {
        ctx->pc = 0x4D52E0u;
            // 0x4d52e0: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x4D52E4u;
        goto label_4d52e4;
    }
    ctx->pc = 0x4D52DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D52E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D52DCu;
            // 0x4d52e0: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D52E4u;
label_4d52e4:
    // 0x4d52e4: 0x0  nop
    ctx->pc = 0x4d52e4u;
    // NOP
label_4d52e8:
    // 0x4d52e8: 0x0  nop
    ctx->pc = 0x4d52e8u;
    // NOP
label_4d52ec:
    // 0x4d52ec: 0x0  nop
    ctx->pc = 0x4d52ecu;
    // NOP
label_4d52f0:
    // 0x4d52f0: 0x3e00008  jr          $ra
label_4d52f4:
    if (ctx->pc == 0x4D52F4u) {
        ctx->pc = 0x4D52F8u;
        goto label_4d52f8;
    }
    ctx->pc = 0x4D52F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D52F8u;
label_4d52f8:
    // 0x4d52f8: 0x0  nop
    ctx->pc = 0x4d52f8u;
    // NOP
label_4d52fc:
    // 0x4d52fc: 0x0  nop
    ctx->pc = 0x4d52fcu;
    // NOP
label_4d5300:
    // 0x4d5300: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4d5300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4d5304:
    // 0x4d5304: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4d5304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4d5308:
    // 0x4d5308: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d5308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4d530c:
    // 0x4d530c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d530cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d5310:
    // 0x4d5310: 0x8c900050  lw          $s0, 0x50($a0)
    ctx->pc = 0x4d5310u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_4d5314:
    // 0x4d5314: 0xc0e393c  jal         func_38E4F0
label_4d5318:
    if (ctx->pc == 0x4D5318u) {
        ctx->pc = 0x4D5318u;
            // 0x4d5318: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D531Cu;
        goto label_4d531c;
    }
    ctx->pc = 0x4D5314u;
    SET_GPR_U32(ctx, 31, 0x4D531Cu);
    ctx->pc = 0x4D5318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5314u;
            // 0x4d5318: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D531Cu; }
        if (ctx->pc != 0x4D531Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D531Cu; }
        if (ctx->pc != 0x4D531Cu) { return; }
    }
    ctx->pc = 0x4D531Cu;
label_4d531c:
    // 0x4d531c: 0xa22000e0  sb          $zero, 0xE0($s1)
    ctx->pc = 0x4d531cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 224), (uint8_t)GPR_U32(ctx, 0));
label_4d5320:
    // 0x4d5320: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4d5320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_4d5324:
    // 0x4d5324: 0x34430101  ori         $v1, $v0, 0x101
    ctx->pc = 0x4d5324u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)257);
label_4d5328:
    // 0x4d5328: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x4d5328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_4d532c:
    // 0x4d532c: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x4d532cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_4d5330:
    // 0x4d5330: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d5330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d5334:
    // 0x4d5334: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x4d5334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_4d5338:
    // 0x4d5338: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4d5338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d533c:
    // 0x4d533c: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x4d533cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_4d5340:
    // 0x4d5340: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4d5340u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d5344:
    // 0x4d5344: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x4d5344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_4d5348:
    // 0x4d5348: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4d5348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4d534c:
    // 0x4d534c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4d534cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4d5350:
    // 0x4d5350: 0xc08bff0  jal         func_22FFC0
label_4d5354:
    if (ctx->pc == 0x4D5354u) {
        ctx->pc = 0x4D5354u;
            // 0x4d5354: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D5358u;
        goto label_4d5358;
    }
    ctx->pc = 0x4D5350u;
    SET_GPR_U32(ctx, 31, 0x4D5358u);
    ctx->pc = 0x4D5354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5350u;
            // 0x4d5354: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5358u; }
        if (ctx->pc != 0x4D5358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5358u; }
        if (ctx->pc != 0x4D5358u) { return; }
    }
    ctx->pc = 0x4D5358u;
label_4d5358:
    // 0x4d5358: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d5358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d535c:
    // 0x4d535c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4d535cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4d5360:
    // 0x4d5360: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4d5360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4d5364:
    // 0x4d5364: 0xc08914c  jal         func_224530
label_4d5368:
    if (ctx->pc == 0x4D5368u) {
        ctx->pc = 0x4D5368u;
            // 0x4d5368: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D536Cu;
        goto label_4d536c;
    }
    ctx->pc = 0x4D5364u;
    SET_GPR_U32(ctx, 31, 0x4D536Cu);
    ctx->pc = 0x4D5368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5364u;
            // 0x4d5368: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D536Cu; }
        if (ctx->pc != 0x4D536Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D536Cu; }
        if (ctx->pc != 0x4D536Cu) { return; }
    }
    ctx->pc = 0x4D536Cu;
label_4d536c:
    // 0x4d536c: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x4d536cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4d5370:
    // 0x4d5370: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d5370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d5374:
    // 0x4d5374: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x4d5374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4d5378:
    // 0x4d5378: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x4d5378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4d537c:
    // 0x4d537c: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x4d537cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4d5380:
    // 0x4d5380: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x4d5380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4d5384:
    // 0x4d5384: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x4d5384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_4d5388:
    // 0x4d5388: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x4d5388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_4d538c:
    // 0x4d538c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x4d538cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_4d5390:
    // 0x4d5390: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x4d5390u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_4d5394:
    // 0x4d5394: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x4d5394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4d5398:
    // 0x4d5398: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x4d5398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4d539c:
    // 0x4d539c: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x4d539cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4d53a0:
    // 0x4d53a0: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x4d53a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4d53a4:
    // 0x4d53a4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x4d53a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_4d53a8:
    // 0x4d53a8: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x4d53a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_4d53ac:
    // 0x4d53ac: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x4d53acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_4d53b0:
    // 0x4d53b0: 0xc0892b0  jal         func_224AC0
label_4d53b4:
    if (ctx->pc == 0x4D53B4u) {
        ctx->pc = 0x4D53B4u;
            // 0x4d53b4: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->pc = 0x4D53B8u;
        goto label_4d53b8;
    }
    ctx->pc = 0x4D53B0u;
    SET_GPR_U32(ctx, 31, 0x4D53B8u);
    ctx->pc = 0x4D53B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D53B0u;
            // 0x4d53b4: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D53B8u; }
        if (ctx->pc != 0x4D53B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D53B8u; }
        if (ctx->pc != 0x4D53B8u) { return; }
    }
    ctx->pc = 0x4D53B8u;
label_4d53b8:
    // 0x4d53b8: 0xc088b74  jal         func_222DD0
label_4d53bc:
    if (ctx->pc == 0x4D53BCu) {
        ctx->pc = 0x4D53BCu;
            // 0x4d53bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D53C0u;
        goto label_4d53c0;
    }
    ctx->pc = 0x4D53B8u;
    SET_GPR_U32(ctx, 31, 0x4D53C0u);
    ctx->pc = 0x4D53BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D53B8u;
            // 0x4d53bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D53C0u; }
        if (ctx->pc != 0x4D53C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D53C0u; }
        if (ctx->pc != 0x4D53C0u) { return; }
    }
    ctx->pc = 0x4D53C0u;
label_4d53c0:
    // 0x4d53c0: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x4d53c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_4d53c4:
    // 0x4d53c4: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x4d53c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_4d53c8:
    // 0x4d53c8: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4d53c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4d53cc:
    // 0x4d53cc: 0x320f809  jalr        $t9
label_4d53d0:
    if (ctx->pc == 0x4D53D0u) {
        ctx->pc = 0x4D53D0u;
            // 0x4d53d0: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4D53D4u;
        goto label_4d53d4;
    }
    ctx->pc = 0x4D53CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D53D4u);
        ctx->pc = 0x4D53D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D53CCu;
            // 0x4d53d0: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D53D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D53D4u; }
            if (ctx->pc != 0x4D53D4u) { return; }
        }
        }
    }
    ctx->pc = 0x4D53D4u;
label_4d53d4:
    // 0x4d53d4: 0xc088b74  jal         func_222DD0
label_4d53d8:
    if (ctx->pc == 0x4D53D8u) {
        ctx->pc = 0x4D53D8u;
            // 0x4d53d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D53DCu;
        goto label_4d53dc;
    }
    ctx->pc = 0x4D53D4u;
    SET_GPR_U32(ctx, 31, 0x4D53DCu);
    ctx->pc = 0x4D53D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D53D4u;
            // 0x4d53d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D53DCu; }
        if (ctx->pc != 0x4D53DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D53DCu; }
        if (ctx->pc != 0x4D53DCu) { return; }
    }
    ctx->pc = 0x4D53DCu;
label_4d53dc:
    // 0x4d53dc: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x4d53dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_4d53e0:
    // 0x4d53e0: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x4d53e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_4d53e4:
    // 0x4d53e4: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x4d53e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_4d53e8:
    // 0x4d53e8: 0x320f809  jalr        $t9
label_4d53ec:
    if (ctx->pc == 0x4D53ECu) {
        ctx->pc = 0x4D53ECu;
            // 0x4d53ec: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4D53F0u;
        goto label_4d53f0;
    }
    ctx->pc = 0x4D53E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D53F0u);
        ctx->pc = 0x4D53ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D53E8u;
            // 0x4d53ec: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D53F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D53F0u; }
            if (ctx->pc != 0x4D53F0u) { return; }
        }
        }
    }
    ctx->pc = 0x4D53F0u;
label_4d53f0:
    // 0x4d53f0: 0x3c0343d1  lui         $v1, 0x43D1
    ctx->pc = 0x4d53f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17361 << 16));
label_4d53f4:
    // 0x4d53f4: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x4d53f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_4d53f8:
    // 0x4d53f8: 0x34647084  ori         $a0, $v1, 0x7084
    ctx->pc = 0x4d53f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28804);
label_4d53fc:
    // 0x4d53fc: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x4d53fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_4d5400:
    // 0x4d5400: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x4d5400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_4d5404:
    // 0x4d5404: 0xae040154  sw          $a0, 0x154($s0)
    ctx->pc = 0x4d5404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 4));
label_4d5408:
    // 0x4d5408: 0x3c024628  lui         $v0, 0x4628
    ctx->pc = 0x4d5408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17960 << 16));
label_4d540c:
    // 0x4d540c: 0xae030158  sw          $v1, 0x158($s0)
    ctx->pc = 0x4d540cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 3));
label_4d5410:
    // 0x4d5410: 0x34424800  ori         $v0, $v0, 0x4800
    ctx->pc = 0x4d5410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18432);
label_4d5414:
    // 0x4d5414: 0x26240140  addiu       $a0, $s1, 0x140
    ctx->pc = 0x4d5414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 320));
label_4d5418:
    // 0x4d5418: 0xc04cc04  jal         func_133010
label_4d541c:
    if (ctx->pc == 0x4D541Cu) {
        ctx->pc = 0x4D541Cu;
            // 0x4d541c: 0xae220130  sw          $v0, 0x130($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 304), GPR_U32(ctx, 2));
        ctx->pc = 0x4D5420u;
        goto label_4d5420;
    }
    ctx->pc = 0x4D5418u;
    SET_GPR_U32(ctx, 31, 0x4D5420u);
    ctx->pc = 0x4D541Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5418u;
            // 0x4d541c: 0xae220130  sw          $v0, 0x130($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5420u; }
        if (ctx->pc != 0x4D5420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5420u; }
        if (ctx->pc != 0x4D5420u) { return; }
    }
    ctx->pc = 0x4D5420u;
label_4d5420:
    // 0x4d5420: 0x8e250160  lw          $a1, 0x160($s1)
    ctx->pc = 0x4d5420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
label_4d5424:
    // 0x4d5424: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
label_4d5428:
    if (ctx->pc == 0x4D5428u) {
        ctx->pc = 0x4D5428u;
            // 0x4d5428: 0x8e240168  lw          $a0, 0x168($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 360)));
        ctx->pc = 0x4D542Cu;
        goto label_4d542c;
    }
    ctx->pc = 0x4D5424u;
    {
        const bool branch_taken_0x4d5424 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d5424) {
            ctx->pc = 0x4D5428u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5424u;
            // 0x4d5428: 0x8e240168  lw          $a0, 0x168($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 360)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D5444u;
            goto label_4d5444;
        }
    }
    ctx->pc = 0x4D542Cu;
label_4d542c:
    // 0x4d542c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4d542cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4d5430:
    // 0x4d5430: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x4d5430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4d5434:
    // 0x4d5434: 0xc057b7c  jal         func_15EDF0
label_4d5438:
    if (ctx->pc == 0x4D5438u) {
        ctx->pc = 0x4D5438u;
            // 0x4d5438: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4D543Cu;
        goto label_4d543c;
    }
    ctx->pc = 0x4D5434u;
    SET_GPR_U32(ctx, 31, 0x4D543Cu);
    ctx->pc = 0x4D5438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5434u;
            // 0x4d5438: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D543Cu; }
        if (ctx->pc != 0x4D543Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D543Cu; }
        if (ctx->pc != 0x4D543Cu) { return; }
    }
    ctx->pc = 0x4D543Cu;
label_4d543c:
    // 0x4d543c: 0xae200160  sw          $zero, 0x160($s1)
    ctx->pc = 0x4d543cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 0));
label_4d5440:
    // 0x4d5440: 0x8e240168  lw          $a0, 0x168($s1)
    ctx->pc = 0x4d5440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 360)));
label_4d5444:
    // 0x4d5444: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_4d5448:
    if (ctx->pc == 0x4D5448u) {
        ctx->pc = 0x4D5448u;
            // 0x4d5448: 0xae20016c  sw          $zero, 0x16C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 364), GPR_U32(ctx, 0));
        ctx->pc = 0x4D544Cu;
        goto label_4d544c;
    }
    ctx->pc = 0x4D5444u;
    {
        const bool branch_taken_0x4d5444 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d5444) {
            ctx->pc = 0x4D5448u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5444u;
            // 0x4d5448: 0xae20016c  sw          $zero, 0x16C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 364), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D5464u;
            goto label_4d5464;
        }
    }
    ctx->pc = 0x4D544Cu;
label_4d544c:
    // 0x4d544c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4d544cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d5450:
    // 0x4d5450: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4d5450u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4d5454:
    // 0x4d5454: 0x320f809  jalr        $t9
label_4d5458:
    if (ctx->pc == 0x4D5458u) {
        ctx->pc = 0x4D5458u;
            // 0x4d5458: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D545Cu;
        goto label_4d545c;
    }
    ctx->pc = 0x4D5454u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D545Cu);
        ctx->pc = 0x4D5458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5454u;
            // 0x4d5458: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D545Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D545Cu; }
            if (ctx->pc != 0x4D545Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4D545Cu;
label_4d545c:
    // 0x4d545c: 0xae200168  sw          $zero, 0x168($s1)
    ctx->pc = 0x4d545cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 360), GPR_U32(ctx, 0));
label_4d5460:
    // 0x4d5460: 0xae20016c  sw          $zero, 0x16C($s1)
    ctx->pc = 0x4d5460u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 364), GPR_U32(ctx, 0));
label_4d5464:
    // 0x4d5464: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4d5464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4d5468:
    // 0x4d5468: 0xa2230170  sb          $v1, 0x170($s1)
    ctx->pc = 0x4d5468u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 368), (uint8_t)GPR_U32(ctx, 3));
label_4d546c:
    // 0x4d546c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4d546cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4d5470:
    // 0x4d5470: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d5470u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4d5474:
    // 0x4d5474: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d5474u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d5478:
    // 0x4d5478: 0x3e00008  jr          $ra
label_4d547c:
    if (ctx->pc == 0x4D547Cu) {
        ctx->pc = 0x4D547Cu;
            // 0x4d547c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4D5480u;
        goto label_4d5480;
    }
    ctx->pc = 0x4D5478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D547Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5478u;
            // 0x4d547c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D5480u;
label_4d5480:
    // 0x4d5480: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4d5480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4d5484:
    // 0x4d5484: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4d5484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4d5488:
    // 0x4d5488: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4d5488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4d548c:
    // 0x4d548c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4d548cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4d5490:
    // 0x4d5490: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4d5490u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d5494:
    // 0x4d5494: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4d5494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4d5498:
    // 0x4d5498: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d5498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4d549c:
    // 0x4d549c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d549cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d54a0:
    // 0x4d54a0: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x4d54a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4d54a4:
    // 0x4d54a4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_4d54a8:
    if (ctx->pc == 0x4D54A8u) {
        ctx->pc = 0x4D54A8u;
            // 0x4d54a8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D54ACu;
        goto label_4d54ac;
    }
    ctx->pc = 0x4D54A4u;
    {
        const bool branch_taken_0x4d54a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D54A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D54A4u;
            // 0x4d54a8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d54a4) {
            ctx->pc = 0x4D54E8u;
            goto label_4d54e8;
        }
    }
    ctx->pc = 0x4D54ACu;
label_4d54ac:
    // 0x4d54ac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4d54acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d54b0:
    // 0x4d54b0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4d54b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d54b4:
    // 0x4d54b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4d54b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d54b8:
    // 0x4d54b8: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x4d54b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_4d54bc:
    // 0x4d54bc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4d54bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4d54c0:
    // 0x4d54c0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4d54c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4d54c4:
    // 0x4d54c4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4d54c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d54c8:
    // 0x4d54c8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4d54c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4d54cc:
    // 0x4d54cc: 0x320f809  jalr        $t9
label_4d54d0:
    if (ctx->pc == 0x4D54D0u) {
        ctx->pc = 0x4D54D4u;
        goto label_4d54d4;
    }
    ctx->pc = 0x4D54CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D54D4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D54D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D54D4u; }
            if (ctx->pc != 0x4D54D4u) { return; }
        }
        }
    }
    ctx->pc = 0x4D54D4u;
label_4d54d4:
    // 0x4d54d4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x4d54d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4d54d8:
    // 0x4d54d8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4d54d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4d54dc:
    // 0x4d54dc: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x4d54dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4d54e0:
    // 0x4d54e0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_4d54e4:
    if (ctx->pc == 0x4D54E4u) {
        ctx->pc = 0x4D54E4u;
            // 0x4d54e4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4D54E8u;
        goto label_4d54e8;
    }
    ctx->pc = 0x4D54E0u;
    {
        const bool branch_taken_0x4d54e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D54E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D54E0u;
            // 0x4d54e4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d54e0) {
            ctx->pc = 0x4D54B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4d54b8;
        }
    }
    ctx->pc = 0x4D54E8u;
label_4d54e8:
    // 0x4d54e8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4d54e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4d54ec:
    // 0x4d54ec: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4d54ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4d54f0:
    // 0x4d54f0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4d54f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4d54f4:
    // 0x4d54f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4d54f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4d54f8:
    // 0x4d54f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4d54f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4d54fc:
    // 0x4d54fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d54fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4d5500:
    // 0x4d5500: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d5500u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d5504:
    // 0x4d5504: 0x3e00008  jr          $ra
label_4d5508:
    if (ctx->pc == 0x4D5508u) {
        ctx->pc = 0x4D5508u;
            // 0x4d5508: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4D550Cu;
        goto label_4d550c;
    }
    ctx->pc = 0x4D5504u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D5508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5504u;
            // 0x4d5508: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D550Cu;
label_4d550c:
    // 0x4d550c: 0x0  nop
    ctx->pc = 0x4d550cu;
    // NOP
label_4d5510:
    // 0x4d5510: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4d5510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4d5514:
    // 0x4d5514: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4d5514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4d5518:
    // 0x4d5518: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d5518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4d551c:
    // 0x4d551c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x4d551cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_4d5520:
    // 0x4d5520: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d5520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d5524:
    // 0x4d5524: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x4d5524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4d5528:
    // 0x4d5528: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4d5528u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4d552c:
    // 0x4d552c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x4d552cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_4d5530:
    // 0x4d5530: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4d5530u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4d5534:
    // 0x4d5534: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4d5534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4d5538:
    // 0x4d5538: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x4d5538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_4d553c:
    // 0x4d553c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x4d553cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4d5540:
    // 0x4d5540: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x4d5540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_4d5544:
    // 0x4d5544: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4d5544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4d5548:
    // 0x4d5548: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x4d5548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_4d554c:
    // 0x4d554c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x4d554cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_4d5550:
    // 0x4d5550: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x4d5550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4d5554:
    // 0x4d5554: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4d5554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4d5558:
    // 0x4d5558: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x4d5558u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_4d555c:
    // 0x4d555c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x4d555cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4d5560:
    // 0x4d5560: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x4d5560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_4d5564:
    // 0x4d5564: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4d5564u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4d5568:
    // 0x4d5568: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x4d5568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4d556c:
    // 0x4d556c: 0xc0a997c  jal         func_2A65F0
label_4d5570:
    if (ctx->pc == 0x4D5570u) {
        ctx->pc = 0x4D5570u;
            // 0x4d5570: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x4D5574u;
        goto label_4d5574;
    }
    ctx->pc = 0x4D556Cu;
    SET_GPR_U32(ctx, 31, 0x4D5574u);
    ctx->pc = 0x4D5570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D556Cu;
            // 0x4d5570: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5574u; }
        if (ctx->pc != 0x4D5574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5574u; }
        if (ctx->pc != 0x4D5574u) { return; }
    }
    ctx->pc = 0x4D5574u;
label_4d5574:
    // 0x4d5574: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x4d5574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_4d5578:
    // 0x4d5578: 0xc0d879c  jal         func_361E70
label_4d557c:
    if (ctx->pc == 0x4D557Cu) {
        ctx->pc = 0x4D557Cu;
            // 0x4d557c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D5580u;
        goto label_4d5580;
    }
    ctx->pc = 0x4D5578u;
    SET_GPR_U32(ctx, 31, 0x4D5580u);
    ctx->pc = 0x4D557Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5578u;
            // 0x4d557c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5580u; }
        if (ctx->pc != 0x4D5580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5580u; }
        if (ctx->pc != 0x4D5580u) { return; }
    }
    ctx->pc = 0x4D5580u;
label_4d5580:
    // 0x4d5580: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d5580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d5584:
    // 0x4d5584: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d5584u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d5588:
    // 0x4d5588: 0x3e00008  jr          $ra
label_4d558c:
    if (ctx->pc == 0x4D558Cu) {
        ctx->pc = 0x4D558Cu;
            // 0x4d558c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4D5590u;
        goto label_4d5590;
    }
    ctx->pc = 0x4D5588u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D558Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5588u;
            // 0x4d558c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D5590u;
label_4d5590:
    // 0x4d5590: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4d5590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4d5594:
    // 0x4d5594: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4d5594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4d5598:
    // 0x4d5598: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d5598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d559c:
    // 0x4d559c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x4d559cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_4d55a0:
    // 0x4d55a0: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_4d55a4:
    if (ctx->pc == 0x4D55A4u) {
        ctx->pc = 0x4D55A4u;
            // 0x4d55a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D55A8u;
        goto label_4d55a8;
    }
    ctx->pc = 0x4D55A0u;
    {
        const bool branch_taken_0x4d55a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D55A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D55A0u;
            // 0x4d55a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d55a0) {
            ctx->pc = 0x4D56C0u;
            goto label_4d56c0;
        }
    }
    ctx->pc = 0x4D55A8u;
label_4d55a8:
    // 0x4d55a8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4d55a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4d55ac:
    // 0x4d55ac: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4d55acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_4d55b0:
    // 0x4d55b0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4d55b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4d55b4:
    // 0x4d55b4: 0xc075128  jal         func_1D44A0
label_4d55b8:
    if (ctx->pc == 0x4D55B8u) {
        ctx->pc = 0x4D55B8u;
            // 0x4d55b8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x4D55BCu;
        goto label_4d55bc;
    }
    ctx->pc = 0x4D55B4u;
    SET_GPR_U32(ctx, 31, 0x4D55BCu);
    ctx->pc = 0x4D55B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D55B4u;
            // 0x4d55b8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D55BCu; }
        if (ctx->pc != 0x4D55BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D55BCu; }
        if (ctx->pc != 0x4D55BCu) { return; }
    }
    ctx->pc = 0x4D55BCu;
label_4d55bc:
    // 0x4d55bc: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x4d55bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4d55c0:
    // 0x4d55c0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d55c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d55c4:
    // 0x4d55c4: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x4d55c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_4d55c8:
    // 0x4d55c8: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x4d55c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4d55cc:
    // 0x4d55cc: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4d55ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4d55d0:
    // 0x4d55d0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4d55d4:
    if (ctx->pc == 0x4D55D4u) {
        ctx->pc = 0x4D55D4u;
            // 0x4d55d4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x4D55D8u;
        goto label_4d55d8;
    }
    ctx->pc = 0x4D55D0u;
    {
        const bool branch_taken_0x4d55d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D55D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D55D0u;
            // 0x4d55d4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d55d0) {
            ctx->pc = 0x4D55E0u;
            goto label_4d55e0;
        }
    }
    ctx->pc = 0x4D55D8u;
label_4d55d8:
    // 0x4d55d8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d55d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d55dc:
    // 0x4d55dc: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x4d55dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_4d55e0:
    // 0x4d55e0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4d55e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d55e4:
    // 0x4d55e4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d55e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d55e8:
    // 0x4d55e8: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x4d55e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_4d55ec:
    // 0x4d55ec: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4d55ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4d55f0:
    // 0x4d55f0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4d55f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4d55f4:
    // 0x4d55f4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4d55f8:
    if (ctx->pc == 0x4D55F8u) {
        ctx->pc = 0x4D55F8u;
            // 0x4d55f8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4D55FCu;
        goto label_4d55fc;
    }
    ctx->pc = 0x4D55F4u;
    {
        const bool branch_taken_0x4d55f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d55f4) {
            ctx->pc = 0x4D55F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D55F4u;
            // 0x4d55f8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D5608u;
            goto label_4d5608;
        }
    }
    ctx->pc = 0x4D55FCu;
label_4d55fc:
    // 0x4d55fc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d55fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d5600:
    // 0x4d5600: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x4d5600u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_4d5604:
    // 0x4d5604: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4d5604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4d5608:
    // 0x4d5608: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d5608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d560c:
    // 0x4d560c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x4d560cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_4d5610:
    // 0x4d5610: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4d5610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4d5614:
    // 0x4d5614: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4d5614u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4d5618:
    // 0x4d5618: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4d561c:
    if (ctx->pc == 0x4D561Cu) {
        ctx->pc = 0x4D561Cu;
            // 0x4d561c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4D5620u;
        goto label_4d5620;
    }
    ctx->pc = 0x4D5618u;
    {
        const bool branch_taken_0x4d5618 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d5618) {
            ctx->pc = 0x4D561Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5618u;
            // 0x4d561c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D562Cu;
            goto label_4d562c;
        }
    }
    ctx->pc = 0x4D5620u;
label_4d5620:
    // 0x4d5620: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4d5620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4d5624:
    // 0x4d5624: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x4d5624u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_4d5628:
    // 0x4d5628: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4d5628u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4d562c:
    // 0x4d562c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4d562cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4d5630:
    // 0x4d5630: 0x320f809  jalr        $t9
label_4d5634:
    if (ctx->pc == 0x4D5634u) {
        ctx->pc = 0x4D5634u;
            // 0x4d5634: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D5638u;
        goto label_4d5638;
    }
    ctx->pc = 0x4D5630u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4D5638u);
        ctx->pc = 0x4D5634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5630u;
            // 0x4d5634: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4D5638u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4D5638u; }
            if (ctx->pc != 0x4D5638u) { return; }
        }
        }
    }
    ctx->pc = 0x4D5638u;
label_4d5638:
    // 0x4d5638: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4d5638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4d563c:
    // 0x4d563c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d563cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d5640:
    // 0x4d5640: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x4d5640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_4d5644:
    // 0x4d5644: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4d5644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4d5648:
    // 0x4d5648: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4d5648u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4d564c:
    // 0x4d564c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4d564cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4d5650:
    // 0x4d5650: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4d5654:
    if (ctx->pc == 0x4D5654u) {
        ctx->pc = 0x4D5654u;
            // 0x4d5654: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x4D5658u;
        goto label_4d5658;
    }
    ctx->pc = 0x4D5650u;
    {
        const bool branch_taken_0x4d5650 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d5650) {
            ctx->pc = 0x4D5654u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5650u;
            // 0x4d5654: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D5664u;
            goto label_4d5664;
        }
    }
    ctx->pc = 0x4D5658u;
label_4d5658:
    // 0x4d5658: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d5658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d565c:
    // 0x4d565c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x4d565cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_4d5660:
    // 0x4d5660: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4d5660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4d5664:
    // 0x4d5664: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d5664u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d5668:
    // 0x4d5668: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x4d5668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_4d566c:
    // 0x4d566c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4d566cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4d5670:
    // 0x4d5670: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4d5670u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4d5674:
    // 0x4d5674: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4d5674u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4d5678:
    // 0x4d5678: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4d567c:
    if (ctx->pc == 0x4D567Cu) {
        ctx->pc = 0x4D5680u;
        goto label_4d5680;
    }
    ctx->pc = 0x4D5678u;
    {
        const bool branch_taken_0x4d5678 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d5678) {
            ctx->pc = 0x4D5688u;
            goto label_4d5688;
        }
    }
    ctx->pc = 0x4D5680u;
label_4d5680:
    // 0x4d5680: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d5680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d5684:
    // 0x4d5684: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x4d5684u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_4d5688:
    // 0x4d5688: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d5688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d568c:
    // 0x4d568c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x4d568cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_4d5690:
    // 0x4d5690: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4d5690u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4d5694:
    // 0x4d5694: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4d5698:
    if (ctx->pc == 0x4D5698u) {
        ctx->pc = 0x4D569Cu;
        goto label_4d569c;
    }
    ctx->pc = 0x4D5694u;
    {
        const bool branch_taken_0x4d5694 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d5694) {
            ctx->pc = 0x4D56A4u;
            goto label_4d56a4;
        }
    }
    ctx->pc = 0x4D569Cu;
label_4d569c:
    // 0x4d569c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d569cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d56a0:
    // 0x4d56a0: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x4d56a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_4d56a4:
    // 0x4d56a4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d56a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d56a8:
    // 0x4d56a8: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x4d56a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_4d56ac:
    // 0x4d56ac: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4d56acu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4d56b0:
    // 0x4d56b0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4d56b4:
    if (ctx->pc == 0x4D56B4u) {
        ctx->pc = 0x4D56B4u;
            // 0x4d56b4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4D56B8u;
        goto label_4d56b8;
    }
    ctx->pc = 0x4D56B0u;
    {
        const bool branch_taken_0x4d56b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4d56b0) {
            ctx->pc = 0x4D56B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D56B0u;
            // 0x4d56b4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D56C4u;
            goto label_4d56c4;
        }
    }
    ctx->pc = 0x4D56B8u;
label_4d56b8:
    // 0x4d56b8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d56b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4d56bc:
    // 0x4d56bc: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x4d56bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_4d56c0:
    // 0x4d56c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4d56c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4d56c4:
    // 0x4d56c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d56c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d56c8:
    // 0x4d56c8: 0x3e00008  jr          $ra
label_4d56cc:
    if (ctx->pc == 0x4D56CCu) {
        ctx->pc = 0x4D56CCu;
            // 0x4d56cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4D56D0u;
        goto label_4d56d0;
    }
    ctx->pc = 0x4D56C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D56CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D56C8u;
            // 0x4d56cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D56D0u;
label_4d56d0:
    // 0x4d56d0: 0x813506c  j           func_4D41B0
label_4d56d4:
    if (ctx->pc == 0x4D56D4u) {
        ctx->pc = 0x4D56D4u;
            // 0x4d56d4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x4D56D8u;
        goto label_4d56d8;
    }
    ctx->pc = 0x4D56D0u;
    ctx->pc = 0x4D56D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D56D0u;
            // 0x4d56d4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D41B0u;
    {
        auto targetFn = runtime->lookupFunction(0x4D41B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4D56D8u;
label_4d56d8:
    // 0x4d56d8: 0x0  nop
    ctx->pc = 0x4d56d8u;
    // NOP
label_4d56dc:
    // 0x4d56dc: 0x0  nop
    ctx->pc = 0x4d56dcu;
    // NOP
label_4d56e0:
    // 0x4d56e0: 0x8135170  j           func_4D45C0
label_4d56e4:
    if (ctx->pc == 0x4D56E4u) {
        ctx->pc = 0x4D56E4u;
            // 0x4d56e4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4D56E8u;
        goto label_4d56e8;
    }
    ctx->pc = 0x4D56E0u;
    ctx->pc = 0x4D56E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D56E0u;
            // 0x4d56e4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D45C0u;
    {
        auto targetFn = runtime->lookupFunction(0x4D45C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4D56E8u;
label_4d56e8:
    // 0x4d56e8: 0x0  nop
    ctx->pc = 0x4d56e8u;
    // NOP
label_4d56ec:
    // 0x4d56ec: 0x0  nop
    ctx->pc = 0x4d56ecu;
    // NOP
label_4d56f0:
    // 0x4d56f0: 0x8135014  j           func_4D4050
label_4d56f4:
    if (ctx->pc == 0x4D56F4u) {
        ctx->pc = 0x4D56F4u;
            // 0x4d56f4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4D56F8u;
        goto label_4d56f8;
    }
    ctx->pc = 0x4D56F0u;
    ctx->pc = 0x4D56F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D56F0u;
            // 0x4d56f4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D4050u;
    if (runtime->hasFunction(0x4D4050u)) {
        auto targetFn = runtime->lookupFunction(0x4D4050u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_004D4050_0x4d4050(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4D56F8u;
label_4d56f8:
    // 0x4d56f8: 0x0  nop
    ctx->pc = 0x4d56f8u;
    // NOP
label_4d56fc:
    // 0x4d56fc: 0x0  nop
    ctx->pc = 0x4d56fcu;
    // NOP
label_4d5700:
    // 0x4d5700: 0x8134ff0  j           func_4D3FC0
label_4d5704:
    if (ctx->pc == 0x4D5704u) {
        ctx->pc = 0x4D5704u;
            // 0x4d5704: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4D5708u;
        goto label_4d5708;
    }
    ctx->pc = 0x4D5700u;
    ctx->pc = 0x4D5704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5700u;
            // 0x4d5704: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D3FC0u;
    {
        auto targetFn = runtime->lookupFunction(0x4D3FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4D5708u;
label_4d5708:
    // 0x4d5708: 0x0  nop
    ctx->pc = 0x4d5708u;
    // NOP
label_4d570c:
    // 0x4d570c: 0x0  nop
    ctx->pc = 0x4d570cu;
    // NOP
label_4d5710:
    // 0x4d5710: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4d5710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4d5714:
    // 0x4d5714: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4d5714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4d5718:
    // 0x4d5718: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4d5718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4d571c:
    // 0x4d571c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4d571cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4d5720:
    // 0x4d5720: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4d5720u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4d5724:
    // 0x4d5724: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_4d5728:
    if (ctx->pc == 0x4D5728u) {
        ctx->pc = 0x4D5728u;
            // 0x4d5728: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D572Cu;
        goto label_4d572c;
    }
    ctx->pc = 0x4D5724u;
    {
        const bool branch_taken_0x4d5724 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D5728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5724u;
            // 0x4d5728: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d5724) {
            ctx->pc = 0x4D5780u;
            goto label_4d5780;
        }
    }
    ctx->pc = 0x4D572Cu;
label_4d572c:
    // 0x4d572c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d572cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4d5730:
    // 0x4d5730: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d5730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4d5734:
    // 0x4d5734: 0x246325b0  addiu       $v1, $v1, 0x25B0
    ctx->pc = 0x4d5734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9648));
label_4d5738:
    // 0x4d5738: 0x244225e8  addiu       $v0, $v0, 0x25E8
    ctx->pc = 0x4d5738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9704));
label_4d573c:
    // 0x4d573c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d573cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4d5740:
    // 0x4d5740: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_4d5744:
    if (ctx->pc == 0x4D5744u) {
        ctx->pc = 0x4D5744u;
            // 0x4d5744: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4D5748u;
        goto label_4d5748;
    }
    ctx->pc = 0x4D5740u;
    {
        const bool branch_taken_0x4d5740 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D5744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5740u;
            // 0x4d5744: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d5740) {
            ctx->pc = 0x4D5768u;
            goto label_4d5768;
        }
    }
    ctx->pc = 0x4D5748u;
label_4d5748:
    // 0x4d5748: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4d5748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4d574c:
    // 0x4d574c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4d574cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4d5750:
    // 0x4d5750: 0x24632660  addiu       $v1, $v1, 0x2660
    ctx->pc = 0x4d5750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9824));
label_4d5754:
    // 0x4d5754: 0x24422698  addiu       $v0, $v0, 0x2698
    ctx->pc = 0x4d5754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9880));
label_4d5758:
    // 0x4d5758: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4d5758u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4d575c:
    // 0x4d575c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4d575cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4d5760:
    // 0x4d5760: 0xc1355e8  jal         func_4D57A0
label_4d5764:
    if (ctx->pc == 0x4D5764u) {
        ctx->pc = 0x4D5764u;
            // 0x4d5764: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4D5768u;
        goto label_4d5768;
    }
    ctx->pc = 0x4D5760u;
    SET_GPR_U32(ctx, 31, 0x4D5768u);
    ctx->pc = 0x4D5764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5760u;
            // 0x4d5764: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D57A0u;
    if (runtime->hasFunction(0x4D57A0u)) {
        auto targetFn = runtime->lookupFunction(0x4D57A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5768u; }
        if (ctx->pc != 0x4D5768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D57A0_0x4d57a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5768u; }
        if (ctx->pc != 0x4D5768u) { return; }
    }
    ctx->pc = 0x4D5768u;
label_4d5768:
    // 0x4d5768: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4d5768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4d576c:
    // 0x4d576c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4d576cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4d5770:
    // 0x4d5770: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4d5774:
    if (ctx->pc == 0x4D5774u) {
        ctx->pc = 0x4D5774u;
            // 0x4d5774: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D5778u;
        goto label_4d5778;
    }
    ctx->pc = 0x4D5770u;
    {
        const bool branch_taken_0x4d5770 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4d5770) {
            ctx->pc = 0x4D5774u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5770u;
            // 0x4d5774: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4D5784u;
            goto label_4d5784;
        }
    }
    ctx->pc = 0x4D5778u;
label_4d5778:
    // 0x4d5778: 0xc0400a8  jal         func_1002A0
label_4d577c:
    if (ctx->pc == 0x4D577Cu) {
        ctx->pc = 0x4D577Cu;
            // 0x4d577c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4D5780u;
        goto label_4d5780;
    }
    ctx->pc = 0x4D5778u;
    SET_GPR_U32(ctx, 31, 0x4D5780u);
    ctx->pc = 0x4D577Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5778u;
            // 0x4d577c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5780u; }
        if (ctx->pc != 0x4D5780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4D5780u; }
        if (ctx->pc != 0x4D5780u) { return; }
    }
    ctx->pc = 0x4D5780u;
label_4d5780:
    // 0x4d5780: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4d5780u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4d5784:
    // 0x4d5784: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4d5784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4d5788:
    // 0x4d5788: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4d5788u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4d578c:
    // 0x4d578c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4d578cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4d5790:
    // 0x4d5790: 0x3e00008  jr          $ra
label_4d5794:
    if (ctx->pc == 0x4D5794u) {
        ctx->pc = 0x4D5794u;
            // 0x4d5794: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4D5798u;
        goto label_4d5798;
    }
    ctx->pc = 0x4D5790u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D5794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D5790u;
            // 0x4d5794: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D5798u;
label_4d5798:
    // 0x4d5798: 0x0  nop
    ctx->pc = 0x4d5798u;
    // NOP
label_4d579c:
    // 0x4d579c: 0x0  nop
    ctx->pc = 0x4d579cu;
    // NOP
}
