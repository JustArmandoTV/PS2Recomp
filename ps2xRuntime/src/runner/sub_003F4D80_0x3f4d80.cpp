#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F4D80
// Address: 0x3f4d80 - 0x3f55c0
void sub_003F4D80_0x3f4d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F4D80_0x3f4d80");
#endif

    switch (ctx->pc) {
        case 0x3f4d80u: goto label_3f4d80;
        case 0x3f4d84u: goto label_3f4d84;
        case 0x3f4d88u: goto label_3f4d88;
        case 0x3f4d8cu: goto label_3f4d8c;
        case 0x3f4d90u: goto label_3f4d90;
        case 0x3f4d94u: goto label_3f4d94;
        case 0x3f4d98u: goto label_3f4d98;
        case 0x3f4d9cu: goto label_3f4d9c;
        case 0x3f4da0u: goto label_3f4da0;
        case 0x3f4da4u: goto label_3f4da4;
        case 0x3f4da8u: goto label_3f4da8;
        case 0x3f4dacu: goto label_3f4dac;
        case 0x3f4db0u: goto label_3f4db0;
        case 0x3f4db4u: goto label_3f4db4;
        case 0x3f4db8u: goto label_3f4db8;
        case 0x3f4dbcu: goto label_3f4dbc;
        case 0x3f4dc0u: goto label_3f4dc0;
        case 0x3f4dc4u: goto label_3f4dc4;
        case 0x3f4dc8u: goto label_3f4dc8;
        case 0x3f4dccu: goto label_3f4dcc;
        case 0x3f4dd0u: goto label_3f4dd0;
        case 0x3f4dd4u: goto label_3f4dd4;
        case 0x3f4dd8u: goto label_3f4dd8;
        case 0x3f4ddcu: goto label_3f4ddc;
        case 0x3f4de0u: goto label_3f4de0;
        case 0x3f4de4u: goto label_3f4de4;
        case 0x3f4de8u: goto label_3f4de8;
        case 0x3f4decu: goto label_3f4dec;
        case 0x3f4df0u: goto label_3f4df0;
        case 0x3f4df4u: goto label_3f4df4;
        case 0x3f4df8u: goto label_3f4df8;
        case 0x3f4dfcu: goto label_3f4dfc;
        case 0x3f4e00u: goto label_3f4e00;
        case 0x3f4e04u: goto label_3f4e04;
        case 0x3f4e08u: goto label_3f4e08;
        case 0x3f4e0cu: goto label_3f4e0c;
        case 0x3f4e10u: goto label_3f4e10;
        case 0x3f4e14u: goto label_3f4e14;
        case 0x3f4e18u: goto label_3f4e18;
        case 0x3f4e1cu: goto label_3f4e1c;
        case 0x3f4e20u: goto label_3f4e20;
        case 0x3f4e24u: goto label_3f4e24;
        case 0x3f4e28u: goto label_3f4e28;
        case 0x3f4e2cu: goto label_3f4e2c;
        case 0x3f4e30u: goto label_3f4e30;
        case 0x3f4e34u: goto label_3f4e34;
        case 0x3f4e38u: goto label_3f4e38;
        case 0x3f4e3cu: goto label_3f4e3c;
        case 0x3f4e40u: goto label_3f4e40;
        case 0x3f4e44u: goto label_3f4e44;
        case 0x3f4e48u: goto label_3f4e48;
        case 0x3f4e4cu: goto label_3f4e4c;
        case 0x3f4e50u: goto label_3f4e50;
        case 0x3f4e54u: goto label_3f4e54;
        case 0x3f4e58u: goto label_3f4e58;
        case 0x3f4e5cu: goto label_3f4e5c;
        case 0x3f4e60u: goto label_3f4e60;
        case 0x3f4e64u: goto label_3f4e64;
        case 0x3f4e68u: goto label_3f4e68;
        case 0x3f4e6cu: goto label_3f4e6c;
        case 0x3f4e70u: goto label_3f4e70;
        case 0x3f4e74u: goto label_3f4e74;
        case 0x3f4e78u: goto label_3f4e78;
        case 0x3f4e7cu: goto label_3f4e7c;
        case 0x3f4e80u: goto label_3f4e80;
        case 0x3f4e84u: goto label_3f4e84;
        case 0x3f4e88u: goto label_3f4e88;
        case 0x3f4e8cu: goto label_3f4e8c;
        case 0x3f4e90u: goto label_3f4e90;
        case 0x3f4e94u: goto label_3f4e94;
        case 0x3f4e98u: goto label_3f4e98;
        case 0x3f4e9cu: goto label_3f4e9c;
        case 0x3f4ea0u: goto label_3f4ea0;
        case 0x3f4ea4u: goto label_3f4ea4;
        case 0x3f4ea8u: goto label_3f4ea8;
        case 0x3f4eacu: goto label_3f4eac;
        case 0x3f4eb0u: goto label_3f4eb0;
        case 0x3f4eb4u: goto label_3f4eb4;
        case 0x3f4eb8u: goto label_3f4eb8;
        case 0x3f4ebcu: goto label_3f4ebc;
        case 0x3f4ec0u: goto label_3f4ec0;
        case 0x3f4ec4u: goto label_3f4ec4;
        case 0x3f4ec8u: goto label_3f4ec8;
        case 0x3f4eccu: goto label_3f4ecc;
        case 0x3f4ed0u: goto label_3f4ed0;
        case 0x3f4ed4u: goto label_3f4ed4;
        case 0x3f4ed8u: goto label_3f4ed8;
        case 0x3f4edcu: goto label_3f4edc;
        case 0x3f4ee0u: goto label_3f4ee0;
        case 0x3f4ee4u: goto label_3f4ee4;
        case 0x3f4ee8u: goto label_3f4ee8;
        case 0x3f4eecu: goto label_3f4eec;
        case 0x3f4ef0u: goto label_3f4ef0;
        case 0x3f4ef4u: goto label_3f4ef4;
        case 0x3f4ef8u: goto label_3f4ef8;
        case 0x3f4efcu: goto label_3f4efc;
        case 0x3f4f00u: goto label_3f4f00;
        case 0x3f4f04u: goto label_3f4f04;
        case 0x3f4f08u: goto label_3f4f08;
        case 0x3f4f0cu: goto label_3f4f0c;
        case 0x3f4f10u: goto label_3f4f10;
        case 0x3f4f14u: goto label_3f4f14;
        case 0x3f4f18u: goto label_3f4f18;
        case 0x3f4f1cu: goto label_3f4f1c;
        case 0x3f4f20u: goto label_3f4f20;
        case 0x3f4f24u: goto label_3f4f24;
        case 0x3f4f28u: goto label_3f4f28;
        case 0x3f4f2cu: goto label_3f4f2c;
        case 0x3f4f30u: goto label_3f4f30;
        case 0x3f4f34u: goto label_3f4f34;
        case 0x3f4f38u: goto label_3f4f38;
        case 0x3f4f3cu: goto label_3f4f3c;
        case 0x3f4f40u: goto label_3f4f40;
        case 0x3f4f44u: goto label_3f4f44;
        case 0x3f4f48u: goto label_3f4f48;
        case 0x3f4f4cu: goto label_3f4f4c;
        case 0x3f4f50u: goto label_3f4f50;
        case 0x3f4f54u: goto label_3f4f54;
        case 0x3f4f58u: goto label_3f4f58;
        case 0x3f4f5cu: goto label_3f4f5c;
        case 0x3f4f60u: goto label_3f4f60;
        case 0x3f4f64u: goto label_3f4f64;
        case 0x3f4f68u: goto label_3f4f68;
        case 0x3f4f6cu: goto label_3f4f6c;
        case 0x3f4f70u: goto label_3f4f70;
        case 0x3f4f74u: goto label_3f4f74;
        case 0x3f4f78u: goto label_3f4f78;
        case 0x3f4f7cu: goto label_3f4f7c;
        case 0x3f4f80u: goto label_3f4f80;
        case 0x3f4f84u: goto label_3f4f84;
        case 0x3f4f88u: goto label_3f4f88;
        case 0x3f4f8cu: goto label_3f4f8c;
        case 0x3f4f90u: goto label_3f4f90;
        case 0x3f4f94u: goto label_3f4f94;
        case 0x3f4f98u: goto label_3f4f98;
        case 0x3f4f9cu: goto label_3f4f9c;
        case 0x3f4fa0u: goto label_3f4fa0;
        case 0x3f4fa4u: goto label_3f4fa4;
        case 0x3f4fa8u: goto label_3f4fa8;
        case 0x3f4facu: goto label_3f4fac;
        case 0x3f4fb0u: goto label_3f4fb0;
        case 0x3f4fb4u: goto label_3f4fb4;
        case 0x3f4fb8u: goto label_3f4fb8;
        case 0x3f4fbcu: goto label_3f4fbc;
        case 0x3f4fc0u: goto label_3f4fc0;
        case 0x3f4fc4u: goto label_3f4fc4;
        case 0x3f4fc8u: goto label_3f4fc8;
        case 0x3f4fccu: goto label_3f4fcc;
        case 0x3f4fd0u: goto label_3f4fd0;
        case 0x3f4fd4u: goto label_3f4fd4;
        case 0x3f4fd8u: goto label_3f4fd8;
        case 0x3f4fdcu: goto label_3f4fdc;
        case 0x3f4fe0u: goto label_3f4fe0;
        case 0x3f4fe4u: goto label_3f4fe4;
        case 0x3f4fe8u: goto label_3f4fe8;
        case 0x3f4fecu: goto label_3f4fec;
        case 0x3f4ff0u: goto label_3f4ff0;
        case 0x3f4ff4u: goto label_3f4ff4;
        case 0x3f4ff8u: goto label_3f4ff8;
        case 0x3f4ffcu: goto label_3f4ffc;
        case 0x3f5000u: goto label_3f5000;
        case 0x3f5004u: goto label_3f5004;
        case 0x3f5008u: goto label_3f5008;
        case 0x3f500cu: goto label_3f500c;
        case 0x3f5010u: goto label_3f5010;
        case 0x3f5014u: goto label_3f5014;
        case 0x3f5018u: goto label_3f5018;
        case 0x3f501cu: goto label_3f501c;
        case 0x3f5020u: goto label_3f5020;
        case 0x3f5024u: goto label_3f5024;
        case 0x3f5028u: goto label_3f5028;
        case 0x3f502cu: goto label_3f502c;
        case 0x3f5030u: goto label_3f5030;
        case 0x3f5034u: goto label_3f5034;
        case 0x3f5038u: goto label_3f5038;
        case 0x3f503cu: goto label_3f503c;
        case 0x3f5040u: goto label_3f5040;
        case 0x3f5044u: goto label_3f5044;
        case 0x3f5048u: goto label_3f5048;
        case 0x3f504cu: goto label_3f504c;
        case 0x3f5050u: goto label_3f5050;
        case 0x3f5054u: goto label_3f5054;
        case 0x3f5058u: goto label_3f5058;
        case 0x3f505cu: goto label_3f505c;
        case 0x3f5060u: goto label_3f5060;
        case 0x3f5064u: goto label_3f5064;
        case 0x3f5068u: goto label_3f5068;
        case 0x3f506cu: goto label_3f506c;
        case 0x3f5070u: goto label_3f5070;
        case 0x3f5074u: goto label_3f5074;
        case 0x3f5078u: goto label_3f5078;
        case 0x3f507cu: goto label_3f507c;
        case 0x3f5080u: goto label_3f5080;
        case 0x3f5084u: goto label_3f5084;
        case 0x3f5088u: goto label_3f5088;
        case 0x3f508cu: goto label_3f508c;
        case 0x3f5090u: goto label_3f5090;
        case 0x3f5094u: goto label_3f5094;
        case 0x3f5098u: goto label_3f5098;
        case 0x3f509cu: goto label_3f509c;
        case 0x3f50a0u: goto label_3f50a0;
        case 0x3f50a4u: goto label_3f50a4;
        case 0x3f50a8u: goto label_3f50a8;
        case 0x3f50acu: goto label_3f50ac;
        case 0x3f50b0u: goto label_3f50b0;
        case 0x3f50b4u: goto label_3f50b4;
        case 0x3f50b8u: goto label_3f50b8;
        case 0x3f50bcu: goto label_3f50bc;
        case 0x3f50c0u: goto label_3f50c0;
        case 0x3f50c4u: goto label_3f50c4;
        case 0x3f50c8u: goto label_3f50c8;
        case 0x3f50ccu: goto label_3f50cc;
        case 0x3f50d0u: goto label_3f50d0;
        case 0x3f50d4u: goto label_3f50d4;
        case 0x3f50d8u: goto label_3f50d8;
        case 0x3f50dcu: goto label_3f50dc;
        case 0x3f50e0u: goto label_3f50e0;
        case 0x3f50e4u: goto label_3f50e4;
        case 0x3f50e8u: goto label_3f50e8;
        case 0x3f50ecu: goto label_3f50ec;
        case 0x3f50f0u: goto label_3f50f0;
        case 0x3f50f4u: goto label_3f50f4;
        case 0x3f50f8u: goto label_3f50f8;
        case 0x3f50fcu: goto label_3f50fc;
        case 0x3f5100u: goto label_3f5100;
        case 0x3f5104u: goto label_3f5104;
        case 0x3f5108u: goto label_3f5108;
        case 0x3f510cu: goto label_3f510c;
        case 0x3f5110u: goto label_3f5110;
        case 0x3f5114u: goto label_3f5114;
        case 0x3f5118u: goto label_3f5118;
        case 0x3f511cu: goto label_3f511c;
        case 0x3f5120u: goto label_3f5120;
        case 0x3f5124u: goto label_3f5124;
        case 0x3f5128u: goto label_3f5128;
        case 0x3f512cu: goto label_3f512c;
        case 0x3f5130u: goto label_3f5130;
        case 0x3f5134u: goto label_3f5134;
        case 0x3f5138u: goto label_3f5138;
        case 0x3f513cu: goto label_3f513c;
        case 0x3f5140u: goto label_3f5140;
        case 0x3f5144u: goto label_3f5144;
        case 0x3f5148u: goto label_3f5148;
        case 0x3f514cu: goto label_3f514c;
        case 0x3f5150u: goto label_3f5150;
        case 0x3f5154u: goto label_3f5154;
        case 0x3f5158u: goto label_3f5158;
        case 0x3f515cu: goto label_3f515c;
        case 0x3f5160u: goto label_3f5160;
        case 0x3f5164u: goto label_3f5164;
        case 0x3f5168u: goto label_3f5168;
        case 0x3f516cu: goto label_3f516c;
        case 0x3f5170u: goto label_3f5170;
        case 0x3f5174u: goto label_3f5174;
        case 0x3f5178u: goto label_3f5178;
        case 0x3f517cu: goto label_3f517c;
        case 0x3f5180u: goto label_3f5180;
        case 0x3f5184u: goto label_3f5184;
        case 0x3f5188u: goto label_3f5188;
        case 0x3f518cu: goto label_3f518c;
        case 0x3f5190u: goto label_3f5190;
        case 0x3f5194u: goto label_3f5194;
        case 0x3f5198u: goto label_3f5198;
        case 0x3f519cu: goto label_3f519c;
        case 0x3f51a0u: goto label_3f51a0;
        case 0x3f51a4u: goto label_3f51a4;
        case 0x3f51a8u: goto label_3f51a8;
        case 0x3f51acu: goto label_3f51ac;
        case 0x3f51b0u: goto label_3f51b0;
        case 0x3f51b4u: goto label_3f51b4;
        case 0x3f51b8u: goto label_3f51b8;
        case 0x3f51bcu: goto label_3f51bc;
        case 0x3f51c0u: goto label_3f51c0;
        case 0x3f51c4u: goto label_3f51c4;
        case 0x3f51c8u: goto label_3f51c8;
        case 0x3f51ccu: goto label_3f51cc;
        case 0x3f51d0u: goto label_3f51d0;
        case 0x3f51d4u: goto label_3f51d4;
        case 0x3f51d8u: goto label_3f51d8;
        case 0x3f51dcu: goto label_3f51dc;
        case 0x3f51e0u: goto label_3f51e0;
        case 0x3f51e4u: goto label_3f51e4;
        case 0x3f51e8u: goto label_3f51e8;
        case 0x3f51ecu: goto label_3f51ec;
        case 0x3f51f0u: goto label_3f51f0;
        case 0x3f51f4u: goto label_3f51f4;
        case 0x3f51f8u: goto label_3f51f8;
        case 0x3f51fcu: goto label_3f51fc;
        case 0x3f5200u: goto label_3f5200;
        case 0x3f5204u: goto label_3f5204;
        case 0x3f5208u: goto label_3f5208;
        case 0x3f520cu: goto label_3f520c;
        case 0x3f5210u: goto label_3f5210;
        case 0x3f5214u: goto label_3f5214;
        case 0x3f5218u: goto label_3f5218;
        case 0x3f521cu: goto label_3f521c;
        case 0x3f5220u: goto label_3f5220;
        case 0x3f5224u: goto label_3f5224;
        case 0x3f5228u: goto label_3f5228;
        case 0x3f522cu: goto label_3f522c;
        case 0x3f5230u: goto label_3f5230;
        case 0x3f5234u: goto label_3f5234;
        case 0x3f5238u: goto label_3f5238;
        case 0x3f523cu: goto label_3f523c;
        case 0x3f5240u: goto label_3f5240;
        case 0x3f5244u: goto label_3f5244;
        case 0x3f5248u: goto label_3f5248;
        case 0x3f524cu: goto label_3f524c;
        case 0x3f5250u: goto label_3f5250;
        case 0x3f5254u: goto label_3f5254;
        case 0x3f5258u: goto label_3f5258;
        case 0x3f525cu: goto label_3f525c;
        case 0x3f5260u: goto label_3f5260;
        case 0x3f5264u: goto label_3f5264;
        case 0x3f5268u: goto label_3f5268;
        case 0x3f526cu: goto label_3f526c;
        case 0x3f5270u: goto label_3f5270;
        case 0x3f5274u: goto label_3f5274;
        case 0x3f5278u: goto label_3f5278;
        case 0x3f527cu: goto label_3f527c;
        case 0x3f5280u: goto label_3f5280;
        case 0x3f5284u: goto label_3f5284;
        case 0x3f5288u: goto label_3f5288;
        case 0x3f528cu: goto label_3f528c;
        case 0x3f5290u: goto label_3f5290;
        case 0x3f5294u: goto label_3f5294;
        case 0x3f5298u: goto label_3f5298;
        case 0x3f529cu: goto label_3f529c;
        case 0x3f52a0u: goto label_3f52a0;
        case 0x3f52a4u: goto label_3f52a4;
        case 0x3f52a8u: goto label_3f52a8;
        case 0x3f52acu: goto label_3f52ac;
        case 0x3f52b0u: goto label_3f52b0;
        case 0x3f52b4u: goto label_3f52b4;
        case 0x3f52b8u: goto label_3f52b8;
        case 0x3f52bcu: goto label_3f52bc;
        case 0x3f52c0u: goto label_3f52c0;
        case 0x3f52c4u: goto label_3f52c4;
        case 0x3f52c8u: goto label_3f52c8;
        case 0x3f52ccu: goto label_3f52cc;
        case 0x3f52d0u: goto label_3f52d0;
        case 0x3f52d4u: goto label_3f52d4;
        case 0x3f52d8u: goto label_3f52d8;
        case 0x3f52dcu: goto label_3f52dc;
        case 0x3f52e0u: goto label_3f52e0;
        case 0x3f52e4u: goto label_3f52e4;
        case 0x3f52e8u: goto label_3f52e8;
        case 0x3f52ecu: goto label_3f52ec;
        case 0x3f52f0u: goto label_3f52f0;
        case 0x3f52f4u: goto label_3f52f4;
        case 0x3f52f8u: goto label_3f52f8;
        case 0x3f52fcu: goto label_3f52fc;
        case 0x3f5300u: goto label_3f5300;
        case 0x3f5304u: goto label_3f5304;
        case 0x3f5308u: goto label_3f5308;
        case 0x3f530cu: goto label_3f530c;
        case 0x3f5310u: goto label_3f5310;
        case 0x3f5314u: goto label_3f5314;
        case 0x3f5318u: goto label_3f5318;
        case 0x3f531cu: goto label_3f531c;
        case 0x3f5320u: goto label_3f5320;
        case 0x3f5324u: goto label_3f5324;
        case 0x3f5328u: goto label_3f5328;
        case 0x3f532cu: goto label_3f532c;
        case 0x3f5330u: goto label_3f5330;
        case 0x3f5334u: goto label_3f5334;
        case 0x3f5338u: goto label_3f5338;
        case 0x3f533cu: goto label_3f533c;
        case 0x3f5340u: goto label_3f5340;
        case 0x3f5344u: goto label_3f5344;
        case 0x3f5348u: goto label_3f5348;
        case 0x3f534cu: goto label_3f534c;
        case 0x3f5350u: goto label_3f5350;
        case 0x3f5354u: goto label_3f5354;
        case 0x3f5358u: goto label_3f5358;
        case 0x3f535cu: goto label_3f535c;
        case 0x3f5360u: goto label_3f5360;
        case 0x3f5364u: goto label_3f5364;
        case 0x3f5368u: goto label_3f5368;
        case 0x3f536cu: goto label_3f536c;
        case 0x3f5370u: goto label_3f5370;
        case 0x3f5374u: goto label_3f5374;
        case 0x3f5378u: goto label_3f5378;
        case 0x3f537cu: goto label_3f537c;
        case 0x3f5380u: goto label_3f5380;
        case 0x3f5384u: goto label_3f5384;
        case 0x3f5388u: goto label_3f5388;
        case 0x3f538cu: goto label_3f538c;
        case 0x3f5390u: goto label_3f5390;
        case 0x3f5394u: goto label_3f5394;
        case 0x3f5398u: goto label_3f5398;
        case 0x3f539cu: goto label_3f539c;
        case 0x3f53a0u: goto label_3f53a0;
        case 0x3f53a4u: goto label_3f53a4;
        case 0x3f53a8u: goto label_3f53a8;
        case 0x3f53acu: goto label_3f53ac;
        case 0x3f53b0u: goto label_3f53b0;
        case 0x3f53b4u: goto label_3f53b4;
        case 0x3f53b8u: goto label_3f53b8;
        case 0x3f53bcu: goto label_3f53bc;
        case 0x3f53c0u: goto label_3f53c0;
        case 0x3f53c4u: goto label_3f53c4;
        case 0x3f53c8u: goto label_3f53c8;
        case 0x3f53ccu: goto label_3f53cc;
        case 0x3f53d0u: goto label_3f53d0;
        case 0x3f53d4u: goto label_3f53d4;
        case 0x3f53d8u: goto label_3f53d8;
        case 0x3f53dcu: goto label_3f53dc;
        case 0x3f53e0u: goto label_3f53e0;
        case 0x3f53e4u: goto label_3f53e4;
        case 0x3f53e8u: goto label_3f53e8;
        case 0x3f53ecu: goto label_3f53ec;
        case 0x3f53f0u: goto label_3f53f0;
        case 0x3f53f4u: goto label_3f53f4;
        case 0x3f53f8u: goto label_3f53f8;
        case 0x3f53fcu: goto label_3f53fc;
        case 0x3f5400u: goto label_3f5400;
        case 0x3f5404u: goto label_3f5404;
        case 0x3f5408u: goto label_3f5408;
        case 0x3f540cu: goto label_3f540c;
        case 0x3f5410u: goto label_3f5410;
        case 0x3f5414u: goto label_3f5414;
        case 0x3f5418u: goto label_3f5418;
        case 0x3f541cu: goto label_3f541c;
        case 0x3f5420u: goto label_3f5420;
        case 0x3f5424u: goto label_3f5424;
        case 0x3f5428u: goto label_3f5428;
        case 0x3f542cu: goto label_3f542c;
        case 0x3f5430u: goto label_3f5430;
        case 0x3f5434u: goto label_3f5434;
        case 0x3f5438u: goto label_3f5438;
        case 0x3f543cu: goto label_3f543c;
        case 0x3f5440u: goto label_3f5440;
        case 0x3f5444u: goto label_3f5444;
        case 0x3f5448u: goto label_3f5448;
        case 0x3f544cu: goto label_3f544c;
        case 0x3f5450u: goto label_3f5450;
        case 0x3f5454u: goto label_3f5454;
        case 0x3f5458u: goto label_3f5458;
        case 0x3f545cu: goto label_3f545c;
        case 0x3f5460u: goto label_3f5460;
        case 0x3f5464u: goto label_3f5464;
        case 0x3f5468u: goto label_3f5468;
        case 0x3f546cu: goto label_3f546c;
        case 0x3f5470u: goto label_3f5470;
        case 0x3f5474u: goto label_3f5474;
        case 0x3f5478u: goto label_3f5478;
        case 0x3f547cu: goto label_3f547c;
        case 0x3f5480u: goto label_3f5480;
        case 0x3f5484u: goto label_3f5484;
        case 0x3f5488u: goto label_3f5488;
        case 0x3f548cu: goto label_3f548c;
        case 0x3f5490u: goto label_3f5490;
        case 0x3f5494u: goto label_3f5494;
        case 0x3f5498u: goto label_3f5498;
        case 0x3f549cu: goto label_3f549c;
        case 0x3f54a0u: goto label_3f54a0;
        case 0x3f54a4u: goto label_3f54a4;
        case 0x3f54a8u: goto label_3f54a8;
        case 0x3f54acu: goto label_3f54ac;
        case 0x3f54b0u: goto label_3f54b0;
        case 0x3f54b4u: goto label_3f54b4;
        case 0x3f54b8u: goto label_3f54b8;
        case 0x3f54bcu: goto label_3f54bc;
        case 0x3f54c0u: goto label_3f54c0;
        case 0x3f54c4u: goto label_3f54c4;
        case 0x3f54c8u: goto label_3f54c8;
        case 0x3f54ccu: goto label_3f54cc;
        case 0x3f54d0u: goto label_3f54d0;
        case 0x3f54d4u: goto label_3f54d4;
        case 0x3f54d8u: goto label_3f54d8;
        case 0x3f54dcu: goto label_3f54dc;
        case 0x3f54e0u: goto label_3f54e0;
        case 0x3f54e4u: goto label_3f54e4;
        case 0x3f54e8u: goto label_3f54e8;
        case 0x3f54ecu: goto label_3f54ec;
        case 0x3f54f0u: goto label_3f54f0;
        case 0x3f54f4u: goto label_3f54f4;
        case 0x3f54f8u: goto label_3f54f8;
        case 0x3f54fcu: goto label_3f54fc;
        case 0x3f5500u: goto label_3f5500;
        case 0x3f5504u: goto label_3f5504;
        case 0x3f5508u: goto label_3f5508;
        case 0x3f550cu: goto label_3f550c;
        case 0x3f5510u: goto label_3f5510;
        case 0x3f5514u: goto label_3f5514;
        case 0x3f5518u: goto label_3f5518;
        case 0x3f551cu: goto label_3f551c;
        case 0x3f5520u: goto label_3f5520;
        case 0x3f5524u: goto label_3f5524;
        case 0x3f5528u: goto label_3f5528;
        case 0x3f552cu: goto label_3f552c;
        case 0x3f5530u: goto label_3f5530;
        case 0x3f5534u: goto label_3f5534;
        case 0x3f5538u: goto label_3f5538;
        case 0x3f553cu: goto label_3f553c;
        case 0x3f5540u: goto label_3f5540;
        case 0x3f5544u: goto label_3f5544;
        case 0x3f5548u: goto label_3f5548;
        case 0x3f554cu: goto label_3f554c;
        case 0x3f5550u: goto label_3f5550;
        case 0x3f5554u: goto label_3f5554;
        case 0x3f5558u: goto label_3f5558;
        case 0x3f555cu: goto label_3f555c;
        case 0x3f5560u: goto label_3f5560;
        case 0x3f5564u: goto label_3f5564;
        case 0x3f5568u: goto label_3f5568;
        case 0x3f556cu: goto label_3f556c;
        case 0x3f5570u: goto label_3f5570;
        case 0x3f5574u: goto label_3f5574;
        case 0x3f5578u: goto label_3f5578;
        case 0x3f557cu: goto label_3f557c;
        case 0x3f5580u: goto label_3f5580;
        case 0x3f5584u: goto label_3f5584;
        case 0x3f5588u: goto label_3f5588;
        case 0x3f558cu: goto label_3f558c;
        case 0x3f5590u: goto label_3f5590;
        case 0x3f5594u: goto label_3f5594;
        case 0x3f5598u: goto label_3f5598;
        case 0x3f559cu: goto label_3f559c;
        case 0x3f55a0u: goto label_3f55a0;
        case 0x3f55a4u: goto label_3f55a4;
        case 0x3f55a8u: goto label_3f55a8;
        case 0x3f55acu: goto label_3f55ac;
        case 0x3f55b0u: goto label_3f55b0;
        case 0x3f55b4u: goto label_3f55b4;
        case 0x3f55b8u: goto label_3f55b8;
        case 0x3f55bcu: goto label_3f55bc;
        default: break;
    }

    ctx->pc = 0x3f4d80u;

