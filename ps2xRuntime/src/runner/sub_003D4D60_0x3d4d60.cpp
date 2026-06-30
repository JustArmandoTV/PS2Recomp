#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003D4D60
// Address: 0x3d4d60 - 0x3d54e0
void sub_003D4D60_0x3d4d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D4D60_0x3d4d60");
#endif

    switch (ctx->pc) {
        case 0x3d4d60u: goto label_3d4d60;
        case 0x3d4d64u: goto label_3d4d64;
        case 0x3d4d68u: goto label_3d4d68;
        case 0x3d4d6cu: goto label_3d4d6c;
        case 0x3d4d70u: goto label_3d4d70;
        case 0x3d4d74u: goto label_3d4d74;
        case 0x3d4d78u: goto label_3d4d78;
        case 0x3d4d7cu: goto label_3d4d7c;
        case 0x3d4d80u: goto label_3d4d80;
        case 0x3d4d84u: goto label_3d4d84;
        case 0x3d4d88u: goto label_3d4d88;
        case 0x3d4d8cu: goto label_3d4d8c;
        case 0x3d4d90u: goto label_3d4d90;
        case 0x3d4d94u: goto label_3d4d94;
        case 0x3d4d98u: goto label_3d4d98;
        case 0x3d4d9cu: goto label_3d4d9c;
        case 0x3d4da0u: goto label_3d4da0;
        case 0x3d4da4u: goto label_3d4da4;
        case 0x3d4da8u: goto label_3d4da8;
        case 0x3d4dacu: goto label_3d4dac;
        case 0x3d4db0u: goto label_3d4db0;
        case 0x3d4db4u: goto label_3d4db4;
        case 0x3d4db8u: goto label_3d4db8;
        case 0x3d4dbcu: goto label_3d4dbc;
        case 0x3d4dc0u: goto label_3d4dc0;
        case 0x3d4dc4u: goto label_3d4dc4;
        case 0x3d4dc8u: goto label_3d4dc8;
        case 0x3d4dccu: goto label_3d4dcc;
        case 0x3d4dd0u: goto label_3d4dd0;
        case 0x3d4dd4u: goto label_3d4dd4;
        case 0x3d4dd8u: goto label_3d4dd8;
        case 0x3d4ddcu: goto label_3d4ddc;
        case 0x3d4de0u: goto label_3d4de0;
        case 0x3d4de4u: goto label_3d4de4;
        case 0x3d4de8u: goto label_3d4de8;
        case 0x3d4decu: goto label_3d4dec;
        case 0x3d4df0u: goto label_3d4df0;
        case 0x3d4df4u: goto label_3d4df4;
        case 0x3d4df8u: goto label_3d4df8;
        case 0x3d4dfcu: goto label_3d4dfc;
        case 0x3d4e00u: goto label_3d4e00;
        case 0x3d4e04u: goto label_3d4e04;
        case 0x3d4e08u: goto label_3d4e08;
        case 0x3d4e0cu: goto label_3d4e0c;
        case 0x3d4e10u: goto label_3d4e10;
        case 0x3d4e14u: goto label_3d4e14;
        case 0x3d4e18u: goto label_3d4e18;
        case 0x3d4e1cu: goto label_3d4e1c;
        case 0x3d4e20u: goto label_3d4e20;
        case 0x3d4e24u: goto label_3d4e24;
        case 0x3d4e28u: goto label_3d4e28;
        case 0x3d4e2cu: goto label_3d4e2c;
        case 0x3d4e30u: goto label_3d4e30;
        case 0x3d4e34u: goto label_3d4e34;
        case 0x3d4e38u: goto label_3d4e38;
        case 0x3d4e3cu: goto label_3d4e3c;
        case 0x3d4e40u: goto label_3d4e40;
        case 0x3d4e44u: goto label_3d4e44;
        case 0x3d4e48u: goto label_3d4e48;
        case 0x3d4e4cu: goto label_3d4e4c;
        case 0x3d4e50u: goto label_3d4e50;
        case 0x3d4e54u: goto label_3d4e54;
        case 0x3d4e58u: goto label_3d4e58;
        case 0x3d4e5cu: goto label_3d4e5c;
        case 0x3d4e60u: goto label_3d4e60;
        case 0x3d4e64u: goto label_3d4e64;
        case 0x3d4e68u: goto label_3d4e68;
        case 0x3d4e6cu: goto label_3d4e6c;
        case 0x3d4e70u: goto label_3d4e70;
        case 0x3d4e74u: goto label_3d4e74;
        case 0x3d4e78u: goto label_3d4e78;
        case 0x3d4e7cu: goto label_3d4e7c;
        case 0x3d4e80u: goto label_3d4e80;
        case 0x3d4e84u: goto label_3d4e84;
        case 0x3d4e88u: goto label_3d4e88;
        case 0x3d4e8cu: goto label_3d4e8c;
        case 0x3d4e90u: goto label_3d4e90;
        case 0x3d4e94u: goto label_3d4e94;
        case 0x3d4e98u: goto label_3d4e98;
        case 0x3d4e9cu: goto label_3d4e9c;
        case 0x3d4ea0u: goto label_3d4ea0;
        case 0x3d4ea4u: goto label_3d4ea4;
        case 0x3d4ea8u: goto label_3d4ea8;
        case 0x3d4eacu: goto label_3d4eac;
        case 0x3d4eb0u: goto label_3d4eb0;
        case 0x3d4eb4u: goto label_3d4eb4;
        case 0x3d4eb8u: goto label_3d4eb8;
        case 0x3d4ebcu: goto label_3d4ebc;
        case 0x3d4ec0u: goto label_3d4ec0;
        case 0x3d4ec4u: goto label_3d4ec4;
        case 0x3d4ec8u: goto label_3d4ec8;
        case 0x3d4eccu: goto label_3d4ecc;
        case 0x3d4ed0u: goto label_3d4ed0;
        case 0x3d4ed4u: goto label_3d4ed4;
        case 0x3d4ed8u: goto label_3d4ed8;
        case 0x3d4edcu: goto label_3d4edc;
        case 0x3d4ee0u: goto label_3d4ee0;
        case 0x3d4ee4u: goto label_3d4ee4;
        case 0x3d4ee8u: goto label_3d4ee8;
        case 0x3d4eecu: goto label_3d4eec;
        case 0x3d4ef0u: goto label_3d4ef0;
        case 0x3d4ef4u: goto label_3d4ef4;
        case 0x3d4ef8u: goto label_3d4ef8;
        case 0x3d4efcu: goto label_3d4efc;
        case 0x3d4f00u: goto label_3d4f00;
        case 0x3d4f04u: goto label_3d4f04;
        case 0x3d4f08u: goto label_3d4f08;
        case 0x3d4f0cu: goto label_3d4f0c;
        case 0x3d4f10u: goto label_3d4f10;
        case 0x3d4f14u: goto label_3d4f14;
        case 0x3d4f18u: goto label_3d4f18;
        case 0x3d4f1cu: goto label_3d4f1c;
        case 0x3d4f20u: goto label_3d4f20;
        case 0x3d4f24u: goto label_3d4f24;
        case 0x3d4f28u: goto label_3d4f28;
        case 0x3d4f2cu: goto label_3d4f2c;
        case 0x3d4f30u: goto label_3d4f30;
        case 0x3d4f34u: goto label_3d4f34;
        case 0x3d4f38u: goto label_3d4f38;
        case 0x3d4f3cu: goto label_3d4f3c;
        case 0x3d4f40u: goto label_3d4f40;
        case 0x3d4f44u: goto label_3d4f44;
        case 0x3d4f48u: goto label_3d4f48;
        case 0x3d4f4cu: goto label_3d4f4c;
        case 0x3d4f50u: goto label_3d4f50;
        case 0x3d4f54u: goto label_3d4f54;
        case 0x3d4f58u: goto label_3d4f58;
        case 0x3d4f5cu: goto label_3d4f5c;
        case 0x3d4f60u: goto label_3d4f60;
        case 0x3d4f64u: goto label_3d4f64;
        case 0x3d4f68u: goto label_3d4f68;
        case 0x3d4f6cu: goto label_3d4f6c;
        case 0x3d4f70u: goto label_3d4f70;
        case 0x3d4f74u: goto label_3d4f74;
        case 0x3d4f78u: goto label_3d4f78;
        case 0x3d4f7cu: goto label_3d4f7c;
        case 0x3d4f80u: goto label_3d4f80;
        case 0x3d4f84u: goto label_3d4f84;
        case 0x3d4f88u: goto label_3d4f88;
        case 0x3d4f8cu: goto label_3d4f8c;
        case 0x3d4f90u: goto label_3d4f90;
        case 0x3d4f94u: goto label_3d4f94;
        case 0x3d4f98u: goto label_3d4f98;
        case 0x3d4f9cu: goto label_3d4f9c;
        case 0x3d4fa0u: goto label_3d4fa0;
        case 0x3d4fa4u: goto label_3d4fa4;
        case 0x3d4fa8u: goto label_3d4fa8;
        case 0x3d4facu: goto label_3d4fac;
        case 0x3d4fb0u: goto label_3d4fb0;
        case 0x3d4fb4u: goto label_3d4fb4;
        case 0x3d4fb8u: goto label_3d4fb8;
        case 0x3d4fbcu: goto label_3d4fbc;
        case 0x3d4fc0u: goto label_3d4fc0;
        case 0x3d4fc4u: goto label_3d4fc4;
        case 0x3d4fc8u: goto label_3d4fc8;
        case 0x3d4fccu: goto label_3d4fcc;
        case 0x3d4fd0u: goto label_3d4fd0;
        case 0x3d4fd4u: goto label_3d4fd4;
        case 0x3d4fd8u: goto label_3d4fd8;
        case 0x3d4fdcu: goto label_3d4fdc;
        case 0x3d4fe0u: goto label_3d4fe0;
        case 0x3d4fe4u: goto label_3d4fe4;
        case 0x3d4fe8u: goto label_3d4fe8;
        case 0x3d4fecu: goto label_3d4fec;
        case 0x3d4ff0u: goto label_3d4ff0;
        case 0x3d4ff4u: goto label_3d4ff4;
        case 0x3d4ff8u: goto label_3d4ff8;
        case 0x3d4ffcu: goto label_3d4ffc;
        case 0x3d5000u: goto label_3d5000;
        case 0x3d5004u: goto label_3d5004;
        case 0x3d5008u: goto label_3d5008;
        case 0x3d500cu: goto label_3d500c;
        case 0x3d5010u: goto label_3d5010;
        case 0x3d5014u: goto label_3d5014;
        case 0x3d5018u: goto label_3d5018;
        case 0x3d501cu: goto label_3d501c;
        case 0x3d5020u: goto label_3d5020;
        case 0x3d5024u: goto label_3d5024;
        case 0x3d5028u: goto label_3d5028;
        case 0x3d502cu: goto label_3d502c;
        case 0x3d5030u: goto label_3d5030;
        case 0x3d5034u: goto label_3d5034;
        case 0x3d5038u: goto label_3d5038;
        case 0x3d503cu: goto label_3d503c;
        case 0x3d5040u: goto label_3d5040;
        case 0x3d5044u: goto label_3d5044;
        case 0x3d5048u: goto label_3d5048;
        case 0x3d504cu: goto label_3d504c;
        case 0x3d5050u: goto label_3d5050;
        case 0x3d5054u: goto label_3d5054;
        case 0x3d5058u: goto label_3d5058;
        case 0x3d505cu: goto label_3d505c;
        case 0x3d5060u: goto label_3d5060;
        case 0x3d5064u: goto label_3d5064;
        case 0x3d5068u: goto label_3d5068;
        case 0x3d506cu: goto label_3d506c;
        case 0x3d5070u: goto label_3d5070;
        case 0x3d5074u: goto label_3d5074;
        case 0x3d5078u: goto label_3d5078;
        case 0x3d507cu: goto label_3d507c;
        case 0x3d5080u: goto label_3d5080;
        case 0x3d5084u: goto label_3d5084;
        case 0x3d5088u: goto label_3d5088;
        case 0x3d508cu: goto label_3d508c;
        case 0x3d5090u: goto label_3d5090;
        case 0x3d5094u: goto label_3d5094;
        case 0x3d5098u: goto label_3d5098;
        case 0x3d509cu: goto label_3d509c;
        case 0x3d50a0u: goto label_3d50a0;
        case 0x3d50a4u: goto label_3d50a4;
        case 0x3d50a8u: goto label_3d50a8;
        case 0x3d50acu: goto label_3d50ac;
        case 0x3d50b0u: goto label_3d50b0;
        case 0x3d50b4u: goto label_3d50b4;
        case 0x3d50b8u: goto label_3d50b8;
        case 0x3d50bcu: goto label_3d50bc;
        case 0x3d50c0u: goto label_3d50c0;
        case 0x3d50c4u: goto label_3d50c4;
        case 0x3d50c8u: goto label_3d50c8;
        case 0x3d50ccu: goto label_3d50cc;
        case 0x3d50d0u: goto label_3d50d0;
        case 0x3d50d4u: goto label_3d50d4;
        case 0x3d50d8u: goto label_3d50d8;
        case 0x3d50dcu: goto label_3d50dc;
        case 0x3d50e0u: goto label_3d50e0;
        case 0x3d50e4u: goto label_3d50e4;
        case 0x3d50e8u: goto label_3d50e8;
        case 0x3d50ecu: goto label_3d50ec;
        case 0x3d50f0u: goto label_3d50f0;
        case 0x3d50f4u: goto label_3d50f4;
        case 0x3d50f8u: goto label_3d50f8;
        case 0x3d50fcu: goto label_3d50fc;
        case 0x3d5100u: goto label_3d5100;
        case 0x3d5104u: goto label_3d5104;
        case 0x3d5108u: goto label_3d5108;
        case 0x3d510cu: goto label_3d510c;
        case 0x3d5110u: goto label_3d5110;
        case 0x3d5114u: goto label_3d5114;
        case 0x3d5118u: goto label_3d5118;
        case 0x3d511cu: goto label_3d511c;
        case 0x3d5120u: goto label_3d5120;
        case 0x3d5124u: goto label_3d5124;
        case 0x3d5128u: goto label_3d5128;
        case 0x3d512cu: goto label_3d512c;
        case 0x3d5130u: goto label_3d5130;
        case 0x3d5134u: goto label_3d5134;
        case 0x3d5138u: goto label_3d5138;
        case 0x3d513cu: goto label_3d513c;
        case 0x3d5140u: goto label_3d5140;
        case 0x3d5144u: goto label_3d5144;
        case 0x3d5148u: goto label_3d5148;
        case 0x3d514cu: goto label_3d514c;
        case 0x3d5150u: goto label_3d5150;
        case 0x3d5154u: goto label_3d5154;
        case 0x3d5158u: goto label_3d5158;
        case 0x3d515cu: goto label_3d515c;
        case 0x3d5160u: goto label_3d5160;
        case 0x3d5164u: goto label_3d5164;
        case 0x3d5168u: goto label_3d5168;
        case 0x3d516cu: goto label_3d516c;
        case 0x3d5170u: goto label_3d5170;
        case 0x3d5174u: goto label_3d5174;
        case 0x3d5178u: goto label_3d5178;
        case 0x3d517cu: goto label_3d517c;
        case 0x3d5180u: goto label_3d5180;
        case 0x3d5184u: goto label_3d5184;
        case 0x3d5188u: goto label_3d5188;
        case 0x3d518cu: goto label_3d518c;
        case 0x3d5190u: goto label_3d5190;
        case 0x3d5194u: goto label_3d5194;
        case 0x3d5198u: goto label_3d5198;
        case 0x3d519cu: goto label_3d519c;
        case 0x3d51a0u: goto label_3d51a0;
        case 0x3d51a4u: goto label_3d51a4;
        case 0x3d51a8u: goto label_3d51a8;
        case 0x3d51acu: goto label_3d51ac;
        case 0x3d51b0u: goto label_3d51b0;
        case 0x3d51b4u: goto label_3d51b4;
        case 0x3d51b8u: goto label_3d51b8;
        case 0x3d51bcu: goto label_3d51bc;
        case 0x3d51c0u: goto label_3d51c0;
        case 0x3d51c4u: goto label_3d51c4;
        case 0x3d51c8u: goto label_3d51c8;
        case 0x3d51ccu: goto label_3d51cc;
        case 0x3d51d0u: goto label_3d51d0;
        case 0x3d51d4u: goto label_3d51d4;
        case 0x3d51d8u: goto label_3d51d8;
        case 0x3d51dcu: goto label_3d51dc;
        case 0x3d51e0u: goto label_3d51e0;
        case 0x3d51e4u: goto label_3d51e4;
        case 0x3d51e8u: goto label_3d51e8;
        case 0x3d51ecu: goto label_3d51ec;
        case 0x3d51f0u: goto label_3d51f0;
        case 0x3d51f4u: goto label_3d51f4;
        case 0x3d51f8u: goto label_3d51f8;
        case 0x3d51fcu: goto label_3d51fc;
        case 0x3d5200u: goto label_3d5200;
        case 0x3d5204u: goto label_3d5204;
        case 0x3d5208u: goto label_3d5208;
        case 0x3d520cu: goto label_3d520c;
        case 0x3d5210u: goto label_3d5210;
        case 0x3d5214u: goto label_3d5214;
        case 0x3d5218u: goto label_3d5218;
        case 0x3d521cu: goto label_3d521c;
        case 0x3d5220u: goto label_3d5220;
        case 0x3d5224u: goto label_3d5224;
        case 0x3d5228u: goto label_3d5228;
        case 0x3d522cu: goto label_3d522c;
        case 0x3d5230u: goto label_3d5230;
        case 0x3d5234u: goto label_3d5234;
        case 0x3d5238u: goto label_3d5238;
        case 0x3d523cu: goto label_3d523c;
        case 0x3d5240u: goto label_3d5240;
        case 0x3d5244u: goto label_3d5244;
        case 0x3d5248u: goto label_3d5248;
        case 0x3d524cu: goto label_3d524c;
        case 0x3d5250u: goto label_3d5250;
        case 0x3d5254u: goto label_3d5254;
        case 0x3d5258u: goto label_3d5258;
        case 0x3d525cu: goto label_3d525c;
        case 0x3d5260u: goto label_3d5260;
        case 0x3d5264u: goto label_3d5264;
        case 0x3d5268u: goto label_3d5268;
        case 0x3d526cu: goto label_3d526c;
        case 0x3d5270u: goto label_3d5270;
        case 0x3d5274u: goto label_3d5274;
        case 0x3d5278u: goto label_3d5278;
        case 0x3d527cu: goto label_3d527c;
        case 0x3d5280u: goto label_3d5280;
        case 0x3d5284u: goto label_3d5284;
        case 0x3d5288u: goto label_3d5288;
        case 0x3d528cu: goto label_3d528c;
        case 0x3d5290u: goto label_3d5290;
        case 0x3d5294u: goto label_3d5294;
        case 0x3d5298u: goto label_3d5298;
        case 0x3d529cu: goto label_3d529c;
        case 0x3d52a0u: goto label_3d52a0;
        case 0x3d52a4u: goto label_3d52a4;
        case 0x3d52a8u: goto label_3d52a8;
        case 0x3d52acu: goto label_3d52ac;
        case 0x3d52b0u: goto label_3d52b0;
        case 0x3d52b4u: goto label_3d52b4;
        case 0x3d52b8u: goto label_3d52b8;
        case 0x3d52bcu: goto label_3d52bc;
        case 0x3d52c0u: goto label_3d52c0;
        case 0x3d52c4u: goto label_3d52c4;
        case 0x3d52c8u: goto label_3d52c8;
        case 0x3d52ccu: goto label_3d52cc;
        case 0x3d52d0u: goto label_3d52d0;
        case 0x3d52d4u: goto label_3d52d4;
        case 0x3d52d8u: goto label_3d52d8;
        case 0x3d52dcu: goto label_3d52dc;
        case 0x3d52e0u: goto label_3d52e0;
        case 0x3d52e4u: goto label_3d52e4;
        case 0x3d52e8u: goto label_3d52e8;
        case 0x3d52ecu: goto label_3d52ec;
        case 0x3d52f0u: goto label_3d52f0;
        case 0x3d52f4u: goto label_3d52f4;
        case 0x3d52f8u: goto label_3d52f8;
        case 0x3d52fcu: goto label_3d52fc;
        case 0x3d5300u: goto label_3d5300;
        case 0x3d5304u: goto label_3d5304;
        case 0x3d5308u: goto label_3d5308;
        case 0x3d530cu: goto label_3d530c;
        case 0x3d5310u: goto label_3d5310;
        case 0x3d5314u: goto label_3d5314;
        case 0x3d5318u: goto label_3d5318;
        case 0x3d531cu: goto label_3d531c;
        case 0x3d5320u: goto label_3d5320;
        case 0x3d5324u: goto label_3d5324;
        case 0x3d5328u: goto label_3d5328;
        case 0x3d532cu: goto label_3d532c;
        case 0x3d5330u: goto label_3d5330;
        case 0x3d5334u: goto label_3d5334;
        case 0x3d5338u: goto label_3d5338;
        case 0x3d533cu: goto label_3d533c;
        case 0x3d5340u: goto label_3d5340;
        case 0x3d5344u: goto label_3d5344;
        case 0x3d5348u: goto label_3d5348;
        case 0x3d534cu: goto label_3d534c;
        case 0x3d5350u: goto label_3d5350;
        case 0x3d5354u: goto label_3d5354;
        case 0x3d5358u: goto label_3d5358;
        case 0x3d535cu: goto label_3d535c;
        case 0x3d5360u: goto label_3d5360;
        case 0x3d5364u: goto label_3d5364;
        case 0x3d5368u: goto label_3d5368;
        case 0x3d536cu: goto label_3d536c;
        case 0x3d5370u: goto label_3d5370;
        case 0x3d5374u: goto label_3d5374;
        case 0x3d5378u: goto label_3d5378;
        case 0x3d537cu: goto label_3d537c;
        case 0x3d5380u: goto label_3d5380;
        case 0x3d5384u: goto label_3d5384;
        case 0x3d5388u: goto label_3d5388;
        case 0x3d538cu: goto label_3d538c;
        case 0x3d5390u: goto label_3d5390;
        case 0x3d5394u: goto label_3d5394;
        case 0x3d5398u: goto label_3d5398;
        case 0x3d539cu: goto label_3d539c;
        case 0x3d53a0u: goto label_3d53a0;
        case 0x3d53a4u: goto label_3d53a4;
        case 0x3d53a8u: goto label_3d53a8;
        case 0x3d53acu: goto label_3d53ac;
        case 0x3d53b0u: goto label_3d53b0;
        case 0x3d53b4u: goto label_3d53b4;
        case 0x3d53b8u: goto label_3d53b8;
        case 0x3d53bcu: goto label_3d53bc;
        case 0x3d53c0u: goto label_3d53c0;
        case 0x3d53c4u: goto label_3d53c4;
        case 0x3d53c8u: goto label_3d53c8;
        case 0x3d53ccu: goto label_3d53cc;
        case 0x3d53d0u: goto label_3d53d0;
        case 0x3d53d4u: goto label_3d53d4;
        case 0x3d53d8u: goto label_3d53d8;
        case 0x3d53dcu: goto label_3d53dc;
        case 0x3d53e0u: goto label_3d53e0;
        case 0x3d53e4u: goto label_3d53e4;
        case 0x3d53e8u: goto label_3d53e8;
        case 0x3d53ecu: goto label_3d53ec;
        case 0x3d53f0u: goto label_3d53f0;
        case 0x3d53f4u: goto label_3d53f4;
        case 0x3d53f8u: goto label_3d53f8;
        case 0x3d53fcu: goto label_3d53fc;
        case 0x3d5400u: goto label_3d5400;
        case 0x3d5404u: goto label_3d5404;
        case 0x3d5408u: goto label_3d5408;
        case 0x3d540cu: goto label_3d540c;
        case 0x3d5410u: goto label_3d5410;
        case 0x3d5414u: goto label_3d5414;
        case 0x3d5418u: goto label_3d5418;
        case 0x3d541cu: goto label_3d541c;
        case 0x3d5420u: goto label_3d5420;
        case 0x3d5424u: goto label_3d5424;
        case 0x3d5428u: goto label_3d5428;
        case 0x3d542cu: goto label_3d542c;
        case 0x3d5430u: goto label_3d5430;
        case 0x3d5434u: goto label_3d5434;
        case 0x3d5438u: goto label_3d5438;
        case 0x3d543cu: goto label_3d543c;
        case 0x3d5440u: goto label_3d5440;
        case 0x3d5444u: goto label_3d5444;
        case 0x3d5448u: goto label_3d5448;
        case 0x3d544cu: goto label_3d544c;
        case 0x3d5450u: goto label_3d5450;
        case 0x3d5454u: goto label_3d5454;
        case 0x3d5458u: goto label_3d5458;
        case 0x3d545cu: goto label_3d545c;
        case 0x3d5460u: goto label_3d5460;
        case 0x3d5464u: goto label_3d5464;
        case 0x3d5468u: goto label_3d5468;
        case 0x3d546cu: goto label_3d546c;
        case 0x3d5470u: goto label_3d5470;
        case 0x3d5474u: goto label_3d5474;
        case 0x3d5478u: goto label_3d5478;
        case 0x3d547cu: goto label_3d547c;
        case 0x3d5480u: goto label_3d5480;
        case 0x3d5484u: goto label_3d5484;
        case 0x3d5488u: goto label_3d5488;
        case 0x3d548cu: goto label_3d548c;
        case 0x3d5490u: goto label_3d5490;
        case 0x3d5494u: goto label_3d5494;
        case 0x3d5498u: goto label_3d5498;
        case 0x3d549cu: goto label_3d549c;
        case 0x3d54a0u: goto label_3d54a0;
        case 0x3d54a4u: goto label_3d54a4;
        case 0x3d54a8u: goto label_3d54a8;
        case 0x3d54acu: goto label_3d54ac;
        case 0x3d54b0u: goto label_3d54b0;
        case 0x3d54b4u: goto label_3d54b4;
        case 0x3d54b8u: goto label_3d54b8;
        case 0x3d54bcu: goto label_3d54bc;
        case 0x3d54c0u: goto label_3d54c0;
        case 0x3d54c4u: goto label_3d54c4;
        case 0x3d54c8u: goto label_3d54c8;
        case 0x3d54ccu: goto label_3d54cc;
        case 0x3d54d0u: goto label_3d54d0;
        case 0x3d54d4u: goto label_3d54d4;
        case 0x3d54d8u: goto label_3d54d8;
        case 0x3d54dcu: goto label_3d54dc;
        default: break;
    }

    ctx->pc = 0x3d4d60u;

