#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00482B00
// Address: 0x482b00 - 0x4834e0
void sub_00482B00_0x482b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00482B00_0x482b00");
#endif

    switch (ctx->pc) {
        case 0x482b00u: goto label_482b00;
        case 0x482b04u: goto label_482b04;
        case 0x482b08u: goto label_482b08;
        case 0x482b0cu: goto label_482b0c;
        case 0x482b10u: goto label_482b10;
        case 0x482b14u: goto label_482b14;
        case 0x482b18u: goto label_482b18;
        case 0x482b1cu: goto label_482b1c;
        case 0x482b20u: goto label_482b20;
        case 0x482b24u: goto label_482b24;
        case 0x482b28u: goto label_482b28;
        case 0x482b2cu: goto label_482b2c;
        case 0x482b30u: goto label_482b30;
        case 0x482b34u: goto label_482b34;
        case 0x482b38u: goto label_482b38;
        case 0x482b3cu: goto label_482b3c;
        case 0x482b40u: goto label_482b40;
        case 0x482b44u: goto label_482b44;
        case 0x482b48u: goto label_482b48;
        case 0x482b4cu: goto label_482b4c;
        case 0x482b50u: goto label_482b50;
        case 0x482b54u: goto label_482b54;
        case 0x482b58u: goto label_482b58;
        case 0x482b5cu: goto label_482b5c;
        case 0x482b60u: goto label_482b60;
        case 0x482b64u: goto label_482b64;
        case 0x482b68u: goto label_482b68;
        case 0x482b6cu: goto label_482b6c;
        case 0x482b70u: goto label_482b70;
        case 0x482b74u: goto label_482b74;
        case 0x482b78u: goto label_482b78;
        case 0x482b7cu: goto label_482b7c;
        case 0x482b80u: goto label_482b80;
        case 0x482b84u: goto label_482b84;
        case 0x482b88u: goto label_482b88;
        case 0x482b8cu: goto label_482b8c;
        case 0x482b90u: goto label_482b90;
        case 0x482b94u: goto label_482b94;
        case 0x482b98u: goto label_482b98;
        case 0x482b9cu: goto label_482b9c;
        case 0x482ba0u: goto label_482ba0;
        case 0x482ba4u: goto label_482ba4;
        case 0x482ba8u: goto label_482ba8;
        case 0x482bacu: goto label_482bac;
        case 0x482bb0u: goto label_482bb0;
        case 0x482bb4u: goto label_482bb4;
        case 0x482bb8u: goto label_482bb8;
        case 0x482bbcu: goto label_482bbc;
        case 0x482bc0u: goto label_482bc0;
        case 0x482bc4u: goto label_482bc4;
        case 0x482bc8u: goto label_482bc8;
        case 0x482bccu: goto label_482bcc;
        case 0x482bd0u: goto label_482bd0;
        case 0x482bd4u: goto label_482bd4;
        case 0x482bd8u: goto label_482bd8;
        case 0x482bdcu: goto label_482bdc;
        case 0x482be0u: goto label_482be0;
        case 0x482be4u: goto label_482be4;
        case 0x482be8u: goto label_482be8;
        case 0x482becu: goto label_482bec;
        case 0x482bf0u: goto label_482bf0;
        case 0x482bf4u: goto label_482bf4;
        case 0x482bf8u: goto label_482bf8;
        case 0x482bfcu: goto label_482bfc;
        case 0x482c00u: goto label_482c00;
        case 0x482c04u: goto label_482c04;
        case 0x482c08u: goto label_482c08;
        case 0x482c0cu: goto label_482c0c;
        case 0x482c10u: goto label_482c10;
        case 0x482c14u: goto label_482c14;
        case 0x482c18u: goto label_482c18;
        case 0x482c1cu: goto label_482c1c;
        case 0x482c20u: goto label_482c20;
        case 0x482c24u: goto label_482c24;
        case 0x482c28u: goto label_482c28;
        case 0x482c2cu: goto label_482c2c;
        case 0x482c30u: goto label_482c30;
        case 0x482c34u: goto label_482c34;
        case 0x482c38u: goto label_482c38;
        case 0x482c3cu: goto label_482c3c;
        case 0x482c40u: goto label_482c40;
        case 0x482c44u: goto label_482c44;
        case 0x482c48u: goto label_482c48;
        case 0x482c4cu: goto label_482c4c;
        case 0x482c50u: goto label_482c50;
        case 0x482c54u: goto label_482c54;
        case 0x482c58u: goto label_482c58;
        case 0x482c5cu: goto label_482c5c;
        case 0x482c60u: goto label_482c60;
        case 0x482c64u: goto label_482c64;
        case 0x482c68u: goto label_482c68;
        case 0x482c6cu: goto label_482c6c;
        case 0x482c70u: goto label_482c70;
        case 0x482c74u: goto label_482c74;
        case 0x482c78u: goto label_482c78;
        case 0x482c7cu: goto label_482c7c;
        case 0x482c80u: goto label_482c80;
        case 0x482c84u: goto label_482c84;
        case 0x482c88u: goto label_482c88;
        case 0x482c8cu: goto label_482c8c;
        case 0x482c90u: goto label_482c90;
        case 0x482c94u: goto label_482c94;
        case 0x482c98u: goto label_482c98;
        case 0x482c9cu: goto label_482c9c;
        case 0x482ca0u: goto label_482ca0;
        case 0x482ca4u: goto label_482ca4;
        case 0x482ca8u: goto label_482ca8;
        case 0x482cacu: goto label_482cac;
        case 0x482cb0u: goto label_482cb0;
        case 0x482cb4u: goto label_482cb4;
        case 0x482cb8u: goto label_482cb8;
        case 0x482cbcu: goto label_482cbc;
        case 0x482cc0u: goto label_482cc0;
        case 0x482cc4u: goto label_482cc4;
        case 0x482cc8u: goto label_482cc8;
        case 0x482cccu: goto label_482ccc;
        case 0x482cd0u: goto label_482cd0;
        case 0x482cd4u: goto label_482cd4;
        case 0x482cd8u: goto label_482cd8;
        case 0x482cdcu: goto label_482cdc;
        case 0x482ce0u: goto label_482ce0;
        case 0x482ce4u: goto label_482ce4;
        case 0x482ce8u: goto label_482ce8;
        case 0x482cecu: goto label_482cec;
        case 0x482cf0u: goto label_482cf0;
        case 0x482cf4u: goto label_482cf4;
        case 0x482cf8u: goto label_482cf8;
        case 0x482cfcu: goto label_482cfc;
        case 0x482d00u: goto label_482d00;
        case 0x482d04u: goto label_482d04;
        case 0x482d08u: goto label_482d08;
        case 0x482d0cu: goto label_482d0c;
        case 0x482d10u: goto label_482d10;
        case 0x482d14u: goto label_482d14;
        case 0x482d18u: goto label_482d18;
        case 0x482d1cu: goto label_482d1c;
        case 0x482d20u: goto label_482d20;
        case 0x482d24u: goto label_482d24;
        case 0x482d28u: goto label_482d28;
        case 0x482d2cu: goto label_482d2c;
        case 0x482d30u: goto label_482d30;
        case 0x482d34u: goto label_482d34;
        case 0x482d38u: goto label_482d38;
        case 0x482d3cu: goto label_482d3c;
        case 0x482d40u: goto label_482d40;
        case 0x482d44u: goto label_482d44;
        case 0x482d48u: goto label_482d48;
        case 0x482d4cu: goto label_482d4c;
        case 0x482d50u: goto label_482d50;
        case 0x482d54u: goto label_482d54;
        case 0x482d58u: goto label_482d58;
        case 0x482d5cu: goto label_482d5c;
        case 0x482d60u: goto label_482d60;
        case 0x482d64u: goto label_482d64;
        case 0x482d68u: goto label_482d68;
        case 0x482d6cu: goto label_482d6c;
        case 0x482d70u: goto label_482d70;
        case 0x482d74u: goto label_482d74;
        case 0x482d78u: goto label_482d78;
        case 0x482d7cu: goto label_482d7c;
        case 0x482d80u: goto label_482d80;
        case 0x482d84u: goto label_482d84;
        case 0x482d88u: goto label_482d88;
        case 0x482d8cu: goto label_482d8c;
        case 0x482d90u: goto label_482d90;
        case 0x482d94u: goto label_482d94;
        case 0x482d98u: goto label_482d98;
        case 0x482d9cu: goto label_482d9c;
        case 0x482da0u: goto label_482da0;
        case 0x482da4u: goto label_482da4;
        case 0x482da8u: goto label_482da8;
        case 0x482dacu: goto label_482dac;
        case 0x482db0u: goto label_482db0;
        case 0x482db4u: goto label_482db4;
        case 0x482db8u: goto label_482db8;
        case 0x482dbcu: goto label_482dbc;
        case 0x482dc0u: goto label_482dc0;
        case 0x482dc4u: goto label_482dc4;
        case 0x482dc8u: goto label_482dc8;
        case 0x482dccu: goto label_482dcc;
        case 0x482dd0u: goto label_482dd0;
        case 0x482dd4u: goto label_482dd4;
        case 0x482dd8u: goto label_482dd8;
        case 0x482ddcu: goto label_482ddc;
        case 0x482de0u: goto label_482de0;
        case 0x482de4u: goto label_482de4;
        case 0x482de8u: goto label_482de8;
        case 0x482decu: goto label_482dec;
        case 0x482df0u: goto label_482df0;
        case 0x482df4u: goto label_482df4;
        case 0x482df8u: goto label_482df8;
        case 0x482dfcu: goto label_482dfc;
        case 0x482e00u: goto label_482e00;
        case 0x482e04u: goto label_482e04;
        case 0x482e08u: goto label_482e08;
        case 0x482e0cu: goto label_482e0c;
        case 0x482e10u: goto label_482e10;
        case 0x482e14u: goto label_482e14;
        case 0x482e18u: goto label_482e18;
        case 0x482e1cu: goto label_482e1c;
        case 0x482e20u: goto label_482e20;
        case 0x482e24u: goto label_482e24;
        case 0x482e28u: goto label_482e28;
        case 0x482e2cu: goto label_482e2c;
        case 0x482e30u: goto label_482e30;
        case 0x482e34u: goto label_482e34;
        case 0x482e38u: goto label_482e38;
        case 0x482e3cu: goto label_482e3c;
        case 0x482e40u: goto label_482e40;
        case 0x482e44u: goto label_482e44;
        case 0x482e48u: goto label_482e48;
        case 0x482e4cu: goto label_482e4c;
        case 0x482e50u: goto label_482e50;
        case 0x482e54u: goto label_482e54;
        case 0x482e58u: goto label_482e58;
        case 0x482e5cu: goto label_482e5c;
        case 0x482e60u: goto label_482e60;
        case 0x482e64u: goto label_482e64;
        case 0x482e68u: goto label_482e68;
        case 0x482e6cu: goto label_482e6c;
        case 0x482e70u: goto label_482e70;
        case 0x482e74u: goto label_482e74;
        case 0x482e78u: goto label_482e78;
        case 0x482e7cu: goto label_482e7c;
        case 0x482e80u: goto label_482e80;
        case 0x482e84u: goto label_482e84;
        case 0x482e88u: goto label_482e88;
        case 0x482e8cu: goto label_482e8c;
        case 0x482e90u: goto label_482e90;
        case 0x482e94u: goto label_482e94;
        case 0x482e98u: goto label_482e98;
        case 0x482e9cu: goto label_482e9c;
        case 0x482ea0u: goto label_482ea0;
        case 0x482ea4u: goto label_482ea4;
        case 0x482ea8u: goto label_482ea8;
        case 0x482eacu: goto label_482eac;
        case 0x482eb0u: goto label_482eb0;
        case 0x482eb4u: goto label_482eb4;
        case 0x482eb8u: goto label_482eb8;
        case 0x482ebcu: goto label_482ebc;
        case 0x482ec0u: goto label_482ec0;
        case 0x482ec4u: goto label_482ec4;
        case 0x482ec8u: goto label_482ec8;
        case 0x482eccu: goto label_482ecc;
        case 0x482ed0u: goto label_482ed0;
        case 0x482ed4u: goto label_482ed4;
        case 0x482ed8u: goto label_482ed8;
        case 0x482edcu: goto label_482edc;
        case 0x482ee0u: goto label_482ee0;
        case 0x482ee4u: goto label_482ee4;
        case 0x482ee8u: goto label_482ee8;
        case 0x482eecu: goto label_482eec;
        case 0x482ef0u: goto label_482ef0;
        case 0x482ef4u: goto label_482ef4;
        case 0x482ef8u: goto label_482ef8;
        case 0x482efcu: goto label_482efc;
        case 0x482f00u: goto label_482f00;
        case 0x482f04u: goto label_482f04;
        case 0x482f08u: goto label_482f08;
        case 0x482f0cu: goto label_482f0c;
        case 0x482f10u: goto label_482f10;
        case 0x482f14u: goto label_482f14;
        case 0x482f18u: goto label_482f18;
        case 0x482f1cu: goto label_482f1c;
        case 0x482f20u: goto label_482f20;
        case 0x482f24u: goto label_482f24;
        case 0x482f28u: goto label_482f28;
        case 0x482f2cu: goto label_482f2c;
        case 0x482f30u: goto label_482f30;
        case 0x482f34u: goto label_482f34;
        case 0x482f38u: goto label_482f38;
        case 0x482f3cu: goto label_482f3c;
        case 0x482f40u: goto label_482f40;
        case 0x482f44u: goto label_482f44;
        case 0x482f48u: goto label_482f48;
        case 0x482f4cu: goto label_482f4c;
        case 0x482f50u: goto label_482f50;
        case 0x482f54u: goto label_482f54;
        case 0x482f58u: goto label_482f58;
        case 0x482f5cu: goto label_482f5c;
        case 0x482f60u: goto label_482f60;
        case 0x482f64u: goto label_482f64;
        case 0x482f68u: goto label_482f68;
        case 0x482f6cu: goto label_482f6c;
        case 0x482f70u: goto label_482f70;
        case 0x482f74u: goto label_482f74;
        case 0x482f78u: goto label_482f78;
        case 0x482f7cu: goto label_482f7c;
        case 0x482f80u: goto label_482f80;
        case 0x482f84u: goto label_482f84;
        case 0x482f88u: goto label_482f88;
        case 0x482f8cu: goto label_482f8c;
        case 0x482f90u: goto label_482f90;
        case 0x482f94u: goto label_482f94;
        case 0x482f98u: goto label_482f98;
        case 0x482f9cu: goto label_482f9c;
        case 0x482fa0u: goto label_482fa0;
        case 0x482fa4u: goto label_482fa4;
        case 0x482fa8u: goto label_482fa8;
        case 0x482facu: goto label_482fac;
        case 0x482fb0u: goto label_482fb0;
        case 0x482fb4u: goto label_482fb4;
        case 0x482fb8u: goto label_482fb8;
        case 0x482fbcu: goto label_482fbc;
        case 0x482fc0u: goto label_482fc0;
        case 0x482fc4u: goto label_482fc4;
        case 0x482fc8u: goto label_482fc8;
        case 0x482fccu: goto label_482fcc;
        case 0x482fd0u: goto label_482fd0;
        case 0x482fd4u: goto label_482fd4;
        case 0x482fd8u: goto label_482fd8;
        case 0x482fdcu: goto label_482fdc;
        case 0x482fe0u: goto label_482fe0;
        case 0x482fe4u: goto label_482fe4;
        case 0x482fe8u: goto label_482fe8;
        case 0x482fecu: goto label_482fec;
        case 0x482ff0u: goto label_482ff0;
        case 0x482ff4u: goto label_482ff4;
        case 0x482ff8u: goto label_482ff8;
        case 0x482ffcu: goto label_482ffc;
        case 0x483000u: goto label_483000;
        case 0x483004u: goto label_483004;
        case 0x483008u: goto label_483008;
        case 0x48300cu: goto label_48300c;
        case 0x483010u: goto label_483010;
        case 0x483014u: goto label_483014;
        case 0x483018u: goto label_483018;
        case 0x48301cu: goto label_48301c;
        case 0x483020u: goto label_483020;
        case 0x483024u: goto label_483024;
        case 0x483028u: goto label_483028;
        case 0x48302cu: goto label_48302c;
        case 0x483030u: goto label_483030;
        case 0x483034u: goto label_483034;
        case 0x483038u: goto label_483038;
        case 0x48303cu: goto label_48303c;
        case 0x483040u: goto label_483040;
        case 0x483044u: goto label_483044;
        case 0x483048u: goto label_483048;
        case 0x48304cu: goto label_48304c;
        case 0x483050u: goto label_483050;
        case 0x483054u: goto label_483054;
        case 0x483058u: goto label_483058;
        case 0x48305cu: goto label_48305c;
        case 0x483060u: goto label_483060;
        case 0x483064u: goto label_483064;
        case 0x483068u: goto label_483068;
        case 0x48306cu: goto label_48306c;
        case 0x483070u: goto label_483070;
        case 0x483074u: goto label_483074;
        case 0x483078u: goto label_483078;
        case 0x48307cu: goto label_48307c;
        case 0x483080u: goto label_483080;
        case 0x483084u: goto label_483084;
        case 0x483088u: goto label_483088;
        case 0x48308cu: goto label_48308c;
        case 0x483090u: goto label_483090;
        case 0x483094u: goto label_483094;
        case 0x483098u: goto label_483098;
        case 0x48309cu: goto label_48309c;
        case 0x4830a0u: goto label_4830a0;
        case 0x4830a4u: goto label_4830a4;
        case 0x4830a8u: goto label_4830a8;
        case 0x4830acu: goto label_4830ac;
        case 0x4830b0u: goto label_4830b0;
        case 0x4830b4u: goto label_4830b4;
        case 0x4830b8u: goto label_4830b8;
        case 0x4830bcu: goto label_4830bc;
        case 0x4830c0u: goto label_4830c0;
        case 0x4830c4u: goto label_4830c4;
        case 0x4830c8u: goto label_4830c8;
        case 0x4830ccu: goto label_4830cc;
        case 0x4830d0u: goto label_4830d0;
        case 0x4830d4u: goto label_4830d4;
        case 0x4830d8u: goto label_4830d8;
        case 0x4830dcu: goto label_4830dc;
        case 0x4830e0u: goto label_4830e0;
        case 0x4830e4u: goto label_4830e4;
        case 0x4830e8u: goto label_4830e8;
        case 0x4830ecu: goto label_4830ec;
        case 0x4830f0u: goto label_4830f0;
        case 0x4830f4u: goto label_4830f4;
        case 0x4830f8u: goto label_4830f8;
        case 0x4830fcu: goto label_4830fc;
        case 0x483100u: goto label_483100;
        case 0x483104u: goto label_483104;
        case 0x483108u: goto label_483108;
        case 0x48310cu: goto label_48310c;
        case 0x483110u: goto label_483110;
        case 0x483114u: goto label_483114;
        case 0x483118u: goto label_483118;
        case 0x48311cu: goto label_48311c;
        case 0x483120u: goto label_483120;
        case 0x483124u: goto label_483124;
        case 0x483128u: goto label_483128;
        case 0x48312cu: goto label_48312c;
        case 0x483130u: goto label_483130;
        case 0x483134u: goto label_483134;
        case 0x483138u: goto label_483138;
        case 0x48313cu: goto label_48313c;
        case 0x483140u: goto label_483140;
        case 0x483144u: goto label_483144;
        case 0x483148u: goto label_483148;
        case 0x48314cu: goto label_48314c;
        case 0x483150u: goto label_483150;
        case 0x483154u: goto label_483154;
        case 0x483158u: goto label_483158;
        case 0x48315cu: goto label_48315c;
        case 0x483160u: goto label_483160;
        case 0x483164u: goto label_483164;
        case 0x483168u: goto label_483168;
        case 0x48316cu: goto label_48316c;
        case 0x483170u: goto label_483170;
        case 0x483174u: goto label_483174;
        case 0x483178u: goto label_483178;
        case 0x48317cu: goto label_48317c;
        case 0x483180u: goto label_483180;
        case 0x483184u: goto label_483184;
        case 0x483188u: goto label_483188;
        case 0x48318cu: goto label_48318c;
        case 0x483190u: goto label_483190;
        case 0x483194u: goto label_483194;
        case 0x483198u: goto label_483198;
        case 0x48319cu: goto label_48319c;
        case 0x4831a0u: goto label_4831a0;
        case 0x4831a4u: goto label_4831a4;
        case 0x4831a8u: goto label_4831a8;
        case 0x4831acu: goto label_4831ac;
        case 0x4831b0u: goto label_4831b0;
        case 0x4831b4u: goto label_4831b4;
        case 0x4831b8u: goto label_4831b8;
        case 0x4831bcu: goto label_4831bc;
        case 0x4831c0u: goto label_4831c0;
        case 0x4831c4u: goto label_4831c4;
        case 0x4831c8u: goto label_4831c8;
        case 0x4831ccu: goto label_4831cc;
        case 0x4831d0u: goto label_4831d0;
        case 0x4831d4u: goto label_4831d4;
        case 0x4831d8u: goto label_4831d8;
        case 0x4831dcu: goto label_4831dc;
        case 0x4831e0u: goto label_4831e0;
        case 0x4831e4u: goto label_4831e4;
        case 0x4831e8u: goto label_4831e8;
        case 0x4831ecu: goto label_4831ec;
        case 0x4831f0u: goto label_4831f0;
        case 0x4831f4u: goto label_4831f4;
        case 0x4831f8u: goto label_4831f8;
        case 0x4831fcu: goto label_4831fc;
        case 0x483200u: goto label_483200;
        case 0x483204u: goto label_483204;
        case 0x483208u: goto label_483208;
        case 0x48320cu: goto label_48320c;
        case 0x483210u: goto label_483210;
        case 0x483214u: goto label_483214;
        case 0x483218u: goto label_483218;
        case 0x48321cu: goto label_48321c;
        case 0x483220u: goto label_483220;
        case 0x483224u: goto label_483224;
        case 0x483228u: goto label_483228;
        case 0x48322cu: goto label_48322c;
        case 0x483230u: goto label_483230;
        case 0x483234u: goto label_483234;
        case 0x483238u: goto label_483238;
        case 0x48323cu: goto label_48323c;
        case 0x483240u: goto label_483240;
        case 0x483244u: goto label_483244;
        case 0x483248u: goto label_483248;
        case 0x48324cu: goto label_48324c;
        case 0x483250u: goto label_483250;
        case 0x483254u: goto label_483254;
        case 0x483258u: goto label_483258;
        case 0x48325cu: goto label_48325c;
        case 0x483260u: goto label_483260;
        case 0x483264u: goto label_483264;
        case 0x483268u: goto label_483268;
        case 0x48326cu: goto label_48326c;
        case 0x483270u: goto label_483270;
        case 0x483274u: goto label_483274;
        case 0x483278u: goto label_483278;
        case 0x48327cu: goto label_48327c;
        case 0x483280u: goto label_483280;
        case 0x483284u: goto label_483284;
        case 0x483288u: goto label_483288;
        case 0x48328cu: goto label_48328c;
        case 0x483290u: goto label_483290;
        case 0x483294u: goto label_483294;
        case 0x483298u: goto label_483298;
        case 0x48329cu: goto label_48329c;
        case 0x4832a0u: goto label_4832a0;
        case 0x4832a4u: goto label_4832a4;
        case 0x4832a8u: goto label_4832a8;
        case 0x4832acu: goto label_4832ac;
        case 0x4832b0u: goto label_4832b0;
        case 0x4832b4u: goto label_4832b4;
        case 0x4832b8u: goto label_4832b8;
        case 0x4832bcu: goto label_4832bc;
        case 0x4832c0u: goto label_4832c0;
        case 0x4832c4u: goto label_4832c4;
        case 0x4832c8u: goto label_4832c8;
        case 0x4832ccu: goto label_4832cc;
        case 0x4832d0u: goto label_4832d0;
        case 0x4832d4u: goto label_4832d4;
        case 0x4832d8u: goto label_4832d8;
        case 0x4832dcu: goto label_4832dc;
        case 0x4832e0u: goto label_4832e0;
        case 0x4832e4u: goto label_4832e4;
        case 0x4832e8u: goto label_4832e8;
        case 0x4832ecu: goto label_4832ec;
        case 0x4832f0u: goto label_4832f0;
        case 0x4832f4u: goto label_4832f4;
        case 0x4832f8u: goto label_4832f8;
        case 0x4832fcu: goto label_4832fc;
        case 0x483300u: goto label_483300;
        case 0x483304u: goto label_483304;
        case 0x483308u: goto label_483308;
        case 0x48330cu: goto label_48330c;
        case 0x483310u: goto label_483310;
        case 0x483314u: goto label_483314;
        case 0x483318u: goto label_483318;
        case 0x48331cu: goto label_48331c;
        case 0x483320u: goto label_483320;
        case 0x483324u: goto label_483324;
        case 0x483328u: goto label_483328;
        case 0x48332cu: goto label_48332c;
        case 0x483330u: goto label_483330;
        case 0x483334u: goto label_483334;
        case 0x483338u: goto label_483338;
        case 0x48333cu: goto label_48333c;
        case 0x483340u: goto label_483340;
        case 0x483344u: goto label_483344;
        case 0x483348u: goto label_483348;
        case 0x48334cu: goto label_48334c;
        case 0x483350u: goto label_483350;
        case 0x483354u: goto label_483354;
        case 0x483358u: goto label_483358;
        case 0x48335cu: goto label_48335c;
        case 0x483360u: goto label_483360;
        case 0x483364u: goto label_483364;
        case 0x483368u: goto label_483368;
        case 0x48336cu: goto label_48336c;
        case 0x483370u: goto label_483370;
        case 0x483374u: goto label_483374;
        case 0x483378u: goto label_483378;
        case 0x48337cu: goto label_48337c;
        case 0x483380u: goto label_483380;
        case 0x483384u: goto label_483384;
        case 0x483388u: goto label_483388;
        case 0x48338cu: goto label_48338c;
        case 0x483390u: goto label_483390;
        case 0x483394u: goto label_483394;
        case 0x483398u: goto label_483398;
        case 0x48339cu: goto label_48339c;
        case 0x4833a0u: goto label_4833a0;
        case 0x4833a4u: goto label_4833a4;
        case 0x4833a8u: goto label_4833a8;
        case 0x4833acu: goto label_4833ac;
        case 0x4833b0u: goto label_4833b0;
        case 0x4833b4u: goto label_4833b4;
        case 0x4833b8u: goto label_4833b8;
        case 0x4833bcu: goto label_4833bc;
        case 0x4833c0u: goto label_4833c0;
        case 0x4833c4u: goto label_4833c4;
        case 0x4833c8u: goto label_4833c8;
        case 0x4833ccu: goto label_4833cc;
        case 0x4833d0u: goto label_4833d0;
        case 0x4833d4u: goto label_4833d4;
        case 0x4833d8u: goto label_4833d8;
        case 0x4833dcu: goto label_4833dc;
        case 0x4833e0u: goto label_4833e0;
        case 0x4833e4u: goto label_4833e4;
        case 0x4833e8u: goto label_4833e8;
        case 0x4833ecu: goto label_4833ec;
        case 0x4833f0u: goto label_4833f0;
        case 0x4833f4u: goto label_4833f4;
        case 0x4833f8u: goto label_4833f8;
        case 0x4833fcu: goto label_4833fc;
        case 0x483400u: goto label_483400;
        case 0x483404u: goto label_483404;
        case 0x483408u: goto label_483408;
        case 0x48340cu: goto label_48340c;
        case 0x483410u: goto label_483410;
        case 0x483414u: goto label_483414;
        case 0x483418u: goto label_483418;
        case 0x48341cu: goto label_48341c;
        case 0x483420u: goto label_483420;
        case 0x483424u: goto label_483424;
        case 0x483428u: goto label_483428;
        case 0x48342cu: goto label_48342c;
        case 0x483430u: goto label_483430;
        case 0x483434u: goto label_483434;
        case 0x483438u: goto label_483438;
        case 0x48343cu: goto label_48343c;
        case 0x483440u: goto label_483440;
        case 0x483444u: goto label_483444;
        case 0x483448u: goto label_483448;
        case 0x48344cu: goto label_48344c;
        case 0x483450u: goto label_483450;
        case 0x483454u: goto label_483454;
        case 0x483458u: goto label_483458;
        case 0x48345cu: goto label_48345c;
        case 0x483460u: goto label_483460;
        case 0x483464u: goto label_483464;
        case 0x483468u: goto label_483468;
        case 0x48346cu: goto label_48346c;
        case 0x483470u: goto label_483470;
        case 0x483474u: goto label_483474;
        case 0x483478u: goto label_483478;
        case 0x48347cu: goto label_48347c;
        case 0x483480u: goto label_483480;
        case 0x483484u: goto label_483484;
        case 0x483488u: goto label_483488;
        case 0x48348cu: goto label_48348c;
        case 0x483490u: goto label_483490;
        case 0x483494u: goto label_483494;
        case 0x483498u: goto label_483498;
        case 0x48349cu: goto label_48349c;
        case 0x4834a0u: goto label_4834a0;
        case 0x4834a4u: goto label_4834a4;
        case 0x4834a8u: goto label_4834a8;
        case 0x4834acu: goto label_4834ac;
        case 0x4834b0u: goto label_4834b0;
        case 0x4834b4u: goto label_4834b4;
        case 0x4834b8u: goto label_4834b8;
        case 0x4834bcu: goto label_4834bc;
        case 0x4834c0u: goto label_4834c0;
        case 0x4834c4u: goto label_4834c4;
        case 0x4834c8u: goto label_4834c8;
        case 0x4834ccu: goto label_4834cc;
        case 0x4834d0u: goto label_4834d0;
        case 0x4834d4u: goto label_4834d4;
        case 0x4834d8u: goto label_4834d8;
        case 0x4834dcu: goto label_4834dc;
        default: break;
    }

    ctx->pc = 0x482b00u;