label_3f4d80:
    // 0x3f4d80: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x3f4d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_3f4d84:
    // 0x3f4d84: 0x3c054852  lui         $a1, 0x4852
    ctx->pc = 0x3f4d84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)18514 << 16));
label_3f4d88:
    // 0x3f4d88: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x3f4d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_3f4d8c:
    // 0x3f4d8c: 0x34a6f000  ori         $a2, $a1, 0xF000
    ctx->pc = 0x3f4d8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61440);
label_3f4d90:
    // 0x3f4d90: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x3f4d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_3f4d94:
    // 0x3f4d94: 0x3c05447a  lui         $a1, 0x447A
    ctx->pc = 0x3f4d94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17530 << 16));
label_3f4d98:
    // 0x3f4d98: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x3f4d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_3f4d9c:
    // 0x3f4d9c: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x3f4d9cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3f4da0:
    // 0x3f4da0: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x3f4da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_3f4da4:
    // 0x3f4da4: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x3f4da4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f4da8:
    // 0x3f4da8: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x3f4da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_3f4dac:
    // 0x3f4dac: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3f4dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_3f4db0:
    // 0x3f4db0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3f4db0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f4db4:
    // 0x3f4db4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3f4db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_3f4db8:
    // 0x3f4db8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3f4db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3f4dbc:
    // 0x3f4dbc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3f4dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3f4dc0:
    // 0x3f4dc0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3f4dc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f4dc4:
    // 0x3f4dc4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3f4dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3f4dc8:
    // 0x3f4dc8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3f4dc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f4dcc:
    // 0x3f4dcc: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x3f4dccu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_3f4dd0:
    // 0x3f4dd0: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x3f4dd0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_3f4dd4:
    // 0x3f4dd4: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x3f4dd4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_3f4dd8:
    // 0x3f4dd8: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x3f4dd8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3f4ddc:
    // 0x3f4ddc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3f4ddcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3f4de0:
    // 0x3f4de0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3f4de0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3f4de4:
    // 0x3f4de4: 0x8c830080  lw          $v1, 0x80($a0)
    ctx->pc = 0x3f4de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_3f4de8:
    // 0x3f4de8: 0xc4800074  lwc1        $f0, 0x74($a0)
    ctx->pc = 0x3f4de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f4dec:
    // 0x3f4dec: 0x8c860054  lw          $a2, 0x54($a0)
    ctx->pc = 0x3f4decu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_3f4df0:
    // 0x3f4df0: 0x8c850068  lw          $a1, 0x68($a0)
    ctx->pc = 0x3f4df0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_3f4df4:
    // 0x3f4df4: 0xc4630de4  lwc1        $f3, 0xDE4($v1)
    ctx->pc = 0x3f4df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3f4df8:
    // 0x3f4df8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x3f4df8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_3f4dfc:
    // 0x3f4dfc: 0x460110c3  div.s       $f3, $f2, $f1
    ctx->pc = 0x3f4dfcu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[3] = ctx->f[2] / ctx->f[1];
