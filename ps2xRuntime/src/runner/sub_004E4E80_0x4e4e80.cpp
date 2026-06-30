#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004E4E80
// Address: 0x4e4e80 - 0x4e5910
void sub_004E4E80_0x4e4e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E4E80_0x4e4e80");
#endif

    switch (ctx->pc) {
        case 0x4e4e80u: goto label_4e4e80;
        case 0x4e4e84u: goto label_4e4e84;
        case 0x4e4e88u: goto label_4e4e88;
        case 0x4e4e8cu: goto label_4e4e8c;
        case 0x4e4e90u: goto label_4e4e90;
        case 0x4e4e94u: goto label_4e4e94;
        case 0x4e4e98u: goto label_4e4e98;
        case 0x4e4e9cu: goto label_4e4e9c;
        case 0x4e4ea0u: goto label_4e4ea0;
        case 0x4e4ea4u: goto label_4e4ea4;
        case 0x4e4ea8u: goto label_4e4ea8;
        case 0x4e4eacu: goto label_4e4eac;
        case 0x4e4eb0u: goto label_4e4eb0;
        case 0x4e4eb4u: goto label_4e4eb4;
        case 0x4e4eb8u: goto label_4e4eb8;
        case 0x4e4ebcu: goto label_4e4ebc;
        case 0x4e4ec0u: goto label_4e4ec0;
        case 0x4e4ec4u: goto label_4e4ec4;
        case 0x4e4ec8u: goto label_4e4ec8;
        case 0x4e4eccu: goto label_4e4ecc;
        case 0x4e4ed0u: goto label_4e4ed0;
        case 0x4e4ed4u: goto label_4e4ed4;
        case 0x4e4ed8u: goto label_4e4ed8;
        case 0x4e4edcu: goto label_4e4edc;
        case 0x4e4ee0u: goto label_4e4ee0;
        case 0x4e4ee4u: goto label_4e4ee4;
        case 0x4e4ee8u: goto label_4e4ee8;
        case 0x4e4eecu: goto label_4e4eec;
        case 0x4e4ef0u: goto label_4e4ef0;
        case 0x4e4ef4u: goto label_4e4ef4;
        case 0x4e4ef8u: goto label_4e4ef8;
        case 0x4e4efcu: goto label_4e4efc;
        case 0x4e4f00u: goto label_4e4f00;
        case 0x4e4f04u: goto label_4e4f04;
        case 0x4e4f08u: goto label_4e4f08;
        case 0x4e4f0cu: goto label_4e4f0c;
        case 0x4e4f10u: goto label_4e4f10;
        case 0x4e4f14u: goto label_4e4f14;
        case 0x4e4f18u: goto label_4e4f18;
        case 0x4e4f1cu: goto label_4e4f1c;
        case 0x4e4f20u: goto label_4e4f20;
        case 0x4e4f24u: goto label_4e4f24;
        case 0x4e4f28u: goto label_4e4f28;
        case 0x4e4f2cu: goto label_4e4f2c;
        case 0x4e4f30u: goto label_4e4f30;
        case 0x4e4f34u: goto label_4e4f34;
        case 0x4e4f38u: goto label_4e4f38;
        case 0x4e4f3cu: goto label_4e4f3c;
        case 0x4e4f40u: goto label_4e4f40;
        case 0x4e4f44u: goto label_4e4f44;
        case 0x4e4f48u: goto label_4e4f48;
        case 0x4e4f4cu: goto label_4e4f4c;
        case 0x4e4f50u: goto label_4e4f50;
        case 0x4e4f54u: goto label_4e4f54;
        case 0x4e4f58u: goto label_4e4f58;
        case 0x4e4f5cu: goto label_4e4f5c;
        case 0x4e4f60u: goto label_4e4f60;
        case 0x4e4f64u: goto label_4e4f64;
        case 0x4e4f68u: goto label_4e4f68;
        case 0x4e4f6cu: goto label_4e4f6c;
        case 0x4e4f70u: goto label_4e4f70;
        case 0x4e4f74u: goto label_4e4f74;
        case 0x4e4f78u: goto label_4e4f78;
        case 0x4e4f7cu: goto label_4e4f7c;
        case 0x4e4f80u: goto label_4e4f80;
        case 0x4e4f84u: goto label_4e4f84;
        case 0x4e4f88u: goto label_4e4f88;
        case 0x4e4f8cu: goto label_4e4f8c;
        case 0x4e4f90u: goto label_4e4f90;
        case 0x4e4f94u: goto label_4e4f94;
        case 0x4e4f98u: goto label_4e4f98;
        case 0x4e4f9cu: goto label_4e4f9c;
        case 0x4e4fa0u: goto label_4e4fa0;
        case 0x4e4fa4u: goto label_4e4fa4;
        case 0x4e4fa8u: goto label_4e4fa8;
        case 0x4e4facu: goto label_4e4fac;
        case 0x4e4fb0u: goto label_4e4fb0;
        case 0x4e4fb4u: goto label_4e4fb4;
        case 0x4e4fb8u: goto label_4e4fb8;
        case 0x4e4fbcu: goto label_4e4fbc;
        case 0x4e4fc0u: goto label_4e4fc0;
        case 0x4e4fc4u: goto label_4e4fc4;
        case 0x4e4fc8u: goto label_4e4fc8;
        case 0x4e4fccu: goto label_4e4fcc;
        case 0x4e4fd0u: goto label_4e4fd0;
        case 0x4e4fd4u: goto label_4e4fd4;
        case 0x4e4fd8u: goto label_4e4fd8;
        case 0x4e4fdcu: goto label_4e4fdc;
        case 0x4e4fe0u: goto label_4e4fe0;
        case 0x4e4fe4u: goto label_4e4fe4;
        case 0x4e4fe8u: goto label_4e4fe8;
        case 0x4e4fecu: goto label_4e4fec;
        case 0x4e4ff0u: goto label_4e4ff0;
        case 0x4e4ff4u: goto label_4e4ff4;
        case 0x4e4ff8u: goto label_4e4ff8;
        case 0x4e4ffcu: goto label_4e4ffc;
        case 0x4e5000u: goto label_4e5000;
        case 0x4e5004u: goto label_4e5004;
        case 0x4e5008u: goto label_4e5008;
        case 0x4e500cu: goto label_4e500c;
        case 0x4e5010u: goto label_4e5010;
        case 0x4e5014u: goto label_4e5014;
        case 0x4e5018u: goto label_4e5018;
        case 0x4e501cu: goto label_4e501c;
        case 0x4e5020u: goto label_4e5020;
        case 0x4e5024u: goto label_4e5024;
        case 0x4e5028u: goto label_4e5028;
        case 0x4e502cu: goto label_4e502c;
        case 0x4e5030u: goto label_4e5030;
        case 0x4e5034u: goto label_4e5034;
        case 0x4e5038u: goto label_4e5038;
        case 0x4e503cu: goto label_4e503c;
        case 0x4e5040u: goto label_4e5040;
        case 0x4e5044u: goto label_4e5044;
        case 0x4e5048u: goto label_4e5048;
        case 0x4e504cu: goto label_4e504c;
        case 0x4e5050u: goto label_4e5050;
        case 0x4e5054u: goto label_4e5054;
        case 0x4e5058u: goto label_4e5058;
        case 0x4e505cu: goto label_4e505c;
        case 0x4e5060u: goto label_4e5060;
        case 0x4e5064u: goto label_4e5064;
        case 0x4e5068u: goto label_4e5068;
        case 0x4e506cu: goto label_4e506c;
        case 0x4e5070u: goto label_4e5070;
        case 0x4e5074u: goto label_4e5074;
        case 0x4e5078u: goto label_4e5078;
        case 0x4e507cu: goto label_4e507c;
        case 0x4e5080u: goto label_4e5080;
        case 0x4e5084u: goto label_4e5084;
        case 0x4e5088u: goto label_4e5088;
        case 0x4e508cu: goto label_4e508c;
        case 0x4e5090u: goto label_4e5090;
        case 0x4e5094u: goto label_4e5094;
        case 0x4e5098u: goto label_4e5098;
        case 0x4e509cu: goto label_4e509c;
        case 0x4e50a0u: goto label_4e50a0;
        case 0x4e50a4u: goto label_4e50a4;
        case 0x4e50a8u: goto label_4e50a8;
        case 0x4e50acu: goto label_4e50ac;
        case 0x4e50b0u: goto label_4e50b0;
        case 0x4e50b4u: goto label_4e50b4;
        case 0x4e50b8u: goto label_4e50b8;
        case 0x4e50bcu: goto label_4e50bc;
        case 0x4e50c0u: goto label_4e50c0;
        case 0x4e50c4u: goto label_4e50c4;
        case 0x4e50c8u: goto label_4e50c8;
        case 0x4e50ccu: goto label_4e50cc;
        case 0x4e50d0u: goto label_4e50d0;
        case 0x4e50d4u: goto label_4e50d4;
        case 0x4e50d8u: goto label_4e50d8;
        case 0x4e50dcu: goto label_4e50dc;
        case 0x4e50e0u: goto label_4e50e0;
        case 0x4e50e4u: goto label_4e50e4;
        case 0x4e50e8u: goto label_4e50e8;
        case 0x4e50ecu: goto label_4e50ec;
        case 0x4e50f0u: goto label_4e50f0;
        case 0x4e50f4u: goto label_4e50f4;
        case 0x4e50f8u: goto label_4e50f8;
        case 0x4e50fcu: goto label_4e50fc;
        case 0x4e5100u: goto label_4e5100;
        case 0x4e5104u: goto label_4e5104;
        case 0x4e5108u: goto label_4e5108;
        case 0x4e510cu: goto label_4e510c;
        case 0x4e5110u: goto label_4e5110;
        case 0x4e5114u: goto label_4e5114;
        case 0x4e5118u: goto label_4e5118;
        case 0x4e511cu: goto label_4e511c;
        case 0x4e5120u: goto label_4e5120;
        case 0x4e5124u: goto label_4e5124;
        case 0x4e5128u: goto label_4e5128;
        case 0x4e512cu: goto label_4e512c;
        case 0x4e5130u: goto label_4e5130;
        case 0x4e5134u: goto label_4e5134;
        case 0x4e5138u: goto label_4e5138;
        case 0x4e513cu: goto label_4e513c;
        case 0x4e5140u: goto label_4e5140;
        case 0x4e5144u: goto label_4e5144;
        case 0x4e5148u: goto label_4e5148;
        case 0x4e514cu: goto label_4e514c;
        case 0x4e5150u: goto label_4e5150;
        case 0x4e5154u: goto label_4e5154;
        case 0x4e5158u: goto label_4e5158;
        case 0x4e515cu: goto label_4e515c;
        case 0x4e5160u: goto label_4e5160;
        case 0x4e5164u: goto label_4e5164;
        case 0x4e5168u: goto label_4e5168;
        case 0x4e516cu: goto label_4e516c;
        case 0x4e5170u: goto label_4e5170;
        case 0x4e5174u: goto label_4e5174;
        case 0x4e5178u: goto label_4e5178;
        case 0x4e517cu: goto label_4e517c;
        case 0x4e5180u: goto label_4e5180;
        case 0x4e5184u: goto label_4e5184;
        case 0x4e5188u: goto label_4e5188;
        case 0x4e518cu: goto label_4e518c;
        case 0x4e5190u: goto label_4e5190;
        case 0x4e5194u: goto label_4e5194;
        case 0x4e5198u: goto label_4e5198;
        case 0x4e519cu: goto label_4e519c;
        case 0x4e51a0u: goto label_4e51a0;
        case 0x4e51a4u: goto label_4e51a4;
        case 0x4e51a8u: goto label_4e51a8;
        case 0x4e51acu: goto label_4e51ac;
        case 0x4e51b0u: goto label_4e51b0;
        case 0x4e51b4u: goto label_4e51b4;
        case 0x4e51b8u: goto label_4e51b8;
        case 0x4e51bcu: goto label_4e51bc;
        case 0x4e51c0u: goto label_4e51c0;
        case 0x4e51c4u: goto label_4e51c4;
        case 0x4e51c8u: goto label_4e51c8;
        case 0x4e51ccu: goto label_4e51cc;
        case 0x4e51d0u: goto label_4e51d0;
        case 0x4e51d4u: goto label_4e51d4;
        case 0x4e51d8u: goto label_4e51d8;
        case 0x4e51dcu: goto label_4e51dc;
        case 0x4e51e0u: goto label_4e51e0;
        case 0x4e51e4u: goto label_4e51e4;
        case 0x4e51e8u: goto label_4e51e8;
        case 0x4e51ecu: goto label_4e51ec;
        case 0x4e51f0u: goto label_4e51f0;
        case 0x4e51f4u: goto label_4e51f4;
        case 0x4e51f8u: goto label_4e51f8;
        case 0x4e51fcu: goto label_4e51fc;
        case 0x4e5200u: goto label_4e5200;
        case 0x4e5204u: goto label_4e5204;
        case 0x4e5208u: goto label_4e5208;
        case 0x4e520cu: goto label_4e520c;
        case 0x4e5210u: goto label_4e5210;
        case 0x4e5214u: goto label_4e5214;
        case 0x4e5218u: goto label_4e5218;
        case 0x4e521cu: goto label_4e521c;
        case 0x4e5220u: goto label_4e5220;
        case 0x4e5224u: goto label_4e5224;
        case 0x4e5228u: goto label_4e5228;
        case 0x4e522cu: goto label_4e522c;
        case 0x4e5230u: goto label_4e5230;
        case 0x4e5234u: goto label_4e5234;
        case 0x4e5238u: goto label_4e5238;
        case 0x4e523cu: goto label_4e523c;
        case 0x4e5240u: goto label_4e5240;
        case 0x4e5244u: goto label_4e5244;
        case 0x4e5248u: goto label_4e5248;
        case 0x4e524cu: goto label_4e524c;
        case 0x4e5250u: goto label_4e5250;
        case 0x4e5254u: goto label_4e5254;
        case 0x4e5258u: goto label_4e5258;
        case 0x4e525cu: goto label_4e525c;
        case 0x4e5260u: goto label_4e5260;
        case 0x4e5264u: goto label_4e5264;
        case 0x4e5268u: goto label_4e5268;
        case 0x4e526cu: goto label_4e526c;
        case 0x4e5270u: goto label_4e5270;
        case 0x4e5274u: goto label_4e5274;
        case 0x4e5278u: goto label_4e5278;
        case 0x4e527cu: goto label_4e527c;
        case 0x4e5280u: goto label_4e5280;
        case 0x4e5284u: goto label_4e5284;
        case 0x4e5288u: goto label_4e5288;
        case 0x4e528cu: goto label_4e528c;
        case 0x4e5290u: goto label_4e5290;
        case 0x4e5294u: goto label_4e5294;
        case 0x4e5298u: goto label_4e5298;
        case 0x4e529cu: goto label_4e529c;
        case 0x4e52a0u: goto label_4e52a0;
        case 0x4e52a4u: goto label_4e52a4;
        case 0x4e52a8u: goto label_4e52a8;
        case 0x4e52acu: goto label_4e52ac;
        case 0x4e52b0u: goto label_4e52b0;
        case 0x4e52b4u: goto label_4e52b4;
        case 0x4e52b8u: goto label_4e52b8;
        case 0x4e52bcu: goto label_4e52bc;
        case 0x4e52c0u: goto label_4e52c0;
        case 0x4e52c4u: goto label_4e52c4;
        case 0x4e52c8u: goto label_4e52c8;
        case 0x4e52ccu: goto label_4e52cc;
        case 0x4e52d0u: goto label_4e52d0;
        case 0x4e52d4u: goto label_4e52d4;
        case 0x4e52d8u: goto label_4e52d8;
        case 0x4e52dcu: goto label_4e52dc;
        case 0x4e52e0u: goto label_4e52e0;
        case 0x4e52e4u: goto label_4e52e4;
        case 0x4e52e8u: goto label_4e52e8;
        case 0x4e52ecu: goto label_4e52ec;
        case 0x4e52f0u: goto label_4e52f0;
        case 0x4e52f4u: goto label_4e52f4;
        case 0x4e52f8u: goto label_4e52f8;
        case 0x4e52fcu: goto label_4e52fc;
        case 0x4e5300u: goto label_4e5300;
        case 0x4e5304u: goto label_4e5304;
        case 0x4e5308u: goto label_4e5308;
        case 0x4e530cu: goto label_4e530c;
        case 0x4e5310u: goto label_4e5310;
        case 0x4e5314u: goto label_4e5314;
        case 0x4e5318u: goto label_4e5318;
        case 0x4e531cu: goto label_4e531c;
        case 0x4e5320u: goto label_4e5320;
        case 0x4e5324u: goto label_4e5324;
        case 0x4e5328u: goto label_4e5328;
        case 0x4e532cu: goto label_4e532c;
        case 0x4e5330u: goto label_4e5330;
        case 0x4e5334u: goto label_4e5334;
        case 0x4e5338u: goto label_4e5338;
        case 0x4e533cu: goto label_4e533c;
        case 0x4e5340u: goto label_4e5340;
        case 0x4e5344u: goto label_4e5344;
        case 0x4e5348u: goto label_4e5348;
        case 0x4e534cu: goto label_4e534c;
        case 0x4e5350u: goto label_4e5350;
        case 0x4e5354u: goto label_4e5354;
        case 0x4e5358u: goto label_4e5358;
        case 0x4e535cu: goto label_4e535c;
        case 0x4e5360u: goto label_4e5360;
        case 0x4e5364u: goto label_4e5364;
        case 0x4e5368u: goto label_4e5368;
        case 0x4e536cu: goto label_4e536c;
        case 0x4e5370u: goto label_4e5370;
        case 0x4e5374u: goto label_4e5374;
        case 0x4e5378u: goto label_4e5378;
        case 0x4e537cu: goto label_4e537c;
        case 0x4e5380u: goto label_4e5380;
        case 0x4e5384u: goto label_4e5384;
        case 0x4e5388u: goto label_4e5388;
        case 0x4e538cu: goto label_4e538c;
        case 0x4e5390u: goto label_4e5390;
        case 0x4e5394u: goto label_4e5394;
        case 0x4e5398u: goto label_4e5398;
        case 0x4e539cu: goto label_4e539c;
        case 0x4e53a0u: goto label_4e53a0;
        case 0x4e53a4u: goto label_4e53a4;
        case 0x4e53a8u: goto label_4e53a8;
        case 0x4e53acu: goto label_4e53ac;
        case 0x4e53b0u: goto label_4e53b0;
        case 0x4e53b4u: goto label_4e53b4;
        case 0x4e53b8u: goto label_4e53b8;
        case 0x4e53bcu: goto label_4e53bc;
        case 0x4e53c0u: goto label_4e53c0;
        case 0x4e53c4u: goto label_4e53c4;
        case 0x4e53c8u: goto label_4e53c8;
        case 0x4e53ccu: goto label_4e53cc;
        case 0x4e53d0u: goto label_4e53d0;
        case 0x4e53d4u: goto label_4e53d4;
        case 0x4e53d8u: goto label_4e53d8;
        case 0x4e53dcu: goto label_4e53dc;
        case 0x4e53e0u: goto label_4e53e0;
        case 0x4e53e4u: goto label_4e53e4;
        case 0x4e53e8u: goto label_4e53e8;
        case 0x4e53ecu: goto label_4e53ec;
        case 0x4e53f0u: goto label_4e53f0;
        case 0x4e53f4u: goto label_4e53f4;
        case 0x4e53f8u: goto label_4e53f8;
        case 0x4e53fcu: goto label_4e53fc;
        case 0x4e5400u: goto label_4e5400;
        case 0x4e5404u: goto label_4e5404;
        case 0x4e5408u: goto label_4e5408;
        case 0x4e540cu: goto label_4e540c;
        case 0x4e5410u: goto label_4e5410;
        case 0x4e5414u: goto label_4e5414;
        case 0x4e5418u: goto label_4e5418;
        case 0x4e541cu: goto label_4e541c;
        case 0x4e5420u: goto label_4e5420;
        case 0x4e5424u: goto label_4e5424;
        case 0x4e5428u: goto label_4e5428;
        case 0x4e542cu: goto label_4e542c;
        case 0x4e5430u: goto label_4e5430;
        case 0x4e5434u: goto label_4e5434;
        case 0x4e5438u: goto label_4e5438;
        case 0x4e543cu: goto label_4e543c;
        case 0x4e5440u: goto label_4e5440;
        case 0x4e5444u: goto label_4e5444;
        case 0x4e5448u: goto label_4e5448;
        case 0x4e544cu: goto label_4e544c;
        case 0x4e5450u: goto label_4e5450;
        case 0x4e5454u: goto label_4e5454;
        case 0x4e5458u: goto label_4e5458;
        case 0x4e545cu: goto label_4e545c;
        case 0x4e5460u: goto label_4e5460;
        case 0x4e5464u: goto label_4e5464;
        case 0x4e5468u: goto label_4e5468;
        case 0x4e546cu: goto label_4e546c;
        case 0x4e5470u: goto label_4e5470;
        case 0x4e5474u: goto label_4e5474;
        case 0x4e5478u: goto label_4e5478;
        case 0x4e547cu: goto label_4e547c;
        case 0x4e5480u: goto label_4e5480;
        case 0x4e5484u: goto label_4e5484;
        case 0x4e5488u: goto label_4e5488;
        case 0x4e548cu: goto label_4e548c;
        case 0x4e5490u: goto label_4e5490;
        case 0x4e5494u: goto label_4e5494;
        case 0x4e5498u: goto label_4e5498;
        case 0x4e549cu: goto label_4e549c;
        case 0x4e54a0u: goto label_4e54a0;
        case 0x4e54a4u: goto label_4e54a4;
        case 0x4e54a8u: goto label_4e54a8;
        case 0x4e54acu: goto label_4e54ac;
        case 0x4e54b0u: goto label_4e54b0;
        case 0x4e54b4u: goto label_4e54b4;
        case 0x4e54b8u: goto label_4e54b8;
        case 0x4e54bcu: goto label_4e54bc;
        case 0x4e54c0u: goto label_4e54c0;
        case 0x4e54c4u: goto label_4e54c4;
        case 0x4e54c8u: goto label_4e54c8;
        case 0x4e54ccu: goto label_4e54cc;
        case 0x4e54d0u: goto label_4e54d0;
        case 0x4e54d4u: goto label_4e54d4;
        case 0x4e54d8u: goto label_4e54d8;
        case 0x4e54dcu: goto label_4e54dc;
        case 0x4e54e0u: goto label_4e54e0;
        case 0x4e54e4u: goto label_4e54e4;
        case 0x4e54e8u: goto label_4e54e8;
        case 0x4e54ecu: goto label_4e54ec;
        case 0x4e54f0u: goto label_4e54f0;
        case 0x4e54f4u: goto label_4e54f4;
        case 0x4e54f8u: goto label_4e54f8;
        case 0x4e54fcu: goto label_4e54fc;
        case 0x4e5500u: goto label_4e5500;
        case 0x4e5504u: goto label_4e5504;
        case 0x4e5508u: goto label_4e5508;
        case 0x4e550cu: goto label_4e550c;
        case 0x4e5510u: goto label_4e5510;
        case 0x4e5514u: goto label_4e5514;
        case 0x4e5518u: goto label_4e5518;
        case 0x4e551cu: goto label_4e551c;
        case 0x4e5520u: goto label_4e5520;
        case 0x4e5524u: goto label_4e5524;
        case 0x4e5528u: goto label_4e5528;
        case 0x4e552cu: goto label_4e552c;
        case 0x4e5530u: goto label_4e5530;
        case 0x4e5534u: goto label_4e5534;
        case 0x4e5538u: goto label_4e5538;
        case 0x4e553cu: goto label_4e553c;
        case 0x4e5540u: goto label_4e5540;
        case 0x4e5544u: goto label_4e5544;
        case 0x4e5548u: goto label_4e5548;
        case 0x4e554cu: goto label_4e554c;
        case 0x4e5550u: goto label_4e5550;
        case 0x4e5554u: goto label_4e5554;
        case 0x4e5558u: goto label_4e5558;
        case 0x4e555cu: goto label_4e555c;
        case 0x4e5560u: goto label_4e5560;
        case 0x4e5564u: goto label_4e5564;
        case 0x4e5568u: goto label_4e5568;
        case 0x4e556cu: goto label_4e556c;
        case 0x4e5570u: goto label_4e5570;
        case 0x4e5574u: goto label_4e5574;
        case 0x4e5578u: goto label_4e5578;
        case 0x4e557cu: goto label_4e557c;
        case 0x4e5580u: goto label_4e5580;
        case 0x4e5584u: goto label_4e5584;
        case 0x4e5588u: goto label_4e5588;
        case 0x4e558cu: goto label_4e558c;
        case 0x4e5590u: goto label_4e5590;
        case 0x4e5594u: goto label_4e5594;
        case 0x4e5598u: goto label_4e5598;
        case 0x4e559cu: goto label_4e559c;
        case 0x4e55a0u: goto label_4e55a0;
        case 0x4e55a4u: goto label_4e55a4;
        case 0x4e55a8u: goto label_4e55a8;
        case 0x4e55acu: goto label_4e55ac;
        case 0x4e55b0u: goto label_4e55b0;
        case 0x4e55b4u: goto label_4e55b4;
        case 0x4e55b8u: goto label_4e55b8;
        case 0x4e55bcu: goto label_4e55bc;
        case 0x4e55c0u: goto label_4e55c0;
        case 0x4e55c4u: goto label_4e55c4;
        case 0x4e55c8u: goto label_4e55c8;
        case 0x4e55ccu: goto label_4e55cc;
        case 0x4e55d0u: goto label_4e55d0;
        case 0x4e55d4u: goto label_4e55d4;
        case 0x4e55d8u: goto label_4e55d8;
        case 0x4e55dcu: goto label_4e55dc;
        case 0x4e55e0u: goto label_4e55e0;
        case 0x4e55e4u: goto label_4e55e4;
        case 0x4e55e8u: goto label_4e55e8;
        case 0x4e55ecu: goto label_4e55ec;
        case 0x4e55f0u: goto label_4e55f0;
        case 0x4e55f4u: goto label_4e55f4;
        case 0x4e55f8u: goto label_4e55f8;
        case 0x4e55fcu: goto label_4e55fc;
        case 0x4e5600u: goto label_4e5600;
        case 0x4e5604u: goto label_4e5604;
        case 0x4e5608u: goto label_4e5608;
        case 0x4e560cu: goto label_4e560c;
        case 0x4e5610u: goto label_4e5610;
        case 0x4e5614u: goto label_4e5614;
        case 0x4e5618u: goto label_4e5618;
        case 0x4e561cu: goto label_4e561c;
        case 0x4e5620u: goto label_4e5620;
        case 0x4e5624u: goto label_4e5624;
        case 0x4e5628u: goto label_4e5628;
        case 0x4e562cu: goto label_4e562c;
        case 0x4e5630u: goto label_4e5630;
        case 0x4e5634u: goto label_4e5634;
        case 0x4e5638u: goto label_4e5638;
        case 0x4e563cu: goto label_4e563c;
        case 0x4e5640u: goto label_4e5640;
        case 0x4e5644u: goto label_4e5644;
        case 0x4e5648u: goto label_4e5648;
        case 0x4e564cu: goto label_4e564c;
        case 0x4e5650u: goto label_4e5650;
        case 0x4e5654u: goto label_4e5654;
        case 0x4e5658u: goto label_4e5658;
        case 0x4e565cu: goto label_4e565c;
        case 0x4e5660u: goto label_4e5660;
        case 0x4e5664u: goto label_4e5664;
        case 0x4e5668u: goto label_4e5668;
        case 0x4e566cu: goto label_4e566c;
        case 0x4e5670u: goto label_4e5670;
        case 0x4e5674u: goto label_4e5674;
        case 0x4e5678u: goto label_4e5678;
        case 0x4e567cu: goto label_4e567c;
        case 0x4e5680u: goto label_4e5680;
        case 0x4e5684u: goto label_4e5684;
        case 0x4e5688u: goto label_4e5688;
        case 0x4e568cu: goto label_4e568c;
        case 0x4e5690u: goto label_4e5690;
        case 0x4e5694u: goto label_4e5694;
        case 0x4e5698u: goto label_4e5698;
        case 0x4e569cu: goto label_4e569c;
        case 0x4e56a0u: goto label_4e56a0;
        case 0x4e56a4u: goto label_4e56a4;
        case 0x4e56a8u: goto label_4e56a8;
        case 0x4e56acu: goto label_4e56ac;
        case 0x4e56b0u: goto label_4e56b0;
        case 0x4e56b4u: goto label_4e56b4;
        case 0x4e56b8u: goto label_4e56b8;
        case 0x4e56bcu: goto label_4e56bc;
        case 0x4e56c0u: goto label_4e56c0;
        case 0x4e56c4u: goto label_4e56c4;
        case 0x4e56c8u: goto label_4e56c8;
        case 0x4e56ccu: goto label_4e56cc;
        case 0x4e56d0u: goto label_4e56d0;
        case 0x4e56d4u: goto label_4e56d4;
        case 0x4e56d8u: goto label_4e56d8;
        case 0x4e56dcu: goto label_4e56dc;
        case 0x4e56e0u: goto label_4e56e0;
        case 0x4e56e4u: goto label_4e56e4;
        case 0x4e56e8u: goto label_4e56e8;
        case 0x4e56ecu: goto label_4e56ec;
        case 0x4e56f0u: goto label_4e56f0;
        case 0x4e56f4u: goto label_4e56f4;
        case 0x4e56f8u: goto label_4e56f8;
        case 0x4e56fcu: goto label_4e56fc;
        case 0x4e5700u: goto label_4e5700;
        case 0x4e5704u: goto label_4e5704;
        case 0x4e5708u: goto label_4e5708;
        case 0x4e570cu: goto label_4e570c;
        case 0x4e5710u: goto label_4e5710;
        case 0x4e5714u: goto label_4e5714;
        case 0x4e5718u: goto label_4e5718;
        case 0x4e571cu: goto label_4e571c;
        case 0x4e5720u: goto label_4e5720;
        case 0x4e5724u: goto label_4e5724;
        case 0x4e5728u: goto label_4e5728;
        case 0x4e572cu: goto label_4e572c;
        case 0x4e5730u: goto label_4e5730;
        case 0x4e5734u: goto label_4e5734;
        case 0x4e5738u: goto label_4e5738;
        case 0x4e573cu: goto label_4e573c;
        case 0x4e5740u: goto label_4e5740;
        case 0x4e5744u: goto label_4e5744;
        case 0x4e5748u: goto label_4e5748;
        case 0x4e574cu: goto label_4e574c;
        case 0x4e5750u: goto label_4e5750;
        case 0x4e5754u: goto label_4e5754;
        case 0x4e5758u: goto label_4e5758;
        case 0x4e575cu: goto label_4e575c;
        case 0x4e5760u: goto label_4e5760;
        case 0x4e5764u: goto label_4e5764;
        case 0x4e5768u: goto label_4e5768;
        case 0x4e576cu: goto label_4e576c;
        case 0x4e5770u: goto label_4e5770;
        case 0x4e5774u: goto label_4e5774;
        case 0x4e5778u: goto label_4e5778;
        case 0x4e577cu: goto label_4e577c;
        case 0x4e5780u: goto label_4e5780;
        case 0x4e5784u: goto label_4e5784;
        case 0x4e5788u: goto label_4e5788;
        case 0x4e578cu: goto label_4e578c;
        case 0x4e5790u: goto label_4e5790;
        case 0x4e5794u: goto label_4e5794;
        case 0x4e5798u: goto label_4e5798;
        case 0x4e579cu: goto label_4e579c;
        case 0x4e57a0u: goto label_4e57a0;
        case 0x4e57a4u: goto label_4e57a4;
        case 0x4e57a8u: goto label_4e57a8;
        case 0x4e57acu: goto label_4e57ac;
        case 0x4e57b0u: goto label_4e57b0;
        case 0x4e57b4u: goto label_4e57b4;
        case 0x4e57b8u: goto label_4e57b8;
        case 0x4e57bcu: goto label_4e57bc;
        case 0x4e57c0u: goto label_4e57c0;
        case 0x4e57c4u: goto label_4e57c4;
        case 0x4e57c8u: goto label_4e57c8;
        case 0x4e57ccu: goto label_4e57cc;
        case 0x4e57d0u: goto label_4e57d0;
        case 0x4e57d4u: goto label_4e57d4;
        case 0x4e57d8u: goto label_4e57d8;
        case 0x4e57dcu: goto label_4e57dc;
        case 0x4e57e0u: goto label_4e57e0;
        case 0x4e57e4u: goto label_4e57e4;
        case 0x4e57e8u: goto label_4e57e8;
        case 0x4e57ecu: goto label_4e57ec;
        case 0x4e57f0u: goto label_4e57f0;
        case 0x4e57f4u: goto label_4e57f4;
        case 0x4e57f8u: goto label_4e57f8;
        case 0x4e57fcu: goto label_4e57fc;
        case 0x4e5800u: goto label_4e5800;
        case 0x4e5804u: goto label_4e5804;
        case 0x4e5808u: goto label_4e5808;
        case 0x4e580cu: goto label_4e580c;
        case 0x4e5810u: goto label_4e5810;
        case 0x4e5814u: goto label_4e5814;
        case 0x4e5818u: goto label_4e5818;
        case 0x4e581cu: goto label_4e581c;
        case 0x4e5820u: goto label_4e5820;
        case 0x4e5824u: goto label_4e5824;
        case 0x4e5828u: goto label_4e5828;
        case 0x4e582cu: goto label_4e582c;
        case 0x4e5830u: goto label_4e5830;
        case 0x4e5834u: goto label_4e5834;
        case 0x4e5838u: goto label_4e5838;
        case 0x4e583cu: goto label_4e583c;
        case 0x4e5840u: goto label_4e5840;
        case 0x4e5844u: goto label_4e5844;
        case 0x4e5848u: goto label_4e5848;
        case 0x4e584cu: goto label_4e584c;
        case 0x4e5850u: goto label_4e5850;
        case 0x4e5854u: goto label_4e5854;
        case 0x4e5858u: goto label_4e5858;
        case 0x4e585cu: goto label_4e585c;
        case 0x4e5860u: goto label_4e5860;
        case 0x4e5864u: goto label_4e5864;
        case 0x4e5868u: goto label_4e5868;
        case 0x4e586cu: goto label_4e586c;
        case 0x4e5870u: goto label_4e5870;
        case 0x4e5874u: goto label_4e5874;
        case 0x4e5878u: goto label_4e5878;
        case 0x4e587cu: goto label_4e587c;
        case 0x4e5880u: goto label_4e5880;
        case 0x4e5884u: goto label_4e5884;
        case 0x4e5888u: goto label_4e5888;
        case 0x4e588cu: goto label_4e588c;
        case 0x4e5890u: goto label_4e5890;
        case 0x4e5894u: goto label_4e5894;
        case 0x4e5898u: goto label_4e5898;
        case 0x4e589cu: goto label_4e589c;
        case 0x4e58a0u: goto label_4e58a0;
        case 0x4e58a4u: goto label_4e58a4;
        case 0x4e58a8u: goto label_4e58a8;
        case 0x4e58acu: goto label_4e58ac;
        case 0x4e58b0u: goto label_4e58b0;
        case 0x4e58b4u: goto label_4e58b4;
        case 0x4e58b8u: goto label_4e58b8;
        case 0x4e58bcu: goto label_4e58bc;
        case 0x4e58c0u: goto label_4e58c0;
        case 0x4e58c4u: goto label_4e58c4;
        case 0x4e58c8u: goto label_4e58c8;
        case 0x4e58ccu: goto label_4e58cc;
        case 0x4e58d0u: goto label_4e58d0;
        case 0x4e58d4u: goto label_4e58d4;
        case 0x4e58d8u: goto label_4e58d8;
        case 0x4e58dcu: goto label_4e58dc;
        case 0x4e58e0u: goto label_4e58e0;
        case 0x4e58e4u: goto label_4e58e4;
        case 0x4e58e8u: goto label_4e58e8;
        case 0x4e58ecu: goto label_4e58ec;
        case 0x4e58f0u: goto label_4e58f0;
        case 0x4e58f4u: goto label_4e58f4;
        case 0x4e58f8u: goto label_4e58f8;
        case 0x4e58fcu: goto label_4e58fc;
        case 0x4e5900u: goto label_4e5900;
        case 0x4e5904u: goto label_4e5904;
        case 0x4e5908u: goto label_4e5908;
        case 0x4e590cu: goto label_4e590c;
        default: break;
    }

    ctx->pc = 0x4e4e80u;