label_3d4d60:
    // 0x3d4d60: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x3d4d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_3d4d64:
    // 0x3d4d64: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3d4d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3d4d68:
    // 0x3d4d68: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3d4d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_3d4d6c:
    // 0x3d4d6c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3d4d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3d4d70:
    // 0x3d4d70: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3d4d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3d4d74:
    // 0x3d4d74: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3d4d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3d4d78:
    // 0x3d4d78: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3d4d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3d4d7c:
    // 0x3d4d7c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3d4d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3d4d80:
    // 0x3d4d80: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3d4d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3d4d84:
    // 0x3d4d84: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x3d4d84u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3d4d88:
    // 0x3d4d88: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3d4d88u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3d4d8c:
    // 0x3d4d8c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3d4d8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3d4d90:
    // 0x3d4d90: 0x90860010  lbu         $a2, 0x10($a0)
    ctx->pc = 0x3d4d90u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3d4d94:
    // 0x3d4d94: 0x14c500bb  bne         $a2, $a1, . + 4 + (0xBB << 2)
label_3d4d98:
    if (ctx->pc == 0x3D4D98u) {
        ctx->pc = 0x3D4D98u;
            // 0x3d4d98: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D4D9Cu;
        goto label_3d4d9c;
    }
    ctx->pc = 0x3D4D94u;
    {
        const bool branch_taken_0x3d4d94 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        ctx->pc = 0x3D4D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4D94u;
            // 0x3d4d98: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4d94) {
            ctx->pc = 0x3D5084u;
            goto label_3d5084;
        }
    }
    ctx->pc = 0x3D4D9Cu;