label_3f4e00:
    // 0x3f4e00: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x3f4e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3f4e04:
    // 0x3f4e04: 0x46021841  sub.s       $f1, $f3, $f2
    ctx->pc = 0x3f4e04u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_3f4e08:
    // 0x3f4e08: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3f4e08u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_3f4e0c:
    // 0x3f4e0c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f4e0cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3f4e10:
    // 0x3f4e10: 0x441e0000  mfc1        $fp, $f0
    ctx->pc = 0x3f4e10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 30, bits); }
label_3f4e14:
    // 0x3f4e14: 0x0  nop
    ctx->pc = 0x3f4e14u;
    // NOP
label_3f4e18:
    // 0x3f4e18: 0x3c5202a  slt         $a0, $fp, $a1
    ctx->pc = 0x3f4e18u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_3f4e1c:
    // 0x3f4e1c: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
label_3f4e20:
    if (ctx->pc == 0x3F4E20u) {
        ctx->pc = 0x3F4E20u;
            // 0x3f4e20: 0xa3a000c0  sb          $zero, 0xC0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 192), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x3F4E24u;
        goto label_3f4e24;
    }
    ctx->pc = 0x3F4E1Cu;
    {
        const bool branch_taken_0x3f4e1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F4E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4E1Cu;
            // 0x3f4e20: 0xa3a000c0  sb          $zero, 0xC0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 192), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4e1c) {
            ctx->pc = 0x3F4E28u;
            goto label_3f4e28;
        }
    }
    ctx->pc = 0x3F4E24u;
label_3f4e24:
    // 0x3f4e24: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x3f4e24u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3f4e28:
    // 0x3f4e28: 0x8c650db0  lw          $a1, 0xDB0($v1)
    ctx->pc = 0x3f4e28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3504)));
label_3f4e2c:
    // 0x3f4e2c: 0x28a40015  slti        $a0, $a1, 0x15
    ctx->pc = 0x3f4e2cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)21) ? 1 : 0);
label_3f4e30:
    // 0x3f4e30: 0x54800005  bnel        $a0, $zero, . + 4 + (0x5 << 2)
label_3f4e34:
    if (ctx->pc == 0x3F4E34u) {
        ctx->pc = 0x3F4E34u;
            // 0x3f4e34: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x3F4E38u;
        goto label_3f4e38;
    }
    ctx->pc = 0x3F4E30u;
    {
        const bool branch_taken_0x3f4e30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f4e30) {
            ctx->pc = 0x3F4E34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4E30u;
            // 0x3f4e34: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F4E48u;
            goto label_3f4e48;
        }
    }
    ctx->pc = 0x3F4E38u;
label_3f4e38:
    // 0x3f4e38: 0x28a4001a  slti        $a0, $a1, 0x1A
    ctx->pc = 0x3f4e38u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)26) ? 1 : 0);
label_3f4e3c:
    // 0x3f4e3c: 0x5480001c  bnel        $a0, $zero, . + 4 + (0x1C << 2)
label_3f4e40:
    if (ctx->pc == 0x3F4E40u) {
        ctx->pc = 0x3F4E40u;
            // 0x3f4e40: 0x64110001  daddiu      $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x3F4E44u;
        goto label_3f4e44;
    }
    ctx->pc = 0x3F4E3Cu;
    {
        const bool branch_taken_0x3f4e3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f4e3c) {
            ctx->pc = 0x3F4E40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4E3Cu;
            // 0x3f4e40: 0x64110001  daddiu      $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F4EB0u;
            goto label_3f4eb0;
        }
    }
    ctx->pc = 0x3F4E44u;
label_3f4e44:
    // 0x3f4e44: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x3f4e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3f4e48:
    // 0x3f4e48: 0x50a40019  beql        $a1, $a0, . + 4 + (0x19 << 2)
label_3f4e4c:
    if (ctx->pc == 0x3F4E4Cu) {
        ctx->pc = 0x3F4E4Cu;
            // 0x3f4e4c: 0x64120001  daddiu      $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x3F4E50u;
        goto label_3f4e50;
    }
    ctx->pc = 0x3F4E48u;
    {
        const bool branch_taken_0x3f4e48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x3f4e48) {
            ctx->pc = 0x3F4E4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4E48u;
            // 0x3f4e4c: 0x64120001  daddiu      $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F4EB0u;
            goto label_3f4eb0;
        }
    }
    ctx->pc = 0x3F4E50u;
label_3f4e50:
    // 0x3f4e50: 0x28a40010  slti        $a0, $a1, 0x10
    ctx->pc = 0x3f4e50u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
label_3f4e54:
    // 0x3f4e54: 0x54800005  bnel        $a0, $zero, . + 4 + (0x5 << 2)
label_3f4e58:
    if (ctx->pc == 0x3F4E58u) {
        ctx->pc = 0x3F4E58u;
            // 0x3f4e58: 0x28a4000a  slti        $a0, $a1, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->pc = 0x3F4E5Cu;
        goto label_3f4e5c;
    }
    ctx->pc = 0x3F4E54u;
    {
        const bool branch_taken_0x3f4e54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f4e54) {
            ctx->pc = 0x3F4E58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4E54u;
            // 0x3f4e58: 0x28a4000a  slti        $a0, $a1, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F4E6Cu;
            goto label_3f4e6c;
        }
    }
    ctx->pc = 0x3F4E5Cu;
label_3f4e5c:
    // 0x3f4e5c: 0x28a40015  slti        $a0, $a1, 0x15
    ctx->pc = 0x3f4e5cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)21) ? 1 : 0);
label_3f4e60:
    // 0x3f4e60: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
label_3f4e64:
    if (ctx->pc == 0x3F4E64u) {
        ctx->pc = 0x3F4E68u;
        goto label_3f4e68;
    }
    ctx->pc = 0x3F4E60u;
    {
        const bool branch_taken_0x3f4e60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f4e60) {
            ctx->pc = 0x3F4E88u;
            goto label_3f4e88;
        }
    }
    ctx->pc = 0x3F4E68u;
label_3f4e68:
    // 0x3f4e68: 0x28a4000a  slti        $a0, $a1, 0xA
    ctx->pc = 0x3f4e68u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
label_3f4e6c:
    // 0x3f4e6c: 0x14800010  bnez        $a0, . + 4 + (0x10 << 2)
label_3f4e70:
    if (ctx->pc == 0x3F4E70u) {
        ctx->pc = 0x3F4E74u;
        goto label_3f4e74;
    }
    ctx->pc = 0x3F4E6Cu;
    {
        const bool branch_taken_0x3f4e6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f4e6c) {
            ctx->pc = 0x3F4EB0u;
            goto label_3f4eb0;
        }
    }
    ctx->pc = 0x3F4E74u;
label_3f4e74:
    // 0x3f4e74: 0x28a4000f  slti        $a0, $a1, 0xF
    ctx->pc = 0x3f4e74u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)15) ? 1 : 0);
label_3f4e78:
    // 0x3f4e78: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_3f4e7c:
    if (ctx->pc == 0x3F4E7Cu) {
        ctx->pc = 0x3F4E80u;
        goto label_3f4e80;
    }
    ctx->pc = 0x3F4E78u;
    {
        const bool branch_taken_0x3f4e78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f4e78) {
            ctx->pc = 0x3F4E88u;
            goto label_3f4e88;
        }
    }
    ctx->pc = 0x3F4E80u;
label_3f4e80:
    // 0x3f4e80: 0x1000000b  b           . + 4 + (0xB << 2)
label_3f4e84:
    if (ctx->pc == 0x3F4E84u) {
        ctx->pc = 0x3F4E88u;
        goto label_3f4e88;
    }
    ctx->pc = 0x3F4E80u;
    {
        const bool branch_taken_0x3f4e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f4e80) {
            ctx->pc = 0x3F4EB0u;
            goto label_3f4eb0;
        }
    }
    ctx->pc = 0x3F4E88u;
label_3f4e88:
    // 0x3f4e88: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x3f4e88u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f4e8c:
    // 0x3f4e8c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_3f4e90:
    if (ctx->pc == 0x3F4E90u) {
        ctx->pc = 0x3F4E94u;
        goto label_3f4e94;
    }
    ctx->pc = 0x3F4E8Cu;
    {
        const bool branch_taken_0x3f4e8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3f4e8c) {
            ctx->pc = 0x3F4EB0u;
            goto label_3f4eb0;
        }
    }
    ctx->pc = 0x3F4E94u;
label_3f4e94:
    // 0x3f4e94: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x3f4e94u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3f4e98:
    // 0x3f4e98: 0x10000005  b           . + 4 + (0x5 << 2)
label_3f4e9c:
    if (ctx->pc == 0x3F4E9Cu) {
        ctx->pc = 0x3F4E9Cu;
            // 0x3f4e9c: 0xa3a400c0  sb          $a0, 0xC0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 192), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x3F4EA0u;
        goto label_3f4ea0;
    }
    ctx->pc = 0x3F4E98u;
    {
        const bool branch_taken_0x3f4e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4E98u;
            // 0x3f4e9c: 0xa3a400c0  sb          $a0, 0xC0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 192), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4e98) {
            ctx->pc = 0x3F4EB0u;
            goto label_3f4eb0;
        }
    }
    ctx->pc = 0x3F4EA0u;
label_3f4ea0:
    // 0x3f4ea0: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x3f4ea0u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3f4ea4:
    // 0x3f4ea4: 0x10000002  b           . + 4 + (0x2 << 2)
label_3f4ea8:
    if (ctx->pc == 0x3F4EA8u) {
        ctx->pc = 0x3F4EACu;
        goto label_3f4eac;
    }
    ctx->pc = 0x3F4EA4u;
    {
        const bool branch_taken_0x3f4ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f4ea4) {
            ctx->pc = 0x3F4EB0u;
            goto label_3f4eb0;
        }
    }
    ctx->pc = 0x3F4EACu;
label_3f4eac:
    // 0x3f4eac: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x3f4eacu;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3f4eb0:
    // 0x3f4eb0: 0x8ea40060  lw          $a0, 0x60($s5)
    ctx->pc = 0x3f4eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
label_3f4eb4:
    // 0x3f4eb4: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x3f4eb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_3f4eb8:
    // 0x3f4eb8: 0x50800068  beql        $a0, $zero, . + 4 + (0x68 << 2)
label_3f4ebc:
    if (ctx->pc == 0x3F4EBCu) {
        ctx->pc = 0x3F4EBCu;
            // 0x3f4ebc: 0x92a4005c  lbu         $a0, 0x5C($s5) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 92)));
        ctx->pc = 0x3F4EC0u;
        goto label_3f4ec0;
    }
    ctx->pc = 0x3F4EB8u;
    {
        const bool branch_taken_0x3f4eb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f4eb8) {
            ctx->pc = 0x3F4EBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4EB8u;
            // 0x3f4ebc: 0x92a4005c  lbu         $a0, 0x5C($s5) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F505Cu;
            goto label_3f505c;
        }
    }
    ctx->pc = 0x3F4EC0u;
label_3f4ec0:
    // 0x3f4ec0: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x3f4ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_3f4ec4:
    // 0x3f4ec4: 0x8c840e80  lw          $a0, 0xE80($a0)
    ctx->pc = 0x3f4ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3712)));
label_3f4ec8:
    // 0x3f4ec8: 0x8c840788  lw          $a0, 0x788($a0)
    ctx->pc = 0x3f4ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1928)));
label_3f4ecc:
    // 0x3f4ecc: 0x28810003  slti        $at, $a0, 0x3
    ctx->pc = 0x3f4eccu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_3f4ed0:
    // 0x3f4ed0: 0x50200060  beql        $at, $zero, . + 4 + (0x60 << 2)
label_3f4ed4:
    if (ctx->pc == 0x3F4ED4u) {
        ctx->pc = 0x3F4ED4u;
            // 0x3f4ed4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3F4ED8u;
        goto label_3f4ed8;
    }
    ctx->pc = 0x3F4ED0u;
    {
        const bool branch_taken_0x3f4ed0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f4ed0) {
            ctx->pc = 0x3F4ED4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4ED0u;
            // 0x3f4ed4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F5054u;
            goto label_3f5054;
        }
    }
    ctx->pc = 0x3F4ED8u;
label_3f4ed8:
    // 0x3f4ed8: 0x8c640e38  lw          $a0, 0xE38($v1)
    ctx->pc = 0x3f4ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3640)));
label_3f4edc:
    // 0x3f4edc: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x3f4edcu;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3f4ee0:
    // 0x3f4ee0: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
label_3f4ee4:
    if (ctx->pc == 0x3F4EE4u) {
        ctx->pc = 0x3F4EE4u;
            // 0x3f4ee4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F4EE8u;
        goto label_3f4ee8;
    }
    ctx->pc = 0x3F4EE0u;
    {
        const bool branch_taken_0x3f4ee0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x3F4EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4EE0u;
            // 0x3f4ee4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4ee0) {
            ctx->pc = 0x3F4EF8u;
            goto label_3f4ef8;
        }
    }
    ctx->pc = 0x3F4EE8u;
label_3f4ee8:
    // 0x3f4ee8: 0x28810004  slti        $at, $a0, 0x4
    ctx->pc = 0x3f4ee8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
label_3f4eec:
    // 0x3f4eec: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3f4ef0:
    if (ctx->pc == 0x3F4EF0u) {
        ctx->pc = 0x3F4EF4u;
        goto label_3f4ef4;
    }
    ctx->pc = 0x3F4EECu;
    {
        const bool branch_taken_0x3f4eec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f4eec) {
            ctx->pc = 0x3F4EF8u;
            goto label_3f4ef8;
        }
    }
    ctx->pc = 0x3F4EF4u;
label_3f4ef4:
    // 0x3f4ef4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f4ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f4ef8:
    // 0x3f4ef8: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
label_3f4efc:
    if (ctx->pc == 0x3F4EFCu) {
        ctx->pc = 0x3F4F00u;
        goto label_3f4f00;
    }
    ctx->pc = 0x3F4EF8u;
    {
        const bool branch_taken_0x3f4ef8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f4ef8) {
            ctx->pc = 0x3F4F14u;
            goto label_3f4f14;
        }
    }
    ctx->pc = 0x3F4F00u;