label_4e4e80:
    // 0x4e4e80: 0x8c8600d8  lw          $a2, 0xD8($a0)
    ctx->pc = 0x4e4e80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
label_4e4e84:
    // 0x4e4e84: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x4e4e84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_4e4e88:
    // 0x4e4e88: 0x24a58290  addiu       $a1, $a1, -0x7D70
    ctx->pc = 0x4e4e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935184));
label_4e4e8c:
    // 0x4e4e8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4e4e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e4e90:
    // 0x4e4e90: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x4e4e90u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_4e4e94:
    // 0x4e4e94: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4e4e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_4e4e98:
    // 0x4e4e98: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x4e4e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e4e9c:
    // 0x4e4e9c: 0xe48000dc  swc1        $f0, 0xDC($a0)
    ctx->pc = 0x4e4e9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 220), bits); }
label_4e4ea0:
    // 0x4e4ea0: 0x3e00008  jr          $ra
label_4e4ea4:
    if (ctx->pc == 0x4E4EA4u) {
        ctx->pc = 0x4E4EA4u;
            // 0x4e4ea4: 0xac8300d0  sw          $v1, 0xD0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 3));
        ctx->pc = 0x4E4EA8u;
        goto label_4e4ea8;
    }
    ctx->pc = 0x4E4EA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E4EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4EA0u;
            // 0x4e4ea4: 0xac8300d0  sw          $v1, 0xD0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E4EA8u;