label_482b00:
    // 0x482b00: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x482b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_482b04:
    // 0x482b04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x482b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_482b08:
    // 0x482b08: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x482b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_482b0c:
    // 0x482b0c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x482b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_482b10:
    // 0x482b10: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x482b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_482b14:
    // 0x482b14: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x482b14u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_482b18:
    // 0x482b18: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x482b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_482b1c:
    // 0x482b1c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x482b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_482b20:
    // 0x482b20: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x482b20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_482b24:
    // 0x482b24: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x482b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_482b28:
    // 0x482b28: 0x2839804  sllv        $s3, $v1, $s4
    ctx->pc = 0x482b28u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 20) & 0x1F));
label_482b2c:
    // 0x482b2c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x482b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_482b30:
    // 0x482b30: 0x2603027  not         $a2, $s3
    ctx->pc = 0x482b30u;
    SET_GPR_U64(ctx, 6, ~(GPR_U64(ctx, 19) | GPR_U64(ctx, 0)));
label_482b34:
    // 0x482b34: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x482b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_482b38:
    // 0x482b38: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x482b38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_482b3c:
    // 0x482b3c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x482b3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_482b40:
    // 0x482b40: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x482b40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_482b44:
    // 0x482b44: 0x8c850228  lw          $a1, 0x228($a0)
    ctx->pc = 0x482b44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 552)));