label_3f4f00:
    // 0x3f4f00: 0xc075eb4  jal         func_1D7AD0
label_3f4f04:
    if (ctx->pc == 0x3F4F04u) {
        ctx->pc = 0x3F4F04u;
            // 0x3f4f04: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F4F08u;
        goto label_3f4f08;
    }
    ctx->pc = 0x3F4F00u;
    SET_GPR_U32(ctx, 31, 0x3F4F08u);
    ctx->pc = 0x3F4F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4F00u;
            // 0x3f4f04: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F4F08u; }
        if (ctx->pc != 0x3F4F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F4F08u; }
        if (ctx->pc != 0x3F4F08u) { return; }
    }
    ctx->pc = 0x3F4F08u;
label_3f4f08:
    // 0x3f4f08: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3f4f0c:
    if (ctx->pc == 0x3F4F0Cu) {
        ctx->pc = 0x3F4F10u;
        goto label_3f4f10;
    }
    ctx->pc = 0x3F4F08u;
    {
        const bool branch_taken_0x3f4f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f4f08) {
            ctx->pc = 0x3F4F14u;
            goto label_3f4f14;
        }
    }
    ctx->pc = 0x3F4F10u;
label_3f4f10:
    // 0x3f4f10: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3f4f10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f4f14:
    // 0x3f4f14: 0x1200004e  beqz        $s0, . + 4 + (0x4E << 2)
label_3f4f18:
    if (ctx->pc == 0x3F4F18u) {
        ctx->pc = 0x3F4F1Cu;
        goto label_3f4f1c;
    }
    ctx->pc = 0x3F4F14u;
    {
        const bool branch_taken_0x3f4f14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f4f14) {
            ctx->pc = 0x3F5050u;
            goto label_3f5050;
        }
    }
    ctx->pc = 0x3F4F1Cu;
label_3f4f1c:
    // 0x3f4f1c: 0x11182b  sltu        $v1, $zero, $s1
    ctx->pc = 0x3f4f1cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3f4f20:
    // 0x3f4f20: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
label_3f4f24:
    if (ctx->pc == 0x3F4F24u) {
        ctx->pc = 0x3F4F24u;
            // 0x3f4f24: 0x306400ff  andi        $a0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x3F4F28u;
        goto label_3f4f28;
    }
    ctx->pc = 0x3F4F20u;
    {
        const bool branch_taken_0x3f4f20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f4f20) {
            ctx->pc = 0x3F4F24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4F20u;
            // 0x3f4f24: 0x306400ff  andi        $a0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F4F4Cu;
            goto label_3f4f4c;
        }
    }
    ctx->pc = 0x3F4F28u;
label_3f4f28:
    // 0x3f4f28: 0x8ea40080  lw          $a0, 0x80($s5)
    ctx->pc = 0x3f4f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
label_3f4f2c:
    // 0x3f4f2c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3f4f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_3f4f30:
    // 0x3f4f30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3f4f30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f4f34:
    // 0x3f4f34: 0xc4810a7c  lwc1        $f1, 0xA7C($a0)
    ctx->pc = 0x3f4f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f4f38:
    // 0x3f4f38: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3f4f38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f4f3c:
    // 0x3f4f3c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_3f4f40:
    if (ctx->pc == 0x3F4F40u) {
        ctx->pc = 0x3F4F40u;
            // 0x3f4f40: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3F4F44u;
        goto label_3f4f44;
    }
    ctx->pc = 0x3F4F3Cu;
    {
        const bool branch_taken_0x3f4f3c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3F4F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4F3Cu;
            // 0x3f4f40: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4f3c) {
            ctx->pc = 0x3F4F48u;
            goto label_3f4f48;
        }
    }
    ctx->pc = 0x3F4F44u;
label_3f4f44:
    // 0x3f4f44: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3f4f44u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f4f48:
    // 0x3f4f48: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3f4f48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_3f4f4c:
    // 0x3f4f4c: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x3f4f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_3f4f50:
    // 0x3f4f50: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3f4f50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_3f4f54:
    // 0x3f4f54: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
label_3f4f58:
    if (ctx->pc == 0x3F4F58u) {
        ctx->pc = 0x3F4F58u;
            // 0x3f4f58: 0x8ea30064  lw          $v1, 0x64($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 100)));
        ctx->pc = 0x3F4F5Cu;
        goto label_3f4f5c;
    }
    ctx->pc = 0x3F4F54u;
    {
        const bool branch_taken_0x3f4f54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f4f54) {
            ctx->pc = 0x3F4F58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4F54u;
            // 0x3f4f58: 0x8ea30064  lw          $v1, 0x64($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 100)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F4F88u;
            goto label_3f4f88;
        }
    }
    ctx->pc = 0x3F4F5Cu;
label_3f4f5c:
    // 0x3f4f5c: 0x8ea40084  lw          $a0, 0x84($s5)
    ctx->pc = 0x3f4f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
label_3f4f60:
    // 0x3f4f60: 0x8ebe0064  lw          $fp, 0x64($s5)
    ctx->pc = 0x3f4f60u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 100)));
label_3f4f64:
    // 0x3f4f64: 0x1080003c  beqz        $a0, . + 4 + (0x3C << 2)
label_3f4f68:
    if (ctx->pc == 0x3F4F68u) {
        ctx->pc = 0x3F4F68u;
            // 0x3f4f68: 0xa3a000c0  sb          $zero, 0xC0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 192), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x3F4F6Cu;
        goto label_3f4f6c;
    }
    ctx->pc = 0x3F4F64u;
    {
        const bool branch_taken_0x3f4f64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4F64u;
            // 0x3f4f68: 0xa3a000c0  sb          $zero, 0xC0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 192), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4f64) {
            ctx->pc = 0x3F5058u;
            goto label_3f5058;
        }
    }
    ctx->pc = 0x3F4F6Cu;
label_3f4f6c:
    // 0x3f4f6c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3f4f6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f4f70:
    // 0x3f4f70: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3f4f70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3f4f74:
    // 0x3f4f74: 0x320f809  jalr        $t9
label_3f4f78:
    if (ctx->pc == 0x3F4F78u) {
        ctx->pc = 0x3F4F78u;
            // 0x3f4f78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3F4F7Cu;
        goto label_3f4f7c;
    }
    ctx->pc = 0x3F4F74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F4F7Cu);
        ctx->pc = 0x3F4F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4F74u;
            // 0x3f4f78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F4F7Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F4F7Cu; }
            if (ctx->pc != 0x3F4F7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3F4F7Cu;
label_3f4f7c:
    // 0x3f4f7c: 0x10000036  b           . + 4 + (0x36 << 2)
label_3f4f80:
    if (ctx->pc == 0x3F4F80u) {
        ctx->pc = 0x3F4F80u;
            // 0x3f4f80: 0xaea00084  sw          $zero, 0x84($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 132), GPR_U32(ctx, 0));
        ctx->pc = 0x3F4F84u;
        goto label_3f4f84;
    }
    ctx->pc = 0x3F4F7Cu;
    {
        const bool branch_taken_0x3f4f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4F7Cu;
            // 0x3f4f80: 0xaea00084  sw          $zero, 0x84($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4f7c) {
            ctx->pc = 0x3F5058u;
            goto label_3f5058;
        }
    }
    ctx->pc = 0x3F4F84u;
label_3f4f84:
    // 0x3f4f84: 0x8ea30064  lw          $v1, 0x64($s5)
    ctx->pc = 0x3f4f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 100)));
label_3f4f88:
    // 0x3f4f88: 0x58600029  blezl       $v1, . + 4 + (0x29 << 2)
label_3f4f8c:
    if (ctx->pc == 0x3F4F8Cu) {
        ctx->pc = 0x3F4F8Cu;
            // 0x3f4f8c: 0x8ea40084  lw          $a0, 0x84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
        ctx->pc = 0x3F4F90u;
        goto label_3f4f90;
    }
    ctx->pc = 0x3F4F88u;
    {
        const bool branch_taken_0x3f4f88 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x3f4f88) {
            ctx->pc = 0x3F4F8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4F88u;
            // 0x3f4f8c: 0x8ea40084  lw          $a0, 0x84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F5030u;
            goto label_3f5030;
        }
    }
    ctx->pc = 0x3F4F90u;
label_3f4f90:
    // 0x3f4f90: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3f4f90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3f4f94:
    // 0x3f4f94: 0x8c633da0  lw          $v1, 0x3DA0($v1)
    ctx->pc = 0x3f4f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15776)));
label_3f4f98:
    // 0x3f4f98: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
label_3f4f9c:
    if (ctx->pc == 0x3F4F9Cu) {
        ctx->pc = 0x3F4FA0u;
        goto label_3f4fa0;
    }
    ctx->pc = 0x3F4F98u;
    {
        const bool branch_taken_0x3f4f98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f4f98) {
            ctx->pc = 0x3F5058u;
            goto label_3f5058;
        }
    }
    ctx->pc = 0x3F4FA0u;
label_3f4fa0:
    // 0x3f4fa0: 0x8c640074  lw          $a0, 0x74($v1)
    ctx->pc = 0x3f4fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_3f4fa4:
    // 0x3f4fa4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3f4fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f4fa8:
    // 0x3f4fa8: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x3f4fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_3f4fac:
    // 0x3f4fac: 0x8c840060  lw          $a0, 0x60($a0)
    ctx->pc = 0x3f4facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_3f4fb0:
    // 0x3f4fb0: 0x50830007  beql        $a0, $v1, . + 4 + (0x7 << 2)
label_3f4fb4:
    if (ctx->pc == 0x3F4FB4u) {
        ctx->pc = 0x3F4FB4u;
            // 0x3f4fb4: 0x8ea40084  lw          $a0, 0x84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
        ctx->pc = 0x3F4FB8u;
        goto label_3f4fb8;
    }
    ctx->pc = 0x3F4FB0u;
    {
        const bool branch_taken_0x3f4fb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f4fb0) {
            ctx->pc = 0x3F4FB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4FB0u;
            // 0x3f4fb4: 0x8ea40084  lw          $a0, 0x84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F4FD0u;
            goto label_3f4fd0;
        }
    }
    ctx->pc = 0x3F4FB8u;
label_3f4fb8:
    // 0x3f4fb8: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x3f4fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_3f4fbc:
    // 0x3f4fbc: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_3f4fc0:
    if (ctx->pc == 0x3F4FC0u) {
        ctx->pc = 0x3F4FC4u;
        goto label_3f4fc4;
    }
    ctx->pc = 0x3F4FBCu;
    {
        const bool branch_taken_0x3f4fbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3f4fbc) {
            ctx->pc = 0x3F4FCCu;
            goto label_3f4fcc;
        }
    }
    ctx->pc = 0x3F4FC4u;
label_3f4fc4:
    // 0x3f4fc4: 0x1000000b  b           . + 4 + (0xB << 2)
label_3f4fc8:
    if (ctx->pc == 0x3F4FC8u) {
        ctx->pc = 0x3F4FC8u;
            // 0x3f4fc8: 0x8ea30084  lw          $v1, 0x84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
        ctx->pc = 0x3F4FCCu;
        goto label_3f4fcc;
    }
    ctx->pc = 0x3F4FC4u;
    {
        const bool branch_taken_0x3f4fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4FC4u;
            // 0x3f4fc8: 0x8ea30084  lw          $v1, 0x84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4fc4) {
            ctx->pc = 0x3F4FF4u;
            goto label_3f4ff4;
        }
    }
    ctx->pc = 0x3F4FCCu;
label_3f4fcc:
    // 0x3f4fcc: 0x8ea40084  lw          $a0, 0x84($s5)
    ctx->pc = 0x3f4fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
label_3f4fd0:
    // 0x3f4fd0: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
label_3f4fd4:
    if (ctx->pc == 0x3F4FD4u) {
        ctx->pc = 0x3F4FD8u;
        goto label_3f4fd8;
    }
    ctx->pc = 0x3F4FD0u;
    {
        const bool branch_taken_0x3f4fd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f4fd0) {
            ctx->pc = 0x3F5058u;
            goto label_3f5058;
        }
    }
    ctx->pc = 0x3F4FD8u;
label_3f4fd8:
    // 0x3f4fd8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3f4fd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f4fdc:
    // 0x3f4fdc: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3f4fdcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3f4fe0:
    // 0x3f4fe0: 0x320f809  jalr        $t9
label_3f4fe4:
    if (ctx->pc == 0x3F4FE4u) {
        ctx->pc = 0x3F4FE4u;
            // 0x3f4fe4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3F4FE8u;
        goto label_3f4fe8;
    }
    ctx->pc = 0x3F4FE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F4FE8u);
        ctx->pc = 0x3F4FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4FE0u;
            // 0x3f4fe4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F4FE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F4FE8u; }
            if (ctx->pc != 0x3F4FE8u) { return; }
        }
        }
    }
    ctx->pc = 0x3F4FE8u;
label_3f4fe8:
    // 0x3f4fe8: 0x1000001b  b           . + 4 + (0x1B << 2)
label_3f4fec:
    if (ctx->pc == 0x3F4FECu) {
        ctx->pc = 0x3F4FECu;
            // 0x3f4fec: 0xaea00084  sw          $zero, 0x84($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 132), GPR_U32(ctx, 0));
        ctx->pc = 0x3F4FF0u;
        goto label_3f4ff0;
    }
    ctx->pc = 0x3F4FE8u;
    {
        const bool branch_taken_0x3f4fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F4FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F4FE8u;
            // 0x3f4fec: 0xaea00084  sw          $zero, 0x84($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f4fe8) {
            ctx->pc = 0x3F5058u;
            goto label_3f5058;
        }
    }
    ctx->pc = 0x3F4FF0u;
label_3f4ff0:
    // 0x3f4ff0: 0x8ea30084  lw          $v1, 0x84($s5)
    ctx->pc = 0x3f4ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
label_3f4ff4:
    // 0x3f4ff4: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
label_3f4ff8:
    if (ctx->pc == 0x3F4FF8u) {
        ctx->pc = 0x3F4FFCu;
        goto label_3f4ffc;
    }
    ctx->pc = 0x3F4FF4u;
    {
        const bool branch_taken_0x3f4ff4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f4ff4) {
            ctx->pc = 0x3F5058u;
            goto label_3f5058;
        }
    }
    ctx->pc = 0x3F4FFCu;
label_3f4ffc:
    // 0x3f4ffc: 0x8ea30080  lw          $v1, 0x80($s5)
    ctx->pc = 0x3f4ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
label_3f5000:
    // 0x3f5000: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3f5000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3f5004:
    // 0x3f5004: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x3f5004u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_3f5008:
    // 0x3f5008: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x3f5008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3f500c:
    // 0x3f500c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3f500cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f5010:
    // 0x3f5010: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x3f5010u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3f5014:
    // 0x3f5014: 0x906411aa  lbu         $a0, 0x11AA($v1)
    ctx->pc = 0x3f5014u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4522)));
label_3f5018:
    // 0x3f5018: 0x24660890  addiu       $a2, $v1, 0x890
    ctx->pc = 0x3f5018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 2192));
label_3f501c:
    // 0x3f501c: 0xc0bb0e8  jal         func_2EC3A0