label_3d4d9c:
    // 0x3d4d9c: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x3d4d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_3d4da0:
    // 0x3d4da0: 0x8e4400c4  lw          $a0, 0xC4($s2)
    ctx->pc = 0x3d4da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_3d4da4:
    // 0x3d4da4: 0x8c63d130  lw          $v1, -0x2ED0($v1)
    ctx->pc = 0x3d4da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_3d4da8:
    // 0x3d4da8: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x3d4da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_3d4dac:
    // 0x3d4dac: 0x548300b6  bnel        $a0, $v1, . + 4 + (0xB6 << 2)
label_3d4db0:
    if (ctx->pc == 0x3D4DB0u) {
        ctx->pc = 0x3D4DB0u;
            // 0x3d4db0: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x3D4DB4u;
        goto label_3d4db4;
    }
    ctx->pc = 0x3D4DACu;
    {
        const bool branch_taken_0x3d4dac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3d4dac) {
            ctx->pc = 0x3D4DB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4DACu;
            // 0x3d4db0: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D5088u;
            goto label_3d5088;
        }
    }
    ctx->pc = 0x3D4DB4u;
label_3d4db4:
    // 0x3d4db4: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x3d4db4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_3d4db8:
    // 0x3d4db8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3d4db8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3d4dbc:
    // 0x3d4dbc: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x3d4dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_3d4dc0:
    // 0x3d4dc0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3d4dc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d4dc4:
    // 0x3d4dc4: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x3d4dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_3d4dc8:
    // 0x3d4dc8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3d4dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3d4dcc:
    // 0x3d4dcc: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x3d4dccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3d4dd0:
    // 0x3d4dd0: 0x10c50003  beq         $a2, $a1, . + 4 + (0x3 << 2)
label_3d4dd4:
    if (ctx->pc == 0x3D4DD4u) {
        ctx->pc = 0x3D4DD4u;
            // 0x3d4dd4: 0x26130010  addiu       $s3, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x3D4DD8u;
        goto label_3d4dd8;
    }
    ctx->pc = 0x3D4DD0u;
    {
        const bool branch_taken_0x3d4dd0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        ctx->pc = 0x3D4DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4DD0u;
            // 0x3d4dd4: 0x26130010  addiu       $s3, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4dd0) {
            ctx->pc = 0x3D4DE0u;
            goto label_3d4de0;
        }
    }
    ctx->pc = 0x3D4DD8u;
label_3d4dd8:
    // 0x3d4dd8: 0x100000aa  b           . + 4 + (0xAA << 2)
label_3d4ddc:
    if (ctx->pc == 0x3D4DDCu) {
        ctx->pc = 0x3D4DE0u;
        goto label_3d4de0;
    }
    ctx->pc = 0x3D4DD8u;
    {
        const bool branch_taken_0x3d4dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d4dd8) {
            ctx->pc = 0x3D5084u;
            goto label_3d5084;
        }
    }
    ctx->pc = 0x3D4DE0u;
label_3d4de0:
    // 0x3d4de0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3d4de0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3d4de4:
    // 0x3d4de4: 0x24630e84  addiu       $v1, $v1, 0xE84
    ctx->pc = 0x3d4de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3716));
label_3d4de8:
    // 0x3d4de8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3d4de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3d4dec:
    // 0x3d4dec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3d4decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3d4df0:
    // 0x3d4df0: 0x8c830da0  lw          $v1, 0xDA0($a0)
    ctx->pc = 0x3d4df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3488)));
label_3d4df4:
    // 0x3d4df4: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x3d4df4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_3d4df8:
    // 0x3d4df8: 0x186000a2  blez        $v1, . + 4 + (0xA2 << 2)
label_3d4dfc:
    if (ctx->pc == 0x3D4DFCu) {
        ctx->pc = 0x3D4E00u;
        goto label_3d4e00;
    }
    ctx->pc = 0x3D4DF8u;
    {
        const bool branch_taken_0x3d4df8 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x3d4df8) {
            ctx->pc = 0x3D5084u;
            goto label_3d5084;
        }
    }
    ctx->pc = 0x3D4E00u;
label_3d4e00:
    // 0x3d4e00: 0x924300c0  lbu         $v1, 0xC0($s2)
    ctx->pc = 0x3d4e00u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 192)));
label_3d4e04:
    // 0x3d4e04: 0x1060009f  beqz        $v1, . + 4 + (0x9F << 2)
label_3d4e08:
    if (ctx->pc == 0x3D4E08u) {
        ctx->pc = 0x3D4E0Cu;
        goto label_3d4e0c;
    }
    ctx->pc = 0x3D4E04u;
    {
        const bool branch_taken_0x3d4e04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d4e04) {
            ctx->pc = 0x3D5084u;
            goto label_3d5084;
        }
    }
    ctx->pc = 0x3D4E0Cu;
label_3d4e0c:
    // 0x3d4e0c: 0x92420080  lbu         $v0, 0x80($s2)
    ctx->pc = 0x3d4e0cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 128)));
label_3d4e10:
    // 0x3d4e10: 0x248502c0  addiu       $a1, $a0, 0x2C0
    ctx->pc = 0x3d4e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 704));
label_3d4e14:
    // 0x3d4e14: 0x92460081  lbu         $a2, 0x81($s2)
    ctx->pc = 0x3d4e14u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 129)));
label_3d4e18:
    // 0x3d4e18: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x3d4e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_3d4e1c:
    // 0x3d4e1c: 0x92430082  lbu         $v1, 0x82($s2)
    ctx->pc = 0x3d4e1cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 130)));
label_3d4e20:
    // 0x3d4e20: 0x23e00  sll         $a3, $v0, 24
    ctx->pc = 0x3d4e20u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_3d4e24:
    // 0x3d4e24: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x3d4e24u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_3d4e28:
    // 0x3d4e28: 0x92420083  lbu         $v0, 0x83($s2)
    ctx->pc = 0x3d4e28u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 131)));
label_3d4e2c:
    // 0x3d4e2c: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x3d4e2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
label_3d4e30:
    // 0x3d4e30: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x3d4e30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_3d4e34:
    // 0x3d4e34: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x3d4e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_3d4e38:
    // 0x3d4e38: 0xc04cc04  jal         func_133010
label_3d4e3c:
    if (ctx->pc == 0x3D4E3Cu) {
        ctx->pc = 0x3D4E3Cu;
            // 0x3d4e3c: 0x43a025  or          $s4, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->pc = 0x3D4E40u;
        goto label_3d4e40;
    }
    ctx->pc = 0x3D4E38u;
    SET_GPR_U32(ctx, 31, 0x3D4E40u);
    ctx->pc = 0x3D4E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4E38u;
            // 0x3d4e3c: 0x43a025  or          $s4, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4E40u; }
        if (ctx->pc != 0x3D4E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4E40u; }
        if (ctx->pc != 0x3D4E40u) { return; }
    }
    ctx->pc = 0x3D4E40u;
label_3d4e40:
    // 0x3d4e40: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x3d4e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_3d4e44:
    // 0x3d4e44: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3d4e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3d4e48:
    // 0x3d4e48: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_3d4e4c:
    if (ctx->pc == 0x3D4E4Cu) {
        ctx->pc = 0x3D4E4Cu;
            // 0x3d4e4c: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3D4E50u;
        goto label_3d4e50;
    }
    ctx->pc = 0x3D4E48u;
    {
        const bool branch_taken_0x3d4e48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d4e48) {
            ctx->pc = 0x3D4E4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4E48u;
            // 0x3d4e4c: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D4E60u;
            goto label_3d4e60;
        }
    }
    ctx->pc = 0x3D4E50u;
label_3d4e50:
    // 0x3d4e50: 0x26050200  addiu       $a1, $s0, 0x200
    ctx->pc = 0x3d4e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
label_3d4e54:
    // 0x3d4e54: 0xc04cc04  jal         func_133010
label_3d4e58:
    if (ctx->pc == 0x3D4E58u) {
        ctx->pc = 0x3D4E58u;
            // 0x3d4e58: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x3D4E5Cu;
        goto label_3d4e5c;
    }
    ctx->pc = 0x3D4E54u;
    SET_GPR_U32(ctx, 31, 0x3D4E5Cu);
    ctx->pc = 0x3D4E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4E54u;
            // 0x3d4e58: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4E5Cu; }
        if (ctx->pc != 0x3D4E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4E5Cu; }
        if (ctx->pc != 0x3D4E5Cu) { return; }
    }
    ctx->pc = 0x3D4E5Cu;
label_3d4e5c:
    // 0x3d4e5c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3d4e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3d4e60:
    // 0x3d4e60: 0x264500e0  addiu       $a1, $s2, 0xE0
    ctx->pc = 0x3d4e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
label_3d4e64:
    // 0x3d4e64: 0xc04cce8  jal         func_1333A0
label_3d4e68:
    if (ctx->pc == 0x3D4E68u) {
        ctx->pc = 0x3D4E68u;
            // 0x3d4e68: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D4E6Cu;
        goto label_3d4e6c;
    }
    ctx->pc = 0x3D4E64u;
    SET_GPR_U32(ctx, 31, 0x3D4E6Cu);
    ctx->pc = 0x3D4E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4E64u;
            // 0x3d4e68: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4E6Cu; }
        if (ctx->pc != 0x3D4E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4E6Cu; }
        if (ctx->pc != 0x3D4E6Cu) { return; }
    }
    ctx->pc = 0x3D4E6Cu;
label_3d4e6c:
    // 0x3d4e6c: 0xc7a200c0  lwc1        $f2, 0xC0($sp)
    ctx->pc = 0x3d4e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3d4e70:
    // 0x3d4e70: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3d4e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_3d4e74:
    // 0x3d4e74: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x3d4e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d4e78:
    // 0x3d4e78: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3d4e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d4e7c:
    // 0x3d4e7c: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x3d4e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d4e80:
    // 0x3d4e80: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3d4e80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d4e84:
    // 0x3d4e84: 0xe7a200b0  swc1        $f2, 0xB0($sp)
    ctx->pc = 0x3d4e84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_3d4e88:
    // 0x3d4e88: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x3d4e88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_3d4e8c:
    // 0x3d4e8c: 0xc04cd60  jal         func_133580
label_3d4e90:
    if (ctx->pc == 0x3D4E90u) {
        ctx->pc = 0x3D4E90u;
            // 0x3d4e90: 0xe7a000b8  swc1        $f0, 0xB8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
        ctx->pc = 0x3D4E94u;
        goto label_3d4e94;
    }
    ctx->pc = 0x3D4E8Cu;
    SET_GPR_U32(ctx, 31, 0x3D4E94u);
    ctx->pc = 0x3D4E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4E8Cu;
            // 0x3d4e90: 0xe7a000b8  swc1        $f0, 0xB8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4E94u; }
        if (ctx->pc != 0x3D4E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4E94u; }
        if (ctx->pc != 0x3D4E94u) { return; }
    }
    ctx->pc = 0x3D4E94u;
label_3d4e94:
    // 0x3d4e94: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x3d4e94u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d4e98:
    // 0x3d4e98: 0x8ea30148  lw          $v1, 0x148($s5)
    ctx->pc = 0x3d4e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 328)));
label_3d4e9c:
    // 0x3d4e9c: 0x1860006a  blez        $v1, . + 4 + (0x6A << 2)
label_3d4ea0:
    if (ctx->pc == 0x3D4EA0u) {
        ctx->pc = 0x3D4EA0u;
            // 0x3d4ea0: 0x26b30120  addiu       $s3, $s5, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 288));
        ctx->pc = 0x3D4EA4u;
        goto label_3d4ea4;
    }
    ctx->pc = 0x3D4E9Cu;
    {
        const bool branch_taken_0x3d4e9c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3D4EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4E9Cu;
            // 0x3d4ea0: 0x26b30120  addiu       $s3, $s5, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4e9c) {
            ctx->pc = 0x3D5048u;
            goto label_3d5048;
        }
    }
    ctx->pc = 0x3D4EA4u;
label_3d4ea4:
    // 0x3d4ea4: 0x16200014  bnez        $s1, . + 4 + (0x14 << 2)
label_3d4ea8:
    if (ctx->pc == 0x3D4EA8u) {
        ctx->pc = 0x3D4EACu;
        goto label_3d4eac;
    }
    ctx->pc = 0x3D4EA4u;
    {
        const bool branch_taken_0x3d4ea4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d4ea4) {
            ctx->pc = 0x3D4EF8u;
            goto label_3d4ef8;
        }
    }
    ctx->pc = 0x3D4EACu;