label_4e4ea8:
    // 0x4e4ea8: 0x0  nop
    ctx->pc = 0x4e4ea8u;
    // NOP
label_4e4eac:
    // 0x4e4eac: 0x0  nop
    ctx->pc = 0x4e4eacu;
    // NOP
label_4e4eb0:
    // 0x4e4eb0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4e4eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4e4eb4:
    // 0x4e4eb4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4e4eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4e4eb8:
    // 0x4e4eb8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4e4eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4e4ebc:
    // 0x4e4ebc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e4ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4e4ec0:
    // 0x4e4ec0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e4ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e4ec4:
    // 0x4e4ec4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e4ec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e4ec8:
    // 0x4e4ec8: 0x8c8400d0  lw          $a0, 0xD0($a0)
    ctx->pc = 0x4e4ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_4e4ecc:
    // 0x4e4ecc: 0x1083008b  beq         $a0, $v1, . + 4 + (0x8B << 2)
label_4e4ed0:
    if (ctx->pc == 0x4E4ED0u) {
        ctx->pc = 0x4E4ED4u;
        goto label_4e4ed4;
    }
    ctx->pc = 0x4E4ECCu;
    {
        const bool branch_taken_0x4e4ecc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4e4ecc) {
            ctx->pc = 0x4E50FCu;
            goto label_4e50fc;
        }
    }
    ctx->pc = 0x4E4ED4u;
label_4e4ed4:
    // 0x4e4ed4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4e4ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4e4ed8:
    // 0x4e4ed8: 0x10830051  beq         $a0, $v1, . + 4 + (0x51 << 2)
label_4e4edc:
    if (ctx->pc == 0x4E4EDCu) {
        ctx->pc = 0x4E4EE0u;
        goto label_4e4ee0;
    }
    ctx->pc = 0x4E4ED8u;
    {
        const bool branch_taken_0x4e4ed8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4e4ed8) {
            ctx->pc = 0x4E5020u;
            goto label_4e5020;
        }
    }
    ctx->pc = 0x4E4EE0u;
label_4e4ee0:
    // 0x4e4ee0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4e4ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4e4ee4:
    // 0x4e4ee4: 0x10830035  beq         $a0, $v1, . + 4 + (0x35 << 2)
label_4e4ee8:
    if (ctx->pc == 0x4E4EE8u) {
        ctx->pc = 0x4E4EECu;
        goto label_4e4eec;
    }
    ctx->pc = 0x4E4EE4u;
    {
        const bool branch_taken_0x4e4ee4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4e4ee4) {
            ctx->pc = 0x4E4FBCu;
            goto label_4e4fbc;
        }
    }
    ctx->pc = 0x4E4EECu;
label_4e4eec:
    // 0x4e4eec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4e4eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e4ef0:
    // 0x4e4ef0: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_4e4ef4:
    if (ctx->pc == 0x4E4EF4u) {
        ctx->pc = 0x4E4EF8u;
        goto label_4e4ef8;
    }
    ctx->pc = 0x4E4EF0u;
    {
        const bool branch_taken_0x4e4ef0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4e4ef0) {
            ctx->pc = 0x4E4F08u;
            goto label_4e4f08;
        }
    }
    ctx->pc = 0x4E4EF8u;
label_4e4ef8:
    // 0x4e4ef8: 0x50800099  beql        $a0, $zero, . + 4 + (0x99 << 2)
label_4e4efc:
    if (ctx->pc == 0x4E4EFCu) {
        ctx->pc = 0x4E4EFCu;
            // 0x4e4efc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x4E4F00u;
        goto label_4e4f00;
    }
    ctx->pc = 0x4E4EF8u;
    {
        const bool branch_taken_0x4e4ef8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e4ef8) {
            ctx->pc = 0x4E4EFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4EF8u;
            // 0x4e4efc: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E5160u;
            goto label_4e5160;
        }
    }
    ctx->pc = 0x4E4F00u;
label_4e4f00:
    // 0x4e4f00: 0x10000096  b           . + 4 + (0x96 << 2)
label_4e4f04:
    if (ctx->pc == 0x4E4F04u) {
        ctx->pc = 0x4E4F08u;
        goto label_4e4f08;
    }
    ctx->pc = 0x4E4F00u;
    {
        const bool branch_taken_0x4e4f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e4f00) {
            ctx->pc = 0x4E515Cu;
            goto label_4e515c;
        }
    }
    ctx->pc = 0x4E4F08u;
label_4e4f08:
    // 0x4e4f08: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4e4f08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4e4f0c:
    // 0x4e4f0c: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4e4f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4e4f10:
    // 0x4e4f10: 0xc60100dc  lwc1        $f1, 0xDC($s0)
    ctx->pc = 0x4e4f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4e4f14:
    // 0x4e4f14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4e4f14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4e4f18:
    // 0x4e4f18: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x4e4f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4e4f1c:
    // 0x4e4f1c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x4e4f1cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_4e4f20:
    // 0x4e4f20: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4e4f20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4e4f24:
    // 0x4e4f24: 0x4500008d  bc1f        . + 4 + (0x8D << 2)
label_4e4f28:
    if (ctx->pc == 0x4E4F28u) {
        ctx->pc = 0x4E4F28u;
            // 0x4e4f28: 0xe60100dc  swc1        $f1, 0xDC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 220), bits); }
        ctx->pc = 0x4E4F2Cu;
        goto label_4e4f2c;
    }
    ctx->pc = 0x4E4F24u;
    {
        const bool branch_taken_0x4e4f24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4E4F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4F24u;
            // 0x4e4f28: 0xe60100dc  swc1        $f1, 0xDC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 220), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e4f24) {
            ctx->pc = 0x4E515Cu;
            goto label_4e515c;
        }
    }
    ctx->pc = 0x4E4F2Cu;
label_4e4f2c:
    // 0x4e4f2c: 0xc60600f0  lwc1        $f6, 0xF0($s0)
    ctx->pc = 0x4e4f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_4e4f30:
    // 0x4e4f30: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4e4f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4e4f34:
    // 0x4e4f34: 0x8c438a08  lw          $v1, -0x75F8($v0)
    ctx->pc = 0x4e4f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4e4f38:
    // 0x4e4f38: 0xe7a60050  swc1        $f6, 0x50($sp)
    ctx->pc = 0x4e4f38u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_4e4f3c:
    // 0x4e4f3c: 0xc60500f4  lwc1        $f5, 0xF4($s0)
    ctx->pc = 0x4e4f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_4e4f40:
    // 0x4e4f40: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e4f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e4f44:
    // 0x4e4f44: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4e4f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4e4f48:
    // 0x4e4f48: 0xe7a50054  swc1        $f5, 0x54($sp)
    ctx->pc = 0x4e4f48u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_4e4f4c:
    // 0x4e4f4c: 0xc60400f8  lwc1        $f4, 0xF8($s0)
    ctx->pc = 0x4e4f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4e4f50:
    // 0x4e4f50: 0xe7a40058  swc1        $f4, 0x58($sp)
    ctx->pc = 0x4e4f50u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_4e4f54:
    // 0x4e4f54: 0xc60300fc  lwc1        $f3, 0xFC($s0)
    ctx->pc = 0x4e4f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4e4f58:
    // 0x4e4f58: 0xe7a3005c  swc1        $f3, 0x5C($sp)
    ctx->pc = 0x4e4f58u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_4e4f5c:
    // 0x4e4f5c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x4e4f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4e4f60:
    // 0x4e4f60: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x4e4f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e4f64:
    // 0x4e4f64: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x4e4f64u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4e4f68:
    // 0x4e4f68: 0x46023002  mul.s       $f0, $f6, $f2
    ctx->pc = 0x4e4f68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_4e4f6c:
    // 0x4e4f6c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x4e4f6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_4e4f70:
    // 0x4e4f70: 0x46022802  mul.s       $f0, $f5, $f2
    ctx->pc = 0x4e4f70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_4e4f74:
    // 0x4e4f74: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x4e4f74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_4e4f78:
    // 0x4e4f78: 0x46022042  mul.s       $f1, $f4, $f2
    ctx->pc = 0x4e4f78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_4e4f7c:
    // 0x4e4f7c: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x4e4f7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_4e4f80:
    // 0x4e4f80: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x4e4f80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_4e4f84:
    // 0x4e4f84: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x4e4f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_4e4f88:
    // 0x4e4f88: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x4e4f88u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4e4f8c:
    // 0x4e4f8c: 0xc088b74  jal         func_222DD0
label_4e4f90:
    if (ctx->pc == 0x4E4F90u) {
        ctx->pc = 0x4E4F90u;
            // 0x4e4f90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E4F94u;
        goto label_4e4f94;
    }
    ctx->pc = 0x4E4F8Cu;
    SET_GPR_U32(ctx, 31, 0x4E4F94u);
    ctx->pc = 0x4E4F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4F8Cu;
            // 0x4e4f90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4F94u; }
        if (ctx->pc != 0x4E4F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E4F94u; }
        if (ctx->pc != 0x4E4F94u) { return; }
    }
    ctx->pc = 0x4E4F94u;
label_4e4f94:
    // 0x4e4f94: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x4e4f94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_4e4f98:
    // 0x4e4f98: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x4e4f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_4e4f9c:
    // 0x4e4f9c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4e4f9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4e4fa0:
    // 0x4e4fa0: 0x320f809  jalr        $t9
label_4e4fa4:
    if (ctx->pc == 0x4E4FA4u) {
        ctx->pc = 0x4E4FA4u;
            // 0x4e4fa4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4E4FA8u;
        goto label_4e4fa8;
    }
    ctx->pc = 0x4E4FA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E4FA8u);
        ctx->pc = 0x4E4FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4FA0u;
            // 0x4e4fa4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E4FA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E4FA8u; }
            if (ctx->pc != 0x4E4FA8u) { return; }
        }
        }
    }
    ctx->pc = 0x4E4FA8u;
label_4e4fa8:
    // 0x4e4fa8: 0xc60000e0  lwc1        $f0, 0xE0($s0)
    ctx->pc = 0x4e4fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e4fac:
    // 0x4e4fac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4e4facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4e4fb0:
    // 0x4e4fb0: 0xe60000dc  swc1        $f0, 0xDC($s0)
    ctx->pc = 0x4e4fb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 220), bits); }
label_4e4fb4:
    // 0x4e4fb4: 0x10000069  b           . + 4 + (0x69 << 2)
label_4e4fb8:
    if (ctx->pc == 0x4E4FB8u) {
        ctx->pc = 0x4E4FB8u;
            // 0x4e4fb8: 0xae0300d0  sw          $v1, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
        ctx->pc = 0x4E4FBCu;
        goto label_4e4fbc;
    }
    ctx->pc = 0x4E4FB4u;
    {
        const bool branch_taken_0x4e4fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E4FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4FB4u;
            // 0x4e4fb8: 0xae0300d0  sw          $v1, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e4fb4) {
            ctx->pc = 0x4E515Cu;
            goto label_4e515c;
        }
    }
    ctx->pc = 0x4E4FBCu;
label_4e4fbc:
    // 0x4e4fbc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4e4fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4e4fc0:
    // 0x4e4fc0: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4e4fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4e4fc4:
    // 0x4e4fc4: 0xc60100dc  lwc1        $f1, 0xDC($s0)
    ctx->pc = 0x4e4fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4e4fc8:
    // 0x4e4fc8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4e4fc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4e4fcc:
    // 0x4e4fcc: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x4e4fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4e4fd0:
    // 0x4e4fd0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x4e4fd0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_4e4fd4:
    // 0x4e4fd4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4e4fd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4e4fd8:
    // 0x4e4fd8: 0x45000060  bc1f        . + 4 + (0x60 << 2)