label_3f5020:
    if (ctx->pc == 0x3F5020u) {
        ctx->pc = 0x3F5020u;
            // 0x3f5020: 0x246702c0  addiu       $a3, $v1, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 704));
        ctx->pc = 0x3F5024u;
        goto label_3f5024;
    }
    ctx->pc = 0x3F501Cu;
    SET_GPR_U32(ctx, 31, 0x3F5024u);
    ctx->pc = 0x3F5020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F501Cu;
            // 0x3f5020: 0x246702c0  addiu       $a3, $v1, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC3A0u;
    if (runtime->hasFunction(0x2EC3A0u)) {
        auto targetFn = runtime->lookupFunction(0x2EC3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5024u; }
        if (ctx->pc != 0x3F5024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EC3A0_0x2ec3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5024u; }
        if (ctx->pc != 0x3F5024u) { return; }
    }
    ctx->pc = 0x3F5024u;
label_3f5024:
    // 0x3f5024: 0x1000000c  b           . + 4 + (0xC << 2)
label_3f5028:
    if (ctx->pc == 0x3F5028u) {
        ctx->pc = 0x3F5028u;
            // 0x3f5028: 0xaea20084  sw          $v0, 0x84($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 132), GPR_U32(ctx, 2));
        ctx->pc = 0x3F502Cu;
        goto label_3f502c;
    }
    ctx->pc = 0x3F5024u;
    {
        const bool branch_taken_0x3f5024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5024u;
            // 0x3f5028: 0xaea20084  sw          $v0, 0x84($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5024) {
            ctx->pc = 0x3F5058u;
            goto label_3f5058;
        }
    }
    ctx->pc = 0x3F502Cu;
label_3f502c:
    // 0x3f502c: 0x8ea40084  lw          $a0, 0x84($s5)
    ctx->pc = 0x3f502cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 132)));
label_3f5030:
    // 0x3f5030: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_3f5034:
    if (ctx->pc == 0x3F5034u) {
        ctx->pc = 0x3F5038u;
        goto label_3f5038;
    }
    ctx->pc = 0x3F5030u;
    {
        const bool branch_taken_0x3f5030 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f5030) {
            ctx->pc = 0x3F5058u;
            goto label_3f5058;
        }
    }
    ctx->pc = 0x3F5038u;
label_3f5038:
    // 0x3f5038: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3f5038u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f503c:
    // 0x3f503c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3f503cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3f5040:
    // 0x3f5040: 0x320f809  jalr        $t9
label_3f5044:
    if (ctx->pc == 0x3F5044u) {
        ctx->pc = 0x3F5044u;
            // 0x3f5044: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3F5048u;
        goto label_3f5048;
    }
    ctx->pc = 0x3F5040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F5048u);
        ctx->pc = 0x3F5044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5040u;
            // 0x3f5044: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F5048u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F5048u; }
            if (ctx->pc != 0x3F5048u) { return; }
        }
        }
    }
    ctx->pc = 0x3F5048u;
label_3f5048:
    // 0x3f5048: 0x10000003  b           . + 4 + (0x3 << 2)
label_3f504c:
    if (ctx->pc == 0x3F504Cu) {
        ctx->pc = 0x3F504Cu;
            // 0x3f504c: 0xaea00084  sw          $zero, 0x84($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 132), GPR_U32(ctx, 0));
        ctx->pc = 0x3F5050u;
        goto label_3f5050;
    }
    ctx->pc = 0x3F5048u;
    {
        const bool branch_taken_0x3f5048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F504Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5048u;
            // 0x3f504c: 0xaea00084  sw          $zero, 0x84($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5048) {
            ctx->pc = 0x3F5058u;
            goto label_3f5058;
        }
    }
    ctx->pc = 0x3F5050u;
label_3f5050:
    // 0x3f5050: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3f5050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3f5054:
    // 0x3f5054: 0xa2a3005c  sb          $v1, 0x5C($s5)
    ctx->pc = 0x3f5054u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 92), (uint8_t)GPR_U32(ctx, 3));
label_3f5058:
    // 0x3f5058: 0x92a4005c  lbu         $a0, 0x5C($s5)
    ctx->pc = 0x3f5058u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 92)));
label_3f505c:
    // 0x3f505c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3f505cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3f5060:
    // 0x3f5060: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_3f5064:
    if (ctx->pc == 0x3F5064u) {
        ctx->pc = 0x3F5068u;
        goto label_3f5068;
    }
    ctx->pc = 0x3F5060u;
    {
        const bool branch_taken_0x3f5060 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3f5060) {
            ctx->pc = 0x3F5070u;
            goto label_3f5070;
        }
    }
    ctx->pc = 0x3F5068u;
label_3f5068:
    // 0x3f5068: 0x8ebe0064  lw          $fp, 0x64($s5)
    ctx->pc = 0x3f5068u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 100)));
label_3f506c:
    // 0x3f506c: 0xa3a000c0  sb          $zero, 0xC0($sp)
    ctx->pc = 0x3f506cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 192), (uint8_t)GPR_U32(ctx, 0));
label_3f5070:
    // 0x3f5070: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3f5070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_3f5074:
    // 0x3f5074: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x3f5074u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_3f5078:
    // 0x3f5078: 0xc476b140  lwc1        $f22, -0x4EC0($v1)
    ctx->pc = 0x3f5078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294947136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3f507c:
    // 0x3f507c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x3f507cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f5080:
    // 0x3f5080: 0xc495b144  lwc1        $f21, -0x4EBC($a0)
    ctx->pc = 0x3f5080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294947140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3f5084:
    // 0x3f5084: 0x2a0b82d  daddu       $s7, $s5, $zero
    ctx->pc = 0x3f5084u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3f5088:
    // 0x3f5088: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3f5088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_3f508c:
    // 0x3f508c: 0xc474b148  lwc1        $f20, -0x4EB8($v1)
    ctx->pc = 0x3f508cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294947144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3f5090:
    // 0x3f5090: 0x96e30090  lhu         $v1, 0x90($s7)
    ctx->pc = 0x3f5090u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 144)));
label_3f5094:
    // 0x3f5094: 0x1060008e  beqz        $v1, . + 4 + (0x8E << 2)
label_3f5098:
    if (ctx->pc == 0x3F5098u) {
        ctx->pc = 0x3F5098u;
            // 0x3f5098: 0x26f40090  addiu       $s4, $s7, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 23), 144));
        ctx->pc = 0x3F509Cu;
        goto label_3f509c;
    }
    ctx->pc = 0x3F5094u;
    {
        const bool branch_taken_0x3f5094 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5094u;
            // 0x3f5098: 0x26f40090  addiu       $s4, $s7, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 23), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5094) {
            ctx->pc = 0x3F52D0u;
            goto label_3f52d0;
        }
    }
    ctx->pc = 0x3F509Cu;
label_3f509c:
    // 0x3f509c: 0x93a200c0  lbu         $v0, 0xC0($sp)
    ctx->pc = 0x3f509cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 192)));
label_3f50a0:
    // 0x3f50a0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3f50a4:
    if (ctx->pc == 0x3F50A4u) {
        ctx->pc = 0x3F50A8u;
        goto label_3f50a8;
    }
    ctx->pc = 0x3F50A0u;
    {
        const bool branch_taken_0x3f50a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f50a0) {
            ctx->pc = 0x3F50B8u;
            goto label_3f50b8;
        }
    }
    ctx->pc = 0x3F50A8u;
label_3f50a8:
    // 0x3f50a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3f50a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3f50ac:
    // 0x3f50ac: 0x10000008  b           . + 4 + (0x8 << 2)
label_3f50b0:
    if (ctx->pc == 0x3F50B0u) {
        ctx->pc = 0x3F50B0u;
            // 0x3f50b0: 0xa6820000  sh          $v0, 0x0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3F50B4u;
        goto label_3f50b4;
    }
    ctx->pc = 0x3F50ACu;
    {
        const bool branch_taken_0x3f50ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F50B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F50ACu;
            // 0x3f50b0: 0xa6820000  sh          $v0, 0x0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f50ac) {
            ctx->pc = 0x3F50D0u;
            goto label_3f50d0;
        }
    }
    ctx->pc = 0x3F50B4u;
label_3f50b4:
    // 0x3f50b4: 0x0  nop
    ctx->pc = 0x3f50b4u;
    // NOP
label_3f50b8:
    // 0x3f50b8: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x3f50b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_3f50bc:
    // 0x3f50bc: 0x3c2082a  slt         $at, $fp, $v0
    ctx->pc = 0x3f50bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3f50c0:
    // 0x3f50c0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3f50c4:
    if (ctx->pc == 0x3F50C4u) {
        ctx->pc = 0x3F50C8u;
        goto label_3f50c8;
    }
    ctx->pc = 0x3F50C0u;
    {
        const bool branch_taken_0x3f50c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f50c0) {
            ctx->pc = 0x3F50D0u;
            goto label_3f50d0;
        }
    }
    ctx->pc = 0x3F50C8u;
label_3f50c8:
    // 0x3f50c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3f50c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3f50cc:
    // 0x3f50cc: 0xa6820000  sh          $v0, 0x0($s4)
    ctx->pc = 0x3f50ccu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 2));
label_3f50d0:
    // 0x3f50d0: 0xc07753c  jal         func_1DD4F0
label_3f50d4:
    if (ctx->pc == 0x3F50D4u) {
        ctx->pc = 0x3F50D4u;
            // 0x3f50d4: 0x8ea40080  lw          $a0, 0x80($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
        ctx->pc = 0x3F50D8u;
        goto label_3f50d8;
    }
    ctx->pc = 0x3F50D0u;
    SET_GPR_U32(ctx, 31, 0x3F50D8u);
    ctx->pc = 0x3F50D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F50D0u;
            // 0x3f50d4: 0x8ea40080  lw          $a0, 0x80($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 128)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD4F0u;
    if (runtime->hasFunction(0x1DD4F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F50D8u; }
        if (ctx->pc != 0x3F50D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD4F0_0x1dd4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F50D8u; }
        if (ctx->pc != 0x3F50D8u) { return; }
    }
    ctx->pc = 0x3F50D8u;
label_3f50d8:
    // 0x3f50d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3f50d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f50dc:
    // 0x3f50dc: 0x92820002  lbu         $v0, 0x2($s4)
    ctx->pc = 0x3f50dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
label_3f50e0:
    // 0x3f50e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3f50e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3f50e4:
    // 0x3f50e4: 0xa2820002  sb          $v0, 0x2($s4)
    ctx->pc = 0x3f50e4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2), (uint8_t)GPR_U32(ctx, 2));
label_3f50e8:
    // 0x3f50e8: 0x92820002  lbu         $v0, 0x2($s4)
    ctx->pc = 0x3f50e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
label_3f50ec:
    // 0x3f50ec: 0x2842000f  slti        $v0, $v0, 0xF
    ctx->pc = 0x3f50ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)15) ? 1 : 0);
label_3f50f0:
    // 0x3f50f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3f50f4:
    if (ctx->pc == 0x3F50F4u) {
        ctx->pc = 0x3F50F8u;
        goto label_3f50f8;
    }
    ctx->pc = 0x3F50F0u;
    {
        const bool branch_taken_0x3f50f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f50f0) {
            ctx->pc = 0x3F5100u;
            goto label_3f5100;
        }
    }
    ctx->pc = 0x3F50F8u;
label_3f50f8:
    // 0x3f50f8: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x3f50f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_3f50fc:
    // 0x3f50fc: 0xa2820002  sb          $v0, 0x2($s4)
    ctx->pc = 0x3f50fcu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2), (uint8_t)GPR_U32(ctx, 2));
label_3f5100:
    // 0x3f5100: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x3f5100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_3f5104:
    // 0x3f5104: 0x26850060  addiu       $a1, $s4, 0x60
    ctx->pc = 0x3f5104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
label_3f5108:
    // 0x3f5108: 0xc04cbbc  jal         func_132EF0
label_3f510c:
    if (ctx->pc == 0x3F510Cu) {
        ctx->pc = 0x3F510Cu;
            // 0x3f510c: 0x2686003c  addiu       $a2, $s4, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 60));
        ctx->pc = 0x3F5110u;
        goto label_3f5110;
    }
    ctx->pc = 0x3F5108u;
    SET_GPR_U32(ctx, 31, 0x3F5110u);
    ctx->pc = 0x3F510Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5108u;
            // 0x3f510c: 0x2686003c  addiu       $a2, $s4, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132EF0u;
    if (runtime->hasFunction(0x132EF0u)) {
        auto targetFn = runtime->lookupFunction(0x132EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5110u; }
        if (ctx->pc != 0x3F5110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132EF0_0x132ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5110u; }
        if (ctx->pc != 0x3F5110u) { return; }
    }
    ctx->pc = 0x3F5110u;
label_3f5110:
    // 0x3f5110: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x3f5110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_3f5114:
    // 0x3f5114: 0x26850060  addiu       $a1, $s4, 0x60
    ctx->pc = 0x3f5114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
label_3f5118:
    // 0x3f5118: 0xc04cbbc  jal         func_132EF0
label_3f511c:
    if (ctx->pc == 0x3F511Cu) {
        ctx->pc = 0x3F511Cu;
            // 0x3f511c: 0x26860048  addiu       $a2, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->pc = 0x3F5120u;
        goto label_3f5120;
    }
    ctx->pc = 0x3F5118u;
    SET_GPR_U32(ctx, 31, 0x3F5120u);
    ctx->pc = 0x3F511Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5118u;
            // 0x3f511c: 0x26860048  addiu       $a2, $s4, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132EF0u;
    if (runtime->hasFunction(0x132EF0u)) {
        auto targetFn = runtime->lookupFunction(0x132EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5120u; }
        if (ctx->pc != 0x3F5120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132EF0_0x132ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5120u; }
        if (ctx->pc != 0x3F5120u) { return; }
    }
    ctx->pc = 0x3F5120u;
label_3f5120:
    // 0x3f5120: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x3f5120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_3f5124:
    // 0x3f5124: 0x26850060  addiu       $a1, $s4, 0x60
    ctx->pc = 0x3f5124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
label_3f5128:
    // 0x3f5128: 0xc04cbbc  jal         func_132EF0
label_3f512c:
    if (ctx->pc == 0x3F512Cu) {
        ctx->pc = 0x3F512Cu;
            // 0x3f512c: 0x26860018  addiu       $a2, $s4, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
        ctx->pc = 0x3F5130u;
        goto label_3f5130;
    }
    ctx->pc = 0x3F5128u;
    SET_GPR_U32(ctx, 31, 0x3F5130u);
    ctx->pc = 0x3F512Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5128u;
            // 0x3f512c: 0x26860018  addiu       $a2, $s4, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132EF0u;
    if (runtime->hasFunction(0x132EF0u)) {
        auto targetFn = runtime->lookupFunction(0x132EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5130u; }
        if (ctx->pc != 0x3F5130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132EF0_0x132ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5130u; }
        if (ctx->pc != 0x3F5130u) { return; }
    }
    ctx->pc = 0x3F5130u;
label_3f5130:
    // 0x3f5130: 0xc6050000  lwc1        $f5, 0x0($s0)
    ctx->pc = 0x3f5130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3f5134:
    // 0x3f5134: 0x92930002  lbu         $s3, 0x2($s4)
    ctx->pc = 0x3f5134u;
    SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
label_3f5138:
    // 0x3f5138: 0xc7a400e0  lwc1        $f4, 0xE0($sp)
    ctx->pc = 0x3f5138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_3f513c:
    // 0x3f513c: 0xc68300a0  lwc1        $f3, 0xA0($s4)
    ctx->pc = 0x3f513cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3f5140:
    // 0x3f5140: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x3f5140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f5144:
    // 0x3f5144: 0x46042900  add.s       $f4, $f5, $f4
    ctx->pc = 0x3f5144u;
    ctx->f[4] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