label_3d4eac:
    // 0x3d4eac: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x3d4eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_3d4eb0:
    // 0x3d4eb0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3d4eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_3d4eb4:
    // 0x3d4eb4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3d4eb8:
    if (ctx->pc == 0x3D4EB8u) {
        ctx->pc = 0x3D4EBCu;
        goto label_3d4ebc;
    }
    ctx->pc = 0x3D4EB4u;
    {
        const bool branch_taken_0x3d4eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d4eb4) {
            ctx->pc = 0x3D4EC8u;
            goto label_3d4ec8;
        }
    }
    ctx->pc = 0x3D4EBCu;
label_3d4ebc:
    // 0x3d4ebc: 0xc05068c  jal         func_141A30
label_3d4ec0:
    if (ctx->pc == 0x3D4EC0u) {
        ctx->pc = 0x3D4EC0u;
            // 0x3d4ec0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D4EC4u;
        goto label_3d4ec4;
    }
    ctx->pc = 0x3D4EBCu;
    SET_GPR_U32(ctx, 31, 0x3D4EC4u);
    ctx->pc = 0x3D4EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4EBCu;
            // 0x3d4ec0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4EC4u; }
        if (ctx->pc != 0x3D4EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A30_0x141a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4EC4u; }
        if (ctx->pc != 0x3D4EC4u) { return; }
    }
    ctx->pc = 0x3D4EC4u;
label_3d4ec4:
    // 0x3d4ec4: 0x0  nop
    ctx->pc = 0x3d4ec4u;
    // NOP
label_3d4ec8:
    // 0x3d4ec8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3d4ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3d4ecc:
    // 0x3d4ecc: 0x8e45007c  lw          $a1, 0x7C($s2)
    ctx->pc = 0x3d4eccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
label_3d4ed0:
    // 0x3d4ed0: 0xc0506ac  jal         func_141AB0
label_3d4ed4:
    if (ctx->pc == 0x3D4ED4u) {
        ctx->pc = 0x3D4ED4u;
            // 0x3d4ed4: 0x8c4414d8  lw          $a0, 0x14D8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
        ctx->pc = 0x3D4ED8u;
        goto label_3d4ed8;
    }
    ctx->pc = 0x3D4ED0u;
    SET_GPR_U32(ctx, 31, 0x3D4ED8u);
    ctx->pc = 0x3D4ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4ED0u;
            // 0x3d4ed4: 0x8c4414d8  lw          $a0, 0x14D8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4ED8u; }
        if (ctx->pc != 0x3D4ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4ED8u; }
        if (ctx->pc != 0x3D4ED8u) { return; }
    }
    ctx->pc = 0x3D4ED8u;
label_3d4ed8:
    // 0x3d4ed8: 0xc0508b0  jal         func_1422C0
label_3d4edc:
    if (ctx->pc == 0x3D4EDCu) {
        ctx->pc = 0x3D4EDCu;
            // 0x3d4edc: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3D4EE0u;
        goto label_3d4ee0;
    }
    ctx->pc = 0x3D4ED8u;
    SET_GPR_U32(ctx, 31, 0x3D4EE0u);
    ctx->pc = 0x3D4EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4ED8u;
            // 0x3d4edc: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1422C0u;
    if (runtime->hasFunction(0x1422C0u)) {
        auto targetFn = runtime->lookupFunction(0x1422C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4EE0u; }
        if (ctx->pc != 0x3D4EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001422C0_0x1422c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4EE0u; }
        if (ctx->pc != 0x3D4EE0u) { return; }
    }
    ctx->pc = 0x3D4EE0u;
label_3d4ee0:
    // 0x3d4ee0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3d4ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3d4ee4:
    // 0x3d4ee4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3d4ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d4ee8:
    // 0x3d4ee8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3d4ee8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d4eec:
    // 0x3d4eec: 0xc0508b4  jal         func_1422D0
label_3d4ef0:
    if (ctx->pc == 0x3D4EF0u) {
        ctx->pc = 0x3D4EF0u;
            // 0x3d4ef0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D4EF4u;
        goto label_3d4ef4;
    }
    ctx->pc = 0x3D4EECu;
    SET_GPR_U32(ctx, 31, 0x3D4EF4u);
    ctx->pc = 0x3D4EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4EECu;
            // 0x3d4ef0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1422D0u;
    if (runtime->hasFunction(0x1422D0u)) {
        auto targetFn = runtime->lookupFunction(0x1422D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4EF4u; }
        if (ctx->pc != 0x3D4EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001422D0_0x1422d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4EF4u; }
        if (ctx->pc != 0x3D4EF4u) { return; }
    }
    ctx->pc = 0x3D4EF4u;
label_3d4ef4:
    // 0x3d4ef4: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x3d4ef4u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_3d4ef8:
    // 0x3d4ef8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3d4ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3d4efc:
    // 0x3d4efc: 0xac54f734  sw          $s4, -0x8CC($v0)
    ctx->pc = 0x3d4efcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965044), GPR_U32(ctx, 20));
label_3d4f00:
    // 0x3d4f00: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x3d4f00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_3d4f04:
    // 0x3d4f04: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3d4f04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3d4f08:
    // 0x3d4f08: 0x3c060061  lui         $a2, 0x61
    ctx->pc = 0x3d4f08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)97 << 16));
label_3d4f0c:
    // 0x3d4f0c: 0xac54f71c  sw          $s4, -0x8E4($v0)
    ctx->pc = 0x3d4f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965020), GPR_U32(ctx, 20));
label_3d4f10:
    // 0x3d4f10: 0x3c0e0061  lui         $t6, 0x61
    ctx->pc = 0x3d4f10u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)97 << 16));
label_3d4f14:
    // 0x3d4f14: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3d4f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3d4f18:
    // 0x3d4f18: 0x3c080061  lui         $t0, 0x61
    ctx->pc = 0x3d4f18u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)97 << 16));
label_3d4f1c:
    // 0x3d4f1c: 0xac54f704  sw          $s4, -0x8FC($v0)
    ctx->pc = 0x3d4f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294964996), GPR_U32(ctx, 20));
label_3d4f20:
    // 0x3d4f20: 0x3c180061  lui         $t8, 0x61
    ctx->pc = 0x3d4f20u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)97 << 16));
label_3d4f24:
    // 0x3d4f24: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3d4f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3d4f28:
    // 0x3d4f28: 0x3c0d0061  lui         $t5, 0x61
    ctx->pc = 0x3d4f28u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)97 << 16));
label_3d4f2c:
    // 0x3d4f2c: 0xac54f6ec  sw          $s4, -0x914($v0)
    ctx->pc = 0x3d4f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294964972), GPR_U32(ctx, 20));
label_3d4f30:
    // 0x3d4f30: 0x3c0f0061  lui         $t7, 0x61
    ctx->pc = 0x3d4f30u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)97 << 16));
label_3d4f34:
    // 0x3d4f34: 0xc6750000  lwc1        $f21, 0x0($s3)
    ctx->pc = 0x3d4f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3d4f38:
    // 0x3d4f38: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3d4f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3d4f3c:
    // 0x3d4f3c: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x3d4f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d4f40:
    // 0x3d4f40: 0x3c0c0061  lui         $t4, 0x61
    ctx->pc = 0x3d4f40u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)97 << 16));
label_3d4f44:
    // 0x3d4f44: 0xc6760004  lwc1        $f22, 0x4($s3)
    ctx->pc = 0x3d4f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3d4f48:
    // 0x3d4f48: 0x3c0b0061  lui         $t3, 0x61
    ctx->pc = 0x3d4f48u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)97 << 16));
label_3d4f4c:
    // 0x3d4f4c: 0xc6740008  lwc1        $f20, 0x8($s3)
    ctx->pc = 0x3d4f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3d4f50:
    // 0x3d4f50: 0x3c0a0061  lui         $t2, 0x61
    ctx->pc = 0x3d4f50u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)97 << 16));
label_3d4f54:
    // 0x3d4f54: 0x4600a880  add.s       $f2, $f21, $f0
    ctx->pc = 0x3d4f54u;
    ctx->f[2] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_3d4f58:
    // 0x3d4f58: 0x3c090061  lui         $t1, 0x61
    ctx->pc = 0x3d4f58u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)97 << 16));
label_3d4f5c:
    // 0x3d4f5c: 0x3c070061  lui         $a3, 0x61
    ctx->pc = 0x3d4f5cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)97 << 16));
label_3d4f60:
    // 0x3d4f60: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x3d4f60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_3d4f64:
    // 0x3d4f64: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3d4f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d4f68:
    // 0x3d4f68: 0x24a5f6e0  addiu       $a1, $a1, -0x920
    ctx->pc = 0x3d4f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964960));
label_3d4f6c:
    // 0x3d4f6c: 0xe4c2f6e0  swc1        $f2, -0x920($a2)
    ctx->pc = 0x3d4f6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4294964960), bits); }
label_3d4f70:
    // 0x3d4f70: 0xc6610010  lwc1        $f1, 0x10($s3)
    ctx->pc = 0x3d4f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d4f74:
    // 0x3d4f74: 0x8c46f740  lw          $a2, -0x8C0($v0)
    ctx->pc = 0x3d4f74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965056)));
label_3d4f78:
    // 0x3d4f78: 0x4600a801  sub.s       $f0, $f21, $f0
    ctx->pc = 0x3d4f78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
label_3d4f7c:
    // 0x3d4f7c: 0xe5c0f6f8  swc1        $f0, -0x908($t6)
    ctx->pc = 0x3d4f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4294964984), bits); }
label_3d4f80:
    // 0x3d4f80: 0xe500f728  swc1        $f0, -0x8D8($t0)
    ctx->pc = 0x3d4f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294965032), bits); }
label_3d4f84:
    // 0x3d4f84: 0x4601b000  add.s       $f0, $f22, $f1
    ctx->pc = 0x3d4f84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[1]);
label_3d4f88:
    // 0x3d4f88: 0xe700f6e4  swc1        $f0, -0x91C($t8)
    ctx->pc = 0x3d4f88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 4294964964), bits); }
label_3d4f8c:
    // 0x3d4f8c: 0xe5a0f6fc  swc1        $f0, -0x904($t5)
    ctx->pc = 0x3d4f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4294964988), bits); }
label_3d4f90:
    // 0x3d4f90: 0x4601b001  sub.s       $f0, $f22, $f1
    ctx->pc = 0x3d4f90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[1]);
label_3d4f94:
    // 0x3d4f94: 0xe562f710  swc1        $f2, -0x8F0($t3)
    ctx->pc = 0x3d4f94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294965008), bits); }
label_3d4f98:
    // 0x3d4f98: 0xe5f4f6e8  swc1        $f20, -0x918($t7)
    ctx->pc = 0x3d4f98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4294964968), bits); }
label_3d4f9c:
    // 0x3d4f9c: 0xe594f700  swc1        $f20, -0x900($t4)
    ctx->pc = 0x3d4f9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4294964992), bits); }
label_3d4fa0:
    // 0x3d4fa0: 0xe534f718  swc1        $f20, -0x8E8($t1)
    ctx->pc = 0x3d4fa0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294965016), bits); }
label_3d4fa4:
    // 0x3d4fa4: 0xe474f730  swc1        $f20, -0x8D0($v1)
    ctx->pc = 0x3d4fa4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294965040), bits); }
label_3d4fa8:
    // 0x3d4fa8: 0xe540f714  swc1        $f0, -0x8EC($t2)
    ctx->pc = 0x3d4fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4294965012), bits); }
label_3d4fac:
    // 0x3d4fac: 0xc050a08  jal         func_142820
label_3d4fb0:
    if (ctx->pc == 0x3D4FB0u) {
        ctx->pc = 0x3D4FB0u;
            // 0x3d4fb0: 0xe4e0f72c  swc1        $f0, -0x8D4($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294965036), bits); }
        ctx->pc = 0x3D4FB4u;
        goto label_3d4fb4;
    }
    ctx->pc = 0x3D4FACu;
    SET_GPR_U32(ctx, 31, 0x3D4FB4u);
    ctx->pc = 0x3D4FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D4FACu;
            // 0x3d4fb0: 0xe4e0f72c  swc1        $f0, -0x8D4($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294965036), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142820u;
    if (runtime->hasFunction(0x142820u)) {
        auto targetFn = runtime->lookupFunction(0x142820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4FB4u; }
        if (ctx->pc != 0x3D4FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00142820_0x142820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D4FB4u; }
        if (ctx->pc != 0x3D4FB4u) { return; }
    }
    ctx->pc = 0x3D4FB4u;
label_3d4fb4:
    // 0x3d4fb4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3d4fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3d4fb8:
    // 0x3d4fb8: 0x3c050061  lui         $a1, 0x61
    ctx->pc = 0x3d4fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)97 << 16));
label_3d4fbc:
    // 0x3d4fbc: 0xe455f6e0  swc1        $f21, -0x920($v0)
    ctx->pc = 0x3d4fbcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294964960), bits); }
label_3d4fc0:
    // 0x3d4fc0: 0x3c180061  lui         $t8, 0x61
    ctx->pc = 0x3d4fc0u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)97 << 16));
label_3d4fc4:
    // 0x3d4fc4: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x3d4fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d4fc8:
    // 0x3d4fc8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3d4fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3d4fcc:
    // 0x3d4fcc: 0x3c0d0061  lui         $t5, 0x61
    ctx->pc = 0x3d4fccu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)97 << 16));
label_3d4fd0:
    // 0x3d4fd0: 0x3c0a0061  lui         $t2, 0x61
    ctx->pc = 0x3d4fd0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)97 << 16));
label_3d4fd4:
    // 0x3d4fd4: 0x3c070061  lui         $a3, 0x61
    ctx->pc = 0x3d4fd4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)97 << 16));
label_3d4fd8:
    // 0x3d4fd8: 0x8c46f740  lw          $a2, -0x8C0($v0)
    ctx->pc = 0x3d4fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965056)));