label_482b48:
    // 0x482b48: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x482b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_482b4c:
    // 0x482b4c: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x482b4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
label_482b50:
    // 0x482b50: 0xac850228  sw          $a1, 0x228($a0)
    ctx->pc = 0x482b50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 552), GPR_U32(ctx, 5));
label_482b54:
    // 0x482b54: 0x8c8400ac  lw          $a0, 0xAC($a0)
    ctx->pc = 0x482b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
label_482b58:
    // 0x482b58: 0x10830085  beq         $a0, $v1, . + 4 + (0x85 << 2)
label_482b5c:
    if (ctx->pc == 0x482B5Cu) {
        ctx->pc = 0x482B5Cu;
            // 0x482b5c: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x482B60u;
        goto label_482b60;
    }
    ctx->pc = 0x482B58u;
    {
        const bool branch_taken_0x482b58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x482B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x482B58u;
            // 0x482b5c: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x482b58) {
            ctx->pc = 0x482D70u;
            goto label_482d70;
        }
    }
    ctx->pc = 0x482B60u;
label_482b60:
    // 0x482b60: 0x8e4300e0  lw          $v1, 0xE0($s2)
    ctx->pc = 0x482b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 224)));
label_482b64:
    // 0x482b64: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x482b64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_482b68:
    // 0x482b68: 0x50200082  beql        $at, $zero, . + 4 + (0x82 << 2)
label_482b6c:
    if (ctx->pc == 0x482B6Cu) {
        ctx->pc = 0x482B6Cu;
            // 0x482b6c: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x482B70u;
        goto label_482b70;
    }
    ctx->pc = 0x482B68u;
    {
        const bool branch_taken_0x482b68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x482b68) {
            ctx->pc = 0x482B6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x482B68u;
            // 0x482b6c: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x482D74u;
            goto label_482d74;
        }
    }
    ctx->pc = 0x482B70u;
label_482b70:
    // 0x482b70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x482b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_482b74:
    // 0x482b74: 0xc04f278  jal         func_13C9E0
label_482b78:
    if (ctx->pc == 0x482B78u) {
        ctx->pc = 0x482B78u;
            // 0x482b78: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->pc = 0x482B7Cu;
        goto label_482b7c;
    }
    ctx->pc = 0x482B74u;
    SET_GPR_U32(ctx, 31, 0x482B7Cu);
    ctx->pc = 0x482B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x482B74u;
            // 0x482b78: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482B7Cu; }
        if (ctx->pc != 0x482B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482B7Cu; }
        if (ctx->pc != 0x482B7Cu) { return; }
    }
    ctx->pc = 0x482B7Cu;
label_482b7c:
    // 0x482b7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x482b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_482b80:
    // 0x482b80: 0xc04ce80  jal         func_133A00
label_482b84:
    if (ctx->pc == 0x482B84u) {
        ctx->pc = 0x482B84u;
            // 0x482b84: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x482B88u;
        goto label_482b88;
    }
    ctx->pc = 0x482B80u;
    SET_GPR_U32(ctx, 31, 0x482B88u);
    ctx->pc = 0x482B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x482B80u;
            // 0x482b84: 0x26450010  addiu       $a1, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482B88u; }
        if (ctx->pc != 0x482B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482B88u; }
        if (ctx->pc != 0x482B88u) { return; }
    }
    ctx->pc = 0x482B88u;
label_482b88:
    // 0x482b88: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x482b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_482b8c:
    // 0x482b8c: 0x9246004c  lbu         $a2, 0x4C($s2)
    ctx->pc = 0x482b8cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 76)));
label_482b90:
    // 0x482b90: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x482b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_482b94:
    // 0x482b94: 0x8e350000  lw          $s5, 0x0($s1)
    ctx->pc = 0x482b94u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_482b98:
    // 0x482b98: 0xc07698c  jal         func_1DA630
label_482b9c:
    if (ctx->pc == 0x482B9Cu) {
        ctx->pc = 0x482B9Cu;
            // 0x482b9c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x482BA0u;
        goto label_482ba0;
    }
    ctx->pc = 0x482B98u;
    SET_GPR_U32(ctx, 31, 0x482BA0u);
    ctx->pc = 0x482B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x482B98u;
            // 0x482b9c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482BA0u; }
        if (ctx->pc != 0x482BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482BA0u; }
        if (ctx->pc != 0x482BA0u) { return; }
    }
    ctx->pc = 0x482BA0u;
label_482ba0:
    // 0x482ba0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x482ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_482ba4:
    // 0x482ba4: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_482ba8:
    if (ctx->pc == 0x482BA8u) {
        ctx->pc = 0x482BACu;
        goto label_482bac;
    }
    ctx->pc = 0x482BA4u;
    {
        const bool branch_taken_0x482ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x482ba4) {
            ctx->pc = 0x482BB4u;
            goto label_482bb4;
        }
    }
    ctx->pc = 0x482BACu;
label_482bac:
    // 0x482bac: 0x10000036  b           . + 4 + (0x36 << 2)
label_482bb0:
    if (ctx->pc == 0x482BB0u) {
        ctx->pc = 0x482BB0u;
            // 0x482bb0: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x482BB4u;
        goto label_482bb4;
    }
    ctx->pc = 0x482BACu;
    {
        const bool branch_taken_0x482bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x482BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x482BACu;
            // 0x482bb0: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x482bac) {
            ctx->pc = 0x482C88u;
            goto label_482c88;
        }
    }
    ctx->pc = 0x482BB4u;
label_482bb4:
    // 0x482bb4: 0xc0576f4  jal         func_15DBD0
label_482bb8:
    if (ctx->pc == 0x482BB8u) {
        ctx->pc = 0x482BBCu;
        goto label_482bbc;
    }
    ctx->pc = 0x482BB4u;
    SET_GPR_U32(ctx, 31, 0x482BBCu);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482BBCu; }
        if (ctx->pc != 0x482BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482BBCu; }
        if (ctx->pc != 0x482BBCu) { return; }
    }
    ctx->pc = 0x482BBCu;
label_482bbc:
    // 0x482bbc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x482bbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_482bc0:
    // 0x482bc0: 0xc076984  jal         func_1DA610
label_482bc4:
    if (ctx->pc == 0x482BC4u) {
        ctx->pc = 0x482BC4u;
            // 0x482bc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x482BC8u;
        goto label_482bc8;
    }
    ctx->pc = 0x482BC0u;
    SET_GPR_U32(ctx, 31, 0x482BC8u);
    ctx->pc = 0x482BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x482BC0u;
            // 0x482bc4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482BC8u; }
        if (ctx->pc != 0x482BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482BC8u; }
        if (ctx->pc != 0x482BC8u) { return; }
    }
    ctx->pc = 0x482BC8u;
label_482bc8:
    // 0x482bc8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x482bc8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_482bcc:
    // 0x482bcc: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x482bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_482bd0:
    // 0x482bd0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x482bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_482bd4:
    // 0x482bd4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x482bd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_482bd8:
    // 0x482bd8: 0xc4420910  lwc1        $f2, 0x910($v0)
    ctx->pc = 0x482bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_482bdc:
    // 0x482bdc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x482bdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_482be0:
    // 0x482be0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x482be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_482be4:
    // 0x482be4: 0xc4410918  lwc1        $f1, 0x918($v0)
    ctx->pc = 0x482be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_482be8:
    // 0x482be8: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x482be8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_482bec:
    // 0x482bec: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x482becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_482bf0:
    // 0x482bf0: 0xc440091c  lwc1        $f0, 0x91C($v0)
    ctx->pc = 0x482bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_482bf4:
    // 0x482bf4: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x482bf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_482bf8:
    // 0x482bf8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x482bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_482bfc:
    // 0x482bfc: 0x8c420914  lw          $v0, 0x914($v0)
    ctx->pc = 0x482bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2324)));
label_482c00:
    // 0x482c00: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x482c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_482c04:
    // 0x482c04: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x482c04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
label_482c08:
    // 0x482c08: 0xc6a00004  lwc1        $f0, 0x4($s5)
    ctx->pc = 0x482c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_482c0c:
    // 0x482c0c: 0xc04cca0  jal         func_133280
label_482c10:
    if (ctx->pc == 0x482C10u) {
        ctx->pc = 0x482C10u;
            // 0x482c10: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->pc = 0x482C14u;
        goto label_482c14;
    }
    ctx->pc = 0x482C0Cu;
    SET_GPR_U32(ctx, 31, 0x482C14u);
    ctx->pc = 0x482C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x482C0Cu;
            // 0x482c10: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482C14u; }
        if (ctx->pc != 0x482C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482C14u; }
        if (ctx->pc != 0x482C14u) { return; }
    }
    ctx->pc = 0x482C14u;
label_482c14:
    // 0x482c14: 0xc076980  jal         func_1DA600
label_482c18:
    if (ctx->pc == 0x482C18u) {
        ctx->pc = 0x482C18u;
            // 0x482c18: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x482C1Cu;
        goto label_482c1c;
    }
    ctx->pc = 0x482C14u;
    SET_GPR_U32(ctx, 31, 0x482C1Cu);
    ctx->pc = 0x482C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x482C14u;
            // 0x482c18: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482C1Cu; }
        if (ctx->pc != 0x482C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482C1Cu; }
        if (ctx->pc != 0x482C1Cu) { return; }
    }
    ctx->pc = 0x482C1Cu;
label_482c1c:
    // 0x482c1c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x482c1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_482c20:
    // 0x482c20: 0xc04cc34  jal         func_1330D0
label_482c24:
    if (ctx->pc == 0x482C24u) {
        ctx->pc = 0x482C24u;
            // 0x482c24: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x482C28u;
        goto label_482c28;
    }
    ctx->pc = 0x482C20u;
    SET_GPR_U32(ctx, 31, 0x482C28u);
    ctx->pc = 0x482C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x482C20u;
            // 0x482c24: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482C28u; }
        if (ctx->pc != 0x482C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482C28u; }
        if (ctx->pc != 0x482C28u) { return; }
    }
    ctx->pc = 0x482C28u;
label_482c28:
    // 0x482c28: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x482c28u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_482c2c:
    // 0x482c2c: 0xc04c710  jal         func_131C40
label_482c30:
    if (ctx->pc == 0x482C30u) {
        ctx->pc = 0x482C30u;
            // 0x482c30: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x482C34u;
        goto label_482c34;
    }
    ctx->pc = 0x482C2Cu;
    SET_GPR_U32(ctx, 31, 0x482C34u);
    ctx->pc = 0x482C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x482C2Cu;
            // 0x482c30: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C40u;
    if (runtime->hasFunction(0x131C40u)) {
        auto targetFn = runtime->lookupFunction(0x131C40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482C34u; }
        if (ctx->pc != 0x482C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C40_0x131c40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482C34u; }
        if (ctx->pc != 0x482C34u) { return; }
    }
    ctx->pc = 0x482C34u;
label_482c34:
    // 0x482c34: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x482c34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_482c38:
    // 0x482c38: 0xc460fb20  lwc1        $f0, -0x4E0($v1)
    ctx->pc = 0x482c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294966048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_482c3c:
    // 0x482c3c: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x482c3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_482c40:
    // 0x482c40: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_482c44:
    if (ctx->pc == 0x482C44u) {
        ctx->pc = 0x482C44u;
            // 0x482c44: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x482C48u;
        goto label_482c48;
    }
    ctx->pc = 0x482C40u;
    {
        const bool branch_taken_0x482c40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x482c40) {
            ctx->pc = 0x482C44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x482C40u;
            // 0x482c44: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x482C50u;
            goto label_482c50;
        }
    }
    ctx->pc = 0x482C48u;
label_482c48:
    // 0x482c48: 0x1000000f  b           . + 4 + (0xF << 2)
label_482c4c:
    if (ctx->pc == 0x482C4Cu) {
        ctx->pc = 0x482C4Cu;
            // 0x482c4c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x482C50u;
        goto label_482c50;
    }
    ctx->pc = 0x482C48u;
    {
        const bool branch_taken_0x482c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x482C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x482C48u;
            // 0x482c4c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x482c48) {
            ctx->pc = 0x482C88u;
            goto label_482c88;
        }
    }
    ctx->pc = 0x482C50u;
label_482c50:
    // 0x482c50: 0xc07697c  jal         func_1DA5F0
label_482c54:
    if (ctx->pc == 0x482C54u) {
        ctx->pc = 0x482C58u;
        goto label_482c58;
    }
    ctx->pc = 0x482C50u;
    SET_GPR_U32(ctx, 31, 0x482C58u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482C58u; }
        if (ctx->pc != 0x482C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482C58u; }
        if (ctx->pc != 0x482C58u) { return; }
    }
    ctx->pc = 0x482C58u;
label_482c58:
    // 0x482c58: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x482c58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_482c5c:
    // 0x482c5c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x482c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_482c60:
    // 0x482c60: 0xc04cd60  jal         func_133580
label_482c64:
    if (ctx->pc == 0x482C64u) {
        ctx->pc = 0x482C64u;
            // 0x482c64: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x482C68u;
        goto label_482c68;
    }
    ctx->pc = 0x482C60u;
    SET_GPR_U32(ctx, 31, 0x482C68u);
    ctx->pc = 0x482C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x482C60u;
            // 0x482c64: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482C68u; }
        if (ctx->pc != 0x482C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482C68u; }
        if (ctx->pc != 0x482C68u) { return; }
    }
    ctx->pc = 0x482C68u;
label_482c68:
    // 0x482c68: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x482c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_482c6c:
    // 0x482c6c: 0xc04c650  jal         func_131940
label_482c70:
    if (ctx->pc == 0x482C70u) {
        ctx->pc = 0x482C70u;
            // 0x482c70: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x482C74u;
        goto label_482c74;
    }
    ctx->pc = 0x482C6Cu;
    SET_GPR_U32(ctx, 31, 0x482C74u);
    ctx->pc = 0x482C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x482C6Cu;
            // 0x482c70: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482C74u; }
        if (ctx->pc != 0x482C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482C74u; }
        if (ctx->pc != 0x482C74u) { return; }
    }
    ctx->pc = 0x482C74u;
label_482c74:
    // 0x482c74: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x482c74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_482c78:
    // 0x482c78: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x482c78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_482c7c:
    // 0x482c7c: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x482c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
label_482c80:
    // 0x482c80: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x482c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_482c84:
    // 0x482c84: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x482c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_482c88:
    // 0x482c88: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x482c88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_482c8c:
    // 0x482c8c: 0x10200038  beqz        $at, . + 4 + (0x38 << 2)
label_482c90:
    if (ctx->pc == 0x482C90u) {
        ctx->pc = 0x482C90u;
            // 0x482c90: 0xae430044  sw          $v1, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 3));
        ctx->pc = 0x482C94u;
        goto label_482c94;
    }
    ctx->pc = 0x482C8Cu;
    {
        const bool branch_taken_0x482c8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x482C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x482C8Cu;
            // 0x482c90: 0xae430044  sw          $v1, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x482c8c) {
            ctx->pc = 0x482D70u;
            goto label_482d70;
        }
    }
    ctx->pc = 0x482C94u;
label_482c94:
    // 0x482c94: 0x8e440228  lw          $a0, 0x228($s2)
    ctx->pc = 0x482c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 552)));
label_482c98:
    // 0x482c98: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x482c98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_482c9c:
    // 0x482c9c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x482c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_482ca0:
    // 0x482ca0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x482ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_482ca4:
    // 0x482ca4: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x482ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
label_482ca8:
    // 0x482ca8: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x482ca8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_482cac:
    // 0x482cac: 0x932025  or          $a0, $a0, $s3
    ctx->pc = 0x482cacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 19));