label_4e4fdc:
    if (ctx->pc == 0x4E4FDCu) {
        ctx->pc = 0x4E4FDCu;
            // 0x4e4fdc: 0xe60100dc  swc1        $f1, 0xDC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 220), bits); }
        ctx->pc = 0x4E4FE0u;
        goto label_4e4fe0;
    }
    ctx->pc = 0x4E4FD8u;
    {
        const bool branch_taken_0x4e4fd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4E4FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4FD8u;
            // 0x4e4fdc: 0xe60100dc  swc1        $f1, 0xDC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 220), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e4fd8) {
            ctx->pc = 0x4E515Cu;
            goto label_4e515c;
        }
    }
    ctx->pc = 0x4E4FE0u;
label_4e4fe0:
    // 0x4e4fe0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x4e4fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_4e4fe4:
    // 0x4e4fe4: 0xae0200dc  sw          $v0, 0xDC($s0)
    ctx->pc = 0x4e4fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 2));
label_4e4fe8:
    // 0x4e4fe8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x4e4fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_4e4fec:
    // 0x4e4fec: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x4e4fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_4e4ff0:
    // 0x4e4ff0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x4e4ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_4e4ff4:
    // 0x4e4ff4: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x4e4ff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_4e4ff8:
    // 0x4e4ff8: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x4e4ff8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4e4ffc:
    // 0x4e4ffc: 0xc088b74  jal         func_222DD0
label_4e5000:
    if (ctx->pc == 0x4E5000u) {
        ctx->pc = 0x4E5000u;
            // 0x4e5000: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E5004u;
        goto label_4e5004;
    }
    ctx->pc = 0x4E4FFCu;
    SET_GPR_U32(ctx, 31, 0x4E5004u);
    ctx->pc = 0x4E5000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E4FFCu;
            // 0x4e5000: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5004u; }
        if (ctx->pc != 0x4E5004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5004u; }
        if (ctx->pc != 0x4E5004u) { return; }
    }
    ctx->pc = 0x4E5004u;
label_4e5004:
    // 0x4e5004: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x4e5004u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_4e5008:
    // 0x4e5008: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x4e5008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_4e500c:
    // 0x4e500c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4e500cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4e5010:
    // 0x4e5010: 0x320f809  jalr        $t9
label_4e5014:
    if (ctx->pc == 0x4E5014u) {
        ctx->pc = 0x4E5014u;
            // 0x4e5014: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x4E5018u;
        goto label_4e5018;
    }
    ctx->pc = 0x4E5010u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E5018u);
        ctx->pc = 0x4E5014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5010u;
            // 0x4e5014: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E5018u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E5018u; }
            if (ctx->pc != 0x4E5018u) { return; }
        }
        }
    }
    ctx->pc = 0x4E5018u;
label_4e5018:
    // 0x4e5018: 0x10000050  b           . + 4 + (0x50 << 2)
label_4e501c:
    if (ctx->pc == 0x4E501Cu) {
        ctx->pc = 0x4E501Cu;
            // 0x4e501c: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->pc = 0x4E5020u;
        goto label_4e5020;
    }
    ctx->pc = 0x4E5018u;
    {
        const bool branch_taken_0x4e5018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E501Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5018u;
            // 0x4e501c: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5018) {
            ctx->pc = 0x4E515Cu;
            goto label_4e515c;
        }
    }
    ctx->pc = 0x4E5020u;
label_4e5020:
    // 0x4e5020: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4e5020u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4e5024:
    // 0x4e5024: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4e5024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4e5028:
    // 0x4e5028: 0xc60100dc  lwc1        $f1, 0xDC($s0)
    ctx->pc = 0x4e5028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4e502c:
    // 0x4e502c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4e502cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4e5030:
    // 0x4e5030: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x4e5030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4e5034:
    // 0x4e5034: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x4e5034u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_4e5038:
    // 0x4e5038: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4e5038u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4e503c:
    // 0x4e503c: 0x45000047  bc1f        . + 4 + (0x47 << 2)
label_4e5040:
    if (ctx->pc == 0x4E5040u) {
        ctx->pc = 0x4E5040u;
            // 0x4e5040: 0xe60100dc  swc1        $f1, 0xDC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 220), bits); }
        ctx->pc = 0x4E5044u;
        goto label_4e5044;
    }
    ctx->pc = 0x4E503Cu;
    {
        const bool branch_taken_0x4e503c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4E5040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E503Cu;
            // 0x4e5040: 0xe60100dc  swc1        $f1, 0xDC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 220), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e503c) {
            ctx->pc = 0x4E515Cu;
            goto label_4e515c;
        }
    }
    ctx->pc = 0x4E5044u;
label_4e5044:
    // 0x4e5044: 0xc60700f0  lwc1        $f7, 0xF0($s0)
    ctx->pc = 0x4e5044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_4e5048:
    // 0x4e5048: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4e5048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4e504c:
    // 0x4e504c: 0x8c448a08  lw          $a0, -0x75F8($v0)
    ctx->pc = 0x4e504cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4e5050:
    // 0x4e5050: 0xe7a70050  swc1        $f7, 0x50($sp)
    ctx->pc = 0x4e5050u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_4e5054:
    // 0x4e5054: 0xc60400f4  lwc1        $f4, 0xF4($s0)
    ctx->pc = 0x4e5054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4e5058:
    // 0x4e5058: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e5058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e505c:
    // 0x4e505c: 0x8c43e3e0  lw          $v1, -0x1C20($v0)
    ctx->pc = 0x4e505cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4e5060:
    // 0x4e5060: 0xe7a40054  swc1        $f4, 0x54($sp)
    ctx->pc = 0x4e5060u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_4e5064:
    // 0x4e5064: 0xc60600f8  lwc1        $f6, 0xF8($s0)
    ctx->pc = 0x4e5064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_4e5068:
    // 0x4e5068: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4e5068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4e506c:
    // 0x4e506c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x4e506cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4e5070:
    // 0x4e5070: 0xe7a60058  swc1        $f6, 0x58($sp)
    ctx->pc = 0x4e5070u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_4e5074:
    // 0x4e5074: 0xc60500fc  lwc1        $f5, 0xFC($s0)
    ctx->pc = 0x4e5074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_4e5078:
    // 0x4e5078: 0xe7a5005c  swc1        $f5, 0x5C($sp)
    ctx->pc = 0x4e5078u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_4e507c:
    // 0x4e507c: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x4e507cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4e5080:
    // 0x4e5080: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x4e5080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e5084:
    // 0x4e5084: 0x460008c2  mul.s       $f3, $f1, $f0
    ctx->pc = 0x4e5084u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4e5088:
    // 0x4e5088: 0x46033802  mul.s       $f0, $f7, $f3
    ctx->pc = 0x4e5088u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
label_4e508c:
    // 0x4e508c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x4e508cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_4e5090:
    // 0x4e5090: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x4e5090u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_4e5094:
    // 0x4e5094: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x4e5094u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_4e5098:
    // 0x4e5098: 0x46033042  mul.s       $f1, $f6, $f3
    ctx->pc = 0x4e5098u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
label_4e509c:
    // 0x4e509c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x4e509cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_4e50a0:
    // 0x4e50a0: 0x460328c2  mul.s       $f3, $f5, $f3
    ctx->pc = 0x4e50a0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
label_4e50a4:
    // 0x4e50a4: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x4e50a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_4e50a8:
    // 0x4e50a8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x4e50a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_4e50ac:
    // 0x4e50ac: 0x46022002  mul.s       $f0, $f4, $f2
    ctx->pc = 0x4e50acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_4e50b0:
    // 0x4e50b0: 0xe7a40054  swc1        $f4, 0x54($sp)
    ctx->pc = 0x4e50b0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_4e50b4:
    // 0x4e50b4: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x4e50b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_4e50b8:
    // 0x4e50b8: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x4e50b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_4e50bc:
    // 0x4e50bc: 0xe7a3005c  swc1        $f3, 0x5C($sp)
    ctx->pc = 0x4e50bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_4e50c0:
    // 0x4e50c0: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x4e50c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_4e50c4:
    // 0x4e50c4: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x4e50c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_4e50c8:
    // 0x4e50c8: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x4e50c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4e50cc:
    // 0x4e50cc: 0xc088b74  jal         func_222DD0
label_4e50d0:
    if (ctx->pc == 0x4E50D0u) {
        ctx->pc = 0x4E50D0u;
            // 0x4e50d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E50D4u;
        goto label_4e50d4;
    }
    ctx->pc = 0x4E50CCu;
    SET_GPR_U32(ctx, 31, 0x4E50D4u);
    ctx->pc = 0x4E50D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E50CCu;
            // 0x4e50d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E50D4u; }
        if (ctx->pc != 0x4E50D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E50D4u; }
        if (ctx->pc != 0x4E50D4u) { return; }
    }
    ctx->pc = 0x4E50D4u;
label_4e50d4:
    // 0x4e50d4: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x4e50d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_4e50d8:
    // 0x4e50d8: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x4e50d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_4e50dc:
    // 0x4e50dc: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4e50dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4e50e0:
    // 0x4e50e0: 0x320f809  jalr        $t9
label_4e50e4:
    if (ctx->pc == 0x4E50E4u) {
        ctx->pc = 0x4E50E4u;
            // 0x4e50e4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4E50E8u;
        goto label_4e50e8;
    }
    ctx->pc = 0x4E50E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E50E8u);
        ctx->pc = 0x4E50E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E50E0u;
            // 0x4e50e4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E50E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E50E8u; }
            if (ctx->pc != 0x4E50E8u) { return; }
        }
        }
    }
    ctx->pc = 0x4E50E8u;
label_4e50e8:
    // 0x4e50e8: 0xc60000e0  lwc1        $f0, 0xE0($s0)
    ctx->pc = 0x4e50e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e50ec:
    // 0x4e50ec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4e50ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4e50f0:
    // 0x4e50f0: 0xe60000dc  swc1        $f0, 0xDC($s0)
    ctx->pc = 0x4e50f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 220), bits); }
label_4e50f4:
    // 0x4e50f4: 0x10000019  b           . + 4 + (0x19 << 2)
label_4e50f8:
    if (ctx->pc == 0x4E50F8u) {
        ctx->pc = 0x4E50F8u;
            // 0x4e50f8: 0xae0300d0  sw          $v1, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
        ctx->pc = 0x4E50FCu;
        goto label_4e50fc;
    }
    ctx->pc = 0x4E50F4u;
    {
        const bool branch_taken_0x4e50f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E50F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E50F4u;
            // 0x4e50f8: 0xae0300d0  sw          $v1, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e50f4) {
            ctx->pc = 0x4E515Cu;
            goto label_4e515c;
        }
    }
    ctx->pc = 0x4E50FCu;
label_4e50fc:
    // 0x4e50fc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4e50fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4e5100:
    // 0x4e5100: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4e5100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4e5104:
    // 0x4e5104: 0xc60100dc  lwc1        $f1, 0xDC($s0)
    ctx->pc = 0x4e5104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4e5108:
    // 0x4e5108: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4e5108u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4e510c:
    // 0x4e510c: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x4e510cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4e5110:
    // 0x4e5110: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x4e5110u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_4e5114:
    // 0x4e5114: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4e5114u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4e5118:
    // 0x4e5118: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_4e511c:
    if (ctx->pc == 0x4E511Cu) {
        ctx->pc = 0x4E511Cu;
            // 0x4e511c: 0xe60100dc  swc1        $f1, 0xDC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 220), bits); }
        ctx->pc = 0x4E5120u;
        goto label_4e5120;
    }
    ctx->pc = 0x4E5118u;
    {
        const bool branch_taken_0x4e5118 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4E511Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5118u;
            // 0x4e511c: 0xe60100dc  swc1        $f1, 0xDC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 220), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5118) {
            ctx->pc = 0x4E515Cu;
            goto label_4e515c;
        }
    }
    ctx->pc = 0x4E5120u;
label_4e5120:
    // 0x4e5120: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x4e5120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_4e5124:
    // 0x4e5124: 0xae0200dc  sw          $v0, 0xDC($s0)
    ctx->pc = 0x4e5124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 2));
label_4e5128:
    // 0x4e5128: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x4e5128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_4e512c:
    // 0x4e512c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x4e512cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_4e5130:
    // 0x4e5130: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x4e5130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_4e5134:
    // 0x4e5134: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x4e5134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_4e5138:
    // 0x4e5138: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x4e5138u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4e513c:
    // 0x4e513c: 0xc088b74  jal         func_222DD0
label_4e5140:
    if (ctx->pc == 0x4E5140u) {
        ctx->pc = 0x4E5140u;
            // 0x4e5140: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E5144u;
        goto label_4e5144;
    }
    ctx->pc = 0x4E513Cu;
    SET_GPR_U32(ctx, 31, 0x4E5144u);
    ctx->pc = 0x4E5140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E513Cu;
            // 0x4e5140: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5144u; }
        if (ctx->pc != 0x4E5144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5144u; }
        if (ctx->pc != 0x4E5144u) { return; }
    }
    ctx->pc = 0x4E5144u;
label_4e5144:
    // 0x4e5144: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x4e5144u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_4e5148:
    // 0x4e5148: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x4e5148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_4e514c:
    // 0x4e514c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4e514cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4e5150:
    // 0x4e5150: 0x320f809  jalr        $t9
label_4e5154:
    if (ctx->pc == 0x4E5154u) {
        ctx->pc = 0x4E5154u;
            // 0x4e5154: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4E5158u;
        goto label_4e5158;
    }
    ctx->pc = 0x4E5150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E5158u);
        ctx->pc = 0x4E5154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5150u;
            // 0x4e5154: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E5158u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E5158u; }
            if (ctx->pc != 0x4E5158u) { return; }
        }
        }
    }
    ctx->pc = 0x4E5158u;
label_4e5158:
    // 0x4e5158: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x4e5158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_4e515c:
    // 0x4e515c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4e515cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4e5160:
    // 0x4e5160: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e5160u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e5164:
    // 0x4e5164: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e5164u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e5168:
    // 0x4e5168: 0x3e00008  jr          $ra
label_4e516c:
    if (ctx->pc == 0x4E516Cu) {
        ctx->pc = 0x4E516Cu;
            // 0x4e516c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4E5170u;
        goto label_4e5170;
    }
    ctx->pc = 0x4E5168u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E516Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5168u;
            // 0x4e516c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E5170u;
label_4e5170:
    // 0x4e5170: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4e5170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4e5174:
    // 0x4e5174: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4e5174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4e5178:
    // 0x4e5178: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e5178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e517c:
    // 0x4e517c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e517cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e5180:
    // 0x4e5180: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x4e5180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_4e5184:
    // 0x4e5184: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4e5188:
    if (ctx->pc == 0x4E5188u) {
        ctx->pc = 0x4E5188u;
            // 0x4e5188: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x4E518Cu;
        goto label_4e518c;
    }
    ctx->pc = 0x4E5184u;
    {
        const bool branch_taken_0x4e5184 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e5184) {
            ctx->pc = 0x4E5188u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5184u;
            // 0x4e5188: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E51A0u;
            goto label_4e51a0;
        }
    }
    ctx->pc = 0x4E518Cu;
label_4e518c:
    // 0x4e518c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4e518cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4e5190:
    // 0x4e5190: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4e5190u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4e5194:
    // 0x4e5194: 0x320f809  jalr        $t9
label_4e5198:
    if (ctx->pc == 0x4E5198u) {
        ctx->pc = 0x4E5198u;
            // 0x4e5198: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4E519Cu;
        goto label_4e519c;
    }
    ctx->pc = 0x4E5194u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E519Cu);
        ctx->pc = 0x4E5198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5194u;
            // 0x4e5198: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E519Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E519Cu; }
            if (ctx->pc != 0x4E519Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4E519Cu;
label_4e519c:
    // 0x4e519c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x4e519cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_4e51a0:
    // 0x4e51a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e51a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4e51a4:
    // 0x4e51a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e51a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e51a8:
    // 0x4e51a8: 0x3e00008  jr          $ra
label_4e51ac:
    if (ctx->pc == 0x4E51ACu) {
        ctx->pc = 0x4E51ACu;
            // 0x4e51ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4E51B0u;
        goto label_4e51b0;
    }
    ctx->pc = 0x4E51A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E51ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E51A8u;
            // 0x4e51ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E51B0u;
label_4e51b0:
    // 0x4e51b0: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x4e51b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
label_4e51b4:
    // 0x4e51b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4e51b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_4e51b8:
    // 0x4e51b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4e51b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4e51bc:
    // 0x4e51bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e51bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4e51c0:
    // 0x4e51c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4e51c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e51c4:
    // 0x4e51c4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e51c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e51c8:
    // 0x4e51c8: 0xc0892d0  jal         func_224B40
label_4e51cc:
    if (ctx->pc == 0x4E51CCu) {
        ctx->pc = 0x4E51CCu;
            // 0x4e51cc: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x4E51D0u;
        goto label_4e51d0;
    }
    ctx->pc = 0x4E51C8u;
    SET_GPR_U32(ctx, 31, 0x4E51D0u);
    ctx->pc = 0x4E51CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E51C8u;
            // 0x4e51cc: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E51D0u; }
        if (ctx->pc != 0x4E51D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E51D0u; }
        if (ctx->pc != 0x4E51D0u) { return; }
    }
    ctx->pc = 0x4E51D0u;