label_3d4fdc:
    // 0x3d4fdc: 0x4600b040  add.s       $f1, $f22, $f0
    ctx->pc = 0x3d4fdcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
label_3d4fe0:
    // 0x3d4fe0: 0x3c0f0061  lui         $t7, 0x61
    ctx->pc = 0x3d4fe0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)97 << 16));
label_3d4fe4:
    // 0x3d4fe4: 0x3c0e0061  lui         $t6, 0x61
    ctx->pc = 0x3d4fe4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)97 << 16));
label_3d4fe8:
    // 0x3d4fe8: 0x3c0c0061  lui         $t4, 0x61
    ctx->pc = 0x3d4fe8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)97 << 16));
label_3d4fec:
    // 0x3d4fec: 0x3c0b0061  lui         $t3, 0x61
    ctx->pc = 0x3d4fecu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)97 << 16));
label_3d4ff0:
    // 0x3d4ff0: 0x3c090061  lui         $t1, 0x61
    ctx->pc = 0x3d4ff0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)97 << 16));
label_3d4ff4:
    // 0x3d4ff4: 0x3c080061  lui         $t0, 0x61
    ctx->pc = 0x3d4ff4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)97 << 16));
label_3d4ff8:
    // 0x3d4ff8: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x3d4ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_3d4ffc:
    // 0x3d4ffc: 0xe701f6e4  swc1        $f1, -0x91C($t8)
    ctx->pc = 0x3d4ffcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 4294964964), bits); }
label_3d5000:
    // 0x3d5000: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3d5000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d5004:
    // 0x3d5004: 0xc6620014  lwc1        $f2, 0x14($s3)
    ctx->pc = 0x3d5004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3d5008:
    // 0x3d5008: 0x24a5f6e0  addiu       $a1, $a1, -0x920
    ctx->pc = 0x3d5008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964960));
label_3d500c:
    // 0x3d500c: 0x4600b001  sub.s       $f0, $f22, $f0
    ctx->pc = 0x3d500cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
label_3d5010:
    // 0x3d5010: 0xe5a1f6fc  swc1        $f1, -0x904($t5)
    ctx->pc = 0x3d5010u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4294964988), bits); }
label_3d5014:
    // 0x3d5014: 0x4602a040  add.s       $f1, $f20, $f2
    ctx->pc = 0x3d5014u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
label_3d5018:
    // 0x3d5018: 0xe540f714  swc1        $f0, -0x8EC($t2)
    ctx->pc = 0x3d5018u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4294965012), bits); }
label_3d501c:
    // 0x3d501c: 0xe4e0f72c  swc1        $f0, -0x8D4($a3)
    ctx->pc = 0x3d501cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4294965036), bits); }
label_3d5020:
    // 0x3d5020: 0x4602a001  sub.s       $f0, $f20, $f2
    ctx->pc = 0x3d5020u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
label_3d5024:
    // 0x3d5024: 0xe5d5f6f8  swc1        $f21, -0x908($t6)
    ctx->pc = 0x3d5024u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4294964984), bits); }
label_3d5028:
    // 0x3d5028: 0xe575f710  swc1        $f21, -0x8F0($t3)
    ctx->pc = 0x3d5028u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294965008), bits); }
label_3d502c:
    // 0x3d502c: 0xe515f728  swc1        $f21, -0x8D8($t0)
    ctx->pc = 0x3d502cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294965032), bits); }
label_3d5030:
    // 0x3d5030: 0xe5e1f6e8  swc1        $f1, -0x918($t7)
    ctx->pc = 0x3d5030u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4294964968), bits); }
label_3d5034:
    // 0x3d5034: 0xe521f718  swc1        $f1, -0x8E8($t1)
    ctx->pc = 0x3d5034u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294965016), bits); }
label_3d5038:
    // 0x3d5038: 0xe580f700  swc1        $f0, -0x900($t4)
    ctx->pc = 0x3d5038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4294964992), bits); }
label_3d503c:
    // 0x3d503c: 0xc050a08  jal         func_142820
label_3d5040:
    if (ctx->pc == 0x3D5040u) {
        ctx->pc = 0x3D5040u;
            // 0x3d5040: 0xe460f730  swc1        $f0, -0x8D0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294965040), bits); }
        ctx->pc = 0x3D5044u;
        goto label_3d5044;
    }
    ctx->pc = 0x3D503Cu;
    SET_GPR_U32(ctx, 31, 0x3D5044u);
    ctx->pc = 0x3D5040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D503Cu;
            // 0x3d5040: 0xe460f730  swc1        $f0, -0x8D0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294965040), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142820u;
    if (runtime->hasFunction(0x142820u)) {
        auto targetFn = runtime->lookupFunction(0x142820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5044u; }
        if (ctx->pc != 0x3D5044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00142820_0x142820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5044u; }
        if (ctx->pc != 0x3D5044u) { return; }
    }
    ctx->pc = 0x3D5044u;
label_3d5044:
    // 0x3d5044: 0x0  nop
    ctx->pc = 0x3d5044u;
    // NOP
label_3d5048:
    // 0x3d5048: 0x8e43005c  lw          $v1, 0x5C($s2)
    ctx->pc = 0x3d5048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
label_3d504c:
    // 0x3d504c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3d504cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3d5050:
    // 0x3d5050: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x3d5050u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_3d5054:
    // 0x3d5054: 0x1460ff90  bnez        $v1, . + 4 + (-0x70 << 2)
label_3d5058:
    if (ctx->pc == 0x3D5058u) {
        ctx->pc = 0x3D5058u;
            // 0x3d5058: 0x26b50030  addiu       $s5, $s5, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
        ctx->pc = 0x3D505Cu;
        goto label_3d505c;
    }
    ctx->pc = 0x3D5054u;
    {
        const bool branch_taken_0x3d5054 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D5058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D5054u;
            // 0x3d5058: 0x26b50030  addiu       $s5, $s5, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5054) {
            ctx->pc = 0x3D4E98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3d4e98;
        }
    }
    ctx->pc = 0x3D505Cu;
label_3d505c:
    // 0x3d505c: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_3d5060:
    if (ctx->pc == 0x3D5060u) {
        ctx->pc = 0x3D5064u;
        goto label_3d5064;
    }
    ctx->pc = 0x3D505Cu;
    {
        const bool branch_taken_0x3d505c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d505c) {
            ctx->pc = 0x3D5084u;
            goto label_3d5084;
        }
    }
    ctx->pc = 0x3D5064u;
label_3d5064:
    // 0x3d5064: 0xc050a88  jal         func_142A20
label_3d5068:
    if (ctx->pc == 0x3D5068u) {
        ctx->pc = 0x3D506Cu;
        goto label_3d506c;
    }
    ctx->pc = 0x3D5064u;
    SET_GPR_U32(ctx, 31, 0x3D506Cu);
    ctx->pc = 0x142A20u;
    if (runtime->hasFunction(0x142A20u)) {
        auto targetFn = runtime->lookupFunction(0x142A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D506Cu; }
        if (ctx->pc != 0x3D506Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00142A20_0x142a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D506Cu; }
        if (ctx->pc != 0x3D506Cu) { return; }
    }
    ctx->pc = 0x3D506Cu;
label_3d506c:
    // 0x3d506c: 0x8e430054  lw          $v1, 0x54($s2)
    ctx->pc = 0x3d506cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_3d5070:
    // 0x3d5070: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x3d5070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_3d5074:
    // 0x3d5074: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_3d5078:
    if (ctx->pc == 0x3D5078u) {
        ctx->pc = 0x3D507Cu;
        goto label_3d507c;
    }
    ctx->pc = 0x3D5074u;
    {
        const bool branch_taken_0x3d5074 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d5074) {
            ctx->pc = 0x3D5084u;
            goto label_3d5084;
        }
    }
    ctx->pc = 0x3D507Cu;
label_3d507c:
    // 0x3d507c: 0xc05068c  jal         func_141A30
label_3d5080:
    if (ctx->pc == 0x3D5080u) {
        ctx->pc = 0x3D5080u;
            // 0x3d5080: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3D5084u;
        goto label_3d5084;
    }
    ctx->pc = 0x3D507Cu;
    SET_GPR_U32(ctx, 31, 0x3D5084u);
    ctx->pc = 0x3D5080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D507Cu;
            // 0x3d5080: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5084u; }
        if (ctx->pc != 0x3D5084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A30_0x141a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5084u; }
        if (ctx->pc != 0x3D5084u) { return; }
    }
    ctx->pc = 0x3D5084u;
label_3d5084:
    // 0x3d5084: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3d5084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3d5088:
    // 0x3d5088: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x3d5088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3d508c:
    // 0x3d508c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3d508cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3d5090:
    // 0x3d5090: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3d5090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3d5094:
    // 0x3d5094: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3d5094u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3d5098:
    // 0x3d5098: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3d5098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3d509c:
    // 0x3d509c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3d509cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d50a0:
    // 0x3d50a0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3d50a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d50a4:
    // 0x3d50a4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3d50a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d50a8:
    // 0x3d50a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3d50a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d50ac:
    // 0x3d50ac: 0x3e00008  jr          $ra
label_3d50b0:
    if (ctx->pc == 0x3D50B0u) {
        ctx->pc = 0x3D50B0u;
            // 0x3d50b0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x3D50B4u;
        goto label_3d50b4;
    }
    ctx->pc = 0x3D50ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D50B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D50ACu;
            // 0x3d50b0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D50B4u;
label_3d50b4:
    // 0x3d50b4: 0x0  nop
    ctx->pc = 0x3d50b4u;
    // NOP
label_3d50b8:
    // 0x3d50b8: 0x0  nop
    ctx->pc = 0x3d50b8u;
    // NOP
label_3d50bc:
    // 0x3d50bc: 0x0  nop
    ctx->pc = 0x3d50bcu;
    // NOP
label_3d50c0:
    // 0x3d50c0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3d50c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_3d50c4:
    // 0x3d50c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3d50c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3d50c8:
    // 0x3d50c8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3d50c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3d50cc:
    // 0x3d50cc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3d50ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3d50d0:
    // 0x3d50d0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3d50d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3d50d4:
    // 0x3d50d4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3d50d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3d50d8:
    // 0x3d50d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3d50d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3d50dc:
    // 0x3d50dc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3d50dcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3d50e0:
    // 0x3d50e0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3d50e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3d50e4:
    // 0x3d50e4: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x3d50e4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3d50e8:
    // 0x3d50e8: 0x10a300f3  beq         $a1, $v1, . + 4 + (0xF3 << 2)
label_3d50ec:
    if (ctx->pc == 0x3D50ECu) {
        ctx->pc = 0x3D50ECu;
            // 0x3d50ec: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D50F0u;
        goto label_3d50f0;
    }
    ctx->pc = 0x3D50E8u;
    {
        const bool branch_taken_0x3d50e8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3D50ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D50E8u;
            // 0x3d50ec: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d50e8) {
            ctx->pc = 0x3D54B8u;
            goto label_3d54b8;
        }
    }
    ctx->pc = 0x3D50F0u;
label_3d50f0:
    // 0x3d50f0: 0x50a000ee  beql        $a1, $zero, . + 4 + (0xEE << 2)
label_3d50f4:
    if (ctx->pc == 0x3D50F4u) {
        ctx->pc = 0x3D50F4u;
            // 0x3d50f4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3D50F8u;
        goto label_3d50f8;
    }
    ctx->pc = 0x3D50F0u;
    {
        const bool branch_taken_0x3d50f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d50f0) {
            ctx->pc = 0x3D50F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D50F0u;
            // 0x3d50f4: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D54ACu;
            goto label_3d54ac;
        }
    }
    ctx->pc = 0x3D50F8u;
label_3d50f8:
    // 0x3d50f8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3d50f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3d50fc:
    // 0x3d50fc: 0x50a30011  beql        $a1, $v1, . + 4 + (0x11 << 2)
label_3d5100:
    if (ctx->pc == 0x3D5100u) {
        ctx->pc = 0x3D5100u;
            // 0x3d5100: 0x8e6400c4  lw          $a0, 0xC4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
        ctx->pc = 0x3D5104u;
        goto label_3d5104;
    }
    ctx->pc = 0x3D50FCu;
    {
        const bool branch_taken_0x3d50fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d50fc) {
            ctx->pc = 0x3D5100u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D50FCu;
            // 0x3d5100: 0x8e6400c4  lw          $a0, 0xC4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D5144u;
            goto label_3d5144;
        }
    }
    ctx->pc = 0x3D5104u;
label_3d5104:
    // 0x3d5104: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3d5104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3d5108:
    // 0x3d5108: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_3d510c:
    if (ctx->pc == 0x3D510Cu) {
        ctx->pc = 0x3D5110u;
        goto label_3d5110;
    }
    ctx->pc = 0x3D5108u;
    {
        const bool branch_taken_0x3d5108 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3d5108) {
            ctx->pc = 0x3D5118u;
            goto label_3d5118;
        }
    }
    ctx->pc = 0x3D5110u;
label_3d5110:
    // 0x3d5110: 0x100000ea  b           . + 4 + (0xEA << 2)
label_3d5114:
    if (ctx->pc == 0x3D5114u) {
        ctx->pc = 0x3D5114u;
            // 0x3d5114: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x3D5118u;
        goto label_3d5118;
    }
    ctx->pc = 0x3D5110u;
    {
        const bool branch_taken_0x3d5110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D5110u;
            // 0x3d5114: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5110) {
            ctx->pc = 0x3D54BCu;
            goto label_3d54bc;
        }
    }
    ctx->pc = 0x3D5118u;