label_482cb0:
    // 0x482cb0: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x482cb0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_482cb4:
    // 0x482cb4: 0xae440228  sw          $a0, 0x228($s2)
    ctx->pc = 0x482cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 552), GPR_U32(ctx, 4));
label_482cb8:
    // 0x482cb8: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x482cb8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_482cbc:
    // 0x482cbc: 0x8caae3c0  lw          $t2, -0x1C40($a1)
    ctx->pc = 0x482cbcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
label_482cc0:
    // 0x482cc0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x482cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_482cc4:
    // 0x482cc4: 0x8c6de3d8  lw          $t5, -0x1C28($v1)
    ctx->pc = 0x482cc4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_482cc8:
    // 0x482cc8: 0x8c4ce360  lw          $t4, -0x1CA0($v0)
    ctx->pc = 0x482cc8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959968)));
label_482ccc:
    // 0x482ccc: 0xa5880  sll         $t3, $t2, 2
    ctx->pc = 0x482cccu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_482cd0:
    // 0x482cd0: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x482cd0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_482cd4:
    // 0x482cd4: 0x8ccae3b0  lw          $t2, -0x1C50($a2)
    ctx->pc = 0x482cd4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294960048)));
label_482cd8:
    // 0x482cd8: 0xd6980  sll         $t5, $t5, 6
    ctx->pc = 0x482cd8u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 6));
label_482cdc:
    // 0x482cdc: 0x18da021  addu        $s4, $t4, $t5
    ctx->pc = 0x482cdcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
label_482ce0:
    // 0x482ce0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x482ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_482ce4:
    // 0x482ce4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x482ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_482ce8:
    // 0x482ce8: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x482ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_482cec:
    // 0x482cec: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x482cecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_482cf0:
    // 0x482cf0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x482cf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_482cf4:
    // 0x482cf4: 0xad540000  sw          $s4, 0x0($t2)
    ctx->pc = 0x482cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 20));
label_482cf8:
    // 0x482cf8: 0x8d29e3d8  lw          $t1, -0x1C28($t1)
    ctx->pc = 0x482cf8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960088)));
label_482cfc:
    // 0x482cfc: 0x8d08e378  lw          $t0, -0x1C88($t0)
    ctx->pc = 0x482cfcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294959992)));
label_482d00:
    // 0x482d00: 0x8c84e3b8  lw          $a0, -0x1C48($a0)
    ctx->pc = 0x482d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960056)));
label_482d04:
    // 0x482d04: 0x94880  sll         $t1, $t1, 2
    ctx->pc = 0x482d04u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_482d08:
    // 0x482d08: 0x1099821  addu        $s3, $t0, $t1
    ctx->pc = 0x482d08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_482d0c:
    // 0x482d0c: 0x8b4021  addu        $t0, $a0, $t3
    ctx->pc = 0x482d0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_482d10:
    // 0x482d10: 0xad130000  sw          $s3, 0x0($t0)
    ctx->pc = 0x482d10u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 19));
label_482d14:
    // 0x482d14: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x482d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_482d18:
    // 0x482d18: 0x8e280028  lw          $t0, 0x28($s1)
    ctx->pc = 0x482d18u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_482d1c:
    // 0x482d1c: 0x8ce7e3d8  lw          $a3, -0x1C28($a3)
    ctx->pc = 0x482d1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294960088)));
label_482d20:
    // 0x482d20: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x482d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_482d24:
    // 0x482d24: 0xac43e3c0  sw          $v1, -0x1C40($v0)
    ctx->pc = 0x482d24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 3));
label_482d28:
    // 0x482d28: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x482d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_482d2c:
    // 0x482d2c: 0xaca2e3d8  sw          $v0, -0x1C28($a1)
    ctx->pc = 0x482d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960088), GPR_U32(ctx, 2));
label_482d30:
    // 0x482d30: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x482d30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_482d34:
    // 0x482d34: 0xc04e4a4  jal         func_139290
label_482d38:
    if (ctx->pc == 0x482D38u) {
        ctx->pc = 0x482D38u;
            // 0x482d38: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x482D3Cu;
        goto label_482d3c;
    }
    ctx->pc = 0x482D34u;
    SET_GPR_U32(ctx, 31, 0x482D3Cu);
    ctx->pc = 0x482D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x482D34u;
            // 0x482d38: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482D3Cu; }
        if (ctx->pc != 0x482D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482D3Cu; }
        if (ctx->pc != 0x482D3Cu) { return; }
    }
    ctx->pc = 0x482D3Cu;
label_482d3c:
    // 0x482d3c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x482d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_482d40:
    // 0x482d40: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x482d40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_482d44:
    // 0x482d44: 0xc04cd60  jal         func_133580
label_482d48:
    if (ctx->pc == 0x482D48u) {
        ctx->pc = 0x482D48u;
            // 0x482d48: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x482D4Cu;
        goto label_482d4c;
    }
    ctx->pc = 0x482D44u;
    SET_GPR_U32(ctx, 31, 0x482D4Cu);
    ctx->pc = 0x482D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x482D44u;
            // 0x482d48: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482D4Cu; }
        if (ctx->pc != 0x482D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482D4Cu; }
        if (ctx->pc != 0x482D4Cu) { return; }
    }
    ctx->pc = 0x482D4Cu;
label_482d4c:
    // 0x482d4c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x482d4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_482d50:
    // 0x482d50: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x482d50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_482d54:
    // 0x482d54: 0x320f809  jalr        $t9
label_482d58:
    if (ctx->pc == 0x482D58u) {
        ctx->pc = 0x482D58u;
            // 0x482d58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x482D5Cu;
        goto label_482d5c;
    }
    ctx->pc = 0x482D54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x482D5Cu);
        ctx->pc = 0x482D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x482D54u;
            // 0x482d58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x482D5Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x482D5Cu; }
            if (ctx->pc != 0x482D5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x482D5Cu;
label_482d5c:
    // 0x482d5c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x482d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_482d60:
    // 0x482d60: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x482d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_482d64:
    // 0x482d64: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x482d64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_482d68:
    // 0x482d68: 0xc054fd4  jal         func_153F50
label_482d6c:
    if (ctx->pc == 0x482D6Cu) {
        ctx->pc = 0x482D6Cu;
            // 0x482d6c: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x482D70u;
        goto label_482d70;
    }
    ctx->pc = 0x482D68u;
    SET_GPR_U32(ctx, 31, 0x482D70u);
    ctx->pc = 0x482D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x482D68u;
            // 0x482d6c: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482D70u; }
        if (ctx->pc != 0x482D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482D70u; }
        if (ctx->pc != 0x482D70u) { return; }
    }
    ctx->pc = 0x482D70u;
label_482d70:
    // 0x482d70: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x482d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_482d74:
    // 0x482d74: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x482d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_482d78:
    // 0x482d78: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x482d78u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_482d7c:
    // 0x482d7c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x482d7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_482d80:
    // 0x482d80: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x482d80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_482d84:
    // 0x482d84: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x482d84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_482d88:
    // 0x482d88: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x482d88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_482d8c:
    // 0x482d8c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x482d8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_482d90:
    // 0x482d90: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x482d90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_482d94:
    // 0x482d94: 0x3e00008  jr          $ra
label_482d98:
    if (ctx->pc == 0x482D98u) {
        ctx->pc = 0x482D98u;
            // 0x482d98: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x482D9Cu;
        goto label_482d9c;
    }
    ctx->pc = 0x482D94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x482D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x482D94u;
            // 0x482d98: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x482D9Cu;
label_482d9c:
    // 0x482d9c: 0x0  nop
    ctx->pc = 0x482d9cu;
    // NOP
label_482da0:
    // 0x482da0: 0x80f49d0  j           func_3D2740
label_482da4:
    if (ctx->pc == 0x482DA4u) {
        ctx->pc = 0x482DA8u;
        goto label_482da8;
    }
    ctx->pc = 0x482DA0u;
    ctx->pc = 0x3D2740u;
    if (runtime->hasFunction(0x3D2740u)) {
        auto targetFn = runtime->lookupFunction(0x3D2740u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_003D2740_0x3d2740(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x482DA8u;
label_482da8:
    // 0x482da8: 0x0  nop
    ctx->pc = 0x482da8u;
    // NOP
label_482dac:
    // 0x482dac: 0x0  nop
    ctx->pc = 0x482dacu;
    // NOP
label_482db0:
    // 0x482db0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x482db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_482db4:
    // 0x482db4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x482db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_482db8:
    // 0x482db8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x482db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_482dbc:
    // 0x482dbc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x482dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_482dc0:
    // 0x482dc0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x482dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_482dc4:
    // 0x482dc4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x482dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_482dc8:
    // 0x482dc8: 0x9083022c  lbu         $v1, 0x22C($a0)
    ctx->pc = 0x482dc8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 556)));
label_482dcc:
    // 0x482dcc: 0x1460002c  bnez        $v1, . + 4 + (0x2C << 2)
label_482dd0:
    if (ctx->pc == 0x482DD0u) {
        ctx->pc = 0x482DD0u;
            // 0x482dd0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x482DD4u;
        goto label_482dd4;
    }
    ctx->pc = 0x482DCCu;
    {
        const bool branch_taken_0x482dcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x482DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x482DCCu;
            // 0x482dd0: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x482dcc) {
            ctx->pc = 0x482E80u;
            goto label_482e80;
        }
    }
    ctx->pc = 0x482DD4u;
label_482dd4:
    // 0x482dd4: 0x8e430228  lw          $v1, 0x228($s2)
    ctx->pc = 0x482dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 552)));
label_482dd8:
    // 0x482dd8: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_482ddc:
    if (ctx->pc == 0x482DDCu) {
        ctx->pc = 0x482DDCu;
            // 0x482ddc: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x482DE0u;
        goto label_482de0;
    }
    ctx->pc = 0x482DD8u;
    {
        const bool branch_taken_0x482dd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x482dd8) {
            ctx->pc = 0x482DDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x482DD8u;
            // 0x482ddc: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x482DECu;
            goto label_482dec;
        }
    }
    ctx->pc = 0x482DE0u;
label_482de0:
    // 0x482de0: 0x10000028  b           . + 4 + (0x28 << 2)
label_482de4:
    if (ctx->pc == 0x482DE4u) {
        ctx->pc = 0x482DE4u;
            // 0x482de4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x482DE8u;
        goto label_482de8;
    }
    ctx->pc = 0x482DE0u;
    {
        const bool branch_taken_0x482de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x482DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x482DE0u;
            // 0x482de4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x482de0) {
            ctx->pc = 0x482E84u;
            goto label_482e84;
        }
    }
    ctx->pc = 0x482DE8u;
label_482de8:
    // 0x482de8: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x482de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_482dec:
    // 0x482dec: 0xc0baaa0  jal         func_2EAA80
label_482df0:
    if (ctx->pc == 0x482DF0u) {
        ctx->pc = 0x482DF0u;
            // 0x482df0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x482DF4u;
        goto label_482df4;
    }
    ctx->pc = 0x482DECu;
    SET_GPR_U32(ctx, 31, 0x482DF4u);
    ctx->pc = 0x482DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x482DECu;
            // 0x482df0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EAA80u;
    if (runtime->hasFunction(0x2EAA80u)) {
        auto targetFn = runtime->lookupFunction(0x2EAA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482DF4u; }
        if (ctx->pc != 0x482DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EAA80_0x2eaa80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482DF4u; }
        if (ctx->pc != 0x482DF4u) { return; }
    }
    ctx->pc = 0x482DF4u;
label_482df4:
    // 0x482df4: 0x9250004c  lbu         $s0, 0x4C($s2)
    ctx->pc = 0x482df4u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 76)));
label_482df8:
    // 0x482df8: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x482df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_482dfc:
    // 0x482dfc: 0xc040180  jal         func_100600
label_482e00:
    if (ctx->pc == 0x482E00u) {
        ctx->pc = 0x482E00u;
            // 0x482e00: 0x26530010  addiu       $s3, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->pc = 0x482E04u;
        goto label_482e04;
    }
    ctx->pc = 0x482DFCu;
    SET_GPR_U32(ctx, 31, 0x482E04u);
    ctx->pc = 0x482E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x482DFCu;
            // 0x482e00: 0x26530010  addiu       $s3, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482E04u; }
        if (ctx->pc != 0x482E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482E04u; }
        if (ctx->pc != 0x482E04u) { return; }
    }
    ctx->pc = 0x482E04u;
label_482e04:
    // 0x482e04: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_482e08:
    if (ctx->pc == 0x482E08u) {
        ctx->pc = 0x482E08u;
            // 0x482e08: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x482E0Cu;
        goto label_482e0c;
    }
    ctx->pc = 0x482E04u;
    {
        const bool branch_taken_0x482e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x482E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x482E04u;
            // 0x482e08: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x482e04) {
            ctx->pc = 0x482E78u;
            goto label_482e78;
        }
    }
    ctx->pc = 0x482E0Cu;
label_482e0c:
    // 0x482e0c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x482e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_482e10:
    // 0x482e10: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x482e10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_482e14:
    // 0x482e14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x482e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_482e18:
    // 0x482e18: 0x34458a88  ori         $a1, $v0, 0x8A88
    ctx->pc = 0x482e18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
label_482e1c:
    // 0x482e1c: 0xc10ca68  jal         func_4329A0
label_482e20:
    if (ctx->pc == 0x482E20u) {
        ctx->pc = 0x482E20u;
            // 0x482e20: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x482E24u;
        goto label_482e24;
    }
    ctx->pc = 0x482E1Cu;
    SET_GPR_U32(ctx, 31, 0x482E24u);
    ctx->pc = 0x482E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x482E1Cu;
            // 0x482e20: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482E24u; }
        if (ctx->pc != 0x482E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482E24u; }
        if (ctx->pc != 0x482E24u) { return; }
    }
    ctx->pc = 0x482E24u;
label_482e24:
    // 0x482e24: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x482e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_482e28:
    // 0x482e28: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x482e28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_482e2c:
    // 0x482e2c: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x482e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_482e30:
    // 0x482e30: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x482e30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_482e34:
    // 0x482e34: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x482e34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_482e38:
    // 0x482e38: 0x26240060  addiu       $a0, $s1, 0x60
    ctx->pc = 0x482e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
label_482e3c:
    // 0x482e3c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x482e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_482e40:
    // 0x482e40: 0x244276a0  addiu       $v0, $v0, 0x76A0
    ctx->pc = 0x482e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30368));
label_482e44:
    // 0x482e44: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x482e44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_482e48:
    // 0x482e48: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x482e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_482e4c:
    // 0x482e4c: 0xae220070  sw          $v0, 0x70($s1)
    ctx->pc = 0x482e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
label_482e50:
    // 0x482e50: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x482e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_482e54:
    // 0x482e54: 0xc440da20  lwc1        $f0, -0x25E0($v0)
    ctx->pc = 0x482e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294957600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_482e58:
    // 0x482e58: 0xe6200074  swc1        $f0, 0x74($s1)
    ctx->pc = 0x482e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
label_482e5c:
    // 0x482e5c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x482e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_482e60:
    // 0x482e60: 0xae230078  sw          $v1, 0x78($s1)
    ctx->pc = 0x482e60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 3));
label_482e64:
    // 0x482e64: 0xae22007c  sw          $v0, 0x7C($s1)
    ctx->pc = 0x482e64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 2));
label_482e68:
    // 0x482e68: 0xc04cc04  jal         func_133010