label_4e51d0:
    // 0x4e51d0: 0x8e2600d8  lw          $a2, 0xD8($s1)
    ctx->pc = 0x4e51d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_4e51d4:
    // 0x4e51d4: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x4e51d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_4e51d8:
    // 0x4e51d8: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x4e51d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_4e51dc:
    // 0x4e51dc: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x4e51dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_4e51e0:
    // 0x4e51e0: 0x24a581f0  addiu       $a1, $a1, -0x7E10
    ctx->pc = 0x4e51e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935024));
label_4e51e4:
    // 0x4e51e4: 0x246381f4  addiu       $v1, $v1, -0x7E0C
    ctx->pc = 0x4e51e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935028));
label_4e51e8:
    // 0x4e51e8: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x4e51e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_4e51ec:
    // 0x4e51ec: 0x244281f8  addiu       $v0, $v0, -0x7E08
    ctx->pc = 0x4e51ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935032));
label_4e51f0:
    // 0x4e51f0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x4e51f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_4e51f4:
    // 0x4e51f4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x4e51f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_4e51f8:
    // 0x4e51f8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x4e51f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_4e51fc:
    // 0x4e51fc: 0xc4ac0000  lwc1        $f12, 0x0($a1)
    ctx->pc = 0x4e51fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4e5200:
    // 0x4e5200: 0xc46d0000  lwc1        $f13, 0x0($v1)
    ctx->pc = 0x4e5200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_4e5204:
    // 0x4e5204: 0xc44e0000  lwc1        $f14, 0x0($v0)
    ctx->pc = 0x4e5204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_4e5208:
    // 0x4e5208: 0xc04cbd8  jal         func_132F60
label_4e520c:
    if (ctx->pc == 0x4E520Cu) {
        ctx->pc = 0x4E520Cu;
            // 0x4e520c: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x4E5210u;
        goto label_4e5210;
    }
    ctx->pc = 0x4E5208u;
    SET_GPR_U32(ctx, 31, 0x4E5210u);
    ctx->pc = 0x4E520Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5208u;
            // 0x4e520c: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5210u; }
        if (ctx->pc != 0x4E5210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5210u; }
        if (ctx->pc != 0x4E5210u) { return; }
    }
    ctx->pc = 0x4E5210u;
label_4e5210:
    // 0x4e5210: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x4e5210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4e5214:
    // 0x4e5214: 0xc04f278  jal         func_13C9E0
label_4e5218:
    if (ctx->pc == 0x4E5218u) {
        ctx->pc = 0x4E5218u;
            // 0x4e5218: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x4E521Cu;
        goto label_4e521c;
    }
    ctx->pc = 0x4E5214u;
    SET_GPR_U32(ctx, 31, 0x4E521Cu);
    ctx->pc = 0x4E5218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5214u;
            // 0x4e5218: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E521Cu; }
        if (ctx->pc != 0x4E521Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E521Cu; }
        if (ctx->pc != 0x4E521Cu) { return; }
    }
    ctx->pc = 0x4E521Cu;
label_4e521c:
    // 0x4e521c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x4e521cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_4e5220:
    // 0x4e5220: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x4e5220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_4e5224:
    // 0x4e5224: 0xc04cca0  jal         func_133280
label_4e5228:
    if (ctx->pc == 0x4E5228u) {
        ctx->pc = 0x4E5228u;
            // 0x4e5228: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E522Cu;
        goto label_4e522c;
    }
    ctx->pc = 0x4E5224u;
    SET_GPR_U32(ctx, 31, 0x4E522Cu);
    ctx->pc = 0x4E5228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5224u;
            // 0x4e5228: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E522Cu; }
        if (ctx->pc != 0x4E522Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E522Cu; }
        if (ctx->pc != 0x4E522Cu) { return; }
    }
    ctx->pc = 0x4E522Cu;
label_4e522c:
    // 0x4e522c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x4e522cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_4e5230:
    // 0x4e5230: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x4e5230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_4e5234:
    // 0x4e5234: 0xc04cbe0  jal         func_132F80
label_4e5238:
    if (ctx->pc == 0x4E5238u) {
        ctx->pc = 0x4E5238u;
            // 0x4e5238: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E523Cu;
        goto label_4e523c;
    }
    ctx->pc = 0x4E5234u;
    SET_GPR_U32(ctx, 31, 0x4E523Cu);
    ctx->pc = 0x4E5238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5234u;
            // 0x4e5238: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F80u;
    if (runtime->hasFunction(0x132F80u)) {
        auto targetFn = runtime->lookupFunction(0x132F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E523Cu; }
        if (ctx->pc != 0x4E523Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F80_0x132f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E523Cu; }
        if (ctx->pc != 0x4E523Cu) { return; }
    }
    ctx->pc = 0x4E523Cu;
label_4e523c:
    // 0x4e523c: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x4e523cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_4e5240:
    // 0x4e5240: 0x5460008a  bnel        $v1, $zero, . + 4 + (0x8A << 2)
label_4e5244:
    if (ctx->pc == 0x4E5244u) {
        ctx->pc = 0x4E5244u;
            // 0x4e5244: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x4E5248u;
        goto label_4e5248;
    }
    ctx->pc = 0x4E5240u;
    {
        const bool branch_taken_0x4e5240 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e5240) {
            ctx->pc = 0x4E5244u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5240u;
            // 0x4e5244: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E546Cu;
            goto label_4e546c;
        }
    }
    ctx->pc = 0x4E5248u;
label_4e5248:
    // 0x4e5248: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4e5248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4e524c:
    // 0x4e524c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4e524cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4e5250:
    // 0x4e5250: 0x8c42aa98  lw          $v0, -0x5568($v0)
    ctx->pc = 0x4e5250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945432)));
label_4e5254:
    // 0x4e5254: 0x8c500060  lw          $s0, 0x60($v0)
    ctx->pc = 0x4e5254u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_4e5258:
    // 0x4e5258: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x4e5258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_4e525c:
    // 0x4e525c: 0xc0b6e68  jal         func_2DB9A0
label_4e5260:
    if (ctx->pc == 0x4E5260u) {
        ctx->pc = 0x4E5260u;
            // 0x4e5260: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
        ctx->pc = 0x4E5264u;
        goto label_4e5264;
    }
    ctx->pc = 0x4E525Cu;
    SET_GPR_U32(ctx, 31, 0x4E5264u);
    ctx->pc = 0x4E5260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E525Cu;
            // 0x4e5260: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5264u; }
        if (ctx->pc != 0x4E5264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5264u; }
        if (ctx->pc != 0x4E5264u) { return; }
    }
    ctx->pc = 0x4E5264u;
label_4e5264:
    // 0x4e5264: 0xc0b6dac  jal         func_2DB6B0
label_4e5268:
    if (ctx->pc == 0x4E5268u) {
        ctx->pc = 0x4E5268u;
            // 0x4e5268: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4E526Cu;
        goto label_4e526c;
    }
    ctx->pc = 0x4E5264u;
    SET_GPR_U32(ctx, 31, 0x4E526Cu);
    ctx->pc = 0x4E5268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5264u;
            // 0x4e5268: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E526Cu; }
        if (ctx->pc != 0x4E526Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E526Cu; }
        if (ctx->pc != 0x4E526Cu) { return; }
    }
    ctx->pc = 0x4E526Cu;
label_4e526c:
    // 0x4e526c: 0xc0cac94  jal         func_32B250
label_4e5270:
    if (ctx->pc == 0x4E5270u) {
        ctx->pc = 0x4E5270u;
            // 0x4e5270: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4E5274u;
        goto label_4e5274;
    }
    ctx->pc = 0x4E526Cu;
    SET_GPR_U32(ctx, 31, 0x4E5274u);
    ctx->pc = 0x4E5270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E526Cu;
            // 0x4e5270: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5274u; }
        if (ctx->pc != 0x4E5274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5274u; }
        if (ctx->pc != 0x4E5274u) { return; }
    }
    ctx->pc = 0x4E5274u;
label_4e5274:
    // 0x4e5274: 0xc0cac84  jal         func_32B210
label_4e5278:
    if (ctx->pc == 0x4E5278u) {
        ctx->pc = 0x4E5278u;
            // 0x4e5278: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4E527Cu;
        goto label_4e527c;
    }
    ctx->pc = 0x4E5274u;
    SET_GPR_U32(ctx, 31, 0x4E527Cu);
    ctx->pc = 0x4E5278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5274u;
            // 0x4e5278: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E527Cu; }
        if (ctx->pc != 0x4E527Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E527Cu; }
        if (ctx->pc != 0x4E527Cu) { return; }
    }
    ctx->pc = 0x4E527Cu;
label_4e527c:
    // 0x4e527c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x4e527cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_4e5280:
    // 0x4e5280: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x4e5280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_4e5284:
    // 0x4e5284: 0xc44cc910  lwc1        $f12, -0x36F0($v0)
    ctx->pc = 0x4e5284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4e5288:
    // 0x4e5288: 0xc0a5a68  jal         func_2969A0
label_4e528c:
    if (ctx->pc == 0x4E528Cu) {
        ctx->pc = 0x4E528Cu;
            // 0x4e528c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x4E5290u;
        goto label_4e5290;
    }
    ctx->pc = 0x4E5288u;
    SET_GPR_U32(ctx, 31, 0x4E5290u);
    ctx->pc = 0x4E528Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5288u;
            // 0x4e528c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5290u; }
        if (ctx->pc != 0x4E5290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5290u; }
        if (ctx->pc != 0x4E5290u) { return; }
    }
    ctx->pc = 0x4E5290u;
label_4e5290:
    // 0x4e5290: 0xc7a200d0  lwc1        $f2, 0xD0($sp)
    ctx->pc = 0x4e5290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4e5294:
    // 0x4e5294: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x4e5294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_4e5298:
    // 0x4e5298: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x4e5298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4e529c:
    // 0x4e529c: 0x3448cccd  ori         $t0, $v0, 0xCCCD
    ctx->pc = 0x4e529cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_4e52a0:
    // 0x4e52a0: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x4e52a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e52a4:
    // 0x4e52a4: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x4e52a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_4e52a8:
    // 0x4e52a8: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x4e52a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_4e52ac:
    // 0x4e52ac: 0xafb000e4  sw          $s0, 0xE4($sp)
    ctx->pc = 0x4e52acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 16));
label_4e52b0:
    // 0x4e52b0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e52b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e52b4:
    // 0x4e52b4: 0xafa000fc  sw          $zero, 0xFC($sp)
    ctx->pc = 0x4e52b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 0));
label_4e52b8:
    // 0x4e52b8: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x4e52b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_4e52bc:
    // 0x4e52bc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4e52bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4e52c0:
    // 0x4e52c0: 0xe7a200f0  swc1        $f2, 0xF0($sp)
    ctx->pc = 0x4e52c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_4e52c4:
    // 0x4e52c4: 0x3c0a42c8  lui         $t2, 0x42C8
    ctx->pc = 0x4e52c4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17096 << 16));
label_4e52c8:
    // 0x4e52c8: 0xe7a100f4  swc1        $f1, 0xF4($sp)
    ctx->pc = 0x4e52c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_4e52cc:
    // 0x4e52cc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x4e52ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e52d0:
    // 0x4e52d0: 0xc624002c  lwc1        $f4, 0x2C($s1)
    ctx->pc = 0x4e52d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4e52d4:
    // 0x4e52d4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x4e52d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4e52d8:
    // 0x4e52d8: 0xc6230028  lwc1        $f3, 0x28($s1)
    ctx->pc = 0x4e52d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4e52dc:
    // 0x4e52dc: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x4e52dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_4e52e0:
    // 0x4e52e0: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x4e52e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e52e4:
    // 0x4e52e4: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x4e52e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_4e52e8:
    // 0x4e52e8: 0xc6220024  lwc1        $f2, 0x24($s1)
    ctx->pc = 0x4e52e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4e52ec:
    // 0x4e52ec: 0xc6210020  lwc1        $f1, 0x20($s1)
    ctx->pc = 0x4e52ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4e52f0:
    // 0x4e52f0: 0xe7a10100  swc1        $f1, 0x100($sp)
    ctx->pc = 0x4e52f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_4e52f4:
    // 0x4e52f4: 0xafaa0188  sw          $t2, 0x188($sp)
    ctx->pc = 0x4e52f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 10));
label_4e52f8:
    // 0x4e52f8: 0xe7a20104  swc1        $f2, 0x104($sp)
    ctx->pc = 0x4e52f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_4e52fc:
    // 0x4e52fc: 0xa3a90190  sb          $t1, 0x190($sp)
    ctx->pc = 0x4e52fcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 400), (uint8_t)GPR_U32(ctx, 9));
label_4e5300:
    // 0x4e5300: 0xe7a30108  swc1        $f3, 0x108($sp)
    ctx->pc = 0x4e5300u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_4e5304:
    // 0x4e5304: 0xafa8018c  sw          $t0, 0x18C($sp)
    ctx->pc = 0x4e5304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 8));
label_4e5308:
    // 0x4e5308: 0xe7a4010c  swc1        $f4, 0x10C($sp)
    ctx->pc = 0x4e5308u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_4e530c:
    // 0x4e530c: 0xa3a70192  sb          $a3, 0x192($sp)
    ctx->pc = 0x4e530cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 402), (uint8_t)GPR_U32(ctx, 7));
label_4e5310:
    // 0x4e5310: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x4e5310u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_4e5314:
    // 0x4e5314: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x4e5314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
label_4e5318:
    // 0x4e5318: 0xc0a7a88  jal         func_29EA20
label_4e531c:
    if (ctx->pc == 0x4E531Cu) {
        ctx->pc = 0x4E531Cu;
            // 0x4e531c: 0xafa00178  sw          $zero, 0x178($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 0));
        ctx->pc = 0x4E5320u;
        goto label_4e5320;
    }
    ctx->pc = 0x4E5318u;
    SET_GPR_U32(ctx, 31, 0x4E5320u);
    ctx->pc = 0x4E531Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5318u;
            // 0x4e531c: 0xafa00178  sw          $zero, 0x178($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5320u; }
        if (ctx->pc != 0x4E5320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5320u; }
        if (ctx->pc != 0x4E5320u) { return; }
    }
    ctx->pc = 0x4E5320u;
label_4e5320:
    // 0x4e5320: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x4e5320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_4e5324:
    // 0x4e5324: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4e5324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e5328:
    // 0x4e5328: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_4e532c:
    if (ctx->pc == 0x4E532Cu) {
        ctx->pc = 0x4E532Cu;
            // 0x4e532c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4E5330u;
        goto label_4e5330;
    }
    ctx->pc = 0x4E5328u;
    {
        const bool branch_taken_0x4e5328 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E532Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5328u;
            // 0x4e532c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5328) {
            ctx->pc = 0x4E5378u;
            goto label_4e5378;
        }
    }
    ctx->pc = 0x4E5330u;
label_4e5330:
    // 0x4e5330: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e5330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e5334:
    // 0x4e5334: 0xc088ef4  jal         func_223BD0
label_4e5338:
    if (ctx->pc == 0x4E5338u) {
        ctx->pc = 0x4E5338u;
            // 0x4e5338: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x4E533Cu;
        goto label_4e533c;
    }
    ctx->pc = 0x4E5334u;
    SET_GPR_U32(ctx, 31, 0x4E533Cu);
    ctx->pc = 0x4E5338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5334u;
            // 0x4e5338: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E533Cu; }
        if (ctx->pc != 0x4E533Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E533Cu; }
        if (ctx->pc != 0x4E533Cu) { return; }
    }
    ctx->pc = 0x4E533Cu;