label_3d5118:
    // 0x3d5118: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3d5118u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3d511c:
    // 0x3d511c: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3d511cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3d5120:
    // 0x3d5120: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x3d5120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_3d5124:
    // 0x3d5124: 0x28630003  slti        $v1, $v1, 0x3
    ctx->pc = 0x3d5124u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_3d5128:
    // 0x3d5128: 0x146000e3  bnez        $v1, . + 4 + (0xE3 << 2)
label_3d512c:
    if (ctx->pc == 0x3D512Cu) {
        ctx->pc = 0x3D5130u;
        goto label_3d5130;
    }
    ctx->pc = 0x3D5128u;
    {
        const bool branch_taken_0x3d5128 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d5128) {
            ctx->pc = 0x3D54B8u;
            goto label_3d54b8;
        }
    }
    ctx->pc = 0x3D5130u;
label_3d5130:
    // 0x3d5130: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3d5130u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d5134:
    // 0x3d5134: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3d5134u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3d5138:
    // 0x3d5138: 0x320f809  jalr        $t9
label_3d513c:
    if (ctx->pc == 0x3D513Cu) {
        ctx->pc = 0x3D5140u;
        goto label_3d5140;
    }
    ctx->pc = 0x3D5138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D5140u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D5140u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D5140u; }
            if (ctx->pc != 0x3D5140u) { return; }
        }
        }
    }
    ctx->pc = 0x3D5140u;
label_3d5140:
    // 0x3d5140: 0x8e6400c4  lw          $a0, 0xC4($s3)
    ctx->pc = 0x3d5140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
label_3d5144:
    // 0x3d5144: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3d5144u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3d5148:
    // 0x3d5148: 0x24630e84  addiu       $v1, $v1, 0xE84
    ctx->pc = 0x3d5148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3716));
label_3d514c:
    // 0x3d514c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3d514cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3d5150:
    // 0x3d5150: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3d5150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3d5154:
    // 0x3d5154: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x3d5154u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3d5158:
    // 0x3d5158: 0x8e030da0  lw          $v1, 0xDA0($s0)
    ctx->pc = 0x3d5158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3488)));
label_3d515c:
    // 0x3d515c: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x3d515cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_3d5160:
    // 0x3d5160: 0x186000d5  blez        $v1, . + 4 + (0xD5 << 2)
label_3d5164:
    if (ctx->pc == 0x3D5164u) {
        ctx->pc = 0x3D5168u;
        goto label_3d5168;
    }
    ctx->pc = 0x3D5160u;
    {
        const bool branch_taken_0x3d5160 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x3d5160) {
            ctx->pc = 0x3D54B8u;
            goto label_3d54b8;
        }
    }
    ctx->pc = 0x3D5168u;
label_3d5168:
    // 0x3d5168: 0x8e030e34  lw          $v1, 0xE34($s0)
    ctx->pc = 0x3d5168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_3d516c:
    // 0x3d516c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3d516cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3d5170:
    // 0x3d5170: 0x5062003c  beql        $v1, $v0, . + 4 + (0x3C << 2)
label_3d5174:
    if (ctx->pc == 0x3D5174u) {
        ctx->pc = 0x3D5174u;
            // 0x3d5174: 0x3c024852  lui         $v0, 0x4852 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
        ctx->pc = 0x3D5178u;
        goto label_3d5178;
    }
    ctx->pc = 0x3D5170u;
    {
        const bool branch_taken_0x3d5170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3d5170) {
            ctx->pc = 0x3D5174u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D5170u;
            // 0x3d5174: 0x3c024852  lui         $v0, 0x4852 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D5264u;
            goto label_3d5264;
        }
    }
    ctx->pc = 0x3D5178u;
label_3d5178:
    // 0x3d5178: 0x8e6200bc  lw          $v0, 0xBC($s3)
    ctx->pc = 0x3d5178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
label_3d517c:
    // 0x3d517c: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_3d5180:
    if (ctx->pc == 0x3D5180u) {
        ctx->pc = 0x3D5184u;
        goto label_3d5184;
    }
    ctx->pc = 0x3D517Cu;
    {
        const bool branch_taken_0x3d517c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d517c) {
            ctx->pc = 0x3D5260u;
            goto label_3d5260;
        }
    }
    ctx->pc = 0x3D5184u;
label_3d5184:
    // 0x3d5184: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3d5184u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3d5188:
    // 0x3d5188: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3d5188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3d518c:
    // 0x3d518c: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x3d518cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3d5190:
    // 0x3d5190: 0xc66000c8  lwc1        $f0, 0xC8($s3)
    ctx->pc = 0x3d5190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d5194:
    // 0x3d5194: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x3d5194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d5198:
    // 0x3d5198: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3d5198u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3d519c:
    // 0x3d519c: 0xe66000c8  swc1        $f0, 0xC8($s3)
    ctx->pc = 0x3d519cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 200), bits); }
label_3d51a0:
    // 0x3d51a0: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x3d51a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_3d51a4:
    // 0x3d51a4: 0xc66000cc  lwc1        $f0, 0xCC($s3)
    ctx->pc = 0x3d51a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d51a8:
    // 0x3d51a8: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x3d51a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d51ac:
    // 0x3d51ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3d51acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3d51b0:
    // 0x3d51b0: 0xe66000cc  swc1        $f0, 0xCC($s3)
    ctx->pc = 0x3d51b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 204), bits); }
label_3d51b4:
    // 0x3d51b4: 0x8e6200bc  lw          $v0, 0xBC($s3)
    ctx->pc = 0x3d51b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
label_3d51b8:
    // 0x3d51b8: 0xc66000cc  lwc1        $f0, 0xCC($s3)
    ctx->pc = 0x3d51b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d51bc:
    // 0x3d51bc: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x3d51bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d51c0:
    // 0x3d51c0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3d51c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3d51c4:
    // 0x3d51c4: 0x45030010  bc1tl       . + 4 + (0x10 << 2)
label_3d51c8:
    if (ctx->pc == 0x3D51C8u) {
        ctx->pc = 0x3D51C8u;
            // 0x3d51c8: 0x8e6200bc  lw          $v0, 0xBC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
        ctx->pc = 0x3D51CCu;
        goto label_3d51cc;
    }
    ctx->pc = 0x3D51C4u;
    {
        const bool branch_taken_0x3d51c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d51c4) {
            ctx->pc = 0x3D51C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D51C4u;
            // 0x3d51c8: 0x8e6200bc  lw          $v0, 0xBC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D5208u;
            goto label_3d5208;
        }
    }
    ctx->pc = 0x3D51CCu;
label_3d51cc:
    // 0x3d51cc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3d51ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_3d51d0:
    // 0x3d51d0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3d51d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3d51d4:
    // 0x3d51d4: 0xe66000cc  swc1        $f0, 0xCC($s3)
    ctx->pc = 0x3d51d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 204), bits); }
label_3d51d8:
    // 0x3d51d8: 0x8c420ea4  lw          $v0, 0xEA4($v0)
    ctx->pc = 0x3d51d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_3d51dc:
    // 0x3d51dc: 0x8e6300bc  lw          $v1, 0xBC($s3)
    ctx->pc = 0x3d51dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
label_3d51e0:
    // 0x3d51e0: 0x8e6500c4  lw          $a1, 0xC4($s3)
    ctx->pc = 0x3d51e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
label_3d51e4:
    // 0x3d51e4: 0x8c440144  lw          $a0, 0x144($v0)
    ctx->pc = 0x3d51e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 324)));
label_3d51e8:
    // 0x3d51e8: 0x90670004  lbu         $a3, 0x4($v1)
    ctx->pc = 0x3d51e8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
label_3d51ec:
    // 0x3d51ec: 0xc46c0014  lwc1        $f12, 0x14($v1)
    ctx->pc = 0x3d51ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3d51f0:
    // 0x3d51f0: 0x8c660010  lw          $a2, 0x10($v1)
    ctx->pc = 0x3d51f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_3d51f4:
    // 0x3d51f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3d51f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3d51f8:
    // 0x3d51f8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3d51f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3d51fc:
    // 0x3d51fc: 0x320f809  jalr        $t9
label_3d5200:
    if (ctx->pc == 0x3D5200u) {
        ctx->pc = 0x3D5200u;
            // 0x3d5200: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D5204u;
        goto label_3d5204;
    }
    ctx->pc = 0x3D51FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D5204u);
        ctx->pc = 0x3D5200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D51FCu;
            // 0x3d5200: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D5204u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D5204u; }
            if (ctx->pc != 0x3D5204u) { return; }
        }
        }
    }
    ctx->pc = 0x3D5204u;
label_3d5204:
    // 0x3d5204: 0x8e6200bc  lw          $v0, 0xBC($s3)
    ctx->pc = 0x3d5204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
label_3d5208:
    // 0x3d5208: 0xc66000c8  lwc1        $f0, 0xC8($s3)
    ctx->pc = 0x3d5208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d520c:
    // 0x3d520c: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x3d520cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d5210:
    // 0x3d5210: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3d5210u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3d5214:
    // 0x3d5214: 0x45010012  bc1t        . + 4 + (0x12 << 2)
label_3d5218:
    if (ctx->pc == 0x3D5218u) {
        ctx->pc = 0x3D521Cu;
        goto label_3d521c;
    }
    ctx->pc = 0x3D5214u;
    {
        const bool branch_taken_0x3d5214 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d5214) {
            ctx->pc = 0x3D5260u;
            goto label_3d5260;
        }
    }
    ctx->pc = 0x3D521Cu;
label_3d521c:
    // 0x3d521c: 0xae6000c8  sw          $zero, 0xC8($s3)
    ctx->pc = 0x3d521cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 200), GPR_U32(ctx, 0));
label_3d5220:
    // 0x3d5220: 0x8e6200bc  lw          $v0, 0xBC($s3)
    ctx->pc = 0x3d5220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
label_3d5224:
    // 0x3d5224: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3d5224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3d5228:
    // 0x3d5228: 0x482000d  bltzl       $a0, . + 4 + (0xD << 2)
label_3d522c:
    if (ctx->pc == 0x3D522Cu) {
        ctx->pc = 0x3D522Cu;
            // 0x3d522c: 0xae6000bc  sw          $zero, 0xBC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 188), GPR_U32(ctx, 0));
        ctx->pc = 0x3D5230u;
        goto label_3d5230;
    }
    ctx->pc = 0x3D5228u;
    {
        const bool branch_taken_0x3d5228 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x3d5228) {
            ctx->pc = 0x3D522Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D5228u;
            // 0x3d522c: 0xae6000bc  sw          $zero, 0xBC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 188), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D5260u;
            goto label_3d5260;
        }
    }
    ctx->pc = 0x3D5230u;
label_3d5230:
    // 0x3d5230: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x3d5230u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_3d5234:
    // 0x3d5234: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_3d5238:
    if (ctx->pc == 0x3D5238u) {
        ctx->pc = 0x3D5238u;
            // 0x3d5238: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x3D523Cu;
        goto label_3d523c;
    }
    ctx->pc = 0x3D5234u;
    {
        const bool branch_taken_0x3d5234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d5234) {
            ctx->pc = 0x3D5238u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D5234u;
            // 0x3d5238: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D5248u;
            goto label_3d5248;
        }
    }
    ctx->pc = 0x3D523Cu;
label_3d523c:
    // 0x3d523c: 0xae6000bc  sw          $zero, 0xBC($s3)
    ctx->pc = 0x3d523cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 188), GPR_U32(ctx, 0));
label_3d5240:
    // 0x3d5240: 0x10000007  b           . + 4 + (0x7 << 2)
label_3d5244:
    if (ctx->pc == 0x3D5244u) {
        ctx->pc = 0x3D5248u;
        goto label_3d5248;
    }
    ctx->pc = 0x3D5240u;
    {
        const bool branch_taken_0x3d5240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d5240) {
            ctx->pc = 0x3D5260u;
            goto label_3d5260;
        }
    }
    ctx->pc = 0x3D5248u;
label_3d5248:
    // 0x3d5248: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3d5248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3d524c:
    // 0x3d524c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3d524cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3d5250:
    // 0x3d5250: 0x24429840  addiu       $v0, $v0, -0x67C0
    ctx->pc = 0x3d5250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940736));
label_3d5254:
    // 0x3d5254: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x3d5254u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_3d5258:
    // 0x3d5258: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3d5258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d525c:
    // 0x3d525c: 0xae6200bc  sw          $v0, 0xBC($s3)
    ctx->pc = 0x3d525cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 188), GPR_U32(ctx, 2));
label_3d5260:
    // 0x3d5260: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x3d5260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
label_3d5264:
    // 0x3d5264: 0x3c060061  lui         $a2, 0x61
    ctx->pc = 0x3d5264u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)97 << 16));
label_3d5268:
    // 0x3d5268: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x3d5268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_3d526c:
    // 0x3d526c: 0x3c08447a  lui         $t0, 0x447A
    ctx->pc = 0x3d526cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17530 << 16));
label_3d5270:
    // 0x3d5270: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3d5270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d5274:
    // 0x3d5274: 0x3c070061  lui         $a3, 0x61
    ctx->pc = 0x3d5274u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)97 << 16));
label_3d5278:
    // 0x3d5278: 0xc6010de4  lwc1        $f1, 0xDE4($s0)
    ctx->pc = 0x3d5278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d527c:
    // 0x3d527c: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x3d527cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_3d5280:
    // 0x3d5280: 0xc4c2f6d4  lwc1        $f2, -0x92C($a2)
    ctx->pc = 0x3d5280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294964948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3d5284:
    // 0x3d5284: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x3d5284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_3d5288:
    // 0x3d5288: 0x26050890  addiu       $a1, $s0, 0x890
    ctx->pc = 0x3d5288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