label_482e6c:
    if (ctx->pc == 0x482E6Cu) {
        ctx->pc = 0x482E6Cu;
            // 0x482e6c: 0xa2300080  sb          $s0, 0x80($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 128), (uint8_t)GPR_U32(ctx, 16));
        ctx->pc = 0x482E70u;
        goto label_482e70;
    }
    ctx->pc = 0x482E68u;
    SET_GPR_U32(ctx, 31, 0x482E70u);
    ctx->pc = 0x482E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x482E68u;
            // 0x482e6c: 0xa2300080  sb          $s0, 0x80($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 128), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482E70u; }
        if (ctx->pc != 0x482E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482E70u; }
        if (ctx->pc != 0x482E70u) { return; }
    }
    ctx->pc = 0x482E70u;
label_482e70:
    // 0x482e70: 0xc6200074  lwc1        $f0, 0x74($s1)
    ctx->pc = 0x482e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_482e74:
    // 0x482e74: 0xe6200070  swc1        $f0, 0x70($s1)
    ctx->pc = 0x482e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
label_482e78:
    // 0x482e78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x482e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_482e7c:
    // 0x482e7c: 0xa243022c  sb          $v1, 0x22C($s2)
    ctx->pc = 0x482e7cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 556), (uint8_t)GPR_U32(ctx, 3));
label_482e80:
    // 0x482e80: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x482e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_482e84:
    // 0x482e84: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x482e84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_482e88:
    // 0x482e88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x482e88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_482e8c:
    // 0x482e8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x482e8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_482e90:
    // 0x482e90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x482e90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_482e94:
    // 0x482e94: 0x3e00008  jr          $ra
label_482e98:
    if (ctx->pc == 0x482E98u) {
        ctx->pc = 0x482E98u;
            // 0x482e98: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x482E9Cu;
        goto label_482e9c;
    }
    ctx->pc = 0x482E94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x482E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x482E94u;
            // 0x482e98: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x482E9Cu;
label_482e9c:
    // 0x482e9c: 0x0  nop
    ctx->pc = 0x482e9cu;
    // NOP
label_482ea0:
    // 0x482ea0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x482ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_482ea4:
    // 0x482ea4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x482ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_482ea8:
    // 0x482ea8: 0x9083022c  lbu         $v1, 0x22C($a0)
    ctx->pc = 0x482ea8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 556)));
label_482eac:
    // 0x482eac: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
label_482eb0:
    if (ctx->pc == 0x482EB0u) {
        ctx->pc = 0x482EB0u;
            // 0x482eb0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x482EB4u;
        goto label_482eb4;
    }
    ctx->pc = 0x482EACu;
    {
        const bool branch_taken_0x482eac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x482eac) {
            ctx->pc = 0x482EB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x482EACu;
            // 0x482eb0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x482ED4u;
            goto label_482ed4;
        }
    }
    ctx->pc = 0x482EB4u;
label_482eb4:
    // 0x482eb4: 0x8c830228  lw          $v1, 0x228($a0)
    ctx->pc = 0x482eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 552)));
label_482eb8:
    // 0x482eb8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_482ebc:
    if (ctx->pc == 0x482EBCu) {
        ctx->pc = 0x482EC0u;
        goto label_482ec0;
    }
    ctx->pc = 0x482EB8u;
    {
        const bool branch_taken_0x482eb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x482eb8) {
            ctx->pc = 0x482EC8u;
            goto label_482ec8;
        }
    }
    ctx->pc = 0x482EC0u;
label_482ec0:
    // 0x482ec0: 0x10000003  b           . + 4 + (0x3 << 2)
label_482ec4:
    if (ctx->pc == 0x482EC4u) {
        ctx->pc = 0x482EC8u;
        goto label_482ec8;
    }
    ctx->pc = 0x482EC0u;
    {
        const bool branch_taken_0x482ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x482ec0) {
            ctx->pc = 0x482ED0u;
            goto label_482ed0;
        }
    }
    ctx->pc = 0x482EC8u;
label_482ec8:
    // 0x482ec8: 0xc0e35e0  jal         func_38D780
label_482ecc:
    if (ctx->pc == 0x482ECCu) {
        ctx->pc = 0x482ED0u;
        goto label_482ed0;
    }
    ctx->pc = 0x482EC8u;
    SET_GPR_U32(ctx, 31, 0x482ED0u);
    ctx->pc = 0x38D780u;
    if (runtime->hasFunction(0x38D780u)) {
        auto targetFn = runtime->lookupFunction(0x38D780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482ED0u; }
        if (ctx->pc != 0x482ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D780_0x38d780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482ED0u; }
        if (ctx->pc != 0x482ED0u) { return; }
    }
    ctx->pc = 0x482ED0u;
label_482ed0:
    // 0x482ed0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x482ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_482ed4:
    // 0x482ed4: 0x3e00008  jr          $ra
label_482ed8:
    if (ctx->pc == 0x482ED8u) {
        ctx->pc = 0x482ED8u;
            // 0x482ed8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x482EDCu;
        goto label_482edc;
    }
    ctx->pc = 0x482ED4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x482ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x482ED4u;
            // 0x482ed8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x482EDCu;
label_482edc:
    // 0x482edc: 0x0  nop
    ctx->pc = 0x482edcu;
    // NOP
label_482ee0:
    // 0x482ee0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x482ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_482ee4:
    // 0x482ee4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x482ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_482ee8:
    // 0x482ee8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x482ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_482eec:
    // 0x482eec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x482eecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_482ef0:
    // 0x482ef0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x482ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_482ef4:
    // 0x482ef4: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x482ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_482ef8:
    // 0x482ef8: 0xc4810220  lwc1        $f1, 0x220($a0)
    ctx->pc = 0x482ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_482efc:
    // 0x482efc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x482efcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_482f00:
    // 0x482f00: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x482f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_482f04:
    // 0x482f04: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x482f04u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_482f08:
    // 0x482f08: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x482f08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_482f0c:
    // 0x482f0c: 0x45000033  bc1f        . + 4 + (0x33 << 2)
label_482f10:
    if (ctx->pc == 0x482F10u) {
        ctx->pc = 0x482F10u;
            // 0x482f10: 0xe4810220  swc1        $f1, 0x220($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 544), bits); }
        ctx->pc = 0x482F14u;
        goto label_482f14;
    }
    ctx->pc = 0x482F0Cu;
    {
        const bool branch_taken_0x482f0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x482F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x482F0Cu;
            // 0x482f10: 0xe4810220  swc1        $f1, 0x220($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 544), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x482f0c) {
            ctx->pc = 0x482FDCu;
            goto label_482fdc;
        }
    }
    ctx->pc = 0x482F14u;
label_482f14:
    // 0x482f14: 0xc0e32a4  jal         func_38CA90
label_482f18:
    if (ctx->pc == 0x482F18u) {
        ctx->pc = 0x482F18u;
            // 0x482f18: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x482F1Cu;
        goto label_482f1c;
    }
    ctx->pc = 0x482F14u;
    SET_GPR_U32(ctx, 31, 0x482F1Cu);
    ctx->pc = 0x482F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x482F14u;
            // 0x482f18: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38CA90u;
    if (runtime->hasFunction(0x38CA90u)) {
        auto targetFn = runtime->lookupFunction(0x38CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482F1Cu; }
        if (ctx->pc != 0x482F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038CA90_0x38ca90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482F1Cu; }
        if (ctx->pc != 0x482F1Cu) { return; }
    }
    ctx->pc = 0x482F1Cu;
label_482f1c:
    // 0x482f1c: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x482f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_482f20:
    // 0x482f20: 0xc0e082c  jal         func_3820B0
label_482f24:
    if (ctx->pc == 0x482F24u) {
        ctx->pc = 0x482F24u;
            // 0x482f24: 0xae0000b4  sw          $zero, 0xB4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
        ctx->pc = 0x482F28u;
        goto label_482f28;
    }
    ctx->pc = 0x482F20u;
    SET_GPR_U32(ctx, 31, 0x482F28u);
    ctx->pc = 0x482F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x482F20u;
            // 0x482f24: 0xae0000b4  sw          $zero, 0xB4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3820B0u;
    if (runtime->hasFunction(0x3820B0u)) {
        auto targetFn = runtime->lookupFunction(0x3820B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482F28u; }
        if (ctx->pc != 0x482F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003820B0_0x3820b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482F28u; }
        if (ctx->pc != 0x482F28u) { return; }
    }
    ctx->pc = 0x482F28u;
label_482f28:
    // 0x482f28: 0xc0e0828  jal         func_3820A0
label_482f2c:
    if (ctx->pc == 0x482F2Cu) {
        ctx->pc = 0x482F2Cu;
            // 0x482f2c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x482F30u;
        goto label_482f30;
    }
    ctx->pc = 0x482F28u;
    SET_GPR_U32(ctx, 31, 0x482F30u);
    ctx->pc = 0x482F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x482F28u;
            // 0x482f2c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3820A0u;
    if (runtime->hasFunction(0x3820A0u)) {
        auto targetFn = runtime->lookupFunction(0x3820A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482F30u; }
        if (ctx->pc != 0x482F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003820A0_0x3820a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482F30u; }
        if (ctx->pc != 0x482F30u) { return; }
    }
    ctx->pc = 0x482F30u;
label_482f30:
    // 0x482f30: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x482f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_482f34:
    // 0x482f34: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_482f38:
    if (ctx->pc == 0x482F38u) {
        ctx->pc = 0x482F38u;
            // 0x482f38: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x482F3Cu;
        goto label_482f3c;
    }
    ctx->pc = 0x482F34u;
    {
        const bool branch_taken_0x482f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x482f34) {
            ctx->pc = 0x482F38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x482F34u;
            // 0x482f38: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x482F6Cu;
            goto label_482f6c;
        }
    }
    ctx->pc = 0x482F3Cu;
label_482f3c:
    // 0x482f3c: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x482f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_482f40:
    // 0x482f40: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x482f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_482f44:
    // 0x482f44: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_482f48:
    if (ctx->pc == 0x482F48u) {
        ctx->pc = 0x482F4Cu;
        goto label_482f4c;
    }
    ctx->pc = 0x482F44u;
    {
        const bool branch_taken_0x482f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x482f44) {
            ctx->pc = 0x482F68u;
            goto label_482f68;
        }
    }
    ctx->pc = 0x482F4Cu;
label_482f4c:
    // 0x482f4c: 0xc0dc408  jal         func_371020
label_482f50:
    if (ctx->pc == 0x482F50u) {
        ctx->pc = 0x482F50u;
            // 0x482f50: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x482F54u;
        goto label_482f54;
    }
    ctx->pc = 0x482F4Cu;
    SET_GPR_U32(ctx, 31, 0x482F54u);
    ctx->pc = 0x482F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x482F4Cu;
            // 0x482f50: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482F54u; }
        if (ctx->pc != 0x482F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482F54u; }
        if (ctx->pc != 0x482F54u) { return; }
    }
    ctx->pc = 0x482F54u;
label_482f54:
    // 0x482f54: 0xc0e0824  jal         func_382090
label_482f58:
    if (ctx->pc == 0x482F58u) {
        ctx->pc = 0x482F58u;
            // 0x482f58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x482F5Cu;
        goto label_482f5c;
    }
    ctx->pc = 0x482F54u;
    SET_GPR_U32(ctx, 31, 0x482F5Cu);
    ctx->pc = 0x482F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x482F54u;
            // 0x482f58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382090u;
    if (runtime->hasFunction(0x382090u)) {
        auto targetFn = runtime->lookupFunction(0x382090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482F5Cu; }
        if (ctx->pc != 0x482F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382090_0x382090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482F5Cu; }
        if (ctx->pc != 0x482F5Cu) { return; }
    }
    ctx->pc = 0x482F5Cu;
label_482f5c:
    // 0x482f5c: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x482f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_482f60:
    // 0x482f60: 0xc0e081c  jal         func_382070
label_482f64:
    if (ctx->pc == 0x482F64u) {
        ctx->pc = 0x482F64u;
            // 0x482f64: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x482F68u;
        goto label_482f68;
    }
    ctx->pc = 0x482F60u;
    SET_GPR_U32(ctx, 31, 0x482F68u);
    ctx->pc = 0x482F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x482F60u;
            // 0x482f64: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382070u;
    if (runtime->hasFunction(0x382070u)) {
        auto targetFn = runtime->lookupFunction(0x382070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482F68u; }
        if (ctx->pc != 0x482F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382070_0x382070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482F68u; }
        if (ctx->pc != 0x482F68u) { return; }
    }
    ctx->pc = 0x482F68u;
label_482f68:
    // 0x482f68: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x482f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_482f6c:
    // 0x482f6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x482f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_482f70:
    // 0x482f70: 0xc0e080c  jal         func_382030
label_482f74:
    if (ctx->pc == 0x482F74u) {
        ctx->pc = 0x482F74u;
            // 0x482f74: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x482F78u;
        goto label_482f78;
    }
    ctx->pc = 0x482F70u;
    SET_GPR_U32(ctx, 31, 0x482F78u);
    ctx->pc = 0x482F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x482F70u;
            // 0x482f74: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382030u;
    if (runtime->hasFunction(0x382030u)) {
        auto targetFn = runtime->lookupFunction(0x382030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482F78u; }
        if (ctx->pc != 0x482F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382030_0x382030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482F78u; }
        if (ctx->pc != 0x482F78u) { return; }
    }
    ctx->pc = 0x482F78u;
label_482f78:
    // 0x482f78: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x482f78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_482f7c:
    // 0x482f7c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x482f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_482f80:
    // 0x482f80: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x482f80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_482f84:
    // 0x482f84: 0xc08914c  jal         func_224530
label_482f88:
    if (ctx->pc == 0x482F88u) {
        ctx->pc = 0x482F88u;
            // 0x482f88: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x482F8Cu;
        goto label_482f8c;
    }
    ctx->pc = 0x482F84u;
    SET_GPR_U32(ctx, 31, 0x482F8Cu);
    ctx->pc = 0x482F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x482F84u;
            // 0x482f88: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482F8Cu; }
        if (ctx->pc != 0x482F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482F8Cu; }
        if (ctx->pc != 0x482F8Cu) { return; }
    }
    ctx->pc = 0x482F8Cu;
label_482f8c:
    // 0x482f8c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x482f8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_482f90:
    // 0x482f90: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x482f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_482f94:
    // 0x482f94: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x482f94u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_482f98:
    // 0x482f98: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x482f98u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_482f9c:
    // 0x482f9c: 0xc0b6df0  jal         func_2DB7C0
label_482fa0:
    if (ctx->pc == 0x482FA0u) {
        ctx->pc = 0x482FA0u;
            // 0x482fa0: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x482FA4u;
        goto label_482fa4;
    }
    ctx->pc = 0x482F9Cu;
    SET_GPR_U32(ctx, 31, 0x482FA4u);
    ctx->pc = 0x482FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x482F9Cu;
            // 0x482fa0: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7C0u;
    if (runtime->hasFunction(0x2DB7C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482FA4u; }
        if (ctx->pc != 0x482FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB7C0_0x2db7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482FA4u; }
        if (ctx->pc != 0x482FA4u) { return; }
    }
    ctx->pc = 0x482FA4u;
label_482fa4:
    // 0x482fa4: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x482fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_482fa8:
    // 0x482fa8: 0xc0e07f8  jal         func_381FE0
label_482fac:
    if (ctx->pc == 0x482FACu) {
        ctx->pc = 0x482FACu;
            // 0x482fac: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x482FB0u;
        goto label_482fb0;
    }
    ctx->pc = 0x482FA8u;
    SET_GPR_U32(ctx, 31, 0x482FB0u);
    ctx->pc = 0x482FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x482FA8u;
            // 0x482fac: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x381FE0u;
    if (runtime->hasFunction(0x381FE0u)) {
        auto targetFn = runtime->lookupFunction(0x381FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482FB0u; }
        if (ctx->pc != 0x482FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00381FE0_0x381fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482FB0u; }
        if (ctx->pc != 0x482FB0u) { return; }
    }
    ctx->pc = 0x482FB0u;