label_4e533c:
    // 0x4e533c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4e533cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4e5340:
    // 0x4e5340: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4e5340u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4e5344:
    // 0x4e5344: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x4e5344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_4e5348:
    // 0x4e5348: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x4e5348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_4e534c:
    // 0x4e534c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4e534cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4e5350:
    // 0x4e5350: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x4e5350u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_4e5354:
    // 0x4e5354: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e5354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e5358:
    // 0x4e5358: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e5358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4e535c:
    // 0x4e535c: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x4e535cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_4e5360:
    // 0x4e5360: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x4e5360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_4e5364:
    // 0x4e5364: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x4e5364u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_4e5368:
    // 0x4e5368: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4e5368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4e536c:
    // 0x4e536c: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x4e536cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4e5370:
    // 0x4e5370: 0xc088b38  jal         func_222CE0
label_4e5374:
    if (ctx->pc == 0x4E5374u) {
        ctx->pc = 0x4E5374u;
            // 0x4e5374: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E5378u;
        goto label_4e5378;
    }
    ctx->pc = 0x4E5370u;
    SET_GPR_U32(ctx, 31, 0x4E5378u);
    ctx->pc = 0x4E5374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5370u;
            // 0x4e5374: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5378u; }
        if (ctx->pc != 0x4E5378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5378u; }
        if (ctx->pc != 0x4E5378u) { return; }
    }
    ctx->pc = 0x4E5378u;
label_4e5378:
    // 0x4e5378: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e5378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e537c:
    // 0x4e537c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4e537cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4e5380:
    // 0x4e5380: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4e5380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e5384:
    // 0x4e5384: 0xc08914c  jal         func_224530
label_4e5388:
    if (ctx->pc == 0x4E5388u) {
        ctx->pc = 0x4E5388u;
            // 0x4e5388: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E538Cu;
        goto label_4e538c;
    }
    ctx->pc = 0x4E5384u;
    SET_GPR_U32(ctx, 31, 0x4E538Cu);
    ctx->pc = 0x4E5388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5384u;
            // 0x4e5388: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E538Cu; }
        if (ctx->pc != 0x4E538Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E538Cu; }
        if (ctx->pc != 0x4E538Cu) { return; }
    }
    ctx->pc = 0x4E538Cu;
label_4e538c:
    // 0x4e538c: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x4e538cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_4e5390:
    // 0x4e5390: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e5390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e5394:
    // 0x4e5394: 0x246321a0  addiu       $v1, $v1, 0x21A0
    ctx->pc = 0x4e5394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8608));
label_4e5398:
    // 0x4e5398: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4e5398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e539c:
    // 0x4e539c: 0xae030200  sw          $v1, 0x200($s0)
    ctx->pc = 0x4e539cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 3));
label_4e53a0:
    // 0x4e53a0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4e53a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4e53a4:
    // 0x4e53a4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4e53a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4e53a8:
    // 0x4e53a8: 0xc08c164  jal         func_230590
label_4e53ac:
    if (ctx->pc == 0x4E53ACu) {
        ctx->pc = 0x4E53ACu;
            // 0x4e53ac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4E53B0u;
        goto label_4e53b0;
    }
    ctx->pc = 0x4E53A8u;
    SET_GPR_U32(ctx, 31, 0x4E53B0u);
    ctx->pc = 0x4E53ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E53A8u;
            // 0x4e53ac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E53B0u; }
        if (ctx->pc != 0x4E53B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E53B0u; }
        if (ctx->pc != 0x4E53B0u) { return; }
    }
    ctx->pc = 0x4E53B0u;
label_4e53b0:
    // 0x4e53b0: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x4e53b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_4e53b4:
    // 0x4e53b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e53b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e53b8:
    // 0x4e53b8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4e53b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4e53bc:
    // 0x4e53bc: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x4e53bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4e53c0:
    // 0x4e53c0: 0xc0a7a88  jal         func_29EA20
label_4e53c4:
    if (ctx->pc == 0x4E53C4u) {
        ctx->pc = 0x4E53C4u;
            // 0x4e53c4: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x4E53C8u;
        goto label_4e53c8;
    }
    ctx->pc = 0x4E53C0u;
    SET_GPR_U32(ctx, 31, 0x4E53C8u);
    ctx->pc = 0x4E53C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E53C0u;
            // 0x4e53c4: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E53C8u; }
        if (ctx->pc != 0x4E53C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E53C8u; }
        if (ctx->pc != 0x4E53C8u) { return; }
    }
    ctx->pc = 0x4E53C8u;
label_4e53c8:
    // 0x4e53c8: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x4e53c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4e53cc:
    // 0x4e53cc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4e53ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e53d0:
    // 0x4e53d0: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_4e53d4:
    if (ctx->pc == 0x4E53D4u) {
        ctx->pc = 0x4E53D4u;
            // 0x4e53d4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4E53D8u;
        goto label_4e53d8;
    }
    ctx->pc = 0x4E53D0u;
    {
        const bool branch_taken_0x4e53d0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E53D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E53D0u;
            // 0x4e53d4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e53d0) {
            ctx->pc = 0x4E53F4u;
            goto label_4e53f4;
        }
    }
    ctx->pc = 0x4E53D8u;
label_4e53d8:
    // 0x4e53d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4e53d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e53dc:
    // 0x4e53dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4e53dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e53e0:
    // 0x4e53e0: 0xc0869d0  jal         func_21A740
label_4e53e4:
    if (ctx->pc == 0x4E53E4u) {
        ctx->pc = 0x4E53E4u;
            // 0x4e53e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E53E8u;
        goto label_4e53e8;
    }
    ctx->pc = 0x4E53E0u;
    SET_GPR_U32(ctx, 31, 0x4E53E8u);
    ctx->pc = 0x4E53E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E53E0u;
            // 0x4e53e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E53E8u; }
        if (ctx->pc != 0x4E53E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E53E8u; }
        if (ctx->pc != 0x4E53E8u) { return; }
    }
    ctx->pc = 0x4E53E8u;
label_4e53e8:
    // 0x4e53e8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4e53e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4e53ec:
    // 0x4e53ec: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x4e53ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_4e53f0:
    // 0x4e53f0: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4e53f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_4e53f4:
    // 0x4e53f4: 0xae120210  sw          $s2, 0x210($s0)
    ctx->pc = 0x4e53f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 18));
label_4e53f8:
    // 0x4e53f8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e53f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e53fc:
    // 0x4e53fc: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4e53fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4e5400:
    // 0x4e5400: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4e5400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4e5404:
    // 0x4e5404: 0xc08c650  jal         func_231940
label_4e5408:
    if (ctx->pc == 0x4E5408u) {
        ctx->pc = 0x4E5408u;
            // 0x4e5408: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E540Cu;
        goto label_4e540c;
    }
    ctx->pc = 0x4E5404u;
    SET_GPR_U32(ctx, 31, 0x4E540Cu);
    ctx->pc = 0x4E5408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5404u;
            // 0x4e5408: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E540Cu; }
        if (ctx->pc != 0x4E540Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E540Cu; }
        if (ctx->pc != 0x4E540Cu) { return; }
    }
    ctx->pc = 0x4E540Cu;
label_4e540c:
    // 0x4e540c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4e540cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e5410:
    // 0x4e5410: 0x3c0441f0  lui         $a0, 0x41F0
    ctx->pc = 0x4e5410u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16880 << 16));
label_4e5414:
    // 0x4e5414: 0xa2250064  sb          $a1, 0x64($s1)
    ctx->pc = 0x4e5414u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 100), (uint8_t)GPR_U32(ctx, 5));
label_4e5418:
    // 0x4e5418: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x4e5418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_4e541c:
    // 0x4e541c: 0xa2200065  sb          $zero, 0x65($s1)
    ctx->pc = 0x4e541cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 101), (uint8_t)GPR_U32(ctx, 0));
label_4e5420:
    // 0x4e5420: 0xa2250066  sb          $a1, 0x66($s1)
    ctx->pc = 0x4e5420u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 102), (uint8_t)GPR_U32(ctx, 5));
label_4e5424:
    // 0x4e5424: 0xa2200067  sb          $zero, 0x67($s1)
    ctx->pc = 0x4e5424u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 103), (uint8_t)GPR_U32(ctx, 0));
label_4e5428:
    // 0x4e5428: 0xa2250068  sb          $a1, 0x68($s1)
    ctx->pc = 0x4e5428u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 104), (uint8_t)GPR_U32(ctx, 5));
label_4e542c:
    // 0x4e542c: 0xa2200069  sb          $zero, 0x69($s1)
    ctx->pc = 0x4e542cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 105), (uint8_t)GPR_U32(ctx, 0));
label_4e5430:
    // 0x4e5430: 0xa225006a  sb          $a1, 0x6A($s1)
    ctx->pc = 0x4e5430u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 106), (uint8_t)GPR_U32(ctx, 5));
label_4e5434:
    // 0x4e5434: 0xa220006b  sb          $zero, 0x6B($s1)
    ctx->pc = 0x4e5434u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 107), (uint8_t)GPR_U32(ctx, 0));
label_4e5438:
    // 0x4e5438: 0xae25008c  sw          $a1, 0x8C($s1)
    ctx->pc = 0x4e5438u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 5));
label_4e543c:
    // 0x4e543c: 0xae240070  sw          $a0, 0x70($s1)
    ctx->pc = 0x4e543cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 4));
label_4e5440:
    // 0x4e5440: 0xae240078  sw          $a0, 0x78($s1)
    ctx->pc = 0x4e5440u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 4));
label_4e5444:
    // 0x4e5444: 0xae230080  sw          $v1, 0x80($s1)
    ctx->pc = 0x4e5444u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 3));
label_4e5448:
    // 0x4e5448: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x4e5448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e544c:
    // 0x4e544c: 0xe6200110  swc1        $f0, 0x110($s1)
    ctx->pc = 0x4e544cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 272), bits); }
label_4e5450:
    // 0x4e5450: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x4e5450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e5454:
    // 0x4e5454: 0xe6200114  swc1        $f0, 0x114($s1)
    ctx->pc = 0x4e5454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 276), bits); }
label_4e5458:
    // 0x4e5458: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x4e5458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e545c:
    // 0x4e545c: 0xe6200118  swc1        $f0, 0x118($s1)
    ctx->pc = 0x4e545cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 280), bits); }
label_4e5460:
    // 0x4e5460: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x4e5460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e5464:
    // 0x4e5464: 0xe620011c  swc1        $f0, 0x11C($s1)
    ctx->pc = 0x4e5464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 284), bits); }
label_4e5468:
    // 0x4e5468: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4e5468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4e546c:
    // 0x4e546c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4e546cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e5470:
    // 0x4e5470: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e5470u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e5474:
    // 0x4e5474: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e5474u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e5478:
    // 0x4e5478: 0x3e00008  jr          $ra
label_4e547c:
    if (ctx->pc == 0x4E547Cu) {
        ctx->pc = 0x4E547Cu;
            // 0x4e547c: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->pc = 0x4E5480u;
        goto label_4e5480;
    }
    ctx->pc = 0x4E5478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E547Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5478u;
            // 0x4e547c: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E5480u;
label_4e5480:
    // 0x4e5480: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x4e5480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_4e5484:
    // 0x4e5484: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4e5484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4e5488:
    // 0x4e5488: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e5488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4e548c:
    // 0x4e548c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e548cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e5490:
    // 0x4e5490: 0x8c910050  lw          $s1, 0x50($a0)
    ctx->pc = 0x4e5490u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_4e5494:
    // 0x4e5494: 0xc0e393c  jal         func_38E4F0
label_4e5498:
    if (ctx->pc == 0x4E5498u) {
        ctx->pc = 0x4E5498u;
            // 0x4e5498: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E549Cu;
        goto label_4e549c;
    }
    ctx->pc = 0x4E5494u;
    SET_GPR_U32(ctx, 31, 0x4E549Cu);
    ctx->pc = 0x4E5498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5494u;
            // 0x4e5498: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E549Cu; }
        if (ctx->pc != 0x4E549Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E549Cu; }
        if (ctx->pc != 0x4E549Cu) { return; }
    }
    ctx->pc = 0x4E549Cu;
label_4e549c:
    // 0x4e549c: 0xc0e39b4  jal         func_38E6D0
label_4e54a0:
    if (ctx->pc == 0x4E54A0u) {
        ctx->pc = 0x4E54A0u;
            // 0x4e54a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E54A4u;
        goto label_4e54a4;
    }
    ctx->pc = 0x4E549Cu;
    SET_GPR_U32(ctx, 31, 0x4E54A4u);
    ctx->pc = 0x4E54A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E549Cu;
            // 0x4e54a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E6D0u;
    if (runtime->hasFunction(0x38E6D0u)) {
        auto targetFn = runtime->lookupFunction(0x38E6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E54A4u; }
        if (ctx->pc != 0x4E54A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E6D0_0x38e6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E54A4u; }
        if (ctx->pc != 0x4E54A4u) { return; }
    }
    ctx->pc = 0x4E54A4u;
label_4e54a4:
    // 0x4e54a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4e54a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e54a8:
    // 0x4e54a8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4e54a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4e54ac:
    // 0x4e54ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4e54acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e54b0:
    // 0x4e54b0: 0xc08914c  jal         func_224530
label_4e54b4:
    if (ctx->pc == 0x4E54B4u) {
        ctx->pc = 0x4E54B4u;
            // 0x4e54b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E54B8u;
        goto label_4e54b8;
    }
    ctx->pc = 0x4E54B0u;
    SET_GPR_U32(ctx, 31, 0x4E54B8u);
    ctx->pc = 0x4E54B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E54B0u;
            // 0x4e54b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E54B8u; }
        if (ctx->pc != 0x4E54B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E54B8u; }
        if (ctx->pc != 0x4E54B8u) { return; }
    }
    ctx->pc = 0x4E54B8u;
label_4e54b8:
    // 0x4e54b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4e54b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e54bc:
    // 0x4e54bc: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x4e54bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_4e54c0:
    // 0x4e54c0: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x4e54c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_4e54c4:
    // 0x4e54c4: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x4e54c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_4e54c8:
    // 0x4e54c8: 0xc088b74  jal         func_222DD0
label_4e54cc:
    if (ctx->pc == 0x4E54CCu) {
        ctx->pc = 0x4E54CCu;
            // 0x4e54cc: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x4E54D0u;
        goto label_4e54d0;
    }
    ctx->pc = 0x4E54C8u;
    SET_GPR_U32(ctx, 31, 0x4E54D0u);
    ctx->pc = 0x4E54CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E54C8u;
            // 0x4e54cc: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E54D0u; }
        if (ctx->pc != 0x4E54D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E54D0u; }
        if (ctx->pc != 0x4E54D0u) { return; }
    }
    ctx->pc = 0x4E54D0u;
label_4e54d0:
    // 0x4e54d0: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x4e54d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_4e54d4:
    // 0x4e54d4: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x4e54d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_4e54d8:
    // 0x4e54d8: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4e54d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4e54dc:
    // 0x4e54dc: 0x320f809  jalr        $t9
label_4e54e0:
    if (ctx->pc == 0x4E54E0u) {
        ctx->pc = 0x4E54E0u;
            // 0x4e54e0: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4E54E4u;
        goto label_4e54e4;
    }
    ctx->pc = 0x4E54DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E54E4u);
        ctx->pc = 0x4E54E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E54DCu;
            // 0x4e54e0: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E54E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E54E4u; }
            if (ctx->pc != 0x4E54E4u) { return; }
        }
        }
    }
    ctx->pc = 0x4E54E4u;
label_4e54e4:
    // 0x4e54e4: 0xc088b74  jal         func_222DD0
label_4e54e8:
    if (ctx->pc == 0x4E54E8u) {
        ctx->pc = 0x4E54E8u;
            // 0x4e54e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E54ECu;
        goto label_4e54ec;
    }
    ctx->pc = 0x4E54E4u;
    SET_GPR_U32(ctx, 31, 0x4E54ECu);
    ctx->pc = 0x4E54E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E54E4u;
            // 0x4e54e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E54ECu; }
        if (ctx->pc != 0x4E54ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E54ECu; }
        if (ctx->pc != 0x4E54ECu) { return; }
    }
    ctx->pc = 0x4E54ECu;
label_4e54ec:
    // 0x4e54ec: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x4e54ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_4e54f0:
    // 0x4e54f0: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x4e54f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_4e54f4:
    // 0x4e54f4: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x4e54f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_4e54f8:
    // 0x4e54f8: 0x320f809  jalr        $t9
label_4e54fc:
    if (ctx->pc == 0x4E54FCu) {
        ctx->pc = 0x4E54FCu;
            // 0x4e54fc: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4E5500u;
        goto label_4e5500;
    }
    ctx->pc = 0x4E54F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E5500u);
        ctx->pc = 0x4E54FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E54F8u;
            // 0x4e54fc: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E5500u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E5500u; }
            if (ctx->pc != 0x4E5500u) { return; }
        }
        }
    }
    ctx->pc = 0x4E5500u;