label_3d528c:
    // 0x3d528c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3d528cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3d5290:
    // 0x3d5290: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x3d5290u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3d5294:
    // 0x3d5294: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3d5294u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d5298:
    // 0x3d5298: 0x0  nop
    ctx->pc = 0x3d5298u;
    // NOP
label_3d529c:
    // 0x3d529c: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x3d529cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
label_3d52a0:
    // 0x3d52a0: 0xc4e0f6d0  lwc1        $f0, -0x930($a3)
    ctx->pc = 0x3d52a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294964944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d52a4:
    // 0x3d52a4: 0xc461f6d8  lwc1        $f1, -0x928($v1)
    ctx->pc = 0x3d52a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294964952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d52a8:
    // 0x3d52a8: 0xe7a200a4  swc1        $f2, 0xA4($sp)
    ctx->pc = 0x3d52a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_3d52ac:
    // 0x3d52ac: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x3d52acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_3d52b0:
    // 0x3d52b0: 0xc440f6dc  lwc1        $f0, -0x924($v0)
    ctx->pc = 0x3d52b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294964956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d52b4:
    // 0x3d52b4: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x3d52b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_3d52b8:
    // 0x3d52b8: 0xc04cce8  jal         func_1333A0
label_3d52bc:
    if (ctx->pc == 0x3D52BCu) {
        ctx->pc = 0x3D52BCu;
            // 0x3d52bc: 0xe7a000ac  swc1        $f0, 0xAC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
        ctx->pc = 0x3D52C0u;
        goto label_3d52c0;
    }
    ctx->pc = 0x3D52B8u;
    SET_GPR_U32(ctx, 31, 0x3D52C0u);
    ctx->pc = 0x3D52BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D52B8u;
            // 0x3d52bc: 0xe7a000ac  swc1        $f0, 0xAC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D52C0u; }
        if (ctx->pc != 0x3D52C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D52C0u; }
        if (ctx->pc != 0x3D52C0u) { return; }
    }
    ctx->pc = 0x3D52C0u;
label_3d52c0:
    // 0x3d52c0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3d52c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_3d52c4:
    // 0x3d52c4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3d52c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3d52c8:
    // 0x3d52c8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3d52c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d52cc:
    // 0x3d52cc: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x3d52ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
label_3d52d0:
    // 0x3d52d0: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x3d52d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
label_3d52d4:
    // 0x3d52d4: 0xc04ccc4  jal         func_133310
label_3d52d8:
    if (ctx->pc == 0x3D52D8u) {
        ctx->pc = 0x3D52D8u;
            // 0x3d52d8: 0xafa00090  sw          $zero, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
        ctx->pc = 0x3D52DCu;
        goto label_3d52dc;
    }
    ctx->pc = 0x3D52D4u;
    SET_GPR_U32(ctx, 31, 0x3D52DCu);
    ctx->pc = 0x3D52D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D52D4u;
            // 0x3d52d8: 0xafa00090  sw          $zero, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133310u;
    if (runtime->hasFunction(0x133310u)) {
        auto targetFn = runtime->lookupFunction(0x133310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D52DCu; }
        if (ctx->pc != 0x3D52DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133310_0x133310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D52DCu; }
        if (ctx->pc != 0x3D52DCu) { return; }
    }
    ctx->pc = 0x3D52DCu;
label_3d52dc:
    // 0x3d52dc: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x3d52dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d52e0:
    // 0x3d52e0: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x3d52e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d52e4:
    // 0x3d52e4: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x3d52e4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_3d52e8:
    // 0x3d52e8: 0xc04c710  jal         func_131C40
label_3d52ec:
    if (ctx->pc == 0x3D52ECu) {
        ctx->pc = 0x3D52ECu;
            // 0x3d52ec: 0x4600031c  madd.s      $f12, $f0, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
        ctx->pc = 0x3D52F0u;
        goto label_3d52f0;
    }
    ctx->pc = 0x3D52E8u;
    SET_GPR_U32(ctx, 31, 0x3D52F0u);
    ctx->pc = 0x3D52ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D52E8u;
            // 0x3d52ec: 0x4600031c  madd.s      $f12, $f0, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C40u;
    if (runtime->hasFunction(0x131C40u)) {
        auto targetFn = runtime->lookupFunction(0x131C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D52F0u; }
        if (ctx->pc != 0x3D52F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C40_0x131c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D52F0u; }
        if (ctx->pc != 0x3D52F0u) { return; }
    }
    ctx->pc = 0x3D52F0u;
label_3d52f0:
    // 0x3d52f0: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3d52f0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_3d52f4:
    // 0x3d52f4: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x3d52f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3d52f8:
    // 0x3d52f8: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x3d52f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d52fc:
    // 0x3d52fc: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x3d52fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d5300:
    // 0x3d5300: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x3d5300u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_3d5304:
    // 0x3d5304: 0x4600001e  madda.s     $f0, $f0
    ctx->pc = 0x3d5304u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_3d5308:
    // 0x3d5308: 0xc04c710  jal         func_131C40
label_3d530c:
    if (ctx->pc == 0x3D530Cu) {
        ctx->pc = 0x3D530Cu;
            // 0x3d530c: 0x46010b1c  madd.s      $f12, $f1, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
        ctx->pc = 0x3D5310u;
        goto label_3d5310;
    }
    ctx->pc = 0x3D5308u;
    SET_GPR_U32(ctx, 31, 0x3D5310u);
    ctx->pc = 0x3D530Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D5308u;
            // 0x3d530c: 0x46010b1c  madd.s      $f12, $f1, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C40u;
    if (runtime->hasFunction(0x131C40u)) {
        auto targetFn = runtime->lookupFunction(0x131C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5310u; }
        if (ctx->pc != 0x3D5310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C40_0x131c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5310u; }
        if (ctx->pc != 0x3D5310u) { return; }
    }
    ctx->pc = 0x3D5310u;
label_3d5310:
    // 0x3d5310: 0x3c03bf36  lui         $v1, 0xBF36
    ctx->pc = 0x3d5310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48950 << 16));
label_3d5314:
    // 0x3d5314: 0x34630419  ori         $v1, $v1, 0x419
    ctx->pc = 0x3d5314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1049);
label_3d5318:
    // 0x3d5318: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x3d5318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d531c:
    // 0x3d531c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d531cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d5320:
    // 0x3d5320: 0x0  nop
    ctx->pc = 0x3d5320u;
    // NOP
label_3d5324:
    // 0x3d5324: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3d5324u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3d5328:
    // 0x3d5328: 0x45030022  bc1tl       . + 4 + (0x22 << 2)
label_3d532c:
    if (ctx->pc == 0x3D532Cu) {
        ctx->pc = 0x3D532Cu;
            // 0x3d532c: 0x926300c0  lbu         $v1, 0xC0($s3) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 192)));
        ctx->pc = 0x3D5330u;
        goto label_3d5330;
    }
    ctx->pc = 0x3D5328u;
    {
        const bool branch_taken_0x3d5328 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d5328) {
            ctx->pc = 0x3D532Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D5328u;
            // 0x3d532c: 0x926300c0  lbu         $v1, 0xC0($s3) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 192)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D53B4u;
            goto label_3d53b4;
        }
    }
    ctx->pc = 0x3D5330u;
label_3d5330:
    // 0x3d5330: 0x3c033f36  lui         $v1, 0x3F36
    ctx->pc = 0x3d5330u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16182 << 16));
label_3d5334:
    // 0x3d5334: 0x34630419  ori         $v1, $v1, 0x419
    ctx->pc = 0x3d5334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1049);
label_3d5338:
    // 0x3d5338: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d5338u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d533c:
    // 0x3d533c: 0x0  nop
    ctx->pc = 0x3d533cu;
    // NOP
label_3d5340:
    // 0x3d5340: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3d5340u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3d5344:
    // 0x3d5344: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
label_3d5348:
    if (ctx->pc == 0x3D5348u) {
        ctx->pc = 0x3D534Cu;
        goto label_3d534c;
    }
    ctx->pc = 0x3D5344u;
    {
        const bool branch_taken_0x3d5344 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d5344) {
            ctx->pc = 0x3D53B0u;
            goto label_3d53b0;
        }
    }
    ctx->pc = 0x3D534Cu;
label_3d534c:
    // 0x3d534c: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x3d534cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d5350:
    // 0x3d5350: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3d5350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3d5354:
    // 0x3d5354: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x3d5354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3d5358:
    // 0x3d5358: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x3d5358u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_3d535c:
    // 0x3d535c: 0x46150b03  div.s       $f12, $f1, $f21
    ctx->pc = 0x3d535cu;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[21];
label_3d5360:
    // 0x3d5360: 0x0  nop
    ctx->pc = 0x3d5360u;
    // NOP
label_3d5364:
    // 0x3d5364: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3d5364u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_3d5368:
    // 0x3d5368: 0x46150343  div.s       $f13, $f0, $f21
    ctx->pc = 0x3d5368u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[13] = ctx->f[0] / ctx->f[21];
label_3d536c:
    // 0x3d536c: 0x0  nop
    ctx->pc = 0x3d536cu;
    // NOP
label_3d5370:
    // 0x3d5370: 0x0  nop
    ctx->pc = 0x3d5370u;
    // NOP
label_3d5374:
    // 0x3d5374: 0xc04f2f0  jal         func_13CBC0
label_3d5378:
    if (ctx->pc == 0x3D5378u) {
        ctx->pc = 0x3D537Cu;
        goto label_3d537c;
    }
    ctx->pc = 0x3D5374u;
    SET_GPR_U32(ctx, 31, 0x3D537Cu);
    ctx->pc = 0x13CBC0u;
    if (runtime->hasFunction(0x13CBC0u)) {
        auto targetFn = runtime->lookupFunction(0x13CBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D537Cu; }
        if (ctx->pc != 0x3D537Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CBC0_0x13cbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D537Cu; }
        if (ctx->pc != 0x3D537Cu) { return; }
    }
    ctx->pc = 0x3D537Cu;
label_3d537c:
    // 0x3d537c: 0xc6610088  lwc1        $f1, 0x88($s3)
    ctx->pc = 0x3d537cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d5380:
    // 0x3d5380: 0x3c024336  lui         $v0, 0x4336
    ctx->pc = 0x3d5380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17206 << 16));
label_3d5384:
    // 0x3d5384: 0x34430b60  ori         $v1, $v0, 0xB60
    ctx->pc = 0x3d5384u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2912);
label_3d5388:
    // 0x3d5388: 0x266400e0  addiu       $a0, $s3, 0xE0
    ctx->pc = 0x3d5388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 224));
label_3d538c:
    // 0x3d538c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d538cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d5390:
    // 0x3d5390: 0x8e6200d0  lw          $v0, 0xD0($s3)
    ctx->pc = 0x3d5390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 208)));
label_3d5394:
    // 0x3d5394: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x3d5394u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_3d5398:
    // 0x3d5398: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x3d5398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3d539c:
    // 0x3d539c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3d539cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_3d53a0:
    // 0x3d53a0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d53a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3d53a4:
    // 0x3d53a4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3d53a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3d53a8:
    // 0x3d53a8: 0xc04cdb0  jal         func_1336C0
label_3d53ac:
    if (ctx->pc == 0x3D53ACu) {
        ctx->pc = 0x3D53ACu;
            // 0x3d53ac: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x3D53B0u;
        goto label_3d53b0;
    }
    ctx->pc = 0x3D53A8u;
    SET_GPR_U32(ctx, 31, 0x3D53B0u);
    ctx->pc = 0x3D53ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D53A8u;
            // 0x3d53ac: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1336C0u;
    if (runtime->hasFunction(0x1336C0u)) {
        auto targetFn = runtime->lookupFunction(0x1336C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D53B0u; }
        if (ctx->pc != 0x3D53B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001336C0_0x1336c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D53B0u; }
        if (ctx->pc != 0x3D53B0u) { return; }
    }
    ctx->pc = 0x3D53B0u;
label_3d53b0:
    // 0x3d53b0: 0x926300c0  lbu         $v1, 0xC0($s3)
    ctx->pc = 0x3d53b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 192)));
label_3d53b4:
    // 0x3d53b4: 0x18600040  blez        $v1, . + 4 + (0x40 << 2)
label_3d53b8:
    if (ctx->pc == 0x3D53B8u) {
        ctx->pc = 0x3D53BCu;
        goto label_3d53bc;
    }
    ctx->pc = 0x3D53B4u;
    {
        const bool branch_taken_0x3d53b4 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x3d53b4) {
            ctx->pc = 0x3D54B8u;
            goto label_3d54b8;
        }
    }
    ctx->pc = 0x3D53BCu;
label_3d53bc:
    // 0x3d53bc: 0xc0b9ffc  jal         func_2E7FF0
label_3d53c0:
    if (ctx->pc == 0x3D53C0u) {
        ctx->pc = 0x3D53C0u;
            // 0x3d53c0: 0x26720120  addiu       $s2, $s3, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 288));
        ctx->pc = 0x3D53C4u;
        goto label_3d53c4;
    }
    ctx->pc = 0x3D53BCu;
    SET_GPR_U32(ctx, 31, 0x3D53C4u);
    ctx->pc = 0x3D53C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D53BCu;
            // 0x3d53c0: 0x26720120  addiu       $s2, $s3, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7FF0u;
    if (runtime->hasFunction(0x2E7FF0u)) {
        auto targetFn = runtime->lookupFunction(0x2E7FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D53C4u; }
        if (ctx->pc != 0x3D53C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7FF0_0x2e7ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D53C4u; }
        if (ctx->pc != 0x3D53C4u) { return; }
    }
    ctx->pc = 0x3D53C4u;
label_3d53c4:
    // 0x3d53c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3d53c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3d53c8:
    // 0x3d53c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3d53c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3d53cc:
    // 0x3d53cc: 0xc6410028  lwc1        $f1, 0x28($s2)
    ctx->pc = 0x3d53ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d53d0:
    // 0x3d53d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3d53d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3d53d4:
    // 0x3d53d4: 0x0  nop
    ctx->pc = 0x3d53d4u;
    // NOP