label_482fb0:
    // 0x482fb0: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x482fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_482fb4:
    // 0x482fb4: 0xc0dc3f4  jal         func_370FD0
label_482fb8:
    if (ctx->pc == 0x482FB8u) {
        ctx->pc = 0x482FB8u;
            // 0x482fb8: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x482FBCu;
        goto label_482fbc;
    }
    ctx->pc = 0x482FB4u;
    SET_GPR_U32(ctx, 31, 0x482FBCu);
    ctx->pc = 0x482FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x482FB4u;
            // 0x482fb8: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x370FD0u;
    if (runtime->hasFunction(0x370FD0u)) {
        auto targetFn = runtime->lookupFunction(0x370FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482FBCu; }
        if (ctx->pc != 0x482FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00370FD0_0x370fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482FBCu; }
        if (ctx->pc != 0x482FBCu) { return; }
    }
    ctx->pc = 0x482FBCu;
label_482fbc:
    // 0x482fbc: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x482fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_482fc0:
    // 0x482fc0: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x482fc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_482fc4:
    // 0x482fc4: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
label_482fc8:
    if (ctx->pc == 0x482FC8u) {
        ctx->pc = 0x482FC8u;
            // 0x482fc8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x482FCCu;
        goto label_482fcc;
    }
    ctx->pc = 0x482FC4u;
    {
        const bool branch_taken_0x482fc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x482fc4) {
            ctx->pc = 0x482FC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x482FC4u;
            // 0x482fc8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x482FE0u;
            goto label_482fe0;
        }
    }
    ctx->pc = 0x482FCCu;
label_482fcc:
    // 0x482fcc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x482fccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_482fd0:
    // 0x482fd0: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x482fd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_482fd4:
    // 0x482fd4: 0x320f809  jalr        $t9
label_482fd8:
    if (ctx->pc == 0x482FD8u) {
        ctx->pc = 0x482FD8u;
            // 0x482fd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x482FDCu;
        goto label_482fdc;
    }
    ctx->pc = 0x482FD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x482FDCu);
        ctx->pc = 0x482FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x482FD4u;
            // 0x482fd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x482FDCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x482FDCu; }
            if (ctx->pc != 0x482FDCu) { return; }
        }
        }
    }
    ctx->pc = 0x482FDCu;
label_482fdc:
    // 0x482fdc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x482fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_482fe0:
    // 0x482fe0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x482fe0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_482fe4:
    // 0x482fe4: 0x3e00008  jr          $ra
label_482fe8:
    if (ctx->pc == 0x482FE8u) {
        ctx->pc = 0x482FE8u;
            // 0x482fe8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x482FECu;
        goto label_482fec;
    }
    ctx->pc = 0x482FE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x482FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x482FE4u;
            // 0x482fe8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x482FECu;
label_482fec:
    // 0x482fec: 0x0  nop
    ctx->pc = 0x482fecu;
    // NOP
label_482ff0:
    // 0x482ff0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x482ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_482ff4:
    // 0x482ff4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x482ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_482ff8:
    // 0x482ff8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x482ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_482ffc:
    // 0x482ffc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x482ffcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_483000:
    // 0x483000: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x483000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_483004:
    // 0x483004: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x483004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_483008:
    // 0x483008: 0xc4810220  lwc1        $f1, 0x220($a0)
    ctx->pc = 0x483008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48300c:
    // 0x48300c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x48300cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_483010:
    // 0x483010: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x483010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_483014:
    // 0x483014: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x483014u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_483018:
    // 0x483018: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x483018u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_48301c:
    // 0x48301c: 0x45000033  bc1f        . + 4 + (0x33 << 2)
label_483020:
    if (ctx->pc == 0x483020u) {
        ctx->pc = 0x483020u;
            // 0x483020: 0xe4810220  swc1        $f1, 0x220($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 544), bits); }
        ctx->pc = 0x483024u;
        goto label_483024;
    }
    ctx->pc = 0x48301Cu;
    {
        const bool branch_taken_0x48301c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x483020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48301Cu;
            // 0x483020: 0xe4810220  swc1        $f1, 0x220($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 544), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x48301c) {
            ctx->pc = 0x4830ECu;
            goto label_4830ec;
        }
    }
    ctx->pc = 0x483024u;
label_483024:
    // 0x483024: 0xc0e32a4  jal         func_38CA90
label_483028:
    if (ctx->pc == 0x483028u) {
        ctx->pc = 0x483028u;
            // 0x483028: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x48302Cu;
        goto label_48302c;
    }
    ctx->pc = 0x483024u;
    SET_GPR_U32(ctx, 31, 0x48302Cu);
    ctx->pc = 0x483028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x483024u;
            // 0x483028: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38CA90u;
    if (runtime->hasFunction(0x38CA90u)) {
        auto targetFn = runtime->lookupFunction(0x38CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48302Cu; }
        if (ctx->pc != 0x48302Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038CA90_0x38ca90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48302Cu; }
        if (ctx->pc != 0x48302Cu) { return; }
    }
    ctx->pc = 0x48302Cu;
label_48302c:
    // 0x48302c: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x48302cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_483030:
    // 0x483030: 0xc0e082c  jal         func_3820B0
label_483034:
    if (ctx->pc == 0x483034u) {
        ctx->pc = 0x483034u;
            // 0x483034: 0xae0000b4  sw          $zero, 0xB4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
        ctx->pc = 0x483038u;
        goto label_483038;
    }
    ctx->pc = 0x483030u;
    SET_GPR_U32(ctx, 31, 0x483038u);
    ctx->pc = 0x483034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x483030u;
            // 0x483034: 0xae0000b4  sw          $zero, 0xB4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3820B0u;
    if (runtime->hasFunction(0x3820B0u)) {
        auto targetFn = runtime->lookupFunction(0x3820B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483038u; }
        if (ctx->pc != 0x483038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003820B0_0x3820b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483038u; }
        if (ctx->pc != 0x483038u) { return; }
    }
    ctx->pc = 0x483038u;
label_483038:
    // 0x483038: 0xc0e0828  jal         func_3820A0
label_48303c:
    if (ctx->pc == 0x48303Cu) {
        ctx->pc = 0x48303Cu;
            // 0x48303c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x483040u;
        goto label_483040;
    }
    ctx->pc = 0x483038u;
    SET_GPR_U32(ctx, 31, 0x483040u);
    ctx->pc = 0x48303Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x483038u;
            // 0x48303c: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3820A0u;
    if (runtime->hasFunction(0x3820A0u)) {
        auto targetFn = runtime->lookupFunction(0x3820A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483040u; }
        if (ctx->pc != 0x483040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003820A0_0x3820a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483040u; }
        if (ctx->pc != 0x483040u) { return; }
    }
    ctx->pc = 0x483040u;
label_483040:
    // 0x483040: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x483040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_483044:
    // 0x483044: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_483048:
    if (ctx->pc == 0x483048u) {
        ctx->pc = 0x483048u;
            // 0x483048: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x48304Cu;
        goto label_48304c;
    }
    ctx->pc = 0x483044u;
    {
        const bool branch_taken_0x483044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x483044) {
            ctx->pc = 0x483048u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x483044u;
            // 0x483048: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x48307Cu;
            goto label_48307c;
        }
    }
    ctx->pc = 0x48304Cu;
label_48304c:
    // 0x48304c: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x48304cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_483050:
    // 0x483050: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x483050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_483054:
    // 0x483054: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_483058:
    if (ctx->pc == 0x483058u) {
        ctx->pc = 0x48305Cu;
        goto label_48305c;
    }
    ctx->pc = 0x483054u;
    {
        const bool branch_taken_0x483054 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x483054) {
            ctx->pc = 0x483078u;
            goto label_483078;
        }
    }
    ctx->pc = 0x48305Cu;
label_48305c:
    // 0x48305c: 0xc0dc408  jal         func_371020
label_483060:
    if (ctx->pc == 0x483060u) {
        ctx->pc = 0x483060u;
            // 0x483060: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x483064u;
        goto label_483064;
    }
    ctx->pc = 0x48305Cu;
    SET_GPR_U32(ctx, 31, 0x483064u);
    ctx->pc = 0x483060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48305Cu;
            // 0x483060: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483064u; }
        if (ctx->pc != 0x483064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483064u; }
        if (ctx->pc != 0x483064u) { return; }
    }
    ctx->pc = 0x483064u;
label_483064:
    // 0x483064: 0xc0e0824  jal         func_382090
label_483068:
    if (ctx->pc == 0x483068u) {
        ctx->pc = 0x483068u;
            // 0x483068: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48306Cu;
        goto label_48306c;
    }
    ctx->pc = 0x483064u;
    SET_GPR_U32(ctx, 31, 0x48306Cu);
    ctx->pc = 0x483068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x483064u;
            // 0x483068: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382090u;
    if (runtime->hasFunction(0x382090u)) {
        auto targetFn = runtime->lookupFunction(0x382090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48306Cu; }
        if (ctx->pc != 0x48306Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382090_0x382090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48306Cu; }
        if (ctx->pc != 0x48306Cu) { return; }
    }
    ctx->pc = 0x48306Cu;
label_48306c:
    // 0x48306c: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x48306cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_483070:
    // 0x483070: 0xc0e081c  jal         func_382070
label_483074:
    if (ctx->pc == 0x483074u) {
        ctx->pc = 0x483074u;
            // 0x483074: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x483078u;
        goto label_483078;
    }
    ctx->pc = 0x483070u;
    SET_GPR_U32(ctx, 31, 0x483078u);
    ctx->pc = 0x483074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x483070u;
            // 0x483074: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382070u;
    if (runtime->hasFunction(0x382070u)) {
        auto targetFn = runtime->lookupFunction(0x382070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483078u; }
        if (ctx->pc != 0x483078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382070_0x382070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483078u; }
        if (ctx->pc != 0x483078u) { return; }
    }
    ctx->pc = 0x483078u;
label_483078:
    // 0x483078: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x483078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_48307c:
    // 0x48307c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x48307cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_483080:
    // 0x483080: 0xc0e080c  jal         func_382030
label_483084:
    if (ctx->pc == 0x483084u) {
        ctx->pc = 0x483084u;
            // 0x483084: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x483088u;
        goto label_483088;
    }
    ctx->pc = 0x483080u;
    SET_GPR_U32(ctx, 31, 0x483088u);
    ctx->pc = 0x483084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x483080u;
            // 0x483084: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382030u;
    if (runtime->hasFunction(0x382030u)) {
        auto targetFn = runtime->lookupFunction(0x382030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483088u; }
        if (ctx->pc != 0x483088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382030_0x382030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483088u; }
        if (ctx->pc != 0x483088u) { return; }
    }
    ctx->pc = 0x483088u;
label_483088:
    // 0x483088: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x483088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_48308c:
    // 0x48308c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x48308cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_483090:
    // 0x483090: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x483090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_483094:
    // 0x483094: 0xc08914c  jal         func_224530
label_483098:
    if (ctx->pc == 0x483098u) {
        ctx->pc = 0x483098u;
            // 0x483098: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48309Cu;
        goto label_48309c;
    }
    ctx->pc = 0x483094u;
    SET_GPR_U32(ctx, 31, 0x48309Cu);
    ctx->pc = 0x483098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x483094u;
            // 0x483098: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48309Cu; }
        if (ctx->pc != 0x48309Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48309Cu; }
        if (ctx->pc != 0x48309Cu) { return; }
    }
    ctx->pc = 0x48309Cu;
label_48309c:
    // 0x48309c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x48309cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4830a0:
    // 0x4830a0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x4830a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4830a4:
    // 0x4830a4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4830a4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_4830a8:
    // 0x4830a8: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x4830a8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_4830ac:
    // 0x4830ac: 0xc0b6df0  jal         func_2DB7C0
label_4830b0:
    if (ctx->pc == 0x4830B0u) {
        ctx->pc = 0x4830B0u;
            // 0x4830b0: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x4830B4u;
        goto label_4830b4;
    }
    ctx->pc = 0x4830ACu;
    SET_GPR_U32(ctx, 31, 0x4830B4u);
    ctx->pc = 0x4830B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4830ACu;
            // 0x4830b0: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7C0u;
    if (runtime->hasFunction(0x2DB7C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4830B4u; }
        if (ctx->pc != 0x4830B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB7C0_0x2db7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4830B4u; }
        if (ctx->pc != 0x4830B4u) { return; }
    }
    ctx->pc = 0x4830B4u;
label_4830b4:
    // 0x4830b4: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x4830b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4830b8:
    // 0x4830b8: 0xc0e07f8  jal         func_381FE0
label_4830bc:
    if (ctx->pc == 0x4830BCu) {
        ctx->pc = 0x4830BCu;
            // 0x4830bc: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4830C0u;
        goto label_4830c0;
    }
    ctx->pc = 0x4830B8u;
    SET_GPR_U32(ctx, 31, 0x4830C0u);
    ctx->pc = 0x4830BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4830B8u;
            // 0x4830bc: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x381FE0u;
    if (runtime->hasFunction(0x381FE0u)) {
        auto targetFn = runtime->lookupFunction(0x381FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4830C0u; }
        if (ctx->pc != 0x4830C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00381FE0_0x381fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4830C0u; }
        if (ctx->pc != 0x4830C0u) { return; }
    }
    ctx->pc = 0x4830C0u;
label_4830c0:
    // 0x4830c0: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x4830c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_4830c4:
    // 0x4830c4: 0xc0dc3f4  jal         func_370FD0
label_4830c8:
    if (ctx->pc == 0x4830C8u) {
        ctx->pc = 0x4830C8u;
            // 0x4830c8: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4830CCu;
        goto label_4830cc;
    }
    ctx->pc = 0x4830C4u;
    SET_GPR_U32(ctx, 31, 0x4830CCu);
    ctx->pc = 0x4830C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4830C4u;
            // 0x4830c8: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x370FD0u;
    if (runtime->hasFunction(0x370FD0u)) {
        auto targetFn = runtime->lookupFunction(0x370FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4830CCu; }
        if (ctx->pc != 0x4830CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00370FD0_0x370fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4830CCu; }
        if (ctx->pc != 0x4830CCu) { return; }
    }
    ctx->pc = 0x4830CCu;
label_4830cc:
    // 0x4830cc: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x4830ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_4830d0:
    // 0x4830d0: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x4830d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_4830d4:
    // 0x4830d4: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
label_4830d8:
    if (ctx->pc == 0x4830D8u) {
        ctx->pc = 0x4830D8u;
            // 0x4830d8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x4830DCu;
        goto label_4830dc;
    }
    ctx->pc = 0x4830D4u;
    {
        const bool branch_taken_0x4830d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4830d4) {
            ctx->pc = 0x4830D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4830D4u;
            // 0x4830d8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4830F0u;
            goto label_4830f0;
        }
    }
    ctx->pc = 0x4830DCu;
label_4830dc:
    // 0x4830dc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4830dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4830e0:
    // 0x4830e0: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x4830e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_4830e4:
    // 0x4830e4: 0x320f809  jalr        $t9
label_4830e8:
    if (ctx->pc == 0x4830E8u) {
        ctx->pc = 0x4830E8u;
            // 0x4830e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4830ECu;
        goto label_4830ec;
    }
    ctx->pc = 0x4830E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4830ECu);
        ctx->pc = 0x4830E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4830E4u;
            // 0x4830e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4830ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4830ECu; }
            if (ctx->pc != 0x4830ECu) { return; }
        }
        }
    }
    ctx->pc = 0x4830ECu;
label_4830ec:
    // 0x4830ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4830ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4830f0:
    // 0x4830f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4830f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4830f4:
    // 0x4830f4: 0x3e00008  jr          $ra