label_4e5500:
    // 0x4e5500: 0x8e1000d4  lw          $s0, 0xD4($s0)
    ctx->pc = 0x4e5500u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_4e5504:
    // 0x4e5504: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4e5504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4e5508:
    // 0x4e5508: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4e5508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e550c:
    // 0x4e550c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4e550cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e5510:
    // 0x4e5510: 0xc04ca18  jal         func_132860
label_4e5514:
    if (ctx->pc == 0x4E5514u) {
        ctx->pc = 0x4E5514u;
            // 0x4e5514: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E5518u;
        goto label_4e5518;
    }
    ctx->pc = 0x4E5510u;
    SET_GPR_U32(ctx, 31, 0x4E5518u);
    ctx->pc = 0x4E5514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5510u;
            // 0x4e5514: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132860u;
    if (runtime->hasFunction(0x132860u)) {
        auto targetFn = runtime->lookupFunction(0x132860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5518u; }
        if (ctx->pc != 0x4E5518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132860_0x132860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5518u; }
        if (ctx->pc != 0x4E5518u) { return; }
    }
    ctx->pc = 0x4E5518u;
label_4e5518:
    // 0x4e5518: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4e5518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4e551c:
    // 0x4e551c: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x4e551cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_4e5520:
    // 0x4e5520: 0xc04c72c  jal         func_131CB0
label_4e5524:
    if (ctx->pc == 0x4E5524u) {
        ctx->pc = 0x4E5524u;
            // 0x4e5524: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E5528u;
        goto label_4e5528;
    }
    ctx->pc = 0x4E5520u;
    SET_GPR_U32(ctx, 31, 0x4E5528u);
    ctx->pc = 0x4E5524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5520u;
            // 0x4e5524: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5528u; }
        if (ctx->pc != 0x4E5528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5528u; }
        if (ctx->pc != 0x4E5528u) { return; }
    }
    ctx->pc = 0x4E5528u;
label_4e5528:
    // 0x4e5528: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x4e5528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4e552c:
    // 0x4e552c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4e552cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e5530:
    // 0x4e5530: 0xc6060018  lwc1        $f6, 0x18($s0)
    ctx->pc = 0x4e5530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_4e5534:
    // 0x4e5534: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x4e5534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4e5538:
    // 0x4e5538: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x4e5538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4e553c:
    // 0x4e553c: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x4e553cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4e5540:
    // 0x4e5540: 0xc6050014  lwc1        $f5, 0x14($s0)
    ctx->pc = 0x4e5540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_4e5544:
    // 0x4e5544: 0xc6040010  lwc1        $f4, 0x10($s0)
    ctx->pc = 0x4e5544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4e5548:
    // 0x4e5548: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x4e5548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4e554c:
    // 0x4e554c: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x4e554cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e5550:
    // 0x4e5550: 0xe7a40040  swc1        $f4, 0x40($sp)
    ctx->pc = 0x4e5550u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_4e5554:
    // 0x4e5554: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x4e5554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_4e5558:
    // 0x4e5558: 0xe7a50044  swc1        $f5, 0x44($sp)
    ctx->pc = 0x4e5558u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_4e555c:
    // 0x4e555c: 0xe7a60048  swc1        $f6, 0x48($sp)
    ctx->pc = 0x4e555cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_4e5560:
    // 0x4e5560: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x4e5560u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_4e5564:
    // 0x4e5564: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x4e5564u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_4e5568:
    // 0x4e5568: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x4e5568u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_4e556c:
    // 0x4e556c: 0xc0892b0  jal         func_224AC0
label_4e5570:
    if (ctx->pc == 0x4E5570u) {
        ctx->pc = 0x4E5570u;
            // 0x4e5570: 0xe7a0003c  swc1        $f0, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->pc = 0x4E5574u;
        goto label_4e5574;
    }
    ctx->pc = 0x4E556Cu;
    SET_GPR_U32(ctx, 31, 0x4E5574u);
    ctx->pc = 0x4E5570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E556Cu;
            // 0x4e5570: 0xe7a0003c  swc1        $f0, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5574u; }
        if (ctx->pc != 0x4E5574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E5574u; }
        if (ctx->pc != 0x4E5574u) { return; }
    }
    ctx->pc = 0x4E5574u;
label_4e5574:
    // 0x4e5574: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4e5574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4e5578:
    // 0x4e5578: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e5578u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e557c:
    // 0x4e557c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e557cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e5580:
    // 0x4e5580: 0x3e00008  jr          $ra
label_4e5584:
    if (ctx->pc == 0x4E5584u) {
        ctx->pc = 0x4E5584u;
            // 0x4e5584: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4E5588u;
        goto label_4e5588;
    }
    ctx->pc = 0x4E5580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E5584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5580u;
            // 0x4e5584: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E5588u;
label_4e5588:
    // 0x4e5588: 0x0  nop
    ctx->pc = 0x4e5588u;
    // NOP
label_4e558c:
    // 0x4e558c: 0x0  nop
    ctx->pc = 0x4e558cu;
    // NOP
label_4e5590:
    // 0x4e5590: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x4e5590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4e5594:
    // 0x4e5594: 0x84830100  lh          $v1, 0x100($a0)
    ctx->pc = 0x4e5594u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 256)));
label_4e5598:
    // 0x4e5598: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4e5598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4e559c:
    // 0x4e559c: 0x3e00008  jr          $ra
label_4e55a0:
    if (ctx->pc == 0x4E55A0u) {
        ctx->pc = 0x4E55A0u;
            // 0x4e55a0: 0xa4830100  sh          $v1, 0x100($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 256), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4E55A4u;
        goto label_4e55a4;
    }
    ctx->pc = 0x4E559Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E55A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E559Cu;
            // 0x4e55a0: 0xa4830100  sh          $v1, 0x100($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 256), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E55A4u;
label_4e55a4:
    // 0x4e55a4: 0x0  nop
    ctx->pc = 0x4e55a4u;
    // NOP
label_4e55a8:
    // 0x4e55a8: 0x0  nop
    ctx->pc = 0x4e55a8u;
    // NOP
label_4e55ac:
    // 0x4e55ac: 0x0  nop
    ctx->pc = 0x4e55acu;
    // NOP
label_4e55b0:
    // 0x4e55b0: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x4e55b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_4e55b4:
    // 0x4e55b4: 0x84830100  lh          $v1, 0x100($a0)
    ctx->pc = 0x4e55b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 256)));
label_4e55b8:
    // 0x4e55b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4e55b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4e55bc:
    // 0x4e55bc: 0x3e00008  jr          $ra
label_4e55c0:
    if (ctx->pc == 0x4E55C0u) {
        ctx->pc = 0x4E55C0u;
            // 0x4e55c0: 0xa4830100  sh          $v1, 0x100($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 256), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4E55C4u;
        goto label_4e55c4;
    }
    ctx->pc = 0x4E55BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E55C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E55BCu;
            // 0x4e55c0: 0xa4830100  sh          $v1, 0x100($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 256), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E55C4u;
label_4e55c4:
    // 0x4e55c4: 0x0  nop
    ctx->pc = 0x4e55c4u;
    // NOP
label_4e55c8:
    // 0x4e55c8: 0x0  nop
    ctx->pc = 0x4e55c8u;
    // NOP
label_4e55cc:
    // 0x4e55cc: 0x0  nop
    ctx->pc = 0x4e55ccu;
    // NOP
label_4e55d0:
    // 0x4e55d0: 0x3e00008  jr          $ra
label_4e55d4:
    if (ctx->pc == 0x4E55D4u) {
        ctx->pc = 0x4E55D4u;
            // 0x4e55d4: 0x2402429a  addiu       $v0, $zero, 0x429A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17050));
        ctx->pc = 0x4E55D8u;
        goto label_4e55d8;
    }
    ctx->pc = 0x4E55D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E55D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E55D0u;
            // 0x4e55d4: 0x2402429a  addiu       $v0, $zero, 0x429A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17050));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E55D8u;
label_4e55d8:
    // 0x4e55d8: 0x0  nop
    ctx->pc = 0x4e55d8u;
    // NOP
label_4e55dc:
    // 0x4e55dc: 0x0  nop
    ctx->pc = 0x4e55dcu;
    // NOP
label_4e55e0:
    // 0x4e55e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4e55e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4e55e4:
    // 0x4e55e4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4e55e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4e55e8:
    // 0x4e55e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4e55e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4e55ec:
    // 0x4e55ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4e55ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4e55f0:
    // 0x4e55f0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4e55f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e55f4:
    // 0x4e55f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4e55f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4e55f8:
    // 0x4e55f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e55f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4e55fc:
    // 0x4e55fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e55fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e5600:
    // 0x4e5600: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x4e5600u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4e5604:
    // 0x4e5604: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_4e5608:
    if (ctx->pc == 0x4E5608u) {
        ctx->pc = 0x4E5608u;
            // 0x4e5608: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E560Cu;
        goto label_4e560c;
    }
    ctx->pc = 0x4E5604u;
    {
        const bool branch_taken_0x4e5604 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E5608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5604u;
            // 0x4e5608: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5604) {
            ctx->pc = 0x4E5648u;
            goto label_4e5648;
        }
    }
    ctx->pc = 0x4E560Cu;
label_4e560c:
    // 0x4e560c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4e560cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e5610:
    // 0x4e5610: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4e5610u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e5614:
    // 0x4e5614: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4e5614u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e5618:
    // 0x4e5618: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x4e5618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_4e561c:
    // 0x4e561c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x4e561cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_4e5620:
    // 0x4e5620: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4e5620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4e5624:
    // 0x4e5624: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4e5624u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4e5628:
    // 0x4e5628: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4e5628u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4e562c:
    // 0x4e562c: 0x320f809  jalr        $t9
label_4e5630:
    if (ctx->pc == 0x4E5630u) {
        ctx->pc = 0x4E5634u;
        goto label_4e5634;
    }
    ctx->pc = 0x4E562Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E5634u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E5634u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E5634u; }
            if (ctx->pc != 0x4E5634u) { return; }
        }
        }
    }
    ctx->pc = 0x4E5634u;
label_4e5634:
    // 0x4e5634: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x4e5634u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4e5638:
    // 0x4e5638: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4e5638u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4e563c:
    // 0x4e563c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x4e563cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4e5640:
    // 0x4e5640: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_4e5644:
    if (ctx->pc == 0x4E5644u) {
        ctx->pc = 0x4E5644u;
            // 0x4e5644: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x4E5648u;
        goto label_4e5648;
    }
    ctx->pc = 0x4E5640u;
    {
        const bool branch_taken_0x4e5640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E5644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5640u;
            // 0x4e5644: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5640) {
            ctx->pc = 0x4E5618u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4e5618;
        }
    }
    ctx->pc = 0x4E5648u;
label_4e5648:
    // 0x4e5648: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4e5648u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4e564c:
    // 0x4e564c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4e564cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4e5650:
    // 0x4e5650: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4e5650u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4e5654:
    // 0x4e5654: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4e5654u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e5658:
    // 0x4e5658: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4e5658u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e565c:
    // 0x4e565c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e565cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e5660:
    // 0x4e5660: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e5660u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e5664:
    // 0x4e5664: 0x3e00008  jr          $ra
label_4e5668:
    if (ctx->pc == 0x4E5668u) {
        ctx->pc = 0x4E5668u;
            // 0x4e5668: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4E566Cu;
        goto label_4e566c;
    }
    ctx->pc = 0x4E5664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E5668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5664u;
            // 0x4e5668: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E566Cu;
label_4e566c:
    // 0x4e566c: 0x0  nop
    ctx->pc = 0x4e566cu;
    // NOP
label_4e5670:
    // 0x4e5670: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4e5670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4e5674:
    // 0x4e5674: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4e5674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e5678:
    // 0x4e5678: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4e5678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4e567c:
    // 0x4e567c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x4e567cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_4e5680:
    // 0x4e5680: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e5680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e5684:
    // 0x4e5684: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x4e5684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4e5688:
    // 0x4e5688: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4e5688u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e568c:
    // 0x4e568c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x4e568cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_4e5690:
    // 0x4e5690: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4e5690u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4e5694:
    // 0x4e5694: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4e5694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4e5698:
    // 0x4e5698: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x4e5698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_4e569c:
    // 0x4e569c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x4e569cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4e56a0:
    // 0x4e56a0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x4e56a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_4e56a4:
    // 0x4e56a4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4e56a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4e56a8:
    // 0x4e56a8: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x4e56a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_4e56ac:
    // 0x4e56ac: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x4e56acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_4e56b0:
    // 0x4e56b0: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x4e56b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4e56b4:
    // 0x4e56b4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4e56b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4e56b8:
    // 0x4e56b8: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x4e56b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_4e56bc:
    // 0x4e56bc: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x4e56bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4e56c0:
    // 0x4e56c0: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x4e56c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_4e56c4:
    // 0x4e56c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4e56c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4e56c8:
    // 0x4e56c8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x4e56c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4e56cc:
    // 0x4e56cc: 0xc0a997c  jal         func_2A65F0
label_4e56d0:
    if (ctx->pc == 0x4E56D0u) {
        ctx->pc = 0x4E56D0u;
            // 0x4e56d0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x4E56D4u;
        goto label_4e56d4;
    }
    ctx->pc = 0x4E56CCu;
    SET_GPR_U32(ctx, 31, 0x4E56D4u);
    ctx->pc = 0x4E56D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E56CCu;
            // 0x4e56d0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E56D4u; }
        if (ctx->pc != 0x4E56D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E56D4u; }
        if (ctx->pc != 0x4E56D4u) { return; }
    }
    ctx->pc = 0x4E56D4u;
label_4e56d4:
    // 0x4e56d4: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x4e56d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_4e56d8:
    // 0x4e56d8: 0xc0d879c  jal         func_361E70
label_4e56dc:
    if (ctx->pc == 0x4E56DCu) {
        ctx->pc = 0x4E56DCu;
            // 0x4e56dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E56E0u;
        goto label_4e56e0;
    }
    ctx->pc = 0x4E56D8u;
    SET_GPR_U32(ctx, 31, 0x4E56E0u);
    ctx->pc = 0x4E56DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E56D8u;
            // 0x4e56dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E56E0u; }
        if (ctx->pc != 0x4E56E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E56E0u; }
        if (ctx->pc != 0x4E56E0u) { return; }
    }
    ctx->pc = 0x4E56E0u;
label_4e56e0:
    // 0x4e56e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e56e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4e56e4:
    // 0x4e56e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e56e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e56e8:
    // 0x4e56e8: 0x3e00008  jr          $ra
label_4e56ec:
    if (ctx->pc == 0x4E56ECu) {
        ctx->pc = 0x4E56ECu;
            // 0x4e56ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4E56F0u;
        goto label_4e56f0;
    }
    ctx->pc = 0x4E56E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E56ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E56E8u;
            // 0x4e56ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E56F0u;
label_4e56f0:
    // 0x4e56f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4e56f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4e56f4:
    // 0x4e56f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4e56f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4e56f8:
    // 0x4e56f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e56f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e56fc:
    // 0x4e56fc: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x4e56fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_4e5700:
    // 0x4e5700: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_4e5704:
    if (ctx->pc == 0x4E5704u) {
        ctx->pc = 0x4E5704u;
            // 0x4e5704: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E5708u;
        goto label_4e5708;
    }
    ctx->pc = 0x4E5700u;
    {
        const bool branch_taken_0x4e5700 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E5704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5700u;
            // 0x4e5704: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5700) {
            ctx->pc = 0x4E5820u;
            goto label_4e5820;
        }
    }
    ctx->pc = 0x4E5708u;
label_4e5708:
    // 0x4e5708: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4e5708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4e570c:
    // 0x4e570c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4e570cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_4e5710:
    // 0x4e5710: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4e5710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4e5714:
    // 0x4e5714: 0xc075128  jal         func_1D44A0
label_4e5718:
    if (ctx->pc == 0x4E5718u) {
        ctx->pc = 0x4E5718u;
            // 0x4e5718: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x4E571Cu;
        goto label_4e571c;
    }
    ctx->pc = 0x4E5714u;
    SET_GPR_U32(ctx, 31, 0x4E571Cu);
    ctx->pc = 0x4E5718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5714u;
            // 0x4e5718: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E571Cu; }
        if (ctx->pc != 0x4E571Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E571Cu; }
        if (ctx->pc != 0x4E571Cu) { return; }
    }
    ctx->pc = 0x4E571Cu;