label_3f5148:
    // 0x3f5148: 0x460325c1  sub.s       $f23, $f4, $f3
    ctx->pc = 0x3f5148u;
    ctx->f[23] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_3f514c:
    // 0x3f514c: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x3f514cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3f5150:
    // 0x3f5150: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x3f5150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f5154:
    // 0x3f5154: 0xc68300a4  lwc1        $f3, 0xA4($s4)
    ctx->pc = 0x3f5154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3f5158:
    // 0x3f5158: 0x46001100  add.s       $f4, $f2, $f0
    ctx->pc = 0x3f5158u;
    ctx->f[4] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_3f515c:
    // 0x3f515c: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x3f515cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3f5160:
    // 0x3f5160: 0xc68000a8  lwc1        $f0, 0xA8($s4)
    ctx->pc = 0x3f5160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f5164:
    // 0x3f5164: 0x46032601  sub.s       $f24, $f4, $f3
    ctx->pc = 0x3f5164u;
    ctx->f[24] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_3f5168:
    // 0x3f5168: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x3f5168u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_3f516c:
    // 0x3f516c: 0x1a60002c  blez        $s3, . + 4 + (0x2C << 2)
label_3f5170:
    if (ctx->pc == 0x3F5170u) {
        ctx->pc = 0x3F5170u;
            // 0x3f5170: 0x46000e41  sub.s       $f25, $f1, $f0 (Delay Slot)
        ctx->f[25] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3F5174u;
        goto label_3f5174;
    }
    ctx->pc = 0x3F516Cu;
    {
        const bool branch_taken_0x3f516c = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x3F5170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F516Cu;
            // 0x3f5170: 0x46000e41  sub.s       $f25, $f1, $f0 (Delay Slot)
        ctx->f[25] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f516c) {
            ctx->pc = 0x3F5220u;
            goto label_3f5220;
        }
    }
    ctx->pc = 0x3F5174u;
label_3f5174:
    // 0x3f5174: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x3f5174u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_3f5178:
    // 0x3f5178: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x3f5178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_3f517c:
    // 0x3f517c: 0x29080  sll         $s2, $v0, 2
    ctx->pc = 0x3f517cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3f5180:
    // 0x3f5180: 0x2928821  addu        $s1, $s4, $s2
    ctx->pc = 0x3f5180u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_3f5184:
    // 0x3f5184: 0x0  nop
    ctx->pc = 0x3f5184u;
    // NOP
label_3f5188:
    // 0x3f5188: 0x2642fff4  addiu       $v0, $s2, -0xC
    ctx->pc = 0x3f5188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967284));
label_3f518c:
    // 0x3f518c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x3f518cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_3f5190:
    // 0x3f5190: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x3f5190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_3f5194:
    // 0x3f5194: 0xc0d46b0  jal         func_351AC0
label_3f5198:
    if (ctx->pc == 0x3F5198u) {
        ctx->pc = 0x3F5198u;
            // 0x3f5198: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->pc = 0x3F519Cu;
        goto label_3f519c;
    }
    ctx->pc = 0x3F5194u;
    SET_GPR_U32(ctx, 31, 0x3F519Cu);
    ctx->pc = 0x3F5198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5194u;
            // 0x3f5198: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x351AC0u;
    if (runtime->hasFunction(0x351AC0u)) {
        auto targetFn = runtime->lookupFunction(0x351AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F519Cu; }
        if (ctx->pc != 0x3F519Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00351AC0_0x351ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F519Cu; }
        if (ctx->pc != 0x3F519Cu) { return; }
    }
    ctx->pc = 0x3F519Cu;
label_3f519c:
    // 0x3f519c: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x3f519cu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f51a0:
    // 0x3f51a0: 0x2652fff4  addiu       $s2, $s2, -0xC
    ctx->pc = 0x3f51a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967284));
label_3f51a4:
    // 0x3f51a4: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x3f51a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_3f51a8:
    // 0x3f51a8: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x3f51a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_3f51ac:
    // 0x3f51ac: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x3f51acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f51b0:
    // 0x3f51b0: 0xc7a100f0  lwc1        $f1, 0xF0($sp)
    ctx->pc = 0x3f51b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f51b4:
    // 0x3f51b4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x3f51b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3f51b8:
    // 0x3f51b8: 0x0  nop
    ctx->pc = 0x3f51b8u;
    // NOP
label_3f51bc:
    // 0x3f51bc: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x3f51bcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_3f51c0:
    // 0x3f51c0: 0x4604081c  madd.s      $f0, $f1, $f4
    ctx->pc = 0x3f51c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[4]));
label_3f51c4:
    // 0x3f51c4: 0x4600b840  add.s       $f1, $f23, $f0
    ctx->pc = 0x3f51c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
label_3f51c8:
    // 0x3f51c8: 0xc62000a0  lwc1        $f0, 0xA0($s1)
    ctx->pc = 0x3f51c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f51cc:
    // 0x3f51cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3f51ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3f51d0:
    // 0x3f51d0: 0xe62000a0  swc1        $f0, 0xA0($s1)
    ctx->pc = 0x3f51d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 160), bits); }
label_3f51d4:
    // 0x3f51d4: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x3f51d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f51d8:
    // 0x3f51d8: 0xc7a200f4  lwc1        $f2, 0xF4($sp)
    ctx->pc = 0x3f51d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3f51dc:
    // 0x3f51dc: 0xc62000a4  lwc1        $f0, 0xA4($s1)
    ctx->pc = 0x3f51dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f51e0:
    // 0x3f51e0: 0x46011818  adda.s      $f3, $f1
    ctx->pc = 0x3f51e0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_3f51e4:
    // 0x3f51e4: 0x4604105c  madd.s      $f1, $f2, $f4
    ctx->pc = 0x3f51e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[4]));
label_3f51e8:
    // 0x3f51e8: 0x4601c040  add.s       $f1, $f24, $f1
    ctx->pc = 0x3f51e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[24], ctx->f[1]);
label_3f51ec:
    // 0x3f51ec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3f51ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3f51f0:
    // 0x3f51f0: 0xe62000a4  swc1        $f0, 0xA4($s1)
    ctx->pc = 0x3f51f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 164), bits); }
label_3f51f4:
    // 0x3f51f4: 0xc7a10108  lwc1        $f1, 0x108($sp)
    ctx->pc = 0x3f51f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f51f8:
    // 0x3f51f8: 0xc7a200f8  lwc1        $f2, 0xF8($sp)
    ctx->pc = 0x3f51f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3f51fc:
    // 0x3f51fc: 0xc62000a8  lwc1        $f0, 0xA8($s1)
    ctx->pc = 0x3f51fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f5200:
    // 0x3f5200: 0x46011818  adda.s      $f3, $f1
    ctx->pc = 0x3f5200u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_3f5204:
    // 0x3f5204: 0x4604105c  madd.s      $f1, $f2, $f4
    ctx->pc = 0x3f5204u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[4]));
label_3f5208:
    // 0x3f5208: 0x4601c840  add.s       $f1, $f25, $f1
    ctx->pc = 0x3f5208u;
    ctx->f[1] = FPU_ADD_S(ctx->f[25], ctx->f[1]);
label_3f520c:
    // 0x3f520c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3f520cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3f5210:
    // 0x3f5210: 0xe62000a8  swc1        $f0, 0xA8($s1)
    ctx->pc = 0x3f5210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 168), bits); }
label_3f5214:
    // 0x3f5214: 0x1e60ffdc  bgtz        $s3, . + 4 + (-0x24 << 2)
label_3f5218:
    if (ctx->pc == 0x3F5218u) {
        ctx->pc = 0x3F5218u;
            // 0x3f5218: 0x2631fff4  addiu       $s1, $s1, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967284));
        ctx->pc = 0x3F521Cu;
        goto label_3f521c;
    }
    ctx->pc = 0x3F5214u;
    {
        const bool branch_taken_0x3f5214 = (GPR_S32(ctx, 19) > 0);
        ctx->pc = 0x3F5218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5214u;
            // 0x3f5218: 0x2631fff4  addiu       $s1, $s1, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5214) {
            ctx->pc = 0x3F5188u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3f5188;
        }
    }
    ctx->pc = 0x3F521Cu;
label_3f521c:
    // 0x3f521c: 0x0  nop
    ctx->pc = 0x3f521cu;
    // NOP
label_3f5220:
    // 0x3f5220: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3f5220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_3f5224:
    // 0x3f5224: 0xc7a100e0  lwc1        $f1, 0xE0($sp)
    ctx->pc = 0x3f5224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f5228:
    // 0x3f5228: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x3f5228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3f522c:
    // 0x3f522c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3f522cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f5230:
    // 0x3f5230: 0x0  nop
    ctx->pc = 0x3f5230u;
    // NOP
label_3f5234:
    // 0x3f5234: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x3f5234u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_3f5238:
    // 0x3f5238: 0xe68100a0  swc1        $f1, 0xA0($s4)
    ctx->pc = 0x3f5238u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 160), bits); }
label_3f523c:
    // 0x3f523c: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x3f523cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3f5240:
    // 0x3f5240: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x3f5240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f5244:
    // 0x3f5244: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x3f5244u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_3f5248:
    // 0x3f5248: 0xe68100a4  swc1        $f1, 0xA4($s4)
    ctx->pc = 0x3f5248u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 164), bits); }
label_3f524c:
    // 0x3f524c: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x3f524cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3f5250:
    // 0x3f5250: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x3f5250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f5254:
    // 0x3f5254: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x3f5254u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_3f5258:
    // 0x3f5258: 0xe68100a8  swc1        $f1, 0xA8($s4)
    ctx->pc = 0x3f5258u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 168), bits); }
label_3f525c:
    // 0x3f525c: 0x8ea30058  lw          $v1, 0x58($s5)
    ctx->pc = 0x3f525cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
label_3f5260:
    // 0x3f5260: 0xc6810010  lwc1        $f1, 0x10($s4)
    ctx->pc = 0x3f5260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f5264:
    // 0x3f5264: 0xc4620038  lwc1        $f2, 0x38($v1)
    ctx->pc = 0x3f5264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3f5268:
    // 0x3f5268: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3f5268u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3f526c:
    // 0x3f526c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3f526cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f5270:
    // 0x3f5270: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_3f5274:
    if (ctx->pc == 0x3F5274u) {
        ctx->pc = 0x3F5274u;
            // 0x3f5274: 0xe6810010  swc1        $f1, 0x10($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 16), bits); }
        ctx->pc = 0x3F5278u;
        goto label_3f5278;
    }
    ctx->pc = 0x3F5270u;
    {
        const bool branch_taken_0x3f5270 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3F5274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5270u;
            // 0x3f5274: 0xe6810010  swc1        $f1, 0x10($s4) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5270) {
            ctx->pc = 0x3F5280u;
            goto label_3f5280;
        }
    }
    ctx->pc = 0x3F5278u;
label_3f5278:
    // 0x3f5278: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3f5278u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3f527c:
    // 0x3f527c: 0xe6800010  swc1        $f0, 0x10($s4)
    ctx->pc = 0x3f527cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 16), bits); }
label_3f5280:
    // 0x3f5280: 0x96840000  lhu         $a0, 0x0($s4)
    ctx->pc = 0x3f5280u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_3f5284:
    // 0x3f5284: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3f5284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3f5288:
    // 0x3f5288: 0x148300ab  bne         $a0, $v1, . + 4 + (0xAB << 2)
label_3f528c:
    if (ctx->pc == 0x3F528Cu) {
        ctx->pc = 0x3F5290u;
        goto label_3f5290;
    }
    ctx->pc = 0x3F5288u;
    {
        const bool branch_taken_0x3f5288 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3f5288) {
            ctx->pc = 0x3F5538u;
            goto label_3f5538;
        }
    }
    ctx->pc = 0x3F5290u;
label_3f5290:
    // 0x3f5290: 0xc0775b8  jal         func_1DD6E0
label_3f5294:
    if (ctx->pc == 0x3F5294u) {
        ctx->pc = 0x3F5298u;
        goto label_3f5298;
    }
    ctx->pc = 0x3F5290u;
    SET_GPR_U32(ctx, 31, 0x3F5298u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5298u; }
        if (ctx->pc != 0x3F5298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5298u; }
        if (ctx->pc != 0x3F5298u) { return; }
    }
    ctx->pc = 0x3F5298u;
label_3f5298:
    // 0x3f5298: 0xc0775b4  jal         func_1DD6D0
label_3f529c:
    if (ctx->pc == 0x3F529Cu) {
        ctx->pc = 0x3F529Cu;
            // 0x3f529c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3F52A0u;
        goto label_3f52a0;
    }
    ctx->pc = 0x3F5298u;
    SET_GPR_U32(ctx, 31, 0x3F52A0u);
    ctx->pc = 0x3F529Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5298u;
            // 0x3f529c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F52A0u; }
        if (ctx->pc != 0x3F52A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F52A0u; }
        if (ctx->pc != 0x3F52A0u) { return; }
    }
    ctx->pc = 0x3F52A0u;
label_3f52a0:
    // 0x3f52a0: 0xc682000c  lwc1        $f2, 0xC($s4)
    ctx->pc = 0x3f52a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3f52a4:
    // 0x3f52a4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3f52a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f52a8:
    // 0x3f52a8: 0x0  nop
    ctx->pc = 0x3f52a8u;
    // NOP
label_3f52ac:
    // 0x3f52ac: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x3f52acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_3f52b0:
    // 0x3f52b0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3f52b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3f52b4:
    // 0x3f52b4: 0x450000a0  bc1f        . + 4 + (0xA0 << 2)
label_3f52b8:
    if (ctx->pc == 0x3F52B8u) {
        ctx->pc = 0x3F52B8u;
            // 0x3f52b8: 0xe680000c  swc1        $f0, 0xC($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
        ctx->pc = 0x3F52BCu;
        goto label_3f52bc;
    }
    ctx->pc = 0x3F52B4u;
    {
        const bool branch_taken_0x3f52b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3F52B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F52B4u;
            // 0x3f52b8: 0xe680000c  swc1        $f0, 0xC($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f52b4) {
            ctx->pc = 0x3F5538u;
            goto label_3f5538;
        }
    }
    ctx->pc = 0x3F52BCu;
label_3f52bc:
    // 0x3f52bc: 0xa6800000  sh          $zero, 0x0($s4)
    ctx->pc = 0x3f52bcu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
label_3f52c0:
    // 0x3f52c0: 0x8ea30064  lw          $v1, 0x64($s5)
    ctx->pc = 0x3f52c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 100)));
label_3f52c4:
    // 0x3f52c4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3f52c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3f52c8:
    // 0x3f52c8: 0x1000009b  b           . + 4 + (0x9B << 2)
label_3f52cc:
    if (ctx->pc == 0x3F52CCu) {
        ctx->pc = 0x3F52CCu;
            // 0x3f52cc: 0xaea30064  sw          $v1, 0x64($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 100), GPR_U32(ctx, 3));
        ctx->pc = 0x3F52D0u;
        goto label_3f52d0;
    }
    ctx->pc = 0x3F52C8u;
    {
        const bool branch_taken_0x3f52c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F52CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F52C8u;
            // 0x3f52cc: 0xaea30064  sw          $v1, 0x64($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 100), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f52c8) {
            ctx->pc = 0x3F5538u;
            goto label_3f5538;
        }
    }
    ctx->pc = 0x3F52D0u;