label_4830f8:
    if (ctx->pc == 0x4830F8u) {
        ctx->pc = 0x4830F8u;
            // 0x4830f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4830FCu;
        goto label_4830fc;
    }
    ctx->pc = 0x4830F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4830F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4830F4u;
            // 0x4830f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4830FCu;
label_4830fc:
    // 0x4830fc: 0x0  nop
    ctx->pc = 0x4830fcu;
    // NOP
label_483100:
    // 0x483100: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x483100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_483104:
    // 0x483104: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x483104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_483108:
    // 0x483108: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x483108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_48310c:
    // 0x48310c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x48310cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_483110:
    // 0x483110: 0x8c8400a0  lw          $a0, 0xA0($a0)
    ctx->pc = 0x483110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
label_483114:
    // 0x483114: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_483118:
    if (ctx->pc == 0x483118u) {
        ctx->pc = 0x483118u;
            // 0x483118: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x48311Cu;
        goto label_48311c;
    }
    ctx->pc = 0x483114u;
    {
        const bool branch_taken_0x483114 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x483114) {
            ctx->pc = 0x483118u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x483114u;
            // 0x483118: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x483130u;
            goto label_483130;
        }
    }
    ctx->pc = 0x48311Cu;
label_48311c:
    // 0x48311c: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x48311cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_483120:
    // 0x483120: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x483120u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_483124:
    // 0x483124: 0x320f809  jalr        $t9
label_483128:
    if (ctx->pc == 0x483128u) {
        ctx->pc = 0x483128u;
            // 0x483128: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x48312Cu;
        goto label_48312c;
    }
    ctx->pc = 0x483124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48312Cu);
        ctx->pc = 0x483128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x483124u;
            // 0x483128: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48312Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48312Cu; }
            if (ctx->pc != 0x48312Cu) { return; }
        }
        }
    }
    ctx->pc = 0x48312Cu;
label_48312c:
    // 0x48312c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x48312cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_483130:
    // 0x483130: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x483130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_483134:
    // 0x483134: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_483138:
    if (ctx->pc == 0x483138u) {
        ctx->pc = 0x483138u;
            // 0x483138: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x48313Cu;
        goto label_48313c;
    }
    ctx->pc = 0x483134u;
    {
        const bool branch_taken_0x483134 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x483134) {
            ctx->pc = 0x483138u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x483134u;
            // 0x483138: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x483150u;
            goto label_483150;
        }
    }
    ctx->pc = 0x48313Cu;
label_48313c:
    // 0x48313c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x48313cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_483140:
    // 0x483140: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x483140u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_483144:
    // 0x483144: 0x320f809  jalr        $t9
label_483148:
    if (ctx->pc == 0x483148u) {
        ctx->pc = 0x483148u;
            // 0x483148: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x48314Cu;
        goto label_48314c;
    }
    ctx->pc = 0x483144u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48314Cu);
        ctx->pc = 0x483148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x483144u;
            // 0x483148: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48314Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48314Cu; }
            if (ctx->pc != 0x48314Cu) { return; }
        }
        }
    }
    ctx->pc = 0x48314Cu;
label_48314c:
    // 0x48314c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x48314cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_483150:
    // 0x483150: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x483150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_483154:
    // 0x483154: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x483154u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_483158:
    // 0x483158: 0x3e00008  jr          $ra
label_48315c:
    if (ctx->pc == 0x48315Cu) {
        ctx->pc = 0x48315Cu;
            // 0x48315c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x483160u;
        goto label_483160;
    }
    ctx->pc = 0x483158u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48315Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x483158u;
            // 0x48315c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x483160u;
label_483160:
    // 0x483160: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x483160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_483164:
    // 0x483164: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x483164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_483168:
    // 0x483168: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x483168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_48316c:
    // 0x48316c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48316cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_483170:
    // 0x483170: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x483170u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_483174:
    // 0x483174: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x483174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_483178:
    // 0x483178: 0xc0892d0  jal         func_224B40
label_48317c:
    if (ctx->pc == 0x48317Cu) {
        ctx->pc = 0x48317Cu;
            // 0x48317c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x483180u;
        goto label_483180;
    }
    ctx->pc = 0x483178u;
    SET_GPR_U32(ctx, 31, 0x483180u);
    ctx->pc = 0x48317Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x483178u;
            // 0x48317c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483180u; }
        if (ctx->pc != 0x483180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483180u; }
        if (ctx->pc != 0x483180u) { return; }
    }
    ctx->pc = 0x483180u;
label_483180:
    // 0x483180: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x483180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_483184:
    // 0x483184: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x483184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_483188:
    // 0x483188: 0x8c427b90  lw          $v0, 0x7B90($v0)
    ctx->pc = 0x483188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31632)));
label_48318c:
    // 0x48318c: 0x8c500060  lw          $s0, 0x60($v0)
    ctx->pc = 0x48318cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_483190:
    // 0x483190: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x483190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_483194:
    // 0x483194: 0xc0b6e68  jal         func_2DB9A0
label_483198:
    if (ctx->pc == 0x483198u) {
        ctx->pc = 0x483198u;
            // 0x483198: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x48319Cu;
        goto label_48319c;
    }
    ctx->pc = 0x483194u;
    SET_GPR_U32(ctx, 31, 0x48319Cu);
    ctx->pc = 0x483198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x483194u;
            // 0x483198: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48319Cu; }
        if (ctx->pc != 0x48319Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48319Cu; }
        if (ctx->pc != 0x48319Cu) { return; }
    }
    ctx->pc = 0x48319Cu;
label_48319c:
    // 0x48319c: 0xc0b6dac  jal         func_2DB6B0
label_4831a0:
    if (ctx->pc == 0x4831A0u) {
        ctx->pc = 0x4831A0u;
            // 0x4831a0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4831A4u;
        goto label_4831a4;
    }
    ctx->pc = 0x48319Cu;
    SET_GPR_U32(ctx, 31, 0x4831A4u);
    ctx->pc = 0x4831A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48319Cu;
            // 0x4831a0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4831A4u; }
        if (ctx->pc != 0x4831A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4831A4u; }
        if (ctx->pc != 0x4831A4u) { return; }
    }
    ctx->pc = 0x4831A4u;
label_4831a4:
    // 0x4831a4: 0xc0cac94  jal         func_32B250
label_4831a8:
    if (ctx->pc == 0x4831A8u) {
        ctx->pc = 0x4831A8u;
            // 0x4831a8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4831ACu;
        goto label_4831ac;
    }
    ctx->pc = 0x4831A4u;
    SET_GPR_U32(ctx, 31, 0x4831ACu);
    ctx->pc = 0x4831A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4831A4u;
            // 0x4831a8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4831ACu; }
        if (ctx->pc != 0x4831ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4831ACu; }
        if (ctx->pc != 0x4831ACu) { return; }
    }
    ctx->pc = 0x4831ACu;
label_4831ac:
    // 0x4831ac: 0xc0cac84  jal         func_32B210
label_4831b0:
    if (ctx->pc == 0x4831B0u) {
        ctx->pc = 0x4831B0u;
            // 0x4831b0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4831B4u;
        goto label_4831b4;
    }
    ctx->pc = 0x4831ACu;
    SET_GPR_U32(ctx, 31, 0x4831B4u);
    ctx->pc = 0x4831B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4831ACu;
            // 0x4831b0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4831B4u; }
        if (ctx->pc != 0x4831B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4831B4u; }
        if (ctx->pc != 0x4831B4u) { return; }
    }
    ctx->pc = 0x4831B4u;
label_4831b4:
    // 0x4831b4: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x4831b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_4831b8:
    // 0x4831b8: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x4831b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_4831bc:
    // 0x4831bc: 0xc44cc918  lwc1        $f12, -0x36E8($v0)
    ctx->pc = 0x4831bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4831c0:
    // 0x4831c0: 0xc0a5a68  jal         func_2969A0
label_4831c4:
    if (ctx->pc == 0x4831C4u) {
        ctx->pc = 0x4831C4u;
            // 0x4831c4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4831C8u;
        goto label_4831c8;
    }
    ctx->pc = 0x4831C0u;
    SET_GPR_U32(ctx, 31, 0x4831C8u);
    ctx->pc = 0x4831C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4831C0u;
            // 0x4831c4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4831C8u; }
        if (ctx->pc != 0x4831C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4831C8u; }
        if (ctx->pc != 0x4831C8u) { return; }
    }
    ctx->pc = 0x4831C8u;
label_4831c8:
    // 0x4831c8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4831c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4831cc:
    // 0x4831cc: 0x3c0a43fa  lui         $t2, 0x43FA
    ctx->pc = 0x4831ccu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17402 << 16));
label_4831d0:
    // 0x4831d0: 0x8c427b90  lw          $v0, 0x7B90($v0)
    ctx->pc = 0x4831d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31632)));
label_4831d4:
    // 0x4831d4: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x4831d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4831d8:
    // 0x4831d8: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x4831d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4831dc:
    // 0x4831dc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x4831dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4831e0:
    // 0x4831e0: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x4831e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4831e4:
    // 0x4831e4: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x4831e4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
label_4831e8:
    // 0x4831e8: 0x8c460060  lw          $a2, 0x60($v0)
    ctx->pc = 0x4831e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_4831ec:
    // 0x4831ec: 0xc7a70090  lwc1        $f7, 0x90($sp)
    ctx->pc = 0x4831ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_4831f0:
    // 0x4831f0: 0xc7a60094  lwc1        $f6, 0x94($sp)
    ctx->pc = 0x4831f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_4831f4:
    // 0x4831f4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x4831f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4831f8:
    // 0x4831f8: 0xc7a50098  lwc1        $f5, 0x98($sp)
    ctx->pc = 0x4831f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_4831fc:
    // 0x4831fc: 0x24030180  addiu       $v1, $zero, 0x180
    ctx->pc = 0x4831fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_483200:
    // 0x483200: 0xafa600c4  sw          $a2, 0xC4($sp)
    ctx->pc = 0x483200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 6));
label_483204:
    // 0x483204: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x483204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_483208:
    // 0x483208: 0xc62a0018  lwc1        $f10, 0x18($s1)
    ctx->pc = 0x483208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_48320c:
    // 0x48320c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x48320cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_483210:
    // 0x483210: 0xc6290014  lwc1        $f9, 0x14($s1)
    ctx->pc = 0x483210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_483214:
    // 0x483214: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x483214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_483218:
    // 0x483218: 0xc6280010  lwc1        $f8, 0x10($s1)
    ctx->pc = 0x483218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_48321c:
    // 0x48321c: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x48321cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_483220:
    // 0x483220: 0xc7a4009c  lwc1        $f4, 0x9C($sp)
    ctx->pc = 0x483220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_483224:
    // 0x483224: 0xc7a300a0  lwc1        $f3, 0xA0($sp)
    ctx->pc = 0x483224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_483228:
    // 0x483228: 0xe7a20124  swc1        $f2, 0x124($sp)
    ctx->pc = 0x483228u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_48322c:
    // 0x48322c: 0xafaa0168  sw          $t2, 0x168($sp)
    ctx->pc = 0x48322cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 10));
label_483230:
    // 0x483230: 0xe7a10128  swc1        $f1, 0x128($sp)
    ctx->pc = 0x483230u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_483234:
    // 0x483234: 0xa3a90170  sb          $t1, 0x170($sp)
    ctx->pc = 0x483234u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 368), (uint8_t)GPR_U32(ctx, 9));
label_483238:
    // 0x483238: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x483238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_48323c:
    // 0x48323c: 0xafa8016c  sw          $t0, 0x16C($sp)
    ctx->pc = 0x48323cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 8));
label_483240:
    // 0x483240: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x483240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_483244:
    // 0x483244: 0xa3a70172  sb          $a3, 0x172($sp)
    ctx->pc = 0x483244u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 370), (uint8_t)GPR_U32(ctx, 7));
label_483248:
    // 0x483248: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x483248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48324c:
    // 0x48324c: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x48324cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_483250:
    // 0x483250: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x483250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_483254:
    // 0x483254: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x483254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_483258:
    // 0x483258: 0xe7a20130  swc1        $f2, 0x130($sp)
    ctx->pc = 0x483258u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_48325c:
    // 0x48325c: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x48325cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_483260:
    // 0x483260: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x483260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_483264:
    // 0x483264: 0xc7a200bc  lwc1        $f2, 0xBC($sp)
    ctx->pc = 0x483264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_483268:
    // 0x483268: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x483268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48326c:
    // 0x48326c: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x48326cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_483270:
    // 0x483270: 0xe7a2013c  swc1        $f2, 0x13C($sp)
    ctx->pc = 0x483270u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_483274:
    // 0x483274: 0xe7a10140  swc1        $f1, 0x140($sp)
    ctx->pc = 0x483274u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_483278:
    // 0x483278: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x483278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_48327c:
    // 0x48327c: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x48327cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_483280:
    // 0x483280: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x483280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_483284:
    // 0x483284: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x483284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_483288:
    // 0x483288: 0xe7a800d0  swc1        $f8, 0xD0($sp)
    ctx->pc = 0x483288u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_48328c:
    // 0x48328c: 0xe7a900d4  swc1        $f9, 0xD4($sp)
    ctx->pc = 0x48328cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_483290:
    // 0x483290: 0xe7aa00d8  swc1        $f10, 0xD8($sp)
    ctx->pc = 0x483290u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_483294:
    // 0x483294: 0xe7a70110  swc1        $f7, 0x110($sp)
    ctx->pc = 0x483294u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_483298:
    // 0x483298: 0xe7a60114  swc1        $f6, 0x114($sp)
    ctx->pc = 0x483298u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_48329c:
    // 0x48329c: 0xe7a50118  swc1        $f5, 0x118($sp)
    ctx->pc = 0x48329cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_4832a0:
    // 0x4832a0: 0xe7a4011c  swc1        $f4, 0x11C($sp)
    ctx->pc = 0x4832a0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_4832a4:
    // 0x4832a4: 0xe7a30120  swc1        $f3, 0x120($sp)
    ctx->pc = 0x4832a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_4832a8:
    // 0x4832a8: 0xe7a20148  swc1        $f2, 0x148($sp)
    ctx->pc = 0x4832a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_4832ac:
    // 0x4832ac: 0xe7a1014c  swc1        $f1, 0x14C($sp)
    ctx->pc = 0x4832acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_4832b0:
    // 0x4832b0: 0xc0a7a88  jal         func_29EA20
label_4832b4:
    if (ctx->pc == 0x4832B4u) {
        ctx->pc = 0x4832B4u;
            // 0x4832b4: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->pc = 0x4832B8u;
        goto label_4832b8;
    }
    ctx->pc = 0x4832B0u;
    SET_GPR_U32(ctx, 31, 0x4832B8u);
    ctx->pc = 0x4832B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4832B0u;
            // 0x4832b4: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4832B8u; }
        if (ctx->pc != 0x4832B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4832B8u; }
        if (ctx->pc != 0x4832B8u) { return; }
    }
    ctx->pc = 0x4832B8u;
label_4832b8:
    // 0x4832b8: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x4832b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_4832bc:
    // 0x4832bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4832bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4832c0:
    // 0x4832c0: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_4832c4:
    if (ctx->pc == 0x4832C4u) {
        ctx->pc = 0x4832C4u;
            // 0x4832c4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4832C8u;
        goto label_4832c8;
    }
    ctx->pc = 0x4832C0u;
    {
        const bool branch_taken_0x4832c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4832C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4832C0u;
            // 0x4832c4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4832c0) {
            ctx->pc = 0x483310u;
            goto label_483310;
        }
    }
    ctx->pc = 0x4832C8u;
label_4832c8:
    // 0x4832c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4832c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4832cc:
    // 0x4832cc: 0xc088ef4  jal         func_223BD0