label_4e571c:
    // 0x4e571c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x4e571cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4e5720:
    // 0x4e5720: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e5720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e5724:
    // 0x4e5724: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x4e5724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_4e5728:
    // 0x4e5728: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x4e5728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4e572c:
    // 0x4e572c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4e572cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4e5730:
    // 0x4e5730: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4e5734:
    if (ctx->pc == 0x4E5734u) {
        ctx->pc = 0x4E5734u;
            // 0x4e5734: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x4E5738u;
        goto label_4e5738;
    }
    ctx->pc = 0x4E5730u;
    {
        const bool branch_taken_0x4e5730 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E5734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5730u;
            // 0x4e5734: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5730) {
            ctx->pc = 0x4E5740u;
            goto label_4e5740;
        }
    }
    ctx->pc = 0x4E5738u;
label_4e5738:
    // 0x4e5738: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e5738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e573c:
    // 0x4e573c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x4e573cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_4e5740:
    // 0x4e5740: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4e5740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4e5744:
    // 0x4e5744: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e5744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e5748:
    // 0x4e5748: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x4e5748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_4e574c:
    // 0x4e574c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4e574cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4e5750:
    // 0x4e5750: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4e5750u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4e5754:
    // 0x4e5754: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4e5758:
    if (ctx->pc == 0x4E5758u) {
        ctx->pc = 0x4E5758u;
            // 0x4e5758: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4E575Cu;
        goto label_4e575c;
    }
    ctx->pc = 0x4E5754u;
    {
        const bool branch_taken_0x4e5754 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e5754) {
            ctx->pc = 0x4E5758u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5754u;
            // 0x4e5758: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E5768u;
            goto label_4e5768;
        }
    }
    ctx->pc = 0x4E575Cu;
label_4e575c:
    // 0x4e575c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e575cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e5760:
    // 0x4e5760: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x4e5760u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_4e5764:
    // 0x4e5764: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x4e5764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4e5768:
    // 0x4e5768: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e5768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e576c:
    // 0x4e576c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x4e576cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_4e5770:
    // 0x4e5770: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x4e5770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_4e5774:
    // 0x4e5774: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4e5774u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4e5778:
    // 0x4e5778: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4e577c:
    if (ctx->pc == 0x4E577Cu) {
        ctx->pc = 0x4E577Cu;
            // 0x4e577c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x4E5780u;
        goto label_4e5780;
    }
    ctx->pc = 0x4E5778u;
    {
        const bool branch_taken_0x4e5778 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e5778) {
            ctx->pc = 0x4E577Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5778u;
            // 0x4e577c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E578Cu;
            goto label_4e578c;
        }
    }
    ctx->pc = 0x4E5780u;
label_4e5780:
    // 0x4e5780: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e5780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e5784:
    // 0x4e5784: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x4e5784u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_4e5788:
    // 0x4e5788: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4e5788u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e578c:
    // 0x4e578c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4e578cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4e5790:
    // 0x4e5790: 0x320f809  jalr        $t9
label_4e5794:
    if (ctx->pc == 0x4E5794u) {
        ctx->pc = 0x4E5794u;
            // 0x4e5794: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E5798u;
        goto label_4e5798;
    }
    ctx->pc = 0x4E5790u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E5798u);
        ctx->pc = 0x4E5794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5790u;
            // 0x4e5794: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E5798u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E5798u; }
            if (ctx->pc != 0x4E5798u) { return; }
        }
        }
    }
    ctx->pc = 0x4E5798u;
label_4e5798:
    // 0x4e5798: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4e5798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4e579c:
    // 0x4e579c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e579cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e57a0:
    // 0x4e57a0: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x4e57a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_4e57a4:
    // 0x4e57a4: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4e57a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4e57a8:
    // 0x4e57a8: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4e57a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4e57ac:
    // 0x4e57ac: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4e57acu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4e57b0:
    // 0x4e57b0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4e57b4:
    if (ctx->pc == 0x4E57B4u) {
        ctx->pc = 0x4E57B4u;
            // 0x4e57b4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x4E57B8u;
        goto label_4e57b8;
    }
    ctx->pc = 0x4E57B0u;
    {
        const bool branch_taken_0x4e57b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e57b0) {
            ctx->pc = 0x4E57B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E57B0u;
            // 0x4e57b4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E57C4u;
            goto label_4e57c4;
        }
    }
    ctx->pc = 0x4E57B8u;
label_4e57b8:
    // 0x4e57b8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e57b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e57bc:
    // 0x4e57bc: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x4e57bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_4e57c0:
    // 0x4e57c0: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4e57c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4e57c4:
    // 0x4e57c4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e57c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e57c8:
    // 0x4e57c8: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x4e57c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_4e57cc:
    // 0x4e57cc: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4e57ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4e57d0:
    // 0x4e57d0: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4e57d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4e57d4:
    // 0x4e57d4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4e57d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4e57d8:
    // 0x4e57d8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4e57dc:
    if (ctx->pc == 0x4E57DCu) {
        ctx->pc = 0x4E57E0u;
        goto label_4e57e0;
    }
    ctx->pc = 0x4E57D8u;
    {
        const bool branch_taken_0x4e57d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e57d8) {
            ctx->pc = 0x4E57E8u;
            goto label_4e57e8;
        }
    }
    ctx->pc = 0x4E57E0u;
label_4e57e0:
    // 0x4e57e0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e57e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e57e4:
    // 0x4e57e4: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x4e57e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_4e57e8:
    // 0x4e57e8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e57e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e57ec:
    // 0x4e57ec: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x4e57ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_4e57f0:
    // 0x4e57f0: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4e57f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4e57f4:
    // 0x4e57f4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4e57f8:
    if (ctx->pc == 0x4E57F8u) {
        ctx->pc = 0x4E57FCu;
        goto label_4e57fc;
    }
    ctx->pc = 0x4E57F4u;
    {
        const bool branch_taken_0x4e57f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e57f4) {
            ctx->pc = 0x4E5804u;
            goto label_4e5804;
        }
    }
    ctx->pc = 0x4E57FCu;
label_4e57fc:
    // 0x4e57fc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e57fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e5800:
    // 0x4e5800: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x4e5800u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_4e5804:
    // 0x4e5804: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e5804u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e5808:
    // 0x4e5808: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x4e5808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_4e580c:
    // 0x4e580c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4e580cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4e5810:
    // 0x4e5810: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4e5814:
    if (ctx->pc == 0x4E5814u) {
        ctx->pc = 0x4E5814u;
            // 0x4e5814: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4E5818u;
        goto label_4e5818;
    }
    ctx->pc = 0x4E5810u;
    {
        const bool branch_taken_0x4e5810 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e5810) {
            ctx->pc = 0x4E5814u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5810u;
            // 0x4e5814: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E5824u;
            goto label_4e5824;
        }
    }
    ctx->pc = 0x4E5818u;
label_4e5818:
    // 0x4e5818: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e5818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e581c:
    // 0x4e581c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x4e581cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_4e5820:
    // 0x4e5820: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4e5820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4e5824:
    // 0x4e5824: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e5824u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e5828:
    // 0x4e5828: 0x3e00008  jr          $ra
label_4e582c:
    if (ctx->pc == 0x4E582Cu) {
        ctx->pc = 0x4E582Cu;
            // 0x4e582c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4E5830u;
        goto label_4e5830;
    }
    ctx->pc = 0x4E5828u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E582Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5828u;
            // 0x4e582c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E5830u;
label_4e5830:
    // 0x4e5830: 0x8138ec4  j           func_4E3B10
label_4e5834:
    if (ctx->pc == 0x4E5834u) {
        ctx->pc = 0x4E5834u;
            // 0x4e5834: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x4E5838u;
        goto label_4e5838;
    }
    ctx->pc = 0x4E5830u;
    ctx->pc = 0x4E5834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5830u;
            // 0x4e5834: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E3B10u;
    {
        auto targetFn = runtime->lookupFunction(0x4E3B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4E5838u;
label_4e5838:
    // 0x4e5838: 0x0  nop
    ctx->pc = 0x4e5838u;
    // NOP
label_4e583c:
    // 0x4e583c: 0x0  nop
    ctx->pc = 0x4e583cu;
    // NOP
label_4e5840:
    // 0x4e5840: 0x8139058  j           func_4E4160
label_4e5844:
    if (ctx->pc == 0x4E5844u) {
        ctx->pc = 0x4E5844u;
            // 0x4e5844: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4E5848u;
        goto label_4e5848;
    }
    ctx->pc = 0x4E5840u;
    ctx->pc = 0x4E5844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5840u;
            // 0x4e5844: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E4160u;
    {
        auto targetFn = runtime->lookupFunction(0x4E4160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4E5848u;
label_4e5848:
    // 0x4e5848: 0x0  nop
    ctx->pc = 0x4e5848u;
    // NOP
label_4e584c:
    // 0x4e584c: 0x0  nop
    ctx->pc = 0x4e584cu;
    // NOP
label_4e5850:
    // 0x4e5850: 0x8138e28  j           func_4E38A0
label_4e5854:
    if (ctx->pc == 0x4E5854u) {
        ctx->pc = 0x4E5854u;
            // 0x4e5854: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4E5858u;
        goto label_4e5858;
    }
    ctx->pc = 0x4E5850u;
    ctx->pc = 0x4E5854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5850u;
            // 0x4e5854: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E38A0u;
    if (runtime->hasFunction(0x4E38A0u)) {
        auto targetFn = runtime->lookupFunction(0x4E38A0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_004E38A0_0x4e38a0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4E5858u;
label_4e5858:
    // 0x4e5858: 0x0  nop
    ctx->pc = 0x4e5858u;
    // NOP
label_4e585c:
    // 0x4e585c: 0x0  nop
    ctx->pc = 0x4e585cu;
    // NOP
label_4e5860:
    // 0x4e5860: 0x8138e80  j           func_4E3A00
label_4e5864:
    if (ctx->pc == 0x4E5864u) {
        ctx->pc = 0x4E5864u;
            // 0x4e5864: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x4E5868u;
        goto label_4e5868;
    }
    ctx->pc = 0x4E5860u;
    ctx->pc = 0x4E5864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5860u;
            // 0x4e5864: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E3A00u;
    {
        auto targetFn = runtime->lookupFunction(0x4E3A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4E5868u;
label_4e5868:
    // 0x4e5868: 0x0  nop
    ctx->pc = 0x4e5868u;
    // NOP
label_4e586c:
    // 0x4e586c: 0x0  nop
    ctx->pc = 0x4e586cu;
    // NOP
label_4e5870:
    // 0x4e5870: 0x8138e04  j           func_4E3810
label_4e5874:
    if (ctx->pc == 0x4E5874u) {
        ctx->pc = 0x4E5874u;
            // 0x4e5874: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x4E5878u;
        goto label_4e5878;
    }
    ctx->pc = 0x4E5870u;
    ctx->pc = 0x4E5874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5870u;
            // 0x4e5874: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E3810u;
    {
        auto targetFn = runtime->lookupFunction(0x4E3810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4E5878u;
label_4e5878:
    // 0x4e5878: 0x0  nop
    ctx->pc = 0x4e5878u;
    // NOP
label_4e587c:
    // 0x4e587c: 0x0  nop
    ctx->pc = 0x4e587cu;
    // NOP
label_4e5880:
    // 0x4e5880: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4e5880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4e5884:
    // 0x4e5884: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4e5884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4e5888:
    // 0x4e5888: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e5888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4e588c:
    // 0x4e588c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e588cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e5890:
    // 0x4e5890: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e5890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e5894:
    // 0x4e5894: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_4e5898:
    if (ctx->pc == 0x4E5898u) {
        ctx->pc = 0x4E5898u;
            // 0x4e5898: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E589Cu;
        goto label_4e589c;
    }
    ctx->pc = 0x4E5894u;
    {
        const bool branch_taken_0x4e5894 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E5898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5894u;
            // 0x4e5898: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e5894) {
            ctx->pc = 0x4E58F0u;
            goto label_4e58f0;
        }
    }
    ctx->pc = 0x4E589Cu;
label_4e589c:
    // 0x4e589c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4e589cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4e58a0:
    // 0x4e58a0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4e58a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4e58a4:
    // 0x4e58a4: 0x24633a10  addiu       $v1, $v1, 0x3A10
    ctx->pc = 0x4e58a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14864));
label_4e58a8:
    // 0x4e58a8: 0x24423a48  addiu       $v0, $v0, 0x3A48
    ctx->pc = 0x4e58a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14920));
label_4e58ac:
    // 0x4e58ac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e58acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4e58b0:
    // 0x4e58b0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_4e58b4:
    if (ctx->pc == 0x4E58B4u) {
        ctx->pc = 0x4E58B4u;
            // 0x4e58b4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4E58B8u;
        goto label_4e58b8;
    }
    ctx->pc = 0x4E58B0u;
    {
        const bool branch_taken_0x4e58b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E58B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E58B0u;
            // 0x4e58b4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e58b0) {
            ctx->pc = 0x4E58D8u;
            goto label_4e58d8;
        }
    }
    ctx->pc = 0x4E58B8u;
label_4e58b8:
    // 0x4e58b8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4e58b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4e58bc:
    // 0x4e58bc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4e58bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4e58c0:
    // 0x4e58c0: 0x24633ac0  addiu       $v1, $v1, 0x3AC0
    ctx->pc = 0x4e58c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15040));
label_4e58c4:
    // 0x4e58c4: 0x24423af8  addiu       $v0, $v0, 0x3AF8
    ctx->pc = 0x4e58c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15096));
label_4e58c8:
    // 0x4e58c8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e58c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4e58cc:
    // 0x4e58cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4e58ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e58d0:
    // 0x4e58d0: 0xc139644  jal         func_4E5910
label_4e58d4:
    if (ctx->pc == 0x4E58D4u) {
        ctx->pc = 0x4E58D4u;
            // 0x4e58d4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x4E58D8u;
        goto label_4e58d8;
    }
    ctx->pc = 0x4E58D0u;
    SET_GPR_U32(ctx, 31, 0x4E58D8u);
    ctx->pc = 0x4E58D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E58D0u;
            // 0x4e58d4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E5910u;
    if (runtime->hasFunction(0x4E5910u)) {
        auto targetFn = runtime->lookupFunction(0x4E5910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E58D8u; }
        if (ctx->pc != 0x4E58D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004E5910_0x4e5910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E58D8u; }
        if (ctx->pc != 0x4E58D8u) { return; }
    }
    ctx->pc = 0x4E58D8u;
label_4e58d8:
    // 0x4e58d8: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4e58d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4e58dc:
    // 0x4e58dc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4e58dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4e58e0:
    // 0x4e58e0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4e58e4:
    if (ctx->pc == 0x4E58E4u) {
        ctx->pc = 0x4E58E4u;
            // 0x4e58e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E58E8u;
        goto label_4e58e8;
    }
    ctx->pc = 0x4E58E0u;
    {
        const bool branch_taken_0x4e58e0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4e58e0) {
            ctx->pc = 0x4E58E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E58E0u;
            // 0x4e58e4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E58F4u;
            goto label_4e58f4;
        }
    }
    ctx->pc = 0x4E58E8u;
label_4e58e8:
    // 0x4e58e8: 0xc0400a8  jal         func_1002A0
label_4e58ec:
    if (ctx->pc == 0x4E58ECu) {
        ctx->pc = 0x4E58ECu;
            // 0x4e58ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E58F0u;
        goto label_4e58f0;
    }
    ctx->pc = 0x4E58E8u;
    SET_GPR_U32(ctx, 31, 0x4E58F0u);
    ctx->pc = 0x4E58ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E58E8u;
            // 0x4e58ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E58F0u; }
        if (ctx->pc != 0x4E58F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E58F0u; }
        if (ctx->pc != 0x4E58F0u) { return; }
    }
    ctx->pc = 0x4E58F0u;
label_4e58f0:
    // 0x4e58f0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4e58f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e58f4:
    // 0x4e58f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4e58f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4e58f8:
    // 0x4e58f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e58f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e58fc:
    // 0x4e58fc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e58fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e5900:
    // 0x4e5900: 0x3e00008  jr          $ra
label_4e5904:
    if (ctx->pc == 0x4E5904u) {
        ctx->pc = 0x4E5904u;
            // 0x4e5904: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4E5908u;
        goto label_4e5908;
    }
    ctx->pc = 0x4E5900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E5904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E5900u;
            // 0x4e5904: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E5908u;
label_4e5908:
    // 0x4e5908: 0x0  nop
    ctx->pc = 0x4e5908u;
    // NOP
label_4e590c:
    // 0x4e590c: 0x0  nop
    ctx->pc = 0x4e590cu;
    // NOP
}