label_3f52d0:
    // 0x3f52d0: 0x8ea30064  lw          $v1, 0x64($s5)
    ctx->pc = 0x3f52d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 100)));
label_3f52d4:
    // 0x3f52d4: 0x7e082a  slt         $at, $v1, $fp
    ctx->pc = 0x3f52d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_3f52d8:
    // 0x3f52d8: 0x10200097  beqz        $at, . + 4 + (0x97 << 2)
label_3f52dc:
    if (ctx->pc == 0x3F52DCu) {
        ctx->pc = 0x3F52E0u;
        goto label_3f52e0;
    }
    ctx->pc = 0x3F52D8u;
    {
        const bool branch_taken_0x3f52d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f52d8) {
            ctx->pc = 0x3F5538u;
            goto label_3f5538;
        }
    }
    ctx->pc = 0x3F52E0u;
label_3f52e0:
    // 0x3f52e0: 0x8ea20054  lw          $v0, 0x54($s5)
    ctx->pc = 0x3f52e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_3f52e4:
    // 0x3f52e4: 0xc04ab66  jal         func_12AD98
label_3f52e8:
    if (ctx->pc == 0x3F52E8u) {
        ctx->pc = 0x3F52E8u;
            // 0x3f52e8: 0x90500001  lbu         $s0, 0x1($v0) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
        ctx->pc = 0x3F52ECu;
        goto label_3f52ec;
    }
    ctx->pc = 0x3F52E4u;
    SET_GPR_U32(ctx, 31, 0x3F52ECu);
    ctx->pc = 0x3F52E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F52E4u;
            // 0x3f52e8: 0x90500001  lbu         $s0, 0x1($v0) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F52ECu; }
        if (ctx->pc != 0x3F52ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F52ECu; }
        if (ctx->pc != 0x3F52ECu) { return; }
    }
    ctx->pc = 0x3F52ECu;
label_3f52ec:
    // 0x3f52ec: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3f52ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_3f52f0:
    // 0x3f52f0: 0xc04ab66  jal         func_12AD98
label_3f52f4:
    if (ctx->pc == 0x3F52F4u) {
        ctx->pc = 0x3F52F4u;
            // 0x3f52f4: 0x28f40  sll         $s1, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x3F52F8u;
        goto label_3f52f8;
    }
    ctx->pc = 0x3F52F0u;
    SET_GPR_U32(ctx, 31, 0x3F52F8u);
    ctx->pc = 0x3F52F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F52F0u;
            // 0x3f52f4: 0x28f40  sll         $s1, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F52F8u; }
        if (ctx->pc != 0x3F52F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F52F8u; }
        if (ctx->pc != 0x3F52F8u) { return; }
    }
    ctx->pc = 0x3F52F8u;
label_3f52f8:
    // 0x3f52f8: 0x511825  or          $v1, $v0, $s1
    ctx->pc = 0x3f52f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_3f52fc:
    // 0x3f52fc: 0x70001b  divu        $zero, $v1, $s0
    ctx->pc = 0x3f52fcu;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_3f5300:
    // 0x3f5300: 0x1810  mfhi        $v1
    ctx->pc = 0x3f5300u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_3f5304:
    // 0x3f5304: 0x1460008c  bnez        $v1, . + 4 + (0x8C << 2)
label_3f5308:
    if (ctx->pc == 0x3F5308u) {
        ctx->pc = 0x3F530Cu;
        goto label_3f530c;
    }
    ctx->pc = 0x3F5304u;
    {
        const bool branch_taken_0x3f5304 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f5304) {
            ctx->pc = 0x3F5538u;
            goto label_3f5538;
        }
    }
    ctx->pc = 0x3F530Cu;
label_3f530c:
    // 0x3f530c: 0x8ea20064  lw          $v0, 0x64($s5)
    ctx->pc = 0x3f530cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 100)));
label_3f5310:
    // 0x3f5310: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3f5310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3f5314:
    // 0x3f5314: 0xc0b9ffc  jal         func_2E7FF0
label_3f5318:
    if (ctx->pc == 0x3F5318u) {
        ctx->pc = 0x3F5318u;
            // 0x3f5318: 0xaea20064  sw          $v0, 0x64($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x3F531Cu;
        goto label_3f531c;
    }
    ctx->pc = 0x3F5314u;
    SET_GPR_U32(ctx, 31, 0x3F531Cu);
    ctx->pc = 0x3F5318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5314u;
            // 0x3f5318: 0xaea20064  sw          $v0, 0x64($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7FF0u;
    if (runtime->hasFunction(0x2E7FF0u)) {
        auto targetFn = runtime->lookupFunction(0x2E7FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F531Cu; }
        if (ctx->pc != 0x3F531Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7FF0_0x2e7ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F531Cu; }
        if (ctx->pc != 0x3F531Cu) { return; }
    }
    ctx->pc = 0x3F531Cu;
label_3f531c:
    // 0x3f531c: 0x8ea60054  lw          $a2, 0x54($s5)
    ctx->pc = 0x3f531cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_3f5320:
    // 0x3f5320: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3f5320u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f5324:
    // 0x3f5324: 0x8ea50068  lw          $a1, 0x68($s5)
    ctx->pc = 0x3f5324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
label_3f5328:
    // 0x3f5328: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3f5328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f532c:
    // 0x3f532c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x3f532cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3f5330:
    // 0x3f5330: 0x32c20001  andi        $v0, $s6, 0x1
    ctx->pc = 0x3f5330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
label_3f5334:
    // 0x3f5334: 0x90c60002  lbu         $a2, 0x2($a2)
    ctx->pc = 0x3f5334u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
label_3f5338:
    // 0x3f5338: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x3f5338u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
label_3f533c:
    // 0x3f533c: 0xc5001a  div         $zero, $a2, $a1
    ctx->pc = 0x3f533cu;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_3f5340:
    // 0x3f5340: 0xa6840000  sh          $a0, 0x0($s4)
    ctx->pc = 0x3f5340u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 4));
label_3f5344:
    // 0x3f5344: 0xa2800002  sb          $zero, 0x2($s4)
    ctx->pc = 0x3f5344u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2), (uint8_t)GPR_U32(ctx, 0));
label_3f5348:
    // 0x3f5348: 0x8ea40058  lw          $a0, 0x58($s5)
    ctx->pc = 0x3f5348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
label_3f534c:
    // 0x3f534c: 0x2812  mflo        $a1
    ctx->pc = 0x3f534cu;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_3f5350:
    // 0x3f5350: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3f5350u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f5354:
    // 0x3f5354: 0x0  nop
    ctx->pc = 0x3f5354u;
    // NOP
label_3f5358:
    // 0x3f5358: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3f5358u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3f535c:
    // 0x3f535c: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x3f535cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f5360:
    // 0x3f5360: 0xe680000c  swc1        $f0, 0xC($s4)
    ctx->pc = 0x3f5360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
label_3f5364:
    // 0x3f5364: 0xa2830003  sb          $v1, 0x3($s4)
    ctx->pc = 0x3f5364u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 3), (uint8_t)GPR_U32(ctx, 3));
label_3f5368:
    // 0x3f5368: 0x8ea30058  lw          $v1, 0x58($s5)
    ctx->pc = 0x3f5368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
label_3f536c:
    // 0x3f536c: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x3f536cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f5370:
    // 0x3f5370: 0xe6800010  swc1        $f0, 0x10($s4)
    ctx->pc = 0x3f5370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 16), bits); }
label_3f5374:
    // 0x3f5374: 0x8ea30058  lw          $v1, 0x58($s5)
    ctx->pc = 0x3f5374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
label_3f5378:
    // 0x3f5378: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x3f5378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f537c:
    // 0x3f537c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_3f5380:
    if (ctx->pc == 0x3F5380u) {
        ctx->pc = 0x3F5380u;
            // 0x3f5380: 0xe6800014  swc1        $f0, 0x14($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 20), bits); }
        ctx->pc = 0x3F5384u;
        goto label_3f5384;
    }
    ctx->pc = 0x3F537Cu;
    {
        const bool branch_taken_0x3f537c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F5380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F537Cu;
            // 0x3f5380: 0xe6800014  swc1        $f0, 0x14($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f537c) {
            ctx->pc = 0x3F53C8u;
            goto label_3f53c8;
        }
    }
    ctx->pc = 0x3F5384u;
label_3f5384:
    // 0x3f5384: 0x161843  sra         $v1, $s6, 1
    ctx->pc = 0x3f5384u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 22), 1));
label_3f5388:
    // 0x3f5388: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3f5388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_3f538c:
    // 0x3f538c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3f538cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f5390:
    // 0x3f5390: 0x0  nop
    ctx->pc = 0x3f5390u;
    // NOP
label_3f5394:
    // 0x3f5394: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3f5394u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3f5398:
    // 0x3f5398: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3f5398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f539c:
    // 0x3f539c: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x3f539cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_3f53a0:
    // 0x3f53a0: 0x4602001a  mula.s      $f0, $f2
    ctx->pc = 0x3f53a0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_3f53a4:
    // 0x3f53a4: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x3f53a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_3f53a8:
    // 0x3f53a8: 0x4602085c  madd.s      $f1, $f1, $f2
    ctx->pc = 0x3f53a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
label_3f53ac:
    // 0x3f53ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f53acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f53b0:
    // 0x3f53b0: 0x0  nop
    ctx->pc = 0x3f53b0u;
    // NOP
label_3f53b4:
    // 0x3f53b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3f53b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3f53b8:
    // 0x3f53b8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f53b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3f53bc:
    // 0x3f53bc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3f53bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3f53c0:
    // 0x3f53c0: 0x10000013  b           . + 4 + (0x13 << 2)
label_3f53c4:
    if (ctx->pc == 0x3F53C4u) {
        ctx->pc = 0x3F53C4u;
            // 0x3f53c4: 0xae820008  sw          $v0, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x3F53C8u;
        goto label_3f53c8;
    }
    ctx->pc = 0x3F53C0u;
    {
        const bool branch_taken_0x3f53c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F53C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F53C0u;
            // 0x3f53c4: 0xae820008  sw          $v0, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f53c0) {
            ctx->pc = 0x3F5410u;
            goto label_3f5410;
        }
    }
    ctx->pc = 0x3F53C8u;
label_3f53c8:
    // 0x3f53c8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x3f53c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_3f53cc:
    // 0x3f53cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3f53ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3f53d0:
    // 0x3f53d0: 0x161043  sra         $v0, $s6, 1
    ctx->pc = 0x3f53d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 22), 1));
label_3f53d4:
    // 0x3f53d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f53d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f53d8:
    // 0x3f53d8: 0x0  nop
    ctx->pc = 0x3f53d8u;
    // NOP
label_3f53dc:
    // 0x3f53dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3f53dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3f53e0:
    // 0x3f53e0: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x3f53e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_3f53e4:
    // 0x3f53e4: 0x34420b60  ori         $v0, $v0, 0xB60
    ctx->pc = 0x3f53e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_3f53e8:
    // 0x3f53e8: 0x4602001a  mula.s      $f0, $f2
    ctx->pc = 0x3f53e8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_3f53ec:
    // 0x3f53ec: 0x4602081c  madd.s      $f0, $f1, $f2
    ctx->pc = 0x3f53ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
label_3f53f0:
    // 0x3f53f0: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x3f53f0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_3f53f4:
    // 0x3f53f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3f53f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3f53f8:
    // 0x3f53f8: 0x0  nop
    ctx->pc = 0x3f53f8u;
    // NOP
label_3f53fc:
    // 0x3f53fc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3f53fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3f5400:
    // 0x3f5400: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3f5400u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3f5404:
    // 0x3f5404: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3f5404u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3f5408:
    // 0x3f5408: 0x0  nop
    ctx->pc = 0x3f5408u;
    // NOP
label_3f540c:
    // 0x3f540c: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x3f540cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
label_3f5410:
    // 0x3f5410: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3f5410u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_3f5414:
    // 0x3f5414: 0x26840018  addiu       $a0, $s4, 0x18
    ctx->pc = 0x3f5414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
label_3f5418:
    // 0x3f5418: 0xc0d46b0  jal         func_351AC0
label_3f541c:
    if (ctx->pc == 0x3F541Cu) {
        ctx->pc = 0x3F541Cu;
            // 0x3f541c: 0x24a5b130  addiu       $a1, $a1, -0x4ED0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947120));
        ctx->pc = 0x3F5420u;
        goto label_3f5420;
    }
    ctx->pc = 0x3F5418u;
    SET_GPR_U32(ctx, 31, 0x3F5420u);
    ctx->pc = 0x3F541Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5418u;
            // 0x3f541c: 0x24a5b130  addiu       $a1, $a1, -0x4ED0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x351AC0u;
    if (runtime->hasFunction(0x351AC0u)) {
        auto targetFn = runtime->lookupFunction(0x351AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5420u; }
        if (ctx->pc != 0x3F5420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00351AC0_0x351ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5420u; }
        if (ctx->pc != 0x3F5420u) { return; }
    }
    ctx->pc = 0x3F5420u;
label_3f5420:
    // 0x3f5420: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f5420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f5424:
    // 0x3f5424: 0xc0fd570  jal         func_3F55C0
label_3f5428:
    if (ctx->pc == 0x3F5428u) {
        ctx->pc = 0x3F5428u;
            // 0x3f5428: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->pc = 0x3F542Cu;
        goto label_3f542c;
    }
    ctx->pc = 0x3F5424u;
    SET_GPR_U32(ctx, 31, 0x3F542Cu);
    ctx->pc = 0x3F5428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5424u;
            // 0x3f5428: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F55C0u;
    if (runtime->hasFunction(0x3F55C0u)) {
        auto targetFn = runtime->lookupFunction(0x3F55C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F542Cu; }
        if (ctx->pc != 0x3F542Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F55C0_0x3f55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F542Cu; }
        if (ctx->pc != 0x3F542Cu) { return; }
    }
    ctx->pc = 0x3F542Cu;
label_3f542c:
    // 0x3f542c: 0xc681001c  lwc1        $f1, 0x1C($s4)
    ctx->pc = 0x3f542cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f5430:
    // 0x3f5430: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f5430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f5434:
    // 0x3f5434: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x3f5434u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_3f5438:
    // 0x3f5438: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3f5438u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3f543c:
    // 0x3f543c: 0xc0fd570  jal         func_3F55C0
label_3f5440:
    if (ctx->pc == 0x3F5440u) {
        ctx->pc = 0x3F5440u;
            // 0x3f5440: 0xe680001c  swc1        $f0, 0x1C($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 28), bits); }
        ctx->pc = 0x3F5444u;
        goto label_3f5444;
    }
    ctx->pc = 0x3F543Cu;
    SET_GPR_U32(ctx, 31, 0x3F5444u);
    ctx->pc = 0x3F5440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F543Cu;
            // 0x3f5440: 0xe680001c  swc1        $f0, 0x1C($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 28), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F55C0u;
    if (runtime->hasFunction(0x3F55C0u)) {
        auto targetFn = runtime->lookupFunction(0x3F55C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5444u; }
        if (ctx->pc != 0x3F5444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F55C0_0x3f55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5444u; }
        if (ctx->pc != 0x3F5444u) { return; }
    }
    ctx->pc = 0x3F5444u;
label_3f5444:
    // 0x3f5444: 0xc681001c  lwc1        $f1, 0x1C($s4)
    ctx->pc = 0x3f5444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f5448:
    // 0x3f5448: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f5448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f544c:
    // 0x3f544c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3f544cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3f5450:
    // 0x3f5450: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3f5450u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3f5454:
    // 0x3f5454: 0xc0fd570  jal         func_3F55C0