label_4832d0:
    if (ctx->pc == 0x4832D0u) {
        ctx->pc = 0x4832D0u;
            // 0x4832d0: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x4832D4u;
        goto label_4832d4;
    }
    ctx->pc = 0x4832CCu;
    SET_GPR_U32(ctx, 31, 0x4832D4u);
    ctx->pc = 0x4832D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4832CCu;
            // 0x4832d0: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4832D4u; }
        if (ctx->pc != 0x4832D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4832D4u; }
        if (ctx->pc != 0x4832D4u) { return; }
    }
    ctx->pc = 0x4832D4u;
label_4832d4:
    // 0x4832d4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4832d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4832d8:
    // 0x4832d8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4832d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4832dc:
    // 0x4832dc: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x4832dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_4832e0:
    // 0x4832e0: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x4832e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_4832e4:
    // 0x4832e4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4832e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4832e8:
    // 0x4832e8: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x4832e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_4832ec:
    // 0x4832ec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4832ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4832f0:
    // 0x4832f0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4832f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4832f4:
    // 0x4832f4: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x4832f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_4832f8:
    // 0x4832f8: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x4832f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_4832fc:
    // 0x4832fc: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x4832fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_483300:
    // 0x483300: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x483300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_483304:
    // 0x483304: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x483304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_483308:
    // 0x483308: 0xc088b38  jal         func_222CE0
label_48330c:
    if (ctx->pc == 0x48330Cu) {
        ctx->pc = 0x48330Cu;
            // 0x48330c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x483310u;
        goto label_483310;
    }
    ctx->pc = 0x483308u;
    SET_GPR_U32(ctx, 31, 0x483310u);
    ctx->pc = 0x48330Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x483308u;
            // 0x48330c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483310u; }
        if (ctx->pc != 0x483310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483310u; }
        if (ctx->pc != 0x483310u) { return; }
    }
    ctx->pc = 0x483310u;
label_483310:
    // 0x483310: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x483310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_483314:
    // 0x483314: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x483314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_483318:
    // 0x483318: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x483318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48331c:
    // 0x48331c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x48331cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_483320:
    // 0x483320: 0xc08914c  jal         func_224530
label_483324:
    if (ctx->pc == 0x483324u) {
        ctx->pc = 0x483324u;
            // 0x483324: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->pc = 0x483328u;
        goto label_483328;
    }
    ctx->pc = 0x483320u;
    SET_GPR_U32(ctx, 31, 0x483328u);
    ctx->pc = 0x483324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x483320u;
            // 0x483324: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483328u; }
        if (ctx->pc != 0x483328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483328u; }
        if (ctx->pc != 0x483328u) { return; }
    }
    ctx->pc = 0x483328u;
label_483328:
    // 0x483328: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x483328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_48332c:
    // 0x48332c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x48332cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_483330:
    // 0x483330: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x483330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_483334:
    // 0x483334: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x483334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_483338:
    // 0x483338: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x483338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_48333c:
    // 0x48333c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x48333cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_483340:
    // 0x483340: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x483340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_483344:
    // 0x483344: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x483344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_483348:
    // 0x483348: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x483348u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_48334c:
    // 0x48334c: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x48334cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_483350:
    // 0x483350: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x483350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_483354:
    // 0x483354: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x483354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_483358:
    // 0x483358: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x483358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48335c:
    // 0x48335c: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x48335cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_483360:
    // 0x483360: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x483360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_483364:
    // 0x483364: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x483364u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_483368:
    // 0x483368: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x483368u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_48336c:
    // 0x48336c: 0xc0892b0  jal         func_224AC0
label_483370:
    if (ctx->pc == 0x483370u) {
        ctx->pc = 0x483370u;
            // 0x483370: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x483374u;
        goto label_483374;
    }
    ctx->pc = 0x48336Cu;
    SET_GPR_U32(ctx, 31, 0x483374u);
    ctx->pc = 0x483370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48336Cu;
            // 0x483370: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483374u; }
        if (ctx->pc != 0x483374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483374u; }
        if (ctx->pc != 0x483374u) { return; }
    }
    ctx->pc = 0x483374u;
label_483374:
    // 0x483374: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x483374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_483378:
    // 0x483378: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x483378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_48337c:
    // 0x48337c: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x48337cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_483380:
    // 0x483380: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x483380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_483384:
    // 0x483384: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x483384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_483388:
    // 0x483388: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x483388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_48338c:
    // 0x48338c: 0xc0891d8  jal         func_224760
label_483390:
    if (ctx->pc == 0x483390u) {
        ctx->pc = 0x483390u;
            // 0x483390: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x483394u;
        goto label_483394;
    }
    ctx->pc = 0x48338Cu;
    SET_GPR_U32(ctx, 31, 0x483394u);
    ctx->pc = 0x483390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48338Cu;
            // 0x483390: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483394u; }
        if (ctx->pc != 0x483394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483394u; }
        if (ctx->pc != 0x483394u) { return; }
    }
    ctx->pc = 0x483394u;
label_483394:
    // 0x483394: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x483394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_483398:
    // 0x483398: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x483398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_48339c:
    // 0x48339c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x48339cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4833a0:
    // 0x4833a0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4833a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4833a4:
    // 0x4833a4: 0xc08c164  jal         func_230590
label_4833a8:
    if (ctx->pc == 0x4833A8u) {
        ctx->pc = 0x4833A8u;
            // 0x4833a8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4833ACu;
        goto label_4833ac;
    }
    ctx->pc = 0x4833A4u;
    SET_GPR_U32(ctx, 31, 0x4833ACu);
    ctx->pc = 0x4833A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4833A4u;
            // 0x4833a8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4833ACu; }
        if (ctx->pc != 0x4833ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4833ACu; }
        if (ctx->pc != 0x4833ACu) { return; }
    }
    ctx->pc = 0x4833ACu;
label_4833ac:
    // 0x4833ac: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x4833acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_4833b0:
    // 0x4833b0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4833b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4833b4:
    // 0x4833b4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4833b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4833b8:
    // 0x4833b8: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x4833b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4833bc:
    // 0x4833bc: 0xc0a7a88  jal         func_29EA20
label_4833c0:
    if (ctx->pc == 0x4833C0u) {
        ctx->pc = 0x4833C0u;
            // 0x4833c0: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x4833C4u;
        goto label_4833c4;
    }
    ctx->pc = 0x4833BCu;
    SET_GPR_U32(ctx, 31, 0x4833C4u);
    ctx->pc = 0x4833C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4833BCu;
            // 0x4833c0: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4833C4u; }
        if (ctx->pc != 0x4833C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4833C4u; }
        if (ctx->pc != 0x4833C4u) { return; }
    }
    ctx->pc = 0x4833C4u;
label_4833c4:
    // 0x4833c4: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x4833c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4833c8:
    // 0x4833c8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4833c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4833cc:
    // 0x4833cc: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_4833d0:
    if (ctx->pc == 0x4833D0u) {
        ctx->pc = 0x4833D0u;
            // 0x4833d0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4833D4u;
        goto label_4833d4;
    }
    ctx->pc = 0x4833CCu;
    {
        const bool branch_taken_0x4833cc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4833D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4833CCu;
            // 0x4833d0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4833cc) {
            ctx->pc = 0x4833F0u;
            goto label_4833f0;
        }
    }
    ctx->pc = 0x4833D4u;
label_4833d4:
    // 0x4833d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4833d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4833d8:
    // 0x4833d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4833d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4833dc:
    // 0x4833dc: 0xc0869d0  jal         func_21A740
label_4833e0:
    if (ctx->pc == 0x4833E0u) {
        ctx->pc = 0x4833E0u;
            // 0x4833e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4833E4u;
        goto label_4833e4;
    }
    ctx->pc = 0x4833DCu;
    SET_GPR_U32(ctx, 31, 0x4833E4u);
    ctx->pc = 0x4833E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4833DCu;
            // 0x4833e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4833E4u; }
        if (ctx->pc != 0x4833E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4833E4u; }
        if (ctx->pc != 0x4833E4u) { return; }
    }
    ctx->pc = 0x4833E4u;
label_4833e4:
    // 0x4833e4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4833e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4833e8:
    // 0x4833e8: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x4833e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_4833ec:
    // 0x4833ec: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4833ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_4833f0:
    // 0x4833f0: 0xae120210  sw          $s2, 0x210($s0)
    ctx->pc = 0x4833f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 18));
label_4833f4:
    // 0x4833f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4833f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4833f8:
    // 0x4833f8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4833f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4833fc:
    // 0x4833fc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4833fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_483400:
    // 0x483400: 0xc08c650  jal         func_231940
label_483404:
    if (ctx->pc == 0x483404u) {
        ctx->pc = 0x483404u;
            // 0x483404: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x483408u;
        goto label_483408;
    }
    ctx->pc = 0x483400u;
    SET_GPR_U32(ctx, 31, 0x483408u);
    ctx->pc = 0x483404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x483400u;
            // 0x483404: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483408u; }
        if (ctx->pc != 0x483408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483408u; }
        if (ctx->pc != 0x483408u) { return; }
    }
    ctx->pc = 0x483408u;
label_483408:
    // 0x483408: 0xc040180  jal         func_100600
label_48340c:
    if (ctx->pc == 0x48340Cu) {
        ctx->pc = 0x48340Cu;
            // 0x48340c: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x483410u;
        goto label_483410;
    }
    ctx->pc = 0x483408u;
    SET_GPR_U32(ctx, 31, 0x483410u);
    ctx->pc = 0x48340Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x483408u;
            // 0x48340c: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483410u; }
        if (ctx->pc != 0x483410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x483410u; }
        if (ctx->pc != 0x483410u) { return; }
    }
    ctx->pc = 0x483410u;
label_483410:
    // 0x483410: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_483414:
    if (ctx->pc == 0x483414u) {
        ctx->pc = 0x483414u;
            // 0x483414: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->pc = 0x483418u;
        goto label_483418;
    }
    ctx->pc = 0x483410u;
    {
        const bool branch_taken_0x483410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x483410) {
            ctx->pc = 0x483414u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x483410u;
            // 0x483414: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x483460u;
            goto label_483460;
        }
    }
    ctx->pc = 0x483418u;
label_483418:
    // 0x483418: 0x8e260050  lw          $a2, 0x50($s1)
    ctx->pc = 0x483418u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_48341c:
    // 0x48341c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x48341cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_483420:
    // 0x483420: 0x24a521e0  addiu       $a1, $a1, 0x21E0
    ctx->pc = 0x483420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8672));
label_483424:
    // 0x483424: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x483424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_483428:
    // 0x483428: 0x3c04c000  lui         $a0, 0xC000
    ctx->pc = 0x483428u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
label_48342c:
    // 0x48342c: 0x2463fb30  addiu       $v1, $v1, -0x4D0
    ctx->pc = 0x48342cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966064));
label_483430:
    // 0x483430: 0xac450048  sw          $a1, 0x48($v0)
    ctx->pc = 0x483430u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 5));
label_483434:
    // 0x483434: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x483434u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_483438:
    // 0x483438: 0xac460024  sw          $a2, 0x24($v0)
    ctx->pc = 0x483438u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 6));
label_48343c:
    // 0x48343c: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x48343cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
label_483440:
    // 0x483440: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x483440u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_483444:
    // 0x483444: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x483444u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_483448:
    // 0x483448: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x483448u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_48344c:
    // 0x48344c: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x48344cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_483450:
    // 0x483450: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x483450u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
label_483454:
    // 0x483454: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x483454u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_483458:
    // 0x483458: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x483458u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
label_48345c:
    // 0x48345c: 0xae2200a0  sw          $v0, 0xA0($s1)
    ctx->pc = 0x48345cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
label_483460:
    // 0x483460: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x483460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_483464:
    // 0x483464: 0x8e2900b0  lw          $t1, 0xB0($s1)
    ctx->pc = 0x483464u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_483468:
    // 0x483468: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x483468u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48346c:
    // 0x48346c: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x48346cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_483470:
    // 0x483470: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x483470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_483474:
    // 0x483474: 0x3c0541f0  lui         $a1, 0x41F0
    ctx->pc = 0x483474u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16880 << 16));
label_483478:
    // 0x483478: 0x3c044334  lui         $a0, 0x4334
    ctx->pc = 0x483478u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17204 << 16));
label_48347c:
    // 0x48347c: 0x1234824  and         $t1, $t1, $v1
    ctx->pc = 0x48347cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
label_483480:
    // 0x483480: 0x35290004  ori         $t1, $t1, 0x4
    ctx->pc = 0x483480u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)4);
label_483484:
    // 0x483484: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x483484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_483488:
    // 0x483488: 0xae2900b0  sw          $t1, 0xB0($s1)
    ctx->pc = 0x483488u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 9));
label_48348c:
    // 0x48348c: 0xa2280064  sb          $t0, 0x64($s1)
    ctx->pc = 0x48348cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 100), (uint8_t)GPR_U32(ctx, 8));
label_483490:
    // 0x483490: 0xa2200065  sb          $zero, 0x65($s1)
    ctx->pc = 0x483490u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 101), (uint8_t)GPR_U32(ctx, 0));
label_483494:
    // 0x483494: 0xa2200068  sb          $zero, 0x68($s1)
    ctx->pc = 0x483494u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 104), (uint8_t)GPR_U32(ctx, 0));
label_483498:
    // 0x483498: 0xa2270069  sb          $a3, 0x69($s1)
    ctx->pc = 0x483498u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 105), (uint8_t)GPR_U32(ctx, 7));
label_48349c:
    // 0x48349c: 0xa220006a  sb          $zero, 0x6A($s1)
    ctx->pc = 0x48349cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 106), (uint8_t)GPR_U32(ctx, 0));
label_4834a0:
    // 0x4834a0: 0xa228006b  sb          $t0, 0x6B($s1)
    ctx->pc = 0x4834a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 107), (uint8_t)GPR_U32(ctx, 8));
label_4834a4:
    // 0x4834a4: 0xa2260066  sb          $a2, 0x66($s1)
    ctx->pc = 0x4834a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 102), (uint8_t)GPR_U32(ctx, 6));
label_4834a8:
    // 0x4834a8: 0xa2280067  sb          $t0, 0x67($s1)
    ctx->pc = 0x4834a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 103), (uint8_t)GPR_U32(ctx, 8));
label_4834ac:
    // 0x4834ac: 0xae28008c  sw          $t0, 0x8C($s1)
    ctx->pc = 0x4834acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 8));
label_4834b0:
    // 0x4834b0: 0xae250070  sw          $a1, 0x70($s1)
    ctx->pc = 0x4834b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 5));
label_4834b4:
    // 0x4834b4: 0xae240078  sw          $a0, 0x78($s1)
    ctx->pc = 0x4834b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 4));
label_4834b8:
    // 0x4834b8: 0xae230080  sw          $v1, 0x80($s1)
    ctx->pc = 0x4834b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 3));
label_4834bc:
    // 0x4834bc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4834bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4834c0:
    // 0x4834c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4834c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4834c4:
    // 0x4834c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4834c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4834c8:
    // 0x4834c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4834c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4834cc:
    // 0x4834cc: 0x3e00008  jr          $ra
label_4834d0:
    if (ctx->pc == 0x4834D0u) {
        ctx->pc = 0x4834D0u;
            // 0x4834d0: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x4834D4u;
        goto label_4834d4;
    }
    ctx->pc = 0x4834CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4834D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4834CCu;
            // 0x4834d0: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4834D4u;
label_4834d4:
    // 0x4834d4: 0x0  nop
    ctx->pc = 0x4834d4u;
    // NOP
label_4834d8:
    // 0x4834d8: 0x0  nop
    ctx->pc = 0x4834d8u;
    // NOP
label_4834dc:
    // 0x4834dc: 0x0  nop
    ctx->pc = 0x4834dcu;
    // NOP
}