label_3d53d8:
    // 0x3d53d8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3d53d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3d53dc:
    // 0x3d53dc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3d53dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3d53e0:
    // 0x3d53e0: 0x4501001f  bc1t        . + 4 + (0x1F << 2)
label_3d53e4:
    if (ctx->pc == 0x3D53E4u) {
        ctx->pc = 0x3D53E8u;
        goto label_3d53e8;
    }
    ctx->pc = 0x3D53E0u;
    {
        const bool branch_taken_0x3d53e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3d53e0) {
            ctx->pc = 0x3D5460u;
            goto label_3d5460;
        }
    }
    ctx->pc = 0x3D53E8u;
label_3d53e8:
    // 0x3d53e8: 0xc0775b8  jal         func_1DD6E0
label_3d53ec:
    if (ctx->pc == 0x3D53ECu) {
        ctx->pc = 0x3D53F0u;
        goto label_3d53f0;
    }
    ctx->pc = 0x3D53E8u;
    SET_GPR_U32(ctx, 31, 0x3D53F0u);
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D53F0u; }
        if (ctx->pc != 0x3D53F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D53F0u; }
        if (ctx->pc != 0x3D53F0u) { return; }
    }
    ctx->pc = 0x3D53F0u;
label_3d53f0:
    // 0x3d53f0: 0xc0775b4  jal         func_1DD6D0
label_3d53f4:
    if (ctx->pc == 0x3D53F4u) {
        ctx->pc = 0x3D53F4u;
            // 0x3d53f4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3D53F8u;
        goto label_3d53f8;
    }
    ctx->pc = 0x3D53F0u;
    SET_GPR_U32(ctx, 31, 0x3D53F8u);
    ctx->pc = 0x3D53F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D53F0u;
            // 0x3d53f4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D53F8u; }
        if (ctx->pc != 0x3D53F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D53F8u; }
        if (ctx->pc != 0x3D53F8u) { return; }
    }
    ctx->pc = 0x3D53F8u;
label_3d53f8:
    // 0x3d53f8: 0xc6410028  lwc1        $f1, 0x28($s2)
    ctx->pc = 0x3d53f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3d53fc:
    // 0x3d53fc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3d53fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3d5400:
    // 0x3d5400: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3d5400u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3d5404:
    // 0x3d5404: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d5404u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3d5408:
    // 0x3d5408: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3d5408u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_3d540c:
    // 0x3d540c: 0xc0775b8  jal         func_1DD6E0
label_3d5410:
    if (ctx->pc == 0x3D5410u) {
        ctx->pc = 0x3D5410u;
            // 0x3d5410: 0xae420028  sw          $v0, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
        ctx->pc = 0x3D5414u;
        goto label_3d5414;
    }
    ctx->pc = 0x3D540Cu;
    SET_GPR_U32(ctx, 31, 0x3D5414u);
    ctx->pc = 0x3D5410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D540Cu;
            // 0x3d5410: 0xae420028  sw          $v0, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5414u; }
        if (ctx->pc != 0x3D5414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5414u; }
        if (ctx->pc != 0x3D5414u) { return; }
    }
    ctx->pc = 0x3D5414u;
label_3d5414:
    // 0x3d5414: 0xc0775b4  jal         func_1DD6D0
label_3d5418:
    if (ctx->pc == 0x3D5418u) {
        ctx->pc = 0x3D5418u;
            // 0x3d5418: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3D541Cu;
        goto label_3d541c;
    }
    ctx->pc = 0x3D5414u;
    SET_GPR_U32(ctx, 31, 0x3D541Cu);
    ctx->pc = 0x3D5418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D5414u;
            // 0x3d5418: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D541Cu; }
        if (ctx->pc != 0x3D541Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D541Cu; }
        if (ctx->pc != 0x3D541Cu) { return; }
    }
    ctx->pc = 0x3D541Cu;
label_3d541c:
    // 0x3d541c: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x3d541cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3d5420:
    // 0x3d5420: 0xc6430024  lwc1        $f3, 0x24($s2)
    ctx->pc = 0x3d5420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3d5424:
    // 0x3d5424: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3d5424u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3d5428:
    // 0x3d5428: 0x0  nop
    ctx->pc = 0x3d5428u;
    // NOP
label_3d542c:
    // 0x3d542c: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x3d542cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_3d5430:
    // 0x3d5430: 0x4600181d  msub.s      $f0, $f3, $f0
    ctx->pc = 0x3d5430u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
label_3d5434:
    // 0x3d5434: 0xc0775b8  jal         func_1DD6E0
label_3d5438:
    if (ctx->pc == 0x3D5438u) {
        ctx->pc = 0x3D5438u;
            // 0x3d5438: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->pc = 0x3D543Cu;
        goto label_3d543c;
    }
    ctx->pc = 0x3D5434u;
    SET_GPR_U32(ctx, 31, 0x3D543Cu);
    ctx->pc = 0x3D5438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D5434u;
            // 0x3d5438: 0xe6400004  swc1        $f0, 0x4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D543Cu; }
        if (ctx->pc != 0x3D543Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D543Cu; }
        if (ctx->pc != 0x3D543Cu) { return; }
    }
    ctx->pc = 0x3D543Cu;
label_3d543c:
    // 0x3d543c: 0xc0775b4  jal         func_1DD6D0
label_3d5440:
    if (ctx->pc == 0x3D5440u) {
        ctx->pc = 0x3D5440u;
            // 0x3d5440: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3D5444u;
        goto label_3d5444;
    }
    ctx->pc = 0x3D543Cu;
    SET_GPR_U32(ctx, 31, 0x3D5444u);
    ctx->pc = 0x3D5440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D543Cu;
            // 0x3d5440: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D0u;
    if (runtime->hasFunction(0x1DD6D0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5444u; }
        if (ctx->pc != 0x3D5444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6D0_0x1dd6d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5444u; }
        if (ctx->pc != 0x3D5444u) { return; }
    }
    ctx->pc = 0x3D5444u;
label_3d5444:
    // 0x3d5444: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3d5444u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3d5448:
    // 0x3d5448: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d5448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d544c:
    // 0x3d544c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3d544cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d5450:
    // 0x3d5450: 0xc04cb78  jal         func_132DE0
label_3d5454:
    if (ctx->pc == 0x3D5454u) {
        ctx->pc = 0x3D5454u;
            // 0x3d5454: 0x26460018  addiu       $a2, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->pc = 0x3D5458u;
        goto label_3d5458;
    }
    ctx->pc = 0x3D5450u;
    SET_GPR_U32(ctx, 31, 0x3D5458u);
    ctx->pc = 0x3D5454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D5450u;
            // 0x3d5454: 0x26460018  addiu       $a2, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132DE0u;
    if (runtime->hasFunction(0x132DE0u)) {
        auto targetFn = runtime->lookupFunction(0x132DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5458u; }
        if (ctx->pc != 0x3D5458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132DE0_0x132de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5458u; }
        if (ctx->pc != 0x3D5458u) { return; }
    }
    ctx->pc = 0x3D5458u;
label_3d5458:
    // 0x3d5458: 0x1000000d  b           . + 4 + (0xD << 2)
label_3d545c:
    if (ctx->pc == 0x3D545Cu) {
        ctx->pc = 0x3D5460u;
        goto label_3d5460;
    }
    ctx->pc = 0x3D5458u;
    {
        const bool branch_taken_0x3d5458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d5458) {
            ctx->pc = 0x3D5490u;
            goto label_3d5490;
        }
    }
    ctx->pc = 0x3D5460u;
label_3d5460:
    // 0x3d5460: 0x92620060  lbu         $v0, 0x60($s3)
    ctx->pc = 0x3d5460u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 96)));
label_3d5464:
    // 0x3d5464: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3d5468:
    if (ctx->pc == 0x3D5468u) {
        ctx->pc = 0x3D546Cu;
        goto label_3d546c;
    }
    ctx->pc = 0x3D5464u;
    {
        const bool branch_taken_0x3d5464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d5464) {
            ctx->pc = 0x3D5480u;
            goto label_3d5480;
        }
    }
    ctx->pc = 0x3D546Cu;
label_3d546c:
    // 0x3d546c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x3d546cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3d5470:
    // 0x3d5470: 0xc0f56bc  jal         func_3D5AF0
label_3d5474:
    if (ctx->pc == 0x3D5474u) {
        ctx->pc = 0x3D5474u;
            // 0x3d5474: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3D5478u;
        goto label_3d5478;
    }
    ctx->pc = 0x3D5470u;
    SET_GPR_U32(ctx, 31, 0x3D5478u);
    ctx->pc = 0x3D5474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D5470u;
            // 0x3d5474: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D5AF0u;
    if (runtime->hasFunction(0x3D5AF0u)) {
        auto targetFn = runtime->lookupFunction(0x3D5AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5478u; }
        if (ctx->pc != 0x3D5478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D5AF0_0x3d5af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5478u; }
        if (ctx->pc != 0x3D5478u) { return; }
    }
    ctx->pc = 0x3D5478u;
label_3d5478:
    // 0x3d5478: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3d547c:
    if (ctx->pc == 0x3D547Cu) {
        ctx->pc = 0x3D5480u;
        goto label_3d5480;
    }
    ctx->pc = 0x3D5478u;
    {
        const bool branch_taken_0x3d5478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d5478) {
            ctx->pc = 0x3D5490u;
            goto label_3d5490;
        }
    }
    ctx->pc = 0x3D5480u;
label_3d5480:
    // 0x3d5480: 0x26640054  addiu       $a0, $s3, 0x54
    ctx->pc = 0x3d5480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
label_3d5484:
    // 0x3d5484: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3d5484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d5488:
    // 0x3d5488: 0xc0f5538  jal         func_3D54E0
label_3d548c:
    if (ctx->pc == 0x3D548Cu) {
        ctx->pc = 0x3D548Cu;
            // 0x3d548c: 0x266600e0  addiu       $a2, $s3, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 224));
        ctx->pc = 0x3D5490u;
        goto label_3d5490;
    }
    ctx->pc = 0x3D5488u;
    SET_GPR_U32(ctx, 31, 0x3D5490u);
    ctx->pc = 0x3D548Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3D5488u;
            // 0x3d548c: 0x266600e0  addiu       $a2, $s3, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3D54E0u;
    if (runtime->hasFunction(0x3D54E0u)) {
        auto targetFn = runtime->lookupFunction(0x3D54E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5490u; }
        if (ctx->pc != 0x3D5490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003D54E0_0x3d54e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3D5490u; }
        if (ctx->pc != 0x3D5490u) { return; }
    }
    ctx->pc = 0x3D5490u;
label_3d5490:
    // 0x3d5490: 0x8e63005c  lw          $v1, 0x5C($s3)
    ctx->pc = 0x3d5490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
label_3d5494:
    // 0x3d5494: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3d5494u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3d5498:
    // 0x3d5498: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x3d5498u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3d549c:
    // 0x3d549c: 0x1460ffcb  bnez        $v1, . + 4 + (-0x35 << 2)
label_3d54a0:
    if (ctx->pc == 0x3D54A0u) {
        ctx->pc = 0x3D54A0u;
            // 0x3d54a0: 0x26520030  addiu       $s2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->pc = 0x3D54A4u;
        goto label_3d54a4;
    }
    ctx->pc = 0x3D549Cu;
    {
        const bool branch_taken_0x3d549c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D54A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D549Cu;
            // 0x3d54a0: 0x26520030  addiu       $s2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d549c) {
            ctx->pc = 0x3D53CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3d53cc;
        }
    }
    ctx->pc = 0x3D54A4u;
label_3d54a4:
    // 0x3d54a4: 0x10000004  b           . + 4 + (0x4 << 2)
label_3d54a8:
    if (ctx->pc == 0x3D54A8u) {
        ctx->pc = 0x3D54ACu;
        goto label_3d54ac;
    }
    ctx->pc = 0x3D54A4u;
    {
        const bool branch_taken_0x3d54a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d54a4) {
            ctx->pc = 0x3D54B8u;
            goto label_3d54b8;
        }
    }
    ctx->pc = 0x3D54ACu;
label_3d54ac:
    // 0x3d54ac: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3d54acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3d54b0:
    // 0x3d54b0: 0x320f809  jalr        $t9
label_3d54b4:
    if (ctx->pc == 0x3D54B4u) {
        ctx->pc = 0x3D54B8u;
        goto label_3d54b8;
    }
    ctx->pc = 0x3D54B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3D54B8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3D54B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3D54B8u; }
            if (ctx->pc != 0x3D54B8u) { return; }
        }
        }
    }
    ctx->pc = 0x3D54B8u;
label_3d54b8:
    // 0x3d54b8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3d54b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3d54bc:
    // 0x3d54bc: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3d54bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3d54c0:
    // 0x3d54c0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3d54c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3d54c4:
    // 0x3d54c4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3d54c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3d54c8:
    // 0x3d54c8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3d54c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3d54cc:
    // 0x3d54cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3d54ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d54d0:
    // 0x3d54d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3d54d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d54d4:
    // 0x3d54d4: 0x3e00008  jr          $ra
label_3d54d8:
    if (ctx->pc == 0x3D54D8u) {
        ctx->pc = 0x3D54D8u;
            // 0x3d54d8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x3D54DCu;
        goto label_3d54dc;
    }
    ctx->pc = 0x3D54D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D54D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D54D4u;
            // 0x3d54d8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D54DCu;
label_3d54dc:
    // 0x3d54dc: 0x0  nop
    ctx->pc = 0x3d54dcu;
    // NOP
}