label_3f5458:
    if (ctx->pc == 0x3F5458u) {
        ctx->pc = 0x3F5458u;
            // 0x3f5458: 0xe680001c  swc1        $f0, 0x1C($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 28), bits); }
        ctx->pc = 0x3F545Cu;
        goto label_3f545c;
    }
    ctx->pc = 0x3F5454u;
    SET_GPR_U32(ctx, 31, 0x3F545Cu);
    ctx->pc = 0x3F5458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5454u;
            // 0x3f5458: 0xe680001c  swc1        $f0, 0x1C($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 28), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F55C0u;
    if (runtime->hasFunction(0x3F55C0u)) {
        auto targetFn = runtime->lookupFunction(0x3F55C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F545Cu; }
        if (ctx->pc != 0x3F545Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F55C0_0x3f55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F545Cu; }
        if (ctx->pc != 0x3F545Cu) { return; }
    }
    ctx->pc = 0x3F545Cu;
label_3f545c:
    // 0x3f545c: 0xc6810020  lwc1        $f1, 0x20($s4)
    ctx->pc = 0x3f545cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f5460:
    // 0x3f5460: 0x2684003c  addiu       $a0, $s4, 0x3C
    ctx->pc = 0x3f5460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 60));
label_3f5464:
    // 0x3f5464: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3f5464u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3f5468:
    // 0x3f5468: 0xe6800020  swc1        $f0, 0x20($s4)
    ctx->pc = 0x3f5468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 32), bits); }
label_3f546c:
    // 0x3f546c: 0x8ea20058  lw          $v0, 0x58($s5)
    ctx->pc = 0x3f546cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
label_3f5470:
    // 0x3f5470: 0xc0d46b0  jal         func_351AC0
label_3f5474:
    if (ctx->pc == 0x3F5474u) {
        ctx->pc = 0x3F5474u;
            // 0x3f5474: 0x24450014  addiu       $a1, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->pc = 0x3F5478u;
        goto label_3f5478;
    }
    ctx->pc = 0x3F5470u;
    SET_GPR_U32(ctx, 31, 0x3F5478u);
    ctx->pc = 0x3F5474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5470u;
            // 0x3f5474: 0x24450014  addiu       $a1, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x351AC0u;
    if (runtime->hasFunction(0x351AC0u)) {
        auto targetFn = runtime->lookupFunction(0x351AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5478u; }
        if (ctx->pc != 0x3F5478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00351AC0_0x351ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F5478u; }
        if (ctx->pc != 0x3F5478u) { return; }
    }
    ctx->pc = 0x3F5478u;
label_3f5478:
    // 0x3f5478: 0x8ea40058  lw          $a0, 0x58($s5)
    ctx->pc = 0x3f5478u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
label_3f547c:
    // 0x3f547c: 0xc681003c  lwc1        $f1, 0x3C($s4)
    ctx->pc = 0x3f547cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f5480:
    // 0x3f5480: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x3f5480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3f5484:
    // 0x3f5484: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x3f5484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_3f5488:
    // 0x3f5488: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x3f5488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f548c:
    // 0x3f548c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3f548cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3f5490:
    // 0x3f5490: 0xe6800048  swc1        $f0, 0x48($s4)
    ctx->pc = 0x3f5490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 72), bits); }
label_3f5494:
    // 0x3f5494: 0x8ea40058  lw          $a0, 0x58($s5)
    ctx->pc = 0x3f5494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
label_3f5498:
    // 0x3f5498: 0xc6810040  lwc1        $f1, 0x40($s4)
    ctx->pc = 0x3f5498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f549c:
    // 0x3f549c: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x3f549cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f54a0:
    // 0x3f54a0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3f54a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3f54a4:
    // 0x3f54a4: 0xe680004c  swc1        $f0, 0x4C($s4)
    ctx->pc = 0x3f54a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 76), bits); }
label_3f54a8:
    // 0x3f54a8: 0x8ea40058  lw          $a0, 0x58($s5)
    ctx->pc = 0x3f54a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
label_3f54ac:
    // 0x3f54ac: 0xc6810044  lwc1        $f1, 0x44($s4)
    ctx->pc = 0x3f54acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f54b0:
    // 0x3f54b0: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x3f54b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f54b4:
    // 0x3f54b4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3f54b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3f54b8:
    // 0x3f54b8: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_3f54bc:
    if (ctx->pc == 0x3F54BCu) {
        ctx->pc = 0x3F54BCu;
            // 0x3f54bc: 0xe6800050  swc1        $f0, 0x50($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 80), bits); }
        ctx->pc = 0x3F54C0u;
        goto label_3f54c0;
    }
    ctx->pc = 0x3F54B8u;
    {
        const bool branch_taken_0x3f54b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F54BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F54B8u;
            // 0x3f54bc: 0xe6800050  swc1        $f0, 0x50($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f54b8) {
            ctx->pc = 0x3F54DCu;
            goto label_3f54dc;
        }
    }
    ctx->pc = 0x3F54C0u;
label_3f54c0:
    // 0x3f54c0: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x3f54c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_3f54c4:
    // 0x3f54c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3f54c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3f54c8:
    // 0x3f54c8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3f54c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3f54cc:
    // 0x3f54cc: 0x0  nop
    ctx->pc = 0x3f54ccu;
    // NOP
label_3f54d0:
    // 0x3f54d0: 0x0  nop
    ctx->pc = 0x3f54d0u;
    // NOP
label_3f54d4:
    // 0x3f54d4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_3f54d8:
    if (ctx->pc == 0x3F54D8u) {
        ctx->pc = 0x3F54DCu;
        goto label_3f54dc;
    }
    ctx->pc = 0x3F54D4u;
    {
        const bool branch_taken_0x3f54d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f54d4) {
            ctx->pc = 0x3F54C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3f54c0;
        }
    }
    ctx->pc = 0x3F54DCu;
label_3f54dc:
    // 0x3f54dc: 0x8ea20058  lw          $v0, 0x58($s5)
    ctx->pc = 0x3f54dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
label_3f54e0:
    // 0x3f54e0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x3f54e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3f54e4:
    // 0x3f54e4: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x3f54e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_3f54e8:
    // 0x3f54e8: 0xc44c0004  lwc1        $f12, 0x4($v0)
    ctx->pc = 0x3f54e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3f54ec:
    // 0x3f54ec: 0xc0b9fd4  jal         func_2E7F50
label_3f54f0:
    if (ctx->pc == 0x3F54F0u) {
        ctx->pc = 0x3F54F0u;
            // 0x3f54f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F54F4u;
        goto label_3f54f4;
    }
    ctx->pc = 0x3F54ECu;
    SET_GPR_U32(ctx, 31, 0x3F54F4u);
    ctx->pc = 0x3F54F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F54ECu;
            // 0x3f54f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7F50u;
    if (runtime->hasFunction(0x2E7F50u)) {
        auto targetFn = runtime->lookupFunction(0x2E7F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F54F4u; }
        if (ctx->pc != 0x3F54F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7F50_0x2e7f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F54F4u; }
        if (ctx->pc != 0x3F54F4u) { return; }
    }
    ctx->pc = 0x3F54F4u;
label_3f54f4:
    // 0x3f54f4: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x3f54f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3f54f8:
    // 0x3f54f8: 0x26840024  addiu       $a0, $s4, 0x24
    ctx->pc = 0x3f54f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 36));
label_3f54fc:
    // 0x3f54fc: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x3f54fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3f5500:
    // 0x3f5500: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3f5500u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_3f5504:
    // 0x3f5504: 0xc0d46b0  jal         func_351AC0
label_3f5508:
    if (ctx->pc == 0x3F5508u) {
        ctx->pc = 0x3F5508u;
            // 0x3f5508: 0xe7a000d0  swc1        $f0, 0xD0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
        ctx->pc = 0x3F550Cu;
        goto label_3f550c;
    }
    ctx->pc = 0x3F5504u;
    SET_GPR_U32(ctx, 31, 0x3F550Cu);
    ctx->pc = 0x3F5508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5504u;
            // 0x3f5508: 0xe7a000d0  swc1        $f0, 0xD0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x351AC0u;
    if (runtime->hasFunction(0x351AC0u)) {
        auto targetFn = runtime->lookupFunction(0x351AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F550Cu; }
        if (ctx->pc != 0x3F550Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00351AC0_0x351ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F550Cu; }
        if (ctx->pc != 0x3F550Cu) { return; }
    }
    ctx->pc = 0x3F550Cu;
label_3f550c:
    // 0x3f550c: 0x8ea20058  lw          $v0, 0x58($s5)
    ctx->pc = 0x3f550cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
label_3f5510:
    // 0x3f5510: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x3f5510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3f5514:
    // 0x3f5514: 0xc0fd570  jal         func_3F55C0
label_3f5518:
    if (ctx->pc == 0x3F5518u) {
        ctx->pc = 0x3F5518u;
            // 0x3f5518: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3F551Cu;
        goto label_3f551c;
    }
    ctx->pc = 0x3F5514u;
    SET_GPR_U32(ctx, 31, 0x3F551Cu);
    ctx->pc = 0x3F5518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5514u;
            // 0x3f5518: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F55C0u;
    if (runtime->hasFunction(0x3F55C0u)) {
        auto targetFn = runtime->lookupFunction(0x3F55C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F551Cu; }
        if (ctx->pc != 0x3F551Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F55C0_0x3f55c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F551Cu; }
        if (ctx->pc != 0x3F551Cu) { return; }
    }
    ctx->pc = 0x3F551Cu;
label_3f551c:
    // 0x3f551c: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x3f551cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_3f5520:
    // 0x3f5520: 0x26840030  addiu       $a0, $s4, 0x30
    ctx->pc = 0x3f5520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
label_3f5524:
    // 0x3f5524: 0xc0d46b0  jal         func_351AC0
label_3f5528:
    if (ctx->pc == 0x3F5528u) {
        ctx->pc = 0x3F5528u;
            // 0x3f5528: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x3F552Cu;
        goto label_3f552c;
    }
    ctx->pc = 0x3F5524u;
    SET_GPR_U32(ctx, 31, 0x3F552Cu);
    ctx->pc = 0x3F5528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5524u;
            // 0x3f5528: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x351AC0u;
    if (runtime->hasFunction(0x351AC0u)) {
        auto targetFn = runtime->lookupFunction(0x351AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F552Cu; }
        if (ctx->pc != 0x3F552Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00351AC0_0x351ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F552Cu; }
        if (ctx->pc != 0x3F552Cu) { return; }
    }
    ctx->pc = 0x3F552Cu;
label_3f552c:
    // 0x3f552c: 0x8ea30064  lw          $v1, 0x64($s5)
    ctx->pc = 0x3f552cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 100)));
label_3f5530:
    // 0x3f5530: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x3f5530u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
label_3f5534:
    // 0x3f5534: 0x0  nop
    ctx->pc = 0x3f5534u;
    // NOP
label_3f5538:
    // 0x3f5538: 0x8ea30068  lw          $v1, 0x68($s5)
    ctx->pc = 0x3f5538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
label_3f553c:
    // 0x3f553c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x3f553cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3f5540:
    // 0x3f5540: 0x2c3182a  slt         $v1, $s6, $v1
    ctx->pc = 0x3f5540u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3f5544:
    // 0x3f5544: 0x1460fed2  bnez        $v1, . + 4 + (-0x12E << 2)
label_3f5548:
    if (ctx->pc == 0x3F5548u) {
        ctx->pc = 0x3F5548u;
            // 0x3f5548: 0x26f70160  addiu       $s7, $s7, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 352));
        ctx->pc = 0x3F554Cu;
        goto label_3f554c;
    }
    ctx->pc = 0x3F5544u;
    {
        const bool branch_taken_0x3f5544 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F5548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5544u;
            // 0x3f5548: 0x26f70160  addiu       $s7, $s7, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f5544) {
            ctx->pc = 0x3F5090u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3f5090;
        }
    }
    ctx->pc = 0x3F554Cu;
label_3f554c:
    // 0x3f554c: 0x92a4005c  lbu         $a0, 0x5C($s5)
    ctx->pc = 0x3f554cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 92)));
label_3f5550:
    // 0x3f5550: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3f5550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3f5554:
    // 0x3f5554: 0x54830006  bnel        $a0, $v1, . + 4 + (0x6 << 2)
label_3f5558:
    if (ctx->pc == 0x3F5558u) {
        ctx->pc = 0x3F5558u;
            // 0x3f5558: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->pc = 0x3F555Cu;
        goto label_3f555c;
    }
    ctx->pc = 0x3F5554u;
    {
        const bool branch_taken_0x3f5554 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3f5554) {
            ctx->pc = 0x3F5558u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5554u;
            // 0x3f5558: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F5570u;
            goto label_3f5570;
        }
    }
    ctx->pc = 0x3F555Cu;
label_3f555c:
    // 0x3f555c: 0x8ea30064  lw          $v1, 0x64($s5)
    ctx->pc = 0x3f555cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 100)));
label_3f5560:
    // 0x3f5560: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_3f5564:
    if (ctx->pc == 0x3F5564u) {
        ctx->pc = 0x3F5568u;
        goto label_3f5568;
    }
    ctx->pc = 0x3F5560u;
    {
        const bool branch_taken_0x3f5560 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f5560) {
            ctx->pc = 0x3F556Cu;
            goto label_3f556c;
        }
    }
    ctx->pc = 0x3F5568u;
label_3f5568:
    // 0x3f5568: 0xa2a0005c  sb          $zero, 0x5C($s5)
    ctx->pc = 0x3f5568u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 92), (uint8_t)GPR_U32(ctx, 0));
label_3f556c:
    // 0x3f556c: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x3f556cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_3f5570:
    // 0x3f5570: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x3f5570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_3f5574:
    // 0x3f5574: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x3f5574u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3f5578:
    // 0x3f5578: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x3f5578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_3f557c:
    // 0x3f557c: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x3f557cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3f5580:
    // 0x3f5580: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x3f5580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3f5584:
    // 0x3f5584: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x3f5584u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3f5588:
    // 0x3f5588: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x3f5588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3f558c:
    // 0x3f558c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x3f558cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3f5590:
    // 0x3f5590: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3f5590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3f5594:
    // 0x3f5594: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3f5594u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3f5598:
    // 0x3f5598: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3f5598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3f559c:
    // 0x3f559c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3f559cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3f55a0:
    // 0x3f55a0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3f55a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3f55a4:
    // 0x3f55a4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3f55a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3f55a8:
    // 0x3f55a8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3f55a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f55ac:
    // 0x3f55ac: 0x3e00008  jr          $ra
label_3f55b0:
    if (ctx->pc == 0x3F55B0u) {
        ctx->pc = 0x3F55B0u;
            // 0x3f55b0: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x3F55B4u;
        goto label_3f55b4;
    }
    ctx->pc = 0x3F55ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F55B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F55ACu;
            // 0x3f55b0: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3F55B4u;
label_3f55b4:
    // 0x3f55b4: 0x0  nop
    ctx->pc = 0x3f55b4u;
    // NOP
label_3f55b8:
    // 0x3f55b8: 0x0  nop
    ctx->pc = 0x3f55b8u;
    // NOP
label_3f55bc:
    // 0x3f55bc: 0x0  nop
    ctx->pc = 0x3f55bcu;
    // NOP
}
